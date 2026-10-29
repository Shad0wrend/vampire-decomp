// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
