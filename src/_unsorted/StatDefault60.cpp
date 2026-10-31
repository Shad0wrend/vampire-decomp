// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101db070 size=0x2d
#include "StatDefault60.h"
namespace block_101db070 {
struct U1 : CUnknown101da880 { void *sub_101da880(); };
void *U1::sub_101da880()
{
	m_a[0] = 0;
	m_a[1] = -1;
	m_a[2] = -1;
	m_a[3] = 100;
	return this;
}
struct U2 : S6 { S6 *sub_101dae70(int); };
S6 *U2::sub_101dae70(int a)
{
	m_a[0] = a;
	m_a[2] = 0;
	m_a[4] = 0;
	m_a[5] = 0;
	return this;
}
}
using namespace block_101db070;
StatDefault60::StatDefault60(int index)
{
	((U1 *)&m_4)->sub_101da880();
	((U2 *)&m_14)->sub_101dae70(-1);
	m_index = index;
	m_34 = 0;
	m_2c = 0;
	m_30 = 0;
	m_38 = 0;
}
// END FUNCTION
