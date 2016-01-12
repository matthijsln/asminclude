; NASM include file for DirectDraw up to version 3.0
; Copyright (C) 2002 Matthijs Laan <matthijsln@xs4all.nl>

%ifndef __DDRAW_INC
%define __DDRAW_INC

%include "macros.inc"

stdcall_extern DirectDrawCreate, 3

%define CLSID_DirectDraw		0xe0,0x0e,0xb7,0xd7,0x40,0x43,0xcf,0x11,0xb0,0x63,0x00,0x20,0xaf,0xc2,0xcd,0x35
%define CLSID_DirectDrawClipper		0xa0,0x17,0x38,0x59,0xb3,0x7d,0xcf,0x11,0xa2,0xde,0x00,0xaa,0x00,0xb9,0x33,0x56
%define IID_IDirectDraw			0x80,0xdb,0x14,0x6c,0x33,0xa7,0xce,0x11,0xa5,0x21,0x00,0x20,0xaf,0x0b,0xe5,0x60
%define IID_IDirectDraw2		0xe0,0xf3,0xa6,0xb3,0x43,0x2b,0xcf,0x11,0xa2,0xde,0x00,0xaa,0x00,0xb9,0x33,0x56
%define IID_IDirectDrawSurface		0x81,0xdb,0x14,0x6c,0x33,0xa7,0xce,0x11,0xa5,0x21,0x00,0x20,0xaf,0x0b,0xe5,0x60
%define IID_IDirectDrawSurface2		0x85,0x58,0x80,0x57,0xec,0x6e,0xcf,0x11,0x94,0x41,0xa8,0x23,0x03,0xc1,0x0e,0x27
%define IID_IDirectDrawSurface3		0x00,0x4e,0x04,0xda,0xb2,0x69,0xd0,0x11,0xa1,0xd5,0x00,0xaa,0x00,0xb8,0xdf,0xbb

%define IID_IDirectDrawPalette		0x84,0xdb,0x14,0x6c,0x33,0xa7,0xce,0x11,0xa5,0x21,0x00,0x20,0xaf,0x0b,0xe5,0x60
%define IID_IDirectDrawClipper		0x85,0xdb,0x14,0x6c,0x33,0xa7,0xce,0x11,0xa5,0x21,0x00,0x20,0xaf,0x0b,0xe5,0x60
%define IID_IDirectDrawColorControl	0xe0,0x0e,0x9f,0x4b,0x7e,0x0d,0xd0,0x11,0x9b,0x06,0x00,0xa0,0xc9,0x03,0xa3,0xb8

%macro IUnknown__Methods 0
	.QueryInterface			resd 1	; S_OK is zero, other possibility is E_NOINTERFACE (0x80004002)
	.AddRef				resd 1
	.Release			resd 1
%endmacro

%macro IDirectDraw__Methods 0
	.Compact			resd 1
	.CreateClipper 			resd 1
	.CreatePalette 			resd 1
	.CreateSurface 			resd 1
	.DuplicateSurface		resd 1
	.EnumDisplayModes		resd 1
	.EnumSurfaces			resd 1
	.FlipToGDISurface		resd 1
	.GetCaps			resd 1
	.GetDisplayMode			resd 1
	.GetFourCCCodes			resd 1
	.GetGDISurface 			resd 1
	.GetMonitorFrequency		resd 1
	.GetScanLine			resd 1
	.GetVerticalBlankStatus		resd 1
	.Initialize			resd 1
	.RestoreDisplayMode		resd 1
	.SetCooperativeLevel		resd 1
	.SetDisplayMode			resd 1
	.WaitForVerticalBlank		resd 1
%endmacro

%macro IDirectDraw2__Methods 0
	.GetAvailableVidMem		resd 1
%endmacro

%macro IDirectDrawSurface__Methods 0
	.AddAttachedSurface		resd 1
	.AddOverlayDirtyRect		resd 1
	.Blt				resd 1
	.BltBatch			resd 1
	.BltFast			resd 1
	.DeleteAttachedSurface		resd 1
	.EnumAttachedSurfaces 		resd 1
	.EnumOverlayZOrders		resd 1
	.Flip 				resd 1
	.GetAttachedSurface		resd 1
	.GetBltStatus 			resd 1
	.GetCaps			resd 1
	.GetClipper			resd 1
	.GetColorKey			resd 1
	.GetDC				resd 1
	.GetFlipStatus			resd 1
	.GetOverlayPosition		resd 1
	.GetPalette			resd 1
	.GetPixelFormat			resd 1
	.GetSurfaceDesc			resd 1
	.Initialize			resd 1
	.IsLost				resd 1
	.Lock 				resd 1
	.ReleaseDC			resd 1
	.Restore			resd 1
	.SetClipper			resd 1
	.SetColorKey			resd 1
	.SetOverlayPosition		resd 1
	.SetPalette			resd 1
	.Unlock				resd 1
	.UpdateOverlay			resd 1
	.UpdateOverlayDisplay 		resd 1
	.UpdateOverlayZOrder		resd 1
%endmacro

%macro IDirectDrawSurface2__Methods 0
	.GetDDInterface			resd 1
	.PageLock			resd 1
	.PageUnlock			resd 1
%endmacro

%macro IDirectDrawSurface3__Methods 0
	.SetSurfaceDesc			resd 1
%endmacro

%macro IDirectDrawClipper__Methods 0
	.GetClipList			resd 1
	.GetHWnd			resd 1
	.Initialize			resd 1
	.IsClipListChanged		resd 1
	.SetClipList			resd 1
	.SetHWnd			resd 1
%endmacro

struc IDirectDraw
	IUnknown__Methods
	IDirectDraw__Methods
endstruc

struc IDirectDraw2
	IUnknown__Methods
	IDirectDraw__Methods
	IDirectDraw2__Methods
endstruc

struc IDirectDrawSurface
	IUnknown__Methods
	IDirectDrawSurface__Methods
endstruc

struc IDirectDrawSurface2
	IUnknown__Methods
	IDirectDrawSurface__Methods
	IDirectDrawSurface2__Methods
endstruc

struc IDirectDrawSurface3
	IUnknown__Methods
	IDirectDrawSurface__Methods
	IDirectDrawSurface2__Methods
	IDirectDrawSurface3__Methods
endstruc

struc IDirectDrawClipper
	IUnknown__Methods
	IDirectDrawClipper__Methods
endstruc

DDSCL_FULLSCREEN			equ	000000001h
DDSCL_ALLOWREBOOT			equ	000000002h
DDSCL_NOWINDOWCHANGES			equ	000000004h
DDSCL_NORMAL				equ	000000008h
DDSCL_EXCLUSIVE 			equ	000000010h
DDSCL_ALLOWMODEX			equ	000000040h
DDSCL_SETFOCUSWINDOW			equ	000000080h
DDSCL_SETDEVICEWINDOW			equ	000000100h
DDSCL_CREATEDEVICEWINDOW		equ	000000200h
DDSCL_MULTITHREADED			equ	000000400h
DDSCL_FPUSETUP				equ	000000800h

; Direct Draw Capability Flags

; These flags are used to describe the capabilities of a given Surface.
; All flags are bit flags.

; DIRECTDRAWSURFACE CAPABILITY FLAGS

; This bit is reserved. It should not be specified.
DDSCAPS_RESERVED1		equ	000000001h

; Indicates that this surface contains alpha-only information.
; (To determine if a surface is RGBA/YUVA, the pixel format must be
; interrogated.)
DDSCAPS_ALPHA			equ	000000002h

; Indicates that this surface is a backbuffer.	 It is generally
; set by CreateSurface when the DDSCAPS_FLIP capability bit is set.
; It indicates that this surface is THE back buffer of a surface
; flipping structure.	DirectDraw supports N surfaces in a
; surface flipping structure.	Only the surface that immediately
; precedeces the DDSCAPS_FRONTBUFFER has this capability bit set.
; The other surfaces are identified as back buffers by the presence
; of the DDSCAPS_FLIP capability, their attachment order, and the
; absence of the DDSCAPS_FRONTBUFFER and DDSCAPS_BACKBUFFER
; capabilities.  The bit is sent to CreateSurface when a standalone
; back buffer is being created.  This surface could be attached to
; a front buffer and/or back buffers to form a flipping surface
; structure after the CreateSurface call.  See AddAttachments for
; a detailed description of the behaviors in this case.
DDSCAPS_BACKBUFFER		equ	000000004h

; Indicates a complex surface structure is being described.  A
; complex surface structure results in the creation of more than
; one surface.	 The additional surfaces are attached to the root
; surface.  The complex structure can only be destroyed by
; destroying the root.
DDSCAPS_COMPLEX			equ	000000008h

; Indicates that this surface is a part of a surface flipping structure.
; When it is passed to CreateSurface the DDSCAPS_FRONTBUFFER and
; DDSCAP_BACKBUFFER bits are not set.	They are set by CreateSurface
; on the resulting creations.	The dwBackBufferCount field in the
; DDSURFACEDESC structure must be set to at least 1 in order for
; the CreateSurface call to succeed.  The DDSCAPS_COMPLEX capability
; must always be set with creating multiple surfaces through CreateSurface.
DDSCAPS_FLIP			equ	000000010h

; Indicates that this surface is THE front buffer of a surface flipping
; structure.  It is generally set by CreateSurface when the DDSCAPS_FLIP
; capability bit is set.
; If this capability is sent to CreateSurface then a standalonw front buffer
; is created.	This surface will not have the DDSCAPS_FLIP capability.
; It can be attached to other back buffers to form a flipping structure.
; See AddAttachments for a detailed description of the behaviors in this
; case.
DDSCAPS_FRONTBUFFER		equ	000000020h

; Indicates that this surface is any offscreen surface that is not an overlay,
; texture, zbuffer, front buffer, back buffer, or alpha surface.  It is used
; to identify plain vanilla surfaces.
DDSCAPS_OFFSCREENPLAIN		equ	000000040h

; Indicates that this surface is an overlay.  It may or may not be directly visible
; depending on whether or not it is currently being overlayed onto the primary
; surface.  DDSCAPS_VISIBLE can be used to determine whether or not it is being
; overlayed at the moment.
DDSCAPS_OVERLAY			equ	000000080h

; Indicates that unique DirectDrawPalette objects can be created and
; attached to this surface.
DDSCAPS_PALETTE			equ	000000100h

; Indicates that this surface is the primary surface.	The primary
; surface represents what the user is seeing at the moment.
DDSCAPS_PRIMARYSURFACE		equ	000000200h

; Indicates that this surface is the primary surface for the left eye.
; The primary surface for the left eye represents what the user is seeing
; at the moment with the users left eye.  When this surface is created the
; DDSCAPS_PRIMARYSURFACE represents what the user is seeing with the users
; right eye.
DDSCAPS_PRIMARYSURFACELEFT	equ	000000400h

; Indicates that this surface memory was allocated in system memory
DDSCAPS_SYSTEMMEMORY		equ	000000800h

; Indicates that this surface can be used as a 3D texture.  It does not
; indicate whether or not the surface is being used for that purpose.
DDSCAPS_TEXTURE			equ	000001000h

; Indicates that a surface may be a destination for 3D rendering.  This
; bit must be set in order to query for a Direct3D Device Interface
; from this surface.
DDSCAPS_3DDEVICE                equ	000002000h

; Indicates that this surface exists in video memory.
DDSCAPS_VIDEOMEMORY		equ	000004000h

; Indicates that changes made to this surface are immediately visible.
; It is always set for the primary surface and is set for overlays while
; they are being overlayed and texture maps while they are being textured.
DDSCAPS_VISIBLE			equ	000008000h

; Indicates that only writes are permitted to the surface.  Read accesses
; from the surface may or may not generate a protection fault, but the
; results of a read from this surface will not be meaningful.	READ ONLY.
DDSCAPS_WRITEONLY		equ	000010000h

; Indicates that this surface is a z buffer. A z buffer does not contain
; displayable information.  Instead it contains bit depth information that is
; used to determine which pixels are visible and which are obscured.
DDSCAPS_ZBUFFER			equ	000020000h

; Indicates surface will have a DC associated long term
DDSCAPS_OWNDC			equ	000040000h

; Indicates surface should be able to receive live video
DDSCAPS_LIVEVIDEO		equ	000080000h

; Indicates surface should be able to have a stream decompressed
; to it by the hardware.
DDSCAPS_HWCODEC			equ	000100000h

; Surface is a ModeX surface.
DDSCAPS_MODEX			equ	000200000h

; Indicates surface is one level of a mip-map. This surface will
; be attached to other DDSCAPS_MIPMAP surfaces to form the mip-map.
; This can be done explicitly, by creating a number of surfaces and
; attaching them with AddAttachedSurface or by implicitly by CreateSurface.
; If this bit is set then DDSCAPS_TEXTURE must also be set.
DDSCAPS_MIPMAP                  equ	000400000h

; This bit is reserved. It should not be specified.
DDSCAPS_RESERVED2               equ	000800000h

; Indicates that memory for the surface is not allocated until the surface
; is loaded (via the Direct3D texture Load() function).
DDSCAPS_ALLOCONLOAD             equ	004000000h

; Indicates that the surface will recieve data from a video port.
DDSCAPS_VIDEOPORT		equ	008000000h

; Indicates that a video memory surface is resident in true, local video
; memory rather than non-local video memory. If this flag is specified then
; so must DDSCAPS_VIDEOMEMORY. This flag is mutually exclusive with
; DDSCAPS_NONLOCALVIDMEM.
DDSCAPS_LOCALVIDMEM             equ	010000000h

; Indicates that a video memory surface is resident in non-local video
; memory rather than true, local video memory. If this flag is specified
; then so must DDSCAPS_VIDEOMEMORY. This flag is mutually exclusive with
; DDSCAPS_LOCALVIDMEM.
DDSCAPS_NONLOCALVIDMEM          equ	020000000h

; Indicates that this surface is a standard VGA mode surface, and not a
; ModeX surface. (This flag will never be set in combination with the
; DDSCAPS_MODEX flag).
DDSCAPS_STANDARDVGAMODE         equ	040000000h

; Indicates that this surface will be an optimized surface. This flag is
; currently only valid in conjunction with the DDSCAPS_TEXTURE flag. The surface
; will be created without any underlying video memory until loaded.
DDSCAPS_OPTIMIZED               equ	080000000h

; ddsCaps field is valid.
DDSD_CAPS			equ	000000001h	; default

; dwHeight field is valid.
DDSD_HEIGHT			equ	000000002h

; dwWidth field is valid.
DDSD_WIDTH			equ	000000004h

; lPitch is valid.
DDSD_PITCH			equ	000000008h

; dwBackBufferCount is valid.
DDSD_BACKBUFFERCOUNT		equ	000000020h

; dwZBufferBitDepth is valid.
DDSD_ZBUFFERBITDEPTH		equ	000000040h

; dwAlphaBitDepth is valid.
DDSD_ALPHABITDEPTH		equ	000000080h

; lpSurface is valid.
DDSD_LPSURFACE			equ	000000800h

; ddpfPixelFormat is valid.
DDSD_PIXELFORMAT		equ	000001000h

; ddckCKDestOverlay is valid.
DDSD_CKDESTOVERLAY		equ	000002000h

; ddckCKDestBlt is valid.
DDSD_CKDESTBLT			equ	000004000h

; ddckCKSrcOverlay is valid.
DDSD_CKSRCOVERLAY		equ	000008000h

; ddckCKSrcBlt is valid.
DDSD_CKSRCBLT			equ	000010000h

; dwMipMapCount is valid.
DDSD_MIPMAPCOUNT        	equ	000020000h

;* dwRefreshRate is valid
DDSD_REFRESHRATE		equ	000040000h

; dwLinearSize is valid
DDSD_LINEARSIZE			equ	000080000h

; All input fields are valid.
DDSD_ALL			equ	0000ff9eeh

; DIRECTDRAW BLT FLAGS

; Use the alpha information in the pixel format or the alpha channel surface
; attached to the destination surface as the alpha channel for this blt.
DDBLT_ALPHADEST			equ	000000001h

; Use the dwConstAlphaDest field in the DDBLTFX structure as the alpha channel
; for the destination surface for this blt.
DDBLT_ALPHADESTCONSTOVERRIDE	equ	000000002h

; The NEG suffix indicates that the destination surface becomes more
; transparent as the alpha value increases. (0 is opaque)
DDBLT_ALPHADESTNEG		equ	000000004h

; Use the lpDDSAlphaDest field in the DDBLTFX structure as the alpha
; channel for the destination for this blt.
DDBLT_ALPHADESTSURFACEOVERRIDE	equ	000000008h

; Use the dwAlphaEdgeBlend field in the DDBLTFX structure as the alpha channel
; for the edges of the image that border the color key colors.
DDBLT_ALPHAEDGEBLEND		equ	000000010h

; Use the alpha information in the pixel format or the alpha channel surface
; attached to the source surface as the alpha channel for this blt.
DDBLT_ALPHASRC			equ	000000020h

; Use the dwConstAlphaSrc field in the DDBLTFX structure as the alpha channel
; for the source for this blt.
DDBLT_ALPHASRCCONSTOVERRIDE	equ	000000040h

; The NEG suffix indicates that the source surface becomes more transparent
; as the alpha value increases. (0 is opaque)
DDBLT_ALPHASRCNEG		equ	000000080h

; Use the lpDDSAlphaSrc field in the DDBLTFX structure as the alpha channel
; for the source for this blt.
DDBLT_ALPHASRCSURFACEOVERRIDE	equ	000000100h

; Do this blt asynchronously through the FIFO in the order received.  If
; there is no room in the hardware FIFO fail the call.
DDBLT_ASYNC			equ	000000200h

; Uses the dwFillColor field in the DDBLTFX structure as the RGB color
; to fill the destination rectangle on the destination surface with.
DDBLT_COLORFILL			equ	000000400h

; Uses the dwDDFX field in the DDBLTFX structure to specify the effects
; to use for the blt.
DDBLT_DDFX			equ	000000800h

; Uses the dwDDROPS field in the DDBLTFX structure to specify the ROPS
; that are not part of the Win32 API.
DDBLT_DDROPS			equ	000001000h

; Use the color key associated with the destination surface.
DDBLT_KEYDEST			equ	000002000h

; Use the dckDestColorkey field in the DDBLTFX structure as the color key
; for the destination surface.
DDBLT_KEYDESTOVERRIDE		equ	000004000h

; Use the color key associated with the source surface.
DDBLT_KEYSRC			equ	000008000h

; Use the dckSrcColorkey field in the DDBLTFX structure as the color key
; for the source surface.
DDBLT_KEYSRCOVERRIDE		equ	000010000h

; Use the dwROP field in the DDBLTFX structure for the raster operation
; for this blt.  These ROPs are the same as the ones defined in the Win32 API.
DDBLT_ROP			equ	000020000h

; Use the dwRotationAngle field in the DDBLTFX structure as the angle
; (specified in 1/100th of a degree) to rotate the surface.
DDBLT_ROTATIONANGLE		equ	000040000h

; Z-buffered blt using the z-buffers attached to the source and destination
; surfaces and the dwZBufferOpCode field in the DDBLTFX structure as the
; z-buffer opcode.
DDBLT_ZBUFFER			equ	000080000h

; Z-buffered blt using the dwConstDest Zfield and the dwZBufferOpCode field
; in the DDBLTFX structure as the z-buffer and z-buffer opcode respectively
; for the destination.
DDBLT_ZBUFFERDESTCONSTOVERRIDE	equ	000100000h

; Z-buffered blt using the lpDDSDestZBuffer field and the dwZBufferOpCode
; field in the DDBLTFX structure as the z-buffer and z-buffer opcode
; respectively for the destination.
DDBLT_ZBUFFERDESTOVERRIDE	equ	000200000h

; Z-buffered blt using the dwConstSrcZ field and the dwZBufferOpCode field
; in the DDBLTFX structure as the z-buffer and z-buffer opcode respectively
; for the source.
DDBLT_ZBUFFERSRCCONSTOVERRIDE	equ	000400000h

; Z-buffered blt using the lpDDSSrcZBuffer field and the dwZBufferOpCode
; field in the DDBLTFX structure as the z-buffer and z-buffer opcode
; respectively for the source.
DDBLT_ZBUFFERSRCOVERRIDE        equ	000800000h

; wait until the device is ready to handle the blt
; this will cause blt to not return DDERR_WASSTILLDRAWING
DDBLT_WAIT                      equ	001000000h

; Uses the dwFillDepth field in the DDBLTFX structure as the depth value
; to fill the destination rectangle on the destination Z-buffer surface
; with.
DDBLT_DEPTHFILL			equ	002000000h

; BLTFAST FLAGS

DDBLTFAST_NOCOLORKEY            equ	000000000h
DDBLTFAST_SRCCOLORKEY           equ	000000001h
DDBLTFAST_DESTCOLORKEY          equ	000000002h
DDBLTFAST_WAIT                  equ	000000010h

; FLIP FLAGS

DDFLIP_WAIT                     equ	000000001h

; Indicates that the target surface contains the even field of video data.
; This flag is only valid with an overlay surface.
DDFLIP_EVEN                     equ	000000002h

; Indicates that the target surface contains the odd field of video data.
; This flag is only valid with an overlay surface.
DDFLIP_ODD                      equ	000000004h

; DIRECTDRAWSURFACE LOCK FLAGS

; The default.	 Set to indicate that Lock should return a valid memory pointer
; to the top of the specified rectangle.  If no rectangle is specified then a
; pointer to the top of the surface is returned.
DDLOCK_SURFACEMEMORYPTR		equ	000000000h	; default

; Set to indicate that Lock should wait until it can obtain a valid memory
; pointer before returning.  If this bit is set, Lock will never return
; DDERR_WASSTILLDRAWING.
DDLOCK_WAIT			equ	000000001h

; Set if an event handle is being passed to Lock.  Lock will trigger the event
; when it can return the surface memory pointer requested.
DDLOCK_EVENT			equ	000000002h

; Indicates that the surface being locked will only be read from.
DDLOCK_READONLY			equ	000000010h

; Indicates that the surface being locked will only be written to
DDLOCK_WRITEONLY		equ	000000020h


; Indicates that a system wide lock should not be taken when this surface
; is locked. This has several advantages (cursor responsiveness, ability
; to call more Windows functions, easier debugging) when locking video
; memory surfaces. However, an application specifying this flag must
; comply with a number of conditions documented in the help file.
; Furthermore, this flag cannot be specified when locking the primary.
DDLOCK_NOSYSLOCK                equ	000000800h

; DIRECTDRAW GETBLTSTATUS FLAGS

; is it OK to blt now?
DDGBS_CANBLT			equ	000000001h

; is the blt to the surface finished?
DDGBS_ISBLTDONE			equ	000000002h

; DIRECTDRAWSURFACE BLT FX FLAGS

; If stretching, use arithmetic stretching along the Y axis for this blt.
DDBLTFX_ARITHSTRETCHY		equ	000000001h

; Do this blt mirroring the surface left to right.  Spin the
; surface around its y-axis.
DDBLTFX_MIRRORLEFTRIGHT		equ	000000002h

; Do this blt mirroring the surface up and down.  Spin the surface
; around its x-axis.
DDBLTFX_MIRRORUPDOWN		equ	000000004h

; Schedule this blt to avoid tearing.
DDBLTFX_NOTEARING		equ	000000008h

; Do this blt rotating the surface one hundred and eighty degrees.
DDBLTFX_ROTATE180		equ	000000010h

; Do this blt rotating the surface two hundred and seventy degrees.
DDBLTFX_ROTATE270		equ	000000020h

; Do this blt rotating the surface ninety degrees.
DDBLTFX_ROTATE90		equ	000000040h

; Do this z blt using dwZBufferLow and dwZBufferHigh as  range values
; specified to limit the bits copied from the source surface.
DDBLTFX_ZBUFFERRANGE		equ	000000080h

; Do this z blt adding the dwZBufferBaseDest to each of the sources z values
; before comparing it with the desting z values.
DDBLTFX_ZBUFFERBASEDEST		equ	000000100h

struc DDCOLORKEY
	.dwColorSpaceLowValue	resd 1
	.dwColorSpaceHighValue	resd 1
endstruc

struc DDPIXELFORMAT
	.dwSize			resd 1
	.dwFlags		resd 1
	.dwFourCC		resd 1

	.dwRGBBitCount:
	.dwYUVBitCount:
	.dwZBufferBitDepth:
	.dwAlphaBitDepth	resd 1

	.dwRBitMask:
	.dwYBitMask		resd 1

	.dwGBitMask:
	.dwUBitMask		resd 1

	.dwBBitMask:
	.dwVBitMask		resd 1

	.dwRGBAlphaBitMask:
	.dwYUVAlphaBitMask:
	.dwRGBZBitMask:
	.dwYUVZBitMask		resd 1
endstruc

struc DDCAPS
	.dwCaps	resd 1
endstruc

struc DDSURFACEDESC
	.dwSize			resd 1
	.dwFlags		resd 1
	.dwHeight		resd 1
	.dwWidth		resd 1

	.lPitch:
	.dwLinearSize		resd 1

	.dwBackBufferCount	resd 1

	.dwMipMapCount:
	.dwZBufferBitDepth:
	.dwRefreshRate		resd 1

	.dwAlphaBitDepth	resd 1
	.dwReserved		resd 1
	.lpSurface		resd 1

	.ddckCKDestOverlay	resb DDCOLORKEY_size
	.ddckCKDestBlt		resb DDCOLORKEY_size
	.ddckCKSrcOverlay	resb DDCOLORKEY_size
	.ddckCKSrcBlt		resb DDCOLORKEY_size

	.ddpfPixelFormat	resb DDPIXELFORMAT_size

	.ddsCaps		resb DDCAPS_size
endstruc

struc DDBLTFX
	.dwSize			resd 1
	.dwDDFX			resd 1
	.dwROP			resd 1
	.dwDDROP		resd 1
	.dwRotationAngle	resd 1
	.dwZBufferOpCode	resd 1
	.dwZBufferLow		resd 1
	.dwZBufferHigh		resd 1
	.dwZBufferBaseDest	resd 1
	.dwZDestConstBitDepth	resd 1

	.dwZDestConst:
	.lpDDSZBufferDest	resd 1

	.dwZSrcConstBitDepth	resd 1

	.dwZSrcConst:
	.lpDDSZBufferSrc	resd 1

	.dwAlphaEdgeBlendBitDepth	resd 1
	.dwAlphaEdgeBlend		resd 1
	.dwReserved			resd 1
	.dwAlphaDestConstBitDepth	resd 1

	.dwAlphaDestConst:
	.lpDDSAlphaDest			resd 1

	.dwAlphaSrcConstBitDepth	resd 1

	.dwAlphaSrcConst:
	.lpDDSAlphaSrc		resd 1

	.dwFillColor:
	.dwFillDepth:
	.dwFillPixel:
	.lpDDSPattern		resd 1

	.ddckDestColorkey	resb DDCOLORKEY_size
	.ddckSrcColorkey	resb DDCOLORKEY_size
endstruc


%endif; __DDRAW_INC