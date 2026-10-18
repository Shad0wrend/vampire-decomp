// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10376b70 size=0x1a
#include "CNPC_VFrenzyShadow.h"
struct S10924edc { virtual void a(); virtual void b(); };
extern S10924edc *g_10924edc;
char CNPC_VFrenzyShadow::sub_10376b70(int unused)
{
	g_10924edc->b();
	return m_b6078 = 1;
}
// END FUNCTION

// FUNCTION: 0x10376ba0 size=0x17
#include "CNPC_VFrenzyShadow.h"
struct S10924edc { virtual void a(); virtual void b(); };
extern S10924edc *g_10924edc;
bool CNPC_VFrenzyShadow::sub_10376ba0(int unused)
{
	m_b6078 = 1;
	g_10924edc->b();
	return true;
}
// END FUNCTION

// FUNCTION: 0x10376bd0 size=0xe
struct CUnknown10924edc
{
	virtual void slot0();
	virtual void slot1();
};
extern CUnknown10924edc *g_10924edc;

void CNPC_VFrenzyShadow::vfunc601(int unused)
{
	g_10924edc->slot1();
}
// END FUNCTION
