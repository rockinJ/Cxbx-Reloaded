// ******************************************************************
// *
// *    .,-:::::    .,::      .::::::::.    .,::      .:
// *  ,;;;'````'    `;;;,  .,;;  ;;;'';;'   `;;;,  .,;;
// *  [[[             '[[,,[['   [[[__[[\.    '[[,,[['
// *  $$$              Y$$$P     $$""""Y$$     Y$$$P
// *  `88bo,__,o,    oP"``"Yo,  _88o,,od8P   oP"``"Yo,
// *    "YUMMMMMP",m"       "Mm,""YUMMMP" ,m"       "Mm,
// *
// *   Cxbx->Win32->CxbxKrnl->DSound.1.0.5788.cpp
// *
// *  This file is part of the Cxbx project.
// *
// *  Cxbx and Cxbe are free software; you can redistribute them
// *  and/or modify them under the terms of the GNU General Public
// *  License as published by the Free Software Foundation; either
// *  version 2 of the license, or (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// *  GNU General Public License for more details.
// *
// *  You should have recieved a copy of the GNU General Public License
// *  along with this program; see the file COPYING.
// *  If not, write to the Free Software Foundation, Inc.,
// *  59 Temple Place - Suite 330, Bostom, MA 02111-1307, USA.
// *
// *  (c) 2002-2003 Aaron Robinson <caustik@caustik.com>
// *
// *  All rights reserved
// *
// ******************************************************************

// ******************************************************************
// * CMcpxBuffer_SetBufferData
// ******************************************************************
OOVPA_XREF(CMcpxBuffer_SetBufferData, 5788, 9,

    XREF_DSSETBUFFERDATA,
    XRefZero)

        // CMcpxBuffer_SetBufferData+0x1E : cmp eax, ebx
        { 0x1E, 0x3B }, // (Offset,Value)-Pair #1
        { 0x1F, 0xC3 }, // (Offset,Value)-Pair #2

        // CMcpxBuffer_SetBufferData+0x20 : jz +0x0C
        { 0x20, 0x74 }, // (Offset,Value)-Pair #3
        { 0x21, 0x0C }, // (Offset,Value)-Pair #4

        // CMcpxBuffer_SetBufferData+0x45 : mov [esi+0xBC], ecx
        { 0x45, 0x89 }, // (Offset,Value)-Pair #5
        { 0x46, 0x8E }, // (Offset,Value)-Pair #6
        { 0x47, 0xBC }, // (Offset,Value)-Pair #7

        // CMcpxBuffer_SetBufferData+0x89 : retn 0x08
        { 0x89, 0xC2 }, // (Offset,Value)-Pair #8
        { 0x8A, 0x08 }, // (Offset,Value)-Pair #9
OOVPA_END;

// ******************************************************************
// * CMcpxBuffer_Play
// ******************************************************************
OOVPA_XREF(CMcpxBuffer_Play, 5788, 11,

    XREF_DirectSound_CMcpxBuffer_Play,
    XRefZero)

        // CMcpxBuffer_Play+0x0B : test dword ptr [eax+8], 0x182000
        { 0x0B, 0xF7 }, // (Offset,Value)-Pair #1
        { 0x0C, 0x40 }, // (Offset,Value)-Pair #2

        // CMcpxBuffer_Play+0x13 : jz +0x09
        { 0x13, 0x74 }, // (Offset,Value)-Pair #3
        { 0x14, 0x05 }, // (Offset,Value)-Pair #4

        // CMcpxBuffer_Play+0x32 : test byte ptr [esi+0x12], 0x42
        { 0x32, 0xF6 }, // (Offset,Value)-Pair #5
        { 0x33, 0x46 }, // (Offset,Value)-Pair #6
        { 0x34, 0x12 }, // (Offset,Value)-Pair #7
        { 0x35, 0x42 }, // (Offset,Value)-Pair #8

        // CMcpxBuffer_Play+0xA4 : call dword ptr [eax+0x1C]
        { 0xA4, 0xFF }, // (Offset,Value)-Pair #9
        { 0xA5, 0x50 }, // (Offset,Value)-Pair #10
        { 0xA6, 0x1C }, // (Offset,Value)-Pair #11
OOVPA_END;

// ******************************************************************
// * DirectSound::CMcpxBuffer::Play
// ******************************************************************
OOVPA_XREF(DirectSound_CMcpxBuffer_Play2, 5788, 7,

    XREF_DirectSound_CMcpxBuffer_Play2,
    XRefZero)

	{ 0x17, 0x43 },
	{ 0x2D, 0xF6 },
	{ 0x2E, 0xC3 },
	{ 0x2F, 0x04 },
        { 0xAD, 0xC2 },
	{ 0xAE, 0x04 },
	{ 0xAF, 0x00 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundBuffer::Play
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_Play, 5788, 9,

    XREF_DSOUNDPLAY2,
    XRefZero)

        { 0x0C, 0x00 },
        { 0x14, 0x74 },
        { 0x21, 0xB8 },
        { 0x2A, 0x24 },
        { 0x2E, 0x20 },
        { 0x33, 0x18 },
        { 0x39, 0x85 },
        { 0x44, 0xFF },
        { 0x4B, 0xC7 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSound::CommitDeferredSettings
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSound_CommitDeferredSettings, 5788, 7,

    XREF_COMMITDEFERREDSETTINGSA,
    XRefZero)

        { 0x12, 0xC0 },
        { 0x27, 0xB8 },
        { 0x3A, 0x75 },
        { 0x52, 0x8D },
        { 0x62, 0x8B },
        { 0x76, 0x89 },
        { 0x8E, 0xFF },
OOVPA_END;

// ******************************************************************
// * DirectSound::CMcpxBuffer::SetCurrentPosition
// ******************************************************************
OOVPA_XREF(DirectSound_CMcpxBuffer_SetCurrentPosition, 5788, 7,

    XREF_DSBUFFERSETCURRENTPOSITIONB,
    XRefZero)

        { 0x1D, 0x00 },
        { 0x3C, 0x66 },
        { 0x5B, 0x00 },
        { 0x7C, 0x8D },
        { 0x99, 0xD1 },
        { 0xB8, 0x89 },
        { 0xDB, 0x5F },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundBuffer::SetCurrentPosition
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetCurrentPosition, 5788, 8,

    XREF_DSBUFFERSETCURRENTPOSITIONA,
    XRefOne)

        XREF_ENTRY( 0x35, XREF_DSBUFFERSETCURRENTPOSITIONB ),

        { 0x0C, 0x00 },
        { 0x14, 0x74 },
        { 0x21, 0xB8 },
        { 0x2A, 0x24 },
        { 0x39, 0x85 },
        { 0x44, 0xFF },
        { 0x4B, 0xC7 },
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetCurrentPosition
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetCurrentPosition, 5788, 8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x15, XREF_DSBUFFERSETCURRENTPOSITIONA ),

        { 0x02, 0x24 },
        { 0x06, 0x24 },
        { 0x0A, 0x83 },
        { 0x0E, 0xD9 },
        { 0x12, 0xC8 },
        { 0x19, 0xC2 },
        { 0x1A, 0x08 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSound::SetRolloffFactor
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSound_SetRolloffFactor, 5788, 9,

    XREF_SETROLLOFFFACTORA,
    XRefZero)

        { 0x0C, 0x00 },
        { 0x16, 0x68 },
        { 0x22, 0x05 },
        { 0x2E, 0x08 },
        { 0x35, 0x6C },
        { 0x3A, 0x48 },
        { 0x4A, 0x85 },
        { 0x53, 0xFF },
        { 0x5E, 0x00 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSound::SetDopplerFactor
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSound_SetDopplerFactor, 5788, 9,

    XREF_SETDOPPLERFACTOR,
    XRefZero)

        { 0x0C, 0x00 },
        { 0x16, 0x68 },
        { 0x22, 0x05 },
        { 0x2E, 0x08 },
        { 0x35, 0x70 },
        { 0x3A, 0x48 },
        { 0x4A, 0x85 },
        { 0x53, 0xFF },
        { 0x5E, 0x00 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundBuffer::SetMaxDistance
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetMaxDistance, 5788, 8,

    XREF_DSBUFFERSETMAXDISTANCE,
    XRefOne)

        XREF_ENTRY( 0x3A, XREF_DSVOICESETMAXDISTANCE ),

        { 0x0C, 0x00 },
        { 0x14, 0x74 },
        { 0x21, 0xB8 },
        { 0x2A, 0x24 },
        { 0x35, 0xFF },
        { 0x40, 0x8B },
        { 0x4F, 0x8B },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundBuffer::SetMinDistance
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetMinDistance, 5788, 8,

    XREF_DSBUFFERSETMINDISTANCE,
    XRefOne)

        XREF_ENTRY( 0x3A, XREF_DSVOICESETMINDISTANCE ),

        { 0x0C, 0x00 },
        { 0x14, 0x74 },
        { 0x21, 0xB8 },
        { 0x2A, 0x24 },
        { 0x35, 0xFF },
        { 0x40, 0x8B },
        { 0x4F, 0x8B },
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetMaxDistance
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetMaxDistance, 5788, 8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x1D, XREF_DSBUFFERSETMAXDISTANCE ),

        { 0x03, 0x0C },
        { 0x08, 0x8B },
        { 0x0D, 0x8B },
        { 0x12, 0x83 },
        { 0x17, 0x1B },
        { 0x1C, 0xE8 },
        { 0x21, 0xC2 },
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetMinDistance
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetMinDistance, 5788, 8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x1D, XREF_DSBUFFERSETMINDISTANCE ),

        { 0x03, 0x0C },
        { 0x08, 0x8B },
        { 0x0D, 0x8B },
        { 0x12, 0x83 },
        { 0x17, 0x1B },
        { 0x1C, 0xE8 },
        { 0x21, 0xC2 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundVoice::SetVolume
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetVolume, 5788, 7,

    XREF_DirectSound_CDirectSoundVoice_SetVolume,
    XRefZero)

        { 0x02, 0x24 },
        { 0x06, 0x10 },
        { 0x0A, 0x08 },
        { 0x0E, 0x89 },
        { 0x12, 0x49 },
        { 0x19, 0xC2 },
        { 0x1A, 0x08 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundBuffer::SetVolume
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetVolume, 5788, 8,

    XREF_DirectSound_CDirectSoundBuffer_SetVolume,
    XRefOne)

        XREF_ENTRY( 0x32, XREF_DirectSound_CDirectSoundVoice_SetVolume ),

        { 0x0C, 0x00 },
        { 0x12, 0x85 },
        { 0x1C, 0x15 },
        { 0x26, 0xEB },
        { 0x30, 0x10 },
        { 0x3A, 0x74 },
        { 0x47, 0x8B },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundStream::SetVolume
// ******************************************************************
// * Not until we need it!
//OOVPA_XREF(DirectSound_CDirectSoundStream_SetVolume, 5788, 9,
//
//    XREF_DirectSound_CDirectSoundStream_SetVolume,
//    XRefOne)
//
//        XREF_ENTRY( 0x36, XREF_DirectSound_CDirectSoundVoice_SetVolume ),
//
//        { 0x00, 0x56 },
//        { 0x0C, 0x00 },
//        { 0x14, 0x74 },
//        { 0x21, 0xB8 },
//        { 0x2A, 0x24 },
//        { 0x35, 0xE8 },
//        { 0x40, 0x68 },
//        { 0x4B, 0x8B },
//OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundBuffer::PlayEx
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_PlayEx, 5788, 8,

    XREF_DirectSound_CDirectSoundBuffer_PlayEx,
    XRefOne)

        XREF_ENTRY( 0x3D, XREF_DirectSound_CMcpxBuffer_Play ),

        { 0x0C, 0x00 },
        { 0x16, 0x68 },
        { 0x22, 0x05 },
        { 0x2E, 0x20 },
        { 0x3A, 0x24 },
        { 0x46, 0x0B },
        { 0x52, 0x8B },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundVoice::SetRolloffFactor
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetRolloffFactor, 5788, 7,

    XREF_DSVOICESETROLLOFFFACTOR,
    XRefZero)

        { 0x05, 0x41 },
        { 0x0C, 0x00 },
        { 0x13, 0x48 },
        { 0x1A, 0x00 },
        { 0x21, 0xF6 },
        { 0x28, 0x51 },
        { 0x2F, 0xC0 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundBuffer::SetRolloffFactor
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetRolloffFactor, 5788, 8,

    XREF_DSBUFFERSETROLLOFFFACTOR,
    XRefOne)

        XREF_ENTRY( 0x3A, XREF_DSVOICESETROLLOFFFACTOR ),

        { 0x0C, 0x00 },
        { 0x14, 0x74 },
        { 0x21, 0xB8 },
        { 0x2A, 0x24 },
        { 0x35, 0xFF },
        { 0x40, 0x8B },
        { 0x4F, 0x8B },
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetRolloffFactor
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetRolloffFactor, 5788, 8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x1D, XREF_DSBUFFERSETROLLOFFFACTOR ),

        { 0x03, 0x0C },
        { 0x08, 0x8B },
        { 0x0D, 0x8B },
        { 0x12, 0x83 },
        { 0x17, 0x1B },
        { 0x1C, 0xE8 },
        { 0x21, 0xC2 },
OOVPA_END;

// ******************************************************************
// * IDirectSound_CreateSoundStream
// ******************************************************************
//OOVPA_XREF(IDirectSound_CreateSoundStream, 5788, 8,
//
//    XRefNoSaveIndex,
//    XRefOne)
//
//        XREF_ENTRY( 0x1D, XREF_DirectSound_CDirectSound_CreateSoundStream ),
//
//        { 0x03, 0x10 },
//        { 0x08, 0xFF },
//        { 0x0D, 0xC8 },
//        { 0x12, 0x83 },
//        { 0x17, 0x1B },
//        { 0x1C, 0xE8 },
//        { 0x21, 0xC2 },
//OOVPA_END;

// ******************************************************************
// * DirectSoundCreateStream
// ******************************************************************
OOVPA_XREF(DirectSoundCreateStream, 5788, 9,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x2F, XREF_DSCREATESOUNDSTREAM ),

        { 0x09, 0x56 },
        { 0x14, 0x45 },
        { 0x1F, 0x8B },
        { 0x2A, 0xFF },
        { 0x35, 0x85 },
        { 0x40, 0xFF },
        { 0x4E, 0x5F },
        { 0x56, 0x00 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundStream::SetMixBinVolumes
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundStream_SetMixBinVolumes2, 5788, 9,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x36, XREF_DSSETMIXBINVOLUMESB ),

        { 0x00, 0x56 },
        { 0x0C, 0x00 },
        { 0x14, 0x74 },
        { 0x21, 0xB8 },
        { 0x2A, 0x24 },
        { 0x35, 0xE8 },
        { 0x40, 0x68 },
        { 0x4B, 0x8B },
OOVPA_END;

// ******************************************************************
// * DirectSound::CMcpxStream::Pause
// ******************************************************************
OOVPA_XREF(DirectSound_CMcpxStream_Pause, 5788, 7,

    XREF_DSSTREAMPAUSE,
    XRefZero)

        { 0x10, 0x07 },
        { 0x23, 0x0F },
        { 0x34, 0x83 },
        { 0x46, 0xF8 },
        { 0x58, 0x03 },
        { 0x6A, 0xBB },
        { 0x7C, 0x00 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundStream::FlushEx
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundStream_FlushEx, 5788, 7,

    XREF_DSFLUSHEX2,
    XRefZero)

        { 0x0F, 0x00 },
        { 0x1E, 0xFF },
        { 0x28, 0x80 },
        { 0x36, 0x74 },
        { 0x46, 0x8B },
        { 0x52, 0xFF },
        { 0x62, 0x8B },
OOVPA_END;

// ******************************************************************
// * IDirectSound_SetEffectData
// ******************************************************************
// * No XRefs! Woohoo!
// ******************************************************************
#define IDirectSound_SetEffectData_5788 IDirectSound_SetEffectData_5344

// ******************************************************************
// * DirectSound::CMemoryManager::PoolAlloc
// ******************************************************************
OOVPA_NO_XREF(DirectSound_CMemoryManager_PoolAlloc, 5788, 10)

	{ 0x24, 0x83 },
	{ 0x25, 0x7C },
	{ 0x26, 0x24 },
	{ 0x27, 0x10 },
	{ 0x28, 0x00 },
	{ 0x37, 0xF3 },
	{ 0x38, 0xAB },
	{ 0x44, 0xC2 },
	{ 0x45, 0x0C },
	{ 0x46, 0x00 },
OOVPA_END;

// ******************************************************************
// * XFileCreateMediaObjectAsync
// ******************************************************************
OOVPA_NO_XREF(XFileCreateMediaObjectAsync, 5788, 8)

        { 0x0A, 0xC0 },
        { 0x16, 0xF8 },
        { 0x22, 0xE6 },
        { 0x2E, 0x20 },
        { 0x3D, 0x8B },
        { 0x49, 0x8B },
        { 0x52, 0x06 },
        { 0x5E, 0x0C },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundStream::SetPitch
// ******************************************************************
#define DirectSound_CDirectSoundStream_SetPitch_5788 DirectSound_CDirectSoundStream_SetPitch_4627


// ******************************************************************
// * DirectSound::CDirectSound::SetAllParameters
// ******************************************************************
#define DirectSound_CDirectSound_SetAllParameters_5788 DirectSound_CDirectSound_SetAllParameters_5558

// ******************************************************************
// * DirectSound::CMcpxVoiceClient::SetFilter
// ******************************************************************
#define DirectSound_CMcpxVoiceClient_SetFilter_5788 DirectSound_CMcpxVoiceClient_SetFilter_5558


// ******************************************************************
// DirectSound_CDirectSoundVoice::SetMode
// ******************************************************************
#define DirectSound_CDirectSoundVoice_SetMode_5788 DirectSound_CDirectSoundVoice_SetMode_5344

// ******************************************************************
// DirectSound_CDirectSoundBuffer::SetMode
// ******************************************************************
#define DirectSound_CDirectSoundBuffer_SetMode_5788 DirectSound_CDirectSoundBuffer_SetMode_5233

// ******************************************************************
// * IDirectSoundBuffer_SetMode
// ******************************************************************
#define IDirectSoundBuffer_SetMode_5788 IDirectSoundBuffer_SetMode_5233

// ******************************************************************
// * DSound_5788
// ******************************************************************
OOVPATable DSound_5788[] = {

	REGISTER_OOVPA(DirectSoundCreate, 4134, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_CreateSoundBuffer, 4134, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetPlayRegion, 4361, PATCH),
	REGISTER_OOVPA(CMcpxBuffer_SetBufferData, 5788, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetBufferData, 4134, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetBufferData, 4134, PATCH),
	REGISTER_OOVPA(CMcpxBuffer_GetStatus, 5558, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_GetStatus, 4134, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_GetStatus, 4134, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetI3DL2Listener, 5558, XREF),
	REGISTER_OOVPA(IDirectSound_SetI3DL2Listener, 3936, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetFormat, 5558, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetFormat, 5558, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetFormat, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetConeAngles, 5558, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetConeAngles, 5558, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetConeAngles, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoiceSettings_SetMixBinVolumes, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetMixBinVolumes, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetMixBinVolumes, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetMixBinVolumes2, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetMixBinVolumes2, 5788, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetRolloffCurve, 5233, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetRolloffCurve, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetRolloffCurve, 5558, PATCH),
	REGISTER_OOVPA(IDirectSoundBuffer_SetRolloffCurve, 4627, PATCH),
	REGISTER_OOVPA(IDirectSound_CreateSoundBuffer, 4134, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetFrequency, 4134, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetFrequency, 4134, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetFrequency, 4134, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetVolume, 4134, PATCH),
	REGISTER_OOVPA(IDirectSound_Release, 3936, PATCH),
	REGISTER_OOVPA(IDirectSound_DownloadEffectsImage, 3936, PATCH),
	REGISTER_OOVPA(IDirectSound_SetOrientation, 3936, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetMaxDistance, 5344, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetMaxDistance, 5788, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetMaxDistance, 5788, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetMinDistance, 5344, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetMinDistance, 5788, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetMinDistance, 5788, PATCH),
	REGISTER_OOVPA(DirectSound_CMcpxBuffer_Play, 3925, XREF),
	// REGISTER_OOVPA(CMcpxBuffer_Play, 5788, XREF),
	REGISTER_OOVPA(CMcpxBuffer_Stop, 4361, XREF),
	REGISTER_OOVPA(CMcpxBuffer_Stop2, 4361, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_StopEx, 4361, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_StopEx, 4361, PATCH),
	REGISTER_OOVPA(IDirectSoundBuffer_Stop, 4134, PATCH), // (Possibly weak, but quite OK for 4627 DSOUND)
	REGISTER_OOVPA(IDirectSoundBuffer_Release, 3936, PATCH),
	REGISTER_OOVPA(DirectSound_CFullHRTFSource_GetCenterVolume, 5558, XREF),
	REGISTER_OOVPA(DirectSound_CHRTFSource_SetFullHRTF5Channel, 5558, XREF),
	REGISTER_OOVPA(DirectSoundUseFullHRTF, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetHeadroom, 5558, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetHeadroom, 5558, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetHeadroom, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetAllParameters, 5558, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetAllParameters, 4134, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetAllParameters, 4134, PATCH),
	REGISTER_OOVPA(IDirectSoundBuffer_Lock, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetI3DL2Source, 5558, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetI3DL2Source, 5558, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetI3DL2Source, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoiceSettings_SetMixBins, 5558, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetMixBins, 5558, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetMixBins, 5558, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetMixBins, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetMixBins, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetMixBinHeadroom, 5558, XREF),
	REGISTER_OOVPA(IDirectSound_SetMixBinHeadroom, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetPosition, 5558, XREF),
	REGISTER_OOVPA(IDirectSound_SetPosition, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetVelocity, 5558, XREF),
	REGISTER_OOVPA(IDirectSound_SetVelocity, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetDistanceFactor, 5558, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetDistanceFactor, 5558, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetDistanceFactor, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_CommitDeferredSettings, 5788, PATCH),
	REGISTER_OOVPA(DirectSoundCreateBuffer, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CMcpxBuffer_SetCurrentPosition, 5788, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetCurrentPosition, 5788, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetCurrentPosition, 5788, PATCH),
	REGISTER_OOVPA(CMcpxVoiceClient_SetLFO, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetLFO, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetLFO, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetLFO, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_GetCurrentPosition, 5558, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_GetCurrentPosition, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetPlayRegion, 5558, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetPlayRegion, 4361, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetLoopRegion, 5558, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetLoopRegion, 4134, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetDistanceFactorA, 5558, XREF),
	REGISTER_OOVPA(IDirectSound_SetDistanceFactor, 4134, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetRolloffFactor, 5788, XREF),
	REGISTER_OOVPA(IDirectSound_SetRolloffFactor, 4134, PATCH), // TODO : Use 5344?
	REGISTER_OOVPA(DirectSound_CDirectSound_SetDopplerFactor, 5788, XREF),
	REGISTER_OOVPA(IDirectSound_SetDopplerFactor, 4134, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetPitch, 4134, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetPitch, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetPitch, 4627, PATCH),
	REGISTER_OOVPA(CMcpxVoiceClient_SetVolume, 4134, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetVolume, 5233, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetVolume, 5233, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetVolume, 4134, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetVolume, 4134, PATCH), // This is actually the XREF we are using
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_PlayEx, 5788, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_PlayEx, 3936, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetRolloffFactor, 5788, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetRolloffFactor, 5788, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetRolloffFactor, 5788, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetFrequency, 4134, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetFrequency, 4134, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetFrequency, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetDopplerFactor, 5558, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetDopplerFactor, 5558, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetDopplerFactor, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetPosition, 5558, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetPosition, 5558, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetPosition, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetVelocity, 5558, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetVelocity, 5558, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetVelocity, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CMcpxBuffer_Pause, 4928, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_Pause, 4928, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_Pause, 4928, PATCH),
	REGISTER_OOVPA(DirectSoundCreateStream, 5788, PATCH),
	REGISTER_OOVPA(DirectSoundCreateStream, 5788, PATCH),
	REGISTER_OOVPA(DirectSound_CMcpxStream_Pause, 5788, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_Pause, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_FlushEx, 5788, XREF),
	REGISTER_OOVPA(IDirectSoundStream_FlushEx, 4627, PATCH),
	REGISTER_OOVPA(DirectSoundDoWork, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_SynchPlayback, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_EnableHeadphones, 5558, XREF),
	REGISTER_OOVPA(IDirectSound8_EnableHeadphones, 5558, PATCH),
	REGISTER_OOVPA(XAudioDownloadEffectsImage, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_GetOutputLevels, 5558, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSound_GetOutputLevels, 5558, XREF),
	REGISTER_OOVPA(IDirectSound_GetOutputLevels, 5558, PATCH),
	REGISTER_OOVPA(IDirectSound_SetEffectData, 5788, PATCH),
	REGISTER_OOVPA(DirectSound_CMemoryManager_PoolAlloc, 5788, XREF),
	REGISTER_OOVPA(XFileCreateMediaObjectAsync, 5788, PATCH),
	REGISTER_OOVPA(WaveFormat_CreateXboxAdpcmFormat, 5558, XREF),
	REGISTER_OOVPA(XAudioCreateAdpcmFormat, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetFormat, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetPitch, 5788, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetHeadroom, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_CreateSoundStream, 5558, XREF),
	REGISTER_OOVPA(IDirectSound_CreateSoundStream, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CMcpxBuffer_Play2, 5788, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_Play, 5788, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_Play, 5558, PATCH),
	REGISTER_OOVPA(DirectSound_CMcpxVoiceClient_SetEG, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetEG, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetEG, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetEG, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetEG, 4627, PATCH),
	REGISTER_OOVPA(IDirectSound_AddRef, 3936, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetAllParameters, 5788, XREF),
	REGISTER_OOVPA(IDirectSound_SetAllParameters, 3936, PATCH),
	REGISTER_OOVPA(DirectSound_CMcpxVoiceClient_SetFilter, 5788, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetFilter, 4134, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetFilter, 4134, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetFilter, 4627, PATCH),
	REGISTER_OOVPA(IDirectSoundBuffer_SetFilter, 4134, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetMode, 5788, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetMode, 5788, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetMode, 5788, PATCH),
};

// ******************************************************************
// * DSound_5788_SIZE
// ******************************************************************
uint32 DSound_5788_SIZE = sizeof(DSound_5788);
