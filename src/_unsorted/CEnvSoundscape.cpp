// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

// FUNCTION: 0x101ae900 size=0x26
#include "CEnvSoundscape.h"
#include "CUnknown1070b244.h"

struct CUnk1070b228 { char pad0000[0xc]; float m_fl0c; };
extern CUnknown1070b244 *g_1070b244;
extern CUnk1070b228 *g_1070b228;

// TARGET: CEnvSoundscape::vfunc103
void CEnvSoundscape::vfunc103()
{
	*(float *)((char *)this + 0x17c) = g_1070b244->vfunc1(0, 0.5f) + g_1070b228->m_fl0c;
}
// END FUNCTION
