%ifndef __WIN32_INC
%define __WIN32_INC

CC_RGBINIT               	equ	0x00000001
CC_FULLOPEN              	equ	0x00000002
CC_PREVENTFULLOPEN       	equ	0x00000004
CC_SHOWHELP              	equ	0x00000008
CC_ENABLEHOOK            	equ	0x00000010
CC_ENABLETEMPLATE        	equ	0x00000020
CC_ENABLETEMPLATEHANDLE  	equ	0x00000040
CC_SOLIDCOLOR            	equ	0x00000080
CC_ANYCOLOR              	equ	0x00000100

struc CHOOSECOLOR
	.lStructSize	resd 1
	.hwndOwner	resd 1
	.hInstance	resd 1
	.rgbResult	resd 1
	.lpCustColors	resd 1
	.Flags		resd 1
	.lCustData	resd 1
	.lpfnHook	resd 1
	.lpTemplateName	resd 1
endstruc

; Menu flags for Add/Check/EnableMenuItem()
MF_INSERT           	equ	0x00000000
MF_CHANGE           	equ	0x00000080
MF_APPEND           	equ	0x00000100
MF_DELETE           	equ	0x00000200
MF_REMOVE           	equ	0x00001000

MF_BYCOMMAND        	equ	0x00000000
MF_BYPOSITION       	equ	0x00000400

MF_SEPARATOR        	equ	0x00000800

MF_ENABLED          	equ	0x00000000
MF_GRAYED           	equ	0x00000001
MF_DISABLED         	equ	0x00000002

MF_UNCHECKED        	equ	0x00000000
MF_CHECKED          	equ	0x00000008
MF_USECHECKBITMAPS  	equ	0x00000200

MF_STRING           	equ	0x00000000
MF_BITMAP           	equ	0x00000004
MF_OWNERDRAW        	equ	0x00000100

MF_POPUP            	equ	0x00000010
MF_MENUBARBREAK     	equ	0x00000020
MF_MENUBREAK        	equ	0x00000040

MF_UNHILITE         	equ	0x00000000
MF_HILITE           	equ	0x00000080

MF_DEFAULT          	equ	0x00001000

MF_SYSMENU          	equ	0x00002000
MF_HELP             	equ	0x00004000

MF_RIGHTJUSTIFY     	equ	0x00004000

MF_MOUSESELECT      	equ	0x00008000

MFT_STRING          	equ	MF_STRING
MFT_BITMAP          	equ	MF_BITMAP
MFT_MENUBARBREAK    	equ	MF_MENUBARBREAK
MFT_MENUBREAK       	equ	MF_MENUBREAK
MFT_OWNERDRAW       	equ	MF_OWNERDRAW
MFT_RADIOCHECK      	equ	0x00000200
MFT_SEPARATOR       	equ	MF_SEPARATOR
MFT_RIGHTORDER      	equ	0x00002000
MFT_RIGHTJUSTIFY    	equ	MF_RIGHTJUSTIFY

; Menu flags for Add/Check/EnableMenuItem()
MFS_GRAYED          	equ	0x00000003
MFS_DISABLED        	equ	MFS_GRAYED
MFS_CHECKED         	equ	MF_CHECKED
MFS_HILITE          	equ	MF_HILITE
MFS_ENABLED         	equ	MF_ENABLED
MFS_UNCHECKED       	equ	MF_UNCHECKED
MFS_UNHILITE        	equ	MF_UNHILITE
MFS_DEFAULT         	equ	MF_DEFAULT

MFS_MASK            	equ	0x0000108B
MFS_HOTTRACKDRAWN   	equ	0x10000000
MFS_CACHEDBMP       	equ	0x20000000
MFS_BOTTOMGAPDROP   	equ	0x40000000
MFS_TOPGAPDROP      	equ	0x80000000
MFS_GAPDROP         	equ	0xC0000000

; Flags for TrackPopupMenu
TPM_LEFTBUTTON  	equ	0x0000
TPM_RIGHTBUTTON 	equ	0x0002
TPM_LEFTALIGN   	equ	0x0000
TPM_CENTERALIGN 	equ	0x0004
TPM_RIGHTALIGN  	equ	0x0008
TPM_TOPALIGN        	equ	0x0000
TPM_VCENTERALIGN    	equ	0x0010
TPM_BOTTOMALIGN     	equ	0x0020
TPM_HORIZONTAL      	equ	0x0000     ; Horz alignment matters more
TPM_VERTICAL        	equ	0x0040     ; Vert alignment matters more
TPM_NONOTIFY        	equ	0x0080     ; Don't send any notification msgs
TPM_RETURNCMD       	equ	0x0100
TPM_RECURSE         	equ	0x0001

; System Menu Command Values
SC_SIZE         	equ	0xF000
SC_MOVE         	equ	0xF010
SC_MINIMIZE     	equ	0xF020
SC_MAXIMIZE     	equ	0xF030
SC_NEXTWINDOW   	equ	0xF040
SC_PREVWINDOW   	equ	0xF050
SC_CLOSE        	equ	0xF060
SC_VSCROLL      	equ	0xF070
SC_HSCROLL      	equ	0xF080
SC_MOUSEMENU    	equ	0xF090
SC_KEYMENU      	equ	0xF100
SC_ARRANGE      	equ	0xF110
SC_RESTORE      	equ	0xF120
SC_TASKLIST     	equ	0xF130
SC_SCREENSAVE   	equ	0xF140
SC_HOTKEY       	equ	0xF150
SC_DEFAULT      	equ	0xF160
SC_MONITORPOWER 	equ	0xF170
SC_CONTEXTHELP  	equ	0xF180
SC_SEPARATOR    	equ	0xF00F

; Obsolete names
SC_ICON         	equ	SC_MINIMIZE
SC_ZOOM         	equ	SC_MAXIMIZE

DI_MASK         	equ	0x0001
DI_IMAGE        	equ	0x0002
DI_NORMAL       	equ	0x0003
DI_COMPAT       	equ	0x0004
DI_DEFAULTSIZE  	equ	0x0008

; Edit Control Notification Codes
EN_SETFOCUS         	equ	0x0100
EN_KILLFOCUS        	equ	0x0200
EN_CHANGE           	equ	0x0300
EN_UPDATE           	equ	0x0400
EN_ERRSPACE         	equ	0x0500
EN_MAXTEXT          	equ	0x0501
EN_HSCROLL          	equ	0x0601
EN_VSCROLL          	equ	0x0602

; Standard Cursor IDs
IDC_ARROW           	equ	32512
IDC_IBEAM           	equ	32513
IDC_WAIT            	equ	32514
IDC_CROSS           	equ	32515
IDC_UPARROW         	equ	32516
IDC_SIZE            	equ	32640 ; OBSOLETE: use IDC_SIZEALL
IDC_ICON            	equ	32641 ; OBSOLETE: use IDC_ARROW
IDC_SIZENWSE        	equ	32642
IDC_SIZENESW        	equ	32643
IDC_SIZEWE          	equ	32644
IDC_SIZENS          	equ	32645
IDC_SIZEALL         	equ	32646
IDC_NO              	equ	32648 ; not in win3.1
IDC_HAND            	equ	32649
IDC_APPSTARTING     	equ	32650 ; not in win3.1
IDC_HELP            	equ	32651

; Predefined Clipboard Formats
CF_TEXT             	equ	1
CF_BITMAP           	equ	2
CF_METAFILEPICT     	equ	3
CF_SYLK             	equ	4
CF_DIF              	equ	5
CF_TIFF             	equ	6
CF_OEMTEXT          	equ	7
CF_DIB              	equ	8
CF_PALETTE          	equ	9
CF_PENDATA          	equ	10
CF_RIFF             	equ	11
CF_WAVE             	equ	12
CF_UNICODETEXT      	equ	13
CF_ENHMETAFILE      	equ	14
CF_HDROP            	equ	15
CF_LOCALE           	equ	16
CF_MAX              	equ	17

CF_OWNERDISPLAY     	equ	0x0080
CF_DSPTEXT          	equ	0x0081
CF_DSPBITMAP        	equ	0x0082
CF_DSPMETAFILEPICT  	equ	0x0083
CF_DSPENHMETAFILE   	equ	0x008E

; "Private" formats don't get GlobalFree()'d
CF_PRIVATEFIRST     	equ	0x0200
CF_PRIVATELAST      	equ	0x02FF

; "GDIOBJ" formats do get DeleteObject()'d
CF_GDIOBJFIRST      	equ	0x0300
CF_GDIOBJLAST       	equ	0x03FF

; Global Memory Flags
GMEM_FIXED          	equ	0x0000
GMEM_MOVEABLE       	equ	0x0002
GMEM_NOCOMPACT      	equ	0x0010
GMEM_NODISCARD      	equ	0x0020
GMEM_ZEROINIT       	equ	0x0040
GMEM_MODIFY         	equ	0x0080
GMEM_DISCARDABLE    	equ	0x0100
GMEM_NOT_BANKED     	equ	0x1000
GMEM_SHARE          	equ	0x2000
GMEM_DDESHARE       	equ	0x2000
GMEM_NOTIFY         	equ	0x4000
GMEM_LOWER          	equ	GMEM_NOT_BANKED
GMEM_VALID_FLAGS    	equ	0x7F72
GMEM_INVALID_HANDLE 	equ	0x8000

GHND                	equ	(GMEM_MOVEABLE | GMEM_ZEROINIT)
GPTR                	equ	(GMEM_FIXED | GMEM_ZEROINIT)

; Button Control Styles
BS_PUSHBUTTON       		equ	0x00000000
BS_DEFPUSHBUTTON    		equ	0x00000001
BS_CHECKBOX         		equ	0x00000002
BS_AUTOCHECKBOX     		equ	0x00000003
BS_RADIOBUTTON      		equ	0x00000004
BS_3STATE           		equ	0x00000005
BS_AUTO3STATE       		equ	0x00000006
BS_GROUPBOX         		equ	0x00000007
BS_USERBUTTON       		equ	0x00000008
BS_AUTORADIOBUTTON  		equ	0x00000009
BS_OWNERDRAW        		equ	0x0000000B
BS_LEFTTEXT         		equ	0x00000020
BS_TEXT             		equ	0x00000000
BS_ICON             		equ	0x00000040
BS_BITMAP           		equ	0x00000080
BS_LEFT             		equ	0x00000100
BS_RIGHT            		equ	0x00000200
BS_CENTER           		equ	0x00000300
BS_TOP              		equ	0x00000400
BS_BOTTOM           		equ	0x00000800
BS_VCENTER          		equ	0x00000C00
BS_PUSHLIKE         		equ	0x00001000
BS_MULTILINE        		equ	0x00002000
BS_NOTIFY           		equ	0x00004000
BS_FLAT             		equ	0x00008000
BS_RIGHTBUTTON      		equ	BS_LEFTTEXT

; User Button Notification Codes
BN_CLICKED          		equ	0
BN_PAINT            		equ	1
BN_HILITE           		equ	2
BN_UNHILITE         		equ	3
BN_DISABLE          		equ	4
BN_DOUBLECLICKED    		equ	5
BN_PUSHED           		equ	BN_HILITE
BN_UNPUSHED         		equ	BN_UNHILITE
BN_DBLCLK           		equ	BN_DOUBLECLICKED
BN_SETFOCUS         		equ	6
BN_KILLFOCUS        		equ	7

; Button Control Messages
BM_GETCHECK        	equ	0x00F0
BM_SETCHECK        	equ	0x00F1
BM_GETSTATE        	equ	0x00F2
BM_SETSTATE        	equ	0x00F3
BM_SETSTYLE        	equ	0x00F4
BM_CLICK           	equ	0x00F5
BM_GETIMAGE        	equ	0x00F6
BM_SETIMAGE        	equ	0x00F7

BST_UNCHECKED      	equ	0x0000
BST_CHECKED        	equ	0x0001
BST_INDETERMINATE  	equ	0x0002
BST_PUSHED         	equ	0x0004
BST_FOCUS          	equ	0x0008

; Edit Control Messages
EM_GETSEL               	equ	0x00B0
EM_SETSEL               	equ	0x00B1
EM_GETRECT              	equ	0x00B2
EM_SETRECT              	equ	0x00B3
EM_SETRECTNP            	equ	0x00B4
EM_SCROLL               	equ	0x00B5
EM_LINESCROLL           	equ	0x00B6
EM_SCROLLCARET          	equ	0x00B7
EM_GETMODIFY            	equ	0x00B8
EM_SETMODIFY            	equ	0x00B9
EM_GETLINECOUNT         	equ	0x00BA
EM_LINEINDEX            	equ	0x00BB
EM_SETHANDLE            	equ	0x00BC
EM_GETHANDLE            	equ	0x00BD
EM_GETTHUMB             	equ	0x00BE
EM_LINELENGTH           	equ	0x00C1
EM_REPLACESEL           	equ	0x00C2
EM_GETLINE              	equ	0x00C4
EM_LIMITTEXT            	equ	0x00C5
EM_CANUNDO              	equ	0x00C6
EM_UNDO                 	equ	0x00C7
EM_FMTLINES             	equ	0x00C8
EM_LINEFROMCHAR         	equ	0x00C9
EM_SETTABSTOPS          	equ	0x00CB
EM_SETPASSWORDCHAR      	equ	0x00CC
EM_EMPTYUNDOBUFFER      	equ	0x00CD
EM_GETFIRSTVISIBLELINE  	equ	0x00CE
EM_SETREADONLY          	equ	0x00CF
EM_SETWORDBREAKPROC     	equ	0x00D0
EM_GETWORDBREAKPROC     	equ	0x00D1
EM_GETPASSWORDCHAR      	equ	0x00D2
EM_SETMARGINS           	equ	0x00D3
EM_GETMARGINS           	equ	0x00D4
EM_SETLIMITTEXT         	equ	EM_LIMITTEXT
EM_GETLIMITTEXT         	equ	0x00D5
EM_POSFROMCHAR          	equ	0x00D6
EM_CHARFROMPOS          	equ	0x00D7

EM_SETIMESTATUS         	equ	0x00D8
EM_GETIMESTATUS         	equ	0x00D9

LOGPIXELSX    		equ	88    ; Logical pixels/inch in X
LOGPIXELSY    		equ	90    ; Logical pixels/inch in Y

; Logical Font
LF_FACESIZE         	equ	32

OUT_DEFAULT_PRECIS          	equ	0
OUT_STRING_PRECIS           	equ	1
OUT_CHARACTER_PRECIS        	equ	2
OUT_STROKE_PRECIS           	equ	3
OUT_TT_PRECIS               	equ	4
OUT_DEVICE_PRECIS           	equ	5
OUT_RASTER_PRECIS           	equ	6
OUT_TT_ONLY_PRECIS          	equ	7
OUT_OUTLINE_PRECIS          	equ	8
OUT_SCREEN_OUTLINE_PRECIS   	equ	9

CLIP_DEFAULT_PRECIS     	equ	0
CLIP_CHARACTER_PRECIS   	equ	1
CLIP_STROKE_PRECIS      	equ	2
CLIP_MASK               	equ	0xf
CLIP_LH_ANGLES          	equ	(1<<4)
CLIP_TT_ALWAYS          	equ	(2<<4)
CLIP_EMBEDDED           	equ	(8<<4)

DEFAULT_QUALITY         	equ	0
DRAFT_QUALITY           	equ	1
PROOF_QUALITY           	equ	2
NONANTIALIASED_QUALITY  	equ	3
ANTIALIASED_QUALITY     	equ	4

DEFAULT_PITCH           	equ	0
FIXED_PITCH             	equ	1
VARIABLE_PITCH          	equ	2
MONO_FONT               	equ	8

ANSI_CHARSET            	equ	0
DEFAULT_CHARSET         	equ	1
SYMBOL_CHARSET          	equ	2
SHIFTJIS_CHARSET        	equ	128
HANGEUL_CHARSET         	equ	129
HANGUL_CHARSET          	equ	129
GB2312_CHARSET          	equ	134
CHINESEBIG5_CHARSET     	equ	136
OEM_CHARSET             	equ	255
JOHAB_CHARSET           	equ	130
HEBREW_CHARSET          	equ	177
ARABIC_CHARSET          	equ	178
GREEK_CHARSET           	equ	161
TURKISH_CHARSET         	equ	162
VIETNAMESE_CHARSET      	equ	163
THAI_CHARSET            	equ	222
EASTEUROPE_CHARSET      	equ	238
RUSSIAN_CHARSET         	equ	204

MAC_CHARSET             	equ	77
BALTIC_CHARSET          	equ	186

FS_LATIN1               	equ	0x00000001
FS_LATIN2               	equ	0x00000002
FS_CYRILLIC             	equ	0x00000004
FS_GREEK                	equ	0x00000008
FS_TURKISH              	equ	0x00000010
FS_HEBREW               	equ	0x00000020
FS_ARABIC               	equ	0x00000040
FS_BALTIC               	equ	0x00000080
FS_VIETNAMESE           	equ	0x00000100
FS_THAI                 	equ	0x00010000
FS_JISJAPAN             	equ	0x00020000
FS_CHINESESIMP          	equ	0x00040000
FS_WANSUNG              	equ	0x00080000
FS_CHINESETRAD          	equ	0x00100000
FS_JOHAB                	equ	0x00200000
FS_SYMBOL               	equ	0x80000000

; Font Families
FF_DONTCARE         		equ	(0<<4)  ; Don't care or don't know.
FF_ROMAN            		equ	(1<<4)  ; Variable stroke width, serifed.
						; Times Roman, Century Schoolbook, etc.
FF_SWISS            		equ	(2<<4)  ; Variable stroke width, sans-serifed.
                                    		; Helvetica, Swiss, etc.
FF_MODERN           		equ	(3<<4)  ; Constant stroke width, serifed or sans-serifed.
                                    		; Pica, Elite, Courier, etc.
FF_SCRIPT           		equ	(4<<4)  ; Cursive, etc.
FF_DECORATIVE       		equ	(5<<4)  ; Old English, etc.

; Font Weights
FW_DONTCARE         	equ	0
FW_THIN             	equ	100
FW_EXTRALIGHT       	equ	200
FW_LIGHT            	equ	300
FW_NORMAL           	equ	400
FW_MEDIUM           	equ	500
FW_SEMIBOLD         	equ	600
FW_BOLD             	equ	700
FW_EXTRABOLD        	equ	800
FW_HEAVY            	equ	900

FW_ULTRALIGHT       	equ	FW_EXTRALIGHT
FW_REGULAR          	equ	FW_NORMAL
FW_DEMIBOLD         	equ	FW_SEMIBOLD
FW_ULTRABOLD        	equ	FW_EXTRABOLD
FW_BLACK            	equ	FW_HEAVY

; EnumFonts Masks
RASTER_FONTTYPE     	equ	0x0001
DEVICE_FONTTYPE     	equ	0x002
TRUETYPE_FONTTYPE   	equ	0x004

; Stock Logical Objects
WHITE_BRUSH         	equ	0
LTGRAY_BRUSH        	equ	1
GRAY_BRUSH          	equ	2
DKGRAY_BRUSH        	equ	3
BLACK_BRUSH         	equ	4
NULL_BRUSH          	equ	5
HOLLOW_BRUSH        	equ	NULL_BRUSH
WHITE_PEN           	equ	6
BLACK_PEN           	equ	7
NULL_PEN            	equ	8
OEM_FIXED_FONT      	equ	10
ANSI_FIXED_FONT     	equ	11
ANSI_VAR_FONT       	equ	12
SYSTEM_FONT         	equ	13
DEVICE_DEFAULT_FONT 	equ	14
DEFAULT_PALETTE     	equ	15
SYSTEM_FIXED_FONT   	equ	16

DEFAULT_GUI_FONT    	equ	17

DC_BRUSH            	equ	18
DC_PEN              	equ	19

STOCK_LAST          	equ	19

CLR_INVALID     	equ	0FFFFFFFFh

; Brush Styles
BS_SOLID            	equ	0
BS_NULL             	equ	1
BS_HOLLOW           	equ	BS_NULL
BS_HATCHED          	equ	2
BS_PATTERN          	equ	3
BS_INDEXED          	equ	4
BS_DIBPATTERN       	equ	5
BS_DIBPATTERNPT     	equ	6
BS_PATTERN8X8       	equ	7
BS_DIBPATTERN8X8    	equ	8
BS_MONOPATTERN      	equ	9

; Hatch Styles
HS_HORIZONTAL       	equ	0       ; -----
HS_VERTICAL         	equ	1       ; |||||
HS_FDIAGONAL        	equ	2       ; \\\\\
HS_BDIAGONAL        	equ	3       ; /////
HS_CROSS            	equ	4       ; +++++
HS_DIAGCROSS        	equ	5       ; xxxxx

; Pen Styles
PS_SOLID            	equ	0
PS_DASH             	equ	1       ; -------
PS_DOT              	equ	2       ; .......
PS_DASHDOT          	equ	3       ; _._._._
PS_DASHDOTDOT       	equ	4       ; _.._.._
PS_NULL             	equ	5
PS_INSIDEFRAME      	equ	6
PS_USERSTYLE        	equ	7
PS_ALTERNATE        	equ	8
PS_STYLE_MASK       	equ	00000000Fh

PS_ENDCAP_ROUND     	equ	000000000h
PS_ENDCAP_SQUARE    	equ	000000100h
PS_ENDCAP_FLAT      	equ	000000200h
PS_ENDCAP_MASK      	equ	000000F00h

PS_JOIN_ROUND       	equ	000000000h
PS_JOIN_BEVEL       	equ	000001000h
PS_JOIN_MITER       	equ	000002000h
PS_JOIN_MASK        	equ	00000F000h

PS_COSMETIC         	equ	000000000h
PS_GEOMETRIC        	equ	000010000h
PS_TYPE_MASK        	equ	0000F0000h

AD_COUNTERCLOCKWISE 	equ	1
AD_CLOCKWISE        	equ	2


EXCEPTION_EXECUTE_HANDLER       	equ	1
EXCEPTION_CONTINUE_SEARCH       	equ	0
EXCEPTION_CONTINUE_EXECUTION    	equ	-1


struc STARTUPINFO
	.cb			resd 1
	.lpReserved		resd 1
	.lpDesktop		resd 1
	.lpTitle		resd 1
	.dwX			resd 1
	.dwY			resd 1
	.dwXSize		resd 1
	.dwYSize		resd 1
	.dwXCountChars		resd 1
	.dwYCountChars		resd 1
	.dwFillAttribute	resd 1
	.dwFlags		resd 1
	.wShowWindow		resw 1
	.cbReserved2		resw 1
	.lpReserved2		resd 1
	.hStdInput		resd 1
	.hStdOutput		resd 1
	.hStdError		resd 1
endstruc

struc PROCESS_INFORMATION
	.hProcess		resd 1
	.hThread		resd 1
	.dwProcessId		resd 1
	.dwThreadId		resd 1
endstruc

; MessageBox() Flags
MB_OK                       	equ	000000000h
MB_OKCANCEL                 	equ	000000001h
MB_ABORTRETRYIGNORE         	equ	000000002h
MB_YESNOCANCEL              	equ	000000003h
MB_YESNO                    	equ	000000004h
MB_RETRYCANCEL              	equ	000000005h

MB_ICONHAND                 	equ	000000010h
MB_ICONQUESTION             	equ	000000020h
MB_ICONEXCLAMATION          	equ	000000030h
MB_ICONASTERISK             	equ	000000040h

MB_USERICON                 	equ	000000080h
MB_ICONWARNING              	equ	MB_ICONEXCLAMATION
MB_ICONERROR                	equ	MB_ICONHAND

MB_ICONINFORMATION          	equ	MB_ICONASTERISK
MB_ICONSTOP                 	equ	MB_ICONHAND

MB_DEFBUTTON1               	equ	000000000h
MB_DEFBUTTON2               	equ	000000100h
MB_DEFBUTTON3               	equ	000000200h
MB_DEFBUTTON4               	equ	000000300h

MB_APPLMODAL                	equ	000000000h
MB_SYSTEMMODAL              	equ	000001000h
MB_TASKMODAL                	equ	000002000h
MB_HELP                     	equ	000004000h ; Help Button

MB_NOFOCUS                  	equ	000008000h
MB_SETFOREGROUND            	equ	000010000h
MB_DEFAULT_DESKTOP_ONLY     	equ	000020000h

MB_TOPMOST                  	equ	000040000h
MB_RIGHT                    	equ	000080000h
MB_RTLREADING               	equ	000100000h

MB_SERVICE_NOTIFICATION         equ	000200000h

MB_TYPEMASK                 	equ	00000000Fh
MB_ICONMASK                 	equ	0000000F0h
MB_DEFMASK                  	equ	000000F00h
MB_MODEMASK                 	equ	000003000h
MB_MISCMASK                 	equ	00000C000h

FILE_BEGIN           	equ	0
FILE_CURRENT         	equ	1
FILE_END             	equ	2

PAGE_NOACCESS          	equ	001h
PAGE_READONLY          	equ	002h
PAGE_READWRITE         	equ	004h
PAGE_WRITECOPY         	equ	008h
PAGE_EXECUTE           	equ	010h
PAGE_EXECUTE_READ      	equ	020h
PAGE_EXECUTE_READWRITE 	equ	040h
PAGE_EXECUTE_WRITECOPY 	equ	080h
PAGE_GUARD            	equ	0100h
PAGE_NOCACHE          	equ	0200h
PAGE_WRITECOMBINE     	equ	0400h
MEM_COMMIT           	equ	01000h
MEM_RESERVE          	equ	02000h
MEM_DECOMMIT         	equ	04000h
MEM_RELEASE          	equ	08000h
MEM_FREE            	equ	010000h
MEM_PRIVATE         	equ	020000h
MEM_MAPPED          	equ	040000h
MEM_RESET           	equ	080000h
MEM_TOP_DOWN       	equ	0100000h
MEM_4MB_PAGES    	equ	080000000h

FORMAT_MESSAGE_ALLOCATE_BUFFER 		equ	000000100h
FORMAT_MESSAGE_IGNORE_INSERTS  		equ	000000200h
FORMAT_MESSAGE_FROM_STRING     		equ	000000400h
FORMAT_MESSAGE_FROM_HMODULE    		equ	000000800h
FORMAT_MESSAGE_FROM_SYSTEM     		equ	000001000h
FORMAT_MESSAGE_ARGUMENT_ARRAY  		equ	000002000h
FORMAT_MESSAGE_MAX_WIDTH_MASK  		equ	0000000FFh

; These are the generic rights.

GENERIC_READ	equ	080000000h
GENERIC_WRITE	equ	040000000h
GENERIC_EXECUTE	equ	020000000h
GENERIC_ALL	equ	010000000h

CREATE_NEW          	equ	1
CREATE_ALWAYS       	equ	2
OPEN_EXISTING       	equ	3
OPEN_ALWAYS         	equ	4
TRUNCATE_EXISTING   	equ	5

FILE_SHARE_READ         equ	000000001h
FILE_SHARE_WRITE        equ	000000002h
FILE_SHARE_DELETE       equ	000000004h

INVALID_HANDLE_VALUE 	equ	-1
INVALID_FILE_SIZE 	equ	0FFFFFFFFh

STD_INPUT_HANDLE    	equ	-10
STD_OUTPUT_HANDLE   	equ	-11
STD_ERROR_HANDLE      	equ	-12

FOREGROUND_BLUE      	equ	0001h 		; text color contains blue.
FOREGROUND_GREEN     	equ	0002h 		; text color contains green.
FOREGROUND_RED       	equ	0004h 		; text color contains red.
FOREGROUND_INTENSITY 	equ	0008h 		; text color is intensified.
BACKGROUND_BLUE      	equ	0010h 		; background color contains blue.
BACKGROUND_GREEN     	equ	0020h 		; background color contains green.
BACKGROUND_RED       	equ	0040h 		; background color contains red.
BACKGROUND_INTENSITY 	equ	0080h 		; background color is intensified.

; Input Mode flags:

ENABLE_PROCESSED_INPUT 	equ	00001h
ENABLE_LINE_INPUT      	equ	00002h
ENABLE_ECHO_INPUT      	equ	00004h
ENABLE_WINDOW_INPUT    	equ	00008h
ENABLE_MOUSE_INPUT     	equ	00010h

; Output Mode flags:

ENABLE_PROCESSED_OUTPUT    	equ	00001h
ENABLE_WRAP_AT_EOL_OUTPUT  	equ	00002h

; Class field offsets for GetClassLong()
GCL_MENUNAME        	equ	(-8)
GCL_HBRBACKGROUND   	equ	(-10)
GCL_HCURSOR         	equ	(-12)
GCL_HICON           	equ	(-14)
GCL_HMODULE         	equ	(-16)
GCL_CBWNDEXTRA      	equ	(-18)
GCL_CBCLSEXTRA      	equ	(-20)
GCL_WNDPROC         	equ	(-24)
GCL_STYLE           	equ	(-26)
GCW_ATOM            	equ	(-32)

; Static Control Mesages
STM_SETICON         	equ	00170h
STM_GETICON         	equ	00171h
STM_SETIMAGE        	equ	00172h
STM_GETIMAGE        	equ	00173h
STN_CLICKED         	equ	0
STN_DBLCLK          	equ	1
STN_ENABLE          	equ	2
STN_DISABLE         	equ	3

IMAGE_BITMAP        	equ	0
IMAGE_ICON          	equ	1
IMAGE_CURSOR        	equ	2
IMAGE_ENHMETAFILE   	equ	3

LR_DEFAULTCOLOR     	equ	00000h
LR_MONOCHROME       	equ	00001h
LR_COLOR            	equ	00002h
LR_COPYRETURNORG    	equ	00004h
LR_COPYDELETEORG    	equ	00008h
LR_LOADFROMFILE     	equ	00010h
LR_LOADTRANSPARENT  	equ	00020h
LR_DEFAULTSIZE      	equ	00040h
LR_VGACOLOR         	equ	00080h
LR_LOADMAP3DCOLORS  	equ	01000h
LR_CREATEDIBSECTION 	equ	02000h
LR_COPYFROMRESOURCE 	equ	04000h
LR_SHARED           	equ	08000h

; ShowWindow() Commands
SW_HIDE             	equ	0
SW_SHOWNORMAL       	equ	1
SW_NORMAL           	equ	1
SW_SHOWMINIMIZED    	equ	2
SW_SHOWMAXIMIZED    	equ	3
SW_MAXIMIZE         	equ	3
SW_SHOWNOACTIVATE   	equ	4
SW_SHOW             	equ	5
SW_MINIMIZE         	equ	6
SW_SHOWMINNOACTIVE  	equ	7
SW_SHOWNA           	equ	8
SW_RESTORE          	equ	9
SW_SHOWDEFAULT      	equ	10
SW_FORCEMINIMIZE    	equ	11
SW_MAX              	equ	11

; GetSystemMetrics() codes

SM_CXSCREEN             equ	0
SM_CYSCREEN             equ	1
SM_CXVSCROLL            equ	2
SM_CYHSCROLL            equ	3
SM_CYCAPTION            equ	4
SM_CXBORDER             equ	5
SM_CYBORDER             equ	6
SM_CXDLGFRAME           equ	7
SM_CYDLGFRAME           equ	8
SM_CYVTHUMB             equ	9
SM_CXHTHUMB             equ	10
SM_CXICON               equ	11
SM_CYICON               equ	12
SM_CXCURSOR             equ	13
SM_CYCURSOR             equ	14
SM_CYMENU               equ	15
SM_CXFULLSCREEN         equ	16
SM_CYFULLSCREEN         equ	17
SM_CYKANJIWINDOW        equ	18
SM_MOUSEPRESENT         equ	19
SM_CYVSCROLL            equ	20
SM_CXHSCROLL            equ	21
SM_DEBUG                equ	22
SM_SWAPBUTTON           equ	23
SM_RESERVED1            equ	24
SM_RESERVED2            equ	25
SM_RESERVED3            equ	26
SM_RESERVED4            equ	27
SM_CXMIN                equ	28
SM_CYMIN                equ	29
SM_CXSIZE               equ	30
SM_CYSIZE               equ	31
SM_CXFRAME              equ	32
SM_CYFRAME              equ	33
SM_CXMINTRACK           equ	34
SM_CYMINTRACK           equ	35
SM_CXDOUBLECLK          equ	36
SM_CYDOUBLECLK          equ	37
SM_CXICONSPACING        equ	38
SM_CYICONSPACING        equ	39
SM_MENUDROPALIGNMENT    equ	40
SM_PENWINDOWS           equ	41
SM_DBCSENABLED          equ	42
SM_CMOUSEBUTTONS        equ	43

SM_CXFIXEDFRAME         equ	SM_CXDLGFRAME  ;win40 name change
SM_CYFIXEDFRAME         equ	SM_CYDLGFRAME  ;win40 name change
SM_CXSIZEFRAME          equ	SM_CXFRAME     ;win40 name change
SM_CYSIZEFRAME          equ	SM_CYFRAME     ;win40 name change

SM_SECURE               equ	44
SM_CXEDGE               equ	45
SM_CYEDGE               equ	46
SM_CXMINSPACING         equ	47
SM_CYMINSPACING         equ	48
SM_CXSMICON             equ	49
SM_CYSMICON             equ	50
SM_CYSMCAPTION          equ	51
SM_CXSMSIZE             equ	52
SM_CYSMSIZE             equ	53
SM_CXMENUSIZE           equ	54
SM_CYMENUSIZE           equ	55
SM_ARRANGE              equ	56
SM_CXMINIMIZED          equ	57
SM_CYMINIMIZED          equ	58
SM_CXMAXTRACK           equ	59
SM_CYMAXTRACK           equ	60
SM_CXMAXIMIZED          equ	61
SM_CYMAXIMIZED          equ	62
SM_NETWORK              equ	63
SM_CLEANBOOT            equ	67
SM_CXDRAG               equ	68
SM_CYDRAG               equ	69
SM_SHOWSOUNDS           equ	70
SM_CXMENUCHECK          equ	71  ; Use instead of GetMenuCheckMarkDimensions()!
SM_CYMENUCHECK          equ	72
SM_SLOWMACHINE          equ	73
SM_MIDEASTENABLED       equ	74
SM_MOUSEWHEELPRESENT    equ	75
SM_XVIRTUALSCREEN       equ	76
SM_YVIRTUALSCREEN       equ	77
SM_CXVIRTUALSCREEN      equ	78
SM_CYVIRTUALSCREEN      equ	79
SM_CMONITORS            equ	80
SM_SAMEDISPLAYFORMAT    equ	81

;SM_CMETRICS             equ	76
SM_CMETRICS             equ	83


; Window field offsets for GetWindowLong()

GWL_WNDPROC         	equ	-4
GWL_HINSTANCE       	equ	-6
GWL_HWNDPARENT      	equ	-8
GWL_STYLE           	equ	-16
GWL_EXSTYLE         	equ	-20
GWL_USERDATA        	equ	-21
GWL_ID              	equ	-12

CW_USEDEFAULT		equ	80000000h

; SetWindowPos Flags
SWP_NOSIZE          	equ	00001h
SWP_NOMOVE          	equ	00002h
SWP_NOZORDER        	equ	00004h
SWP_NOREDRAW        	equ	00008h
SWP_NOACTIVATE      	equ	00010h
SWP_FRAMECHANGED    	equ	00020h ; The frame changed: send WM_NCCALCSIZE
SWP_SHOWWINDOW      	equ	00040h
SWP_HIDEWINDOW      	equ	00080h
SWP_NOCOPYBITS      	equ	00100h
SWP_NOOWNERZORDER   	equ	00200h ; Don't do owner Z ordering
SWP_NOSENDCHANGING  	equ	00400h ; Don't send WM_WINDOWPOSCHANGING

SWP_DRAWFRAME       	equ	SWP_FRAMECHANGED
SWP_NOREPOSITION    	equ	SWP_NOOWNERZORDER

SWP_DEFERERASE      	equ	02000h
SWP_ASYNCWINDOWPOS  	equ	04000h

HWND_TOP        	equ	0
HWND_BOTTOM     	equ	1
HWND_TOPMOST    	equ	-1
HWND_NOTOPMOST  	equ	-2

; PeekMessage() Options
PM_NOREMOVE         	equ	00000h
PM_REMOVE           	equ	00001h
PM_NOYIELD          	equ	00002h

; Window Messages

WM_NULL                 equ	00000h
WM_CREATE               equ	00001h
WM_DESTROY              equ	00002h
WM_MOVE                 equ	00003h
WM_SIZE                 equ	00005h

WM_ACTIVATE             equ	00006h

; WM_ACTIVATE state values
WA_INACTIVE     	equ	0
WA_ACTIVE       	equ	1
WA_CLICKACTIVE  	equ	2

WM_SETFOCUS             equ	00007h
WM_KILLFOCUS            equ	00008h
WM_ENABLE               equ	0000Ah
WM_SETREDRAW            equ	0000Bh
WM_SETTEXT              equ	0000Ch
WM_GETTEXT              equ	0000Dh
WM_GETTEXTLENGTH        equ	0000Eh
WM_PAINT                equ	0000Fh
WM_CLOSE                equ	00010h
WM_QUERYENDSESSION      equ	00011h
WM_QUIT                 equ	00012h
WM_QUERYOPEN            equ	00013h
WM_ERASEBKGND           equ	00014h
WM_SYSCOLORCHANGE       equ	00015h
WM_ENDSESSION           equ	00016h
WM_SHOWWINDOW           equ	00018h
WM_WININICHANGE         equ	0001Ah

WM_SETTINGCHANGE        equ	WM_WININICHANGE

WM_DEVMODECHANGE        equ	0001Bh
WM_ACTIVATEAPP          equ	0001Ch
WM_FONTCHANGE           equ	0001Dh
WM_TIMECHANGE           equ	0001Eh
WM_CANCELMODE           equ	0001Fh
WM_SETCURSOR            equ	00020h
WM_MOUSEACTIVATE        equ	00021h
WM_CHILDACTIVATE        equ	00022h
WM_QUEUESYNC            equ	00023h

WM_GETMINMAXINFO        equ	00024h

; WINDEF.H

struc POINT
	.x	resd 1
	.y	resd 1
endstruc

struc RECT
	.left	resd 1
        .top	resd 1
    	.right	resd 1
    	.bottom	resd 1
endstruc

struc PAINTSTRUCT
	.hdc		resd 1
	.fErase		resd 1
    	.rcPaint	resb RECT_size
	.fRestore	resd 1
	.fIncUpdate	resd 1
    	.rgbReserved	resb 32
endstruc

SRCCOPY             	equ	000CC0020h	; dest = source
SRCPAINT            	equ	000EE0086h	; dest = source OR dest
SRCAND              	equ	0008800C6h	; dest = source AND dest
SRCINVERT           	equ	000660046h	; dest = source XOR dest
SRCERASE            	equ	000440328h	; dest = source AND (NOT dest )
NOTSRCCOPY          	equ	000330008h	; dest = (NOT source)
NOTSRCERASE         	equ	0001100A6h	; dest = (NOT src) AND (NOT dest)
MERGECOPY           	equ	000C000CAh	; dest = (source AND pattern)
MERGEPAINT          	equ	000BB0226h	; dest = (NOT source) OR dest
PATCOPY             	equ	000F00021h	; dest = pattern
PATPAINT            	equ	000FB0A09h	; dest = DPSnoo
PATINVERT           	equ	0005A0049h	; dest = pattern XOR dest
DSTINVERT           	equ	000550009h	; dest = (NOT dest)
BLACKNESS           	equ	000000042h	; dest = BLACK
WHITENESS           	equ	000FF0062h	; dest = WHITE

RDW_INVALIDATE          	equ	00001h
RDW_INTERNALPAINT       	equ	00002h
RDW_ERASE               	equ	00004h

RDW_VALIDATE            	equ	00008h
RDW_NOINTERNALPAINT     	equ	00010h
RDW_NOERASE             	equ	00020h

RDW_NOCHILDREN          	equ	00040h
RDW_ALLCHILDREN         	equ	00080h

RDW_UPDATENOW           	equ	00100h
RDW_ERASENOW            	equ	00200h

RDW_FRAME               	equ	00400h
RDW_NOFRAME             	equ	00800h

; WINUSER.H

; Struct pointed to by WM_GETMINMAXINFO lParam
struc MINMAXINFO
	.ptReserverd	resb	POINT_size
	.ptReserved	resb	POINT_size
	.ptMaxSize	resb	POINT_size
	.ptMaxPosition	resb	POINT_size
	.ptMinTrackSize	resb	POINT_size
	.ptMaxTrackSize	resb	POINT_size
endstruc

WM_PAINTICON                    equ	00026h
WM_ICONERASEBKGND               equ	00027h
WM_NEXTDLGCTL                   equ	00028h
WM_SPOOLERSTATUS                equ	0002Ah
WM_DRAWITEM                     equ	0002Bh
WM_MEASUREITEM                  equ	0002Ch
WM_DELETEITEM                   equ	0002Dh
WM_VKEYTOITEM                   equ	0002Eh
WM_CHARTOITEM                   equ	0002Fh
WM_SETFONT                      equ	00030h
WM_GETFONT                      equ	00031h
WM_SETHOTKEY                    equ	00032h
WM_GETHOTKEY                    equ	00033h
WM_QUERYDRAGICON                equ	00037h
WM_COMPAREITEM                  equ	00039h
WM_GETOBJECT                    equ	0003Dh
WM_COMPACTING                   equ	00041h
WM_COMMNOTIFY                   equ	00044h ; no longer suported
WM_WINDOWPOSCHANGING            equ	00046h
WM_WINDOWPOSCHANGED             equ	00047h

WM_POWER                        equ	00048h

; wParam for WM_POWER window message and DRV_POWER driver notification
PWR_OK              	equ	1
PWR_FAIL            	equ	-1
PWR_SUSPENDREQUEST  	equ	1
PWR_SUSPENDRESUME   	equ	2
PWR_CRITICALRESUME  	equ	3

WM_COPYDATA                     equ	0004Ah
WM_CANCELJOURNAL                equ	0004Bh

; lParam of WM_COPYDATA message points to...
struc COPYDATASTRUCT
	.dwData		resd 1
	.cbData		resd 1
	.lpData		resd 1
endstruc

WM_NOTIFY                       equ	0004Eh
WM_INPUTLANGCHANGEREQUEST       equ	00050h
WM_INPUTLANGCHANGE              equ	00051h
WM_TCARD                        equ	00052h
WM_HELP                         equ	00053h
WM_USERCHANGED                  equ	00054h
WM_NOTIFYFORMAT                 equ	00055h

NFR_ANSI                        equ	1
NFR_UNICODE                     equ	2
NF_QUERY                        equ	3
NF_REQUERY                      equ	4

WM_CONTEXTMENU                  equ	0007Bh
WM_STYLECHANGING                equ	0007Ch
WM_STYLECHANGED                 equ	0007Dh
WM_DISPLAYCHANGE                equ	0007Eh
WM_GETICON                      equ	0007Fh
WM_SETICON                      equ	00080h

WM_NCCREATE                     equ	00081h
WM_NCDESTROY                    equ	00082h
WM_NCCALCSIZE                   equ	00083h
WM_NCHITTEST                    equ	00084h
WM_NCPAINT                      equ	00085h
WM_NCACTIVATE                   equ	00086h
WM_GETDLGCODE                   equ	00087h
WM_SYNCPAINT                    equ	00088h
WM_NCMOUSEMOVE                  equ	000A0h
WM_NCLBUTTONDOWN                equ	000A1h
WM_NCLBUTTONUP                  equ	000A2h
WM_NCLBUTTONDBLCLK              equ	000A3h
WM_NCRBUTTONDOWN                equ	000A4h
WM_NCRBUTTONUP                  equ	000A5h
WM_NCRBUTTONDBLCLK              equ	000A6h
WM_NCMBUTTONDOWN                equ	000A7h
WM_NCMBUTTONUP                  equ	000A8h
WM_NCMBUTTONDBLCLK              equ	000A9h

WM_KEYFIRST                     equ	00100h
WM_KEYDOWN                      equ	00100h
WM_KEYUP                        equ	00101h
WM_CHAR                         equ	00102h
WM_DEADCHAR                     equ	00103h
WM_SYSKEYDOWN                   equ	00104h
WM_SYSKEYUP                     equ	00105h
WM_SYSCHAR                      equ	00106h
WM_SYSDEADCHAR                  equ	00107h
WM_KEYLAST                      equ	00108h

WM_IME_STARTCOMPOSITION         equ	0010Dh
WM_IME_ENDCOMPOSITION           equ	0010Eh
WM_IME_COMPOSITION              equ	0010Fh
WM_IME_KEYLAST                  equ	0010Fh

WM_INITDIALOG                   equ	00110h
WM_COMMAND                      equ	00111h
WM_SYSCOMMAND                   equ	00112h
WM_TIMER                        equ	00113h
WM_HSCROLL                      equ	00114h
WM_VSCROLL                      equ	00115h
WM_INITMENU                     equ	00116h
WM_INITMENUPOPUP                equ	00117h
WM_MENUSELECT                   equ	0011Fh
WM_MENUCHAR                     equ	00120h
WM_ENTERIDLE                    equ	00121h
WM_MENURBUTTONUP                equ	00122h
WM_MENUDRAG                     equ	00123h
WM_MENUGETOBJECT                equ	00124h
WM_UNINITMENUPOPUP              equ	00125h
WM_MENUCOMMAND                  equ	00126h

WM_CTLCOLORMSGBOX               equ	00132h
WM_CTLCOLOREDIT                 equ	00133h
WM_CTLCOLORLISTBOX              equ	00134h
WM_CTLCOLORBTN                  equ	00135h
WM_CTLCOLORDLG                  equ	00136h
WM_CTLCOLORSCROLLBAR            equ	00137h
WM_CTLCOLORSTATIC               equ	00138h

WM_MOUSEFIRST                   equ	00200h
WM_MOUSEMOVE                    equ	00200h
WM_LBUTTONDOWN                  equ	00201h
WM_LBUTTONUP                    equ	00202h
WM_LBUTTONDBLCLK                equ	00203h
WM_RBUTTONDOWN                  equ	00204h
WM_RBUTTONUP                    equ	00205h
WM_RBUTTONDBLCLK                equ	00206h
WM_MBUTTONDOWN                  equ	00207h
WM_MBUTTONUP                    equ	00208h
WM_MBUTTONDBLCLK                equ	00209h

WM_MOUSEWHEEL                   equ	0020Ah
WM_MOUSELAST                    equ	0020Ah

WHEEL_DELTA                     equ	120		; Value for rolling one detent
WHEEL_PAGESCROLL                equ	0ffffffffh 	; Scroll one page

WM_PARENTNOTIFY                 equ	00210h
WM_ENTERMENULOOP                equ	00211h
WM_EXITMENULOOP                 equ	00212h

WM_NEXTMENU                     equ	00213h

struc MDINEXTMENU
	.hmenuIn	resd 1
	.hmenuNext	resd 1
	.hwndNext	resd 1
endstruc

WM_SIZING                       equ	00214h
WM_CAPTURECHANGED               equ	00215h
WM_MOVING                       equ	00216h

WM_POWERBROADCAST               equ	00218h

PBT_APMQUERYSUSPEND             equ	00000h
PBT_APMQUERYSTANDBY             equ	00001h

PBT_APMQUERYSUSPENDFAILED       equ	00002h
PBT_APMQUERYSTANDBYFAILED       equ	00003h

PBT_APMSUSPEND                  equ	00004h
PBT_APMSTANDBY                  equ	00005h

PBT_APMRESUMECRITICAL           equ	00006h
PBT_APMRESUMESUSPEND            equ	00007h
PBT_APMRESUMESTANDBY            equ	00008h

PBTF_APMRESUMEFROMFAILURE       equ	000000001h

PBT_APMBATTERYLOW               equ	00009h
PBT_APMPOWERSTATUSCHANGE        equ	0000Ah

PBT_APMOEMEVENT                 equ	0000Bh
PBT_APMRESUMEAUTOMATIC          equ	00012h

WM_DEVICECHANGE                 equ	00219h

WM_MDICREATE                    equ	00220h
WM_MDIDESTROY                   equ	00221h
WM_MDIACTIVATE                  equ	00222h
WM_MDIRESTORE                   equ	00223h
WM_MDINEXT                      equ	00224h
WM_MDIMAXIMIZE                  equ	00225h
WM_MDITILE                      equ	00226h
WM_MDICASCADE                   equ	00227h
WM_MDIICONARRANGE               equ	00228h
WM_MDIGETACTIVE                 equ	00229h

WM_MDISETMENU                   equ	00230h
WM_ENTERSIZEMOVE                equ	00231h
WM_EXITSIZEMOVE                 equ	00232h
WM_DROPFILES                    equ	00233h
WM_MDIREFRESHMENU               equ	00234h

WM_IME_SETCONTEXT               equ	00281h
WM_IME_NOTIFY                   equ	00282h
WM_IME_CONTROL                  equ	00283h
WM_IME_COMPOSITIONFULL          equ	00284h
WM_IME_SELECT                   equ	00285h
WM_IME_CHAR                     equ	00286h
WM_IME_REQUEST                  equ	00288h
WM_IME_KEYDOWN                  equ	00290h
WM_IME_KEYUP                    equ	00291h

WM_MOUSEHOVER                   equ	002A1h
WM_MOUSELEAVE                   equ	002A3h

WM_CUT                          equ	00300h
WM_COPY                         equ	00301h
WM_PASTE                        equ	00302h
WM_CLEAR                        equ	00303h
WM_UNDO                         equ	00304h
WM_RENDERFORMAT                 equ	00305h
WM_RENDERALLFORMATS             equ	00306h
WM_DESTROYCLIPBOARD             equ	00307h
WM_DRAWCLIPBOARD                equ	00308h
WM_PAINTCLIPBOARD               equ	00309h
WM_VSCROLLCLIPBOARD             equ	0030Ah
WM_SIZECLIPBOARD                equ	0030Bh
WM_ASKCBFORMATNAME              equ	0030Ch
WM_CHANGECBCHAIN                equ	0030Dh
WM_HSCROLLCLIPBOARD             equ	0030Eh
WM_QUERYNEWPALETTE              equ	0030Fh
WM_PALETTEISCHANGING            equ	00310h
WM_PALETTECHANGED               equ	00311h
WM_HOTKEY                       equ	00312h

WM_PRINT                        equ	00317h
WM_PRINTCLIENT                  equ	00318h

WM_HANDHELDFIRST                equ	00358h
WM_HANDHELDLAST                 equ	0035Fh

WM_AFXFIRST                     equ	00360h
WM_AFXLAST                      equ	0037Fh

WM_PENWINFIRST                  equ	00380h
WM_PENWINLAST                   equ	0038Fh

WM_APP                          equ	08000h

; NOTE: All Message Numbers below 0x0400 are RESERVED.
; Private Window Messages Start Here:

WM_USER                         equ	00400h

; wParam for WM_SIZING message
WMSZ_LEFT           		equ	1
WMSZ_RIGHT          		equ	2
WMSZ_TOP            		equ	3
WMSZ_TOPLEFT        		equ	4
WMSZ_TOPRIGHT       		equ	5
WMSZ_BOTTOM         		equ	6
WMSZ_BOTTOMLEFT     		equ	7
WMSZ_BOTTOMRIGHT    		equ	8

; WM_NCHITTEST and MOUSEHOOKSTRUCT Mouse Position Codes
HTERROR             		equ	(-2)
HTTRANSPARENT       		equ	(-1)
HTNOWHERE           		equ	0
HTCLIENT            		equ	1
HTCAPTION           		equ	2
HTSYSMENU           		equ	3
HTGROWBOX           		equ	4
HTSIZE              		equ	HTGROWBOX
HTMENU              		equ	5
HTHSCROLL           		equ	6
HTVSCROLL           		equ	7
HTMINBUTTON         		equ	8
HTMAXBUTTON         		equ	9
HTLEFT              		equ	10
HTRIGHT             		equ	11
HTTOP               		equ	12
HTTOPLEFT           		equ	13
HTTOPRIGHT          		equ	14
HTBOTTOM            		equ	15
HTBOTTOMLEFT        		equ	16
HTBOTTOMRIGHT       		equ	17
HTBORDER            		equ	18
HTREDUCE            		equ	HTMINBUTTON
HTZOOM              		equ	HTMAXBUTTON
HTSIZEFIRST         		equ	HTLEFT
HTSIZELAST          		equ	HTBOTTOMRIGHT
HTOBJECT            		equ	19
HTCLOSE             		equ	20
HTHELP              		equ	21

; SendMessageTimeout values
SMTO_NORMAL         equ	00000h
SMTO_BLOCK          equ	00001h
SMTO_ABORTIFHUNG    equ	00002h
SMTO_NOTIMEOUTIFNOTHUNG equ	00008h


; WM_MOUSEACTIVATE Return Codes
MA_ACTIVATE         		equ	1
MA_ACTIVATEANDEAT   		equ	2
MA_NOACTIVATE       		equ	3
MA_NOACTIVATEANDEAT 		equ	4

; WM_SETICON / WM_GETICON Type Codes
ICON_SMALL          		equ	0
ICON_BIG            		equ	1

; Window Styles

WS_OVERLAPPED       	equ	00000000h
WS_POPUP            	equ	80000000h
WS_CHILD            	equ	40000000h
WS_MINIMIZE         	equ	20000000h
WS_VISIBLE          	equ	10000000h
WS_DISABLED         	equ	08000000h
WS_CLIPSIBLINGS     	equ	04000000h
WS_CLIPCHILDREN     	equ	02000000h
WS_MAXIMIZE         	equ	01000000h
WS_CAPTION          	equ	00C00000h	; WS_BORDER | WS_DLGFRAME
WS_BORDER           	equ	00800000h
WS_DLGFRAME         	equ	00400000h
WS_VSCROLL          	equ	00200000h
WS_HSCROLL          	equ	00100000h
WS_SYSMENU          	equ	00080000h
WS_THICKFRAME       	equ	00040000h
WS_GROUP            	equ	00020000h
WS_TABSTOP          	equ	00010000h

WS_MINIMIZEBOX      	equ	00020000h
WS_MAXIMIZEBOX      	equ	00010000h

WS_TILED            	equ	WS_OVERLAPPED
WS_ICONIC           	equ	WS_MINIMIZE
WS_SIZEBOX          	equ	WS_THICKFRAME

; Common Window Styles

WS_OVERLAPPEDWINDOW 	equ	WS_OVERLAPPED | WS_CAPTION |  WS_SYSMENU | WS_THICKFRAME | WS_MINIMIZEBOX | WS_MAXIMIZEBOX
WS_TILEDWINDOW      	equ	WS_OVERLAPPEDWINDOW

WS_POPUPWINDOW      	equ	WS_POPUP | WS_BORDER | WS_SYSMENU

WS_CHILDWINDOW      	equ	WS_CHILD

; Extended Window Styles

WS_EX_DLGMODALFRAME     equ	00000001h
WS_EX_NOPARENTNOTIFY    equ	00000004h
WS_EX_TOPMOST           equ	00000008h
WS_EX_ACCEPTFILES       equ	00000010h
WS_EX_TRANSPARENT       equ	00000020h
WS_EX_MDICHILD          equ	00000040h
WS_EX_TOOLWINDOW        equ	00000080h
WS_EX_WINDOWEDGE        equ	00000100h
WS_EX_CLIENTEDGE        equ	00000200h
WS_EX_CONTEXTHELP       equ	00000400h

WS_EX_RIGHT             equ	00001000h
WS_EX_LEFT              equ	00000000h
WS_EX_RTLREADING        equ	00002000h
WS_EX_LTRREADING        equ	00000000h
WS_EX_LEFTSCROLLBAR     equ	00004000h
WS_EX_RIGHTSCROLLBAR    equ	00000000h

WS_EX_CONTROLPARENT     equ	00010000h
WS_EX_STATICEDGE        equ	00020000h
WS_EX_APPWINDOW         equ	00040000h

WS_EX_OVERLAPPEDWINDOW  equ	WS_EX_WINDOWEDGE | WS_EX_CLIENTEDGE
WS_EX_PALETTEWINDOW     equ	WS_EX_WINDOWEDGE | WS_EX_TOOLWINDOW | WS_EX_TOPMOST

; Class styles
CS_VREDRAW          	equ	00001h
CS_HREDRAW          	equ	00002h
CS_DBLCLKS          	equ	00008h
CS_OWNDC            	equ	00020h
CS_CLASSDC          	equ	00040h
CS_PARENTDC         	equ	00080h
CS_NOCLOSE          	equ	00200h
CS_SAVEBITS         	equ	00800h
CS_BYTEALIGNCLIENT  	equ	01000h
CS_BYTEALIGNWINDOW  	equ	02000h
CS_GLOBALCLASS      	equ	04000h

CS_IME              	equ	000010000h

struc MSG
	.hwnd		resd 1
	.message	resd 1
	.wParam		resd 1
	.lParam		resd 1
	.time		resd 1
	.pt		resb POINT_size
endstruc

OFN_READONLY                 	equ	000000001h
OFN_OVERWRITEPROMPT          	equ	000000002h
OFN_HIDEREADONLY             	equ	000000004h
OFN_NOCHANGEDIR              	equ	000000008h
OFN_SHOWHELP                 	equ	000000010h
OFN_ENABLEHOOK               	equ	000000020h
OFN_ENABLETEMPLATE           	equ	000000040h
OFN_ENABLETEMPLATEHANDLE     	equ	000000080h
OFN_NOVALIDATE               	equ	000000100h
OFN_ALLOWMULTISELECT         	equ	000000200h
OFN_EXTENSIONDIFFERENT       	equ	000000400h
OFN_PATHMUSTEXIST            	equ	000000800h
OFN_FILEMUSTEXIST            	equ	000001000h
OFN_CREATEPROMPT             	equ	000002000h
OFN_SHAREAWARE               	equ	000004000h
OFN_NOREADONLYRETURN         	equ	000008000h
OFN_NOTESTFILECREATE         	equ	000010000h
OFN_NONETWORKBUTTON          	equ	000020000h
OFN_NOLONGNAMES              	equ	000040000h     ; force no long names for 4.x modules
OFN_EXPLORER                 	equ	000080000h     ; new look commdlg
OFN_NODEREFERENCELINKS       	equ	000100000h
OFN_LONGNAMES                	equ	000200000h     ; force long names for 3.x modules
OFN_ENABLEINCLUDENOTIFY      	equ	000400000h     ; send include message to callback
OFN_ENABLESIZING             	equ	000800000h

; Return values for the registered message sent to the hook function
; when a sharing violation occurs.  OFN_SHAREFALLTHROUGH allows the
; filename to be accepted, OFN_SHARENOWARN rejects the name but puts
; up no warning (returned when the app has already put up a warning
; message), and OFN_SHAREWARN puts up the default warning message
; for sharing violations.
;
; Note:  Undefined return values map to OFN_SHAREWARN, but are
;        reserved for future use.

OFN_SHAREFALLTHROUGH     	equ	2
OFN_SHARENOWARN          	equ	1
OFN_SHAREWARN            	equ	0

; Structure used for all file based OpenFileName notifications
struc OFNOTIFY
        .hdr	resd 1
        lpOFN	resd 1
        pszFile	resd 1	; May be NULL
endstruc

; Structure used for all object based OpenFileName notifications
struc OFNOTIFYEX
	.hdr	resd 1
	.lpOFN	resd 1
	.psf	resd 1
	.pidl	resd 1	; May be NULL
endstruc

CDN_FIRST   	equ	0-601
CDN_LAST    	equ	0-699

; Notifications when Open or Save dialog status changes
CDN_INITDONE           		equ	(CDN_FIRST - 00000h)
CDN_SELCHANGE           	equ	(CDN_FIRST - 00001h)
CDN_FOLDERCHANGE        	equ	(CDN_FIRST - 00002h)
CDN_SHAREVIOLATION      	equ	(CDN_FIRST - 00003h)
CDN_HELP                	equ	(CDN_FIRST - 00004h)
CDN_FILEOK              	equ	(CDN_FIRST - 00005h)
CDN_TYPECHANGE          	equ	(CDN_FIRST - 00006h)
CDN_INCLUDEITEM         	equ	(CDN_FIRST - 00007h)

CDM_FIRST       		equ	(WM_USER + 100)
CDM_LAST        		equ	(WM_USER + 200)

; Messages to query information from the Open or Save dialogs

; lParam = pointer to text buffer that gets filled in
; wParam = max number of characters of the text buffer (including NULL)
; return = < 0 if error; number of characters needed (including NULL)
CDM_GETSPEC             	equ	(CDM_FIRST + 00000h)

; lParam = pointer to text buffer that gets filled in
; wParam = max number of characters of the text buffer (including NULL)
; return = < 0 if error; number of characters needed (including NULL)
CDM_GETFILEPATH         	equ	(CDM_FIRST + 00001h)

; lParam = pointer to text buffer that gets filled in
; wParam = max number of characters of the text buffer (including NULL)
; return = < 0 if error; number of characters needed (including NULL)
CDM_GETFOLDERPATH       	equ	(CDM_FIRST + 00002h)

; lParam = pointer to ITEMIDLIST buffer that gets filled in
; wParam = size of the ITEMIDLIST buffer
; return = < 0 if error; length of buffer needed
CDM_GETFOLDERIDLIST     	equ	(CDM_FIRST + 00003h)

; lParam = pointer to a string
; wParam = ID of control to change
; return = not used
CDM_SETCONTROLTEXT      	equ	(CDM_FIRST + 00004h)

; lParam = not used
; wParam = ID of control to change
; return = not used
CDM_HIDECONTROL         	equ	(CDM_FIRST + 00005h)

; lParam = pointer to default extension (no dot)
; wParam = not used
; return = not used
CDM_SETDEFEXT           	equ	(CDM_FIRST + 00006h)

struc OPENFILENAME
	.lStructSize		resd 1
	.hwndOwner		resd 1
	.hInstance		resd 1
	.lpstrFilter		resd 1
	.lpstrCustomFilter	resd 1
	.nMaxCustFilter		resd 1
	.nFilterIndex		resd 1
	.lpstrFile		resd 1
	.nMaxFile		resd 1
	.lpstrFileTitle		resd 1
	.nMaxFileTitle		resd 1
	.lpstrInitialDir	resd 1
	.lpstrTitle		resd 1
	.Flags			resd 1
	.nFileOffset		resw 1
	.nFileExtension		resw 1
	.lpstrDefExt		resd 1
	.lCustData		resd 1
	.lpfnHook		resd 1
	.lpTemplateName		resd 1
endstruc

%endif; __WIN32_INC