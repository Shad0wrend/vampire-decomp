// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ae230 size=0x95
#include "CEnvSoundscape.h"
#include "Vector.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CSoundscapeSlotView {
	S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8) S10(a9)
	S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6) S10(b7) S10(b8)
	virtual void c0(); virtual void c1();
	virtual Vector vfunc192();
	virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9();
	S10(e0)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6();
	virtual void *vfunc217();
};

struct CSoundscapeFields {
	char m_pad[0x224];
	unsigned char m_nFlags224;
	char m_pad225[0x2e0 - 0x225];
	int m_pEdict2e0;
	char m_pad2e4[0x454 - 0x2e4];
	float m_flValue454;
	int edict() const { return m_pEdict2e0; }
};

struct CSoundscapePlayerView {
	char m_pad[0x2014];
	int m_nIndex2014;
};

inline int ENTINDEX_SS(int pEdict) { return engine->vfunc35(pEdict); }

CSoundscapePlayerView *sub_101cd9e0(int index);
void sub_10142e90(void *p1, const Vector &p2, int color, int a, int b, int c, int d);

void CEnvSoundscape::vfunc123()
{
	CSoundscapeFields *f = (CSoundscapeFields *)this;
	if (f->m_nFlags224 & 0x2c) {
		CSoundscapePlayerView *pPlayer = sub_101cd9e0(1);
		if (pPlayer && pPlayer->m_nIndex2014 == ENTINDEX_SS(f->edict())) {
			sub_10142e90(((CSoundscapeSlotView *)this)->vfunc217(), ((CSoundscapeSlotView *)pPlayer)->vfunc192(), f->m_flValue454 != 0.0f ? 0xff : 0, 0, 0xff, 0, 0);
		}
	}
	sub_100a0130();
}
// END FUNCTION

// FUNCTION: 0x101ae300 size=0x1e
#include "CEnvSoundscape.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvSoundscape::vfunc5
CEnvSoundscape *CEnvSoundscape::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101ae330 size=0x6
#include "datamap.h"
#include "CEnvSoundscape.h"
namespace lifted {
extern char g_10596db4;
}
datamap_t *CEnvSoundscape::vfunc82()
{
    return (datamap_t *)&lifted::g_10596db4;
}
// END FUNCTION

// FUNCTION: 0x101ae3c0 size=0x60
#include "CEnvSoundscape.h"
#include "CSoundscapeSystem.h"
#include <string.h>

extern CSoundscapeSystem g_1072bc00;
__declspec(dllimport) void DevMsg(const char *pszFormat, ...);

char CEnvSoundscape::vfunc110(const char *pszKey, const char *pszValue)
{
	if (!_strcmpi(pszKey, "soundscape")) {
		m_nSoundscapeIndex458 = g_1072bc00.sub_10249aa0(pszValue);
		if (m_nSoundscapeIndex458 < 0 || m_nSoundscapeIndex458 > 100)
			DevMsg("Can't find soundscape: %s\n", pszValue);
		return 1;
	}
	return sub_1009e430(pszKey, pszValue);
}
// END FUNCTION

// FUNCTION: 0x101ae900 size=0x26
#include "CEnvSoundscape.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

// TARGET: CEnvSoundscape::vfunc103
void CEnvSoundscape::vfunc103()
{
	*(float *)((char *)this + 0x17c) = g_1070b244->vfunc1(0, 0.5f) + gpGlobals->curtime;
}
// END FUNCTION
