// CSoundEmitterSystemBase: sound emitter system (3 virtual slots; only the layout the constructor sets up is declared).
#pragma once
#include "CUnknown1024b2d0.h"

class UtlMem2;

class CSoundEmitterSystemBase
{
public:
	void *m_vtbl;	// 0x00
	void *m_pfn04;
	int m_i08;
	int m_i0c;
	int m_i10;
	int m_i14;
	int m_i18;
	int m_i1c;
	int m_i20;
	CUnknown1024b2d0 m_list24;	// 0x24
	void *m_pfn50;
	int m_i54;
	int m_i58;
	int m_i5c;
	int m_i60;
	int m_i64;
	int m_i68;
	int m_i6c;
	CUnknown1024b2d0 m_list70;	// 0x70
	int m_i9c;
	int m_ia0;
	int m_ia4;
	int m_ia8;
	int m_iac;
	CUnknown1024b2d0 m_listb0;	// 0xb0

	CSoundEmitterSystemBase *sub_101b26c0();
	CSoundEmitterSystemBase *sub_101b0200(unsigned char flags);	// slot 0, scalar deleting destructor: purges the lists at +0xb0, +0x70, +0x24 and the memory blocks at +0x9c, +0x54, +0x8; deletes this when bit 0 of flags is set
	void sub_101b3770(void *pTable, const char *pszName, int value);	// interns pszName in the string table at +0xb0 and appends the 8 byte record (16 bit symbol, value) to the vector (memory at +0x20, size at +0x2c) of pTable
	int sub_101b2f60(const char *pszName);	// index of the sound record (0xe8 bytes each, table at +0x54) named pszName, -1 when unknown
	char sub_101b31a0(int index);	// true when index is within the sound record count at +0x64
	void sub_101b50f0(const char *pszName);	// flags the sound record and its script file (record dword +0x18, flag table at +0x9c, 0x82 bytes each) as changed; DevWarning when there is no such sound
	int sub_101b3220();	// "GetSoundCount" (stub 0x100070a9)
	const char *sub_101b31d0(int index);	// "GetSoundName" (stub 0x1000e732): the name of the sound record, null when the index is invalid
	int sub_101b4cc0(const char *pszScript);	// the index of a script file in the manifest (stub 0x1000b113), -1 when it is not in it
	void sub_101b2b30(const char *pszScript, UtlMem2 *pOut);	// "GetSoundIndexesForScript"-like: clears the output vector, then appends the index of every sound record whose script file is pszScript; DevWarning "Can't PrecacheSoundScript( '%s' ), file not in manifest '%s'" when the script is unknown
	void sub_101b5180(const char *pszSound, const char *pszScript);	// "CSoundEmitterSystemBase::MoveSound": moves the sound record to another script file of the manifest (both script flags are marked changed); DevWarning for an unknown sound or a script file that is not in the manifest
};
