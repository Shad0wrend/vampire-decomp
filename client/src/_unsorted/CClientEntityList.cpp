// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100d09c0 size=0x7f
#include "CClientEntityList.h"
// TARGET: ??0CClientEntityList@@QAE@XZ
CClientEntityList::CClientEntityList()
{
	m_i18048 = -1;
	m_i18044 = 0;
	sub_100d0b40();
}
// END FUNCTION

// FUNCTION: 0x100d0a90 size=0xaa
#include "CClientEntityList.h"
extern void (*g_101e30fc)(void *);
struct TailNode { unsigned short a; unsigned short b; unsigned short prev; unsigned short next; };
// TARGET: ??1CClientEntityList@@QAE@XZ
CClientEntityList::~CClientEntityList()
{
	sub_100d0b40();
	unsigned short n = m_tail.h;
	if (n != 0) {
		unsigned short nx = 0xffff;
		for (int k = n - 1; k >= 0; k--) {
			unsigned short i = k;
			TailNode *base = (TailNode *)m_tail.a;
			base[i].next = nx;
			TailNode *q = (TailNode *)m_tail.a;
			q[i].prev = k;
			nx = k;
		}
		m_tail.f = 0; m_tail.d = 0xffff; m_tail.e = 0xffff; m_tail.g = 0;
	}
	if (m_tail.c != -1) {
		if (m_tail.a) { g_101e30fc((void *)m_tail.a); m_tail.a = 0; }
		m_tail.b = 0;
	}
}
// END FUNCTION
