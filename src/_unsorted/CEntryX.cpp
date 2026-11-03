// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101eb650 size=0x2a
#include "CEntryX.h"
CEntryX::CEntryX(int key)
{
	m_key = key;
	m_dmg.sub_101fa810();
	m_n50 = 0;
	m_n54 = 0;
}
// END FUNCTION

// FUNCTION: 0x101eb690 size=0x8
#include "CEntryX.h"

CEntryX::~CEntryX()
{
	m_dmg.sub_101fa680();
}
// END FUNCTION
