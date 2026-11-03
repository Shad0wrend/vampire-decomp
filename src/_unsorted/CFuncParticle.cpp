// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fc6a0 size=0x6
#include "CFuncParticle.h"
namespace lifted {
extern char g_1070871c;
}
int CFuncParticle::vfunc80()
{
    return (int)&lifted::g_1070871c;
}
// END FUNCTION

// FUNCTION: 0x100fc6c0 size=0x3
#include "CFuncParticle.h"
int CFuncParticle::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100fc9d0 size=0x6
#include "datamap.h"
#include "CFuncParticle.h"
namespace lifted {
extern char g_10566eec;
}
datamap_t *CFuncParticle::vfunc82()
{
    return (datamap_t *)&lifted::g_10566eec;
}
// END FUNCTION

// FUNCTION: 0x100fca60 size=0xb6
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CFuncParticle.h"
#include "CEnvParticle.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

// TARGET: CFuncParticle::vfunc103
void CFuncParticle::vfunc103()
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	((CEnvParticle *)this)->vfunc103();
	int local;
	const char *model = *pEnt->vfunc9(&local);
	pEnt->vfunc105(model ? model : g_106b8540);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", pEnt->m_name26c ? pEnt->m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	pEnt->vfunc93(0, 0);
	pEnt->sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x100fcb50 size=0x128
#include "CFuncParticle.h"
#include "CCollisionProperty.h"
#include <math.h>

__declspec(dllimport) void Warning(const char *pMsg, ...);

struct ParticleView100fcb50 {
	char pad0[0x270];
	CCollisionProperty m_collision;
};
struct ParticleData100fcb50 {
	char pad0[0x458];
	int m_nFlags;
	char pad1[0x4a4 - 0x45c];
	float m_flScale;
	Vector m_vecMins;
	Vector m_vecMaxs;
};

#define clamp(val, lo, hi) (((val) > (hi)) ? (hi) : (((val) < (lo)) ? (lo) : (val)))

void CFuncParticle::vfunc113()
{
	sub_100a0bc0();
	ParticleView100fcb50 *v = (ParticleView100fcb50 *)this;
	ParticleData100fcb50 *d = (ParticleData100fcb50 *)this;
	v->m_collision.vfunc15(&d->m_vecMins, &d->m_vecMaxs);
	float flX = (float)fabs(d->m_vecMaxs.x - d->m_vecMins.x);
	float flY = (float)fabs(d->m_vecMaxs.y - d->m_vecMins.y);
	float flZ = (float)fabs(d->m_vecMaxs.z - d->m_vecMins.z);
	d->m_flScale = flX * flY * flZ * 4.7683716e-7f;
	if (d->m_flScale < 0.01 || d->m_flScale > 100.0f) {
		Warning("%s emitter's scale value(%f) is out of range, clamping!\n", sub_1000b5cd(), (double)d->m_flScale);
		d->m_flScale = clamp(d->m_flScale, 0.01, 100.0f);
	}
	d->m_nFlags = 0xf;
}
// END FUNCTION

// FUNCTION: 0x100fd500 size=0x1e
#include "CFuncParticle.h"

void sub_100aa7b0(void *p);

// TARGET: CFuncParticle::vfunc5
CFuncParticle *CFuncParticle::vfunc5(unsigned int flags)
{
	sub_10011ac7();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
