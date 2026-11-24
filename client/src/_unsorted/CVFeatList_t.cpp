// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1014d690 size=0x11
#include "CVFeatList_t.h"
float CVFeatList_t::vfunc0(int i)
{
	return (float)m_aEntries[i].m_nValue;
}
// END FUNCTION

// FUNCTION: 0x1014d6b0 size=0x11
#include "CVFeatList_t.h"
float CVFeatList_t::vfunc1(int i)
{
	return (float)m_aEntries[i].m_unk04;
}
// END FUNCTION

// FUNCTION: 0x1014d6d0 size=0xe
struct SE { float a; int b[5]; };
struct CView { char pad[0x150]; SE e[1]; float sub_1014d6d0(int); };
// TARGET: ?sub_1014d6d0@CView@@QAEMH@Z
float CView::sub_1014d6d0(int i) { return e[i + 1].a; }
// END FUNCTION

// FUNCTION: 0x1014d6e0 size=0x11
#include "CVFeatList_t.h"
float CVFeatList_t::vfunc3(int i)
{
	return (float)m_aEntries[i].m_unk0c;
}
// END FUNCTION
