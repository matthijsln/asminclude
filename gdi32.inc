%ifndef __GDI32_INC
%define __GDI32_INC

%include "macros.inc"

stdcall_extern	CreateDIBSection, 6
stdcall_extern	DeleteObject, 1
stdcall_extern	CreateCompatibleDC, 1
stdcall_extern	SelectObject, 2
stdcall_extern	BitBlt, 9
stdcall_extern	DeleteDC, 1
stdcall_extern	StretchBlt, 11
stdcall_extern	GetStockObject, 1
stdcall_extern	GetDeviceCaps, 2
stdcall_extern	CreateFontIndirectA, 1
stdcall_extern	CreateCompatibleBitmap, 3
stdcall_extern	CreateBitmap, 5
stdcall_extern	Rectangle, 5
stdcall_extern	BeginPaint, 2
stdcall_extern	EndPaint, 2
stdcall_extern	CreatePalette, 1
stdcall_extern	SelectPalette, 3
stdcall_extern	TextOutA, 5

%endif; __GDI32_INC