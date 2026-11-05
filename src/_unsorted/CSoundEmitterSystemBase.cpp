// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
