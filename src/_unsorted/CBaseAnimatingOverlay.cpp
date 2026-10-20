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
