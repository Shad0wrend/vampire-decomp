// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 171 blocks
#include "vampire.h"

// FUNCTION: 0x10026000 size=0x30
#include "CConstantForceController.h"

int CConstantForceController::vfunc0(void *pController, int pObject, float deltaTime, Vector &linear, Vector &angular)
{
	VectorCopy(m_vStart, linear);
	VectorCopy(m_vEnd, angular);
	return m_n4;
}
// END FUNCTION

// FUNCTION: 0x10026040 size=0x6
#include "datamap.h"
#include "CPhysForce.h"
namespace lifted {
extern char g_10536e28;
}
datamap_t * CPhysForce::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10536e28);
}
// END FUNCTION

// FUNCTION: 0x10026060 size=0x5
int * sub_100260a0(void);
int * g_106b8554 = ((int * (*)(int))sub_100260a0)(0);
// END FUNCTION

// FUNCTION: 0x100260a0 size=0x35e
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
ISaveRestoreOps *sub_10045d90(int);
extern int g_10536d08;
void sub_10001a9b();
void sub_10002824();
void sub_100050e7();
void sub_100152f3();
extern int g_10536e28[2];
int *sub_100260a0()
{
    static typedescription_t dataDesc[] = {
        { 0 },
        { 0xa, "m_pController", {0x450, 0}, 1, 2, 0, sub_10045d90(8), 0 },
        { 2, "m_nameAttach", {0x454, 0}, 1, 6, "attach1", 0, 0 },
        { 1, "m_force", {0x458, 0}, 1, 6, "force", 0, 0 },
        { 1, "m_forceTime", {0x45c, 0}, 1, 6, "forcetime", 0, 0 },
        { 0xc, "m_attachedObject", {0x460, 0}, 1, 2, 0, 0, 0 },
        { 9, "m_integrator", {0x464, 0}, 1, 2, 0, 0, 0, (datamap_t *)&g_10536d08 },
        { 0, "InputActivate", {0, 0}, 1, 8, "Activate", 0, (void *)sub_100050e7 },
        { 0, "InputDeactivate", {0, 0}, 1, 8, "Deactivate", 0, (void *)sub_10002824 },
        { 1, "InputForceScale", {0, 0}, 1, 8, "scale", 0, (void *)sub_100152f3 },
        { 0, "CPhysForceForceOff", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10001a9b },
    };
    g_10536e28[1] = 10;
    g_10536e28[0] = (int)&dataDesc[1];
    return g_10536e28;
}
// END FUNCTION

// FUNCTION: 0x100264e0 size=0x32
#include "CPhysForce.h"

// TARGET: CPhysForce::CPhysForce
CPhysForce::CPhysForce() : m_hAttached(-1)
{
	m_pController = 0;
}
// END FUNCTION

// FUNCTION: 0x10026530 size=0x3
#include "CBaseEntity.h"
void CBaseEntity::vfunc21(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10026550 size=0x3
#include "CBaseEntity.h"
void CBaseEntity::vfunc22(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10026570 size=0x3
#include "CBaseEntity.h"
void CBaseEntity::vfunc23(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10026590 size=0x3
#include "CBaseEntity.h"
// TARGET: CBaseEntity::vfunc24
void CBaseEntity::vfunc24(int) { }
// END FUNCTION

// FUNCTION: 0x100265b0 size=0x3
#include "CBaseEntity.h"
void CBaseEntity::vfunc25(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100265d0 size=0x3
#include "CBaseEntity.h"
void CBaseEntity::vfunc26(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100265f0 size=0x3
// TARGET: sub_100265f0
void __stdcall sub_100265f0(int) {}
// END FUNCTION

// FUNCTION: 0x10026610 size=0x7
#include "CBaseEntity.h"
namespace lifted {
extern float g_104454c0;
}
float CBaseEntity::vfunc28()
{
    return lifted::g_104454c0;
}
// END FUNCTION

// FUNCTION: 0x10026630 size=0x7
#include "CBaseEntity.h"
namespace lifted {
extern float g_104454c0;
}
float CBaseEntity::vfunc29()
{
    return lifted::g_104454c0;
}
// END FUNCTION

// FUNCTION: 0x10026650 size=0x7
#include "CBaseEntity.h"
namespace lifted {
extern float g_104454c4;
}
float CBaseEntity::vfunc30()
{
    return lifted::g_104454c4;
}
// END FUNCTION

// FUNCTION: 0x10026670 size=0x5
#include "CBaseEntity.h"
bool CBaseEntity::vfunc32(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10026690 size=0x4
#include "CBaseEntity.h"
int CBaseEntity::vfunc33()
{
    return -1;
}
// END FUNCTION

// FUNCTION: 0x100266b0 size=0x5
#include "CBaseEntity.h"
int CBaseEntity::vfunc34(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100266d0 size=0x5
#include "CBaseEntity.h"
int CBaseEntity::vfunc35(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100266f0 size=0x3
#include "CBaseEntity.h"
int CBaseEntity::vfunc36()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10026710 size=0x7
#include "CBaseEntity.h"
namespace lifted {
extern float g_104454c8;
}
float CBaseEntity::vfunc37()
{
    return lifted::g_104454c8;
}
// END FUNCTION

// FUNCTION: 0x10026730 size=0x5
#include "CBaseEntity.h"
void * CBaseEntity::vfunc38(int a0)
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x10026750 size=0x3
#include "CBaseEntity.h"
void CBaseEntity::vfunc40(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10026770 size=0x3
// TARGET: sub_10026770
void __stdcall sub_10026770(int) {}
// END FUNCTION

// FUNCTION: 0x10026790 size=0x3
#include "CBaseEntity.h"
void CBaseEntity::vfunc43(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100267b0 size=0x5
#include "CBaseEntity.h"
bool CBaseEntity::vfunc44(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100267d0 size=0x1
#include "CBaseEntity.h"
void CBaseEntity::vfunc46()
{
}
// END FUNCTION

// FUNCTION: 0x100267f0 size=0x1
#include "CBaseEntity.h"
void CBaseEntity::vfunc47()
{
}
// END FUNCTION

// FUNCTION: 0x10026810 size=0x7
#include "CBaseEntity.h"
namespace lifted {
extern float g_104454c4;
}
float CBaseEntity::vfunc48()
{
    return lifted::g_104454c4;
}
// END FUNCTION

// FUNCTION: 0x10026830 size=0x7
#include "CBaseEntity.h"
namespace lifted {
extern float g_104454cc;
}
float CBaseEntity::vfunc49()
{
    return lifted::g_104454cc;
}
// END FUNCTION

// FUNCTION: 0x10026850 size=0x2a
#include "CBaseEntity.h"
#include "CEntitySoundOriginView.h"

// TARGET: CBaseEntity::vfunc50
void CBaseEntity::vfunc50(Vector *pOut)
{
	*pOut = ((CEntitySoundOriginView *)this)->WorldSpaceCenter();
}
// END FUNCTION

// FUNCTION: 0x10026890 size=0x2a
#include "CBaseEntity.h"
#include "CEntitySoundOriginView.h"

// TARGET: CBaseEntity::vfunc51
void CBaseEntity::vfunc51(int unused, Vector *pOut)
{
	*pOut = ((CEntitySoundOriginView *)this)->WorldSpaceCenter();
}
// END FUNCTION

// FUNCTION: 0x100268d0 size=0x7
#include "CBaseEntity.h"
namespace lifted {
extern float g_104454c4;
}
float CBaseEntity::vfunc52()
{
    return lifted::g_104454c4;
}
// END FUNCTION

// FUNCTION: 0x100268f0 size=0x7
#include "CBaseEntity.h"
namespace lifted {
extern float g_104454c4;
}
float CBaseEntity::vfunc53()
{
    return lifted::g_104454c4;
}
// END FUNCTION

// FUNCTION: 0x10026910 size=0x5
#include "CBaseEntity.h"
bool CBaseEntity::vfunc54(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10026930 size=0x3
#include "CBaseEntity.h"
void CBaseEntity::vfunc55(int a0, int a1, int a2, int a3, int a4, int a5, int a6)
{
}
// END FUNCTION

// FUNCTION: 0x10026950 size=0x3
#include "CBaseEntity.h"
void CBaseEntity::vfunc56(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
}
// END FUNCTION

// FUNCTION: 0x10026970 size=0x3
#include "CBaseEntity.h"
void CBaseEntity::vfunc57(int a0, int a1, int a2, int a3, int a4, int a5, int a6)
{
}
// END FUNCTION

// FUNCTION: 0x10026990 size=0x3
#include "CBaseEntity.h"
void CBaseEntity::vfunc58(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100269b0 size=0x3
#include "CBaseEntity.h"
void CBaseEntity::vfunc59(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100269d0 size=0x3
#include "CBaseEntity.h"
void CBaseEntity::vfunc60(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100269f0 size=0x3
#include "CBaseEntity.h"
void CBaseEntity::vfunc61(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10026a10 size=0x2e
#include "CBaseEntity.h"

// TARGET: CBaseEntity::vfunc63
void CBaseEntity::vfunc63(Vector vecOrigin)
{
	Vector v = vecOrigin;
	vfunc62(&v.x);
}
// END FUNCTION

// FUNCTION: 0x10026a50 size=0x2e
#include "CBaseEntity.h"

// TARGET: CBaseEntity::vfunc65
void CBaseEntity::vfunc65(Vector vecOrigin)
{
	Vector v = vecOrigin;
	vfunc64(&v.x);
}
// END FUNCTION

// FUNCTION: 0x10026a90 size=0x5
// TARGET: sub_10026a90
char __stdcall sub_10026a90(int) { return 0; }
// END FUNCTION

// FUNCTION: 0x10026ab0 size=0x5
// TARGET: sub_10026ab0
char __stdcall sub_10026ab0(int) { return 0; }
// END FUNCTION

// FUNCTION: 0x10026ad0 size=0x5
#include "CBaseEntity.h"
bool CBaseEntity::vfunc72(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10026af0 size=0x5
// TARGET: sub_10026af0
char __stdcall sub_10026af0(int) { return 0; }
// END FUNCTION

// FUNCTION: 0x10026b10 size=0x5
#include "CBaseEntity.h"
bool CBaseEntity::vfunc74(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10026b30 size=0x1
#include "CBaseEntity.h"
void CBaseEntity::vfunc76()
{
}
// END FUNCTION

// FUNCTION: 0x10026b50 size=0xb
#include "CBaseEntity.h"
#include "CUnknown10146700.h"

int CBaseEntity::vfunc88()
{
	return ((CUnknown10146700 *)((char *)this + 0x1b0))->sub_10146700();
}
// END FUNCTION

// FUNCTION: 0x10026b70 size=0xb
#include "CBaseEntity.h"
struct CUnknown10146790 {
	char m_unk0;
	char m_unk1;
	char m_unk2;
	void sub_10146790();
};

void CBaseEntity::vfunc89()
{
	((CUnknown10146790*)((char*)this + 0x1b0))->sub_10146790();
}
// END FUNCTION

// FUNCTION: 0x10026b90 size=0x1
#include "CBaseEntity.h"
void CBaseEntity::vfunc104()
{
}
// END FUNCTION

// FUNCTION: 0x10026bb0 size=0x1
#include "CBaseEntity.h"
void CBaseEntity::vfunc111()
{
}
// END FUNCTION

// FUNCTION: 0x10026bd0 size=0x3
#include "CBaseEntity.h"
void CBaseEntity::vfunc112(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x10026bf0 size=0x3
#include "CBaseEntity.h"
void CBaseEntity::vfunc115(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10026c10 size=0x4
#include "CBaseEntity.h"
int CBaseEntity::vfunc131()
{
    return -1;
}
// END FUNCTION

// FUNCTION: 0x10026c30 size=0x1
#include "CBaseEntity.h"
void CBaseEntity::vfunc132()
{
}
// END FUNCTION

// FUNCTION: 0x10026c50 size=0xd
#include "CBaseEntity.h"
void CBaseEntity::vfunc133()
{
	if (m_pfn0114)
		(this->*m_pfn0114)();
}
// END FUNCTION

// FUNCTION: 0x10026c70 size=0x7e
#include "CBaseEntity.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_10026c70()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::Think";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    if (m_pfnThink)
        (this->*m_pfnThink)();
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10026d10 size=0x7
#include "CBaseEntity.h"

float CBaseEntity::vfunc135(float f)
{
	return f;
}
// END FUNCTION

// FUNCTION: 0x10026d30 size=0x3
// TARGET: sub_10026d30
unsigned char sub_10026d30()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10026d50 size=0x3
#include "CBaseEntity.h"

// TARGET: CBaseEntity::vfunc137
int CBaseEntity::vfunc137()
{
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10026d70 size=0x3
// TARGET: sub_10026d70
void __stdcall sub_10026d70(int a)
{
}
// END FUNCTION

// FUNCTION: 0x10026d90 size=0x4
// TARGET: sub_10026d90
int sub_10026d90()
{
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10026db0 size=0x5
// TARGET: sub_10026db0
bool __stdcall sub_10026db0(int a)
{
	return true;
}
// END FUNCTION

// FUNCTION: 0x10026dd0 size=0x3
// TARGET: sub_10026dd0
void __stdcall sub_10026dd0(int a, int b)
{
}
// END FUNCTION

// FUNCTION: 0x10026df0 size=0x3
// TARGET: sub_10026df0
void __stdcall sub_10026df0(int a, int b)
{
}
// END FUNCTION

// FUNCTION: 0x10026e10 size=0x5
// TARGET: sub_10026e10
bool __stdcall sub_10026e10(int a)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x10026e30 size=0x5
// TARGET: sub_10026e30
bool __stdcall sub_10026e30(int a)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x10026e50 size=0x7
#include "CBaseEntity.h"

float CBaseEntity::vfunc152()
{
	return 0.0f;
}
// END FUNCTION

// FUNCTION: 0x10026e70 size=0x4c
#include "CBaseEntity.h"
#include "Vector.h"
extern Vector g_1070d1b0;
inline int VecNe(const Vector &a, const Vector &b)
{
    if (b.x == a.x && b.y == a.y && b.z == a.z)
        return 0;
    return 1;
}
int CBaseEntity::vfunc153()
{
    return VecNe(*(Vector *)m_vel3d4, g_1070d1b0) & 0xff;
}
// END FUNCTION

// FUNCTION: 0x10026ee0 size=0x3
// TARGET: sub_10026ee0
void __stdcall sub_10026ee0(int a)
{
}
// END FUNCTION

// FUNCTION: 0x10026f00 size=0x5
// TARGET: sub_10026f00
bool __stdcall sub_10026f00(int a)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x10026f20 size=0x21
bool __fastcall sub_100117d9(void *p);

struct CBaseEntityX
{
    int sub_10026f20();
};

// TARGET: sub_10026f20
int CBaseEntityX::sub_10026f20()
{
    if (sub_100117d9(this) && *((int *)((char *)this + 0x1fc)) == 0) {
        return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10026f60 size=0x3
// TARGET: sub_10026f60
unsigned char __stdcall sub_10026f60()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10026f80 size=0x1c
#include "CBaseEntity.h"
#include "CEntityVSlots.h"

// TARGET: CBaseEntity::vfunc166
bool CBaseEntity::vfunc166(CBaseEntity *pEnt)
{
	if (pEnt && !((CEntityVSlots *)pEnt)->slot164())
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x10026fb0 size=0x37
#include "CBaseEntity.h"
struct V10026fb0Comp {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual CBaseEntity *vfunc4();
};
struct V10026fb0Other {
	char pad[0x40];
	V10026fb0Comp *m_p40;
};
#define S8(n) virtual void s##n##a(); virtual void s##n##b(); virtual void s##n##c(); virtual void s##n##d(); virtual void s##n##e(); virtual void s##n##f(); virtual void s##n##g(); virtual void s##n##h();
struct V10026fb0This {
	S8(0) S8(1) S8(2) S8(3) S8(4) S8(5) S8(6) S8(7) S8(8) S8(9) S8(10) S8(11) S8(12) S8(13) S8(14) S8(15) S8(16) S8(17) S8(18) S8(19)
	virtual void t160(); virtual void t161(); virtual void t162(); virtual void t163(); virtual void t164(); virtual void t165();
	virtual void vfunc166(CBaseEntity *arg);
};
inline CBaseEntity *V10026fb0Instance(V10026fb0Other *pOther)
{
	if (pOther && pOther->m_p40)
		return pOther->m_p40->vfunc4();
	return 0;
}
void CBaseEntity::vfunc165(void *pOther)
{
	((V10026fb0This *)this)->vfunc166(V10026fb0Instance((V10026fb0Other *)pOther));
}
// END FUNCTION

// FUNCTION: 0x10027000 size=0x3
// TARGET: sub_10027000
int sub_10027000()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10027020 size=0x8
#include "CBaseEntity.h"

CBaseEntity *CBaseEntity::vfunc168()
{
	return vfunc167();
}
// END FUNCTION

// FUNCTION: 0x10027040 size=0x3
// TARGET: sub_10027040
void __stdcall sub_10027040(int a)
{
}
// END FUNCTION

// FUNCTION: 0x10027060 size=0x3
// TARGET: sub_10027060
void __stdcall sub_10027060(int a)
{
}
// END FUNCTION

// FUNCTION: 0x10027080 size=0x3
// TARGET: sub_10027080
void __stdcall sub_10027080(int a)
{
}
// END FUNCTION

// FUNCTION: 0x100270a0 size=0x1
// TARGET: sub_100270a0
void sub_100270a0()
{
}
// END FUNCTION

// FUNCTION: 0x100270c0 size=0x3
// TARGET: sub_100270c0
unsigned char __stdcall sub_100270c0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100270e0 size=0x3
// TARGET: sub_100270e0
int __stdcall sub_100270e0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10027100 size=0x3
// TARGET: sub_10027100
unsigned char __stdcall sub_10027100()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10027120 size=0x7
#include "CBaseEntity.h"
float CBaseEntity::vfunc190()
{
	return 0.0f;
}
// END FUNCTION

// FUNCTION: 0x10027140 size=0x3
// TARGET: sub_10027140
void __stdcall sub_10027140(int a)
{
}
// END FUNCTION

// FUNCTION: 0x10027160 size=0x14e
#include "CBaseEntity.h"
#include "TempVector.h"

struct CColView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7();
	virtual Vector *GetCollisionOrigin();
	virtual Vector *GetCollisionAngles(int a);
	virtual float *CollisionToWorldTransform();
	Vector m_vecMins;
	Vector m_vecMaxs;
	char m_pad1c[0x40 - 0x1c];
	int m_nSolidType;
	char m_usSolidFlags;
};

extern Vector g_1070d9d0;
extern float g_104454d0;
void sub_100087ba(const float *in, const float *matrix, float *out);

inline void VectorTransform(const Vector &in1, const float *matrix, Vector &out)
{
	sub_100087ba(&in1.x, matrix, &out.x);
}

// TARGET: CBaseEntity::vfunc192
Vector CBaseEntity::vfunc192()
{
	CColView *pCol = (CColView *)((char *)this + 0x270);
	Vector &vecResult = AllocTempVector();
	Vector &vecCenter = AllocTempVector();
	vecCenter.x = (pCol->m_vecMaxs.x - pCol->m_vecMins.x) * g_104454d0 + pCol->m_vecMins.x;
	vecCenter.y = (pCol->m_vecMaxs.y - pCol->m_vecMins.y) * g_104454d0 + pCol->m_vecMins.y;
	vecCenter.z = (pCol->m_vecMaxs.z - pCol->m_vecMins.z) * g_104454d0 + pCol->m_vecMins.z;
	if ((pCol->m_usSolidFlags & 0x80) == 0 && pCol->m_nSolidType != 2 && pCol->m_nSolidType != 0
		&& *pCol->GetCollisionAngles(0) != g_1070d9d0)
	{
		VectorTransform(vecCenter, pCol->CollisionToWorldTransform(), vecResult);
	}
	else
	{
		VectorAdd(vecCenter, *pCol->GetCollisionOrigin(), vecResult);
	}
	return vecResult;
}
// END FUNCTION

// FUNCTION: 0x10027330 size=0x3
// TARGET: sub_10027330
unsigned char __stdcall sub_10027330()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10027350 size=0x5
// TARGET: sub_10027350
bool __stdcall sub_10027350(int a, int b, int c, int d, int e)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x10027370 size=0x21
#include "Vector.h"

extern Vector g_1070d1b0;

struct CBaseEntityX
{
    void sub_10027370(Vector &out);
};

// TARGET: sub_10027370
void CBaseEntityX::sub_10027370(Vector &out)
{
    out = g_1070d1b0;
}
// END FUNCTION

// FUNCTION: 0x100273b0 size=0x5
// TARGET: sub_100273b0
bool __stdcall sub_100273b0(int a)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x100273d0 size=0x3
// TARGET: sub_100273d0
void __stdcall sub_100273d0(int a)
{
}
// END FUNCTION

// FUNCTION: 0x100273f0 size=0x3
// TARGET: sub_100273f0
void __stdcall sub_100273f0(int a)
{
}
// END FUNCTION

// FUNCTION: 0x10027410 size=0x3
// TARGET: sub_10027410
void __stdcall sub_10027410(int a, int b)
{
}
// END FUNCTION

// FUNCTION: 0x10027430 size=0x6
#include "CBaseEntity.h"
extern int g_1072b36c;

// TARGET: CBaseEntity::vfunc240
int CBaseEntity::vfunc240()
{
	return g_1072b36c;
}
// END FUNCTION

// FUNCTION: 0x10027450 size=0xf
#include "CBaseEntity.h"
int CBaseEntity::vfunc0(int a0)
{
    *(int *)((char *)this + 0x448) = *(int *)((char *)a0);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x10027470 size=0x7
#include "vampire_all.h"
unsigned int * CGlobalEntityList_Ent::v1()
{
    return (unsigned int *)((char *)this + 0x448);
}
// END FUNCTION

// FUNCTION: 0x10027490 size=0xa
#include "CBaseEntity.h"
// TARGET: CBaseEntity::vfunc116
int CBaseEntity::vfunc116() { return m_flags268 & 1; }
// END FUNCTION

// FUNCTION: 0x100274b0 size=0x7
#include "CBaseEntity.h"
// TARGET: CBaseEntity::vfunc198
float *CBaseEntity::vfunc198()
{
	return m_vel3d4;
}
// END FUNCTION

// FUNCTION: 0x100274d0 size=0x7e
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"

struct ICollSolid12
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual int GetSolidFlags();
};

int __fastcall sub_100274d0(CBaseEntity *self)
{
	const char *n;
	if (self) {
		n = self->m_name26c;
		if (!n)
			n = g_106b8540;
	} else
		n = "NULL ENTITY";
	g_109f3620[*g_109f3680].name = "CBaseEntity::GetSolidFlags";
	g_109f3620[*g_109f3680].file = n;
	g_109f3620[*g_109f3680].line = g_106b8540;
	++*g_109f3680;
	int solid = ((ICollSolid12 *)((char *)self + 0x270))->GetSolidFlags();
	--*g_109f3680;
	return solid;
}
// END FUNCTION

// FUNCTION: 0x10027570 size=0x7e
#include "CBaseEntity.h"
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct ICollSolid {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10();
    virtual int GetSolid();
};

int CBaseEntity::sub_10027570()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::GetSolid";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    int solid = ((ICollSolid *)((char *)this + 0x270))->GetSolid();
    --*g_109f3680;
    return solid;
}
// END FUNCTION

// FUNCTION: 0x10027610 size=0x7
#include "CBaseEntity.h"
char * CBaseEntity::vfunc2()
{
    return (char *)this + 0x270;
}
// END FUNCTION

// FUNCTION: 0x10027630 size=0x7
#include "CBaseEntity.h"
char * CBaseEntity::vfunc3()
{
    return (char *)this + 0x2d4;
}
// END FUNCTION

// FUNCTION: 0x10027650 size=0x3
#include "CBaseEntity.h"
void * CBaseEntity::vfunc4()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x10027670 size=0x1
#include "CPhysForce.h"
void CPhysForce::vfunc242()
{
}
// END FUNCTION

// FUNCTION: 0x10027690 size=0x1e
#include "CPhysForce.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysForce::vfunc5
CBaseEntity *CPhysForce::vfunc5(unsigned int flags)
{
	sub_10014470();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100276c0 size=0x2a
#include "CPhysForce.h"

struct IPhysicsEnvironmentStub
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23(); virtual void vfunc24();
	virtual void vfunc25(); virtual void vfunc26(); virtual void vfunc27(); virtual void vfunc28(); virtual void vfunc29();
	virtual void vfunc30(); virtual void vfunc31(); virtual void vfunc32(); virtual void vfunc33(); virtual void vfunc34();
	virtual void vfunc35(); virtual void vfunc36(); virtual void vfunc37(); virtual void vfunc38(); virtual void vfunc39();
	virtual void DestroySpring(void *pSpring);
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

extern IPhysicsEnvironmentStub *g_10723940;
extern void *vt_10445024[];

// TARGET: CPhysForce::sub_100276c0
void CPhysForce::sub_100276c0()
{
	*(void ***)this = vt_10445024;
	if (m_pController)
		g_10723940->DestroySpring(m_pController);
	((CBaseEntityDtor *)this)->sub_1009df20();
}
// END FUNCTION

// FUNCTION: 0x10027700 size=0x2a
#include "CPhysForce.h"

// TARGET: CPhysForce::vfunc103
void CPhysForce::vfunc103()
{
    unsigned int flags = *(unsigned int *)((char *)this + 0x204);
    if ((flags & 8) != 0) {
        *(int *)((char *)this + 0x468) = 1;
    } else {
        *(int *)((char *)this + 0x468) = 3;
    }
    if ((flags & 1) != 0) {
        sub_1000b5d2();
    }
}
// END FUNCTION

// FUNCTION: 0x10027740 size=0x27
// TARGET: CPhysForce::vfunc130
#include "CPhysForce.h"

void CPhysForce::vfunc130(int a)
{
	CBaseEntity::vfunc130(a);
	if (m_pController)
		((CPhysForceController *)m_pController)->vfunc1(&m_Motion);
}
// END FUNCTION

// FUNCTION: 0x10027780 size=0x92
#include "CPhysForce.h"
#include "CGlobalEntityList.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct SEnt {
	S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8) S10(a9)
	S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6) S10(b7) S10(b8) S10(b9)
	S10(c0) S10(c1) S10(c2) S10(c3)
	virtual void d0(); virtual void d1();
	virtual void vfunc242();
};

extern CGlobalEntityList *g_10566458;
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];

void CPhysForce::vfunc113()
{
	CBaseEntity::vfunc113();
	unsigned int h = m_hAttached;
	CGlobalEntityList_Slot *pSlot;
	if (h == (unsigned int)-1
		|| (pSlot = &g_10566458->m_Slots[h & 0x1fff], pSlot->m_Serial != (int)(h >> 13))
		|| pSlot->m_pEntity == 0) {
		const char *name = m_pszAttachName;
		if (!name)
			name = g_106b8540;
		CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, name, 0, 0);
		if (pEnt)
			m_hAttached = *pEnt->vfunc1();
		else
			m_hAttached = (unsigned int)-1;
	}
	((SEnt *)this)->vfunc242();
	if (m_pController)
		sub_10027960();
}
// END FUNCTION

// FUNCTION: 0x10027850 size=0x8
namespace lifted {
int sub_1000b5d2();
}
int __stdcall sub_10027850(int a0)
{
    return lifted::sub_1000b5d2();
}
// END FUNCTION

// FUNCTION: 0x10027870 size=0x8
namespace lifted {
int sub_10001a9b();
}
int __stdcall sub_10027870(int a0)
{
    return lifted::sub_10001a9b();
}
// END FUNCTION

// FUNCTION: 0x10027890 size=0x31
struct inputdata_t { char pad[8]; float m_fl; char pad2[0xc]; int m_fieldType; };

struct S10027890 {
	void sub_1000d8a5(float f);
	// TARGET: S10027890::sub_10027890
	void sub_10027890(inputdata_t &in);
};

void S10027890::sub_10027890(inputdata_t &in)
{
	float f;
	if (in.m_fieldType == 1)
		f = in.m_fl;
	else
		f = 0.0f;
	sub_1000d8a5(f);
}
// END FUNCTION

// FUNCTION: 0x100278e0 size=0x52
#include "CPhysForce.h"
#include "globalvars.h"
void sub_10001a9b();
void CPhysForce::sub_100278e0()
{
	if (m_pController == 0) {
		sub_10027960();
		if (m_flTimeout != 0.0f) {
			sub_100ac610(gpGlobals->curtime + m_flTimeout, 0);
			sub_100ac4e0((int)sub_10001a9b, 0, 0);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10027960 size=0xd0
// TARGET: CPhysForce::sub_10027960
#include "CPhysForce.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
struct CPhysObjectX {
	virtual void s0(); virtual void s1();
	virtual void s2();
};
struct CPhysControllerX {
	virtual void s0(); virtual void s1();
	virtual void s2(CPhysObjectX *pObject);
};
struct CPhysEnvX {
	SV10(0) SV10(1) SV10(2) SV(30) SV(31) SV(32) SV(33) SV(34) SV(35) SV(36) SV(37) SV(38)
	virtual CPhysControllerX *s39(void *pMotion);
};
struct CPhysForceHostX {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15) SV10(16) SV10(17) SV10(18) SV10(19)
	SV10(20) SV10(21) SV10(22) SV10(23)
	SV(240)
	virtual void s241(CPhysObjectX *pObject, CPhysForceVec3 *pStart, CPhysForceVec3 *pEnd);
};
extern CPhysEnvX *g_10723940;

struct CAttachedEntX {
	char m_pad[0x36c];
	CPhysObjectX *m_pPhysics;	// 0x36c
};

static inline CAttachedEntX *ResolveAttached(unsigned int h)
{
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *slot = &g_10566458->m_Slots[h & 0x1fff];
		if (slot->m_Serial == (int)(h >> 13))
			return (CAttachedEntX *)slot->m_pEntity;
	}
	return 0;
}

namespace block_10025f00 {
struct CPhysForceMotionUnit : CConstantForceController { void sub_10025f00(const CPhysForceVec3 *pStart, const CPhysForceVec3 *pEnd); };
void CPhysForceMotionUnit::sub_10025f00(const CPhysForceVec3 *pStart, const CPhysForceVec3 *pEnd)
{
	m_vStart.x = pStart->x;
	m_vStart.y = pStart->y;
	m_vStart.z = pStart->z;
	m_vEnd.x = pEnd->x;
	m_vEnd.y = pEnd->y;
	m_vEnd.z = pEnd->z;
	m_vStart2.x = pStart->x;
	m_vStart2.y = pStart->y;
	m_vStart2.z = pStart->z;
	m_vEnd2.x = pEnd->x;
	m_vEnd2.y = pEnd->y;
	m_vEnd2.z = pEnd->z;
}
}
using namespace block_10025f00;

void CPhysForce::sub_10027960()
{
	sub_100a0bc0();
	if (ResolveAttached(*(unsigned int *)&m_hAttached)) {
		CPhysObjectX *pPhysics = ResolveAttached(*(volatile unsigned int *)&m_hAttached)->m_pPhysics;
		if (pPhysics) {
			CPhysForceVec3 vecA;
			CPhysForceVec3 vecB;
			((CPhysForceHostX *)this)->s241(pPhysics, &vecB, &vecA);
			((CPhysForceMotionUnit *)&m_Motion)->sub_10025f00(&vecB, &vecA);
			CPhysControllerX *pController = g_10723940->s39(&m_Motion);
			m_pController = pController;
			pController->s2(pPhysics);
			pPhysics->s2();
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10027a70 size=0xb5
#include "CBaseEntity.h"

struct EngX {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(int a);
};
struct PhysX { virtual void v0(); virtual void v1(); virtual void v2(); };
struct EntInfo { CBaseEntity *ent; int serial; int pad; };
extern EngX *g_10723940;
extern char *g_10566458;

struct CUnknown10027a70 : CBaseEntity {
	void sub_10027a70();
	void sub_100ac610(float t, const char *ctx);
};

void CUnknown10027a70::sub_10027a70()
{
	int h450 = *(int *)((char *)this + 0x450);
	if (h450) {
		g_10723940->v40(h450);
		*(int *)((char *)this + 0x450) = 0;
		sub_100ac4e0(0, 0, 0);
		sub_100ac610(-1.0f, 0);
		unsigned int h = *(unsigned int *)((char *)this + 0x460);
		if (h != 0xffffffff) {
			EntInfo *e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff);
			if (e->serial == (h >> 13) && e->ent) {
				unsigned int h2 = *(volatile unsigned int *)((char *)this + 0x460);
				CBaseEntity *p;
				if (h2 != 0xffffffff) {
					EntInfo *e2 = (EntInfo *)(g_10566458 + 4) + (h2 & 0x1fff);
					if (e2->serial == (h2 >> 13))
						p = e2->ent;
					else
						p = 0;
				} else
					p = 0;
				PhysX *obj = *(PhysX **)((char *)p + 0x36c);
				if (obj)
					obj->v2();
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10027b60 size=0x31
#include "CPhysForce.h"
void CPhysForce::sub_10027b60(float flScale)
{
	if (!m_pController)
		sub_100278e0();
	m_Motion.sub_10025f80(flScale);
	((CPhysForceController *)m_pController)->vfunc7();
}
// END FUNCTION

// FUNCTION: 0x10027bb0 size=0x49
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_10007810(GP *);
extern int vt_104454dc;
extern char g_1053884c[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: phys_thruster
DLL_EXPORT GP *phys_thruster()
{
	GP *p = (GP *)sub_1000db89(0x4a8);
	if (p) {
		sub_10007810(p);
		*(int **)p = &vt_104454dc;
	} else {
		p = 0;
	}
	p->name(g_1053884c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10027c20 size=0x6
#include "datamap.h"
#include "CPhysThruster.h"
namespace lifted {
extern char g_10537024;
}
datamap_t *CPhysThruster::vfunc82()
{
    return (datamap_t *)&lifted::g_10537024;
}
// END FUNCTION

// FUNCTION: 0x10027c40 size=0x5
int sub_10027c80(void);
int g_106b8548 = ((int (*)(int))sub_10027c80)(0);
// END FUNCTION

// FUNCTION: 0x10027c80 size=0x1a
namespace lifted {
extern int g_10537024;
extern int g_10537028;
extern char g_1053706c;
}
int sub_10027c80()
{
    lifted::g_10537028 = 1;
    lifted::g_10537024 = (int)&lifted::g_1053706c;
    return (int)&lifted::g_10537024;
}
// END FUNCTION

// FUNCTION: 0x10027cb0 size=0xe4
#include "CPhysThruster.h"
#include "CEHandleGet.h"

#define SV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

// the entity vtable up to slot 217 (GetAbsOrigin)
struct CEntitySlotsView
{
	SV10(a0) SV10(a1) SV10(a2) SV10(a3) SV10(a4) SV10(a5) SV10(a6) SV10(a7) SV10(a8) SV10(a9)
	SV10(b0) SV10(b1) SV10(b2) SV10(b3) SV10(b4) SV10(b5) SV10(b6) SV10(b7) SV10(b8) SV10(b9)
	SV10(c0)
	virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14();
	virtual void u15(); virtual void u16();
	virtual Vector *vfunc217();
};

extern Vector g_1070d1b0;

void CPhysThruster::vfunc242()
{
	if (!EHandle_Get(m_hAttached))
		return;
	if (m_flags204 & 0x20)
	{
		m_vecOffset = g_1070d1b0;
		return;
	}
	CEntitySlotsView *pAttached = (CEntitySlotsView *)EHandle_Get(m_hAttached);
	Vector *pAttachedOrigin = pAttached->vfunc217();
	m_vecOffset = *((CEntitySlotsView *)this)->vfunc217() - *pAttachedOrigin;
}
// END FUNCTION

// FUNCTION: 0x10027de0 size=0x18c
#include "CBaseEntity.h"
#include "CPhysThruster.h"
#include "IPhysicsObject.h"
#include "CEntityVSlots.h"
#include "CUnknown101d1460.h"
#include "CEHandleGet.h"
#include "QAngle.h"

struct CMatrix10027de0 : CUnknown101d1460
{
	void sub_10027fe0(Vector *pOut, const Vector *pIn);
	void sub_10028060(Vector *pOut, const Vector *pIn);
	void sub_100280e0(Vector *pOut, const Vector *pIn);
};

void sub_10139550(const QAngle &angles, Vector *pForward);

void CPhysThruster::vfunc241(IPhysicsObject *pPhys, Vector *pLinear, Vector *pAngular)
{
	Vector vecForce;
	sub_10139550(*(const QAngle *)((CEntityVSlots *)this)->slot221(), &vecForce);
	vecForce = vecForce * m_flForce;
	if (m_flags204 & 0x10)
		vecForce = vecForce * pPhys->vfunc12();
	{
		CMatrix10027de0 matAttached;
		matAttached.sub_101d1530((CBaseEntity *)EHandle_Get(m_hAttached), 0);
		Vector vecOffset;
		matAttached.sub_10027fe0(&vecOffset, &m_vecOffset);
		{
			Vector vecTemp;
			matAttached.sub_10028060(&vecTemp, &vecForce);
			vecForce = vecTemp;
		}
		pPhys->vfunc33(&vecForce, &vecOffset, pLinear, pAngular);
		if (m_flags204 & 8)
		{
			Vector vecLocal;
			matAttached.sub_100280e0(&vecLocal, pLinear);
			*pLinear = vecLocal;
		}
	}
	if (!(m_flags204 & 2))
	{
		pLinear->x = 0;
		pLinear->y = 0;
		pLinear->z = 0;
	}
	if (!(m_flags204 & 4))
	{
		pAngular->x = 0;
		pAngular->y = 0;
		pAngular->z = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10027fe0 size=0x5a
#include "CUnknown101d1460.h"
void CUnknown101d1460::sub_10027fe0(float *pOut, const float *pIn)
{
	float z = m_m[10] * pIn[2] + m_m[8] * pIn[0] + m_m[9] * pIn[1] + m_m[11];
	float y = m_m[6] * pIn[2] + m_m[4] * pIn[0] + m_m[5] * pIn[1] + m_m[7];
	float x = m_m[2] * pIn[2] + m_m[1] * pIn[1] + pIn[0] * m_m[0] + m_m[3];
	pOut[0] = x;
	pOut[1] = y;
	pOut[2] = z;
}
// END FUNCTION

// FUNCTION: 0x10028060 size=0x51
#include "CUnknown101d1460.h"
void CUnknown101d1460::sub_10028060(float *pOut, const float *pIn)
{
	float z = m_m[10] * pIn[2] + m_m[8] * pIn[0] + m_m[9] * pIn[1];
	float y = m_m[6] * pIn[2] + m_m[4] * pIn[0] + m_m[5] * pIn[1];
	float x = m_m[2] * pIn[2] + m_m[1] * pIn[1] + pIn[0] * m_m[0];
	pOut[0] = x;
	pOut[1] = y;
	pOut[2] = z;
}
// END FUNCTION

// FUNCTION: 0x100280e0 size=0x51
#include "CUnknown101d1460.h"
void CUnknown101d1460::sub_100280e0(float *pOut, const float *pIn)
{
	float z = m_m[10] * pIn[2] + m_m[2] * pIn[0] + m_m[6] * pIn[1];
	float y = m_m[9] * pIn[2] + m_m[1] * pIn[0] + m_m[5] * pIn[1];
	float x = m_m[8] * pIn[2] + m_m[4] * pIn[1] + pIn[0] * m_m[0];
	pOut[0] = x;
	pOut[1] = y;
	pOut[2] = z;
}
// END FUNCTION

// FUNCTION: 0x10028160 size=0x6
#include "datamap.h"
#include "CPhysTorque.h"
namespace lifted {
extern char g_10537098;
}
datamap_t *CPhysTorque::vfunc82()
{
    return (datamap_t *)&lifted::g_10537098;
}
// END FUNCTION

// FUNCTION: 0x10028180 size=0x5
int sub_100281c0(void);
int g_106b8558 = ((int (*)(int))sub_100281c0)(0);
// END FUNCTION

// FUNCTION: 0x100281c0 size=0x1a
namespace lifted {
extern int g_10537098;
extern int g_1053709c;
extern char g_105370dc;
}
int sub_100281c0()
{
    lifted::g_1053709c = 1;
    lifted::g_10537098 = (int)&lifted::g_105370dc;
    return (int)&lifted::g_10537098;
}
// END FUNCTION

// FUNCTION: 0x100281f0 size=0x49
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_10007810(GP *);
extern int vt_10445974;
extern char g_1053887c[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: phys_torque
DLL_EXPORT GP *phys_torque()
{
	GP *p = (GP *)sub_1000db89(0x4a8);
	if (p) {
		sub_10007810(p);
		*(int **)p = &vt_10445974;
	} else {
		p = 0;
	}
	p->name(g_1053887c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10028260 size=0x5f
#include "CPhysTorque.h"
#include "CPointEntity.h"
void sub_101cf680(Vector *, float);

void CPhysTorque::sub_10028260()
{
	m_fFlags204 = (m_fFlags204 & ~2) | 0x14;
	Vector *pOrigin = ((Vector *(__fastcall *)(CPhysTorque *))(*(void ***)this)[217])(this);
	m_vecAxis -= *pOrigin;
	VectorNormalize(m_vecAxis);
	sub_101cf680(&m_vecAxis, 0.01f);
	((CPointEntity *)this)->sub_101c0820();
}
// END FUNCTION

// FUNCTION: 0x100282e0 size=0x75
#include "CPhysTorque.h"
#include "CPhysObjSlots.h"

void sub_10138460(const Vector *pIn, const float *pMatrix, Vector *pOut);

void CPhysTorque::sub_100282e0(CPhysObjSlots *pPhys, Vector &linear, Vector &angular)
{
	linear.Init();

	float matrix[12];
	pPhys->slot38(matrix);

	Vector axis_ws;
	sub_10138460(&m_vecAxis, matrix, &axis_ws);

	angular = axis_ws * m_flScale;
}
// END FUNCTION

// FUNCTION: 0x10028380 size=0x5
int sub_100283c0(void);
int g_106b854c = ((int (*)(int))sub_100283c0)(0);
// END FUNCTION

// FUNCTION: 0x100283c0 size=0x1a
namespace lifted {
extern int g_10537108;
extern int g_1053710c;
extern char g_1053714c;
}
int sub_100283c0()
{
    lifted::g_1053710c = 8;
    lifted::g_10537108 = (int)&lifted::g_1053714c;
    return (int)&lifted::g_10537108;
}
// END FUNCTION

// FUNCTION: 0x100283f0 size=0x239
#include "utlmemory.h"
#include "CMotorController.h"
#include "IPhysicsObject.h"
#include "matrix3x4_t.h"
#include <math.h>

extern Vector g_1070d1b0;
void sub_10138460(const float *pIn, const matrix3x4_t *pMat, float *pOut);

static inline float FAbs607(float f) { return (float)fabs(f); }

// TARGET: CMotorController::vfunc0
int CMotorController::vfunc0(void *pController, int pObject, float deltaTime, Vector &linear, Vector &angular)
{
	linear = g_1070d1b0;
	Vector axis = g_1070d1b0;
	angular = axis;
	if (m_flSpeed == 0.0f)
		return 0;

	IPhysicsObject *pObj = (IPhysicsObject *)pObject;

	matrix3x4_t mat;
	pObj->vfunc38((float *)&mat);

	Vector angVel;
	pObj->vfunc40(0, angVel.Base());
	sub_10138460(m_vecAxis.Base(), &mat, axis.Base());

	float flAxial = axis.x * angVel.x + angVel.y * axis.y + angVel.z * axis.z;

	Vector inertia;
	float *pInertia = pObj->vfunc14(inertia.Base());
	float flInertia = FAbs607(axis.x * pInertia[0]) + FAbs607(axis.z * pInertia[2]) + FAbs607(axis.y * pInertia[1]);

	float flValue = (m_flSpeed - flAxial) * m_flGain * flInertia;

	if ((float)fabs(m_flLastApplied) > 0.0f)
	{
		float flDiff = flAxial - m_flLastAxial;
		if ((m_flSpeed - flAxial) * flDiff > 0.0f)
		{
			float flT = flDiff / m_flLastApplied;
			if (flT > 1.0f)
				flT = 1.0f;
			else if (flT < 0.0f)
				flT = 0.0f;
			flValue += (1.0f - flT) * m_flDamping * m_flLastValue;
		}
		else if (flAxial != 0.0f && (float)fabs(flDiff / m_flLastApplied) < 0.05)
		{
			flValue += m_flDamping * m_flLastValue;
		}
	}

	if (m_flMaxValue != 0.0f)
	{
		if (flValue > m_flMaxValue)
			flValue = m_flMaxValue;
		else if (flValue < -m_flMaxValue)
			flValue = -m_flMaxValue;
	}

	m_flLastValue = flValue;
	m_flLastAxial = flAxial;
	m_flLastApplied = flValue / flInertia;

	angular = axis * flValue;
	return 2;
}
// END FUNCTION

// FUNCTION: 0x100286c0 size=0x6
#include "datamap.h"
#include "CPhysMotor.h"
namespace lifted {
extern char g_105372ac;
}
datamap_t *CPhysMotor::vfunc82()
{
    return (datamap_t *)&lifted::g_105372ac;
}
// END FUNCTION

// FUNCTION: 0x100286e0 size=0x5
int * sub_10028720(void);
int * g_106b855c = ((int * (*)(int))sub_10028720)(0);
// END FUNCTION

// FUNCTION: 0x10028720 size=0x227
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern int g_105372ac[2];
extern int g_10537108[];
int *sub_10045d90(int);
void sub_1000c810();
void sub_10011d38();
void sub_10003990();

int *sub_10028720()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_nameAttach", {0x450, 0}, 1, 6, "attach1" },
        { 12, "m_attachedObject", {0x454, 0}, 1, 2 },
        { 1, "m_spinUp", {0x458, 0}, 1, 6, "spinup" },
        { 1, "m_additionalAcceleration", {0x45c, 0}, 1, 6, "addangaccel" },
        { 1, "m_targetSpeed", {0x460, 0}, 1, 6, "speed" },
        { 1, "m_angularAcceleration", {0x464, 0}, 1, 2 },
        { 15, "m_lastTime", {0x468, 0}, 1, 2 },
        { 10, "m_pHinge", {0x46c, 0}, 1, 2, 0, (ISaveRestoreOps *)sub_10045d90(5), 0 },
        { 10, "m_pController", {0x470, 0}, 1, 2, 0, (ISaveRestoreOps *)sub_10045d90(8), 0 },
        { 1, "InputSetTargetSpeed", {0, 0}, 1, 8, "SetSpeed", 0, (void *)sub_1000c810 },
        { 0, "InputTurnOn", {0, 0}, 1, 8, "TurnOn", 0, (void *)sub_10011d38 },
        { 0, "InputTurnOff", {0, 0}, 1, 8, "TurnOff", 0, (void *)sub_10003990 },
        { 9, "m_motor", {0x474, 0}, 1, 2, 0, 0, 0, (datamap_t *)g_10537108 },
    };
    g_105372ac[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105372ac[0] = (int)&dataDesc[1];
    return g_105372ac;
}
// END FUNCTION

// FUNCTION: 0x100289e0 size=0x5f
#include "platform.h"
#include "CHumanoidRec.h"
#include "utlmemory.h"
extern int vt_104462a8[];
extern int vt_10445e1c[];
void *sub_100aa720(int size);
#define V1(n) virtual void v##n##0(); virtual void v##n##1(); virtual void v##n##2(); virtual void v##n##3(); virtual void v##n##4(); virtual void v##n##5(); virtual void v##n##6(); virtual void v##n##7(); virtual void v##n##8(); virtual void v##n##9();
struct CPhysMotorFactoryView {
	V1(0) V1(1) V1(2) V1(3) V1(4) V1(5) V1(6) V1(7) V1(8) V1(9)
	virtual void v100(); virtual void v101(); virtual void v102(); virtual void v103(); virtual void v104(); virtual void v105();
	virtual void PostConstructor(const char *name);
	void sub_100090fc(char bAddAsDefault);
	CPhysMotorFactoryView *Construct()
	{
		sub_100090fc(0);
		*(int *)((char *)this + 0x454) = -1;
		*(int *)((char *)this + 0x474) = (int)vt_104462a8;
		*(int *)this = (int)vt_10445e1c;
		return this;
	}
};
DLL_EXPORT void *phys_motor()
{
	CPhysMotorFactoryView *m = (CPhysMotorFactoryView *)sub_100aa720(0x4a0);
	CPhysMotorFactoryView *p = m ? m->Construct() : 0;
	p->PostConstructor("phys_motor");
	return p;
}
// END FUNCTION

// FUNCTION: 0x10028a60 size=0x28
#include <math.h>

struct CUnk10028a60
{
    char pad0000[0x458];
    float m_f458;
    char pad045c[4];
    float m_f460;
    float m_f464;

    void sub_10028a60();
};

// TARGET: CUnk10028a60::sub_10028a60
void CUnk10028a60::sub_10028a60()
{
    float v;
    if (m_f458 != 0.0f)
        v = m_f460 / m_f458;
    else
        v = m_f460;
    m_f464 = (float)fabs(v);
}
// END FUNCTION

// FUNCTION: 0x10028aa0 size=0x51
#include "CPhysMotor.h"
#include "inputdata_t.h"

struct CUnk10028a60
{
	void sub_10028a60();	// stub 0x1000d959
};

static inline float VariantFloat(const variant_t &v)
{
	if (v.fieldType == 1)
		return v.flValue;
	return 0.0f;
}

void CPhysMotor::sub_10028aa0(inputdata_t *pInput)
{
	if (VariantFloat(pInput->value) != m_flTarget460) {
		m_flTarget460 = VariantFloat(pInput->value);
		sub_10028b20();
		((CUnk10028a60 *)this)->sub_10028a60();
	}
}
// END FUNCTION

// FUNCTION: 0x10028b20 size=0x30
#include "CPhysMotor.h"
#include "globalvars.h"
struct SMotorSub
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3();
	virtual void a4(); virtual void a5(); virtual void a6(); virtual void vfunc7();
};
// TARGET: CPhysMotor::sub_10028b20
void CPhysMotor::sub_10028b20()
{
	sub_100ac610(gpGlobals->curtime, 0);
	m_flLastTime468 = gpGlobals->curtime;
	(*(SMotorSub **)((char *)this + 0x470))->vfunc7();
}
// END FUNCTION

// FUNCTION: 0x10028b60 size=0x8
namespace lifted {
int sub_10011f59();
}
int __stdcall sub_10028b60(int a0)
{
    return lifted::sub_10011f59();
}
// END FUNCTION

// FUNCTION: 0x10028b80 size=0x19
namespace lifted {
int __stdcall sub_1000326f(int, int);
}
struct CUnknown10028b80 { int sub_10028b80(int); };
int CUnknown10028b80::sub_10028b80(int a0)
{
    *(int *)((char *)this + 0x478) = 0;
    return lifted::sub_1000326f(-1082130432, 0);
}
// END FUNCTION

// FUNCTION: 0x10028bb0 size=0x38
#include "CPhysMotor.h"
#include "IPhysicsEnvironment.h"

extern IPhysicsEnvironment *g_10723940;
extern char g_10445e1c[];

// TARGET: CPhysMotor::sub_10028bb0
void CPhysMotor::sub_10028bb0()
{
	*(void **)this = g_10445e1c;
	g_10723940->vfunc23(m_pPhysObject46c);
	g_10723940->vfunc40(m_pController470);
	sub_1000cb8a();
}
// END FUNCTION

// FUNCTION: 0x10028c00 size=0x1e
#include "CPhysMotor.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysMotor::vfunc5
CPhysMotor *CPhysMotor::vfunc5(unsigned int flags)
{
	sub_10013b33();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10028c30 size=0x47
#include "CPhysMotor.h"
void sub_101cf680(Vector *v, float f);
// TARGET: CPhysMotor::vfunc103
void CPhysMotor::vfunc103()
{
	m_vec480 -= *vfunc220();
	VectorNormalize(m_vec480);
	sub_101cf680(&m_vec480, 0.01f);
}
// END FUNCTION

// FUNCTION: 0x10028ca0 size=0x54
#include "CBaseEntity.h"
#include "CPhysMotor.h"
#include "globalvars.h"
struct SMotorObj { virtual void v0(); virtual void v1(); virtual void v2(); };
// TARGET: CPhysMotor::sub_10028ca0
void CPhysMotor::sub_10028ca0()
{
    CBaseEntity *pEnt = m_h454.Get();
    if (pEnt) {
        SMotorObj *pObj = (SMotorObj *)pEnt->m_obj36c;
        if (pObj) {
            pObj->v2();
            sub_100ac610(gpGlobals->curtime, 0);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10028d20 size=0x2dd
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CPhysMotor.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "CGlobalEntityList.h"
#include "CUnknown10029100.h"
#include <math.h>

extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
extern void *g_10723938;
void sub_10138460(Vector *scale, float *matrix, Vector *out);
void sub_10158c00(void *phys, void *env);

class CUnknown10029130
{
public:
	void sub_10029130(int a, int b, int c);
	int m_n0000;
	int m_n0004;
	int m_n0008;
	int m_n000c;
};

class CMotorCtrlView
{
public:
	virtual void v0();
	virtual void v1(void *pCtrl);
	virtual void v2(void *pPhys);
	virtual void v3(void *pMotor);
};

class CMotorPhysObjView
{
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
	virtual Vector v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37();
	virtual void v38(float *pMatrix);
};

class CMotorPhysEnvView
{
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12();
	virtual CMotorCtrlView *v13(void *pEnv, void *pPhys, int nZero, void *pParams);
	virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38();
	virtual CMotorCtrlView *v39(void *pCtrl);
};
extern CMotorPhysEnvView *g_10723940;

struct CMotorEntView
{
	char m_pad0000[0x36c];
	CMotorPhysObjView *m_pPhys36c;
};

struct CMotorParams
{
	Vector m_vecOrigin;
	Vector m_vecScale;
	CUnknown10029130 m_a;
	CUnknown10029100 m_b;
};

inline float FloatMakePositive(vec_t f)
{
	return (float)fabs(f);
}

inline float DotProductAbs(const Vector &v0, const Vector &v1)
{
	return FloatMakePositive(v0.x * v1.x) + FloatMakePositive(v0.y * v1.y) + FloatMakePositive(v0.z * v1.z);
}

// TARGET: CPhysMotor::vfunc113
void CPhysMotor::vfunc113()
{
	((CBaseEntity *)this)->CBaseEntity::vfunc113();
	if (g_10566458->sub_100290c0((const unsigned int *)&m_h454) == 0)
	{
		CBaseEntity *pTarget = g_106eb5d8.sub_100f7770(0, m_pszTargetName450 ? m_pszTargetName450 : g_106b8540, 0, 0);
		if (pTarget && ((CEntityVSlots *)pTarget)->slot94() == 7)
		{
			*(unsigned int *)&m_h454 = *((CEntityVSlots *)pTarget)->slot1();
			CMotorPhysObjView *pPhys = ((CMotorEntView *)g_10566458->sub_100290c0((const unsigned int *)&m_h454))->m_pPhys36c;
			sub_10028a60();
			float matrix[12];
			pPhys->v38(matrix);
			Vector motorAxis_ls;
			sub_10138460(&m_vec480, matrix, &motorAxis_ls);
			m_fl47c = DotProductAbs(pPhys->v14(), motorAxis_ls) * (m_flRate464 + m_fl45c) * m_fl48c;
			m_fl49c = 1.0f;
		}
	}
	if (m_h454.Get())
	{
		CMotorPhysObjView *pPhys = ((CMotorEntView *)m_h454.Get())->m_pPhys36c;
		if (m_flags204 & 4)
		{
			if (!m_pPhysObject46c)
			{
				CMotorParams params;
				params.m_vecOrigin.x = 0;
				params.m_vecOrigin.y = 0;
				params.m_vecOrigin.z = 0;
				params.m_vecScale.x = 0;
				params.m_vecScale.y = 0;
				params.m_vecScale.z = 0;
				params.m_a.sub_10029130(0, 0, 0);
				params.m_b.sub_10029100();
				params.m_vecScale = m_vec480;
				params.m_vecOrigin = *vfunc220();
				CMotorCtrlView *pCtrl = g_10723940->v13(g_10723938, pPhys, 0, &params);
				m_pPhysObject46c = pCtrl;
				pCtrl->v3(this);
			}
			if (m_flags204 & 2)
				sub_10158c00(pPhys, g_10723938);
		}
		else
			m_pPhysObject46c = 0;
		if (!m_pController470)
		{
			CMotorCtrlView *pCtrl = g_10723940->v39(m_ctrl474);
			m_pController470 = pCtrl;
			pCtrl->v2(((CMotorEntView *)m_h454.Get())->m_pPhys36c);
			if (m_flags204 & 1)
				sub_10028ca0();
		}
	}
	if (m_pController470)
		((CMotorCtrlView *)m_pController470)->v1(m_ctrl474);
}
// END FUNCTION

// FUNCTION: 0x100290c0 size=0x2b
#include "CUnknown100290c0.h"

// TARGET: CUnknown100290c0::sub_100290c0
unsigned int CUnknown100290c0::sub_100290c0(unsigned int *pHandle)
{
    unsigned int h = *pHandle;
    if (h != 0xffffffff) {
        CUnknown100290c0Slot *pSlot = &m_Slots[h & 0x1fff];
        if (pSlot->m_Serial == (int)(h >> 13)) {
            return pSlot->m_Value;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10029100 size=0x13
struct CUnknown10029100 {
    float m_f0;
    int m_n4;
    int m_n8;
    unsigned char m_b12;
    void sub_10029100();
};

// TARGET: sub_10029100
void CUnknown10029100::sub_10029100()
{
    m_f0 = 1.0f;
    m_n4 = 0;
    m_n8 = 0;
    m_b12 = 1;
}
// END FUNCTION

// FUNCTION: 0x10029130 size=0x1e
struct CUnknown10029130 { int sub_10029130(int, int, int); };
int CUnknown10029130::sub_10029130(int a0, int a1, int a2)
{
    *(int *)this = a0;
    *(int *)((char *)this + 4) = a1;
    *(int *)((char *)this + 8) = 0;
    *(int *)((char *)this + 0xc) = a2;
    return a2;
}
// END FUNCTION

// FUNCTION: 0x10029160 size=0x7a
#include "CPhysMotor.h"

float sub_10008fe9(float a, float b, float c);

void CPhysMotor::vfunc134()
{
	float amount = (gpGlobals->curtime - m_flLastTime468) * m_flRate464;
	float current = m_flCurrent478;
	float target = m_flTarget460;
	m_flCurrent478 = sub_10008fe9(target, current, amount);
	m_flLastTime468 = gpGlobals->curtime;
	if (m_flCurrent478 != m_flTarget460)
		sub_100ac610(gpGlobals->curtime, 0);
}
// END FUNCTION

// FUNCTION: 0x10029200 size=0x43
#include "platform.h"
#include "CKeepUpright.h"
void *sub_100aa720(int size);
extern char g_1053896c[];

// TARGET: phys_keepupright
DLL_EXPORT CBaseEntity *phys_keepupright()
{
	void *mem = sub_100aa720(0x480);
	CKeepUpright *p;
	if (mem)
		p = ((CKeepUpright *)mem)->sub_10029610();
	else
		p = 0;
	p->vfunc106(g_1053896c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10029270 size=0x6
#include "CKeepUpright.h"
#include "datamap.h"
namespace lifted {
extern char g_10537530;
}
datamap_t * CKeepUpright::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10537530);
}
// END FUNCTION

// FUNCTION: 0x10029290 size=0x5
int * sub_100292d0(void);
int * g_106b8550 = ((int * (*)(int))sub_100292d0)(0);
// END FUNCTION

// FUNCTION: 0x100292d0 size=0x260
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
ISaveRestoreOps *sub_10045d90(int);
void sub_1000826a();
void sub_100127c4();
extern int g_10537530[2];
int *sub_100292d0()
{
    static typedescription_t dataDesc[] = {
        { 0 },
        { 3, "m_worldGoalAxis", {0x454, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_localTestAxis", {0x460, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_pController", {0x46c, 0}, 1, 2, 0, sub_10045d90(8), 0 },
        { 2, "m_nameAttach", {0x470, 0}, 1, 6, "attach1", 0, 0 },
        { 0xc, "m_attachedObject", {0x474, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_angularLimit", {0x478, 0}, 1, 6, "angularlimit", 0, 0 },
        { 5, "m_bActive", {0x47c, 0}, 1, 2, 0, 0, 0 },
        { 0, "InputTurnOn", {0, 0}, 1, 8, "TurnOn", 0, (void *)sub_1000826a },
        { 0, "InputTurnOff", {0, 0}, 1, 8, "TurnOff", 0, (void *)sub_100127c4 },
    };
    g_10537530[1] = 9;
    g_10537530[0] = (int)&dataDesc[1];
    return g_10537530;
}
// END FUNCTION

// FUNCTION: 0x100295d0 size=0xa
#include "CUnknown100295d0.h"
void CUnknown100295d0::sub_100295d0(int unused)
{
	m_bFlag = 1;
}
// END FUNCTION

// FUNCTION: 0x100295f0 size=0xa
#include "CUnknown100295d0.h"
void CUnknown100295d0::sub_100295f0(int unused)
{
	m_bFlag = 0;
}
// END FUNCTION

// FUNCTION: 0x10029610 size=0x41
#include "CKeepUpright.h"

extern int g_104462c4;	// CKeepUpright vftable

inline void SetHandle_10029610(CKeepUpright_Handle &h, const int *pEnt)
{
	if (pEnt)
		h = *pEnt;
	else
		h = 0xffffffff;
}

CKeepUpright *CKeepUpright::sub_10029610()
{
	this->CBaseEntity::CBaseEntity(0);
	m_motionEvent.CKeepUpright_MotionEvent::CKeepUpright_MotionEvent();
	m_attachedObject.CKeepUpright_Handle::CKeepUpright_Handle();
	*(void **)this = &g_104462c4;
	m_motionEvent = &g_104462b4;
	m_flAngularLimit = 15.0f;
	SetHandle_10029610(m_attachedObject, 0);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10029680 size=0x1e
#include "CKeepUpright.h"

void sub_100aa7b0(void *p);

// TARGET: CKeepUpright::vfunc5
CBaseEntity *CKeepUpright::vfunc5(unsigned int flags)
{
	sub_100057c2();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100296b0 size=0x3e
#include "CKeepUpright.h"
#include "IPhysicsEnvironment.h"

extern IPhysicsEnvironment *g_10723940;
extern int vt_104462c4[];
void __fastcall sub_1009df20(void *p);

// TARGET: CKeepUpright::sub_100296b0
void CKeepUpright::sub_100296b0()
{
	void *pController = m_pController;
	*(int **)(void *)this = vt_104462c4;
	m_motionEvent = (void *)&g_104462b4;
	if (pController)
	{
		g_10723940->vfunc40(pController);
		m_pController = 0;
	}
	sub_1009df20(this);
}
// END FUNCTION

// FUNCTION: 0x10029700 size=0x5c
#include "CKeepUpright.h"
struct CBaseEntityVectorsUnit
{
	void sub_100ad320(float *pForward, float *pRight, float *pUp);
};
void CKeepUpright::vfunc103()
{
	m_vecAxis460[0] = 0;
	m_vecAxis460[1] = 0;
	m_vecAxis460[2] = 1.0f;
	((CBaseEntityVectorsUnit *)this)->sub_100ad320(0, 0, m_vecUp454);
	vfunc93(0, 0);
	if (*(unsigned char *)((char *)this + 0x204) & 1)
		*((char *)this + 0x47c) = 0;
	else
		*((char *)this + 0x47c) = 1;
}
// END FUNCTION

// FUNCTION: 0x10029780 size=0xdc
#include "CBaseEntity.h"
#include "CKeepUpright.h"
struct Handle_10029780
{
	unsigned int m_Index;
	int GetEntryIndex() const { return m_Index & 0x1fff; }
	int GetSerialNumber() const { return m_Index >> 13; }
	char *Get() const;
};
struct EntInfo_10029780 { char *m_pEntity; int m_SerialNumber; int m_pad; };
struct EntList_10029780
{
	void *vtbl;
	EntInfo_10029780 m_EntPtrArray[1];
	char *LookupEntity(const Handle_10029780 &handle) const
	{
		if (handle.m_Index == 0xffffffff)
			return 0;
		const EntInfo_10029780 *pInfo = &m_EntPtrArray[handle.GetEntryIndex()];
		if (pInfo->m_SerialNumber == handle.GetSerialNumber())
			return pInfo->m_pEntity;
		else
			return 0;
	}
};
extern EntList_10029780 *g_10566458;
inline char *Handle_10029780::Get() const { return g_10566458->LookupEntity(*this); }

struct IMotionController_10029780
{
	virtual void vfunc0();
	virtual void SetEventHandler(void *handler);
	virtual void AttachObject(void *pObject);
};
struct IPhysicsEnvironment_10029780
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38();
	virtual IMotionController_10029780 *CreateMotionController(void *pHandler);
};
extern IPhysicsEnvironment_10029780 *g_10723940;
extern char g_106b8540[];
void *sub_1004d650(const char *name);
void sub_101cd940(CBaseEntity *ent);

void CKeepUpright::vfunc113()
{
	CBaseEntity::vfunc113();
	if (!m_pController)
	{
		void *pPhys;
		if (((Handle_10029780 *)&m_attachedObject)->Get())
			pPhys = *(void **)(((Handle_10029780 *)&m_attachedObject)->Get() + 0x36c);
		else
			pPhys = sub_1004d650(m_nameAttach ? m_nameAttach : g_106b8540);
		if (!pPhys)
		{
			sub_101cd940(this);
			return;
		}
		m_pController = g_10723940->CreateMotionController(&m_motionEvent);
		((IMotionController_10029780 *)m_pController)->AttachObject(pPhys);
	}
	else
	{
		((IMotionController_10029780 *)m_pController)->SetEventHandler(&m_motionEvent);
	}
}
// END FUNCTION

// FUNCTION: 0x100298a0 size=0x7c
#include "CKeepUpright.h"

#define SV(n) virtual void v##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)

struct SlotKU {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV(100) SV(101) SV(102)
	virtual void v103();
	SV(104) SV(105) SV(106) SV(107) SV(108) SV(109)
	SV(110) SV(111) SV(112)
	virtual void v113();
};

CKeepUpright *sub_100a99d0(const char *classname, void *pOrigin, void *pAngles, CBaseEntity *pOwner);

CKeepUpright *sub_100298a0(void *pOrigin, void *pAngles, CBaseEntity *pOwner, int nParam, char bActive)
{
	CKeepUpright *pKU = sub_100a99d0("phys_keepupright", pOrigin, pAngles, pOwner);
	if (pKU) {
		if (pOwner)
			pKU->m_attachedObject = *pOwner->vfunc1();
		else
			pKU->m_attachedObject = 0xffffffff;
		*(int *)((char *)pKU + 0x478) = nParam;
		if (!bActive)
			*(unsigned int *)((char *)pKU + 0x204) |= 1;
		((SlotKU *)pKU)->v103();
		((SlotKU *)pKU)->v113();
	}
	return pKU;
}
// END FUNCTION

// FUNCTION: 0x10029940 size=0x19c
#include "Vector.h"
#include "matrix3x4_t.h"
#include "IPhysicsObject.h"
#include <math.h>

void sub_101381b0(const float *in1, const matrix3x4_t &in2, float *out);	// VectorIRotate
void sub_10138460(const float *in1, const matrix3x4_t &in2, float *out);	// VectorRotate

inline void VectorIRotate(const Vector &in1, const matrix3x4_t &in2, Vector &out) { sub_101381b0(&in1.x, in2, &out.x); }
inline void VectorRotate(const Vector &in1, const matrix3x4_t &in2, Vector &out) { sub_10138460(&in1.x, in2, &out.x); }

// CKeepUpright's IMotionEvent sub-object (+0x450 of CKeepUpright)
struct CKeepUprightMotionEvent
{
	void *m_vtable;
	Vector m_localTestAxis;	// 0x04 (CKeepUpright +0x454)
	Vector m_worldGoalAxis;	// 0x10 (+0x460)
	void *m_pController;	// 0x1c
	const char *m_nameAttach;	// 0x20
	unsigned int m_attachedObject;	// 0x24
	float m_angularLimit;	// 0x28
	bool m_bActive;	// 0x2c

	int sub_10029940(void *pController, IPhysicsObject *pObject, float deltaTime, Vector &linear, Vector &angular);
};

int CKeepUprightMotionEvent::sub_10029940(void *pController, IPhysicsObject *pObject, float deltaTime, Vector &linear, Vector &angular)
{
	if (!m_bActive)
		return 0;

	matrix3x4_t matrix;
	pObject->vfunc38(&matrix.m_flMatVal[0][0]);

	Vector currentAxis;
	VectorIRotate(m_worldGoalAxis, matrix, currentAxis);

	Vector rotationAxis;
	CrossProduct(currentAxis, m_localTestAxis, rotationAxis);
	float cosAngle = DotProduct(currentAxis, m_localTestAxis);
	float sinAngle = VectorNormalize(rotationAxis);
	float angle = atan2(sinAngle, cosAngle);
	angle = angle * 57.29578f;
	rotationAxis *= angle;
	VectorRotate(rotationAxis, matrix, angular);

	float invDeltaTime = (1 / deltaTime);
	angular *= (((invDeltaTime * invDeltaTime)));

	Vector angVel;
	pObject->vfunc40(0, &angVel.x);
	angular -= angVel;

	float len = VectorNormalize(angular);
	float invAngular = m_angularLimit * invDeltaTime;
	if (len > invAngular)
		len = invAngular;
	angular *= len;

	linear.Init();
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10029b50 size=0x1e
#include "CPhysThruster.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysThruster::vfunc5
CPhysThruster *CPhysThruster::vfunc5(unsigned int flags)
{
	sub_10014470();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10029b80 size=0x1e
#include "CPhysTorque.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysTorque::vfunc5
CPhysTorque *CPhysTorque::vfunc5(unsigned int flags)
{
	sub_10014470();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
