%ifndef __COMDLG32_INC
%define __COMDLG32_INC

%include "macros.inc"

stdcall_extern	GetOpenFileNameA, 1
stdcall_extern	GetSaveFileNameA, 1
stdcall_extern	ChooseColorA, 1

%endif; __COMDLG32_INC