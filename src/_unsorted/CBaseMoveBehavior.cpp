// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101404f0 size=0x6
namespace lifted {
extern char g_1057a3fc;
}
datamap_t * CBaseMoveBehavior::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1057a3fc);
}
// END FUNCTION

// FUNCTION: 0x10140750 size=0xe
bool CBaseMoveBehavior::vfunc153()
{
	return m_unk4b4 != 0;
}
// END FUNCTION

// FUNCTION: 0x10140a60 size=0xb7
struct MoveView10140a60 {
	char pad0[0x3f4];
	float m_f3f4;
	char pad1[4];
	int m_n3fc;
	char pad2[0x494 - 0x400];
	float m_f494;
	float m_f498;
	char pad3[4];
	int m_n4a0;
	int m_n4a4;
	char pad4[8];
	float m_f4b0;
	int m_n4b4;
};
extern float g_1070d1b0[3];
extern float g_1070d9d0[3];

void CBaseMoveBehavior::vfunc242()
{
	MoveView10140a60 *p = (MoveView10140a60 *)this;
	p->m_f4b0 = 0;
	if (p->m_n4b4 == 1) {
		if (p->m_f3f4 < p->m_f498) {
			p->m_f4b0 = p->m_f3f4 - p->m_f494;
		} else if (p->m_n4a4 != 0) {
			p->m_n4a0 = p->m_n4a4;
		}
	} else if (p->m_n4b4 == -1) {
		p->m_n4a0 = p->m_n4a4;
		if (p->m_f3f4 < p->m_f498)
			p->m_f4b0 = p->m_f498 - p->m_f3f4;
	}
	p->m_n3fc = 0;
	p->m_n4b4 = 0;
	p->m_f494 = 0;
	p->m_f498 = 0;
	p->m_n4a4 = 0;
	sub_100b2e30(g_1070d1b0);
	sub_100b2f50(g_1070d9d0);
}
// END FUNCTION

// FUNCTION: 0x10140f30 size=0x1e
#include "CBaseMoveBehavior.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseMoveBehavior::vfunc5
CBaseMoveBehavior *CBaseMoveBehavior::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
