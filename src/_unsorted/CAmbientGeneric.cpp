// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ac2c0 size=0x1e
#include "CAmbientGeneric.h"

void sub_100aa7b0(void *p);

// TARGET: CAmbientGeneric::vfunc5
CAmbientGeneric *CAmbientGeneric::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101ac930 size=0x66
#include "CAmbientGeneric.h"

extern "C" unsigned int __cdecl strlen(const char *);
#pragma intrinsic(strlen)
extern const char g_106b8540[];

struct SoundSystemLike {
    virtual void Precache(const char *pszName, int a);
};
extern SoundSystemLike *g_1070b248;

// TARGET: CAmbientGeneric::vfunc104
void CAmbientGeneric::vfunc104()
{
    const char *p = m_pszSoundFile;
    const char *pszName = p ? p : g_106b8540;
    if (m_pszSoundFile) {
        if (strlen(pszName) > 1 && *pszName != '!')
            g_1070b248->Precache(pszName, 0);
    }
    sub_101ad0f0();
    if (!(m_spawnflags & 0x10) && m_b04bd)
        m_b04bc = 1;
}
// END FUNCTION
