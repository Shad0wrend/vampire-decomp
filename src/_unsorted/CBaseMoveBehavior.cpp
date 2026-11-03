// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101404d0 size=0x9
#include "CBaseMoveBehavior.h"
#include "CLogicalEntity.h"

int CBaseMoveBehavior::vfunc117()
{
	return ((CLogicalEntity *)this)->CLogicalEntity::vfunc117() & ~0x200;
}
// END FUNCTION

// FUNCTION: 0x101404f0 size=0x6
#include "CBaseMoveBehavior.h"
#include "datamap.h"
namespace lifted {
extern char g_1057a3fc;
}
datamap_t * CBaseMoveBehavior::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1057a3fc);
}
// END FUNCTION

// FUNCTION: 0x10140750 size=0xe
#include "CBaseMoveBehavior.h"
bool CBaseMoveBehavior::vfunc153()
{
	return m_unk4b4 != 0;
}
// END FUNCTION

// FUNCTION: 0x10140a60 size=0xb7
#include "CBaseMoveBehavior.h"
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

// FUNCTION: 0x10140b50 size=0x59
#include "CBaseMoveBehavior.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
#define D5(n) virtual void d##n##a(); virtual void d##n##b(); virtual void d##n##c(); virtual void d##n##d(); virtual void d##n##e();
#define D25(n) D5(n##0) D5(n##1) D5(n##2) D5(n##3) D5(n##4)
#define D100(n) D25(n##0) D25(n##1) D25(n##2) D25(n##3)
struct CMoveView : public CBaseEntity {
	D100(x0)
	D5(y0)
	virtual void z0(); virtual void z1();
	virtual bool vfunc241(int a);
};
// TARGET: CBaseMoveBehavior::vfunc133
void CBaseMoveBehavior::vfunc133()
{
	CMoveView *p = (CMoveView *)this;
	const char *psz = m_classname11c;
	if (!psz)
		psz = "";
	if (!_strcmpi(psz, "move_keyframed")) {
		int n = m_unk4b4;
		if (!p->vfunc241(n))
			p->vfunc241(-n);
	}
	if (m_pfn0114)
		(this->*m_pfn0114)();
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
