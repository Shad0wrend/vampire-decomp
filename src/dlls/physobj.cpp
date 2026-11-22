// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 63 blocks
#include "vampire.h"

// FUNCTION: 0x1004d290 size=0x13d
#include "CPhysicsSpring.h"

extern "C" __declspec(dllimport) int Q_snprintf(char *, int, const char *, ...);
void sub_101434b0(int a, int b, const char *c, int d, int e, int f, int g, int h);

int CPhysicsSpring::vfunc124()
{
	int line = sub_100018cf();
	if (m_fTextOverlayFlags & 1) {
		char text[512];
		Q_snprintf(text, sizeof(text), "Constant: %3.2f", m_flSpringConstant);
		int ed = m_pEdict;
		sub_101434b0(engine->vfunc35(ed), line, text, 0, 255, 255, 255, 255);
		line++;
		Q_snprintf(text, sizeof(text), "Length: %3.2f", m_flLength);
		ed = m_pEdict;
		sub_101434b0(engine->vfunc35(ed), line, text, 0, 255, 255, 255, 255);
		line++;
		Q_snprintf(text, sizeof(text), "Damping: %3.2f", m_flDamping);
		ed = m_pEdict;
		sub_101434b0(engine->vfunc35(ed), line, text, 0, 255, 255, 255, 255);
		line++;
	}
	return line;
}
// END FUNCTION

// FUNCTION: 0x1004d420 size=0x111
#include "CPhysicsSpring.h"
#include "Vector.h"
void sub_10007de2(const Vector &v1, const Vector &v2, int r, int g, int b, bool noDepth, float duration);

void CPhysicsSpring::vfunc123()
{
	if (m_fTextOverlayFlags & 4) {
		Vector start, end;
		m_pSpring->GetEndPoints(&start, &end);
		Vector dir = end - start;
		VectorNormalize(dir);
		Vector p = start + dir * m_flLength;
		sub_10007de2(start, p, 0, 0, 255, false, 0);
		sub_10007de2(p, end, 255, 0, 0, false, 0);
	}
	sub_10005880();
}
// END FUNCTION

// FUNCTION: 0x1004d590 size=0x8f
#include "Vector.h"

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
struct EntSlot37 {
	SV10(0) SV10(1) SV10(2)
	SV(30) SV(31) SV(32) SV(33) SV(34) SV(35) SV(36)
	virtual void s37(Vector *pOut, int a);
};

char sub_1004d590(EntSlot37 *pEnt, const Vector &vecA, const Vector &vecB)
{
	Vector vecPos;
	pEnt->s37(&vecPos, 0);
	if (vecPos.DistToSqr(vecA) < vecPos.DistToSqr(vecB))
		return 1;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1004d650 size=0x3f
#include <string.h>
#include "CGlobalEntityList.h"
#include "CBaseEntity.h"
extern CGlobalEntityList g_106eb5d8;

// TARGET: sub_1004d650
int sub_1004d650(const char *pszName)
{
	if (pszName && strlen(pszName) != 0)
	{
		CBaseEntity *pEnt = 0;
		int v;
		do
		{
			pEnt = g_106eb5d8.sub_100f7770(pEnt, pszName, 0, 0);
			if (!pEnt)
				return 0;
			v = *(int *)((char *)pEnt + 0x36c);
		} while (!v);
		return v;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1004d6a0 size=0xa3
#include "CPhysicsSpring.h"

struct IPhysObjStub {
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3();
	virtual void vfunc4(); virtual void vfunc5();
	virtual int vfunc6();
};
struct IPhysRegisterStub {
	virtual void vfunc0(void *pOwner, int value);
};
extern IPhysRegisterStub *g_1056645c;
extern IPhysObjStub *g_10723938;
IPhysObjStub *sub_100082c9(const char *pszName);

void CPhysicsSpring::sub_1004d6a0(const char *pszName1, const char *pszName2, void **ppObj1, void **ppObj2)
{
	IPhysObjStub *pStartObject = sub_100082c9(pszName1 ? pszName1 : "");
	IPhysObjStub *pEndObject = sub_100082c9(pszName2 ? pszName2 : "");
	if (!pStartObject) {
		pStartObject = g_10723938;
	} else if (!pEndObject) {
		pEndObject = pStartObject;
		pStartObject = g_10723938;
	} else {
		int pEntity = pStartObject->vfunc6();
		g_1056645c->vfunc0(this, pEntity);
		pEntity = pEndObject->vfunc6();
		g_1056645c->vfunc0(this, pEntity);
	}
	*ppObj1 = pStartObject;
	*ppObj2 = pEndObject;
}
// END FUNCTION

// FUNCTION: 0x1004d780 size=0x1a8
#include "CPhysicsSpring.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

extern "C" void *__cdecl memset(void *, int, unsigned int);

#define PV(n) virtual void pv##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)

struct EntSlot37 {
	PV10(0) PV10(1)
	PV(20) PV(21) PV(22) PV(23) PV(24) PV(25) PV(26)
	virtual void pv27(Vector *pOut, Vector *pIn);
};

struct SpringParams {
	float constant;
	float naturalLength;
	float damping;
	float relativeDamping;
	Vector startPosition;
	Vector endPosition;
	bool useLocalPositions;
};

struct PhysEnvStub {
	PV10(0)
	PV(10)
	virtual void *CreateSpring(EntSlot37 *pObject1, EntSlot37 *pObject2, SpringParams *pParams);
};

extern PhysEnvStub *g_10723940;
extern void (*g_109f3630)(const char *, ...);
char sub_1004d590(EntSlot37 *pObject, const Vector &a, const Vector &b);
void sub_101cd940(CPhysicsSpring *pEntity);

void CPhysicsSpring::vfunc113()
{
	sub_10001226();
	EntSlot37 *pStart, *pEnd; EntSlot37 *pE;
	sub_1004d6a0(m_pszStartName, m_pszEndName, (void **)&pStart, (void **)&pEnd);
	if ((!pStart && !pEnd) || pStart == pEnd) {
		g_109f3630("ERROR: Can't init spring %s from \"%s\" to \"%s\"\n", sub_100ab4f0(),
			STRINGR_F(m_pszStartName), STRINGR_F(m_pszEndName));
		sub_101cd940(this);
		return;
	}
	pE = pEnd;
	if (!m_bStartEndFixed) {
		m_bStartEndFixed = 1;
		Vector &vecStart = m_vecStart;
		Vector &vecEnd = m_vecEnd;
		if (!sub_1004d590(pEnd, vecEnd, vecStart)) {
			Vector vecTemp = vecStart;
			vecStart = vecEnd;
			vecEnd = vecTemp;
		}
		pStart->pv27(&vecStart, &vecStart);
		pE = *(EntSlot37 *volatile *)&pEnd; pE->pv27(&vecEnd, &vecEnd);
	}
	SpringParams params;
	memset(&params, 0, sizeof(params));
	params.constant = m_flSpringConstant;
	params.damping = m_flDamping;
	params.naturalLength = m_flLength;
	params.relativeDamping = m_flRelativeDamping;
	params.startPosition = m_vecStart;
	params.endPosition = m_vecEnd;
	params.useLocalPositions = true;
	m_pSpring = (IPhysicsSpringStub *)g_10723940->CreateSpring(pStart, pE, &params);
}
// END FUNCTION

// FUNCTION: 0x1004d9a0 size=0x107
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPhysicsSpring.h"
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

extern float g_104454c4;

// TARGET: CPhysicsSpring::vfunc103
void CPhysicsSpring::vfunc103()
{
	{
		ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	m_vecStart = *((CEntityVSlots *)this)->slot220();
	if (m_flLength <= g_104454c4)
		m_flLength = (m_vecEnd - m_vecStart).Length();
}
// END FUNCTION

// FUNCTION: 0x1004db00 size=0x54
#include "QAngle.h"
#include "CPhysicsSpring.h"
extern int g_1070ba38;

struct EntView;
struct PhysObjView;
class QAngle;

void sub_1002a210(EntView *pEnt, PhysObjView *pObj1, PhysObjView *pObj2, const QAngle *pAngles, const Vector *pPos, int bFlag);

struct CSpringSlotView
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4();
	virtual PhysObjView *vfunc5();
	virtual PhysObjView *vfunc6();
};

// TARGET: CPhysicsSpring::vfunc182
void CPhysicsSpring::vfunc182(int a, int b, int c, int d)
{
	if (g_1070ba38 != m_nLastFrame488) {
		m_nLastFrame488 = g_1070ba38;
		sub_1002a210((EntView *)a, ((CSpringSlotView *)m_pSpring)->vfunc5(), ((CSpringSlotView *)m_pSpring)->vfunc6(), (const QAngle *)b, (const Vector *)c, d);
	}
}
// END FUNCTION

// FUNCTION: 0x1004db80 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106bdb8c;
extern char g_1053cf20[];
ServerClassReg g_106bdba8("CPhysBox", &g_106bdb8c, g_1053cf20);
// END FUNCTION

// FUNCTION: 0x1004dbf0 size=0x6
#include "CPhysBox.h"
namespace lifted {
extern char g_106bdba8;
}
int CPhysBox::vfunc80()
{
    return (int)&lifted::g_106bdba8;
}
// END FUNCTION

// FUNCTION: 0x1004dc10 size=0x3
#include "CPhysBox.h"
int CPhysBox::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1004dc30 size=0xa
#include "SendTable.h"
SendTable g_106bdb8c;
// END FUNCTION

// FUNCTION: 0x1004dcb0 size=0x5
int sub_1004dcf0(void);
int g_106bdb88 = ((int (*)(int))sub_1004dcf0)(0);
// END FUNCTION

// FUNCTION: 0x1004dcf0 size=0x72
#include "SendProp.h"

class SendTable
{
public:
	void sub_1000e8fe(SendProp *pProps, int nProps, const char *pNetTableName);	// Init
};

SendProp sub_10007bfd(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int arg6, void *proxy);	// SendPropInt
SendProp sub_1000bf2d(const char *pVarName, int offset, SendTable *pTable, void *proxy);	// SendPropDataTable
void sub_10009539();

extern SendTable g_106bdb8c;
extern SendTable *g_1055282c;

// TARGET: sub_1004dcf0
int sub_1004dcf0()
{
	static const char *pTableName = "DT_PhysBox";
	static SendProp props[] = {
		sub_10007bfd("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_1000bf2d("baseclass", 0, g_1055282c, (void *)sub_10009539),
	};
	g_106bdb8c.sub_1000e8fe(props + 1, 1, pTableName);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1004ddc0 size=0x31
struct CUnknown1004ddc0 { };
typedef void (CUnknown1004ddc0::*PMF_1004ddc0)();

// TARGET: sub_1004ddc0
void __stdcall sub_1004ddc0(char *ptr, unsigned size, int count, PMF_1004ddc0 pmf)
{
	ptr += size * count;
	while (--count >= 0) {
		ptr -= size;
		(((CUnknown1004ddc0 *)ptr)->*pmf)();
	}
}
// END FUNCTION

// FUNCTION: 0x1004de10 size=0x43
#include "platform.h"
#include "CPhysBox.h"
void *sub_100aa720(int size);
extern char g_1053db40[];

// TARGET: func_physbox
DLL_EXPORT CBaseEntity *func_physbox()
{
	void *mem = sub_100aa720(0x4cc);
	CPhysBox *p;
	if (mem)
		p = ((CPhysBox *)mem)->sub_1004e0a0();
	else
		p = 0;
	p->vfunc106(g_1053db40);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1004de80 size=0x6
#include "datamap.h"
#include "CPhysBox.h"
namespace lifted {
extern char g_1053cf30;
}
datamap_t * CPhysBox::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1053cf30);
}
// END FUNCTION

// FUNCTION: 0x1004dea0 size=0x5
int * sub_1004dee0(void);
int * g_106bdb80 = ((int * (*)(int))sub_1004dee0)(0);
// END FUNCTION

// FUNCTION: 0x1004dee0 size=0x160
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
extern int g_1053cf30[2];
void sub_10002879();

int *sub_1004dee0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 5, "m_bSimulating", {0x4c8, 0}, 1, 2 },
        { 1, "m_massBias", {0x454, 0}, 1, 6, "massbias" },
        { 4, "m_damageType", {0x450, 0}, 1, 6, "Damagetype" },
        { 1, "m_massOverride", {0x464, 0}, 1, 6, "override_mass" },
        { 1, "m_impactEnergyScale", {0xdc, 0}, 1, 0xe, "physdamagescale" },
        { 0, "InputWake", {0, 0}, 1, 8, "Wake", 0, (void *)sub_10002879 },
        { 10, "m_OnDamaged", {0x468, 0}, 1, 0x16, "OnDamaged", g_1055dc70 },
        { 10, "m_OnAwakened", {0x480, 0}, 1, 0x16, "OnAwakened", g_1055dc70 },
        { 10, "m_OnPhysGunPickup", {0x498, 0}, 1, 0x16, "OnPhysGunPickup", g_1055dc70 },
        { 10, "m_OnPhysGunDrop", {0x4b0, 0}, 1, 0x16, "OnPhysGunDrop", g_1055dc70 },
    };
    g_1053cf30[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1053cf30[0] = (int)&dataDesc[1];
    return g_1053cf30;
}
// END FUNCTION

// FUNCTION: 0x1004e0a0 size=0x48
#include "CPhysBox.h"
#include "COutputEvent.h"
#include "CConstraintAnchor.h"

extern void *vt_1044997c[];

// TARGET: CPhysBox::sub_1004e0a0
CPhysBox *CPhysBox::sub_1004e0a0()
{
	((CConstraintAnchorBase *)this)->CConstraintAnchorBase::CConstraintAnchorBase(0);
	((COutputEvent *)((char *)this + 0x468))->sub_100cd2a0();
	((COutputEvent *)((char *)this + 0x480))->sub_100cd2a0();
	((COutputEvent *)((char *)this + 0x498))->sub_100cd2a0();
	((COutputEvent *)((char *)this + 0x4b0))->sub_100cd2a0();
	*(void ***)this = vt_1044997c;
	*(unsigned int *)((char *)this + 0x4c) |= 8;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1004e110 size=0xa
#include "CPhysBox.h"
// TARGET: CPhysBox::sub_1004e110
unsigned char CPhysBox::sub_1004e110()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    b |= 8;
    return b;
}
// END FUNCTION

// FUNCTION: 0x1004e130 size=0x4c
#include "CPhysBox.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CPhysBox::vfunc5
CBaseEntity *CPhysBox::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x4b0);
	sub_100cd2d0((char *)this + 0x498);
	sub_100cd2d0((char *)this + 0x480);
	sub_100cd2d0((char *)this + 0x468);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x1004e1a0 size=0x5
#include "CPhysBox.h"
int __cdecl sub_102587f0();
// TARGET: CPhysBox::vfunc36
// the game's 0x1004e1a0: a tail call (jmp) of sub_102587f0
int CPhysBox::vfunc36()
{
	return sub_102587f0();
}
// END FUNCTION

// FUNCTION: 0x1004e1c0 size=0x1f
#include "CPhysBox.h"

CBaseEntity *sub_104115b0(int a, int b);

bool CPhysBox::sub_1004e1c0(int a)
{
	return this == sub_104115b0(a, 0);
}
// END FUNCTION

// FUNCTION: 0x1004e1f0 size=0x1d
#include "CUnkCombatChar.h"
#include "CPhysBox.h"
#include "IPhysicsObject.h"

// TARGET: CPhysBox::vfunc39
void CPhysBox::vfunc39(CBaseEntity *pOther)
{
	if (m_obj36c)
	{
		((IPhysicsObject *)m_obj36c)->vfunc2();
	}

	sub_1040d970((CUnkCombatChar *)pOther);
}
// END FUNCTION

// FUNCTION: 0x1004e220 size=0xe
#include "CPhysBox.h"

void sub_1040d950(int a);

void CPhysBox::vfunc41(int a)
{
	sub_1040d950(a);
}
// END FUNCTION

// FUNCTION: 0x1004e240 size=0xe
void __cdecl sub_1040d9a0(int a);

// TARGET: sub_1004e240
void __stdcall sub_1004e240(int a)
{
	sub_1040d9a0(a);
}
// END FUNCTION

// FUNCTION: 0x1004e260 size=0x125
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPhysBox.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern float g_1070d1b0[3];

typedef bool (__fastcall *PhysBoxSlot223Fn)(CPhysBox *pThis);

void CPhysBox::vfunc103()
{
	vfunc93(0, 0);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(1);
	}
	if (*(int *)((char *)this + 0x124)) {
		*((char *)this + 0x4c8) = 0;
		vfunc93(8, 0);
	} else {
		*((char *)this + 0x4c8) = 1;
	}
	sub_100b2e30(g_1070d1b0);
	m_nTakeDamage = 1;
	int unused;
	const char **ppName = vfunc9(&unused);
	vfunc105(*ppName ? *ppName : g_106b8540);
	sub_100b3b00();
	vfunc104();
	if (m_flags204 & 0x10)
		sub_100aaa40(1);
	if (!(m_flags204 & 0x20))
		sub_100b3840(2);
	((PhysBoxSlot223Fn)(*(void ***)this)[223])(this);
}
// END FUNCTION

// FUNCTION: 0x1004e3e0 size=0x34
// TARGET: CPhysBox::vfunc68
#include "CPhysBox.h"

bool CPhysBox::vfunc68(void *pOther)
{
	if ((*(int *)((char *)pOther + 0x9c) != 0 && (*(unsigned char *)((char *)this + 0x204) & 0x10)) ||
		(*(int *)((char *)pOther + 0xa8) != 0 && (sub_100b39c0() & 1))) {
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1004e430 size=0x97
#include "CPhysBox.h"
#include "CUnknown101466e0.h"

__declspec(dllimport) void DevWarning(const char *fmt, ...);

#define D10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
// stand-in for the first 242 slots of the entity's virtual table
struct Slots242 {
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
	virtual int vfunc8();
	virtual void s9();
	D10(a0) D10(a1) D10(a2) D10(a3) D10(a4) D10(a5) D10(a6) D10(a7) D10(a8) D10(a9)
	D10(b0) D10(b1) D10(b2) D10(b3) D10(b4) D10(b5) D10(b6) D10(b7) D10(b8) D10(b9)
	D10(c0)
	virtual float *vfunc220();
	D10(d0) D10(d1)
	virtual void vfunc241(int a);
};
struct PhysObj {
	virtual void s0();
	virtual void s1();
	virtual void vfunc2();
};

bool CPhysBox::vfunc223()
{
	if (*((char *)this + 0x4c8))
		((Slots242 *)this)->vfunc241(((Slots242 *)this)->vfunc8());
	PhysObj *phys = *(PhysObj **)((char *)this + 0x36c);
	if (!phys) {
		DevWarning("%s has no physics data!\n");
		return false;
	}
	if (!(*((char *)this + 0x204) & 1) && *((char *)this + 0x4c8)) {
		phys->vfunc2();
	} else {
		float *origin = ((Slots242 *)this)->vfunc220();
		*(float *)((char *)this + 0x458) = origin[0];
		*(float *)((char *)this + 0x45c) = origin[1];
		*(float *)((char *)this + 0x460) = origin[2];
	}
	((CUnknown101466e0 *)((char *)this + 0x1b0))->sub_101466e0(1);
	return true;
}
// END FUNCTION

// FUNCTION: 0x1004e500 size=0x1f0
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPhysBox.h"
#include "CCollisionProperty.h"
#include "IPhysicsObject.h"
#include "ScopeTrace.h"

#define SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct SPhysBoxSlots
{
	SLOTS10(a0) SLOTS10(a1) SLOTS10(a2) SLOTS10(a3) SLOTS10(a4) SLOTS10(a5) SLOTS10(a6) SLOTS10(a7) SLOTS10(a8) SLOTS10(a9)
	SLOTS10(b0) SLOTS10(b1) SLOTS10(b2) SLOTS10(b3) SLOTS10(b4) SLOTS10(b5) SLOTS10(b6) SLOTS10(b7) SLOTS10(b8) SLOTS10(b9)
	SLOTS10(c0)
	virtual void c100();
	virtual int vfunc211();
};

struct IPhysObj;
unsigned short sub_1002e0a0(IPhysObj *pObj, unsigned short nFlags);
extern float g_104454c4;

void CPhysBox::vfunc241(int a)
{
	CCollisionProperty *pColl;
	{
		ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY", g_106b8540);
		pColl = (CCollisionProperty *)((char *)this + 0x270);
		pColl->sub_100dc480(6);
	}
	if (m_flags204 & 4) {
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540, g_106b8540);
		pColl->AddSolidFlags(4);
	}
	IPhysicsObject *pPhys = (IPhysicsObject *)sub_100a5ea0(vfunc92(), ((SPhysBoxSlots *)this)->vfunc211(), 1, 0);
	if (m_nMaterial0450 == 1)
		sub_1002e0a0((IPhysObj *)pPhys, 1);
	if (m_flMassScale0454 > g_104454c4)
		pPhys->vfunc11(pPhys->vfunc12() * m_flMassScale0454);
	if (m_flMass0464 > g_104454c4)
		pPhys->vfunc11(m_flMass0464);
	float flMass = pPhys->vfunc12() > 1000000.0 ? 1000000.0 : (pPhys->vfunc12() < 1.0 ? 1.0 : pPhys->vfunc12());
	pPhys->vfunc11(flMass);
}
// END FUNCTION

// FUNCTION: 0x1004e770 size=0x3a
#include "CBaseEntity.h"

#define CSV_ROW(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CEntSlotView
{
	virtual void a0();
	virtual void a1();
	virtual void s2();
	virtual void a3();
	virtual void a4();
	virtual void a5();
	virtual void a6();
	virtual void a7();
	virtual int s8();
	virtual void a9();
	CSV_ROW(b1)
	CSV_ROW(b2)
	CSV_ROW(b3)
	CSV_ROW(b4)
	CSV_ROW(b5)
	CSV_ROW(b6)
	CSV_ROW(b7)
	CSV_ROW(b8)
	CSV_ROW(b9)
	CSV_ROW(b10)
	CSV_ROW(b11)
	CSV_ROW(b12)
	CSV_ROW(b13)
	CSV_ROW(b14)
	CSV_ROW(b15)
	CSV_ROW(b16)
	CSV_ROW(b17)
	CSV_ROW(b18)
	CSV_ROW(b19)
	CSV_ROW(b20)
	CSV_ROW(b21)
	CSV_ROW(b22)
	CSV_ROW(b23)
	virtual void a240();
	virtual void s241(int a);
};

namespace block_1004e770 {
	struct CEntUnit : CBaseEntity {
		void sub_1004e770(int a);
	};
}

// TARGET: block_1004e770::CEntUnit::sub_1004e770
void block_1004e770::CEntUnit::sub_1004e770(int a)
{
	if (*(char *)((char *)this + 0x4c8) == 0)
	{
		sub_100a0b20();
		*(char *)((char *)this + 0x4c8) = 1;
		((CEntSlotView *)this)->s241(((CEntSlotView *)this)->s8());
	}
	((CEntSlotView *)(*(char **)((char *)this + 0x36c)))->s2();
}
// END FUNCTION

// FUNCTION: 0x1004e7c0 size=0xa5
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlmemory.h"
#include "CPhysBox.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

void sub_101c0b80(const char *name, CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value);

// TARGET: CPhysBox::vfunc226
void CPhysBox::vfunc226(int a)
{
	if (*((char *)this + 0x4c8))
	{
		*((char *)this + 0x1b1) = 1;
		CBaseEntity::vfunc226(a);
		if (m_flags204 & 1)
		{
			const float *pos = ((CEntityVSlots *)this)->slot220()->Base();
			const float *old = (const float *)((char *)this + 0x458);
			if (old[0] != pos[0] || old[1] != pos[1] || old[2] != pos[2])
			{
				((CPhysBoxHelper498 *)((char *)this + 0x480))->sub_10010794((int)this, this, 0);
				const char *name = *(const char **)((char *)this + 0x20c);
				if (!name)
					name = g_106b8540;
				sub_101c0b80(name, this, this, 3, 0);
				m_flags204 &= ~1;
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1004e8a0 size=0x15
#include "CPhysBox.h"

bool CPhysBox::vfunc73(CBaseEntity *pOther)
{
	return (m_flags204 & 8) == 8;
}
// END FUNCTION

// FUNCTION: 0x1004e8d0 size=0x26
#include "CPhysBox.h"

void sub_10006d61();

// TARGET: CPhysBox::vfunc230
void CPhysBox::vfunc230(int a, void *b)
{
#define b ((int)b)
    void (CPhysBox::*pBase)(int, int);
    *(void **)&pBase = (void *)sub_10006d61;
    (this->*pBase)(a, b);

    void (CPhysBox::*pSlot75)(int, int);
    void **vt = *(void ***)this;
    *(void **)&pSlot75 = vt[0x12c / 4];
    (this->*pSlot75)(a, b);
#undef b
}
// END FUNCTION

// FUNCTION: 0x1004e910 size=0x16
#include "CPhysBox.h"

void CPhysBox::sub_1004e910(int a)
{
	((CPhysBoxHelper498 *)((char *)this + 0x498))->sub_10010794(a, this, 0);
}
// END FUNCTION

// FUNCTION: 0x1004e940 size=0x16
#include "CPhysBox.h"

void CPhysBox::vfunc243(int a)
{
	((CPhysBoxHelper498 *)((char *)this + 0x4b0))->sub_10010794(a, this, 0);
}
// END FUNCTION

// FUNCTION: 0x1004e970 size=0x31
#include "CPhysBox.h"

struct CUnknown1004e970Sub
{
    void sub_10010794(int a, void *pOwner, int b);
};

int CPhysBox::vfunc142(struct CTakeDamageInfo *pEnt)
{
#define pEnt ((CBaseEntity *)pEnt)
    sub_1000850d(pEnt);
    if (*(int *)((char *)pEnt + 0x28) != 0) {
        ((CUnknown1004e970Sub *)((char *)this + 0x468))->sub_10010794(*(int *)((char *)pEnt + 0x2c), this, 0);
    }
    return 1;
#undef pEnt
}
// END FUNCTION

// FUNCTION: 0x1004e9c0 size=0x4b
#include "platform.h"
#include "CPhysExplosion.h"

void *sub_100aa720(unsigned int size);
inline void *operator new(unsigned int, void *p) { return p; }
extern const char g_1053dc40[];

// TARGET: env_physexplosion
DLL_EXPORT CPhysExplosion *env_physexplosion()
{
	void *mem = sub_100aa720(0x45c);
	CPhysExplosion *p = mem ? ::new(mem) CPhysExplosion : 0;
	p->vfunc106(g_1053dc40);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1004ea30 size=0x8
unsigned char sub_10001109();
// TARGET: sub_1004ea30
unsigned char sub_1004ea30()
{
    unsigned char r = sub_10001109();
    r &= 0xfd;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1004ea50 size=0x6
#include "datamap.h"
#include "CPhysExplosion.h"
namespace lifted {
extern char g_1053d12c;
}
datamap_t *CPhysExplosion::vfunc82()
{
    return (datamap_t *)&lifted::g_1053d12c;
}
// END FUNCTION

// FUNCTION: 0x1004ea70 size=0x5
int sub_1004eab0(void);
int g_106bdb68 = ((int (*)(int))sub_1004eab0)(0);
// END FUNCTION

// FUNCTION: 0x1004eab0 size=0x1a
namespace lifted {
extern int g_1053d12c;
extern int g_1053d130;
extern char g_1053d174;
}
int sub_1004eab0()
{
    lifted::g_1053d130 = 4;
    lifted::g_1053d12c = (int)&lifted::g_1053d174;
    return (int)&lifted::g_1053d12c;
}
// END FUNCTION

// FUNCTION: 0x1004eae0 size=0x91
#include "CPhysExplosion.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

struct PodString { const char *pszValue; };
struct CastableNullString : public PodString { CastableNullString() { pszValue = 0; } };
struct CSlot212View
{
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS(210) EVS(211)
	virtual void SetModelName(PodString name);
};

void CPhysExplosion::vfunc103()
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	pEnt->vfunc93(0, 0);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", STRINGR_F(pEnt->m_name26c));
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	((CSlot212View *)this)->SetModelName(CastableNullString());
}
// END FUNCTION

// FUNCTION: 0x1004ebb0 size=0x6b
#include "CPointEntity.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;
extern float g_104454c4;
extern double g_1044a2b0;

struct CUnknown1004ebb0 : CPointEntity {
	CBaseEntity *sub_1004ebb0(CBaseEntity *pStart, float flArg);
};

CBaseEntity *CUnknown1004ebb0::sub_1004ebb0(CBaseEntity *pStart, float flArg)
{
	const char *pszName = *(const char **)((char *)this + 0x458);
	if (pszName)
		return g_106eb5d8.sub_100f7770(pStart, pszName, *(CBaseEntity **)&flArg, 0);
	flArg = *(float *)((char *)this + 0x454);
	if (flArg <= g_104454c4)
		flArg = *(float *)((char *)this + 0x450) * g_1044a2b0;
	return g_106eb5d8.sub_100f79b0(pStart, this->vfunc217(), flArg);
}
// END FUNCTION

// FUNCTION: 0x1004ec40 size=0xf
struct CFwd1004ec40
{
	void sub_1004ec40(int *p);
	void sub_1004ec60(int v);
};

// TARGET: CFwd1004ec40::sub_1004ec40
void CFwd1004ec40::sub_1004ec40(int *p)
{
	sub_1004ec60(*p);
}
// END FUNCTION

// FUNCTION: 0x1004ec60 size=0x151
#include "CPhysExplosion.h"
#include "CUnknown101c26d0.h"
#include "CAI_BaseNPC.h"

extern float g_104454c4;

void CPhysExplosion::sub_1004ec60(float flRadius)
{
	CAI_BaseNPC *pSelf = (CAI_BaseNPC *)this;
	CBaseEntity *pEnt;
	for (pEnt = sub_1004ebb0(0, flRadius); pEnt != 0; pEnt = sub_1004ebb0(pEnt, flRadius))
	{
		if (!pEnt->m_nTakeDamage)
			continue;
		if (pEnt->vfunc94() != 7 && (!pEnt->m_obj36c || pEnt->m_pA8))
			continue;

		CAI_BaseNPC *pTarget = (CAI_BaseNPC *)pEnt;
		Vector vecTarget;
		vecTarget = pTarget->vfunc197(*(Vector *)pSelf->vfunc217(), true, false);

		float *pOrigin = pSelf->vfunc217();
		float dx = pOrigin[0] - vecTarget.x;
		float dy = pOrigin[1] - vecTarget.y;
		float dz = pOrigin[2] - vecTarget.z;
		float sq = dx * dx + dz * dz;
		float flDist = FastSqrt(sq + dy * dy);

		if (m_radius == g_104454c4 || flDist <= m_radius)
		{
			float flDamage = m_damage - flDist * 0.4f;
			if (flDamage < g_104454c4)
				flDamage = 0.0f;
			CUnknown101c26d0 info;
			pEnt->sub_100a1250(info.sub_101c26d0(this, this, flDamage, 0x40, 0, 0, -1));
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1004ee20 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_1044a2c4[];	// CPhysImpact vftable
extern const char g_1053dc78[];

// TARGET: env_physimpact
DLL_EXPORT CBaseEntity *env_physimpact()
{
	void *mem = sub_100aa720(0x464);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_1044a2c4;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_1053dc78);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1004ee90 size=0x8
unsigned char sub_10001109();
// TARGET: sub_1004ee90
unsigned char sub_1004ee90()
{
    unsigned char r = sub_10001109();
    r &= 0xfd;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1004eeb0 size=0x6
#include "datamap.h"
#include "CPhysImpact.h"
namespace lifted {
extern char g_1053d224;
}
datamap_t *CPhysImpact::vfunc82()
{
    return (datamap_t *)&lifted::g_1053d224;
}
// END FUNCTION

// FUNCTION: 0x1004eed0 size=0x5
int sub_1004ef10(void);
int g_106bdc68 = ((int (*)(int))sub_1004ef10)(0);
// END FUNCTION

// FUNCTION: 0x1004ef10 size=0x1a
namespace lifted {
extern int g_1053d224;
extern int g_1053d228;
extern char g_1053d26c;
}
int sub_1004ef10()
{
    lifted::g_1053d228 = 4;
    lifted::g_1053d224 = (int)&lifted::g_1053d26c;
    return (int)&lifted::g_1053d224;
}
// END FUNCTION

// FUNCTION: 0x1004ef40 size=0x5
#include "CPhysImpact.h"
#include "CBaseEntity.h"

// TARGET: CPhysImpact::vfunc113
// the game's 0x1004ef40: a tail call (jmp) of CBaseEntity::vfunc113
void CPhysImpact::vfunc113()
{
	((CBaseEntity *)this)->CBaseEntity::vfunc113();
}
// END FUNCTION

// FUNCTION: 0x1004ef60 size=0x91
#include "CEntityVSlots.h"
#include "CPhysImpact.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

struct PodString { const char *pszValue; };
struct CastableNullString : public PodString { CastableNullString() { pszValue = 0; } };
struct CSlot212View
{
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS(210) EVS(211)
	virtual void SetModelName(PodString name);
};

void CPhysImpact::vfunc103()
{
	vfunc93(0, 0);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", STRINGR_F(m_name26c));
		m_Collision.sub_100dc480(0);
	}
	((CSlot212View *)this)->SetModelName(CastableNullString());
}
// END FUNCTION

// FUNCTION: 0x10050110 size=0x6
#include "datamap.h"
#include "CPhysConvert.h"
namespace lifted {
extern char g_1053d31c;
}
datamap_t * CPhysConvert::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1053d31c);
}
// END FUNCTION

// FUNCTION: 0x10050130 size=0x5
int * sub_10050170(void);
int * g_106bdb78 = ((int * (*)(int))sub_10050170)(0);
// END FUNCTION

// FUNCTION: 0x10050170 size=0x52
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
extern int g_1053d31c[2];
void sub_1000bcfd();

int *sub_10050170()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_swapModel", {0x468, 0}, 1, 0x6, "swapmodel" },
        { 5, "m_makeDebris", {0x46c, 0}, 1, 0x6, "makedebris" },
        { 5, "m_makePhyshandTarget", {0x46d, 0}, 1, 0x6, "make_physhand_target" },
        { 0, "InputConvertTarget", {0x0, 0}, 1, 0x8, "ConvertTarget", 0, (void *)sub_1000bcfd },
        { 10, "m_OnConvert", {0x450, 0}, 1, 0x16, "OnConvert", g_1055dc70 },
    };
    g_1053d31c[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1053d31c[0] = (int)&dataDesc[1];
    return g_1053d31c;
}
// END FUNCTION

// FUNCTION: 0x100501f0 size=0x3d
extern void *vt_1044b584[];
extern void *vt_1044b0f4[];
struct CPhysConvertBaseView {
	void sub_100090fc(int);
};
void __fastcall sub_100cd2a0(void *);

// TARGET: sub_100501f0
void *__fastcall sub_100501f0(char *p)
{
	((CPhysConvertBaseView *)p)->sub_100090fc(0);
	*(void **)p = vt_1044b584;
	sub_100cd2a0(p + 0x450);
	*(void **)p = vt_1044b0f4;
	*(int *)(p + 0x468) = 0;
	*(char *)(p + 0x46c) = 0;
	*(char *)(p + 0x46d) = 0;
	return p;
}
// END FUNCTION

// FUNCTION: 0x10050240 size=0x2b
#include "CPhysConvert.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CPhysConvert::vfunc5
CBaseEntity *CPhysConvert::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x450))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10050280 size=0x1e
#include "CPointEntity.h"

void sub_100aa7b0(void *p);

// TARGET: CPointEntity::vfunc5
CBaseEntity *CPointEntity::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100502b0 size=0x201
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CPhysConvert.h"
#include "inputdata_t.h"
#include "COutputEvent.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;
__declspec(dllimport) void Warning(const char *fmt, ...);
__declspec(dllimport) void DevWarning(const char *fmt, ...);
void sub_1012c840(CBaseEntity *pEnt);
CBaseEntity *sub_1004ff40(CBaseEntity *pEnt);
void sub_1012c600(CBaseEntity *pOld, CBaseEntity *pNew);
void sub_101cf600(CBaseEntity *pEnt);
void sub_101cd940(CBaseEntity *pEnt);

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
#define ARRAYSIZE(p) (sizeof(p) / sizeof(p[0]))

inline CBaseEntity *FindByName(CBaseEntity *pStart, const char *name, CBaseEntity *pAct) { return g_106eb5d8.sub_100f7770(pStart, STRINGR(name), pAct, 0); }
struct SN_t { const char *p; };
inline SN_t GetEntityName(CBaseEntity *e) { SN_t s; s.p = e->m_name26c; return s; }
inline void PSetName(CBaseEntity *e, SN_t s) { e->sub_100a0420(s.p); }
void CPhysConvert::sub_100502b0(inputdata_t *pInput)
{
	((COutputEvent *)m_OnConvert)->sub_100cd660(pInput->pActivator, this, 0);

	CBaseEntity *entlist[512];
	CBaseEntity *pSwap = FindByName(0, m_swapModel468, (CBaseEntity *)pInput->pActivator);
	CBaseEntity *pEntity = 0;

	int count = 0;
	while ((pEntity = FindByName(pEntity, m_target20c, (CBaseEntity *)pInput->pActivator)) != 0)
	{
		entlist[count++] = pEntity;
		if (count >= ARRAYSIZE(entlist))
			break;
	}

	if (pSwap && count > 0)
		count = 1;

	for (int i = 0; i < count; i++)
	{
		pEntity = entlist[i];

		if (pEntity->vfunc94() == 7)
		{
			Warning("ERROR phys_convert %s ! Already MOVETYPE_VPHYSICS\n", STRINGR(pEntity->m_classname11c));
			continue;
		}

		sub_1012c840(pEntity);

		if (pSwap)
		{
			((void (__fastcall *)(CBaseEntity *))(*(void ***)pEntity)[225])(pEntity);
			int tmp;
			pEntity->vfunc105(STRINGR(*pSwap->vfunc9(&tmp)));
		}

		CBaseEntity *pPhys = sub_1004ff40(pEntity);
		if (pPhys)
		{
			if (m_bFlag46c)
				pPhys->sub_100aaa40(1);
			if (m_bFlag46d)
				pPhys->sub_100b3840(2);
			else
				pPhys->sub_100b3900(2);
			if (pPhys->m_obj36c)
			{
				PSetName(pPhys, GetEntityName(pEntity));
				(*(void (__fastcall ***)(int))pPhys->m_obj36c)[2](pPhys->m_obj36c);
				sub_1012c600(pEntity, pPhys);
				pEntity->vfunc77();
				sub_101cf600(pEntity);
				sub_101cd940(pEntity);
			}
			else
			{
				int tmp2;
				DevWarning("ERROR phys_convert %s! Could not create proper physics object for %s !\n", STRINGR(pEntity->m_classname11c), STRINGR(*pEntity->vfunc9(&tmp2)));
				sub_101cd940(pPhys);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10050550 size=0x1e
#include "CPhysExplosion.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysExplosion::vfunc5
CBaseEntity *CPhysExplosion::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10050580 size=0x1e
#include "CPhysImpact.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysImpact::vfunc5
CPhysImpact *CPhysImpact::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
