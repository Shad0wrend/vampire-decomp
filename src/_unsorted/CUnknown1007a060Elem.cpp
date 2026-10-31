// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10072b60 size=0x2c
#include "CUnknown1007a060.h"
struct CUnk10072d20 { void sub_10072d20(); };
struct CUnknown1007a060ElemFields { int m_n164, m_n168, m_n16c, m_n170, m_n174; };
CUnknown1007a060Elem::CUnknown1007a060Elem()
{
	CUnknown1007a060ElemFields *f = (CUnknown1007a060ElemFields *)(m_data + 0x164);
	f->m_n164 = 0;
	f->m_n168 = 0;
	f->m_n16c = 0;
	f->m_n170 = 0;
	f->m_n174 = 0;
	((CUnk10072d20 *)this)->sub_10072d20();
}
// END FUNCTION
