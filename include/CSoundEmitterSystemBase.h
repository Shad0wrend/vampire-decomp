// CSoundEmitterSystemBase: sound emitter system (3 virtual slots; only the layout the constructor sets up is declared).
#pragma once
#include "CUnknown1024b2d0.h"
#include "utlrbtree.h"
#include "CSoundParameters.h"

class UtlMem2;

// One wave entry of a sound record: an 8 byte record (16 bit symbol of the wave name in the string table at +0xb0, value).
struct CSoundWaveEntry
{
	unsigned short m_symbol;
	char m_pad02[6];
};

// A sound record (0xe8 bytes each, table at CSoundEmitterSystemBase +0x54, record = table + 0x1c + index * 0xe8):
// only the wave list is declared.
struct CUnknown1012f700	// a random interval (start, range), see sub_1012f700
{
	float start;
	float range;
};

struct CSoundParametersInternal
{
	int m_channel;	// 0x00
	CUnknown1012f700 m_volume;	// 0x04
	CUnknown1012f700 m_pitch;	// 0x0c
	CUnknown1012f700 m_soundlevel;	// 0x14
	bool m_bPlayToOwnerOnly;	// 0x1c

	char m_bPrecache1d;	// 0x1d
	char m_pad001e[2];
	CSoundWaveEntry *m_pWaves;	// 0x20
	char m_pad0024[8];
	int m_nWaves;	// 0x2c
	char m_pad0030[0x48 - 0x30];
	char m_bMissingWave48;	// 0x48: set when one of the waves is not on disk

	CSoundWaveEntry &Wave(int i) { return m_pWaves[i]; }	// the i-th wave of the record (the CUtlVector element)
};

// The element of the sound record tree (CUtlRBTree<CSoundEmitterRecord, int>, 0xe8 byte nodes: 16 bytes of links and
// this 0xd8 byte element). Its sentinel static is at 0x1072c414.
struct CSoundEmitterRecord
{
	char m_pad0000[0xd8];
};

// A tree (0x20 bytes, int indices) followed by a 0x2c byte table object: 0x4c bytes.
struct CSoundEmitterDict
{
	CUtlRBTree<int, int> m_tree;
	CUnknown1024b2d0 m_table;

	CSoundEmitterDict(bool (*pfnLess)(int const &, int const &)) : m_tree(0, 0, pfnLess)
	{
		m_table.sub_1024b2d0(0, 0, 1);
	}
};

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
	bool sub_101b2c60();	// slot 1 (0x101b2c60, stub 0x10005597), "BaseInit"-like: when the count at +0xa8 is positive calls slot 2 (the class has no real virtuals yet: call (*(void (__fastcall **)(CSoundEmitterSystemBase *))((char *)m_vtbl + 8))(this)), sub_101b3b70(), loads "scripts/game_sounds_manifest.txt" into a new CUnknown10248a50 (g_1070b238, 0, true), for each sub key: name "precache_file" -> sub_101b4240(key->GetString(0, ""), true), "declare_file" -> sub_101b4240(key->GetString(0, ""), false), else DevWarning("CSoundEmitterSystemBase::BaseInit:  Manifest '%s' with bogus file type '%s', expecting 'declare_file' or 'precache_file'\n"); Error-like message when the file is missing; deletes the tree; DevMsg(1, "Registered %i sounds ( %i missing )") using sub_101b4740(false); returns true
	void sub_101b3b70();	// empty (a plain ret), called by slot 1 before the manifest load
	void sub_101b4240(const char *pszScriptFile, bool bPrecache);	// stub 0x1000924b, AddSoundsFromFile: grows the script file table (0x82 byte entries, memory +0x9c, count +0xa8), loads the script file into a CUnknown10248a50 and adds each sound record (tree at +0x50); DevMsg "No such file" (and removes the table entry again) / "Entry '%s' already exists" cases
	CSoundEmitterSystemBase *sub_101b0200(unsigned char flags);	// slot 0, scalar deleting destructor: purges the lists at +0xb0, +0x70, +0x24 and the memory blocks at +0x9c, +0x54, +0x8; deletes this when bit 0 of flags is set
	void sub_101b3770(void *pTable, const char *pszName, int value);	// interns pszName in the string table at +0xb0 and appends the 8 byte record (16 bit symbol, value) to the vector (memory at +0x20, size at +0x2c) of pTable
	int sub_101b2f60(const char *pszName);	// index of the sound record (0xe8 bytes each, table at +0x54) named pszName, -1 when unknown
	char sub_101b31a0(int index);	// true when index is within the sound record count at +0x64
	void sub_101b50f0(const char *pszName);	// flags the sound record and its script file (record dword +0x18, flag table at +0x9c, 0x82 bytes each) as changed; DevWarning when there is no such sound
	int sub_101b2870(int i);	// "CUtlRBTree::NextInorder" of the sound record tree at +0x50 (sentinel 0x1072c414)
	int sub_101b3220();	// "GetSoundCount" (stub 0x100070a9)
	const char *sub_101b31d0(int index);	// "GetSoundName" (stub 0x1000e732): the name of the sound record, null when the index is invalid
	int sub_101b4cc0(const char *pszScript);	// the index of a script file in the manifest (stub 0x1000b113), -1 when it is not in it
	void sub_101b2b30(const char *pszScript, UtlMem2 *pOut);	// "GetSoundIndexesForScript"-like: clears the output vector, then appends the index of every sound record whose script file is pszScript; DevWarning "Can't PrecacheSoundScript( '%s' ), file not in manifest '%s'" when the script is unknown
	void sub_101b5180(const char *pszSound, const char *pszScript);	// "CSoundEmitterSystemBase::MoveSound": moves the sound record to another script file of the manifest (both script flags are marked changed); DevWarning for an unknown sound or a script file that is not in the manifest
	CSoundParametersInternal *sub_101b3730(int index);	// the sound record of the index (stub 0x100130a7 is sub_101b2f60, this one is 0x10007469), null when the index is out of range
	int sub_101b3240(void *pWaves, int nStart);	// index of the first wave (from nStart) of the vector pWaves, -1 when none (stub 0x1000bfff)
	int sub_101b3b90(const char *pszName);	// stub returning 0 (ret 4)
	char sub_101b33f0(const char *pszName, CSoundParameters &params);	// "GetParametersForSound": fills the parameters of the sound record named pszName; false (DevMsg) when it is unknown or has no wave
	int sub_101b4170(const char *pszName);	// "LookupSoundLevel"-like: the sound level of the named sound, 75 when it cannot be resolved
	const char *sub_101b4c90(const CSoundWaveEntry *pWave);	// the wave name of an entry: looks its symbol up in the string table at +0xb0 (stub 0x10008981)
	int sub_101b4740(bool bVerbose);	// "CheckForMissingWavFiles": counts the sound records whose waves are not on disk ("sound/<name>" without the leading wave characters), flags them (+0x48) and DevMsg's each missing file when bVerbose
};
