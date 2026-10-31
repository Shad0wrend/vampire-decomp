// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101e4f30 size=0x2c
#include "CVFeat_t.h"
// TARGET: CVFeat_t::CVFeat_t
CVFeat_t::CVFeat_t(int a)
{
	m_pad0000 = a;
	m_pad0010 = a;
	*(int *)((char *)this + 0x18) = 10;
	*(int *)((char *)this + 0x1c) = 0;
	m_p20 = 0;
	m_nEffects = 0;
	m_pEffects = 0;
	m_pad002c = 0;
	m_p30 = 0;
	m_flags = 0;
}
// END FUNCTION

// FUNCTION: 0x101e4f70 size=0x4a
#include "CVFeat_t.h"

CVFeat_t::~CVFeat_t()
{
	if (m_p20) {
		delete m_p20;
		m_p20 = 0;
	}
	if (m_pEffects) {
		delete m_pEffects;
		m_pEffects = 0;
	}
	if (m_p30) {
		delete m_p30;
		m_p30 = 0;
	}
}
// END FUNCTION
