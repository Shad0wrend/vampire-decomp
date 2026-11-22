// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 7 blocks
#include "vampire.h"

// FUNCTION: 0x10232450 size=0x1e
#include "CVoiceGameMgr.h"

// TARGET: CVoiceGameMgr::vfunc0
CVoiceGameMgr *CVoiceGameMgr::vfunc0(unsigned int flags)
{
	sub_10009976();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10232480 size=0x7
namespace lifted {
extern char g_1048f060;
}
struct CUnknown10232480 { void sub_10232480(); };
void CUnknown10232480::sub_10232480()
{
    *(int *)this = (int)&lifted::g_1048f060;
}
// END FUNCTION

// FUNCTION: 0x102324a0 size=0x51
#include "CVoiceGameMgr.h"
char CVoiceGameMgr::sub_102324a0(void *pHelper, int maxClients)
{
    m_pHelper = pHelper;
    m_nMaxPlayers = maxClients > 32 ? 32 : maxClients;
    m_msgVoiceMask = engine->vfunc82("VoiceMask", 9);
    m_msgReqState = engine->vfunc82("ReqState", 0);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10232520 size=0xa
void __fastcall sub_10232520(int *self, int, int value)
{
	self[4] = value;
}
// END FUNCTION

// FUNCTION: 0x10232540 size=0x1f
#include "vampire.h"
struct CUnk10232540
{
    char m_pad0000[0x18];
    double m_flValue;  // 0x18
    void sub_102328c0();
    void sub_10232540(double flAdd);
};
// TARGET: CUnk10232540::sub_10232540
void CUnk10232540::sub_10232540(double flAdd)
{
    m_flValue = m_flValue + flAdd;
    if (!(m_flValue < 0.3)) {
        sub_102328c0();
    }
}
// END FUNCTION

// FUNCTION: 0x10232570 size=0x47
extern unsigned int g_10751648[];
extern unsigned int g_107516c8[];
extern unsigned int g_107516d0[];

void __stdcall sub_10232570(int pEdict)
{
    int idx = engine->vfunc35(pEdict) - 1;
    g_107516c8[idx >> 5] |= 1 << (idx & 0x1f);
    g_10751648[idx] = 0;
    g_107516d0[idx] = 0;
}
// END FUNCTION

// FUNCTION: 0x102325e0 size=0x1d3
#include "CVoiceGameMgr.h"
#include "CBaseEntity.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl atoi(const char *);
extern "C" int __cdecl sscanf(const char *, const char *, ...);
extern unsigned long g_10751530[];
extern unsigned long g_10751538[];
extern unsigned long g_107516c8[];
void sub_10232840(const char *pszFormat, ...);

bool CVoiceGameMgr::sub_102325e0(CBaseEntity *pPlayer, const char *cmd)
{
	int nEdict = pPlayer->m_pEdict2e0;
	int iPlayer = engine->vfunc35(nEdict) - 1;
	if (iPlayer < 0 || iPlayer >= m_nMaxPlayers) {
		sub_10232840("CVoiceGameMgr::ClientCommand: cmd %s from invalid client (%d)\n", cmd, iPlayer);
		return true;
	}
	bool bBan = _strcmpi(cmd, "vban") == 0;
	if (bBan && engine->vfunc85() >= 2) {
		for (int i = 1; i < engine->vfunc85(); i++) {
			unsigned long mask = 0;
			sscanf(engine->vfunc84(i), "%x", &mask);
			if (i <= 1) {
				sub_10232840("CVoiceGameMgr::ClientCommand: vban (0x%x) from %d\n", mask, iPlayer);
				g_10751538[iPlayer + i - 1] = mask;
			} else {
				sub_10232840("CVoiceGameMgr::ClientCommand: invalid index (%d)\n", i);
			}
		}
		return true;
	} else if (_strcmpi(cmd, "VModEnable") == 0 && engine->vfunc85() >= 2) {
		sub_10232840("CVoiceGameMgr::ClientCommand: VModEnable (%d)\n", !!atoi(engine->vfunc84(1)));
		if (atoi(engine->vfunc84(1)))
			g_10751530[iPlayer >> 5] |= 1 << (iPlayer & 0x1f);
		else
			g_10751530[iPlayer >> 5] &= ~(1 << (iPlayer & 0x1f));
		g_107516c8[iPlayer >> 5] &= ~(1 << (iPlayer & 0x1f));
		return true;
	}
	return false;
}
// END FUNCTION
