// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10156700 size=0x62
#include "CVModInfo_t.h"
CVModInfo_t::CVModInfo_t(int a, int b, int c)
{
	m_block04.sub_10160690(a, b);
	m_field00 = c;
	m_field14 = 0;
	m_field18 = 1;
	m_field1c = -1;
	m_field20 = 1;
	m_field24 = -1;
	m_field28 = 32000;
	m_field2c = -1;
	m_field30 = -32000;
	m_field34 = -1;
	m_field38 = 100;
}
// END FUNCTION
