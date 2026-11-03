// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101bc590 size=0x61
#include "CSoundControllerImp.h"
#include "utlvector.h"
#include "CUnknown101bc140.h"
#include "CUnknown101bbd10.h"

void CSoundControllerImp::sub_101bc590(void *pSound)
{
	((CUtlVector<CUnknown101bc140 *> *)&m_Sounds)->FindAndRemove((CUnknown101bc140 *)pSound);
	((CUnknown101bbd10 *)pSound)->sub_101bbd10();
}
// END FUNCTION

// FUNCTION: 0x101bc7f0 size=0x5f
#include "CLogicAuto.h"
#include "CSoundControllerImp.h"
#include "CUnknown101bc750.h"
#define V4(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3();
struct CSoundTimeView { V4(a) V4(b) virtual void h8(); virtual float vfunc9(); };
extern CSoundTimeView *g_10566258;
struct Pool { unsigned int *sub_1013dc60(unsigned int nSize); };
extern Pool g_1072c4b0;
struct CSoundCommand
{
    void *m_pSound; float m_flTime; float m_flDuration; int m_nCommand; float m_flAmplitude; int m_pad;
    CSoundCommand(void *pSound, float flTime, int command, float duration, float amplitude)
        : m_pSound(pSound), m_flTime(flTime), m_flDuration(duration), m_nCommand(command), m_flAmplitude(amplitude) {}
    void *operator new(unsigned int n) { return g_1072c4b0.sub_1013dc60(n); }
};
void CSoundControllerImp::vfunc3(void *pSound, float executeDeltaTime, int command, float duration, float amplitude)
{
    CSoundCommand *pCmd = new CSoundCommand(pSound, g_10566258->vfunc9() + executeDeltaTime, command, duration, amplitude);
    ((CUnknown101bc750 *)this)->sub_101bc750((int)pCmd);
}
// END FUNCTION

// FUNCTION: 0x101bc870 size=0x48
#include "utlrbtree.h"
#include "CSoundControllerImp.h"
#include "CUnknown101bbd10.h"
#include "utlvector.h"

// TARGET: CSoundControllerImp::vfunc0
void CSoundControllerImp::vfunc0()
{
	CUtlVector<CUnknown101bbd10 *> *pSounds = (CUtlVector<CUnknown101bbd10 *> *)&m_Sounds;
	for (int i = pSounds->Count() - 1; i >= 0; i--)
		(*pSounds)[i]->sub_101bbd10();
	pSounds->Purge();
	*(int *)((char *)this + 0x2c) = 0;
}
// END FUNCTION

// FUNCTION: 0x101bd180 size=0x28
#include "CSoundControllerImp.h"
#include "CUnknown101bbd10.h"

// TARGET: CSoundControllerImp::vfunc5
void CSoundControllerImp::vfunc5(void *pSound)
{
    if (pSound) {
        ((CUnknown101bbd10 *)pSound)->sub_101bbd10();
        vfunc4(pSound);
        sub_101bc590(pSound);
    }
}
// END FUNCTION

// FUNCTION: 0x101bd510 size=0x75
#include "utlrbtree.h"
#include "CPASAttenuationFilter.h"
#include "UtlMem.h"
#include "CSoundControllerImp.h"

struct CSoundPatchObj
{
	char m_pad0000[0x44];
	void *m_pFilterVtbl;	// 0x44: IRecipientFilter
	char m_pad0048[4];
	CRecipientVec m_Recipients;	// 0x4c
};

struct CSoundPatchPool { void sub_1013dce0(void *pSound); };
extern CSoundPatchPool g_1072c4e0;
extern void *vt_10447108[];

void CSoundControllerImp::vfunc9(void *pSound)
{
	if (pSound) {
		vfunc5(pSound);
		CSoundPatchObj *p = (CSoundPatchObj *)pSound;
		CRecipientVec *v = &p->m_Recipients;
		for (int i = v->m_Size; --i >= 0; )
			v->sub_10013e12();
		v->m_Size = 0;
		((UtlMem *)&v->m_Memory)->sub_1002cbd0();
		v->m_pElements = v->m_Memory.m_pMemory;
		v->m_Memory.Purge(g_109f3624);
		p->m_pFilterVtbl = vt_10447108;
		g_1072c4e0.sub_1013dce0(pSound);
	}
}
// END FUNCTION

// FUNCTION: 0x101bd5b0 size=0x16
#include "CSoundControllerImp.h"
namespace lifted {
struct C10014713 { int sub_10014713(int, int); };
}
int CSoundControllerImp::vfunc10(int a0, int a1, int a2)
{
    return ((lifted::C10014713 *)a0)->sub_10014713(a1, a2);
}
// END FUNCTION

// FUNCTION: 0x101bd5e0 size=0x16
#include "CSoundControllerImp.h"
namespace lifted {
struct C100139e4 { int sub_100139e4(int, int); };
}
int CSoundControllerImp::vfunc11(int a0, int a1, int a2)
{
    return ((lifted::C100139e4 *)a0)->sub_100139e4(a1, a2);
}
// END FUNCTION

// FUNCTION: 0x101bd610 size=0xc
#include "CSoundControllerImp.h"
namespace lifted {
struct C1000f231 { int sub_1000f231(); };
}
int CSoundControllerImp::vfunc13(int a0)
{
    return ((lifted::C1000f231 *)a0)->sub_1000f231();
}
// END FUNCTION

// FUNCTION: 0x101bd630 size=0xc
#include "CSoundControllerImp.h"
namespace lifted {
struct C10008ddc { int sub_10008ddc(); };
}
int CSoundControllerImp::vfunc14(int a0)
{
    return ((lifted::C10008ddc *)a0)->sub_10008ddc();
}
// END FUNCTION

// FUNCTION: 0x101bd650 size=0x11
struct S { void sub_10005cdb(int); };
void __stdcall sub_101bd650(S *p, int a)
{
    p->sub_10005cdb(a);
}
// END FUNCTION

// FUNCTION: 0x101bd680 size=0x101
#include "CSoundControllerImp.h"

struct IUniformRandomStream { virtual void v0(); virtual float RandomFloat(float flMin, float flMax); };
extern IUniformRandomStream *g_1070b244;
extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);

float CSoundControllerImp::vfunc16(void *pSound, int command, envelopePoint_t *points, int numPoints)
{
	float amplitude = 0.0f;
	float duration = 0.0f;
	float totalDuration = 0.0f;
	vfunc4(pSound);
	for (int i = 0; i < numPoints; i++)
	{
		if (points[i].amplitudeMin == -1.0f && points[i].amplitudeMax == -1.0f)
		{
			if (i == 0)
				Msg("Invalid starting amplitude value in envelope!  (Cannot be -1)\n");
		}
		else
			amplitude = g_1070b244->RandomFloat(points[i].amplitudeMin, points[i].amplitudeMax);
		if (points[i].durationMin == -1.0f && points[i].durationMax == -1.0f)
		{
			if (i == 0)
				Msg("Invalid starting duration value in envelope! (Cannot be -1)\n");
		}
		else
			duration = g_1070b244->RandomFloat(points[i].durationMin, points[i].durationMax);
		vfunc3(pSound, totalDuration, command, duration, amplitude);
		totalDuration += duration;
	}
	return totalDuration;
}
// END FUNCTION

// FUNCTION: 0x101bd7e0 size=0x1f
#include "vampire.h"
#include "CSoundControllerImp.h"
#include "CSoundEnvelopeController.h"
// TARGET: CSoundControllerImp::vfunc15
void CSoundControllerImp::vfunc15(void *pSound, int command, int *pPoints)
{
    ((CSoundEnvelopeController *)this)->vfunc16(pSound, command, (void *)pPoints[0], pPoints[1]);
}
// END FUNCTION

// FUNCTION: 0x101bd810 size=0x24
#include "CSoundControllerImp.h"

struct CUnknown101bc260
{
    void sub_101bc260(int a);
};

// TARGET: CSoundControllerImp::vfunc17
void CSoundControllerImp::vfunc17(int a)
{
    int i = *(int *)((char *)this + 0x18);
    while (--i >= 0)
        ((CUnknown101bc260 *)((void **)*(void ***)((char *)this + 0xc))[i])->sub_101bc260(a);
}
// END FUNCTION

// FUNCTION: 0x101bd850 size=0x26
#include "CUnknown101bc140.h"

struct CSoundControllerImpView {
    char m_pad0000[0xc];
    CUnknown101bc140 **m_pp0c;	// 0x0c
    char m_pad0010[0x18 - 0x10];
    int m_n18;	// 0x18
    void sub_101bd850();
};

// TARGET: CSoundControllerImpView::sub_101bd850
void CSoundControllerImpView::sub_101bd850()
{
    int i = m_n18;
    while (--i >= 0) {
        CUnknown101bc140 *p = m_pp0c[i];
        if (p != 0 && *(int *)((char *)p + 0x3c) != 0) {
            p->sub_101bc140();
        }
    }
}
// END FUNCTION
