// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10134820 size=0x9
#include "CCopyRecipientFilter.h"
int CCopyRecipientFilter::vfunc1() { return ((unsigned)m_unk04 >> 1) & 1; }
// END FUNCTION

// FUNCTION: 0x10134830 size=0x4
#include "CCopyRecipientFilter.h"

// TARGET: CCopyRecipientFilter::vfunc2
int CCopyRecipientFilter::vfunc2()
{
	return m_unk14;
}
// END FUNCTION

// FUNCTION: 0x10134840 size=0xd
struct V_10134840 { int m_unk[2]; int *m_pArr; };
// TARGET: sub_10134840
int __fastcall sub_10134840(V_10134840 *self, int edx, int i)
{
	return self->m_pArr[i];
}
// END FUNCTION

// FUNCTION: 0x10134850 size=0xa
struct CUnknown10134850 { int a; unsigned m; int sub_10134850(); };
int CUnknown10134850::sub_10134850() { return (m >> 2) & 1; }
// END FUNCTION

// FUNCTION: 0x10134860 size=0x4
#include "CCopyRecipientFilter.h"

// TARGET: CCopyRecipientFilter::vfunc4
bool CCopyRecipientFilter::vfunc4()
{
	return m_unk1c;
}
// END FUNCTION

// FUNCTION: 0x10134870 size=0x4
#include "CCopyRecipientFilter.h"

// TARGET: CCopyRecipientFilter::vfunc5
int CCopyRecipientFilter::vfunc5()
{
	return m_unk20;
}
// END FUNCTION

// FUNCTION: 0x10134880 size=0x4
#include "CCopyRecipientFilter.h"

// TARGET: CCopyRecipientFilter::vfunc6
bool CCopyRecipientFilter::vfunc6()
{
	return m_unk24;
}
// END FUNCTION

// FUNCTION: 0x10134940 size=0x68
#include "CCopyRecipientFilter.h"
#include "utlvector.h"

void *CCopyRecipientFilter::vfunc0(unsigned char bFree)
{
	((CUtlVector<int> *)((char *)this + 8))->~CUtlVector<int>();
	this->IRecipientFilter::~IRecipientFilter();
	if ( bFree & 1 )
		operator delete(this);
	return this;
}
// END FUNCTION
