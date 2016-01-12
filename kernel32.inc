%ifndef __KERNEL32_INC
%define __KERNEL32_INC

%include "macros.inc"

stdcall_extern	GetModuleHandleA, 1

stdcall_extern	lstrcpynA, 3
stdcall_extern	lstrlenA, 1
stdcall_extern	lstrcpyA, 2

stdcall_extern	VirtualAlloc, 4
stdcall_extern	LocalFree, 1
stdcall_extern	GlobalAlloc, 2
stdcall_extern	VirtualFree, 3

stdcall_extern	GetLastError, 0
stdcall_extern	SetLastError, 1
stdcall_extern	FormatMessageA, 7

stdcall_extern	CreateProcessA, 10
stdcall_extern	WaitForSingleObject, 2
stdcall_extern	SetUnhandledExceptionFilter, 1

stdcall_extern	GetStdHandle, 1
stdcall_extern	WriteConsoleA, 5
stdcall_extern	SetConsoleTextAttribute, 2
stdcall_extern	ReadConsoleA, 5
stdcall_extern	SetConsoleMode, 2

stdcall_extern	CreateFileA, 7
stdcall_extern	CloseHandle, 1
stdcall_extern	GetFileSize, 2
stdcall_extern	SetFilePointer, 4
stdcall_extern	ReadFile, 5
stdcall_extern	CopyFileA, 3
stdcall_extern	WriteFile, 5

stdcall_extern	ExitProcess, 1
stdcall_extern	Sleep, 1

stdcall_extern	CreateThread, 6

stdcall_extern	GetPrivateProfileIntA, 4
stdcall_extern	WritePrivateProfileStringA, 4

stdcall_extern	GlobalLock, 1
stdcall_extern	GlobalUnlock, 1

stdcall_extern	LoadLibraryA, 1
stdcall_extern	GetProcAddress, 2

stdcall_extern	GetTickCount, 0

stdcall_extern	Beep, 2

%endif; __KERNEL32_INC