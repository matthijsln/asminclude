%ifndef __DEBUG_INC
%define __DEBUG_INC

%ifdef DEBUG

%include "user32.inc"
%include "kernel32.inc"

[section .bss]
showreg_str	resb	34
__SECT__

%macro showreg 1-2 10
%include "libc.inc"

		push	byte %2
		push	dword showreg_str
		push	%1
		call	__itoa
		add	esp, 3 * 4
		mov	eax, showreg_str
		jmp	ShowFinalMessage
%endmacro

%endif; DEBUG

%ifdef ERROR_CHECKS
[section .bss]
linenumstr	resd 1
__SECT__
%endif

%macro checkerror 3
; check for error
; if ERROR_CHECKS is not defined, this expands to nothing (no checking)
; %1 statement to set flags, i.e. "test eax, eax" or something
; %2 condition code - if this is true an error is reported
; %3 ptr to error message string
%ifdef ERROR_CHECKS
[section .data]
%%file		db __FILE__
%%file_end:
__SECT__
		%1
		j%-2	short %%ok

		push	dword %3_size
		push	dword %3
		push	dword __LINE__
		push	dword %%file
		push	dword %%file_end - %%file

		jmp	ShowErrorMessage
%%ok:
%endif
%endmacro

%ifdef ERROR_CHECKS

%include "libc.inc"

%define align_dword(s) ((s+3) & ~11b)

[section .code]
ShowErrorMessage:
; [ebp   ]: length of filename
; [ebp+ 4]: ptr to filename
; [ebp+ 8]: line number
; [ebp+12]: ptr to error msg
; [ebp+16]: error msg size

		mov	ebp, esp

		; calc the size of our entire error string

		mov	ebx, [ebp+16]		; length of error msg

		; 2 for '; '
		; 1 for ':'
		; 4 is for the line number
		; 3 for aligning to 4 bytes, like align_dword
		; 1 is for the zero terminator
		add	ebx, 2 + 1 + 4 + 3 + 1
		add	ebx, [ebp]
		and	ebx, ~11b
		sub	esp, ebx

		; start building the string
		mov	edi, esp

		mov	esi, [ebp+12]
		mov	ecx, [ebp+16]
		rep	movsb

		mov	word [edi], '; '
		inc	edi
		inc	edi

		mov	esi, [ebp+4]
		mov	ecx, [ebp]
		rep	movsb

		mov	byte [edi], ':'
		inc	edi

		push	byte 10
		;push	edi			; doesn't work... weird!
		push	dword linenumstr
		push	dword [ebp+8]
		call	__itoa
		add	esp, 3 * 4

		mov	esi, linenumstr
		mov	ecx, 4
		rep	movsb

		mov	eax, esp
		;jmp	ShowFinalMessage

ShowFinalMessage:
		mov	ebx, dword [hwnd]
		invoke 	MessageBoxA, ebx, eax, dword window_title, byte 0
		invoke	ExitProcess, dword -1
__SECT__
%endif; ERROR_CHECKS

%endif; __DEBUG_INC