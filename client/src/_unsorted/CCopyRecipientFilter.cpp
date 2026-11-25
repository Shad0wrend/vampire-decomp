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

// FUNCTION: 0x10134890 size=0xa3
#include "CCopyRecipientFilter.h"
#include "IClientEntity.h"
#include "utlvector.h"

struct UtlMem { void sub_100be200(int); };

struct RecipientFilterView
{
	int m_vtbl;
	int m_unk04;
	CUtlVector<int> m_Recipients;
	int m_unk1c;
	int m_unk20;
	int m_unk24;
};

static inline void RecipientsAddToTail(CUtlVector<int> &v, int val)
{
	int elem = v.m_Size;
	if (v.m_Size + 1 > v.m_Memory.NumAllocated())
		((UtlMem *)&v)->sub_100be200(v.m_Size + 1 - v.m_Memory.NumAllocated());
	v.m_Size += 1;
	v.m_pElements = v.m_Memory.Base();
	int numToMove = v.m_Size - elem - 1;
	if (numToMove > 0 && 1 > 0)
		memmove(&v.Element(elem + 1), &v.Element(elem), numToMove * sizeof(int));
	CopyConstruct(&v.Element(elem), val);
}

bool CCopyRecipientFilter::vfunc8(IClientEntity *pEntity)
{
	int index = pEntity->entindex();
	if (index < 0)
		return false;

	RecipientFilterView *self = (RecipientFilterView *)this;
	const CUtlVector<int> &recipients = self->m_Recipients;
	if (recipients.Find(index) != -1)
		return false;

	CUtlVector<int> &tail = *(CUtlVector<int> *)((char *)self + 8);
	RecipientsAddToTail(tail, index);
	return true;
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
