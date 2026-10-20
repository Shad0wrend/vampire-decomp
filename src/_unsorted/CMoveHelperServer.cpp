// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1013edb0 size=0x1e
#include "CMoveHelperServer.h"

// TARGET: CMoveHelperServer::vfunc14
CMoveHelperServer *CMoveHelperServer::vfunc14(unsigned int flags)
{
	sub_1000185c();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1013f070 size=0x8
#include "CMoveHelperServer.h"

void CMoveHelperServer::vfunc1()
{
	m_nTouchCount = 0;
}
// END FUNCTION

// FUNCTION: 0x1013fae0 size=0x8d
#include "CMoveHelperServer.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SoundRecord
{
	int m_Id;
	const char *m_pszName;
};
struct SoundSystem { void sub_100119fa(int a, int b, int c, float d, float e); };
extern int g_1073dc3c;
extern SoundRecord **g_1073dc40;
extern SoundSystem g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(const char *const *p)
{
	return *p ? *p : g_106b8540;
}

static inline int FindSound(const char *name)
{
	for (int i = 0; i < g_1073dc3c; i++) {
		if (!_strcmpi(NameOf(&g_1073dc40[i]->m_pszName), name))
			return g_1073dc40[i]->m_Id;
	}
	return -1;
}

void CMoveHelperServer::vfunc12()
{
	static int s_nSound = FindSound("Exert_Heavy");
	g_1073dc28.sub_100119fa(*(int *)((char *)this + 4), s_nSound, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x1013fba0 size=0x8d
#include "CMoveHelperServer.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SoundName_t
{
	const char *m_psz;

	const char *Get() const { return m_psz ? m_psz : ""; }
};

struct SoundEntry_t
{
	int m_nIndex;
	SoundName_t m_Name;
};

struct SoundMgr_t
{
	void sub_101f5950(int pEnt, int nSound, int a, float flVolume, float flPitch);	// stub 0x100119fa
};

extern int g_1073dc3c;	// number of sounds
extern SoundEntry_t **g_1073dc40;	// the sound table
extern SoundMgr_t g_1073dc28;

static inline int FindSound(const char *pszName)
{
	for (int i = 0; i < g_1073dc3c; i++) {
		if (!_strcmpi(g_1073dc40[i]->m_Name.Get(), pszName))
			return g_1073dc40[i]->m_nIndex;
	}
	return -1;
}

void CMoveHelperServer::vfunc11()
{
	static int s_nSound = FindSound("Exert_Light");
	g_1073dc28.sub_101f5950(*(int *)((char *)this + 4), s_nSound, 2, 1.0f, 1.25f);
}
// END FUNCTION
