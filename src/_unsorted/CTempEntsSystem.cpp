// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100582f0 size=0x64
#include "CTempEntsSystem.h"

void sub_1000a99d(CUnknown1019d130 *filter, int a, int b, int c, int d);

void CTempEntsSystem::vfunc2(CUnknown1019d130 *filter, int a, int b, int c, int d)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130((m_nSuppressCount > 0) ? 0 : m_pSuppressHost);
		if (!filter->vfunc2())
			return;
	}
	sub_1000a99d(filter, a, b, c, d);
}
// END FUNCTION

// FUNCTION: 0x100584a0 size=0x5f
#include "CTempEntsSystem.h"

void sub_100095d9(CUnknown1019d130 *filter, int a, int b, int c);

void CTempEntsSystem::sub_100584a0(CUnknown1019d130 *filter, int a, int b, int c)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_100095d9(filter, a, b, c);
}
// END FUNCTION

// FUNCTION: 0x10058d70 size=0x73
#include "CTempEntsSystem.h"

void sub_1000bf5f(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g);

void CTempEntsSystem::sub_10058d70(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_1000bf5f(filter, a, b, c, d, e, f, g);
}
// END FUNCTION
