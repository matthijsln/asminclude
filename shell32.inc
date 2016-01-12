%ifndef __SHELL32_INC
%define __SHELL32_INC

%include "macros.inc"

stdcall_extern  ShellExecuteA, 6
stdcall_extern	DragQueryFile, 4

%endif; __SHELL32_INC