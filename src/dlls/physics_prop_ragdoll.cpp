// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 88 blocks
#include "vampire.h"

// FUNCTION: 0x10152300 size=0x6
#include "CRagdollProp.h"
namespace lifted {
extern char g_10723498;
}
int CRagdollProp::vfunc80()
{
    return (int)&lifted::g_10723498;
}
// END FUNCTION

// FUNCTION: 0x10152320 size=0x3
#include "CRagdollProp.h"
int CRagdollProp::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10152340 size=0xa
#include "SendTable.h"
SendTable g_107234b4;
// END FUNCTION

// FUNCTION: 0x101523c0 size=0x5
int sub_10152400(void);
int g_107234b0 = ((int (*)(int))sub_10152400)(0);
// END FUNCTION

// FUNCTION: 0x10152400 size=0x148
#include "SendProp.h"

SendProp sub_10246af0(const char *pName, int a, int b, int c, int d, int e, void *pProxy);
SendProp sub_10246dc0(const char *pName, int a, int b, void *pProxy);
SendProp sub_102469b0(const char *pName, int a, int b, int c, int d, int e);
SendProp sub_10246ef0(int a, int b, const char *pName, int c);
SendProp sub_10246700(const char *pName, int a, int b, int c, int d, int e, int f, void *pProxy);
SendProp sub_101ab220(const char *pName, int a, int b);
SendProp sub_10246510(const char *pName, int a, int b, int c, int d, int e, int f, void *pProxy);
void sub_10246320();
void sub_10246300();
void sub_10009539();
void sub_10003012();

struct S_SendTable
{
	void sub_10247240(SendProp *pProps, int nProps, const char *pName);
};

extern S_SendTable g_107234b4;
extern int g_1054d524;
extern const char *g_1057d5a4;

int sub_10152400()
{
	static SendProp s_props[] = {
		sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10246dc0("baseclass", 0, g_1054d524, (void *)sub_10009539),
		sub_102469b0("m_ragAngles[0]", 0xbe8, 0xc, 0xd, 0, (int)sub_10246320),
		sub_10246ef0(0x1e, 0xc, "m_ragAngles", 0),
		sub_10246700("m_ragPos[0]", 0xa80, 0xc, -1, 2, 0, 0xc7ec9090, (void *)sub_10003012),
		sub_10246ef0(0x1e, 0xc, "m_ragPos", 0),
		sub_101ab220("m_hUnragdoll", 0xd50, 4),
		sub_10246510("m_flBlendWeight", 0xd60, 4, 8, 0x10, 0, 0x3f800000, (void *)sub_10246300),
		sub_10246af0("m_nOverlaySequence", 0xd64, 4, 0xb, 0, 0, 0)
	};
	g_107234b4.sub_10247240(&s_props[1], 8, g_1057d5a4);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x101525e0 size=0x6
#include "CRagdollProp.h"
#include "datamap.h"
namespace lifted {
extern char g_1057d5a8;
}
datamap_t * CRagdollProp::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1057d5a8);
}
// END FUNCTION

// FUNCTION: 0x10152600 size=0x5
int * sub_10152640(void);
int * g_10723490 = ((int * (*)(int))sub_10152640)(0);
// END FUNCTION

// FUNCTION: 0x10152640 size=0x1ffe
#include "datamap.h"
ISaveRestoreOps *sub_10045d90(int);
void sub_1000dff8();
extern int g_1057d5a8[2];
int *sub_10152640()
{
    static typedescription_t dataDesc[] = {
        { 0 },
        { 1, "m_impactEnergyScale", {0xdc, 0}, 1, 0xe, "physdamagescale", 0, 0 },
        { 4, "m_ragdoll.boneIndex", {0xa08, 0}, 30, 2, 0, 0, 0 },
        { 0xe, "m_ragPos", {0xa80, 0}, 30, 2, 0, 0, 0 },
        { 3, "m_ragAngles", {0xbe8, 0}, 30, 2, 0, 0, 0 },
        { 4, "m_lastUpdateTickCount", {0xd54, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_allAsleep", {0xd58, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hDamageEntity", {0xd5c, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hUnragdoll", {0xd50, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flBlendWeight", {0xd60, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_nOverlaySequence", {0xd64, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdollMins", {0xd68, 0}, 30, 2, 0, 0, 0 },
        { 3, "m_ragdollMaxs", {0xed0, 0}, 30, 2, 0, 0, 0 },
        { 0, "CRagdollPropSetDebrisThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000dff8 },
        { 4, "m_ragdoll.listCount", {0x730, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.pGroup", {0x734, 0}, 1, 2, 0, sub_10045d90(4), 0 },
        { 3, "m_ragdoll.list[1].originParentSpace", {0x750, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[1].pObject", {0x75c, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[1].pConstraint", {0x760, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[1].parentIndex", {0x764, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[2].originParentSpace", {0x768, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[2].pObject", {0x774, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[2].pConstraint", {0x778, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[2].parentIndex", {0x77c, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[3].originParentSpace", {0x780, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[3].pObject", {0x78c, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[3].pConstraint", {0x790, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[3].parentIndex", {0x794, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[4].originParentSpace", {0x798, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[4].pObject", {0x7a4, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[4].pConstraint", {0x7a8, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[4].parentIndex", {0x7ac, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[5].originParentSpace", {0x7b0, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[5].pObject", {0x7bc, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[5].pConstraint", {0x7c0, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[5].parentIndex", {0x7c4, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[6].originParentSpace", {0x7c8, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[6].pObject", {0x7d4, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[6].pConstraint", {0x7d8, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[6].parentIndex", {0x7dc, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[7].originParentSpace", {0x7e0, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[7].pObject", {0x7ec, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[7].pConstraint", {0x7f0, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[7].parentIndex", {0x7f4, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[8].originParentSpace", {0x7f8, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[8].pObject", {0x804, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[8].pConstraint", {0x808, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[8].parentIndex", {0x80c, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[9].originParentSpace", {0x810, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[9].pObject", {0x81c, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[9].pConstraint", {0x820, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[9].parentIndex", {0x824, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[10].originParentSpace", {0x828, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[10].pObject", {0x834, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[10].pConstraint", {0x838, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[10].parentIndex", {0x83c, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[11].originParentSpace", {0x840, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[11].pObject", {0x84c, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[11].pConstraint", {0x850, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[11].parentIndex", {0x854, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[12].originParentSpace", {0x858, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[12].pObject", {0x864, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[12].pConstraint", {0x868, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[12].parentIndex", {0x86c, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[13].originParentSpace", {0x870, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[13].pObject", {0x87c, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[13].pConstraint", {0x880, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[13].parentIndex", {0x884, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[14].originParentSpace", {0x888, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[14].pObject", {0x894, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[14].pConstraint", {0x898, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[14].parentIndex", {0x89c, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[15].originParentSpace", {0x8a0, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[15].pObject", {0x8ac, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[15].pConstraint", {0x8b0, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[15].parentIndex", {0x8b4, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[16].originParentSpace", {0x8b8, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[16].pObject", {0x8c4, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[16].pConstraint", {0x8c8, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[16].parentIndex", {0x8cc, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[17].originParentSpace", {0x8d0, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[17].pObject", {0x8dc, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[17].pConstraint", {0x8e0, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[17].parentIndex", {0x8e4, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[18].originParentSpace", {0x8e8, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[18].pObject", {0x8f4, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[18].pConstraint", {0x8f8, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[18].parentIndex", {0x8fc, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[19].originParentSpace", {0x900, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[19].pObject", {0x90c, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[19].pConstraint", {0x910, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[19].parentIndex", {0x914, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[20].originParentSpace", {0x918, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[20].pObject", {0x924, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[20].pConstraint", {0x928, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[20].parentIndex", {0x92c, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[21].originParentSpace", {0x930, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[21].pObject", {0x93c, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[21].pConstraint", {0x940, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[21].parentIndex", {0x944, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[22].originParentSpace", {0x948, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[22].pObject", {0x954, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[22].pConstraint", {0x958, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[22].parentIndex", {0x95c, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_ragdoll.list[23].originParentSpace", {0x960, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_ragdoll.list[23].pObject", {0x96c, 0}, 1, 2, 0, sub_10045d90(1), 0 },
        { 0xa, "m_ragdoll.list[23].pConstraint", {0x970, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 4, "m_ragdoll.list[23].parentIndex", {0x974, 0}, 1, 2, 0, 0, 0 },
    };
    g_1057d5a8[1] = 107;
    g_1057d5a8[0] = (int)&dataDesc[1];
    return g_1057d5a8;
}
// END FUNCTION

// FUNCTION: 0x10154e40 size=0xe8
#include "CRagdollProp.h"
#include "CBaseAnimating.h"
#include "CCollisionProperty.h"

extern float g_1070d1b0[3];
extern char g_106b8540[];

struct CRagdollPropSpawnView
{
	char m_pad000[0xdc];
	float m_impactEnergyScale;	// 0xdc
	char m_pad0e0[0xd54 - 0xe0];
	int m_lastUpdateTickCount;	// 0xd54
	char m_pad0d58[0xd60 - 0xd58];
	float m_flBlendWeight;	// 0xd60
	int m_nOverlaySequence;	// 0xd64
};

void CRagdollProp::vfunc103()
{
	char bones[0x41a0];
	int nOut;
	vfunc104();
	const char *name = *vfunc9(&nOut);
	if (!name)
		name = g_106b8540;
	vfunc105(name);
	((CBaseAnimating *)this)->vfunc257((int)bones, 0xfffc);
	sub_101554a0(g_1070d1b0, 0, g_1070d1b0, bones, bones, 0, (m_flags204 >> 2) & 1, 1);
	CRagdollPropSpawnView *v = (CRagdollPropSpawnView *)this;
	v->m_lastUpdateTickCount = 0;
	v->m_flBlendWeight = 0.0f;
	v->m_nOverlaySequence = -1;
	if (v->m_impactEnergyScale == 0.0f)
		v->m_impactEnergyScale = 0.1f;
	CCollisionProperty *pColl = (CCollisionProperty *)((char *)this + 0x270);
	if (pColl) {
		pColl->sub_100ddd90();
		if (!(m_flags204 & 0x20))
			sub_100b3900(2);
		else
			sub_100b3840(2);
	}
}
// END FUNCTION

// FUNCTION: 0x10154f70 size=0x20
#include "CRagdollProp.h"

void CRagdollProp::vfunc129()
{
	CBaseEntity::sub_100a6490(0);
	CBaseEntity::sub_100a6490(m_Bodies[0].m_pObject);
	CBaseEntity::vfunc129();
}
// END FUNCTION

// FUNCTION: 0x10154fa0 size=0x4a
#include "CRagdollProp.h"
void __cdecl sub_1019bf80(void *p);

void CRagdollProp::vfunc130(int a)
{
	sub_1008df10(a);
	m_Bodies[0].m_pObject = m_obj36c;
	m_Bodies[0].m_n08 = -1;
	m_n738 = 0;
	m_n73c = 0;
	m_n740 = 0;
	sub_1019bf80(&m_nBodies730);
}
// END FUNCTION

// FUNCTION: 0x10155010 size=0x26
#include "CUnknown100dd990.h"

struct CFlagsUnitView {
    char m_pad0000[0x44];
    unsigned short m_wFlags44;
    void sub_100dc580(unsigned int flags);
};

struct CUnknown10155010View {
    char m_pad0000[0x270];
    void sub_10155010();
};

void CUnknown10155010View::sub_10155010()
{
    CUnknown100dd990 *pSub = (CUnknown100dd990 *)((char *)this + 0x270);
    pSub->sub_100dd990(2, 0, 0);
    CFlagsUnitView *p = (CFlagsUnitView *)pSub;
    p->sub_100dc580(p->m_wFlags44 & ~0x80);
}
// END FUNCTION

// FUNCTION: 0x10155050 size=0x57
#include "CRagdollProp.h"
struct IPhysicsEnv { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(int pObject); };
extern IPhysicsEnv *g_1053c5e0;
void sub_1019c950(int *pCount);
void CRagdollProp::vfunc180()
{
    for (int i = 0; i < m_nBodies730; i++) {
        if (m_Bodies[i].m_pObject)
            g_1053c5e0->v3(m_Bodies[i].m_pObject);
    }
    sub_100a6490(0);
    sub_1019c950(&m_nBodies730);
    CBaseEntity::vfunc180();
}
// END FUNCTION

// FUNCTION: 0x101550d0 size=0x37
#include "CRagdollProp.h"

extern char vt_1046dcec[];

struct CRagdollPropBaseView
{
	void sub_1008b230();
};

// TARGET: CRagdollProp::sub_101550d0
CRagdollProp *CRagdollProp::sub_101550d0()
{
	unsigned int flags;
	((CRagdollPropBaseView *)this)->sub_1008b230();
	*(int *)((char *)this + 0xd50) = -1;
	*(int *)((char *)this + 0xd5c) = -1;
	flags = *(volatile unsigned int *)((char *)this + 0x4c);
	*(void *volatile *)this = vt_1046dcec;
	flags |= 2;
	*(unsigned int *)((char *)this + 0x4c) = flags;
	*(int *)((char *)this + 0x730) = 0;
	*(char *)((char *)this + 0xd58) = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10155120 size=0x1c
#include "CBaseEntity.h"
#include "CRagdollProp.h"
// TARGET: CRagdollProp::vfunc123
void CRagdollProp::vfunc123()
{
	if (m_fDebugOverlays224 & 4)
	{
		vfunc264();
	}

	CBaseEntity::vfunc123();
}
// END FUNCTION

// FUNCTION: 0x10155150 size=0x3
#include "CRagdollProp.h"
// TARGET: CRagdollProp::vfunc158
bool CRagdollProp::vfunc158() { return (bool)(0); }
// END FUNCTION

// FUNCTION: 0x10155170 size=0x3
#include "CRagdollProp.h"
bool CRagdollProp::vfunc267()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10155190 size=0x5
#include "CRagdollProp.h"
bool CRagdollProp::vfunc269(int a0, int a1)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101551b0 size=0x5
#include "CRagdollProp.h"
bool CRagdollProp::vfunc272(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101551d0 size=0x6
#include "CRagdollProp.h"
namespace lifted {
extern char g_1070d9d0;
}
int CRagdollProp::vfunc273()
{
    return (int)&lifted::g_1070d9d0;
}
// END FUNCTION

// FUNCTION: 0x101551f0 size=0x5
#include "CRagdollProp.h"
bool CRagdollProp::vfunc274(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10155210 size=0x7a
#include "CRagdollProp.h"
#include <stdlib.h>

Vector CRagdollProp::vfunc275()
{
    Vector v;
    v.x = rand() * 0.03662221f - 600.0f;
    v.y = rand() * 0.03662221f - 600.0f;
    v.z = rand() * 0.03662221f - 600.0f;
    return v;
}
// END FUNCTION

// FUNCTION: 0x101552b0 size=0x3
#include "CRagdollProp.h"
char CRagdollProp::vfunc276()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101552d0 size=0x1e
#include "CRagdollProp.h"

void sub_100aa7b0(void *p);

// TARGET: CRagdollProp::vfunc5
CBaseEntity *CRagdollProp::vfunc5(unsigned int flags)
{
	sub_10014317();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10155300 size=0xb
namespace lifted {
extern char g_1046dcec;
int sub_10004c3c();
}
struct CUnknown10155300 { int sub_10155300(); };
int CUnknown10155300::sub_10155300()
{
    *(int *)this = (int)&lifted::g_1046dcec;
    return lifted::sub_10004c3c();
}
// END FUNCTION

// FUNCTION: 0x10155320 size=0x26
// TARGET: CRagdollProp::vfunc104
#include "CRagdollProp.h"
#include "CEntityVSlots.h"

extern char g_106b8540[];

void CRagdollProp::vfunc104()
{
	int nOut;
	const char **pName = ((CEntityVSlots *)this)->slot9(&nOut);
	const char *pszName = *pName;
	if (pszName == 0)
		pszName = g_106b8540;
	((CBaseEntity *)this)->sub_100adfd0(pszName);
}
// END FUNCTION

// FUNCTION: 0x10155360 size=0x3
#include "CRagdollProp.h"
bool CRagdollProp::vfunc128()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10155380 size=0x47
#include "CRagdollProp.h"
#include "CAI_BaseNPC.h"
#include "CBaseAnimating.h"
#include "globalvars.h"

void CRagdollProp::sub_10155380()
{
	*(float *)((char *)this + 0x174) = gpGlobals->curtime;
	*(int *)((char *)this + 0x6f4) = 0;
	*(int *)((char *)this + 0x6f8) = 0;
	int seq = ((CBaseAnimating *)this)->sub_1008dc40(0x21, -1);
	if (seq < 0)
		((CAI_BaseNPC *)this)->sub_10260a50(0);
	else
		((CAI_BaseNPC *)this)->sub_10260a50(seq);
}
// END FUNCTION

// FUNCTION: 0x101553f0 size=0x3b
#include "CRagdollProp.h"
#include "IPhysicsObject.h"

struct CRagdollPropBody	// 0x18 byte element of the body array at +0x744 (count at +0x730)
{
	IPhysicsObject *m_pObject;
	char m_pad0004[0x14];
};

// TARGET: CRagdollProp::vfunc270
void CRagdollProp::vfunc270(int a, int b)
{
	int i = 0;
	int nBodies = *(int *)((char *)this + 0x730);
	if (nBodies > 0) {
		CRagdollPropBody *pBody = (CRagdollPropBody *)((char *)this + 0x744);
		do {
			pBody->m_pObject->vfunc2();
			pBody->m_pObject->vfunc24(1);
			i++;
			pBody++;
		} while (i < *(int *)((char *)this + 0x730));
	}
}
// END FUNCTION

// FUNCTION: 0x10155440 size=0x3
#include "CRagdollProp.h"
void CRagdollProp::vfunc271(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x10155460 size=0x2b
#include "CBaseAnimating.h"

struct CUnit10155460 : CBaseAnimating {
    void sub_10155460(int a);
};

void CUnit10155460::sub_10155460(int a)
{
    int iVar = ((CBaseAnimating *)this)->sub_1008dc40(a, -1);
    if (iVar < 0) {
        *(int *)((char *)this + 0xd64) = -1;
        return;
    }
    *(int *)((char *)this + 0xd64) = iVar;
}
// END FUNCTION

// FUNCTION: 0x101554a0 size=0x305
#include "CRagdollProp.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CWeaponThrown_Grenade_Frag.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

struct RagPhysObj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48();
	virtual void *GetCollide(const void *origin, const void *angles); };
struct RagPhysCollision { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
	virtual void CollideGetAABB(Vector &mins, Vector &maxs, void *pCollide); };
struct RagSaveRestore { virtual void v0(); virtual void v1(); virtual void AssociateModel(int pObject, int modelIndex); };
struct RagModelInfo { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
	virtual void *GetVCollide(int modelIndex); };

struct RagBoneAccessor	// Source's CBoneAccessor
{
	const void *m_pAnimating;
	void *m_pBones;
	int m_ReadableBones;
	int m_WritableBones;
	RagBoneAccessor() { m_pAnimating = 0; m_pBones = 0; m_ReadableBones = m_WritableBones = 0; }
	RagBoneAccessor(void *pBones) { m_pAnimating = 0; m_pBones = pBones; }
};

struct ragdollparams_t
{
	void *pGameData;
	void *pCollide;
	void *pStudioHdr;
	Vector forceVector;
	int forceBoneIndex;
	RagBoneAccessor pPrevBones;
	RagBoneAccessor pCurrentBones;
	float boneDt;
	float jointFrictionScale;
	Vector forcePosition;
};

extern RagModelInfo *g_1070b250;
extern RagPhysCollision *g_1072393c;
extern int g_10723940, g_10723944;
extern RagSaveRestore *g_1053c5e0;
extern Vector g_1070d1b0;
void sub_1019c0b0(void *ragdoll, ragdollparams_t *params, RagPhysCollision *a, int b, int c);
void sub_1019bfd0(void *ragdoll);
void sub_1000dff8();
struct CRagdollPropUnit : CRagdollProp { void sub_10155010(); };

struct CRagdollPropBounds { char pad[0xd68]; Vector m_ragdollMins[30]; Vector m_ragdollMaxs[30]; };

void CRagdollProp::sub_101554a0(const Vector &forceVector, int forceBone, const Vector &forcePos, void *pPrevBones, void *pBoneToWorld, float dt, int collisionGroup, bool activateRagdoll)
{
	sub_100aaa40(collisionGroup);
	if (collisionGroup == 2) {
		sub_100ac4e0((int)sub_1000dff8, 0, 0);
		sub_100ac610(gpGlobals->curtime + 5.0f, 0);
	}
	vfunc93(7, 0);
	{
		ScopeTrace t("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(6);
	}
	{
		ScopeTrace t("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(3);
	}
	m_nTakeDamage = 1;

	ragdollparams_t params;
	params.pGameData = (CBaseEntity *)this;
	params.pCollide = g_1070b250->GetVCollide(vfunc8());
	params.pStudioHdr = sub_100952d0(-1);
	params.forceVector = forceVector;
	params.forceBoneIndex = forceBone;
	params.forcePosition = forcePos;
	params.pPrevBones = RagBoneAccessor(pPrevBones);
	params.pCurrentBones = RagBoneAccessor(pBoneToWorld);
	params.boneDt = dt;
	params.jointFrictionScale = 1.0f;
	sub_1019c0b0(&m_nBodies730, &params, g_1072393c, g_10723940, g_10723944);
	if (activateRagdoll)
		sub_1019bfd0(&m_nBodies730);
	for (int i = 0; i < m_nBodies730; i++) {
		sub_101563b0(m_Bodies[i].m_pObject, i);
		g_1053c5e0->AssociateModel(m_Bodies[i].m_pObject, vfunc8());
		g_1072393c->CollideGetAABB(((CRagdollPropBounds *)this)->m_ragdollMins[i], ((CRagdollPropBounds *)this)->m_ragdollMaxs[i], ((RagPhysObj *)m_Bodies[i].m_pObject)->GetCollide(&g_1070d1b0, g_1070d9d0));
	}
	sub_100a6490(m_Bodies[0].m_pObject);
	((CRagdollPropUnit *)this)->sub_10155010();
}
// END FUNCTION

// FUNCTION: 0x10155880 size=0x12
#include "CRagdollProp.h"

// TARGET: CRagdollProp::sub_10155880
void CRagdollProp::sub_10155880()
{
	CBaseEntity::sub_100aaa40(1);
	sub_10155a30();
}
// END FUNCTION

// FUNCTION: 0x101558b0 size=0x45
#include "CRagdollProp.h"

struct CRagdollPropHandleView
{
	char m_pad[0xd5c];
	EHANDLE m_hd5c;
};

void CRagdollProp::vfunc268(CBaseEntity *pEnt)
{
	CRagdollPropHandleView *pView = (CRagdollPropHandleView *)this;
	if (pEnt) {
		pView->m_hd5c = pEnt;
		m_nTakeDamage = pEnt->m_nTakeDamage;
	} else {
		pView->m_hd5c = (CBaseEntity *)0;
		m_nTakeDamage = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x10155920 size=0xc2
#include "CRagdollProp.h"
#include "CBCCSlotViews.h"
#include "ehandle.h"

class CInfoSlotView
{
public:
	VIEW_SLOT100(0)
	VIEW_SLOT10(10) VIEW_SLOT10(11) VIEW_SLOT10(12) VIEW_SLOT10(13)
	VIEW_SLOT(140) VIEW_SLOT(141)
	virtual int vfunc142(const CRagdollPropDamageInfo *pInfo);
};

struct CTakeDamageInfoView : CRagdollPropDamageInfo
{
	void AddDamageType(int bitsDamageType) { m_bitsDamageType |= bitsDamageType; }
};

struct CRagdollPropView
{
	char m_pad[0xd5c];
	CHandle<CInfoSlotView> m_hDamageEntity;	// 0xd5c
};

struct CBaseEntityInfoView
{
	int sub_100a0e40(const CRagdollPropDamageInfo *pInfo);
};

// TARGET: CRagdollProp::vfunc142
int CRagdollProp::vfunc142(struct CTakeDamageInfo *pDamage)
{
	const CRagdollPropDamageInfo &info = *(const CRagdollPropDamageInfo *)pDamage;
	if ( ((CRagdollPropView *)this)->m_hDamageEntity.Get() )
	{
		CTakeDamageInfoView subInfo = *(const CTakeDamageInfoView *)&info;
		subInfo.AddDamageType( 0x800000 );
		return ((CRagdollPropView *)this)->m_hDamageEntity->vfunc142( &subInfo );
	}

	return ((CBaseEntityInfoView *)this)->sub_100a0e40( &info );
}
// END FUNCTION

// FUNCTION: 0x10155a30 size=0x30
#include "CRagdollProp.h"
struct CPhysObjView25 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); };
void CRagdollProp::sub_10155a30()
{
	for (int i = 0; i < m_nBodies730; i++)
		((CPhysObjView25 *)m_Bodies[i].m_pObject)->v25();
}
// END FUNCTION

// FUNCTION: 0x10155a70 size=0x47
#include "CRagdollProp.h"

void CRagdollProp::vfunc141(class CVDmg_t *a, const Vector *b, struct CGameTrace *pInfo)
{
#define a ((int)a)
#define b ((int)b)
	short nBody = *(short *)((char *)pInfo + 0x48);
	if (nBody >= 0 && nBody < m_nBodies730)
		sub_100a68f0(m_Bodies[nBody].m_pObject);
	CBaseEntity::vfunc141(a, b, pInfo);
#undef b
#undef a
}
// END FUNCTION

// FUNCTION: 0x10155ae0 size=0xf1
#include "CRagdollProp.h"
#include <string.h>

struct CRagdollLayout;
struct CRagdollStudio;
bool sub_1019cae0(CRagdollLayout *pLayout, CRagdollStudio *pStudio, int i);
void sub_10138600(void *pParentMatrix, void *pMatrix);

struct CRagdollBoneX
{
	int m_nameIndex;
	int m_parent;
	char m_pad08[0xa0 - 8];
};
struct CRagdollModelX
{
	char m_pad0000[0xf0];
	int m_numBones;
	int m_boneIndex;

	CRagdollBoneX *Bone(int i) { return (CRagdollBoneX *)((char *)this + m_boneIndex) + i; }
};
struct CRagdollStudioX
{
	int m_n0;
	void *m_pBones;
	int m_n8;
	int m_nc;
};
struct CRagdollMatrixX
{
	float m[12];
};
struct CRagdollPropX
{
	char m_pad0000[0x730];
	int m_nBodies;
	char m_pad0734[0xa08 - 0x734];
	int m_boneTable[1];
};

// TARGET: CRagdollProp::vfunc257
void CRagdollProp::vfunc257(void *pMatrices, int unused)
{
	CRagdollModelX *pModel = (CRagdollModelX *)sub_100952d0(-1);
	char used[352];
	CRagdollPropX *pThis = (CRagdollPropX *)this;
	int i = 0;
	memset(used, 0, pModel->m_numBones);
	if (pThis->m_nBodies > 0) {
		CRagdollLayout *pLayout = (CRagdollLayout *)&pThis->m_nBodies;
		int *pTable = pThis->m_boneTable;
		do {
			CRagdollStudioX studio;
			studio.m_n0 = 0;
			studio.m_pBones = pMatrices;
			if (sub_1019cae0(pLayout, (CRagdollStudio *)&studio, i))
				used[*pTable] = 1;
			i++;
			pTable++;
		} while (i < *(int *)pLayout);
	}
	CRagdollMatrixX *pM = (CRagdollMatrixX *)pMatrices;
	CRagdollBoneX *pBone = pModel->Bone(0);
	int j = 0;
	if (pModel->m_numBones > 0) {
		do {
			if (!used[j])
				sub_10138600(&pM[pBone->m_parent], pM + j);
			j++;
			pBone++;
		} while (j < pModel->m_numBones);
	}
}
// END FUNCTION

// FUNCTION: 0x10155c20 size=0x1a1
#include "CGameTrace.h"
#include "CRagdollProp.h"
#include "Ray_t.h"
struct CRagdollModelInfo
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
	virtual int **vfunc18(int model);
};
struct CRagdollCollision
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
	virtual void v18(); virtual void v19(); virtual void v20();
	virtual void vfunc21(const Ray_t *pRay, int hBody, const void *pPos, const void *pAng, CGameTrace *pTrace);
};
extern CRagdollModelInfo *g_1070b250;
extern CRagdollCollision *g_1072393c;

struct CTraceCopy
{
	int d[10];
	char c28, c29;
	short s2a;
	float f2c;
	int c30;
	short s34;
	char b36, b37;
	int d38, d3c, d40, d44;
	short s48;
	int d4c, d50;
	void operator=(const CTraceCopy &o)
	{
		d[0] = o.d[0]; d[1] = o.d[1]; d[2] = o.d[2]; d[3] = o.d[3]; d[4] = o.d[4];
		d[5] = o.d[5]; d[6] = o.d[6]; d[7] = o.d[7]; d[8] = o.d[8]; d[9] = o.d[9];
		c28 = o.c28; c29 = o.c29; s2a = o.s2a; f2c = o.f2c; c30 = o.c30;
		s34 = o.s34; b36 = o.b36; b37 = o.b37;
		d38 = o.d38; d3c = o.d3c; d40 = o.d40; d44 = o.d44; s48 = o.s48; d4c = o.d4c; d50 = o.d50;
	}
};

// TARGET: CRagdollProp::vfunc99
bool CRagdollProp::vfunc99(int a, int b, int c)
{
	const Ray_t *pRay = (const Ray_t *)a;
	CTraceCopy *pTrace = (CTraceCopy *)c;
	if (pRay->m_IsRay)
		return sub_100956e0(a, b, c);
	if (!sub_100952d0(-1))
		return false;
	int **list = g_1070b250->vfunc18(vfunc8());
	for (int i = 0; i < m_nBodies730; i++) {
		CTraceCopy tr;
		const char *p = (const char *)this + 0xa80 + 0xc * i;
		g_1072393c->vfunc21(pRay, list[1][i], p, p + 0x168, (CGameTrace *)&tr);
		if (tr.f2c < pTrace->f2c)
			*pTrace = tr;
	}
	if (pTrace->f2c >= 1.0f)
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x10155e40 size=0x11a
#include "CRagdollProp.h"

struct Matrix3x4 { float m[12]; };

struct RagdollPhysObj
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
	virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29();
	virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35();
	virtual void SetPositionMatrix(const Matrix3x4 *pMatrix, int bTeleport);
	virtual void s37();
	virtual void GetPositionMatrix(Matrix3x4 *pMatrix);
};

void sub_10138630(const Matrix3x4 *pIn, Matrix3x4 *pOut);
void sub_10138df0(const Matrix3x4 *pIn1, const Matrix3x4 *pIn2, Matrix3x4 *pOut);

struct RagdollEntry
{
	RagdollPhysObj *m_pObject;
	char m_pad04[0x14];
};

static inline bool TestBit(unsigned int value, int bit)
{
	return ((value >> bit) & 1) != 0;
}

void CRagdollProp::vfunc181(const float *pPosition, const float *pAngles, const float *pVelocity)
{
	Matrix3x4 newMatrix;
	Matrix3x4 startMatrixInv;
	Matrix3x4 xform;
	Matrix3x4 startMatrix;
	RagdollEntry *pList = (RagdollEntry *)((char *)this + 0x744);
	pList[0].m_pObject->GetPositionMatrix(&startMatrix);
	sub_10138630(&startMatrix, &startMatrixInv);
	sub_100a68f0((int)pList[0].m_pObject);
	sub_100ada20(pPosition, pAngles, pVelocity);
	if (TestBit(m_flags268, 11))
		vfunc98();
	sub_10138df0((const Matrix3x4 *)((char *)this + 0x130), &startMatrixInv, &xform);
	sub_101563b0((int)pList[0].m_pObject, 0);
	int i = 1;
	if (*(int *)((char *)this + 0x730) > i) {
		RagdollEntry *pEntry = &pList[1];
		do {
			Matrix3x4 matrix;
			pEntry->m_pObject->GetPositionMatrix(&matrix);
			sub_10138df0(&xform, &matrix, &newMatrix);
			pEntry->m_pObject->SetPositionMatrix(&newMatrix, 1);
			sub_101563b0((int)pEntry->m_pObject, i);
			i++;
			pEntry++;
		} while (i < *(int *)((char *)this + 0x730));
	}
}
// END FUNCTION

// FUNCTION: 0x10155fb0 size=0x2e8
#include <math.h>
#include "CRagdollProp.h"
#include "CCollisionProperty.h"
#include "CUnknown100dd990.h"
#include "CBaseEntity_ext.h"
#include "matrix3x4_t.h"
#include "QAngle.h"

struct CRagdollPropUnit : CRagdollProp
{
	char m_padUnit[0xa08 - 0x75c];
	int m_BoneIdx[30];	// 0xa08
	Vector m_ragPos[30];	// 0xa80
	QAngle m_ragAngles[30];	// 0xbe8
	int m_nd50;
	int m_lastUpdateTickCount;	// 0xd54
	char m_allAsleep;	// 0xd58
	char m_padd59[0xd68 - 0xd59];
	Vector m_ragdollMins[30];	// 0xd68
	Vector m_ragdollMaxs[30];	// 0xed0

	void sub_1009edc0(const Vector &mins, const Vector &maxs);
};

struct CRagdollBoneAccessor { int m_n0; matrix3x4_t *m_pBones; };
struct CCollOriginView { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual const Vector *s8(); };

void sub_1019cae0(void *pRagdoll, CRagdollBoneAccessor *pAcc, int index);
void sub_10137ed0(const matrix3x4_t *pMatrix, float *pAngles);
void sub_10138720(const matrix3x4_t *pMatrix, int n, float *pOrigin);
void sub_101cd940(CBaseEntity *pEnt);
char sub_1019cd10(void *pRagdoll);
void sub_1013c0e0(const matrix3x4_t *pMatrix, const float *pMins, const float *pMaxs, float *pOutMins, float *pOutMaxs);

inline void TransformAABB(const matrix3x4_t &m, const Vector &mins, const Vector &maxs, Vector &outMins, Vector &outMaxs)
{
	sub_1013c0e0(&m, &mins.x, &maxs.x, &outMins.x, &outMaxs.x);
}

struct CBoneAccessorX { int m_n0; matrix3x4_t *m_pBones; int m_ReadableBones; int m_WritableBones; CBoneAccessorX(matrix3x4_t *p) { m_n0 = 0; m_pBones = p; } };
inline void MatrixAnglesX(const matrix3x4_t &m, QAngle &angles, Vector &pos)
{
	sub_10137ed0(&m, &angles.x);
	sub_10138720(&m, 3, &pos.x);
}
void CRagdollProp::vfunc226(int pPhysics)
{
	CRagdollPropUnit *p = (CRagdollPropUnit *)this;
	if (p->m_lastUpdateTickCount == gpGlobals->m_n18)
		return;
	p->m_lastUpdateTickCount = gpGlobals->m_n18;
	char *pChanged = &m_bChanged1b1;
	*pChanged = 1;

	matrix3x4_t boneToWorld[350];
	QAngle angles;
	int i;
	for (i = 0; i < m_nBodies730; i++)
	{
		CBoneAccessorX boneaccessor(boneToWorld);
		sub_1019cae0(&m_nBodies730, (CRagdollBoneAccessor *)&boneaccessor, i);
		Vector vNewPos;
		MatrixAnglesX(boneToWorld[p->m_BoneIdx[i]], angles, vNewPos);
		p->m_ragPos[i] = vNewPos;
		p->m_ragAngles[i] = angles;
		if (fabs(vNewPos.x) > 10000.0 || fabs(vNewPos.y) > 10000.0 || fabs(vNewPos.z) > 10000.0)
			sub_101cd940(this);
	}
	p->m_allAsleep = sub_1019cd10(&m_nBodies730);

	Vector vecFullMins, vecFullMaxs;
	vecFullMins = p->m_ragPos[0];
	vecFullMaxs = p->m_ragPos[0];
	for (i = 0; i < m_nBodies730; i++)
	{
		Vector mins, maxs;
		TransformAABB(boneToWorld[p->m_BoneIdx[i]], p->m_ragdollMins[i], p->m_ragdollMaxs[i], mins, maxs);
		for (int j = 0; j < 3; j++)
		{
			if (mins[j] < vecFullMins[j])
				vecFullMins[j] = mins[j];
			if (maxs[j] > vecFullMaxs[j])
				vecFullMaxs[j] = maxs[j];
		}
	}
	vfunc216(*(const Vector *)&p->m_ragPos[0].x);
	CCollisionProperty *pColl = (CCollisionProperty *)((char *)this + 0x270);
	const Vector &vecOrigin = *((CCollOriginView *)pColl)->s8();
	pColl->AddSolidFlags(0x80);
	((CUnknown100dd990 *)pColl)->sub_100dd990(6, 0, 0);
	p->sub_1009edc0(vecFullMins - vecOrigin, vecFullMaxs - vecOrigin);
	pColl->sub_100dda20();
	sub_100a53d0(0);
}
// END FUNCTION

// FUNCTION: 0x10156360 size=0x40
#include "vampire.h"
#include "CRagdollProp.h"

// TARGET: CRagdollProp::vfunc233
int CRagdollProp::vfunc233(int *pOut, int nMax)
{
    int i;
    for (i = 0; i < *(int *)((char *)this + 0x730); i++)
    {
        if (i < nMax)
        {
            pOut[i] = *(int *)((char *)this + 0x744 + i * 0x18);
        }
    }
    return *(int *)((char *)this + 0x730);
}
// END FUNCTION

// FUNCTION: 0x101563b0 size=0x88
#include "CRagdollProp.h"
struct CRagdollBody { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(float *a, float *b); };
struct RagdollSlot { CRagdollBody *pBody; int pad[5]; };

void CRagdollProp::sub_101563b0(int unused, int index)
{
	float a[3];
	float b[3];
	((RagdollSlot *)((char *)this + 0x744))[index].pBody->v37(a, b);
	float *pa = (float *)this + 0x2a0 + index * 3;
	pa[0] = a[0]; pa[1] = a[1]; pa[2] = a[2];
	float *pb = (float *)this + 0x2fa + index * 3;
	pb[0] = b[0]; pb[1] = b[1]; pb[2] = b[2];
	if (index == 0) {
		vfunc216(*(const Vector *)((float *)this + 0x2a0));
		sub_100a53d0(index);
	}
}
// END FUNCTION

// FUNCTION: 0x10156470 size=0xc1
#include "CRagdollProp.h"
#include "IPhysicsObject.h"

extern "C" __declspec(dllimport) int Q_snprintf(char *, int, const char *, ...);
const char *sub_101927c0(float flMass);

#define POUNDS_PER_KG	(2.2f)
#define kg2lbs(x)		((x)*POUNDS_PER_KG)

#include "DebugOverlay.h"

struct CRagdollPropDbg : CRagdollProp
{
	IPhysicsObject *VPhysicsGetObject() const { return (IPhysicsObject *)m_obj36c; }
	int entindex() { int e = m_pEdict2e0; return engine->vfunc35(e); }
};

int CRagdollProp::vfunc124()
{
	int text_offset = sub_10096100();
	if (*(unsigned char *)((char *)this + 0x224) & 1) {
		CRagdollPropDbg *self = (CRagdollPropDbg *)this;
		if (self->VPhysicsGetObject()) {
			char tempstr[512];
			Q_snprintf(tempstr, sizeof(tempstr), "Mass: %.2f kg / %.2f lb (%s)", self->VPhysicsGetObject()->vfunc12(), kg2lbs(self->VPhysicsGetObject()->vfunc12()), sub_101927c0(self->VPhysicsGetObject()->vfunc12()));
			sub_101434b0(self->entindex(), text_offset, tempstr, 0, 255, 255, 255, 255);
			text_offset++;
		}
	}
	return text_offset;
}
// END FUNCTION

// FUNCTION: 0x10156580 size=0x2a
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"

void CAI_BaseNPC::sub_10156580(CBaseEntity *pEnt)
{
	unsigned int *pHandle = (unsigned int *)((char *)this + 0xd50);
	if (pEnt)
		*pHandle = *pEnt->vfunc1();
	else
		*pHandle = 0xffffffff;
}
// END FUNCTION

// FUNCTION: 0x101565c0 size=0x50
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000d27e(GP *);
extern int vt_1046e23c;
extern char g_1057ffd4[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: prop_ragdoll_attached
DLL_EXPORT GP *prop_ragdoll_attached()
{
	GP *p = (GP *)sub_1000db89(0x1064);
	if (p) {
		sub_1000d27e(p);
		*(int **)p = &vt_1046e23c;
		*((char *)p + 0x105c) = 0;
	} else {
		p = 0;
	}
	p->name(g_1057ffd4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10156630 size=0x42
#include "CRagdollPropAttached.h"
struct SPhysEnv { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
 virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
 virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(void *p); };
extern SPhysEnv *g_10723940;
extern char vt_1046e23c[];
void sub_100aa7b0(void *p);
CBaseEntity *CRagdollPropAttached::vfunc5(unsigned int flags)
{
    *(int *)this = (int)vt_1046e23c;
    g_10723940->v23(m_pPhysObj1060);
    m_pPhysObj1060 = 0;
    sub_10014317();
    if (flags & 1)
        sub_100aa7b0(this);
    return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x101566a0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10723258;
extern char g_1057e850[];
ServerClassReg g_10723278("CRagdollPropAttached", &g_10723258, g_1057e850);
// END FUNCTION

// FUNCTION: 0x10156710 size=0x6
#include "CRagdollPropAttached.h"
namespace lifted {
extern char g_10723278;
}
int CRagdollPropAttached::vfunc80()
{
    return (int)&lifted::g_10723278;
}
// END FUNCTION

// FUNCTION: 0x10156730 size=0x3
#include "CRagdollPropAttached.h"
int CRagdollPropAttached::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10156750 size=0xa
#include "SendTable.h"
SendTable g_10723258;
// END FUNCTION

// FUNCTION: 0x101567d0 size=0x5
int sub_10156810(void);
int g_10723254 = ((int (*)(int))sub_10156810)(0);
// END FUNCTION

// FUNCTION: 0x10156810 size=0x108
#include "SendProp.h"

class SendTable
{
public:
	void sub_1000e8fe(SendProp *pProps, int nProps, const char *pNetTableName);
};

SendProp sub_10007bfd(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int arg6, void *proxy);
SendProp sub_1000bf2d(const char *pVarName, int offset, SendTable *pTable, void *proxy);
SendProp sub_1000c14e(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, float fLow, float fHigh, void *proxy);
void sub_10009539();
void sub_10003012();

extern SendTable g_10723258;
extern SendTable *g_1057d5a0;
extern const char *g_1057e85c;

// TARGET: sub_10156810
int sub_10156810()
{
	static SendProp props[] = {
		sub_10007bfd("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_1000bf2d("baseclass", 0, g_1057d5a0, (void *)sub_10009539),
		sub_10007bfd("m_boneIndexAttached", 0x103c, 4, 9, 1, 0, 0),
		sub_10007bfd("m_ragdollAttachedObjectIndex", 0x1040, 4, 5, 1, 0, 0),
		sub_1000c14e("m_attachmentPointBoneSpace", 0x1044, 0xc, -1, 2, 0.0f, -121121.121094f, (void *)sub_10003012),
		sub_1000c14e("m_attachmentPointRagdollSpace", 0x1050, 0xc, -1, 2, 0.0f, -121121.121094f, (void *)sub_10003012),
	};
	g_10723258.sub_1000e8fe(props + 1, 5, g_1057e85c);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x101569a0 size=0x6
#include "datamap.h"
#include "CRagdollPropAttached.h"
namespace lifted {
extern char g_1057e860;
}
datamap_t * CRagdollPropAttached::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1057e860);
}
// END FUNCTION

// FUNCTION: 0x101569c0 size=0x5
int * sub_10156a00(void);
int * g_10723494 = ((int * (*)(int))sub_10156a00)(0);
// END FUNCTION

// FUNCTION: 0x10156a00 size=0x58
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
extern int g_1057e860[2];
ISaveRestoreOps *sub_10045d90(int);

int *sub_10156a00()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 4, "m_boneIndexAttached", {0x103c, 0}, 1, 2 },
        { 4, "m_ragdollAttachedObjectIndex", {0x1040, 0}, 1, 2 },
        { 3, "m_attachmentPointBoneSpace", {0x1044, 0}, 1, 2 },
        { 3, "m_attachmentPointRagdollSpace", {0x1050, 0}, 1, 2 },
        { 5, "m_bShouldDetach", {0x105c, 0}, 1, 2 },
        { 10, "m_pAttachConstraint", {0x1060, 0}, 1, 2, 0, sub_10045d90(5), (void *)0 },
    };
    g_1057e860[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1057e860[0] = (int)&dataDesc[1];
    return g_1057e860;
}
// END FUNCTION

// FUNCTION: 0x10156a80 size=0x1da
#include "CBaseEntity.h"
#include "CBaseAnimating.h"
#include "CRagdollProp.h"
#include "Vector.h"

void sub_10156ce0(CBaseAnimating *pAnimating);
void sub_10138720(float *pMatrix, int nColumn, float *pOut);
void sub_10138760(float *pIn, int nColumn, float *pMatrix);
CBaseEntity *sub_100a9ab0(const char *pszClass, const float *pOrigin, const float *pAngles, CBaseEntity *pOwner);
extern Vector g_1070d9d0;

struct CRagdollBones350
{
	float m_Mats[350][12];
};

struct CRagdollDamageView
{
	char m_pad0000[0x10];
	Vector m_vecForce10;
	Vector m_vecPosition1c;
	Vector GetDamageForce() const { return m_vecForce10; }
	Vector GetDamagePosition() const { return m_vecPosition1c; }
};

struct CRagdollEFlagsView
{
	char m_pad0000[0x268];
	unsigned int m_nFlags268;
	bool IsEFlagSet(unsigned int nMask) const { return (m_nFlags268 & nMask) != 0; }
};

// TARGET: sub_10156a80
CRagdollProp *sub_10156a80(CBaseAnimating *pAnimating, int forceBone, CRagdollDamageView *pInfo, int collisionGroup)
{
	sub_10156ce0(pAnimating);
	CRagdollProp *pRagdoll = (CRagdollProp *)sub_100a9ab0("prop_ragdoll", (const float *)((CRagdollProp *)pAnimating)->vfunc217(), &g_1070d9d0.x, 0);
	((CBaseAnimating *)pRagdoll)->sub_10097310(pAnimating);
	pRagdoll->sub_10155380();
	CRagdollBones350 bones;
	CRagdollBones350 next;
	((CRagdollProp *)pAnimating)->vfunc257(&bones, 0xfffc);
	next = bones;
	if (((CRagdollEFlagsView *)pAnimating)->IsEFlagSet(1 << 12))
		pAnimating->sub_100b1d10();
	{
		Vector vel = *(Vector *)((char *)pAnimating + 0x3bc);
		if (vel.LengthSqr() > 0.0f)
		{
			int nBones = *(int *)((char *)pAnimating->sub_100952d0(-1) + 0xf0);
			if (nBones > 0)
			{
				Vector vecDelta = vel * 0.1f;
				float *pMat = next.m_Mats[0];
				int i = nBones;
				do
				{
					sub_10138720(pMat, 3, &vel.x);
					vel += vecDelta;
					sub_10138760(&vel.x, 3, pMat);
					pMat += 12;
				} while (--i);
			}
		}
	}
	pRagdoll->sub_101554a0(pInfo->GetDamageForce(), forceBone, pInfo->GetDamagePosition(), &bones, &next, 0.1f, collisionGroup, 1);
	return pRagdoll;
}
// END FUNCTION

// FUNCTION: 0x10156ce0 size=0x35
#define P10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
    virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CUnk10156ce0Phys
{
    P10(a) P10(b) P10(c) P10(d)
    virtual void vfunc40();
    virtual void vfunc41();
    virtual void vfunc42();
    virtual void vfunc43();
    virtual void vfunc44();
    virtual void vfunc45();
    virtual void vfunc46();
    virtual void vfunc47(float *pOut, int flag);
};

struct CUnk10156ce0Owner
{
    P10(a) P10(b) P10(c) P10(d) P10(e) P10(f) P10(g) P10(h) P10(i) P10(j) P10(k)
    P10(l) P10(m) P10(n) P10(o) P10(p) P10(q) P10(r) P10(s) P10(t) P10(u)
    virtual void vfunc210();
    virtual void vfunc211();
    virtual void vfunc212();
    virtual void vfunc213();
    virtual void vfunc214();
    virtual void vfunc215();
    virtual void vfunc216(float *pVec);
    char m_pad0004[0x36c - 4];
    CUnk10156ce0Phys *m_pPhys;
};

// TARGET: sub_10156ce0
void sub_10156ce0(CUnk10156ce0Owner *pOwner)
{
    if (pOwner->m_pPhys != 0)
    {
        float vec[3];
        pOwner->m_pPhys->vfunc47(vec, 0);
        pOwner->vfunc216(vec);
    }
}
// END FUNCTION

// FUNCTION: 0x10156d30 size=0x8
void __fastcall sub_10156d30(char *p) { p[0x105c] = 1; }
// END FUNCTION

// FUNCTION: 0x10156d50 size=0x29
struct CUnit10156d50 {
    void sub_10156d50(int a);
    void sub_10006c2b();
    void sub_10001aeb(int a);
};

void CUnit10156d50::sub_10156d50(int a)
{
    if (*((char *)this + 0x105c) != 0) {
        sub_10006c2b();
        *((char *)this + 0x105c) = 0;
    }
    sub_10001aeb(a);
}
// END FUNCTION

// FUNCTION: 0x10156d90 size=0x57
#include "CRagdollPropAttached.h"
class IPhysEnvX {
public:
    virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
    virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
    virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
    virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
    virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23(void *p);
};
extern IPhysEnvX *g_10723940;
extern float g_1070d9d0[3];
void CRagdollPropAttached::sub_10156d90()
{
    vfunc202(0);
    vfunc218(g_1070d9d0);
    vfunc93(7, 0);
    g_10723940->vfunc23(m_pPhysObj1060);
    m_pPhysObj1060 = 0;
    sub_100aaa40(1);
    sub_10155a30();
}
// END FUNCTION

// FUNCTION: 0x10156e10 size=0x36a
#include "CRagdollPropAttached.h"
#include "CEntityVSlots.h"

class CUnknown10029130
{
public:
	void sub_10029130(int a, int b, int c);
	int m_n0000;
	int m_n0004;
	int m_n0008;
	int m_n000c;
};

struct CAttachBodyView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25();
	virtual void v26(Vector *pOut, const Vector *pIn);
	virtual void v27(Vector *pOut, int a);
	virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32();
	virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37();
	virtual void v38(float *pMatrix);
};

struct CAttachEnvView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11();
	virtual void *v12(void *pRef, void *pAttached, void *pGroup, void *pParams);
};
extern CAttachEnvView *g_10723940;
extern Vector g_1070d1b0;

struct CAttachRagdollParams
{
	float m_toRef[12];
	float m_toAttached[12];
	int m_parent;
	int m_child;
	float m_ax0[4];
	float m_ax1[4];
	float m_ax2[4];
	bool m_bOnlyAngular;
	bool m_bActive;
	bool m_bClockwise;
	Vector m_pos;
	Vector m_local;
};

void sub_10139a90(float *m);
void sub_10139b50(Vector *a, Vector *b, float *c);
void sub_10138630(float *a, float *b);
void sub_10138df0(float *a, float *b, float *c);
void sub_10138760(Vector *a, int n, float *m);
void sub_10138720(float *m, int n, Vector *out);
void sub_10158b40(void *a, void *b);
void sub_1019bfd0(void *p);

// TARGET: CRagdollPropAttached::sub_10156e10
void CRagdollPropAttached::sub_10156e10(void *pAttached, int a2, int a3, int a4, int a5, int a6, int a7, CBaseEntity *pOther,
	int nBone, const Vector *pAttachPoint, int a11, int a12)
{
	int idx = 0;
	if (a11 > 0)
	{
		char *pModel = (char *)((CRagdollProp *)this)->sub_100952d0(-1);
		idx = *(int *)(pModel + *(int *)(pModel + 0xf4) + a11 * 0xa0 + 0x94);
	}
	sub_101554a0((const float *)a2, a3, (const float *)&g_1070d1b0, (void *)a4, (void *)a5, *(float *)&a6, a7, 0);
	CAttachBodyView *pBody = (CAttachBodyView *)m_Bodies[idx].m_pObject;
	CAttachRagdollParams p;
	pBody->v27(&p.m_pos, a12);
	p.m_bActive = true;
	sub_10139a90(p.m_toRef);
	sub_10139a90(p.m_toAttached);
	p.m_parent = -1;
	p.m_child = -1;
	((CUnknown10029130 *)p.m_ax0)->sub_10029130(0, 0, 0);
	((CUnknown10029130 *)p.m_ax1)->sub_10029130(0, 0, 0);
	p.m_ax2[0] = 0;
	p.m_ax2[1] = 0;
	p.m_ax2[2] = 0;
	p.m_ax2[3] = 0;
	p.m_bOnlyAngular = false;
	p.m_bClockwise = false;
	((CAttachBodyView *)pAttached)->v26(&p.m_local, pAttachPoint);
	float *pf = (float *)((CEntityVSlots *)pOther)->slot219();
	Vector vecAng(0, pf[1], 0);
	float mE0[12];
	float m110[12];
	float m2[2][12];
	sub_10139b50(&vecAng, &p.m_local, m110);
	p.m_ax0[0] = -2.0f;
	p.m_ax0[1] = 2.0f;
	p.m_ax0[2] = 0;
	p.m_ax0[3] = 20.0f;
	p.m_ax1[0] = 0;
	p.m_ax1[1] = 0;
	p.m_ax1[2] = 0;
	p.m_ax1[3] = 0;
	p.m_ax2[0] = -15.0f;
	p.m_ax2[1] = 15.0f;
	p.m_ax2[2] = 0;
	p.m_ax2[3] = 20.0f;
	((CAttachBodyView *)pAttached)->v38(mE0);
	sub_10138630(mE0, m2[1]);
	pBody->v38(mE0);
	sub_10138630(mE0, m2[0]);
	sub_10138df0(m2[0], m110, p.m_toRef);
	sub_10138df0(m2[1], m110, p.m_toAttached);
	sub_10138760(&p.m_pos, 3, p.m_toRef);
	sub_10158b40(pAttached, (void *)m_Bodies[0].m_pObject);
	m_pPhysObj1060 = g_10723940->v12(pBody, pAttached, *(void **)((char *)this + 0x734), &p);
	vfunc202(pOther);
	sub_1019bfd0(&m_nBodies730);
	m_boneIndexAttached = nBone;
	m_ragdollAttachedObjectIndex = idx;
	m_attachmentPointBoneSpace = *pAttachPoint;
	Vector vecOut;
	sub_10138720(p.m_toRef, 3, &vecOut);
	m_attachmentPointRagdollSpace = vecOut;
}
// END FUNCTION

// FUNCTION: 0x10157260 size=0xc0
#include "CRagdollProp.h"
#include "CEntityVSlots.h"

extern Vector g_1070d9d0;	// vec3_angle

struct CMat3x4Y
{
	float m[3][4];
};

struct CRagdollAttachUnit : CRagdollProp
{
	void sub_10097310(CBaseEntity *pOther);	// CopyAnimationDataFrom (stub 0x100107e4)
	void sub_10155380();	// stub 0x10007991
	void sub_10156e10(void *pAttached, const Vector &vecForce, int forceBone, void *pPrevBones, void *pBones, float dt, int collisionGroup, void *pParent, int boneAttach, const Vector &boneOrigin, int parentBoneAttach, const Vector &originParent);	// InitRagdollAttached (stub 0x10008aee)
};

CBaseEntity *sub_100a9ab0(const char *pszClassname, const Vector *pOrigin, const Vector *pAngles, CBaseEntity *pOwner);

CRagdollProp *sub_10157260(CRagdollProp *pAnimating, const Vector &vecForce, int forceBone, int collisionGroup, void *pAttached, void *pParentEntity, int boneAttach, const Vector &originAttached, int parentBoneAttach, const Vector &boneOrigin)
{
	CRagdollAttachUnit *pRagdoll = (CRagdollAttachUnit *)sub_100a9ab0("prop_ragdoll_attached", ((CEntityVSlots *)pAnimating)->slot217(), &g_1070d9d0, 0);
	pRagdoll->sub_10097310(pAnimating);
	pRagdoll->sub_10155380();
	CMat3x4Y pBoneToWorld[350];
	pAnimating->vfunc257(pBoneToWorld, 0xfffc);
	pRagdoll->sub_10156e10(pAttached, vecForce, forceBone, pBoneToWorld, pBoneToWorld, 0.1f, collisionGroup, pParentEntity, boneAttach, boneOrigin, parentBoneAttach, originAttached);
	return pRagdoll;
}
// END FUNCTION

// FUNCTION: 0x10157350 size=0x27
#include "CRagdollPropAttached.h"

// TARGET: sub_10157350
void sub_10157350(CBaseEntity *pEnt)
{
	CRagdollPropAttached *p = dynamic_cast<CRagdollPropAttached *>(pEnt);
	if (p)
		p->sub_10156d30();
}
// END FUNCTION

// FUNCTION: 0x10157390 size=0xda
#include "vampire.h"
#include "CRagdollProp.h"
#include "StudioHdr.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);

struct StudioHdrLookup : StudioHdr
{
	int BoneIndexByName(const char *pName)
	{
		for (int i = 0; i < m_nBones; i++)
		{
			const char *psz = Bone(i)->Name();
			if (!_strcmpi(psz, pName))
				return i;
		}
		return -1;
	}
};

int CRagdollProp::vfunc265(const char *pszBone)
{
	StudioHdrLookup *pStudioHdr = (StudioHdrLookup *)sub_100952d0(-1);
	if (!pStudioHdr)
		return m_Bodies[0].m_pObject;

	int boneIndex = pStudioHdr->BoneIndexByName(pszBone);
	while (boneIndex >= 0)
	{
		for (int i = 0; i < m_nBodies730; i++)
		{
			if (((int *)((char *)this + 0xa08))[i] == boneIndex)
				return m_Bodies[i].m_pObject;
		}
		boneIndex = pStudioHdr->Bone(boneIndex)->m_iParent;
	}
	return m_Bodies[0].m_pObject;
}
// END FUNCTION

// FUNCTION: 0x101574b0 size=0x5d
#include "CRagdollProp.h"

struct CRagdollPropBodyObj	// the body's physics object (only the slots used)
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23(); virtual void vfunc24();
	virtual void vfunc25(); virtual void vfunc26(); virtual void vfunc27(); virtual void vfunc28(); virtual void vfunc29();
	virtual void vfunc30(); virtual void vfunc31(); virtual void vfunc32(); virtual void vfunc33(); virtual void vfunc34();
	virtual void vfunc35(); virtual void vfunc36(); virtual void vfunc37(); virtual void vfunc38();
	virtual void vfunc39(int a, float *pVec);
	virtual void vfunc40(float *pVec1, float *pVec2);
};

void CRagdollProp::vfunc266(int a, int unused)
{
	for (int i = 0; i < m_nBodies730; i++)
	{
		CRagdollPropBodyObj *pObj = (CRagdollPropBodyObj *)m_Bodies[i].m_pObject;
		float vecA[3];
		float vecB[3];
		pObj->vfunc40(vecA, vecB);
		pObj->vfunc39(a, vecB);
	}
}
// END FUNCTION

// FUNCTION: 0x10157530 size=0x53
#include "platform.h"
void *sub_100aa720(unsigned int size);

extern int vt_1046e774;
extern char g_10580018[];

struct CInstancedSceneEntityCtorCall
{
	void sub_101550d0();
};

#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();

struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};

// TARGET: prop_ragdoll_special
DLL_EXPORT GP *prop_ragdoll_special()
{
	GP *p = (GP *)sub_100aa720(0x1054);
	if (p) {
		((CInstancedSceneEntityCtorCall *)p)->sub_101550d0();
		*(int *)((char *)p + 0x1050) = -1;
		*(int **)p = &vt_1046e774;
	} else {
		p = 0;
	}
	p->name(g_10580018);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101575b0 size=0x6
#include "CRagdollPropSpecial.h"
#include "datamap.h"
namespace lifted {
extern char g_1057e9ac;
}
datamap_t * CRagdollPropSpecial::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1057e9ac);
}
// END FUNCTION

// FUNCTION: 0x101575d0 size=0x5
int sub_10157610(void);
int g_10723250 = ((int (*)(int))sub_10157610)(0);
// END FUNCTION

// FUNCTION: 0x10157610 size=0x1a
namespace lifted {
extern int g_1057e9ac;
extern int g_1057e9b0;
extern char g_1057e9f4;
}
int sub_10157610()
{
    lifted::g_1057e9b0 = 4;
    lifted::g_1057e9ac = (int)&lifted::g_1057e9f4;
    return (int)&lifted::g_1057e9ac;
}
// END FUNCTION

// FUNCTION: 0x10157640 size=0x22
#include "CRagdollPropSpecial.h"
void CRagdollPropSpecial::vfunc113()
{
	CBaseEntity::vfunc113();
	m_b103c = 1;
	m_f1044 = 100.0f;
	m_f1048 = 100.0f;
}
// END FUNCTION

// FUNCTION: 0x10157680 size=0x22
// TARGET: CRagdollPropSpecial::vfunc73
#include "CRagdollPropSpecial.h"
bool CRagdollPropSpecial::vfunc73(CBaseEntity *pOther)
{
    if (*(int *)((char *)pOther + 0x9c) != 0) {
        if (m_b103c != 0) {
            return false;
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x101576c0 size=0x14e
#include "CBaseEntity.h"
#include "CRagdollPropSpecial.h"
struct CPhysObjStub {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void GetVelocity(float *pVel, int a);
};
struct CPhysDamageInfo {
	char m_data[0x4c];
	void sub_101c26d0(CBaseEntity *pInflictor, CBaseEntity *pAttacker, float flDamage, int a, int b, int c, int d);
};
extern float (__cdecl *g_10579660)(float);
CBaseEntity *__fastcall sub_100a8240(CBaseEntity *p);
void sub_10032720(CBaseEntity *pEnt, CPhysDamageInfo *pInfo);

// TARGET: CRagdollPropSpecial::vfunc174
void CRagdollPropSpecial::vfunc174(CBaseEntity *pOther)
{
	if (*(int *)((char *)pOther + 0x9c) && m_b103c && m_obj36c)
	{
		float vel[3];
		((CPhysObjStub *)m_obj36c)->GetVelocity(vel, 0);
		float speed = g_10579660(vel[0] * vel[0] + vel[2] * vel[2] + vel[1] * vel[1]);
		if (speed > m_f1044)
		{
			float damage;
			if (m_f1048 == m_f1044)
				damage = m_f1040;
			else
			{
				float range = m_f1048 - m_f1044;
				float c = (m_f1048 < speed) ? m_f1048 : (m_f1044 > speed) ? m_f1044 : speed;
				damage = (c - m_f1044) / range * m_f1040;
			}
			CBaseEntity *pAttacker;
			if (!sub_100a8240(this))
				pAttacker = this;
			else
				pAttacker = sub_100a8240(this);
			CPhysDamageInfo info;
			info.sub_101c26d0(this, pAttacker, damage, 1, 0, 0, -1);
			sub_10032720(pOther, &info);
			m_b103c = 0;
		}
	}
	sub_10157ca0(pOther);
}
// END FUNCTION

// FUNCTION: 0x10157870 size=0xd
#include "CRagdollPropSpecial.h"
struct RagdollField1040 { char pad[0x1040]; int m; };
void CRagdollPropSpecial::vfunc191(int value)
{
	((RagdollField1040 *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x10157890 size=0xd
#include "CUnknown101578b0.h"

void CUnknown101578b0::sub_10157890(char value)
{
	m_bFlag103c = value;
}
// END FUNCTION

// FUNCTION: 0x101578b0 size=0xc
#include "CUnknown101578b0.h"
bool CUnknown101578b0::sub_101578b0()
{
	bool r = (m_flags204 >> 4) & 1;
	return r;
}
// END FUNCTION

// FUNCTION: 0x101578d0 size=0x24
class CUnknown101578d0
{
public:
	char pad0[0x204];
	unsigned int m_flags204;

	void sub_101578d0(char on);
};

// TARGET: CUnknown101578d0::sub_101578d0
void CUnknown101578d0::sub_101578d0(char on)
{
	if (on)
		m_flags204 |= 16;
	else
		m_flags204 &= ~16;
}
// END FUNCTION

// FUNCTION: 0x10157910 size=0xd
#include "CUnknown101578b0.h"
void CUnknown101578b0::sub_10157910(int value)
{
	m_unk104c = value;
}
// END FUNCTION

// FUNCTION: 0x10157930 size=0x213
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CRagdollPropSpecial.h"
#include "CParamsExplosion.h"
#include "CGlobalEntityList.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "CCollisionProperty.h"

__declspec(dllimport) void Warning(const char *pszFormat, ...);
extern "C" void *__cdecl __RTDynamicCast(void *pObj, long nVfDelta, void *pSrcType, void *pTargetType, int bReference);
extern char g_10538764[];
extern char g_1056b4b8[];
extern CGlobalEntityList g_106eb5d8;
int sub_101cf600(int);
void sub_101cd940(char *pEnt);
void sub_10192130(int modelIndex, void *pPhysics, const float *pOrigin, const float *pAngles, const float *pVelocity, const float *pAngVelocity, int a, int b, int c, char d);
void sub_10104730(const Vector &vecCenter, const float *pAngles, int *pParams, CBaseEntity *pOwner);

struct CRagdollPhysView
{
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3)
	virtual void slot40(float *pVelocity, float *pAngVelocity);
};

struct CRagdollVirt
{
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7)
	virtual int slot8();
	EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18)
	EVS(190) EVS(191)
	virtual Vector slot192();
	EVS(193) EVS(194) EVS(195) EVS(196) EVS(197) EVS(198) EVS(199)
	EVS10(20)
	EVS(210) EVS(211) EVS(212) EVS(213) EVS(214) EVS(215) EVS(216)
	virtual float *slot217();
	EVS(218)
	virtual float *slot219();
};

struct CRagdollFlags
{
	unsigned int m_flags;
	bool Test() { return ((m_flags >> 12) & 1) != 0; }
};

// TARGET: CRagdollPropSpecial::sub_10157930
void CRagdollPropSpecial::sub_10157930(CBaseEntity *pAttacker)
{
	if (m_flags204 & 0x10) {
		m_hAttacker1050 = pAttacker;
		CRagdollPhysView *pPhysics = (CRagdollPhysView *)m_obj36c;
		m_field200 = 2;
		m_nTakeDamage = 0;
		Vector vecVelocity;
		Vector vecAngVelocity;
		if (pPhysics) {
			pPhysics->slot40(&vecVelocity.x, &vecAngVelocity.x);
		} else {
			if (((CRagdollFlags *)&m_flags268)->Test())
				sub_100b1d10();
			vecVelocity.x = m_vecVelocity3bc[0];
			vecVelocity.y = m_vecVelocity3bc[1];
			vecVelocity.z = m_vecVelocity3bc[2];
			vecAngVelocity.x = m_angVel3c8[2];
			vecAngVelocity.y = m_angVel3c8[0];
			vecAngVelocity.z = m_angVel3c8[1];
		}
		{
			ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
			((CCollisionProperty *)m_pad0270)->AddSolidFlags(4);
		}
		sub_101cf600((int)this);
		if (m_pszExplosion104c) {
			CParamsExplosion *pExplosion = (CParamsExplosion *)__RTDynamicCast(g_106eb5d8.sub_100f7770(0, m_pszExplosion104c, pAttacker, 0), 0, g_10538764, g_1056b4b8, 0);
			if (pExplosion)
				sub_10104730(((CRagdollVirt *)this)->slot192(), ((CRagdollVirt *)this)->slot219(), pExplosion->sub_10104510(), this);
			else
				Warning("%s could not find explosion parameters: %s\n", sub_1000b5cd(), m_pszExplosion104c ? m_pszExplosion104c : g_106b8540);
		}
		CRagdollVirt *pVirt = (CRagdollVirt *)this;
		sub_10192130(pVirt->slot8(), pPhysics, pVirt->slot217(), pVirt->slot219(), &vecVelocity.x, &vecAngVelocity.x, m_nDC, 0, 0, 0);
		sub_101cd940((char *)this);
	}
}
// END FUNCTION

// FUNCTION: 0x10157be0 size=0x8c
#include "CRagdollPropSpecial.h"
#include "IPhysicsObject.h"

struct CCollisionEventX
{
	char m_pad0000[0x68];
	CBaseEntity *m_pEntities[2];	// 0x68
};

void CRagdollPropSpecial::vfunc230(int index, void *pEvent)
{
	CBaseEntity::vfunc230(index, pEvent);
	CBaseEntity *pOther = ((CCollisionEventX *)pEvent)->m_pEntities[index == 0];
	if (pOther && pOther != this) {
		IPhysicsObject *pPhysics = (IPhysicsObject *)m_obj36c;
		if (pPhysics) {
			Vector vecVelocity;
			pPhysics->vfunc40(&vecVelocity.x, 0);
			if (vecVelocity.Length() > 150.0)
				sub_10157ca0(pOther);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10157ca0 size=0x6a
#include "CRagdollPropSpecial.h"

void CRagdollPropSpecial::sub_10157ca0(CBaseEntity *pOwner)
{
    if (*(unsigned char *)((char *)this + 0x204) & 0x10) {
        if (pOwner)
            *(unsigned int *)((char *)this + 0x1050) = *pOwner->vfunc1();
        else
            *(unsigned int *)((char *)this + 0x1050) = 0xffffffff;
        sub_100ac4e0(&CRagdollPropSpecial::sub_10015424, 0, 0);
        *(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.001;
        *(int *)((char *)this + 0x1fc) = 0;
        *(int *)((char *)this + 0x200) = 1;
    }
}
// END FUNCTION

// FUNCTION: 0x10157d30 size=0x48
#include "CBaseEntity.h"
struct CUnitEnt : CBaseEntity {
    char pad[0x1050 - sizeof(CBaseEntity)];
    EHANDLE m_h1050;
    void sub_10157930(CBaseEntity *p);
    void sub_10157d30();
};
void CUnitEnt::sub_10157d30()
{
    sub_10157930(m_h1050.Get());
    sub_100ac4e0(0, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x10157da0 size=0x22e
#include "CBaseEntity.h"
#include "CBaseAnimating.h"
#include "CRagdollProp.h"
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"
#include "Vector.h"

void sub_10156ce0(CBaseAnimating *pAnimating);
void sub_10138720(float *pMatrix, int nColumn, float *pOut);
void sub_10138760(float *pIn, int nColumn, float *pMatrix);
CBaseEntity *sub_100a9ab0(const char *pszClass, const float *pOrigin, const float *pAngles, CBaseEntity *pOwner);
extern Vector g_1070d9d0;

struct CUnit10155460
{
	void sub_10155460(int a);
};

struct CRagdollBones350b
{
	float m_Mats[350][12];
};

struct CRagdollDamageViewB
{
	char m_pad0000[0x10];
	Vector m_vecForce10;
	Vector m_vecPosition1c;
	Vector GetDamageForce() const { return m_vecForce10; }
	Vector GetDamagePosition() const { return m_vecPosition1c; }
};

struct CRagdollEFlagsViewB
{
	char m_pad0000[0x268];
	unsigned int m_nFlags268;
	bool IsEFlagSet(unsigned int nMask) const { return (m_nFlags268 & nMask) != 0; }
};

struct CRagdollSpecialView
{
	char m_pad0000[0xdc];
	float m_flDC;
	char m_pad00e0[0x270 - 0xe0];
	char m_Collision270[0xd60 - 0x270];
	int m_nD60;
};

// TARGET: sub_10157da0
CRagdollProp *sub_10157da0(CBaseAnimating *pAnimating, int forceBone, CRagdollDamageViewB *pInfo, int collisionGroup)
{
	sub_10156ce0(pAnimating);
	CRagdollProp *pRagdoll = (CRagdollProp *)sub_100a9ab0("prop_ragdoll_special", (const float *)((CRagdollProp *)pAnimating)->vfunc217(), &g_1070d9d0.x, 0);
	((CBaseAnimating *)pRagdoll)->sub_10097310(pAnimating);
	pRagdoll->sub_10155380();
	CRagdollBones350b bones;
	CRagdollBones350b next;
	((CRagdollProp *)pAnimating)->vfunc257(&bones, 0xfffc);
	next = bones;
	if (((CRagdollEFlagsViewB *)pAnimating)->IsEFlagSet(1 << 12))
		pAnimating->sub_100b1d10();
	{
		Vector vel = *(Vector *)((char *)pAnimating + 0x3bc);
		if (vel.LengthSqr() > 0.0f)
		{
			int nBones = *(int *)((char *)pAnimating->sub_100952d0(-1) + 0xf0);
			if (nBones > 0)
			{
				Vector vecDelta = vel * 0.1f;
				float *pMat = next.m_Mats[0];
				int i = nBones;
				do
				{
					sub_10138720(pMat, 3, &vel.x);
					vel += vecDelta;
					sub_10138760(&vel.x, 3, pMat);
					pMat += 12;
				} while (--i);
			}
		}
	}
	pRagdoll->sub_101554a0(pInfo->GetDamageForce(), forceBone, pInfo->GetDamagePosition(), &bones, &next, 0.1f, collisionGroup, 1);
	((CEntityVSlots *)pRagdoll)->slot113();
	CRagdollSpecialView *pView = (CRagdollSpecialView *)pRagdoll;
	pView->m_nD60 = 0;
	((CUnit10155460 *)pRagdoll)->sub_10155460(-1);
	if (pView->m_flDC == 0.0f)
		pView->m_flDC = 0.1f;
	CCollisionProperty *pCollision = (CCollisionProperty *)pView->m_Collision270;
	if (pCollision)
		pCollision->sub_100ddd90();
	((CBaseEntity *)pRagdoll)->sub_100b3900(2);
	return pRagdoll;
}
// END FUNCTION

// FUNCTION: 0x10158060 size=0x5
#include "CRagdollProp.h"
int __cdecl sub_102587f0();
// TARGET: CRagdollProp::vfunc36
// the game's 0x10158060: a tail call (jmp) of sub_102587f0
int CRagdollProp::vfunc36()
{
	return sub_102587f0();
}
// END FUNCTION

// FUNCTION: 0x10158080 size=0x2e
#include "CRagdollProp.h"
// TARGET: CRagdollProp::vfunc32
void *sub_104115b0(int a, int b);

bool CRagdollProp::vfunc32(int a)
{
    if ((m_flags204 & 0x20) == 0)
    {
        return (void *)this == sub_104115b0(a, 0);
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x101580c0 size=0xe
#include "CBaseEntity.h"
#include "CRagdollProp.h"
namespace lifted {
int sub_10010ec9(int);
}
void CRagdollProp::vfunc39(CBaseEntity * a0)
{
    lifted::sub_10010ec9(*(int *)&a0);
}
// END FUNCTION

// FUNCTION: 0x101580e0 size=0xe
#include "CRagdollProp.h"

void sub_1040d950(int a);

void CRagdollProp::vfunc41(int a)
{
	sub_1040d950(a);
}
// END FUNCTION

// FUNCTION: 0x10158100 size=0xe
// TARGET: sub_10158100
void sub_1040d9a0(int x);

void __stdcall sub_10158100(int x)
{
    sub_1040d9a0(x);
}
// END FUNCTION
