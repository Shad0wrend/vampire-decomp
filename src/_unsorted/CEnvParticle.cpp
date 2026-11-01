// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fa740 size=0x6
namespace lifted {
extern char g_10708e20;
}
int CEnvParticle::vfunc80()
{
    return (int)&lifted::g_10708e20;
}
// END FUNCTION

// FUNCTION: 0x100fa760 size=0x3
int CEnvParticle::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100facc0 size=0x6
namespace lifted {
extern char g_105669d8;
}
datamap_t *CEnvParticle::vfunc82()
{
    return (datamap_t *)&lifted::g_105669d8;
}
// END FUNCTION

// FUNCTION: 0x100fae40 size=0x1e
#include "CEnvParticle.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvParticle::vfunc5
CEnvParticle *CEnvParticle::vfunc5(unsigned int flags)
{
	sub_10011ac7();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100fb3d0 size=0x117
#include "CEnvParticle.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"

extern float g_104563b0;
extern float g_104454c4;	// 0.0f
extern "C" __declspec(dllimport) void Warning(const char *pMsg, ...);
void sub_101cd940(void *pEntity);

struct CEnvParticleView : CEntityVSlots {
	char m_pad0004[0x454 - 4];
	int m_iParticleIndex;	// 0x454
	int m_nAttachType;	// 0x458
	char m_pad045c[0x484 - 0x45c];
	int m_n484;	// 0x484
	float m_fl488;	// 0x488
	char m_pad048c[0x49c - 0x48c];
	float m_fl49c;	// 0x49c

	void sub_101c0820();	// CPointEntity::sub_101c0820 (stub 0x10001f28)
	const char *sub_100ab4f0();	// the entity's debug name (stub 0x1000b5cd)
};

// TARGET: CEnvParticle::vfunc103
void CEnvParticle::vfunc103()
{
	CEnvParticleView *p = (CEnvParticleView *)this;
	p->slot104();
	p->sub_101c0820();
	if (p->m_nAttachType < 0 || p->m_nAttachType >= 19) {
		Warning("entity %s has invalid attach type!\n", p->sub_100ab4f0());
		p->m_nAttachType = 0;
	}
	if (p->m_iParticleIndex < 0) {
		sub_101cd940(this);
		return;
	}
	p->m_fl49c = (p->m_fl49c > g_104563b0) ? g_104563b0 : ((p->m_fl49c < g_104454c4) ? g_104454c4 : p->m_fl49c);
	if (EHandle_Get(m_hAttachEntity))
		sub_100faf60(EHandle_Get(m_hAttachEntity));
	if (m_unk484)
		p->m_fl488 = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x100fb7d0 size=0xb
void CEnvParticle::vfunc242()
{
	m_unk484 = 0;
}
// END FUNCTION

// FUNCTION: 0x100fbdc0 size=0xcf
#include "CEnvParticle.h"
#include "CEntityVSlots.h"

struct EntInfo { void *pEnt; unsigned int serial; int pad; };
struct EntList { int hdr; EntInfo e[1]; };
extern EntList *g_10566458;

struct EHandle
{
	volatile unsigned int m_Index;

	void *Get() const
	{
		unsigned int h = m_Index;
		if (h != 0xffffffff) {
			EntInfo *e = &g_10566458->e[h & 0x1fff];
			if (e->serial == (h >> 13))
				return e->pEnt;
		}
		return 0;
	}
};

char CEnvParticle::vfunc86(int a, int b, int c, int d, int e)
{
	if (((CEntityVSlots *)this)->slot94() == 11) {
		EHandle *pHandle = (EHandle *)((char *)this + 0x254);
		if (pHandle->Get()) {
			CEntityVSlots *pAttach = (CEntityVSlots *)pHandle->Get();
			if (pAttach->slot86(0, b, c, d, e))
				return 1;
		}
	}
	int type = *(int *)((char *)this + 0x458);
	if (type == 10 || type == 11 || type == 12 || type == 13)
		return 1;
	return sub_100ab020(a, b, c, d, e);
}
// END FUNCTION
