// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 6 blocks
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

// FUNCTION: 0x1018d9d0 size=0x5
int sub_1018da10(void);
int g_1072b014 = ((int (*)(int))sub_1018da10)(0);
// END FUNCTION

// FUNCTION: 0x1018da10 size=0x1a
namespace lifted {
extern int g_1058cbf8;
extern int g_1058cbfc;
extern char g_1058cc3c;
}
int sub_1018da10()
{
    lifted::g_1058cbfc = 3;
    lifted::g_1058cbf8 = (int)&lifted::g_1058cc3c;
    return (int)&lifted::g_1058cbf8;
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

// FUNCTION: 0x1018dc00 size=0x23c
// TARGET: CPointTeleport::sub_1018dc00
#include "CPointTeleport.h"
#include "CEntityVSlots.h"

__declspec(dllimport) void Warning(const char *fmt, ...);
void sub_10139550(const Vector *pAngles, Vector *pOut);
void sub_1028d820(const Vector *p);
void sub_101cf600(CEntityVSlots *p);
extern "C" void *__cdecl __RTDynamicCast(void *p, long vfDelta, void *pSrc, void *pTarget, int isRef);
extern char g_10538764[];
extern char g_1058ce30[];

struct CTeleTargetView : CEntityVSlots
{
	char pad[0xa8 - 4];
	CEntityVSlots *m_pA8;
	char pad2[0x25c - 0xac];
	EHANDLE m_hMoveParent;
};

struct CTelePlayerView : CEntityVSlots
{
	char pad[0x1538 - 4];
	EHANDLE m_h1538;
	int m_i153c;
	char pad2[0x1f7c - 0x1540];
	float m_fNext;
	void sub_10178590(Vector v);
	void sub_1017c6d0();
	void sub_10167fd0();
	void sub_10329560();
};

struct CTeleControllerView : CEntityVSlots
{
	char pad[0x60ac - 4];
	EHANDLE m_hPlayer;
};

void CPointTeleport::sub_1018dc00(int)
{
	CTeleTargetView *pTarget = (CTeleTargetView *)((CEntityVSlots *)this)->slot172();
	if (!pTarget)
		return;
	if (pTarget->m_hMoveParent.Get())
	{
		Warning("ERROR: (%s) can't teleport object (%s) as it has a parent (%s)!\n", this->sub_1000b5cd(), ((CBaseEntity *)pTarget)->sub_1000b5cd(), pTarget->m_hMoveParent.Get()->sub_1000b5cd());
		return;
	}
	pTarget->slot62(&m_vSaveOrigin.x);
	pTarget->slot64(&m_vSaveAngles.x);
	CTelePlayerView *pPlayer = (CTelePlayerView *)pTarget->m_pA8;
	if (!pPlayer)
	{
		CTeleControllerView *pCtrl = (CTeleControllerView *)__RTDynamicCast(pTarget, 0, g_10538764, g_1058ce30, 0);
		if (!pCtrl) goto done;
		CEntityVSlots *pE = (CEntityVSlots *)pCtrl->m_hPlayer.Get();
		if (!pE) goto done;
		pPlayer = (CTelePlayerView *)((CTeleTargetView *)pE)->m_pA8;
		if (!pPlayer) goto done;
	}
	{
		Vector fwd;
		sub_10139550(&m_vSaveAngles, &fwd);
		Vector ofs = fwd * 10000.0f;
		Vector tmp;
		pPlayer->sub_10178590(ofs + *pPlayer->slot193(&tmp));
		sub_1028d820(&m_vSaveOrigin);
		float *pf = &pPlayer->m_fNext;
		*pf = (float)(engine->vfunc119(0) + 0.5);
		if (pPlayer->m_i153c != -1 && pPlayer->m_h1538.Get())
			pPlayer->sub_10329560();
		pPlayer->sub_1017c6d0();
		pPlayer->sub_10167fd0();
	}
done:
	sub_101cf600(pTarget);
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
