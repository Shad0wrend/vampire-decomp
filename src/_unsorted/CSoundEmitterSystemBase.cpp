// Matched functions only. Written by pcdecomp; change it through pcdecomp.
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
