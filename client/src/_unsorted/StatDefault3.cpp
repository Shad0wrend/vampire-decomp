// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1013e240 size=0xf7
#include "StatDefault3.h"
StatDefault3::StatDefault3(int a0)
{
	m_0 = a0;
	m_4 = -1;
	m_80 = 0;
	m_b0 = 0;
	m_d0[0] = 0;
	m_d0[1] = 0;
	m_pd8 = 0;
	m_dc = 0;
	m_1c = 0;
	m_20 = 0;
	m_8c[0] = false;
	m_8c[1] = false;
	m_8c[2] = false;
	m_8c[3] = false;
	m_8c[4] = false;
	m_8c[5] = true;
	m_8c[6] = false;
	m_8c[7] = false;
	m_8c[8] = false;
	m_8c[9] = false;
	m_8c[10] = false;
	m_8c[11] = false;
	m_ac = 0;
	m_98[0] = false;
	m_98[1] = false;
	m_98[2] = false;
	m_98[3] = false;
	m_98[4] = false;
	m_98[5] = false;
	m_98[6] = false;
	m_98[7] = false;
	m_98[8] = false;
	m_98[9] = false;
	m_a4 = -1;
	m_a8 = false;
	m_a9 = false;
	m_bc[0] = 1.0f;
	m_bc[1] = 1.0f;
	m_bc[2] = 1.0f;
	m_cc = 0;
}
// END FUNCTION

// FUNCTION: 0x1013e340 size=0x51
#include "StatDefault3.h"
StatDefault3::~StatDefault3()
{
    if (m_d0[0]) delete m_d0[0];
    if (m_d0[1]) delete m_d0[1];
    if (m_pd8) delete m_pd8;
    if (m_dc) delete m_dc;
}
// END FUNCTION
