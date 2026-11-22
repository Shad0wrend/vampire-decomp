// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 49 blocks
#include "vampire.h"

// FUNCTION: 0x101b0200 size=0xa9
#include "Vector.h"
#include "CSoundEmitterSystemBase.h"
#include "CUnknown1024b370.h"
#include "UtlMem.h"
#include "utlmemory.h"

extern char vt_1047b3c0[];

struct CSESTable1b0200 : CUnknown1024b2d0
{
	~CSESTable1b0200() { ((CUnknown1024b370 *)this)->sub_1024b370(); }
};

struct CSESTree1b0200
{
	void *m_LessFunc;
	CUtlMemory<int> m_Elements;
	int m_Root;
	int m_NumElements;
	int m_FirstFree;
	int m_TotalElements;
};

struct CSESDict1b0200
{
	CSESTree1b0200 m_tree;
	CSESTable1b0200 m_table;
};

struct CSESVec1b0200
{
	CUtlMemory<int> m_Memory;
	int m_Size;
	int *m_pElements;
	~CSESVec1b0200()
	{
		m_Size = 0;
		((UtlMem *)&m_Memory)->sub_101b2070();
		m_pElements = m_Memory.Base();
	}
};

CSoundEmitterSystemBase *CSoundEmitterSystemBase::sub_101b0200(unsigned char flags)
{
	m_vtbl = vt_1047b3c0;
	((CSESTable1b0200 *)&m_listb0)->~CSESTable1b0200();
	((CSESVec1b0200 *)&m_i9c)->~CSESVec1b0200();
	((CSESDict1b0200 *)&m_pfn50)->~CSESDict1b0200();
	((CSESDict1b0200 *)&m_pfn04)->~CSESDict1b0200();
	if (flags & 1)
		delete this;
	return this;
}
// END FUNCTION

// FUNCTION: 0x101b2b30 size=0xe8
#include "utlvector.h"
#include "CSoundEmitterSystemBase.h"
#include "UtlMem2.h"
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern void (__cdecl *g_109f364c)(const char *fmt, ...);

struct CUtlVecOpsX : public UtlMem2 {
	void GrowVector(int num = 1)
	{
		if (m_size + num > m_allocationCount)
			sub_100eb280(m_size - m_allocationCount + num);
		m_size += num;
		m_pElements = m_pMemory;
	}
	void ShiftElementsRight(int elem, int num = 1)
	{
		int numToMove = m_size - elem - num;
		if (numToMove > 0)
			memmove(&m_pMemory[elem + num], &m_pMemory[elem], numToMove * sizeof(int));
	}
	int InsertBefore(int elem, const int &src)
	{
		GrowVector();
		ShiftElementsRight(elem);
		int *p = &m_pMemory[elem];
		if (p)
			*p = src;
		return elem;
	}
	int AddToTail(const int &src) { return InsertBefore(m_size, src); }
};

void CSoundEmitterSystemBase::sub_101b2b30(const char *pszScript, UtlMem2 *pOut)
{
	pOut->m_size = 0;
	int iScript = sub_101b4cc0(pszScript);
	if (iScript == -1) {
		g_109f364c("Can't PrecacheSoundScript( '%s' ), file not in manifest '%s'\n", pszScript, "scripts/game_sounds_manifest.txt");
		return;
	}
	int nSounds = sub_101b3220();
	if (nSounds > 0) {
		int i = 0;
		int off = 0;
		do {
			if (*(int *)(off + (int)m_i54 + 0x18) == iScript)
				((CUtlVecOpsX *)pOut)->AddToTail(i);
			i++;
			off += 0xe8;
		} while (i < nSounds);
	}
}
// END FUNCTION

// FUNCTION: 0x101b2c60 size=0x162
#include "CSoundEmitterSystemBase.h"
#include "CUnknown10248a50.h"
#include "CKeyValuesX.h"
#include <string.h>

__declspec(dllimport) void DevMsg(int level, const char *pMsg, ...);
__declspec(dllimport) void DevWarning(const char *pMsg, ...);
extern "C" __declspec(dllimport) void Error(const char *pMsg, ...);
extern IFileSys *g_1070b238;

bool CSoundEmitterSystemBase::sub_101b2c60()
{
	if (m_ia8 > 0)
		(*(void (__fastcall **)(CSoundEmitterSystemBase *))((char *)m_vtbl + 8))(this);
	sub_101b3b70();
	CUnknown10248a50 *pManifest = new CUnknown10248a50("scripts/game_sounds_manifest.txt");
	IFileSys *pFileSys = g_1070b238;
	if (pManifest->sub_102480f0("scripts/game_sounds_manifest.txt", pFileSys, 0, true)) {
		for (CKeyValuesX *pKey = ((CKeyValuesX *)pManifest)->sub_10004c8c(); pKey; pKey = pKey->sub_1000fa65()) {
			const char *pName = pKey->sub_102480b0();
			if (!_strcmpi(pName, "precache_file"))
				sub_101b4240(pKey->sub_10248cd0(0, ""), true);
			else {
				pName = pKey->sub_102480b0();
				if (!_strcmpi(pName, "declare_file"))
					sub_101b4240(pKey->sub_10248cd0(0, ""), false);
				else
					DevWarning("CSoundEmitterSystemBase::BaseInit:  Manifest '%s' with bogus file type '%s', expecting 'declare_file' or 'precache_file'\n", "scripts/game_sounds_manifest.txt", pKey->sub_102480b0());
			}
		}
	} else {
		Error("Unable to load manifest file '%s'\n", "scripts/game_sounds_manifest.txt");
	}
	if (pManifest) {
		((CKeyValuesX *)pManifest)->sub_10248090();
		::operator delete(pManifest);
	}
	int nMissing = sub_101b4740(false);
	if (nMissing > 0)
		DevMsg(1, "CSoundEmitterSystem:  Registered %i sounds ( %i missing .wav files referenced )\n", m_i64, nMissing);
	else
		DevMsg(1, "CSoundEmitterSystem:  Registered %i sounds\n", m_i64);
	return true;
}
// END FUNCTION

// FUNCTION: 0x101b2e30 size=0xe8
#include "CSoundEmitterSystemBase.h"
#include "utlvector.h"
#include "CUnknown101b4680.h"

struct CSoundScriptFile
{
	bool dirty;
	bool precachealways;
	char filename[128];
};

struct CSoundEntry
{
	bool m_bRemoved;
	bool m_bPrecacheAlways;
	int m_nScriptFileIndex;
	CUnknown101b4680 m_SoundParams;
};

struct DictElement_t
{
	unsigned short m_Name;
	CSoundEntry m_Data;
};

struct CSoundsTree : public CUtlRBTree<CSoundEmitterRecord, int>
{
	void RemoveAll()
	{
		int prev = InvalidIndex();
		for (int i = (int)m_TotalElements; --i >= 0; )
		{
			int idx = i;
			if (IsValidIndex(idx))
				Destruct(&((DictElement_t *)&Element(idx))->m_Data.m_SoundParams);
			SetRightChild(idx, prev);
			SetLeftChild(idx, idx);
			prev = idx;
		}
		m_FirstFree = m_TotalElements ? 0 : InvalidIndex();
		m_Root = InvalidIndex();
		m_NumElements = 0;
	}
};

struct FileEntryV { int m_i00; int m_i04; ~FileEntryV() {} };

struct CFilesTree : public CUtlRBTree<CSoundEmitterFileEntry, int>
{
	void RemoveAll()
	{
		int prev = InvalidIndex();
		for (int i = (int)m_TotalElements; --i >= 0; )
		{
			int idx = i;
			if (IsValidIndex(idx))
				Destruct((FileEntryV *)&Element(idx));
			SetRightChild(idx, prev);
			SetLeftChild(idx, idx);
			prev = idx;
		}
		m_FirstFree = m_TotalElements ? 0 : InvalidIndex();
		m_Root = InvalidIndex();
		m_NumElements = 0;
	}
};

struct CSoundEmitterSystemBaseV : public CSoundEmitterSystemBase
{
	void sub_101b2e30();
};

// TARGET: CSoundEmitterSystemBaseV::sub_101b2e30
void CSoundEmitterSystemBaseV::sub_101b2e30()
{
	((CUtlVector<CSoundScriptFile> *)&m_i9c)->RemoveAll();
	((CSoundsTree *)&m_pfn50)->RemoveAll();
	m_listb0.sub_1024b880();
	((CFilesTree *)&m_pfn04)->RemoveAll();
}
// END FUNCTION

// FUNCTION: 0x101b2f60 size=0x116
#include "CSoundEmitterSystemBase.h"
#include "CUnknown101b30d0.h"
#include "CUnknown1024b370.h"
#include "CUtlRBTree232.h"
#include "UtlMem.h"
#include "CUtlRBTreeOf.h"

struct S_KeyVecA
{
	char m_data[0x14];
	void sub_100121a2();
	~S_KeyVecA() { sub_100121a2(); }
};

struct S_KeyVecB
{
	char m_data[0x18];
	void sub_100010f5();
	~S_KeyVecB()
	{
		sub_100010f5();
		((UtlMem *)this)->sub_101b6b90();
	}
};

struct S_SoundKey
{
	unsigned short m_symbol;
	char m_pad02[0x2c - 2];
	S_KeyVecA m_waves;
	S_KeyVecB m_other;
	char m_pad[0xd8 - 0x2c - 0x14 - 0x18];
};

int CSoundEmitterSystemBase::sub_101b2f60(const char *pszName)
{
	CUtlRBTree232Of<CSoundEmitterRecord> *tree = (CUtlRBTree232Of<CSoundEmitterRecord> *)&m_pfn50;
	int current;
	{
		S_SoundKey key;
		key.m_symbol = 0xffff;
		((CUnknown101b30d0 *)((char *)&key + 0xc))->sub_101b30d0();
		key.m_symbol = ((CUnknown1024b370 *)((char *)tree + 0x20))->sub_1024b5e0(pszName).m_Id;
		current = tree->m_Root;
		while (current != -1) {
			if (tree->m_LessFunc(&key, tree->ElementAt(current).m_Data)) {
				current = tree->sub_101b78f0(current).m_Left;
			} else if (tree->m_LessFunc(tree->ElementAt(current).m_Data, &key)) {
				current = tree->Links(current).m_Right;
			} else {
				break;
			}
		}
	}
	if (current == -1)
		return -1;
	return current;
}
// END FUNCTION

// FUNCTION: 0x101b30d0 size=0x98
#include "CUnknown101b30d0.h"
extern "C" __declspec(dllimport) char *Q_strncpy(char *dest, const char *src, int maxLen);

struct Five
{
	int a, b, c, d, e;
	void Zero() { a = 0; b = 0; c = 0; d = 0; e = 0; }
};

CUnknown101b30d0 *CUnknown101b30d0::sub_101b30d0()
{
	((Five *)&m_nField20)->Zero();
	((Five *)&m_nField34)->Zero();
	m_nField00 = 0;
	Q_strncpy(m_szChannel, "CHAN_AUTO", 32);
	m_flChannelScale = 1.0f;
	m_nField08 = 0;
	Q_strncpy(m_szVolume, "VOL_NORM", 32);
	m_flVolume = 100.0f;
	m_nField10 = 0;
	Q_strncpy(m_szPitch, "PITCH_NORM", 32);
	m_flPitch = 75.0f;
	m_nField18 = 0;
	Q_strncpy(m_szSoundLevel, "SNDLVL_NORM", 32);
	m_bField1c = 0;
	m_bField1d = 1;
	m_bField48 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x101b31a0 size=0x17
#include "CSoundEmitterSystemBase.h"

// TARGET: CSoundEmitterSystemBase::sub_101b31a0
char CSoundEmitterSystemBase::sub_101b31a0(int index)
{
	if (index >= 0 && index < m_i64)
	{
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101b31d0 size=0x38
#include "CSoundEmitterSystemBase.h"

extern char g_106b8540[];

struct CSoundNameView
{
	CUnknown1024b2d0Id *sub_101b66b0(int index);
	char m_pad0000[0x20];
	CUnknown1024b2d0 m_names;	// 0x20
};

namespace block_101b31d0 {
	struct CSoundEmitterUnit : CSoundEmitterSystemBase
	{
		char sub_101b31a0(int index);
	};

	char CSoundEmitterUnit::sub_101b31a0(int index)
	{
		return index >= 0 && index < m_i64;
	}
}
using namespace block_101b31d0;

// TARGET: CSoundEmitterSystemBase::sub_101b31d0
const char *CSoundEmitterSystemBase::sub_101b31d0(int index)
{
	if (!((CSoundEmitterUnit *)this)->sub_101b31a0(index))
		return g_106b8540;
	CSoundNameView *pView = (CSoundNameView *)((char *)this + 0x50);
	return pView->m_names.sub_1024b830(*pView->sub_101b66b0(index));
}
// END FUNCTION

// FUNCTION: 0x101b3220 size=0x4
struct CUnknown101b3220 { int sub_101b3220(); };
int CUnknown101b3220::sub_101b3220()
{
    return *(int *)((char *)this + 0x64);
}
// END FUNCTION

// FUNCTION: 0x101b3240 size=0x144
#include "utlrbtree.h"
#include "utlvector.h"
#include "UtlVec8.h"

struct IRandomStream
{
	virtual void a0();
	virtual void a1();
	virtual int RandomInt(int lo, int hi);
};
extern IRandomStream *g_1070b244;

struct SSoundFile101b3240
{
	int symbol;
	int gender;
};

struct CThisView101b3240 { int sub_101b3240(UtlVec8 *v, int gender); };

// TARGET: CThisView101b3240::sub_101b3240
int CThisView101b3240::sub_101b3240(UtlVec8 *v, int gender)
{
	CUtlVector<SSoundFile101b3240> &names = *(CUtlVector<SSoundFile101b3240> *)v;
	int c = names.Count();
	if (c <= 0)
		return -1;
	CUtlVector<int> candidates;
	int i;
	for (i = 0; i < c; i++)
	{
		if (names[i].gender == gender)
			candidates.AddToTail(i);
	}
	if (candidates.Count() >= 1)
	{
		i = g_1070b244->RandomInt(0, candidates.Count() - 1);
		return candidates[i];
	}
	return g_1070b244->RandomInt(0, c - 1);
}
// END FUNCTION

// FUNCTION: 0x101b33f0 size=0x25f
#include "CSoundEmitterSystemBase.h"
#include "CUnknown1024b370.h"

struct FileSysView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual bool FileExists(const char *pszFileName, const char *pszPathID);
};
extern FileSysView *g_1070b238;
__declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);
__declspec(dllimport) void DevMsg(const char *pMsg, ...);
float sub_1012f700(CUnknown1012f700 *p);

struct CMissingSoundSet : CUnknown1024b2d0
{
	CMissingSoundSet(int arg, int count, char flag) { sub_1024b2d0(arg, count, flag); }
	~CMissingSoundSet() { ((CUnknown1024b370 *)this)->sub_1024b370(); }
};

// TARGET: CSoundEmitterSystemBase::sub_101b33f0
char CSoundEmitterSystemBase::sub_101b33f0(const char *pszName, CSoundParameters &params)
{
	int index = sub_101b2f60(pszName);
	if (index == -1) {
		DevMsg("CSoundEmitterSystemBase::GetParametersForSound:  No such sound %s\n", pszName);
		return 0;
	}
	CSoundParametersInternal *pSound = sub_101b3730(index);
	if (!pSound) {
		DevMsg("CSoundEmitterSystemBase::GetParametersForSound:  No such sound %s\n", pszName);
		return 0;
	}
	params.channel = pSound->m_channel;
	params.volume = sub_1012f700(&pSound->m_volume);
	params.pitch = (int)sub_1012f700(&pSound->m_pitch);
	params.pitchlow = (int)pSound->m_pitch.start;
	params.pitchhigh = (int)((float)params.pitchlow + pSound->m_pitch.range);
	params.count = pSound->m_nWaves;
	params.soundname[0] = 0;
	int w = sub_101b3240(&pSound->m_pWaves, 0);
	if (w >= 0) {
		CUnknown1024b2d0Id id;
		id.m_id = pSound->m_pWaves[w].m_symbol;
		Q_strncpy(params.soundname, m_listb0.sub_1024b830(id), 128);
	}
	params.soundlevel = (int)sub_1012f700(&pSound->m_soundlevel);
	params.play_to_owner_only = pSound->m_bPlayToOwnerOnly;
	if (!params.soundname[0]) {
		DevMsg("CSoundEmitterSystemBase::GetParametersForSound:  sound %s has no wave or rndwave key!\n", pszName);
		return 0;
	}
	if (pSound->m_bMissingWave48 && params.soundname[0] != '!') {
		const char *psz = params.soundname;
		for (int k = 0; k < 2; k++) {
			char c = *psz;
			if (c != '*' && c != '?' && c != '!' && c != '#' && c != '@' && c != '>' && c != '<' && c != '^' && c != ')')
				break;
			psz++;
		}
		char szFile[256];
		Q_snprintf(szFile, 256, "sound/%s", psz);
		if (!g_1070b238->FileExists(szFile, 0)) {
			static CMissingSoundSet s_Missing(0, 0x20, 0);
			char szKey[256];
			Q_snprintf(szKey, 256, "%s:%s", pszName, params.soundname);
			if (s_Missing.sub_1024b400(szKey).m_id == 0xffff) {
				((CUnknown1024b370 *)&s_Missing)->sub_1024b5e0(szKey);
				DevMsg("CSoundEmitterSystemBase::GetParametersForSound:  sound '%s' references wave '%s' which doesn't exist on disk!\n", pszName, params.soundname);
			}
			return 0;
		}
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x101b36f0 size=0xf
struct CUnknown101b36f0 { void * sub_101b36f0(int); };
void * CUnknown101b36f0::sub_101b36f0(int a0)
{
    *(short *)this = *(short *)((char *)a0);
    return this;
}
// END FUNCTION

// FUNCTION: 0x101b3730 size=0x28
#include "CUnknown101b3730.h"
// TARGET: CUnknown101b3730::sub_101b3730
void *CUnknown101b3730::sub_101b3730(int index)
{
    if (index >= 0 && index < m_nRecords)
        return m_pRecords + 0x1c + index * 0xe8;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101b3770 size=0x82
#include "utlvector.h"
#include "CSoundEmitterSystemBase.h"
#include "CUnknown1024b370.h"
#include "CMem8_t.h"
#include <string.h>

inline void *operator new(unsigned int, void *p) { return p; }

struct SymbolRecord_t
{
	CUnknown1024b370Symbol symbol;
	int gender;
};

struct SymbolVec_t
{
	CMem8_t m_Memory;	// 0x00
	int m_Size;	// 0x0c
	SymbolRecord_t *m_pElements;	// 0x10

	SymbolRecord_t &Element(int i) { return ((SymbolRecord_t *)m_Memory.m_pMemory)[i]; }

	void InsertBefore(int elem, const SymbolRecord_t &src)
	{
		if (m_Size + 1 > m_Memory.m_nAllocationCount)
			m_Memory.sub_101b72e0(m_Size + 1 - m_Memory.m_nAllocationCount);
		m_Size += 1;
		m_pElements = (SymbolRecord_t *)m_Memory.m_pMemory;
		int numToMove = m_Size - elem - 1;
		if (numToMove > 0)
			memmove(&Element(elem + 1), &Element(elem), numToMove * sizeof(SymbolRecord_t));
		new (&Element(elem)) SymbolRecord_t(src);
	}
	void AddToTail(const SymbolRecord_t &src) { InsertBefore(m_Size, src); }
};

struct SymbolTable_t
{
	char m_pad0000[0x20];
	SymbolVec_t m_Vec;	// 0x20
};

// TARGET: CSoundEmitterSystemBase::sub_101b3770
void CSoundEmitterSystemBase::sub_101b3770(void *pTable, const char *pszName, int value)
{
	CUnknown1024b370Symbol sym = ((CUnknown1024b370 *)&m_listb0)->sub_1024b5e0(pszName);
	SymbolRecord_t e;
	e.symbol = sym;
	e.gender = value;
	((SymbolTable_t *)pTable)->m_Vec.AddToTail(e);
}
// END FUNCTION

// FUNCTION: 0x101b3830 size=0x10f
#include "CUnknown101b3830.h"
__declspec(dllimport) const char *Q_stristr(const char *, const char *);
extern "C" __declspec(dllimport) int __cdecl Q_snprintf(char *, int, const char *, ...);
extern "C" void *__cdecl memset(void *, int, unsigned int);
extern char g_105994a8[];
extern char g_10599498[];
extern char g_105994a0[];
extern char g_10599490[];
void sub_101b3990(const char *pszName, int nPrefixLen, int nSkip, char *pPrefix, int nPrefixSize, char *pSuffix, int nSuffixSize);
void CUnknown101b3830::sub_101b3830(int nKey, const char *pszName)
{
	const char *pMarker = Q_stristr(pszName, g_105994a8);
	if (!pMarker) {
		sub_101b3770(nKey, pszName, (int)pMarker);
		return;
	}
	char prefix[256];
	char suffix[256];
	char out[256];
	memset(prefix, 0, 256);
	memset(suffix, 0, 256);
	sub_101b3990(pszName, pMarker - pszName, 7, prefix, 256, suffix, 256);
	Q_snprintf(out, 256, g_10599498, prefix, g_105994a0, suffix);
	sub_101b3770(nKey, out, 1);
	Q_snprintf(out, 256, g_10599498, prefix, g_10599490, suffix);
	sub_101b3770(nKey, out, 2);
}
// END FUNCTION

// FUNCTION: 0x101b3990 size=0x58
void sub_101b3990(char *pSrc, int split, int skip, char *dst, int max, char *dst2, int max2)
{
	char *src = pSrc;
	char *out = dst;
	int limit = max;
	int i = 0;
	int n = 0;
	while (*src)
	{
		if (i == split)
		{
			while (--skip >= 0)
				src++;
			limit = max2;
			*out = 0;
			out = dst2;
			i++;
		}
		else if (n >= limit)
		{
			src++;
			i++;
		}
		else
		{
			*out++ = *src;
			src++;
			n++;
			i++;
		}
	}
	*out = 0;
}
// END FUNCTION

// FUNCTION: 0x101b3a10 size=0x107
#include "CUnknown101b3a10.h"

extern "C" __declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);
__declspec(dllimport) const char *Q_stristr(const char *pStr, const char *pSearch);
extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
extern "C" void *__cdecl memset(void *, int, unsigned int);

void sub_101b3990(const char *pszSrc, int nSplit, int nSkip, char *pszFirst, int nFirst, char *pszSecond, int nSecond);

void CUnknown101b3a10::sub_101b3a10(void *pCharacter, const char *pszSrc, char *pszDest, int nDest)
{
	Q_strncpy(pszDest, pszSrc, nDest);
	const char *pszGender = Q_stristr(pszSrc, "$gender");
	if (pszGender) {
		int nGender = sub_101b3b90(pCharacter);
		if (nGender) {
			char szFirst[0x100];
			char szSecond[0x100];
			memset(szFirst, 0, sizeof(szFirst));
			memset(szSecond, 0, sizeof(szSecond));
			sub_101b3990(pszSrc, pszGender - pszSrc, 7, szFirst, 0x100, szSecond, 0x100);
			switch (nGender) {
			case 1:
				Q_snprintf(pszDest, nDest, "%s%s%s", szFirst, "male", szSecond);
				break;
			case 2:
				Q_snprintf(pszDest, nDest, "%s%s%s", szFirst, "female", szSecond);
				break;
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101b3b70 size=0x1
void sub_101b3b70()
{
}
// END FUNCTION

// FUNCTION: 0x101b3b90 size=0x5
int __stdcall sub_101b3b90(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101b3bb0 size=0x3e2
#include "CUnknown10248a50.h"
#include "CSoundEmitterSystemBase.h"
#include "CUnknown101b2570.h"
#include "CUnknown101b3830.h"
#include "CKeyValuesX.h"
#include "Tier1.h"
#include <string.h>

extern int (*g_109f3880)(const char *s1, const char *s2);
extern float g_104454c4;
CUnknown1012f700 sub_1012f640(const char *pszInterval);

#define ATTN_TO_SNDLVL(a) (int)(((a) != g_104454c4) ? (50 + 20 / (a)) : g_104454c4)

bool CSoundEmitterSystemBase::sub_101b3bb0(const char *pszSoundName, CUnknown10248a50 *pKeys, CUnknown101b2570 *pParams)
{
	CKeyValuesX *pKey = ((CKeyValuesX *)pKeys)->sub_10004c8c();
	if (pKey) {
		int (*Q_strcasecmp)(const char *, const char *) = g_109f3880;
		do {
			if (!Q_strcasecmp(pKey->sub_102480b0(), "channel")) {
				pParams->sub_101b2490(pKey->sub_10248cd0(0, ""));
			} else if (!Q_strcasecmp(pKey->sub_102480b0(), "volume")) {
				pParams->sub_101b2420(pKey->sub_10248cd0(0, ""));
			} else if (!Q_strcasecmp(pKey->sub_102480b0(), "pitch")) {
				pParams->sub_101b2570(pKey->sub_10248cd0(0, ""));
			} else if (!Q_strcasecmp(pKey->sub_102480b0(), "wave")) {
				((CUnknown101b3830 *)this)->sub_101b3830((int)pParams, pKey->sub_10248cd0(0, ""));
			} else if (!Q_strcasecmp(pKey->sub_102480b0(), "rndwave")) {
				CKeyValuesX *pWaves = pKey->sub_10004c8c();
				while (pWaves) {
					((CUnknown101b3830 *)this)->sub_101b3830((int)pParams, pWaves->sub_10248cd0(0, ""));
					pWaves = pWaves->sub_1000fa65();
				}
			} else if (!Q_strcasecmp(pKey->sub_102480b0(), "attenuation")) {
				if (!g_109f3848(pKey->sub_10248cd0(0, ""), "SNDLVL_", strlen("SNDLVL_"))) {
					g_109f3630("CSoundEmitterSystemBase::GetParametersForSound:  sound %s has \"attenuation\" with %s value!\n",
						pszSoundName, pKey->sub_10248cd0(0, ""));
				}
				if (!g_109f3848(pKey->sub_10248cd0(0, ""), "ATTN_", strlen("ATTN_"))) {
					pParams->m_soundlevel.a = ATTN_TO_SNDLVL(sub_101b4900(pKey->sub_10248cd0(0, "")));
					pParams->m_soundlevel.b = 0.0f;
				} else {
					CUnknown1012f700 interval;
					interval = sub_1012f640(pKey->sub_10248cd0(0, ""));
					float start = interval.start;
					float end = interval.start + interval.range;
					pParams->m_soundlevel.a = ATTN_TO_SNDLVL(start);
					pParams->m_soundlevel.b = ATTN_TO_SNDLVL(end) - ATTN_TO_SNDLVL(start);
				}
			} else if (!Q_strcasecmp(pKey->sub_102480b0(), "soundlevel")) {
				if (!g_109f3848(pKey->sub_10248cd0(0, ""), "ATTN_", strlen("ATTN_"))) {
					g_109f3630("CSoundEmitterSystemBase::GetParametersForSound:  sound %s has \"soundlevel\" with %s value!\n",
						pszSoundName, pKey->sub_10248cd0(0, ""));
				}
				pParams->sub_101b2630(pKey->sub_10248cd0(0, ""));
			} else if (!Q_strcasecmp(pKey->sub_102480b0(), "play_to_owner_only")) {
				pParams->m_bPlayToOwnerOnly = pKey->sub_10248bb0(0, 0) != 0;
			} else if (!Q_strcasecmp(pKey->sub_102480b0(), "precache")) {
				pParams->m_bPrecache = pKey->sub_10248bb0(0, 0) != 0;
			}
			pKey = pKey->sub_1000fa65();
		} while (pKey);
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x101b40a0 size=0x99
struct S101b40a0 {
    int a;
    float b;
    int c, d, e;
    int f;
    char g;
    int h;
    char name[128];
};
extern char g_1072c0c8[];
char __stdcall sub_10005830(const char *p, S101b40a0 *s);
extern char *(__cdecl *g_109f3890)(char *, const char *, int);

char * __stdcall sub_101b40a0(char *p, int unused)
{
    S101b40a0 s;
    s.c = 100;
    s.d = 100;
    s.e = 100;
    s.a = 0;
    s.b = 1.0f;
    s.f = 75;
    s.name[0] = 0;
    s.g = 0;
    s.h = 0;
    if (!sub_10005830(p, &s))
        return p;
    if (!s.name[0])
        return p;
    g_109f3890(g_1072c0c8, s.name, 512);
    return g_1072c0c8;
}
// END FUNCTION

// FUNCTION: 0x101b4170 size=0x61
#include "CSoundEmitterSystemBase.h"

int CSoundEmitterSystemBase::sub_101b4170(const char *pszName)
{
	CSoundParameters params;
	if (!sub_101b33f0(pszName, params))
		return 75;
	return params.soundlevel;
}
// END FUNCTION

// FUNCTION: 0x101b4200 size=0x27
#include "CSoundEmitterSystemBase.h"

// the callee compiled before its caller in the same unit: a copy in the block's own namespace (one name, one
// definition: the real sub_101b31a0 is its own block)
namespace block_101b4200 {
struct CSoundEmitterSystemBaseUnit : CSoundEmitterSystemBase
{
	char sub_101b31a0(int index);
};

char CSoundEmitterSystemBaseUnit::sub_101b31a0(int index)
{
	if (index >= 0 && index < m_i64)
	{
		return 1;
	}
	return 0;
}
}
using namespace block_101b4200;

// TARGET: CSoundEmitterSystemBase::sub_101b4200
char CSoundEmitterSystemBase::sub_101b4200(int index)
{
	char bValid = ((CSoundEmitterSystemBaseUnit *)this)->sub_101b31a0(index);
	if (!bValid)
		return bValid;
	return *(char *)(*(char **)((char *)this + 0x54) + index * 0xe8 + 0x15);
}
// END FUNCTION

// FUNCTION: 0x101b4240 size=0x2b5
#include "CUnknown101b2570.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CSoundEmitterSystemBase.h"
#include "CUnknown10248a50.h"
#include "CUtlVector130.h"
#include "CUnknown101b30d0.h"
#include "CUnknown101b45b0.h"
#include "CUnknown101b6320.h"
#include "CUtlRBTreeFind232.h"
#include <string.h>

extern IFileSys *g_1070b238;
__declspec(dllimport) char *Q_strncpy(char *dest, const char *src, int maxLen);
__declspec(dllimport) void DevMsg(const char *fmt, ...);

struct CSoundScriptFileX
{
	char dirty;
	char precachealways;
	char filename[0x80];
};
void sub_101b72b0(CSoundScriptFileX *dst, const CSoundScriptFileX *src);

struct CKVView : CUnknown10248a50
{
	const char *sub_102480b0();
	CKVView *sub_10248a30();
	void deleteThis()
	{
		if (this)
		{
			sub_100046f1();
			operator delete(this);
		}
	}
};

struct CVecDtorView
{
	int m_a[5];
	void sub_101b6120();
};
struct CTempVecView
{
	void sub_101b65e0();
};
struct CTempMemView
{
	void sub_101b6b90();
};

struct CSoundSymX
{
	unsigned short m_id;
	CSoundSymX() { m_id = 0xffff; }
	CSoundSymX(const CSoundSymX &o) { m_id = o.m_id; }
};
struct CStrTableView
{
	CSoundSymX sub_1024b5e0(const char *name);
};

struct CSoundKeyX
{
	CSoundSymX sym;
	CUnknown101b45b0 data;
	CSoundKeyX() { data.sub_101b45b0(); }
	~CSoundKeyX()
	{
		((CVecDtorView *)&data.m_nField3c)->sub_101b6120();
		((CVecDtorView *)&data.m_nField28)->sub_101b6120();
	}
};

struct CSoundEntryX : CUnknown101b6320
{
	CSoundEntryX() { ((CUnknown101b30d0 *)&m_params)->sub_101b30d0(); }
	~CSoundEntryX()
	{
		((CTempVecView *)&m_params.m_vecB)->sub_101b65e0();
		((CTempMemView *)&m_params.m_vecB)->sub_101b6b90();
		((CVecDtorView *)&m_params.m_vecA)->sub_101b6120();
	}
};

struct CSoundTreeX : CUtlRBTree<CSoundEmitterRecord, int>
{
	int sub_101b68f0(const CSoundKeyX &key);
	int sub_101b66e0(const CSoundKeyX &key);
};

struct CSoundDictX
{
	CSoundTreeX m_tree;
	CStrTableView m_strings;

	int Find(const char *name)
	{
		CSoundKeyX key;
		key.sym = m_strings.sub_1024b5e0(name);
		return m_tree.sub_101b68f0(key);
	}
	int Insert(const char *name, const CUnknown101b6320 &entry)
	{
		CSoundKeyX key;
		key.sym = m_strings.sub_1024b5e0(name);
		int idx = m_tree.sub_101b66e0(key);
		((CUnknown101b6320 &)m_tree[idx].m_b4).sub_101b6320(entry);
		return idx;
	}
};

struct CScriptFileVec : CUtlVector130
{
	CSoundScriptFileX &Element(int i) { return ((CSoundScriptFileX *)m_pMemory)[i]; }
	int AddToTail(const CSoundScriptFileX &src)
	{
		int elem = m_size;
		sub_101b7170(1);
		sub_101b7240(elem, 1);
		sub_101b72b0(&Element(elem), &src);
		return elem;
	}
	void Remove(int elem)
	{
		int numToMove = m_size - elem - 1;
		if (numToMove > 0)
			memmove(&Element(elem), &Element(elem + 1), numToMove * sizeof(CSoundScriptFileX));
		m_size--;
	}
};

void CSoundEmitterSystemBase::sub_101b4240(const char *filename, bool precachealways)
{
	CSoundScriptFileX sf;
	Q_strncpy(sf.filename, filename, sizeof(sf.filename));
	sf.dirty = false;
	sf.precachealways = precachealways;

	int scriptindex = ((CScriptFileVec *)&m_i9c)->AddToTail(sf);

	CKVView *kv = (CKVView *)new CUnknown10248a50(filename);

	IFileSys * __arg0 = g_1070b238;
	if (kv->sub_102480f0(filename, __arg0, 0, true))
	{
		for (CKVView *pKeys = kv; pKeys; pKeys = pKeys->sub_10248a30())
		{
			if (!pKeys->sub_10248a10())
				continue;

			CSoundEntryX entry;
			entry.m_bField00 = false;
			entry.m_bField01 = precachealways;
			entry.m_nField04 = scriptindex;

			if (((CSoundDictX *)&m_pfn50)->Find(pKeys->sub_102480b0()) != -1)
			{
				DevMsg("CSoundEmitterSystem::AddSoundsFromFile(%s):  Entry %s duplicated, skipping\n", filename, pKeys->sub_102480b0());
			}
			else
			{
				sub_101b3bb0(pKeys->sub_102480b0(), pKeys, (CUnknown101b2570 *)&entry.m_params);
				((CSoundDictX *)&m_pfn50)->Insert(pKeys->sub_102480b0(), entry);
			}
		}
	}
	else
	{
		DevMsg("CSoundEmitterSystem::AddSoundsFromFile:  No such file %s\n", filename);
		((CScriptFileVec *)&m_i9c)->Remove(scriptindex);
		kv->deleteThis();
		return;
	}
	kv->deleteThis();
}
// END FUNCTION

// FUNCTION: 0x101b45b0 size=0x99
#include "CUnknown101b45b0.h"
extern "C" __declspec(dllimport) char *Q_strncpy(char *dest, const char *src, int maxLen);

struct Five
{
	int a, b, c, d, e;
	void Zero() { a = 0; b = 0; c = 0; d = 0; e = 0; }
};

CUnknown101b45b0 *CUnknown101b45b0::sub_101b45b0()
{
	Q_strncpy((((Five *)&m_nField3c)->Zero(), m_nField08 = 0, m_szChannel),
		(((Five *)&m_nField28)->Zero(), "CHAN_AUTO"), 0x20);
	m_flChannelScale = 1.0f;
	m_nField10 = 0;
	Q_strncpy(m_szVolume, "VOL_NORM", 0x20);
	m_flVolume = 100.0f;
	m_nField18 = 0;
	Q_strncpy(m_szPitch, "PITCH_NORM", 0x20);
	m_flPitch = 75.0f;
	m_nField20 = 0;
	Q_strncpy(m_szSoundLevel, "SNDLVL_NORM", 0x20);
	m_bField24 = 0;
	m_bField25 = 1;
	m_bField50 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x101b4680 size=0x8a
#include "CUnknown101b4680.h"

CUnknown101b4680::~CUnknown101b4680()
{
}
// END FUNCTION

// FUNCTION: 0x101b4740 size=0x160
#include "CSoundEmitterSystemBase.h"

struct FileSysView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual bool FileExists(const char *pszFileName, const char *pszPathID);
};
extern FileSysView *g_1070b238;
__declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
__declspec(dllimport) void DevMsg(const char *pMsg, ...);

namespace block_101b4740 {
struct CSoundEmitterUnit : CSoundEmitterSystemBase
{
	int sub_101b3220();
};
int CSoundEmitterUnit::sub_101b3220()
{
	return m_i64;
}
}
using namespace block_101b4740;

// TARGET: CSoundEmitterSystemBase::sub_101b4740
int CSoundEmitterSystemBase::sub_101b4740(bool bVerbose)
{
	int nMissing;
	int i;
	int nSounds;
	nMissing = 0;
	nSounds = ((CSoundEmitterUnit *)this)->sub_101b3220();
	for (i = 0; i < nSounds; i++) {
		CSoundParametersInternal *pSound = sub_101b3730(i);
		if (!pSound)
			continue;
		int nWaves = pSound->m_nWaves;
		for (int j = 0; j < nWaves; j++) {
			CUnknown1024b2d0Id id;
			id.m_id = pSound->m_pWaves[j].m_symbol;
			const char *pszWave = m_listb0.sub_1024b830(id);
			if (pszWave && pszWave[0] && pszWave[0] != '!') {
				const char *psz = pszWave;
				for (int k = 0; k < 2; k++) {
					char c = *psz;
					if (c != '*' && c != '?' && c != '!' && c != '#' && c != '@' && c != '>' && c != '<' && c != '^' && c != ')')
						break;
					psz++;
				}
				char szFile[512];
				Q_snprintf(szFile, sizeof(szFile), "sound/%s", psz);
				if (!g_1070b238->FileExists(szFile, 0)) {
					nMissing++;
					pSound->m_bMissingWave48 = 1;
					if (bVerbose)
						DevMsg("Sound %s references missing file %s\n", sub_101b31d0(i), pszWave);
				}
			}
		}
	}
	return nMissing;
}
// END FUNCTION

// FUNCTION: 0x101b4900 size=0xbf
extern "C" __declspec(dllimport) int Q_strcasecmp(const char *, const char *);
__declspec(dllimport) void DevMsg(const char *, ...);
extern const float g_104454c4;
extern const float g_10452dc4;
extern const float g_10462914;
extern const float g_1044f02c;
extern const float g_1047b3d0;
extern const float g_1047049c;

float __stdcall sub_101b4900(const char *name)
{
    if (name) {
        if (Q_strcasecmp(name, "ATTN_NONE") == 0)
            return g_104454c4;
        if (Q_strcasecmp(name, "ATTN_NORM") != 0) {
            if (Q_strcasecmp(name, "ATTN_IDLE") == 0)
                return g_10452dc4;
            if (Q_strcasecmp(name, "ATTN_STATIC") == 0)
                return g_10462914;
            if (Q_strcasecmp(name, "ATTN_RICOCHET") == 0)
                return g_1044f02c;
            if (Q_strcasecmp(name, "ATTN_GUNFIRE") == 0)
                return g_1047b3d0;
            DevMsg("CSoundEmitterSystem:  Unknown attenuation key %s\n", name);
        }
    }
    return g_1047049c;
}
// END FUNCTION

// FUNCTION: 0x101b49f0 size=0x4d
struct SSoundLevelEntry { int level; const char *name; };
extern SSoundLevelEntry g_10598cd0[30];
extern "C" __declspec(dllimport) int Q_strcasecmp(const char *s1, const char *s2);
__declspec(dllimport) void DevMsg(const char *fmt, ...);
int sub_101b49f0(const char *pName)
{
    if (pName) {
        for (SSoundLevelEntry *p = g_10598cd0; (int)p < (int)(g_10598cd0 + 30); p++) {
            if (!Q_strcasecmp(pName, p->name))
                return p->level;
        }
        DevMsg("CSoundEmitterSystem:  Unknown sound level %s\n", pName);
    }
    return 0x4b;
}
// END FUNCTION

// FUNCTION: 0x101b4a60 size=0x10
namespace lifted {
int sub_1000e79b(int);
}
int __stdcall sub_101b4a60(int a0)
{
    return lifted::sub_1000e79b(a0);
}
// END FUNCTION

// FUNCTION: 0x101b4a80 size=0x3b
struct NameEntry { int m_key; const char *m_pName; };
extern NameEntry g_10598cd0[30];
extern char g_1072c308[];
extern int (__cdecl *g_109f388c)(char *, int, const char *, ...);
const char * __stdcall sub_101b4a80(int key)
{
	NameEntry *p = g_10598cd0;
	do {
		if (p->m_key == key)
			return p->m_pName;
		p++;
	} while ((int)p < (int)(g_10598cd0 + 30));
	g_109f388c(g_1072c308, 32, "%i", key);
	return g_1072c308;
}
// END FUNCTION

// FUNCTION: 0x101b4ad0 size=0x3b
struct NameEntry { int m_key; const char *m_pName; };
extern NameEntry g_10598c78[7];
extern char g_1072c018[];
extern int (__cdecl *g_109f388c)(char *, int, const char *, ...);
const char * __stdcall sub_101b4ad0(int key)
{
	NameEntry *p = g_10598c78;
	do {
		if (p->m_key == key)
			return p->m_pName;
		p++;
	} while ((int)p < (int)(g_10598c78 + 7));
	g_109f388c(g_1072c018, 32, "%i", key);
	return g_1072c018;
}
// END FUNCTION

// FUNCTION: 0x101b4b20 size=0x4a
struct Entry { float value; const char *text; };
extern Entry g_10598cb0[1];
extern char g_1072c0a4[];
extern int (__cdecl *g_109f388c)(char *, int, const char *, ...);

const char * __stdcall sub_101b4b20(float value)
{
	for (int p = (int)g_10598cb0; p < (int)(g_10598cb0 + 1); p += sizeof(Entry)) {
		if (((Entry *)p)->value == value)
			return ((Entry *)p)->text;
	}
	g_109f388c(g_1072c0a4, 0x20, "%.3f", (double)value);
	return g_1072c0a4;
}
// END FUNCTION

// FUNCTION: 0x101b4b90 size=0x4a
struct Entry { float value; const char *text; };
extern Entry g_10598cb8[3];
extern char g_1072c038[];
extern int (__cdecl *g_109f388c)(char *, int, const char *, ...);

const char * __stdcall sub_101b4b90(float value)
{
	for (int p = (int)g_10598cb8; p < (int)(g_10598cb8 + 3); p += sizeof(Entry)) {
		if (((Entry *)p)->value == value)
			return ((Entry *)p)->text;
	}
	g_109f388c(g_1072c038, 0x20, "%.3f", (double)value);
	return g_1072c038;
}
// END FUNCTION

// FUNCTION: 0x101b4c00 size=0x10
namespace lifted {
int sub_101b24d0(int);
}
int __stdcall sub_101b4c00(int a0)
{
    return lifted::sub_101b24d0(a0);
}
// END FUNCTION

// FUNCTION: 0x101b4c20 size=0x48
extern char g_106b8540[];
struct CIdxEntry { char pad[0x18]; int m_nIndex; char pad2[0xe8 - 0x1c]; };
struct CIdxData { char pad[0x82]; };
struct CIdxTable {
    char pad0[0x54];
    CIdxEntry *m_pEntries;
    char pad1[0x64 - 0x58];
    int m_nEntries;
    char pad2[0x9c - 0x68];
    CIdxData *m_pData;
    char pad3[0xa8 - 0xa0];
    int m_nData;
    char *sub_101b4c20(int i);
};
char *CIdxTable::sub_101b4c20(int i)
{
    if (i >= 0 && i < m_nEntries) {
        int j = m_pEntries[i].m_nIndex;
        if (j >= 0 && j < m_nData)
            return m_pData[j].pad + 2;
    }
    return g_106b8540;
}
// END FUNCTION

// FUNCTION: 0x101b4c90 size=0x1b
#include "CUnknown1024b2d0.h"

struct CUnk101b4c90 {
    char pad[0xb0];
    void sub_101b4c90(unsigned short *p);
};

void CUnk101b4c90::sub_101b4c90(unsigned short *p)
{
    CUnknown1024b2d0Id id;
    id.m_id = *p;
    ((CUnknown1024b2d0 *)((char *)this + 0xb0))->sub_1024b830(id);
}
// END FUNCTION

// FUNCTION: 0x101b4cc0 size=0x4e
#include "utlvector.h"
#include "CSoundEmitterSystemBase.h"
#include <string.h>

// The script file table at +0x9c: 0x82 byte entries (dirty flag word, file name).
struct CSoundScriptFile_101b4cc0
{
	short m_bDirty;
	char m_szFileName[0x80];
};

struct CSoundEmitterScriptsView
{
	char m_pad000[0x9c];
	CUtlVector<CSoundScriptFile_101b4cc0> m_SoundKeyValues;	// 0x9c
};

int CSoundEmitterSystemBase::sub_101b4cc0(const char *pszScript)
{
	CUtlVector<CSoundScriptFile_101b4cc0> &files = ((CSoundEmitterScriptsView *)this)->m_SoundKeyValues;
	int c = files.Count();
	for (int i = 0; i < c; i++)
	{
		if (!_strcmpi(files[i].m_szFileName, pszScript))
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x101b4d30 size=0x2f9
#include "CSoundEmitterSystemBase.h"
#include "CUnknown101b6320.h"
#include "CUnknown101b6250.h"
#include "CUnknown101b30d0.h"
#include <string.h>

struct CSndVec8 { void sub_101b6550(int pElements, int nCount); };
struct CSndSub34 { void sub_101b61a0(const void *pSrc); };
struct CSndSymbol { unsigned short m_Id; CSndSymbol(); };
struct CSndTreeView { CSndSymbol sub_1024b5e0(const char *pszName); };
struct CSndKeyTail { void sub_101b4680(); };
struct CSndDestroyA { void sub_101b65e0(); void sub_101b6b90(); };
struct CSndDestroyB { void sub_101b6120(); };
struct CSndRBTree
{
	char m_pad[4];
	char *m_pElements;	// 0x04
	char m_pad08[0x20 - 8];
	CSndTreeView m_names;	// 0x20
	int sub_101b66e0(void *pKey);
};

extern void (*g_109f364c)(const char *pMsg, ...);

// TARGET: CSoundEmitterSystemBase::sub_101b4d30
bool CSoundEmitterSystemBase::sub_101b4d30(const char *pszName, const char *pszWave, const void *pParams)
{
	int idx = sub_101b2f60(pszName);
	int script = sub_101b4cc0(pszWave);
	if (script == -1) {
		g_109f364c("CSoundEmitterSystemBase::AddSound( '%s', '%s', ... ), script file not list in manifest '%s'\n", pszName, pszWave, "scripts/game_sounds_manifest.txt");
		return false;
	}
	const CUnknown101b6320Params *pSrc = (const CUnknown101b6320Params *)pParams;
	unsigned int i;
	if (sub_101b31a0(idx)) {
		CUnknown101b6320 *pRec = (CUnknown101b6320 *)((char *)m_i54 + 0x14 + idx * 0xe8);
		pRec->m_bField00 = 0;
		pRec->m_nField04 = script;
		pRec->m_bField01 = ((char *)m_i9c)[script * 0x82 + 1];
		CUnknown101b6320Params *pDst = &pRec->m_params;
		pDst->m_nField00 = pSrc->m_nField00;
		pDst->m_nField04 = pSrc->m_nField04;
		pDst->m_nField08 = pSrc->m_nField08;
		pDst->m_nField0c = pSrc->m_nField0c;
		pDst->m_nField10 = pSrc->m_nField10;
		pDst->m_nField14 = pSrc->m_nField14;
		pDst->m_nField18 = pSrc->m_nField18;
		pDst->m_bField1c = pSrc->m_bField1c;
		pDst->m_bField1d = pSrc->m_bField1d;
		((CSndVec8 *)&pDst->m_vecA)->sub_101b6550(*(int *)&pSrc->m_vecA, pSrc->m_vecA.m_Size);
		((CSndSub34 *)&pDst->m_vecB)->sub_101b61a0(&pSrc->m_vecB);
		pDst->m_bField48 = pSrc->m_bField48;
		for (i = 0; i < 32; i++)
			pDst->m_szVolume[i] = pSrc->m_szVolume[i];
		for (i = 0; i < 32; i++)
			pDst->m_szChannel[i] = pSrc->m_szChannel[i];
		for (i = 0; i < 32; i++)
			pDst->m_szSoundLevel[i] = pSrc->m_szSoundLevel[i];
		for (i = 0; i < 32; i++)
			pDst->m_szPitch[i] = pSrc->m_szPitch[i];
		((char *)m_i9c)[script * 0x82] = 1;
		return true;
	}
	CUnknown101b6320 tmp;
	((CUnknown101b30d0 *)&tmp.m_params)->sub_101b30d0();
	tmp.m_bField00 = 0;
	tmp.m_nField04 = script;
	tmp.m_bField01 = ((char *)m_i9c)[script * 0x82 + 1];
	CUnknown101b6320Params *pT = &tmp.m_params;
	pT->m_nField00 = pSrc->m_nField00;
	pT->m_nField04 = pSrc->m_nField04;
	pT->m_nField08 = pSrc->m_nField08;
	pT->m_nField0c = pSrc->m_nField0c;
	pT->m_nField10 = pSrc->m_nField10;
	pT->m_nField14 = pSrc->m_nField14;
	pT->m_nField18 = pSrc->m_nField18;
	pT->m_bField1c = pSrc->m_bField1c;
	pT->m_bField1d = pSrc->m_bField1d;
	((CSndVec8 *)&pT->m_vecA)->sub_101b6550(*(int *)&pSrc->m_vecA, pSrc->m_vecA.m_Size);
	((CSndSub34 *)&pT->m_vecB)->sub_101b61a0(&pSrc->m_vecB);
	pT->m_bField48 = pSrc->m_bField48;
	memcpy(pT->m_szVolume, pSrc->m_szVolume, 32);
	memcpy(pT->m_szChannel, pSrc->m_szChannel, 32);
	memcpy(pT->m_szSoundLevel, pSrc->m_szSoundLevel, 32);
	memcpy(pT->m_szPitch, pSrc->m_szPitch, 32);
	CSndRBTree *pTree = (CSndRBTree *)((char *)this + 0x50);
	CUnknown101b6250 key;
	key.sub_101b6250();
	key.m_nField00 = pTree->m_names.sub_1024b5e0(pszName).m_Id;
	int node = pTree->sub_101b66e0(&key);
	((CUnknown101b6320 *)(pTree->m_pElements + 0x14 + node * 0xe8))->sub_101b6320(tmp);
	((CSndKeyTail *)&key.m_nField0c)->sub_101b4680();
	((char *)m_i9c)[script * 0x82] = 1;
	((CSndDestroyA *)&tmp.m_params.m_vecB)->sub_101b65e0();
	((CSndDestroyA *)&tmp.m_params.m_vecB)->sub_101b6b90();
	((CSndDestroyB *)&tmp.m_params.m_vecA)->sub_101b6120();
	return true;
}
// END FUNCTION

// FUNCTION: 0x101b50f0 size=0x70
#include "CSoundEmitterSystemBase.h"

extern void (*g_109f364c)(const char *fmt, ...);

namespace block_101b31a0 {
struct CSoundEmitterUnit : CSoundEmitterSystemBase {
	char sub_101b31a0(int index);
};
char CSoundEmitterUnit::sub_101b31a0(int index)
{
	if (index >= 0 && index < m_i64)
		return 1;
	return 0;
}
}
using namespace block_101b31a0;

// TARGET: CSoundEmitterSystemBase::sub_101b50f0
void CSoundEmitterSystemBase::sub_101b50f0(const char *pszName)
{
	int index = sub_101b2f60(pszName);
	if (!((CSoundEmitterUnit *)this)->sub_101b31a0(index)) {
		g_109f364c("Can't remove %s, no such sound!\n", pszName);
		return;
	}
	*((char *)m_i54 + index * 0xe8 + 0x14) = 1;
	int script = *(int *)((char *)m_i54 + index * 0xe8 + 0x18);
	if (script >= 0 && script < m_ia8)
		*((char *)m_i9c + script * 0x82) = 1;
}
// END FUNCTION

// FUNCTION: 0x101b5180 size=0xbb
#include "CSoundEmitterSystemBase.h"

extern void (__cdecl *g_109f364c)(const char *fmt, ...);	// DevWarning

struct CSoundRecordX	// 0xe8 byte sound record
{
	char m_pad0000[0x18];
	int m_nScript;	// 0x18: the script file's index
	char m_pad001c[0xe8 - 0x1c];
};

struct CScriptFlagX	// 0x82 byte script file record
{
	char m_bChanged;
	char m_pad0001[0x81];
};

namespace block_101b5180 {
struct CSoundEmitterUnit : CSoundEmitterSystemBase
{
	char sub_101b31a0(int index);
};

char CSoundEmitterUnit::sub_101b31a0(int index)
{
	if (index >= 0 && index < m_i64)
		return 1;
	return 0;
}
}
using namespace block_101b5180;

// TARGET: CSoundEmitterSystemBase::sub_101b5180
void CSoundEmitterSystemBase::sub_101b5180(const char *pszSound, const char *pszScript)
{
	int iSound = sub_101b2f60(pszSound);
	if (!((CSoundEmitterUnit *)this)->sub_101b31a0(iSound)) {
		g_109f364c("Can't move '%s', no such sound!\n", pszSound);
		return;
	}
	int iOld = ((CSoundRecordX *)m_i54)[iSound].m_nScript;
	if (iOld >= 0 && iOld < m_ia8) {
		int iNew = sub_101b4cc0(pszScript);
		if (iNew == -1) {
			g_109f364c("CSoundEmitterSystemBase::MoveSound( '%s', '%s' ), script file not list in manifest '%s'\n", pszSound, pszScript, "scripts/game_sounds_manifest.txt");
			return;
		}
		if (iOld != iNew) {
			((CSoundRecordX *)m_i54)[iSound].m_nScript = iNew;
			((CScriptFlagX *)m_i9c)[iOld].m_bChanged = 1;
			((CScriptFlagX *)m_i9c)[iNew].m_bChanged = 1;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101b5270 size=0x7
struct CUnknown101b5270 { int sub_101b5270(); };
int CUnknown101b5270::sub_101b5270()
{
    return *(int *)((char *)this + 0xa8);
}
// END FUNCTION

// FUNCTION: 0x101b5290 size=0x29
struct CUnit101b5290 {
    char *sub_101b5290(int index);
};

char *CUnit101b5290::sub_101b5290(int index)
{
    if (index >= 0 && index < *(int *)((char *)this + 0xa8)) {
        char *pBase = *(char **)((char *)this + 0x9c);
        return pBase + 2 + index * 0x82;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101b52d0 size=0x28
struct CUnknown101b52d0 {
    char pad_0000[0x9c];
    unsigned char *m_pData;
    int pad_00a0[2];
    int m_nCount;
    unsigned char sub_101b52d0(int i);
};

// TARGET: CUnknown101b52d0::sub_101b52d0
unsigned char CUnknown101b52d0::sub_101b52d0(int i)
{
    if (i >= 0 && i < m_nCount)
        return m_pData[i * 0x82];
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101b5310 size=0x420
#include "utlvector.h"
#include "CSoundEmitterSystemBase.h"
#include "CUtlBuffer.h"
#include "Tier1.h"
#include <string.h>

struct CUnit101b5290 { char *sub_101b5290(int index); };
struct CIdxTable { char *sub_101b4c20(int index); };

struct CScriptWave { int m_a; int m_b; };
struct CSoundScriptView
{
	char m_pad0000[0x1c];
	char m_bPlayToOwnerOnly;
	char m_bPrecache;
	char m_pad001e[2];
	CUtlVector<CScriptWave> m_SoundNames;
	CUtlVector<CScriptWave> m_ConvertedNames;
	char m_pad0048[1];
	char m_szVolume[0x20];
	char m_szChannel[0x20];
	char m_szSoundLevel[0x20];
	char m_szPitch[0x20];
};

struct CSaveFileSys
{
	virtual int Open(const char *pszFile, const char *pszMode, int arg);
	virtual void Close(int hFile);
	virtual void Read(void *pBuffer, int nBytes, int hFile);
	virtual void Write(const void *pBuffer, int nBytes, int hFile);
	virtual void v4(); virtual void v5();
	virtual int Size(int hFile);
	virtual void v7(); virtual void v8();
	virtual char IsFileWritable(const char *pszFile, int arg);
};
extern CSaveFileSys *g_1070b238;
void sub_1006c5a0(CUtlBuffer *pBuf, const char *pszFormat, ...);

void CSoundEmitterSystemBase::sub_101b5310(int scriptindex)
{
	const char *outfile = ((CUnit101b5290 *)this)->sub_101b5290(scriptindex);
	if (!outfile)
	{
		g_109f3630("CSoundEmitterSystemBase::SaveChangesToSoundScript:  No script file for index %i\n", scriptindex);
		return;
	}
	if (g_1070b238->IsFileWritable(outfile, 0))
	{
		g_109f364c("%s is not writable, can't save data to file\n", outfile);
		return;
	}
	CUtlBuffer buf(0, 0, 1);
	if (g_1070b238->IsFileWritable("scripts/game_sounds_header.txt", 0))
	{
		int header = g_1070b238->Open("scripts/game_sounds_header.txt", "rt", 0);
		if (header)
		{
			int len = g_1070b238->Size(header);
			char *data = new char[len + 1];
			memset(data, 0, len + 1);
			g_1070b238->Read(data, len, header);
			g_1070b238->Close(header);
			data[len] = 0;
			buf.sub_1006c4a0(data, strlen(data));
			delete[] data;
		}
		sub_1006c5a0(&buf, "\n");
	}
	int c = sub_101b3220();
	for (int i = 0; i < c; i++)
	{
		if (_strcmpi(outfile, ((CIdxTable *)this)->sub_101b4c20(i)))
			continue;
		if (*(char *)(m_i54 + 0x14 + i * 0xe8))
			continue;
		CSoundScriptView *p = (CSoundScriptView *)sub_101b3730(i);
		if (!p)
			continue;
		sub_1006c5a0(&buf, "\"%s\"\n{\n", sub_101b31d0(i));
		sub_1006c5a0(&buf, "\t\"channel\"\t\t\"%s\"\n", p->m_szChannel);
		sub_1006c5a0(&buf, "\t\"volume\"\t\t\"%s\"\n", p->m_szVolume);
		sub_1006c5a0(&buf, "\t\"pitch\"\t\t\t\"%s\"\n", p->m_szPitch);
		sub_1006c5a0(&buf, "\n");
		sub_1006c5a0(&buf, "\t\"soundlevel\"\t\"%s\"\n", p->m_szSoundLevel);
		if (p->m_bPlayToOwnerOnly)
			sub_1006c5a0(&buf, "\t\"play_to_owner_only\"\t\"1\"\n");
		if (!p->m_bPrecache)
			sub_1006c5a0(&buf, "\t\"precache\"\t\"0\"\n");
		int waveCount = p->m_SoundNames.Count();
		int convertedCount = p->m_ConvertedNames.Count();
		if (waveCount - convertedCount > 0)
		{
			sub_1006c5a0(&buf, "\n");
			if (waveCount == 1)
			{
				sub_1006c5a0(&buf, "\t\"wave\"\t\t\t\"%s\"\n", sub_101b4c90((CSoundWaveEntry *)&p->m_SoundNames[0]));
			}
			else if (convertedCount == 1)
			{
				sub_1006c5a0(&buf, "\t\"wave\"\t\t\t\"%s\"\n", sub_101b4c90((CSoundWaveEntry *)&p->m_ConvertedNames[0]));
			}
			else
			{
				sub_1006c5a0(&buf, "\t\"rndwave\"\n");
				sub_1006c5a0(&buf, "\t{\n");
				int wave;
				for (wave = 0; wave < waveCount; wave++)
				{
					if (!p->m_SoundNames[wave].m_b)
						sub_1006c5a0(&buf, "\t\t\"wave\"\t\"%s\"\n", sub_101b4c90((CSoundWaveEntry *)&p->m_SoundNames[wave]));
				}
				for (wave = 0; wave < convertedCount; wave++)
				{
					sub_1006c5a0(&buf, "\t\t\"wave\"\t\"%s\"\n", sub_101b4c90((CSoundWaveEntry *)&p->m_ConvertedNames[wave]));
				}
				sub_1006c5a0(&buf, "\t}\n");
			}
		}
		sub_1006c5a0(&buf, "}\n");
		if (i != c - 1)
			sub_1006c5a0(&buf, "\n");
	}
	int fh = g_1070b238->Open(outfile, "wt", 0);
	if (fh)
	{
		g_1070b238->Write(buf.m_pBuffer, buf.m_nPut, fh);
		g_1070b238->Close(fh);
		*(char *)(m_i9c + scriptindex * 0x82) = 0;
	}
	else
		g_109f364c("SceneManager_SaveSoundsToScriptFile:  Unable to write file %s!!!\n", outfile);
}
// END FUNCTION

// FUNCTION: 0x101b5840 size=0x1c
struct CUnk101b5840Sub { void sub_1024b5e0(int a, int b); };
struct CUnk101b5840 {
	char pad0000[0xb0];
	CUnk101b5840Sub m_b0;
	int sub_101b5840(int a, int b);
};

// TARGET: CUnk101b5840::sub_101b5840
int CUnk101b5840::sub_101b5840(int a, int b)
{
	m_b0.sub_1024b5e0(a, b);
	return a;
}
// END FUNCTION

// FUNCTION: 0x101b5870 size=0x258
#include "vampire.h"
#include "CSoundEmitterSystemBase.h"
#include "CUnknown101b6320.h"
#include "CUnknown101b4680.h"
#include "CUnknown101b45b0.h"
#include "CUtlRBTree232.h"
#include "CUtlRBTreeFind232.h"
#include "CUnknown101b7370.h"
#include "UtlMem.h"

__declspec(dllimport) void DevMsg(const char *pMsg, ...);

namespace block_101b5870a {
#pragma auto_inline(off)
struct SesV : CSoundEmitterSystemBase { char sub_101b31a0(int index); };
char SesV::sub_101b31a0(int index)
{
	if (index >= 0 && index < m_i64)
	{
		return 1;
	}
	return 0;
}
#pragma auto_inline(on)
}

struct SndVec8
{
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	int m_Size;
	void *m_pElements;

	void sub_101b6120();
	__forceinline ~SndVec8()
	{
		sub_101b6a30((int *)this);
		((UtlMem *)this)->sub_101b6b90();
		m_pElements = m_pMemory;
		if (m_nGrowSize != -1)
		{
			if (m_pMemory)
			{
				Plat_Free(m_pMemory);
				m_pMemory = 0;
			}
			m_nAllocationCount = 0;
		}
	}
};

struct SndEntry
{
	char m_b0;
	char m_b1;
	char m_pad02[2];
	int m_nScript;
	int m_params[8];
	SndVec8 m_vecA;
	SndVec8 m_vecB;
	char m_rest[0xd4 - 0x50];

	SndEntry(const SndEntry &o) : m_b0(o.m_b0), m_b1(o.m_b1), m_nScript(o.m_nScript)
	{
		((CUnknown101b6320Params *)m_params)->sub_101b5b70(*(const CUnknown101b6320Params *)o.m_params);
	}
};

struct SndDict
{
	CUtlRBTree232 m_tree;
	CUnknown1024b2d0 m_strings;

	unsigned short Symbol(const char *pszName)
	{
		CUnknown1024b2d0Id id;
		return m_strings.sub_1024b5e0(&id, pszName)->m_id;
	}
};

void sub_101b6ea0(void *pDst, const void *pSrc);

typedef CUtlRBTree<CSoundEmitterRecord, int> SndTree;

// TARGET: CSoundEmitterSystemBase::sub_101b5870
void CSoundEmitterSystemBase::sub_101b5870(const char *pszOld, const char *pszNew)
{
	if (!_strcmpi(pszOld, pszNew))
		return;

	int idx = sub_101b2f60(pszOld);
	if (!((block_101b5870a::SesV *)this)->sub_101b31a0(idx))
	{
		{ { if ((int)this == -1) DevMsg("Can't rename %s, no such sound\n", pszOld); else DevMsg("Can't rename %s, no such sound\n", pszOld); } }
		return;
	}
	if (((block_101b5870a::SesV *)this)->sub_101b31a0(sub_101b2f60(pszNew)))
	{
		DevMsg("Can't rename %s to %s, new name already in list\n", pszOld, pszNew);
		return;
	}

	SndEntry entry(*(SndEntry *)((char *)m_i54 + 0x14 + idx * 0xe8));
	SndDict *pDict = (SndDict *)&m_pfn50;
	CSoundEmitterRecord node;
	node.m_w0 = pDict->Symbol(pszOld);
	int i = ((CUtlRBTreeFind232 *)pDict)->sub_101b68f0(&node);
	((CUnknown101b4680 *)&node.m_tail)->~CUnknown101b4680();
	if (i != -1)
	{
		void (SndTree::*pfnRemoveNode)(int) = &SndTree::RemoveNode;
		(((SndTree *)pDict)->*pfnRemoveNode)(i);
		((CUnknown101b7370 *)pDict)->sub_101b7370(i);
		pDict->m_tree.m_NumElements--;
	}

	node.m_w0 = 0xffff;
	{ { if (*(short *)&pszNew == -1) ((CUnknown101b45b0 *)&node.m_b4)->sub_101b45b0(); else ((CUnknown101b45b0 *)&node.m_b4)->sub_101b45b0(); } }
	SndDict *pDict2 = (SndDict *)&m_pfn50;
	node.m_w0 = pDict2->Symbol(pszNew);
	int n;
	{
		struct { bool leftchild; int parent; } ins;
		pDict2->m_tree.sub_101b6d60(&node, &ins.parent, &ins.leftchild);
		n = pDict2->m_tree.sub_101b6bd0(ins.parent, ins.leftchild);
	}
	int ofs = n * 0xe8;
	sub_101b6ea0(ofs + (char *)pDict2->m_tree.m_pElements + 0x10, &node);
	((CUnknown101b6320 *)(ofs + (char *)pDict2->m_tree.m_pElements + 0x14))->sub_101b6320(*(CUnknown101b6320 *)&entry);
	((SndVec8 *)((char *)&node + 0x40))->sub_101b6120();
	((SndVec8 *)((char *)&node + 0x2c))->sub_101b6120();

	((char *)m_i9c)[entry.m_nScript * 0x82] = 1;
}
// END FUNCTION

// FUNCTION: 0x101b5b70 size=0x1d1
#include "Vector.h"
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CUnknown101b6320.h"
#include "UtlVec8.h"
#include "CMem8_t.h"
#include <string.h>

void sub_101b6b60(void *pDest, const void *pSrc);

struct CUnknown101b5b70VecB : UtlVec8
{
	CUnknown101b9140Elem &Element(int i) { return ((CUnknown101b9140Elem *)m_pMemory)[i]; }
	void Grow1(int num)
	{
		if (m_Size + num > m_allocationCount)
			((CMem8_t *)this)->sub_101b72e0(m_Size + num - m_allocationCount);
		m_Size += num;
		m_pElements = (UtlVec8Elem *)m_pMemory;
	}
	void ShiftRight(int elem, int num)
	{
		int numToMove = m_Size - elem - num;
		if (numToMove > 0 && num > 0)
			memmove(&Element(elem + num), &Element(elem), numToMove * sizeof(CUnknown101b9140Elem));
	}
	int InsertBefore(int elem, const CUnknown101b9140Elem &src)
	{
		Grow1(1);
		ShiftRight(elem, 1);
		CUnknown101b9140Elem *p = &Element(elem);
		if (p) {
			p->m_w = src.m_w;
			p->m_d = src.m_d;
		}
		return elem;
	}
	int AddToTail(const CUnknown101b9140Elem &src) { return InsertBefore(m_Size, src); }
	void Init()
	{
		m_pMemory = 0;
		m_allocationCount = 0;
		m_growSize = 0;
		m_Size = 0;
		m_pElements = 0;
	}
};

CUnknown101b6320Params *CUnknown101b6320Params::sub_101b5b70(const CUnknown101b6320Params &other)
{
	UtlVec8 *pA = (UtlVec8 *)&m_vecA;
	const UtlVec8 *pOtherA = (const UtlVec8 *)&other.m_vecA;
	int i = 0;
	CUnknown101b5b70VecB *pB = (CUnknown101b5b70VecB *)&m_vecB;
	CUnknown101b5b70VecB *pOtherB = (CUnknown101b5b70VecB *)&other.m_vecB;
	int n;
	((CUnknown101b5b70VecB *)pA)->Init();
	pB->Init();
	int t0 = other.m_nField00; m_nField00 = t0;
	m_nField04 = other.m_nField04;
	m_nField08 = other.m_nField08;
	m_nField0c = other.m_nField0c;
	m_nField10 = other.m_nField10;
	m_nField14 = other.m_nField14;
	m_nField18 = other.m_nField18;
	m_bField1c = other.m_bField1c;
	n = pOtherA->m_Size;
	for (; i < n; i++) {
		char *pSrcBase = pOtherA->m_pMemory;
		int idx; idx = pA->m_Size;
		if (idx + 1 > pA->m_allocationCount)
			((CMem8_t *)pA)->sub_101b72e0(idx - pA->m_allocationCount + 1);
		pA->m_Size++;
		pA->m_pElements = (UtlVec8Elem *)pA->m_pMemory;
		pA->sub_101b6b10(idx, 1);
		sub_101b6b60(pA->m_pMemory + idx * 8, (8 * i) + pSrcBase);
	}
	n = pOtherB->m_Size;
	i = 0;
	for (; i < n; i++)
		pB->AddToTail(pOtherB->Element(i));
	m_bField1d = other.m_bField1d;
	m_bField48 = other.m_bField48;
	memcpy(m_szChannel, other.m_szChannel, sizeof(m_szChannel));
	memcpy(m_szVolume, other.m_szVolume, sizeof(m_szVolume));
	memcpy(m_szPitch, other.m_szPitch, sizeof(m_szPitch));
	memcpy(m_szSoundLevel, other.m_szSoundLevel, sizeof(m_szSoundLevel));
	return this;
}
// END FUNCTION

// FUNCTION: 0x101b5dd0 size=0x261
#include "CSoundEmitterSystemBase.h"
#include "Tier1.h"
typedef int pcd_dial0;
typedef int pcd_dial1;
typedef int pcd_dial2;
typedef int pcd_dial3;
typedef int pcd_dial4;
typedef int pcd_dial5;
typedef int pcd_dial6;
typedef int pcd_dial7;
typedef int pcd_dial8;
typedef int pcd_dial9;
typedef int pcd_dial10;
typedef int pcd_dial11;
typedef int pcd_dial12;
typedef int pcd_dial13;
typedef int pcd_dial14;
typedef int pcd_dial15;
typedef int pcd_dial16;
typedef int pcd_dial17;
typedef int pcd_dial18;
typedef int pcd_dial19;
typedef int pcd_dial20;
typedef int pcd_dial21;
typedef int pcd_dial22;
typedef int pcd_dial23;
typedef int pcd_dial24;

namespace block_101b5dd0 {
struct CSoundEmitterSystemBaseUnit : CSoundEmitterSystemBase
{
	char sub_101b31a0(int index);
};

char CSoundEmitterSystemBaseUnit::sub_101b31a0(int index)
{
	if (index >= 0 && index < m_i64)
		return 1;
	return 0;
}
}
using namespace block_101b5dd0;

void CSoundEmitterSystemBase::sub_101b5dd0(const char *pszName, const CSoundParamsFull &params)
{
	int idx = sub_101b2f60(pszName);
	if (!((CSoundEmitterSystemBaseUnit *)this)->sub_101b31a0(idx)) {
		g_109f3630("Can't UpdateSoundParameters %s, no such sound\n", pszName);
		return;
	}
	CSoundRecordFull *rec = (CSoundRecordFull *)((char *)m_i54 + 0x14 + idx * 0xe8);
	if (rec->m_params == params)
		return;
	CSoundParamsFull *e = &rec->m_params;
	e->m_channel = params.m_channel;
	e->m_f04 = params.m_f04;
	e->m_f08 = params.m_f08;
	e->m_f0c = params.m_f0c;
	e->m_f10 = params.m_f10;
	e->m_f14 = params.m_f14;
	e->m_f18 = params.m_f18;
	e->m_b1c = params.m_b1c;
	e->m_b1d = params.m_b1d;
	e->m_waves.sub_101b6550((const SElem8 *)params.m_waves.m_pMemory, params.m_waves.m_Size);
	e->m_sub.sub_101b61a0(params.m_sub);
	e->m_b48 = params.m_b48;
	unsigned int i;
	for (i = 0; i < 0x20; i++) e->m_s49[i] = params.m_s49[i];
	for (i = 0; i < 0x20; i++) e->m_s69[i] = params.m_s69[i];
	for (i = 0; i < 0x20; i++) e->m_s89[i] = params.m_s89[i];
	for (i = 0; i < 0x20; i++) e->m_sa9[i] = params.m_sa9[i];
	*((char *)m_i9c + rec->m_nScript * 0x82) = 1;
}
// END FUNCTION
