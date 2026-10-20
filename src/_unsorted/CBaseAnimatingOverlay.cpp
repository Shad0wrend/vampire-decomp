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
