// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10097ce0 size=0x6
#include "datamap.h"
#include "CBaseAnimatingOverlay.h"
namespace lifted {
extern char g_105509f8;
}
datamap_t *CBaseAnimatingOverlay::vfunc82()
{
    return (datamap_t *)&lifted::g_105509f8;
}
// END FUNCTION

// FUNCTION: 0x10097d70 size=0x6
#include "CBaseAnimatingOverlay.h"
namespace lifted {
extern char g_10551644;
}
int CBaseAnimatingOverlay::vfunc79()
{
    return (int)&lifted::g_10551644;
}
// END FUNCTION

// FUNCTION: 0x10098020 size=0x6
#include "CBaseAnimatingOverlay.h"
namespace lifted {
extern char g_106ce634;
}
int CBaseAnimatingOverlay::vfunc80()
{
    return (int)&lifted::g_106ce634;
}
// END FUNCTION

// FUNCTION: 0x10098040 size=0x3
#include "CBaseAnimatingOverlay.h"
int CBaseAnimatingOverlay::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10098a40 size=0x3
#include "CBaseAnimatingOverlay.h"
int CBaseAnimatingOverlay::vfunc267()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10098a60 size=0x1e
#include "CBaseAnimatingOverlay.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseAnimatingOverlay::vfunc5
CBaseAnimatingOverlay *CBaseAnimatingOverlay::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10098a90 size=0xe0
#include "CBaseEntity.h"
#include "CBaseAnimatingOverlay.h"

void CBaseAnimatingOverlay::vfunc31(int a)
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	int *p = (int *)((char *)this + 0x738);
	for (int i = 24; i != 0; i--) {
		pEnt->sub_1009b8a0(a, (int)"m_bNoFlinch", *((char *)this + 0x730));
		pEnt->sub_1009b640(a, (int)"m_AnimOverlay", (int)"-v-");
		pEnt->sub_1009bb40(a, (int)"  m_fFlags", p[-1]);
		pEnt->sub_1009b8a0(a, (int)"  m_fSequenceFinished", p[0] != 0);
		pEnt->sub_1009b980(a, "  m_nSequence", p[1]);
		pEnt->sub_1009ba60(a, "  m_flCycle", p[2]);
		pEnt->sub_1009ba60(a, "  m_flPlaybackRate", p[3]);
		pEnt->sub_1009ba60(a, "  m_flWeight", p[4]);
		pEnt->sub_1009b980(a, "  m_nActivity", p[8]);
		pEnt->sub_1009b8a0(a, (int)"  m_bAutoKillWhenFinished", (char)p[9]);
		p += 12;
	}
	sub_1008b530(a);
}
// END FUNCTION

// FUNCTION: 0x10098bb0 size=0x70
#include "CBaseAnimatingOverlay.h"

#define OV(n) virtual void v##n();
#define OV10(p) OV(p##0) OV(p##1) OV(p##2) OV(p##3) OV(p##4) OV(p##5) OV(p##6) OV(p##7) OV(p##8) OV(p##9)
struct COverlayVSlots {
	OV(0) OV(1) OV(2) OV(3) OV(4) OV(5) OV(6) OV(7) OV(8) OV(9)
	OV10(1) OV10(2) OV10(3) OV10(4) OV10(5) OV10(6) OV10(7) OV10(8) OV10(9)
	OV10(10)
	OV(110) OV(111)
	virtual void v112(int layer, int activity);
};

extern float g_104454c4;

float CBaseAnimatingOverlay::vfunc250(float a)
{
	float result = sub_1008f120(a);
	int i = 0;
	CAnimationLayer *layer = m_Layers;
	do {
		if (layer->m_f10 != g_104454c4) {
			((CAnimationLayerAdvance *)((char *)layer - 4))->sub_10098830(result, this);
			if (layer->m_n00 && layer->m_b24) {
				int n = layer->m_n20;
				layer->m_f10 = 0.0f;
				((COverlayVSlots *)this)->v112(i, n);
			}
		}
		i++;
		layer++;
	} while (i < 4);
	return result;
}
// END FUNCTION

// FUNCTION: 0x10098eb0 size=0x11d
#include "CBaseAnimating.h"
#include "CBaseAnimatingOverlay.h"
#include "Quaternion.h"

void sub_100c32e0(void *pHdr, void *pPos, void *pQ, float *pPose, int mask);
void sub_100c2ce0(void *pHdr, void *pPos, void *pQ, float *pCtl, int mask);

void CBaseAnimatingOverlay::vfunc255(void *pPos, void *pQ, int mask)
{
	Quaternion q2[350];
	Vector pos2[350];
	CBaseAnimating *pAnim = (CBaseAnimating *)this;
	void *pHdr = engine->vfunc18(((CBaseEntity *)this)->vfunc8());
	if (pHdr) {
		pAnim->sub_1008e770(pPos, pQ, *(int *)((char *)this + 0x6f0), *(int *)((char *)this + 0x6f8), (float *)((char *)this + 0x690), mask);
		for (int i = 0; i < 4; i++) {
			if (m_Layers[i].m_f10 > 0.0f) {
				pAnim->sub_1008e770(pos2, q2, m_Layers[i].m_nSequence, m_Layers[i].m_n08, (float *)((char *)this + 0x690), mask);
				pAnim->sub_1008eb70((int)pQ, (int)pPos, m_Layers[i].m_nSequence, (int)q2, (int)pos2, *(int *)&m_Layers[i].m_f10, mask);
			}
		}
		sub_100c32e0(pHdr, pPos, pQ, (float *)((char *)this + 0x690), mask);
		sub_100c2ce0(pHdr, pPos, pQ, (float *)((char *)this + 0x6fc), mask);
	}
}
// END FUNCTION

// FUNCTION: 0x10099020 size=0x98
#include "CBaseAnimatingOverlay.h"

void CBaseAnimatingOverlay::vfunc268(int index, int a, int sequence, char flag)
{
	m_Layers[index].m_n20 = a;
	m_Layers[index].m_n08 = 0;
	m_Layers[index].m_f0c = 1.0f;
	m_Layers[index].m_nSequence = sequence;
	m_Layers[index].m_f18 = 0.2f;
	m_Layers[index].m_f1c = 0.2f;
	m_Layers[index].m_f10 = 0.1f;
	m_Layers[index].m_f14 = 1.0f;
	m_Layers[index].m_b24 = flag;
	m_Layers[index].m_n00 = 0;
	m_Layers[index].m_n28 = 0;
	char *pSeq = sub_1008d990(sequence);
	if (pSeq && (pSeq[8] & 2)) {
		m_Layers[index].m_f18 = 0;
		m_Layers[index].m_f1c = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10099470 size=0x40
#include "CBaseAnimatingOverlay.h"

// TARGET: CBaseAnimatingOverlay::vfunc272
int CBaseAnimatingOverlay::vfunc272()
{
	int i = (*(int (__fastcall **)(CBaseAnimatingOverlay *))(*(int *)this + 0x42c))(this);
	if (i < 4) {
		do {
			if (m_Layers[i].m_f10 == 0.0f) {
				return i;
			}
			i++;
		} while (i < 4);
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x100994c0 size=0x54
#include "CBaseAnimatingOverlay.h"
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct SOverlaySlots {
	V10(a0) V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V10(a6) V10(a7) V10(a8) V10(a9)
	V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6) V10(b7) V10(b8) V10(b9)
	V10(c0) V10(c1) V10(c2) V10(c3) V10(c4) V10(c5)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6();
	virtual int slot267();
};
// TARGET: CBaseAnimatingOverlay::vfunc271
int CBaseAnimatingOverlay::vfunc271(int a)
{
	for (int i = ((SOverlaySlots *)this)->slot267(); i < 4; i++) {
		if (m_Layers[i].m_f10 != 0.0f && m_Layers[i].m_n20 != -1 && m_Layers[i].m_n20 == a)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10099540 size=0x16
#include "CBaseAnimatingOverlay.h"
#include "CEntityVSlots.h"

char CBaseAnimatingOverlay::vfunc270(int activity)
{
	return ((CEntityVSlots *)this)->slot271(activity) != -1;
}
// END FUNCTION

// FUNCTION: 0x10099570 size=0x46
#include "CBaseAnimatingOverlay.h"
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
#define V100(n) V10(n##0) V10(n##1) V10(n##2) V10(n##3) V10(n##4) V10(n##5) V10(n##6) V10(n##7) V10(n##8) V10(n##9)
struct COverlayView {
	V100(a) V100(b)
	V10(c0) V10(c1) V10(c2) V10(c3) V10(c4) V10(c5) V10(c6)
	virtual void d0();
	virtual int Slot271(int a);
};
// TARGET: CBaseAnimatingOverlay::vfunc273
void CBaseAnimatingOverlay::vfunc273(int a, char b, int c)
{
	int i = ((COverlayView *)this)->Slot271(a);
	if (i == -1) {
		if (b)
			sub_100991b0(a, c);
	} else {
		m_Layers[i].m_n08 = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100995e0 size=0x32
#include "CBaseAnimatingOverlay.h"
#include "CEntityVSlots.h"
void CBaseAnimatingOverlay::vfunc274(int a)
{
	int i = ((CEntityVSlots *)this)->slot271(a);
	if (i != -1) {
		m_Layers[i].m_f10 = 0;
		m_Layers[i].m_nSequence = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10099630 size=0x19
#include "CBaseAnimatingOverlay.h"

void CBaseAnimatingOverlay::vfunc275()
{
	for (int i = 0; i < 4; i++)
	{
		m_Layers[i].m_f10 = 0;
		m_Layers[i].m_nSequence = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10099660 size=0x1d
#include "CBaseAnimatingOverlay.h"

// TARGET: CBaseAnimatingOverlay::vfunc269
void CBaseAnimatingOverlay::vfunc269(int index)
{
	m_Layers[index].m_f10 = 0;
	m_Layers[index].m_nSequence = 0;
}
// END FUNCTION

// FUNCTION: 0x100997f0 size=0x2b
#include "CBaseAnimatingOverlay.h"

// TARGET: CBaseAnimatingOverlay::vfunc266
void CBaseAnimatingOverlay::vfunc266()
{
	CAnimationLayer28 *pLayer = (CAnimationLayer28 *)((char *)this + 0x7f4);
	int i = 3;
	do
	{
		pLayer->m_fl18 = gpGlobals->curtime - 1.0f;
		pLayer->m_n00 = -1;
		pLayer++;
	} while (--i);
}
// END FUNCTION
