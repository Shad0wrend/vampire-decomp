// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
#include "CUnknown1070b22c.h"
#include "Quaternion.h"

extern CUnknown1070b22c *g_1070b22c;
void sub_100c32e0(void *pHdr, void *pPos, void *pQ, float *pPose, int mask);
void sub_100c2ce0(void *pHdr, void *pPos, void *pQ, float *pCtl, int mask);

void CBaseAnimatingOverlay::vfunc255(void *pPos, void *pQ, int mask)
{
	Quaternion q2[350];
	Vector pos2[350];
	CBaseAnimating *pAnim = (CBaseAnimating *)this;
	void *pHdr = g_1070b22c->vfunc18(((CBaseEntity *)this)->vfunc8());
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
