// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 63 blocks
#include "vampire.h"

// FUNCTION: 0x1002a090 size=0x6
#include "datamap.h"
#include "CPhysConstraintSystem.h"
namespace lifted {
extern char g_10538b18;
}
datamap_t *CPhysConstraintSystem::vfunc82()
{
    return (datamap_t *)&lifted::g_10538b18;
}
// END FUNCTION

// FUNCTION: 0x1002a0b0 size=0x5
int * sub_1002a0f0(void);
int * g_106b8578 = ((int * (*)(int))sub_1002a0f0)(0);
// END FUNCTION

// FUNCTION: 0x1002a0f0 size=0x54
#include "datamap.h"
extern int g_10538b18[2];
ISaveRestoreOps *sub_10045d90(int);

int *sub_1002a0f0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 10, "m_pMachine", {0x450, 0}, 1, 2, 0, sub_10045d90(4), 0 },
    };
    g_10538b18[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10538b18[0] = (int)&dataDesc[1];
    return g_10538b18;
}
// END FUNCTION

// FUNCTION: 0x1002a170 size=0x16
#include "CPhysConstraintSystem.h"
struct IPhysicsEnvironmentLike { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void *v19(); };
extern IPhysicsEnvironmentLike *g_10723940;

// TARGET: CPhysConstraintSystem::vfunc103
void CPhysConstraintSystem::vfunc103()
{
	m_pSystem = g_10723940->v19();
}
// END FUNCTION

// FUNCTION: 0x1002a1a0 size=0x4b
#include "platform.h"
#include "CPhysConstraintSystem.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_10446c24[];	// CPhysConstraintSystem vftable
extern const char g_105393d4[];

// TARGET: phys_constraintsystem
DLL_EXPORT CBaseEntity *phys_constraintsystem()
{
	void *mem = sub_100aa720(0x454);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_10446c24;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_105393d4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1002a210 size=0x153
#include "matrix3x4_t.h"
#include "QAngle.h"
#define R10(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3(); virtual void x##4(); virtual void x##5(); virtual void x##6(); virtual void x##7(); virtual void x##8(); virtual void x##9();
struct EntView;
struct PhysObjView {
	virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5();
	virtual EntView *GetGameData();
};
struct EntView {
	R10(a0) R10(a1) R10(a2) R10(a3) R10(a4) R10(a5) R10(a6) R10(a7) R10(a8)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3();
	virtual int GetMoveType();
	R10(c0) R10(c1) R10(c2) R10(c3) R10(c4) R10(c5) R10(c6) R10(c7)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
	virtual void Teleport(const Vector *origin, const QAngle *angles, const Vector *velocity);
	R10(e0) R10(e1) R10(e2)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6();
	virtual const Vector *GetAbsAngles();
	char m_pad[0x130 - 4];
	matrix3x4_t m_frame;
};
void sub_10139b50(const Vector &, const QAngle &, matrix3x4_t &);
void sub_10138630(const matrix3x4_t &, matrix3x4_t &);
void sub_10138df0(const matrix3x4_t &, const matrix3x4_t &, matrix3x4_t &);
void sub_10138720(const matrix3x4_t &, int, Vector &);
void sub_10137ed0(const matrix3x4_t &, QAngle &);
extern void (*g_109f3628)(const char *, ...);

// TARGET: sub_1002a210
void sub_1002a210(EntView *pSelf, PhysObjView *pObj1, PhysObjView *pObj2, const QAngle *pAngles, const Vector *pOrigin, bool bUseOrigin)
{
	EntView *pEnt1 = pObj1->GetGameData();
	EntView *pEnt2 = pObj2->GetGameData();
	if (!pEnt1 || !pEnt2)
		return;
	EntView *pOther = pEnt2;
	if (pSelf != pEnt1) {
		if (pSelf != pEnt2) {
			g_109f3628("Bogus teleport notification!!\n");
			return;
		}
		pOther = pEnt1;
	}
	if (pOther->GetMoveType() != 7)
		return;
	Vector vecPos = *pOrigin;
	if (!bUseOrigin)
		vecPos = *pSelf->GetAbsAngles();
	matrix3x4_t matLocal, matInv, matA, matB;
	Vector vecOut;
	QAngle angOut;
	sub_10139b50(vecPos, *pAngles, matLocal);
	sub_10138630(matLocal, matInv);
	sub_10138df0(pSelf->m_frame, matInv, matA);
	sub_10138df0(matA, pOther->m_frame, matB);
	sub_10138720(matB, 3, vecOut);
	sub_10137ed0(matB, angOut);
	pOther->Teleport(&vecOut, &angOut, 0);
}
// END FUNCTION

// FUNCTION: 0x1002a3d0 size=0x6
#include "datamap.h"
#include "CPhysConstraint.h"
namespace lifted {
extern char g_10538b88;
}
datamap_t *CPhysConstraint::vfunc82()
{
    return (datamap_t *)&lifted::g_10538b88;
}
// END FUNCTION

// FUNCTION: 0x1002a3f0 size=0x5
int * sub_1002a430(void);
int * g_106b857c = ((int * (*)(int))sub_1002a430)(0);
// END FUNCTION

// FUNCTION: 0x1002a430 size=0x414
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
extern ISaveRestoreOps *g_1055dc70;
extern int g_10538b88[2];
ISaveRestoreOps *sub_10045d90(int type);
void sub_1000a2f4();
void sub_10009eee();
void sub_1002af70();
void sub_1002af90();

int *sub_1002a430()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 10, "m_pConstraint", {0x450, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 2, "m_nameSystem", {0x460, 0}, 1, 6, "constraintsystem", 0, 0 },
        { 2, "m_nameAttach1", {0x454, 0}, 1, 6, "attach1", 0, 0 },
        { 2, "m_nameAttach2", {0x458, 0}, 1, 6, "attach2", 0, 0 },
        { 17, "m_breakSound", {0x45c, 0}, 1, 6, "breaksound", 0, 0 },
        { 1, "m_forceLimit", {0x464, 0}, 1, 6, "forcelimit", 0, 0 },
        { 1, "m_torqueLimit", {0x468, 0}, 1, 6, "torquelimit", 0, 0 },
        { 10, "m_OnBreak", {0x470, 0}, 1, 0x16, "OnBreak", g_1055dc70 },
        { 0, "InputBreak", {0, 0}, 1, 8, "Break", 0, (void *)sub_1000a2f4 },
        { 0, "InputOnBreak", {0, 0}, 1, 8, "ConstraintBroken", 0, (void *)sub_10009eee },
        { 0, "InputTurnOn", {0, 0}, 1, 8, "TurnOn", 0, (void *)sub_1002af70 },
        { 0, "InputTurnOff", {0, 0}, 1, 8, "TurnOff", 0, (void *)sub_1002af90 },
    };
    g_10538b88[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10538b88[0] = (int)&dataDesc[1];
    return g_10538b88;
}
// END FUNCTION

// FUNCTION: 0x1002a960 size=0x1a6
#include "CPhysConstraint.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "engineserver.h"

void sub_101b1120(CRecipientFilter *f, int ent, int chan, const char *name, float vol, float attn, int flags, int pitch, int a, int b, int c);
void sub_10158af0(PhysObjView *a, PhysObjView *b);
void sub_101cd940(void *p);
extern char g_106b8540[];

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

inline void PhysClearGameFlags(PhysObjView *pObject, unsigned short clearFlags)
{
	unsigned short flags = pObject->GetGameFlags();
	flags &= ~clearFlags;
	pObject->SetGameFlags(flags);
}

struct CPhysConstraintUnit : CPhysConstraint
{
	void sub_1002ad20(PhysObjView *p);
	void ClearStaticFlag(PhysObjView *pObj)
	{
		if (!pObj)
			return;
		PhysClearGameFlags(pObj, 2);
	}
	void Deactivate()
	{
		m_pConstraint450->vfunc2();
		ClearStaticFlag(m_pConstraint450->vfunc5());
		sub_1002ad20(m_pConstraint450->vfunc6());
		if (m_spawnflags204 & 1) {
			PhysObjView *a = m_pConstraint450->vfunc5();
			PhysObjView *b = m_pConstraint450->vfunc6();
			if (a && b)
				sub_10158af0(a, b);
		}
	}
	void *edict() { return m_pEdict2e0; }
	int entindex() { return engine->vfunc35((int)edict()); }
	void OnBreak()
	{
		Deactivate();
		if (m_psz45c) {
			CPASAttenuationFilter filter((CEntitySoundOriginView *)this, 1.25f);
			sub_101b1120(&filter, entindex(), 6, STRINGR(m_psz45c), 1.0f, 1.25f, 0, 100, 0, 0, 0);
		}
		m_OnBreak470.sub_100cd660(this, this, 0);
		sub_101cd940(this);
	}
};

void CPhysConstraint::sub_1002a960(int unused)
{
	m_pConstraint450->vfunc2();
	((CPhysConstraintUnit *)this)->OnBreak();
}
// END FUNCTION

// FUNCTION: 0x1002ab80 size=0x68
extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);
extern int vt_10447108[];

struct TFilterX {
	int *vptr;
	int pad;
	void *p;
	int count;
	int grow;
	int size;
	void *elems;
	TFilterX *sub_1002ab80(unsigned char flags);
};

TFilterX *TFilterX::sub_1002ab80(unsigned char flags)
{
	size = 0;
	if (grow != -1) {
		if (p) {
			Plat_Free(p);
			p = 0;
		}
		count = 0;
	}
	void *e = p;
	int g = grow;
	elems = e;
	if (g != -1) {
		if (e) {
			Plat_Free(e);
			p = 0;
		}
		count = 0;
	}
	vptr = vt_10447108;
	if (flags & 1)
		delete this;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1002ac10 size=0x20
#include "IRecipientFilter.h"

struct DummyFilter : IRecipientFilter
{
	void vfunc1() {}
	int vfunc2() { return 0; }
	int vfunc3(int) { return 0; }
	char vfunc4() { return 0; }
	void vfunc5() {}
	void vfunc6() {}
	void vfunc7() {}
};

DummyFilter g_dummy;
// TARGET: ??_GIRecipientFilter@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1002ac40 size=0xa2
#include "CPASAttenuationFilter.h"

// TARGET: ??_GCPASAttenuationFilter@@UAEPAXI@Z
CPASAttenuationFilter::CPASAttenuationFilter() {}
// END FUNCTION

// FUNCTION: 0x1002ad20 size=0x21
struct CUnkVT1002ad20
{
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7(int flags);
    virtual int vf8();
};

// TARGET: sub_1002ad20
void __stdcall sub_1002ad20(CUnkVT1002ad20 *p)
{
    if (p) {
        int flags = p->vf8();
        p->vf7(flags & 0xfffd);
    }
}
// END FUNCTION

// FUNCTION: 0x1002ad60 size=0x19b
#include "CPhysConstraint.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "engineserver.h"

void sub_101b1120(CRecipientFilter *f, int ent, int chan, const char *name, float vol, float attn, int flags, int pitch, int a, int b, int c);
void sub_10158af0(PhysObjView *a, PhysObjView *b);
void sub_101cd940(void *p);
extern char g_106b8540[];

namespace block_1002ad60 {

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

inline void PhysClearGameFlags(PhysObjView *pObject, unsigned short clearFlags)
{
	unsigned short flags = pObject->GetGameFlags();
	flags &= ~clearFlags;
	pObject->SetGameFlags(flags);
}

struct CPhysConstraintUnit : CPhysConstraint
{
	void sub_1002ad20(PhysObjView *p);
	void ClearStaticFlag(PhysObjView *pObj)
	{
		if (!pObj)
			return;
		PhysClearGameFlags(pObj, 2);
	}
	void Deactivate()
	{
		m_pConstraint450->vfunc2();
		ClearStaticFlag(m_pConstraint450->vfunc5());
		sub_1002ad20(m_pConstraint450->vfunc6());
		if (m_spawnflags204 & 1) {
			PhysObjView *a = m_pConstraint450->vfunc5();
			PhysObjView *b = m_pConstraint450->vfunc6();
			if (a && b)
				sub_10158af0(a, b);
		}
	}
	void *edict() { return m_pEdict2e0; }
	int entindex() { return engine->vfunc35((int)edict()); }
	void OnBreak()
	{
		Deactivate();
		if (m_psz45c) {
			CPASAttenuationFilter filter((CEntitySoundOriginView *)this, 1.25f);
			sub_101b1120(&filter, entindex(), 6, STRINGR(m_psz45c), 1.0f, 1.25f, 0, 100, 0, 0, 0);
		}
		m_OnBreak470.sub_100cd660(this, this, 0);
		sub_101cd940(this);
	}
};

}
using namespace block_1002ad60;

void CPhysConstraint::sub_1002ad60(int unused)
{
	((block_1002ad60::CPhysConstraintUnit *)this)->OnBreak();
}
// END FUNCTION

// FUNCTION: 0x1002af70 size=0x8
namespace lifted {
int sub_1000986d();
}
int __stdcall sub_1002af70(int a0)
{
    return lifted::sub_1000986d();
}
// END FUNCTION

// FUNCTION: 0x1002af90 size=0x91
#include "CPhysConstraint.h"

struct PhysObjectIf
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6();
	virtual void SetGameFlags(unsigned int flags);
	virtual unsigned int GetGameFlags();
};
struct PhysConstraintIf
{
	virtual void v0(); virtual void v1();
	virtual void Activate();
	virtual void v3(); virtual void v4();
	virtual PhysObjectIf *GetReferenceObject();
	virtual PhysObjectIf *GetAttachedObject();
};
void sub_1001474a(PhysObjectIf *a, PhysObjectIf *b);

#define CONSTRAINT (*(PhysConstraintIf **)((char *)this + 0x450))

void CPhysConstraint::sub_1002af90(int unused)
{
	CONSTRAINT->Activate();
	PhysObjectIf *pObj = CONSTRAINT->GetReferenceObject();
	if (pObj) {
		unsigned int flags = pObj->GetGameFlags();
		pObj->SetGameFlags(flags & 0xfffd);
	}
	pObj = CONSTRAINT->GetAttachedObject();
	if (pObj) {
		unsigned int flags = pObj->GetGameFlags();
		pObj->SetGameFlags(flags & 0xfffd);
	}
	if (*(unsigned char *)((char *)this + 0x204) & 1) {
		PhysObjectIf *pRef = CONSTRAINT->GetReferenceObject();
		PhysObjectIf *pAtt = CONSTRAINT->GetAttachedObject();
		if (pRef && pAtt)
			sub_1001474a(pRef, pAtt);
	}
}
// END FUNCTION

// FUNCTION: 0x1002b060 size=0x46
#include "CPhysConstraint.h"

struct CConstraintAnchorCtor
{
	void sub_100090fc(int a);
};

struct COutputEventCtor
{
	void sub_10002ddd();
};

extern char g_104475c4[];
extern char g_10447134[];

// TARGET: CPhysConstraint::sub_1002b060
CPhysConstraint *CPhysConstraint::sub_1002b060()
{
	((CConstraintAnchorCtor *)this)->sub_100090fc(0);
	*(void **)this = g_104475c4;
	((COutputEventCtor *)((char *)this + 0x470))->sub_10002ddd();
	*(int *)((char *)this + 0x450) = 0;
	*(int *)((char *)this + 0x454) = 0;
	*(int *)((char *)this + 0x458) = 0;
	*(int *)((char *)this + 0x464) = 0;
	*(int *)((char *)this + 0x468) = 0;
	*(void **)this = g_10447134;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1002b0d0 size=0x1e
#include "CPhysConstraint.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysConstraint::vfunc5
CPhysConstraint *CPhysConstraint::vfunc5(unsigned int flags)
{
	sub_100121ac();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1002b100 size=0x1e
#include "CLogicalEntity.h"

void sub_100aa7b0(void *p);

// TARGET: CLogicalEntity::vfunc5
CBaseEntity *CLogicalEntity::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1002b130 size=0x2e
#include "CPhysConstraint.h"
#include "IPhysicsEnvironment.h"

extern IPhysicsEnvironment *g_10723940;
extern char g_10447134[];

// TARGET: CPhysConstraint::sub_1002b130
void CPhysConstraint::sub_1002b130()
{
	*(void **)this = g_10447134;
	g_10723940->vfunc23(m_pConstraint450);
	m_OnBreak470.sub_100cd2d0();
	sub_1000cb8a();
}
// END FUNCTION

// FUNCTION: 0x1002b170 size=0x21
#include "CPhysConstraint.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b248 *g_1070b248;

struct string_t_v { const char *pszValue; };
inline const char *STRING_V(const string_t_v *s) { return s->pszValue ? s->pszValue : ""; }
struct CPhysView { char pad[0x45c]; string_t_v m_snd; };

// TARGET: CPhysConstraint::vfunc104
void CPhysConstraint::vfunc104()
{
	CPhysView *v = (CPhysView *)this;
	if (v->m_snd.pszValue)
		g_1070b248->vfunc0(STRING_V(&v->m_snd), 0);
}
// END FUNCTION

// FUNCTION: 0x1002b1b0 size=0x13
#include "CPhysConstraint.h"
void __fastcall sub_10012c06(CPhysConstraint *self);

// TARGET: CPhysConstraint::vfunc103
void CPhysConstraint::vfunc103()
{
	sub_10012c06(this);
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1002b1e0 size=0x12d
#include "CGlobalEntityList.h"
#include "CAnchorList.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern CGlobalEntityList *g_10566458;
extern char g_106b8540[];

struct NamedPos {
    int m_pos[3];
    unsigned int m_handle;
    const char *m_name;
};
extern CAnchorList g_106b8584;	// g_AnchorList (physconstraint.cpp): m_list at +8, its elements are NamedPos
struct Vec3I { int x, y, z; };
extern Vec3I g_1070d1b0;
struct NamedPosOut {
    int m_ent[2];
    Vec3I m_pos[2];
};
struct NamedPosEnt { char pad[0x36c]; int m_n36c; };
int sub_1004d650(const char *name);

static inline NamedPosEnt *GetNamedEnt(unsigned int h)
{
    if (h == 0xffffffff)
        return 0;
    CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
    if (s->m_Serial == (int)(h >> 13))
        return (NamedPosEnt *)s->m_pEntity;
    return 0;
}

void sub_1002b1e0(const char *name, NamedPosOut *pOut, int idx)
{
    for (int i = g_106b8584.m_list.m_Size - 1; i >= 0; i--) {
        const char *key = name;
        if (key == 0)
            key = g_106b8540;
        const char *rec = ((NamedPos *)g_106b8584.m_list.m_pMemory)[i].m_name;
        if (rec == 0)
            rec = g_106b8540;
        if (_strcmpi(rec, key) == 0) {
            NamedPos *r = &((NamedPos *)g_106b8584.m_list.m_pMemory)[i];
            unsigned int h;
            CGlobalEntityList_Slot *s;
            if (r != 0 && (h = r->m_handle) != 0xffffffff && (s = &g_10566458->m_Slots[h & 0x1fff])->m_Serial == (int)(h >> 13) && s->m_pEntity != 0) {
                Vec3I *dst = &pOut->m_pos[idx];
                dst->x = r->m_pos[0];
                dst->y = r->m_pos[1];
                dst->z = r->m_pos[2];
                pOut->m_ent[idx] = GetNamedEnt(r->m_handle)->m_n36c;
                return;
            }
            break;
        }
    }
    Vec3I *dst = &pOut->m_pos[idx];
    dst->x = g_1070d1b0.x;
    dst->y = g_1070d1b0.y;
    dst->z = g_1070d1b0.z;
    pOut->m_ent[idx] = sub_1004d650(name ? name : g_106b8540);
}
// END FUNCTION

// FUNCTION: 0x1002b360 size=0x84
struct IObj_t
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual int vfunc6();
};
struct IGlobalObj_t
{
	virtual void vfunc0(void *pEnt, int a);
};
struct S1002b360
{
	char pad0[0x454];
	const char *m_pName454;
	const char *m_pName458;
};
struct SInfo1002b360
{
	IObj_t *m_p0;
	IObj_t *m_p1;
};

extern IObj_t *g_10723938;
extern IGlobalObj_t *g_1056645c;
void sub_1002b1e0(const char *pszName, SInfo1002b360 *pInfo, int index);

// TARGET: sub_1002b360
void __fastcall sub_1002b360(S1002b360 *self, int unused, SInfo1002b360 *pInfo)
{
	sub_1002b1e0(self->m_pName454, pInfo, 0);
	sub_1002b1e0(self->m_pName458, pInfo, 1);
	IObj_t *p0 = pInfo->m_p0;
	IObj_t *p1 = pInfo->m_p1;
	if (!p0) {
		if (p1)
			pInfo->m_p0 = g_10723938;
		return;
	}
	if (!p1) {
		pInfo->m_p1 = p0;
		pInfo->m_p0 = g_10723938;
		return;
	}
	if (pInfo->m_p0) {
		int v0 = pInfo->m_p0->vfunc6();
		g_1056645c->vfunc0(self, v0);
		int v1 = pInfo->m_p1->vfunc6();
		g_1056645c->vfunc0(self, v1);
	}
}
// END FUNCTION

// FUNCTION: 0x1002b420 size=0x1e
#include "CPhysConstraint.h"

void __fastcall sub_10001226(CPhysConstraint *self);
void __cdecl sub_101cd940(void *p);

// TARGET: CPhysConstraint::vfunc113
void CPhysConstraint::vfunc113()
{
	sub_10001226(this);
	if (!sub_1002b4c0())
		sub_101cd940(this);
}
// END FUNCTION

// FUNCTION: 0x1002b450 size=0x47
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CPhysConstraintSystem.h"
extern char g_106b8540[];
extern CGlobalEntityList g_106eb5d8;
extern char g_10538764[];
extern char g_105393a8[];
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);
// TARGET: sub_1002b450
CPhysConstraintSystem *sub_1002b450(const char *pszName)
{
	if (!pszName)
		pszName = g_106b8540;
	CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, pszName, 0, 0);
	if (pEnt) {
		CPhysConstraintSystem *pSys = (CPhysConstraintSystem *)__RTDynamicCast(pEnt, 0, g_10538764, g_105393a8, 0);
		if (pSys)
			return (CPhysConstraintSystem *)pSys->m_pSystem;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1002b4c0 size=0x152
#include "CPhysConstraintSystem.h"
#include "CPhysConstraint.h"

struct CPhysConstraintPair {
	PhysObjView *a;
	PhysObjView *b;
	char m_pad[0x18];
};
struct PhysSysView {
	virtual void v0();
	virtual void vfunc1();
};
struct ConView {
	char m_pad[0x26c];
	const char *m_name26c;
};
PhysSysView *sub_1002b450(const char *name);
void sub_10158b40(PhysObjView *a, PhysObjView *b);
__declspec(dllimport) void Warning(const char *fmt, ...);

static inline const char *STRING(const char *const &p)
{
	if (p)
		return p;
	return "";
}

bool CPhysConstraint::sub_1002b4c0()
{
	CPhysConstraintPair pair;
	if (m_pConstraint450) {
		pair.a = m_pConstraint450->vfunc5();
		pair.b = m_pConstraint450->vfunc6();
		if (m_spawnflags204 & 1)
			sub_10158b40(pair.a, pair.b);
		m_pConstraint450->vfunc3(this);
		return true;
	}
	sub_1002b360(&pair);
	if (!pair.a && !pair.b)
		return false;
	if (pair.a->IsStatic() && pair.b->IsStatic()) {
		Warning("Constraint (%s) attached to two static objects (%s and %s)!!!\n", STRING(((ConView *)this)->m_name26c), STRING(m_pszAttach1454), *(int *)&m_pszAttach2458 == 0 ? "world" : STRING(m_pszAttach2458));
		return false;
	}
	PhysSysView *pSys = sub_1002b450(m_pszSystem460);
	m_pConstraint450 = vfunc241((CPhysConstraintSystem *)pSys, (CPhysConstraintPair *)&pair);
	if (!m_pConstraint450)
		return false;
	m_pConstraint450->vfunc3(this);
	if (pSys)
		pSys->vfunc1();
	if (m_spawnflags204 & 1)
		sub_10158b40(pair.a, pair.b);
	return true;
}
// END FUNCTION

// FUNCTION: 0x1002b680 size=0x5d
#include "QAngle.h"
#include "CPhysConstraint.h"
#include "Vector.h"

struct EntView;
struct PhysObjView;
class QAngle;

struct CPhysConstraintInfo
{
	char m_pad00[0xc];
	Vector m_vecPos;	// 0x0c
	bool m_bFlag;	// 0x18
};

void sub_1002a210(EntView *pEnt, PhysObjView *pObj1, PhysObjView *pObj2, const QAngle *pAngles, const Vector *pPos, bool bFlag);

void CPhysConstraint::vfunc183(int a, int b, CPhysConstraintInfo **ppInfo)
{
	if (b == 0 && gpGlobals->m_n18 != m_n46c)
	{
		m_n46c = gpGlobals->m_n18;
		CPhysConstraintInfo *pInfo = *ppInfo;
		sub_1002a210((EntView *)a, m_pConstraint450->vfunc5(), m_pConstraint450->vfunc6(), (const QAngle *)pInfo, &pInfo->m_vecPos, pInfo->m_bFlag);
	}
}
// END FUNCTION

// FUNCTION: 0x1002b700 size=0x6
#include "datamap.h"
#include "CPhysHinge.h"
namespace lifted {
extern char g_10538ddc;
}
datamap_t *CPhysHinge::vfunc82()
{
    return (datamap_t *)&lifted::g_10538ddc;
}
// END FUNCTION

// FUNCTION: 0x1002b720 size=0x5
int sub_1002b760(void);
int g_106b8570 = ((int (*)(int))sub_1002b760)(0);
// END FUNCTION

// FUNCTION: 0x1002b760 size=0x1a
namespace lifted {
extern int g_10538ddc;
extern int g_10538de0;
extern char g_10538e24;
}
int sub_1002b760()
{
    lifted::g_10538de0 = 3;
    lifted::g_10538ddc = (int)&lifted::g_10538e24;
    return (int)&lifted::g_10538ddc;
}
// END FUNCTION

// FUNCTION: 0x1002b790 size=0x49
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000e480(GP *);
extern int vt_10447a54;
extern char g_10539650[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: phys_hinge
DLL_EXPORT GP *phys_hinge()
{
	GP *p = (GP *)sub_1000db89(0x4c4);
	if (p) {
		sub_1000e480(p);
		*(int **)p = &vt_10447a54;
	} else {
		p = 0;
	}
	p->name(g_10539650);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1002b800 size=0xd8
#include "CPhysHinge.h"

#define PH_V1(p) virtual void p();
#define PH_V10(p) PH_V1(p##0) PH_V1(p##1) PH_V1(p##2) PH_V1(p##3) PH_V1(p##4) PH_V1(p##5) PH_V1(p##6) PH_V1(p##7) PH_V1(p##8) PH_V1(p##9)

struct S10723940	// the physics environment: slot 13 creates a hinge constraint
{
	PH_V10(a) PH_V1(b0) PH_V1(b1) PH_V1(b2)
	virtual void *CreateHingeConstraint(void *pReference, void *pAttached, void *pGroup, const CPhysHingeParams &hinge);
};

extern S10723940 *g_10723940;
extern Vector g_1070d1b0;
__declspec(dllimport) void DevMsg(const char *fmt, ...);

struct CPhysHingeUnit : CPhysHinge
{
	void GetBreakParams(CPhysBreakableParams &params)
	{
		params.Defaults();
		params.forceLimit = m_flForceLimit * (1.0f / 2.2f);
		params.torqueLimit = m_flTorqueLimit * (1.0f / 2.2f);
		params.isActive = (m_spawnflags204 & 4) ? false : true;
	}
	const CPhysHingeParams &BuildHinge()
	{
		GetBreakParams(m_hinge.constraint);
		m_hinge.constraint.strength = 1.0f;
		float flTorque = m_flHingeFriction * 1000.0f;
		m_hinge.minRotation = 0;
		m_hinge.maxRotation = 0;
		m_hinge.angularVelocity = 0;
		m_hinge.torque = flTorque;
		return m_hinge;
	}
};

void *CPhysHinge::vfunc241(void *pGroup, CPhysConstraintObjects *pObjects)
{
	if (m_hinge.worldAxisDirection == g_1070d1b0) {
		DevMsg("ERROR: Hinge with bad data!!!\n");
		return 0;
	}
	return g_10723940->CreateHingeConstraint(pObjects->m_pReference, pObjects->m_pAttached, pGroup, ((CPhysHingeUnit *)this)->BuildHinge());
}
// END FUNCTION

// FUNCTION: 0x1002b920 size=0x96
#include "CPhysHinge.h"

void sub_10142e90(const Vector &start, const Vector &end, int r, int g, int b, bool noDepthTest, float duration);

// TARGET: CPhysHinge::vfunc123
void CPhysHinge::vfunc123()
{
    if (m_debugOverlays224 & 0x2c)
    {
        Vector vecEnd = m_hinge.worldPosition + m_hinge.worldAxisDirection * 48.0f;
        sub_10142e90(m_hinge.worldPosition, vecEnd, 0, 255, 0, false, 0.0f);
    }
    sub_100a0130();
}
// END FUNCTION

// FUNCTION: 0x1002b9f0 size=0xe3
#include "CPhysHinge.h"

void sub_101cf680(Vector &v, float f);

#define SV1(p) virtual void p();
#define SV10(p) SV1(p##0) SV1(p##1) SV1(p##2) SV1(p##3) SV1(p##4) SV1(p##5) SV1(p##6) SV1(p##7) SV1(p##8) SV1(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)
struct CPhysHingeOriginView
{
    SV100(a) SV100(b)
    SV10(c0) SV10(c1)
    virtual const Vector *vfunc220();
};

void CPhysHinge::vfunc103()
{
    m_hinge.worldPosition = *((CPhysHingeOriginView *)this)->vfunc220();
    m_hinge.worldAxisDirection -= *((CPhysHingeOriginView *)this)->vfunc220();
    VectorNormalize(m_hinge.worldAxisDirection);
    sub_101cf680(m_hinge.worldAxisDirection, 0.01f);
    m_hinge.minRotation = 0.0f;
    m_hinge.maxRotation = 0.0f;
    m_hinge.angularVelocity = 0.0f;
    m_hinge.torque = 0.0f;
    m_hinge.constraint.Defaults();
    CPhysBreakableParams *pc = &m_hinge.constraint;
    float *pf = &pc->forceLimit;
    pf[0] = m_flForceLimit * 0.45454544f;
    pf[1] = m_flTorqueLimit * 0.45454544f;
    pc->isActive = ~(unsigned char)(m_spawnflags204 >> 2) & 1;
    pf[-1] = 1.0f;
}
// END FUNCTION

// FUNCTION: 0x1002bb20 size=0x49
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000e480(GP *);
extern int vt_10447ef4;
extern char g_105396ac[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: phys_ballsocket
DLL_EXPORT GP *phys_ballsocket()
{
	GP *p = (GP *)sub_1000db89(0x488);
	if (p) {
		sub_1000e480(p);
		*(int **)p = &vt_10447ef4;
	} else {
		p = 0;
	}
	p->name(g_105396ac);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1002bb90 size=0xeb
#include "CPhysConstraintSystem.h"
#include "CPhysBallSocket.h"
#include "CPhysHinge.h"
#include "IPhysicsObject.h"

#define lbs2kg(x) ((x)*(1.0f/(2.2f)))

struct constraint_ballsocketparams_t
{
	Vector constraintPosition[2];
	CPhysBreakableParams constraint;
	inline void Defaults()
	{
		constraint.Defaults();
		constraintPosition[0].Init();
		constraintPosition[1].Init();
	}
};

struct CPhysConstraintPair { IPhysicsObject *pObjects[2]; };

struct IPhysEnvBS { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
	virtual CPhysConstraintObj *CreateBallsocketConstraint(IPhysicsObject *pReference, IPhysicsObject *pAttached, CPhysConstraintSystem *pGroup, const constraint_ballsocketparams_t &params); };
extern IPhysEnvBS *g_10723940;

class CPhysBallSocketV : public CPhysBallSocket
{
public:
	bool HasSpawnFlags(int flags) const { return (m_spawnflags204 & flags) != 0; }
	void GetBreakParams(CPhysBreakableParams &params)
	{
		params.Defaults();
		params.forceLimit = lbs2kg(m_forceLimit);
		params.torqueLimit = lbs2kg(m_torqueLimit);
		params.isActive = HasSpawnFlags(4) ? false : true;
	}
	CPhysConstraintObj *sub_1002bb90(CPhysConstraintSystem *pGroup, CPhysConstraintPair *pInfo);
};

// TARGET: CPhysBallSocketV::sub_1002bb90
CPhysConstraintObj *CPhysBallSocketV::sub_1002bb90(CPhysConstraintSystem *pGroup, CPhysConstraintPair *pInfo)
{
	constraint_ballsocketparams_t ballsocket;

	ballsocket.Defaults();

	for (int i = 0; i < 2; i++)
	{
		pInfo->pObjects[i]->vfunc27(&ballsocket.constraintPosition[i], &vfunc217());
	}
	GetBreakParams(ballsocket.constraint);
	ballsocket.constraint.torqueLimit = 0;

	return g_10723940->CreateBallsocketConstraint(pInfo->pObjects[0], pInfo->pObjects[1], pGroup, ballsocket);
}
// END FUNCTION

// FUNCTION: 0x1002bcc0 size=0x49
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000e480(GP *);
extern int vt_10448384;
extern char g_105396ec[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: phys_slideconstraint
DLL_EXPORT GP *phys_slideconstraint()
{
	GP *p = (GP *)sub_1000db89(0x498);
	if (p) {
		sub_1000e480(p);
		*(int **)p = &vt_10448384;
	} else {
		p = 0;
	}
	p->name(g_105396ec);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1002bd30 size=0x6
#include "datamap.h"
#include "CPhysSlideConstraint.h"
namespace lifted {
extern char g_10538ea8;
}
datamap_t *CPhysSlideConstraint::vfunc82()
{
    return (datamap_t *)&lifted::g_10538ea8;
}
// END FUNCTION

// FUNCTION: 0x1002bd50 size=0x5
int sub_1002bd90(void);
int g_106b85a4 = ((int (*)(int))sub_1002bd90)(0);
// END FUNCTION

// FUNCTION: 0x1002bd90 size=0x1a
namespace lifted {
extern int g_10538ea8;
extern int g_10538eac;
extern char g_10538eec;
}
int sub_1002bd90()
{
    lifted::g_10538eac = 2;
    lifted::g_10538ea8 = (int)&lifted::g_10538eec;
    return (int)&lifted::g_10538ea8;
}
// END FUNCTION

// FUNCTION: 0x1002bdc0 size=0x2a1
#include "utlmemory.h"
#include "CPhysSlideConstraint.h"
#include "CPhysConstraint.h"
#include "matrix3x4_t.h"
#include "CUnknown10029100.h"
#include "CEntityVSlots.h"
#include "Vector.h"

void sub_10139a90(float *pMatrix);
void sub_10138630(const matrix3x4_t &in, matrix3x4_t &out);
void sub_10138df0(const matrix3x4_t &a, const matrix3x4_t &b, matrix3x4_t &out);
void sub_10138460(const float *pIn, const float (*pMatrix)[3], float *pOut);
void sub_101cf680(Vector &v, float fl);

struct PhysObj37View
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36();
	virtual void v37(const Vector *pOut, int a);
};

struct CPhysEnv15View
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void vfunc15(void *p0, void *p1, int a, void *pParams);
};

extern CPhysEnv15View *g_10723940;

struct CPhysSlideParams
{
	matrix3x4_t mat;	// 0x00
	Vector axis;		// 0x30
	float fl3c;		// 0x3c
	float fl40;		// 0x40
	float fl44;		// 0x44
	unsigned char b48;	// 0x48
	char pad49[3];
	float limitMin;		// 0x4c
	float limitMax;		// 0x50
	int n54;		// 0x54
	int n58;		// 0x58 (unused tail)
};

#define lbs2kg(x) ((x)*(1.0f/(2.2f)))

template <class T> inline void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

void CPhysSlideConstraint::sub_1002bdc0(int pArg1, void **pObjects)
{
	CPhysSlideParams params;
	sub_10139a90((float *)&params.mat);
	params.axis.x = 0.0f;
	params.axis.y = 0.0f;
	params.axis.z = 0.0f;
	params.limitMax = 0.0f;
	params.limitMin = 0.0f;
	params.n54 = 0;
	((CUnknown10029100 *)&params.fl3c)->sub_10029100();
	params.fl40 = lbs2kg(m_fl464);
	params.fl44 = lbs2kg(m_fl468);
	params.b48 = (m_n204 & 4) ? false : true;
	params.fl3c = 1.0;

	const Vector &vecOrigin = *((CEntityVSlots *)this)->slot217();
	Vector axisDirection = m_vec488 - vecOrigin;
	VectorNormalize(axisDirection);
	sub_101cf680(axisDirection, 0.01f);

	PhysObjView *p0 = (PhysObjView *)pObjects[0];
	PhysObjView *p1 = (PhysObjView *)pObjects[1];
	matrix3x4_t matRef, matRefInv, matAttached, matRef2;
	p0->GetPositionMatrix(&matRef);
	sub_10138630(matRef, matRefInv);
	p1->GetPositionMatrix(&matAttached);
	sub_10138df0(matRefInv, matAttached, params.mat);
	p0->GetPositionMatrix(&matRef2);
	sub_10138460(axisDirection.Base(), (const float (*)[3])&matRef2, params.axis.Base());

	params.n54 = m_n494;
	if (m_n204 & 2)
	{
		Vector position;
		((PhysObj37View *)pObjects[1])->v37(&position, 0);
		params.limitMin = DotProduct(axisDirection, *((CEntityVSlots *)this)->slot217());
		params.limitMax = DotProduct(axisDirection, m_vec488);
		if (params.limitMax < params.limitMin)
			swap(params.limitMin, params.limitMax);
		float limit = DotProduct(position, axisDirection);
		if (limit < params.limitMin)
			params.limitMin = limit;
		else if (limit > params.limitMax)
			params.limitMax = limit;
		params.limitMin -= limit;
		params.limitMax -= limit;
	}
	g_10723940->vfunc15(pObjects[0], pObjects[1], pArg1, &params);
}
// END FUNCTION

// FUNCTION: 0x1002c120 size=0x49
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000e480(GP *);
extern int vt_10448814;
extern char g_10539728[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: phys_constraint
DLL_EXPORT GP *phys_constraint()
{
	GP *p = (GP *)sub_1000db89(0x488);
	if (p) {
		sub_1000e480(p);
		*(int **)p = &vt_10448814;
	} else {
		p = 0;
	}
	p->name(g_10539728);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1002c190 size=0x113
#include "CPhysFixed.h"
#include "IPhysicsObject.h"

struct IPhysEnvView { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
	virtual void *vfunc14(void *pRef, void *pAttached, void *pGroup, const CPhysFixedParams &params); };
struct IPhysObjSetFlags { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
	virtual void vfunc7(unsigned int flags); };
extern void *g_10723938;
extern IPhysEnvView *g_10723940;
void sub_10139a90(matrix3x4_t *);
void sub_10138630(const matrix3x4_t *in, matrix3x4_t *out);
void sub_10138df0(const matrix3x4_t *a, const matrix3x4_t *b, matrix3x4_t *out);

inline void FixedDefaults(CPhysFixedParams &p)
{
	sub_10139a90(&p.attachedRefXform);
	p.constraint.Defaults();
}

inline void FixedInitWithCurrentObjectState(CPhysFixedParams &p, void *pRef0, void *pAttached0)
{
	IPhysicsObject *pRef = (IPhysicsObject *)pRef0;
	IPhysicsObject *pAttached = (IPhysicsObject *)pAttached0;
	matrix3x4_t world1, world2, tmp;
	pRef->vfunc38((float *)&world1);
	sub_10138630(&world1, &tmp);
	pAttached->vfunc38((float *)&world2);
	sub_10138df0(&tmp, &world2, &p.attachedRefXform);
}

#define lbs2kg(x) ((x)*(1.0f/(2.2f)))

void *CPhysFixed::vfunc241(void *pGroup, CPhysConstraintObjects *pObjects)
{
	CPhysFixedParams fixed;
	FixedDefaults(fixed);
	FixedInitWithCurrentObjectState(fixed, pObjects->m_pReference, pObjects->m_pAttached);
	fixed.constraint.Defaults();
	fixed.constraint.forceLimit = lbs2kg(m_flForceLimit);
	fixed.constraint.torqueLimit = lbs2kg(m_flTorqueLimit);
	fixed.constraint.isActive = HasSpawnFlags(4) ? false : true;
	if (pObjects->m_pReference == g_10723938)
	{
		unsigned int f = ((IPhysicsObject *)pObjects->m_pAttached)->vfunc8();
		((IPhysObjSetFlags *)pObjects->m_pAttached)->vfunc7(f | 2);
	}
	return g_10723940->vfunc14(pObjects->m_pReference, pObjects->m_pAttached, pGroup, fixed);
}
// END FUNCTION

// FUNCTION: 0x1002c300 size=0x6
#include "datamap.h"
#include "CPhysPulley.h"
namespace lifted {
extern char g_10538f44;
}
datamap_t *CPhysPulley::vfunc82()
{
    return (datamap_t *)&lifted::g_10538f44;
}
// END FUNCTION

// FUNCTION: 0x1002c320 size=0x5
int sub_1002c360(void);
int g_106b85a0 = ((int (*)(int))sub_1002c360)(0);
// END FUNCTION

// FUNCTION: 0x1002c360 size=0x1a
namespace lifted {
extern int g_10538f44;
extern int g_10538f48;
extern char g_10538f8c;
}
int sub_1002c360()
{
    lifted::g_10538f48 = 3;
    lifted::g_10538f44 = (int)&lifted::g_10538f8c;
    return (int)&lifted::g_10538f44;
}
// END FUNCTION

// FUNCTION: 0x1002c390 size=0x49
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000e480(GP *);
extern int vt_10448ca4;
extern char g_1053975c[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: phys_pulleyconstraint
DLL_EXPORT GP *phys_pulleyconstraint()
{
	GP *p = (GP *)sub_1000db89(0x4b4);
	if (p) {
		sub_1000e480(p);
		*(int **)p = &vt_10448ca4;
	} else {
		p = 0;
	}
	p->name(g_1053975c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1002c400 size=0x118
#include "CPhysPulley.h"
#include "matrix3x4_t.h"
void sub_10137fe0(const float *, const float *, float *);
void sub_10142e90(const float *, const float *, int, int, int, int, int);
// TARGET: CPhysPulley::vfunc123
void CPhysPulley::vfunc123()
{
	if (m_debugOverlays224 & 0x2c)
	{
		Vector p1 = ((CPhysConstraint *)this)->vfunc217();
		Vector p0 = p1, p2 = p1;
		matrix3x4_t m;
		PhysObjView *pObj = m_pConstraint450->vfunc5();
		if (pObj)
		{
			pObj->GetPositionMatrix(&m);
			sub_10137fe0(&m_vecObj1494.x, &m.m_flMatVal[0][0], &p0.x);
		}
		pObj = m_pConstraint450->vfunc6();
		if (pObj)
		{
			pObj->GetPositionMatrix(&m);
			sub_10137fe0(&m_vecObj24a0.x, &m.m_flMatVal[0][0], &p2.x);
		}
		sub_10142e90(&p0.x, &p1.x, 0, 255, 0, 0, 0);
		sub_10142e90(&p1.x, &m_vecPos488.x, 0, 255, 0, 0, 0);
		sub_10142e90(&m_vecPos488.x, &p2.x, 0, 255, 0, 0, 0);
	}
	sub_100a0130();
}
// END FUNCTION

// FUNCTION: 0x1002c570 size=0x2ca
// TARGET: CPhysPulley::vfunc241
#include "CPhysPulley.h"
#include "CRopeEndVec.h"
struct matrix3x4_t { float m[3][4]; };
struct ITracerView {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
	virtual void Draw(PhysObjView *a, PhysObjView *b, int flags, void *rec);
};
extern ITracerView *g_10723940;
void sub_10137fe0(const Vector *in, const matrix3x4_t *m, Vector *out);
struct CUnkElem { int pad; };
struct CUnknown1002c900 { void *sub_1002c900(); };
void __stdcall sub_10025e50(char *base, unsigned stride, int count, void (CUnkElem::*fn)());

struct PulleyFrame {
	float m_f0; float m_f1; float m_f2; unsigned char m_b;
	Vector m_a; Vector m_bv; Vector m_c[2]; float m_len; float m_scale; unsigned char m_flag;
	PulleyFrame() {
		sub_10025e50((char *)m_c, 12, 2, (void (CUnkElem::*)())&CUnknown1002c900::sub_1002c900);
		m_f1 = 0; m_f2 = 0; m_f0 = 1.0f; m_b = 1;
		m_len = 1.0f; m_scale = 1.0f;
		((CRopeEndVec *)&m_a)->sub_1002c920(0, 0, 0);
		((CRopeEndVec *)&m_bv)->sub_1002c920(0, 0, 0);
		((CRopeEndVec *)&m_c[0])->sub_1002c920(0, 0, 0);
		((CRopeEndVec *)&m_c[1])->sub_1002c920(0, 0, 0);
		m_flag = 0;
	}
};

#define lbs2kg(x) ((x)*(1.0f/(2.2f)))
void CPhysPulley::vfunc241(int nFlags, CPhysPulleyDebugInfo *pInfo)
{
	PulleyFrame s;
	Vector out1;
	Vector out2;
	matrix3x4_t mat;
	s.m_a = ((CPhysConstraint *)this)->vfunc217();
	s.m_bv = m_vecPos488;
	pInfo->m_pObj[0]->GetPositionMatrix(&mat);
	sub_10137fe0(&pInfo->m_vecLocal0, &mat, &out1);
	pInfo->m_pObj[1]->GetPositionMatrix(&mat);
	sub_10137fe0(&pInfo->m_vecLocal1, &mat, &out2);
	for (int i = 0; i < 2; i++) {
		s.m_c[i] = (&pInfo->m_vecLocal0)[i];
		(&m_vecObj1494)[i] = (&pInfo->m_vecLocal0)[i];
	}
	s.m_len = (out1 - s.m_a).Length() + (out2 - s.m_bv).Length() * m_flRopeScale4b0 + m_flRopeLen4ac;
	if (m_flRopeScale4b0 != 0.0f)
		s.m_scale = m_flRopeScale4b0;
	s.m_f1 = lbs2kg(m_flScale464);
	s.m_f2 = lbs2kg(m_flScale468);
	s.m_b = (m_flags204 & 4) ? false : true;
	s.m_f0 = 1.0;
	if (m_flags204 & 2)
		s.m_flag = 1;
	g_10723940->Draw(pInfo->m_pObj[0], pInfo->m_pObj[1], nFlags, &s);
}
// END FUNCTION

// FUNCTION: 0x1002c900 size=0x3
struct CUnknown1002c900 { void * sub_1002c900(); };
void * CUnknown1002c900::sub_1002c900()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x1002c920 size=0x17
struct CUnknown1002c920 { int sub_1002c920(int, int, int); };
int CUnknown1002c920::sub_1002c920(int a0, int a1, int a2)
{
    *(int *)this = a0;
    *(int *)((char *)this + 4) = a1;
    *(int *)((char *)this + 8) = a2;
    return a2;
}
// END FUNCTION

// FUNCTION: 0x1002c950 size=0x5
#include "CPhysConstraintEvents.h"
CPhysConstraintEvents g_106b8580;
// END FUNCTION

// FUNCTION: 0x1002c990 size=0x58
#include "CPhysConstraintEvents.h"
void CPhysConstraintEvents::vfunc0(IPhysicsConstraint *pConstraint)
{
	CBaseEntity *pEntity = pConstraint->GetGameData();
	if (pEntity) {
		CVariantCopy emptyVariant;
		pEntity->vfunc118("ConstraintBroken", 0, 0, emptyVariant, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x1002ca10 size=0x41
#include "CVariantCopy.h"

struct V3Raw { float x, y, z; };

CVariantCopy::CVariantCopy(const CVariantCopy &other)
{
	rgba[0] = other.rgba[0];
	m_value = other.m_value;
	flVal = other.flVal;
	iszVal = other.iszVal;
	*(V3Raw *)vecVal = *(const V3Raw *)other.vecVal;
	m_value = other.m_value;
	m_hEntity = other.m_hEntity;
	m_fieldType = other.m_fieldType;
}
// END FUNCTION

// FUNCTION: 0x1002ca80 size=0x1e
#include "CConstraintAnchor.h"

void sub_100aa7b0(void *p);

// TARGET: CConstraintAnchor::vfunc5
CBaseEntity *CConstraintAnchor::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1002cab0 size=0x1e
#include "CPhysConstraintSystem.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysConstraintSystem::vfunc5
CPhysConstraintSystem *CPhysConstraintSystem::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1002cae0 size=0x1e
#include "CPhysHinge.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysHinge::vfunc5
CPhysHinge *CPhysHinge::vfunc5(unsigned int flags)
{
	sub_100121ac();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1002cb10 size=0x1e
#include "CPhysBallSocket.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysBallSocket::vfunc5
CPhysConstraint *CPhysBallSocket::vfunc5(unsigned int flags)
{
	sub_100121ac();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1002cb40 size=0x1e
#include "CPhysSlideConstraint.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysSlideConstraint::vfunc5
CPhysSlideConstraint *CPhysSlideConstraint::vfunc5(unsigned int flags)
{
	sub_100121ac();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1002cb70 size=0x1e
#include "CPhysFixed.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysFixed::vfunc5
CPhysFixed *CPhysFixed::vfunc5(unsigned int flags)
{
	sub_100121ac();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1002cba0 size=0x1e
#include "CPhysPulley.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysPulley::vfunc5
CPhysPulley *CPhysPulley::vfunc5(unsigned int flags)
{
	sub_100121ac();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
