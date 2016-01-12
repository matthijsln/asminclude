%ifndef __USER32_INC
%define __USER32_INC

%include "macros.inc"

stdcall_extern	MessageBeep, 1

stdcall_extern	SetClassLongA, 3

stdcall_extern  PostQuitMessage, 1

stdcall_extern  CreateWindowExA, 12
stdcall_extern  RegisterClassA, 1
stdcall_extern  DefWindowProcA, 4
stdcall_extern  ShowWindow, 2
stdcall_extern  GetMessageA, 4
stdcall_extern	DispatchMessageA, 1
stdcall_extern	SetWindowLongA, 3
stdcall_extern	AdjustWindowRectEx, 4
stdcall_extern	GetClientRect, 2
stdcall_extern	SetWindowPos, 7
stdcall_extern	GetWindowRect, 2
stdcall_extern	GetDesktopWindow, 0
stdcall_extern	GetForegroundWindow, 0
stdcall_extern	MessageBoxA, 4
stdcall_extern	ClientToScreen, 2
stdcall_extern	GetSystemMetrics, 1
stdcall_extern	PeekMessageA, 5
stdcall_extern	SetCursor, 1
stdcall_extern	SendMessageA, 4
stdcall_extern	PostMessageA, 4

stdcall_extern	DialogBoxParamA, 5
stdcall_extern	EndDialog, 2
stdcall_extern	GetDlgItem, 2
stdcall_extern	CheckDlgButton, 3
stdcall_extern	IsDlgButtonChecked, 2

stdcall_extern	LoadIconA, 2
stdcall_extern	LoadCursorA, 2
stdcall_extern	DrawIconEx, 9
stdcall_extern	DestroyIcon, 1
stdcall_extern	LoadImageA, 6
stdcall_extern	RedrawWindow, 4
stdcall_extern	FillRect, 3
stdcall_extern	GetDC, 1
stdcall_extern	ReleaseDC, 2

stdcall_extern	OpenClipboard, 1
stdcall_extern	SetClipboardData, 2
stdcall_extern	CloseClipboard, 0
stdcall_extern	EmptyClipboard, 0

cdecl_extern wsprintfA

stdcall_extern	FindWindowA, 2

stdcall_extern	SetTimer, 4

stdcall_extern	GetActiveWindow, 0
stdcall_extern	SetActiveWindow, 1
stdcall_extern	SetFocus, 1
stdcall_extern	SetForegroundWindow, 1

stdcall_extern	ReleaseCapture, 0

stdcall_extern	LoadMenuA, 2
stdcall_extern	TrackPopupMenu, 7
stdcall_extern	GetSubMenu, 2
stdcall_extern	CheckMenuItem, 3
stdcall_extern	EnableMenuItem, 3

stdcall_extern	MoveWindow, 6

stdcall_extern	GetWindowLongA, 2

stdcall_extern	PostThreadMessageA, 4
stdcall_extern	SetWindowTextA, 2


%endif; __USER32_INC