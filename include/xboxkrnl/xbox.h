// ******************************************************************
// * 
// * proj : OpenXDK
// *
// * desc : Open Source XBox Development Kit
// *
// * file : xbox.h
// *
// * note : XBox Kernel Declarations
// *
// ******************************************************************
#ifndef XBOX_H
#define XBOX_H

// ******************************************************************
// * AvGetSavedDataAddress
// ******************************************************************
XBSYSAPI EXPORTNUM(1) PVOID NTAPI AvGetSavedDataAddress();

// ******************************************************************
// * AvSendTVEncoderOption
// ******************************************************************
XBSYSAPI EXPORTNUM(2) VOID NTAPI AvSendTVEncoderOption
(
	IN	PVOID	RegisterBase, 
	IN	ULONG	Option, 
	IN	ULONG	Param, 
	OUT	ULONG	*Result
);

// ******************************************************************
// * AvSetDisplayMode
// ******************************************************************
XBSYSAPI EXPORTNUM(4) ULONG NTAPI AvSetDisplayMode
(
	IN PVOID	RegisterBase,
	IN ULONG	Step,
	IN ULONG	Mode,
	IN ULONG	Format,
	IN ULONG	Pitch,
	IN ULONG	FrameBuffer
);

// ******************************************************************
// * AvSetSavedDataAddress
// ******************************************************************
XBSYSAPI EXPORTNUM(4) VOID NTAPI AvSetSavedDataAddress
(
	IN PVOID	Address
);

XBSYSAPI VOID *FscGetCacheSize;
XBSYSAPI VOID *FscInvalidateIdleBlocks;
XBSYSAPI VOID *FscSetCacheSize;
XBSYSAPI VOID *KdDebuggerEnabled;
XBSYSAPI VOID *KdDebuggerNotPresent;
XBSYSAPI VOID *KfRaiseIrql;
XBSYSAPI VOID *KfLowerIrql;
XBSYSAPI VOID *KiBugCheckData;
XBSYSAPI VOID *KiUnlockDispatcherDatabase;
XBSYSAPI VOID *LaunchDataPage;
XBSYSAPI VOID *PhyGetLinkState;
XBSYSAPI VOID *PhyInitialize;

// ******************************************************************
// * XboxEEPROMKey
// ******************************************************************
XBSYSAPI EXPORTNUM(321) UCHAR XboxEEPROMKey[16];

XBSYSAPI VOID *XboxHardwareInfo;
XBSYSAPI VOID *XboxHDKey;
XBSYSAPI VOID *XboxKrnlVersion;
XBSYSAPI VOID *XboxSignatureKey;
XBSYSAPI VOID *XeImageFileName;
XBSYSAPI VOID *XeLoadSection;
XBSYSAPI VOID *XeUnloadSection;
XBSYSAPI VOID *XcSHAInit;
XBSYSAPI VOID *XcSHAUpdate;
XBSYSAPI VOID *XcSHAFinal;
XBSYSAPI VOID *XcRC4Key;
XBSYSAPI VOID *XcRC4Crypt;
XBSYSAPI VOID *XcHMAC;
XBSYSAPI VOID *XcPKEncPublic;
XBSYSAPI VOID *XcPKDecPrivate;
XBSYSAPI VOID *XcPKGetKeyLen;
XBSYSAPI VOID *XcVerifyPKCS1Signature;
XBSYSAPI VOID *XcModExp;
XBSYSAPI VOID *XcDESKeyParity;
XBSYSAPI VOID *XcKeyTable;
XBSYSAPI VOID *XcBlockCrypt;
XBSYSAPI VOID *XcBlockCryptCBC;
XBSYSAPI VOID *XcCryptService;
XBSYSAPI VOID *XcUpdateCrypto;
XBSYSAPI VOID *XboxLANKey;
XBSYSAPI VOID *XboxAlternateSignatureKeys;
XBSYSAPI VOID *XePublicKeyData;
XBSYSAPI VOID *IdexChannelObject;
XBSYSAPI VOID *xsnprintf;     // prefixed with "x" to avoid xlibc collisions
XBSYSAPI VOID *xsprintf;      // ""
XBSYSAPI VOID *xvsnprintf;    // ""
XBSYSAPI VOID *xvsprintf;     // ""

#endif


