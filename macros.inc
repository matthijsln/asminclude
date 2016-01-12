; NASM utility macros
; Copyright (C) 2002 Matthijs Laan <matthijsln@xs4all.nl>

%ifndef __MACROS_INC
%define __MACROS_INC

%define CR 13
%define LF 10
%define CRLF CR, LF

; import a __stdcall function from a Microsoft .lib
; example: stdcall_extern MessageBoxA, 4    ; 4 dword parameters
%macro stdcall_extern 2
  %assign stdcall_extern_x (%2) * 4
  do_stdcall_extern %1, stdcall_extern_x
%endmacro

%macro do_stdcall_extern 2
  extern __imp__%1@%2
  %define %1 __imp__%1@%2
%endmacro

; import a __cdecl function from a Microsoft .lib
%macro cdecl_extern 1
  extern __imp__%1
  %define %1 __imp__%1
%endmacro


; invoke a stdcall (right to left) function
%macro invoke 1-*
; %1	ptr to function
; [%2+]	args
  %rep %0-1
    %rotate -1
	push	%1
  %endrep
  %rotate -1
	call	dword [%1]
%endmacro

; invoke a cdecl (right to left) function (no indirection)
%macro invokec 1-*
; %1	ptr to function
; [%2+]	args
  %rep %0-1
    %rotate -1
	push	%1
  %endrep
  %rotate -1
	call	%1
	add	esp, (%0 - 1) * 4
%endmacro

; invoke a stdcall interface method
%macro invokeintf 2-*
; %1	vtable ptr (reg)
; %2 	vtable offset (reg/const)
; %3	object ptr
; [%3+] args
; right to left stdcall
  %rep %0-2
    %rotate -1
    push %1
  %endrep
  %rotate -2
  call dword [%1 + %2]
%endmacro

; define a string and the end and size of it
%macro string 2+
%1		db	%2
%1_end:
%1_size		equ	%1_end - %1
%endmacro

%endif; __MACROS_INC