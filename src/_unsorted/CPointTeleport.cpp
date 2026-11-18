// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1018d9b0 size=0x6
#include "datamap.h"
#include "CPointTeleport.h"
namespace lifted {
extern char g_1058cbf8;
}
datamap_t * CPointTeleport::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1058cbf8);
}
// END FUNCTION

// FUNCTION: 0x1018da40 size=0x154
#include "CPointTeleport.h"
#include "CEHandleGet.h"
__declspec(dllimport) void Warning(const char *fmt, ...);
void sub_101cd940(CBaseEntity *p);
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct TpEnt {
    V100(a) V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6)
    virtual void c0(); virtual void c1();
    virtual TpEnt *GetTarget();
    V10(d0) V10(d1) V10(d2) V10(d3)
    virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6();
    virtual const float *GetOrigin();
    virtual const float *GetAngles();
    char p0[0xa8 - 4];
    char *m_p0a8;
    char p1[0x204 - 0xac];
    unsigned int m_flags204;
    int m_pad208;
    const char *m_target20c;
    char p2[0x25c - 0x210];
    unsigned int m_hParent25c;
    char p3[0x450 - 0x260];
    Vector m_vSaveOrigin;
    Vector m_vSaveAngles;
};
void CPointTeleport::vfunc113()
{
    TpEnt *self = (TpEnt *)this;
    self->m_vSaveOrigin = *(const Vector *)self->GetOrigin();
    self->m_vSaveAngles = *(const Vector *)self->GetAngles();
    TpEnt *pTarget = self->GetTarget();
    if (pTarget) {
        if (EHandle_Get(pTarget->m_hParent25c)) {
            Warning("ERROR: (%s) can't teleport object (%s) as it has a parent!\n", ((CBaseEntity *)this)->sub_100ab4f0(), ((CBaseEntity *)pTarget)->sub_100ab4f0());
            return;
        }
        if (self->m_flags204 & 1) {
            self->m_vSaveOrigin = *(const Vector *)pTarget->GetOrigin();
            self->m_vSaveAngles = *(const Vector *)pTarget->GetAngles();
        }
        char *p = pTarget->m_p0a8;
        if (p)
            *(float *)(p + 0x1f7c) = engine->vfunc119(0) + 0.5;
    } else if (!self->m_target20c) {
        Warning("ERROR: (%s) given no target.  Deleting.\n", ((CBaseEntity *)this)->sub_100ab4f0());
        sub_101cd940(this);
        return;
    }
    CBaseEntity::vfunc113();
}
// END FUNCTION

// FUNCTION: 0x1018ded0 size=0x1e
#include "CPointTeleport.h"

void sub_100aa7b0(void *p);

// TARGET: CPointTeleport::vfunc5
CBaseEntity *CPointTeleport::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
