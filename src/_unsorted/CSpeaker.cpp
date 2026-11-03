// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101af370 size=0x8
unsigned char sub_10001109();

// TARGET: sub_101af370
unsigned char sub_101af370()
{
    unsigned char bVar1;
    bVar1 = sub_10001109();
    bVar1 &= 0xfd;
    return bVar1;
}
// END FUNCTION

// FUNCTION: 0x101af390 size=0x6
#include "datamap.h"
#include "CSpeaker.h"
namespace lifted {
extern char g_10596ed8;
}
datamap_t *CSpeaker::vfunc82()
{
    return (datamap_t *)&lifted::g_10596ed8;
}
// END FUNCTION

// FUNCTION: 0x101af420 size=0x177
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CSpeaker.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include <string.h>

__declspec(dllimport) void Warning(const char *pszFormat, ...);


#define EV(n) virtual void e##n();
#define EV10(p) EV(p##0) EV(p##1) EV(p##2) EV(p##3) EV(p##4) EV(p##5) EV(p##6) EV(p##7) EV(p##8) EV(p##9)
struct CSpeakerVirtView
{
	EV10(0) EV10(1) EV10(2) EV10(3) EV10(4) EV10(5) EV10(6) EV10(7) EV10(8)
	EV(90) EV(91) EV(92)
	virtual void e93(int moveType, int moveCollide);
	EV(94) EV(95) EV(96) EV(97) EV(98) EV(99)
	EV(100) EV(101) EV(102) EV(103)
	virtual void e104();
	EV(105) EV(106) EV(107) EV(108) EV(109)
	EV10(11) EV10(12) EV10(13) EV10(14) EV10(15) EV10(16) EV10(17) EV10(18) EV10(19)
	EV10(20) EV10(21)
	virtual float *e220();
};

struct SSpeakerView
{
	char m_pad0000[0x17c];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x1f0 - 0x180];
	void *m_pfnUse;	// 0x1f0
	char m_pad01f4[0x204 - 0x1f4];
	unsigned int m_spawnflags;	// 0x204
	char m_pad0208[0x26c - 0x208];
	const char *m_name26c;
	char m_pad0270[0x450 - 0x270];
	const char *m_pszSoundFile;	// 0x450
	int m_n454;
	int m_n458;
	int m_n45c;
};

int sub_101ac570(int a, bool b);
void sub_101af880();
void sub_10015b68();
void sub_1000d55d();

struct CSpeakerUnit : CSpeaker
{
	void sub_101af420();	// "CSpeaker::Spawn"
	int sub_100ac4e0(int func, int thinkTime, const char *pszContext);	// CBaseEntity::ThinkSet (stub 0x10007fe5)
};

void CSpeakerUnit::sub_101af420()
{
	SSpeakerView *pView = (SSpeakerView *)this;
	CSpeakerVirtView *pVirt = (CSpeakerVirtView *)this;
	const char *pszSoundFile = pView->m_pszSoundFile ? pView->m_pszSoundFile : g_106b8540;
	pView->m_n458 = sub_101ac570(pView->m_n454, (pView->m_spawnflags >> 1) & 1);
	if (pView->m_n45c == 0 && (!pView->m_pszSoundFile || strlen(pszSoundFile) < 1)) {
		Warning("SPEAKER with no Level/Sentence! at: %f, %f, %f\n", pVirt->e220()[0], pVirt->e220()[1], pVirt->e220()[2]);
		pView->m_flNextThink = gpGlobals->curtime + 0.1;
		sub_100ac4e0((int)sub_10015b68, 0, 0);
		return;
	}
	{
		ScopeTrace trace("CBaseEntity::SetSolid", pView->m_name26c ? pView->m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	pVirt->e93(0, 0);
	sub_100ac4e0((int)sub_1000d55d, 0, 0);
	pView->m_flNextThink = 0;
	pView->m_pfnUse = (void *)sub_101af880;
	pVirt->e104();
}
// END FUNCTION

// FUNCTION: 0x101af600 size=0x32
#include "CSpeaker.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;
extern float *g_1070b228;

// TARGET: CSpeaker::vfunc104
void CSpeaker::vfunc104()
{
    if (!(m_b0204 & 1)) {
        m_flTime017c = g_1070b244->vfunc1(5.0f, 15.0f) + g_1070b228[3];
    }
}
// END FUNCTION

// FUNCTION: 0x101af940 size=0x1e
#include "CSpeaker.h"

void sub_100aa7b0(void *p);

// TARGET: CSpeaker::vfunc5
CSpeaker *CSpeaker::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
