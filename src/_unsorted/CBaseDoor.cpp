// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100ed720 size=0x6
#include "CBaseDoor.h"
#include "datamap.h"
namespace lifted {
extern char g_10564578;
}
datamap_t * CBaseDoor::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10564578);
}
// END FUNCTION

// FUNCTION: 0x100ee390 size=0x3
#include "CBaseDoor.h"
bool CBaseDoor::vfunc241()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100ee3b0 size=0x1d
#include "CBaseDoor.h"

// TARGET: CBaseDoor::sub_100ee3b0
char CBaseDoor::sub_100ee3b0()
{
	if (m_flags204 & 0x100)
		return (CBaseEntity::vfunc117() & ~2) | 8;
	return CBaseEntity::vfunc117() & ~2;
}
// END FUNCTION

// FUNCTION: 0x100ee3e0 size=0x3
#include "CBaseDoor.h"
bool CBaseDoor::vfunc128()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100ee400 size=0x1
#include "CBaseDoor.h"
void CBaseDoor::vfunc249()
{
}
// END FUNCTION

// FUNCTION: 0x100ee420 size=0x8e
#include "CBaseDoor.h"

void __cdecl sub_100aa7b0(void *p);

CBaseDoor *CBaseDoor::vfunc5(unsigned char flags)
{
	m_items564[7].sub_100cd2d0();
	m_items564[6].sub_100cd2d0();
	m_items564[5].sub_100cd2d0();
	m_items564[4].sub_100cd2d0();
	m_items564[3].sub_100cd2d0();
	m_items564[2].sub_100cd2d0();
	m_items564[1].sub_100cd2d0();
	m_items564[0].sub_100cd2d0();
	m_items4a4[1].sub_100cd2d0();
	m_items4a4[0].sub_100cd2d0();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100eedf0 size=0xdb
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CBaseDoor.h"
#include "CEHandleGet.h"
struct CDoorView_100eedf0 { char m_pad0[0x204]; unsigned int m_nFlags; char m_pad1[0x55c - 0x208]; char m_b55c; char m_pad2[0x64c - 0x55d]; int m_n64c; int m_n650; };
int CBaseDoor::vfunc35(int a)
{
	if (sub_100127ec())
		return 0x3a;
	unsigned int h = m_hLinked638;
	if (h != 0xffffffff)
	{
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
		if (pSlot->m_Serial == (int)(h >> 13) && pSlot->m_pEntity != 0)
			return ((CBaseDoor *)EHandle_Get(m_hLinked638))->vfunc35(a);
	}
	CBaseEntity *pOther = sub_10008cba(a);
	if (pOther)
		return ((CBaseDoor *)pOther)->vfunc35(a);
	CDoorView_100eedf0 *v = (CDoorView_100eedf0 *)this;
	if (!(v->m_nFlags & 0x500))
		return 0;
	if (v->m_b55c)
		return v->m_n650;
	if (sub_1000cc57())
		return 0x3b;
	return v->m_n64c;
}
// END FUNCTION

// FUNCTION: 0x100ef030 size=0x17
#include "CBaseDoor.h"

void *CBaseDoor::vfunc38(int a)
{
	CBaseEntity *pFound = sub_10008cba(a);
	if (!pFound)
		pFound = this;
	return pFound;
}
// END FUNCTION

// FUNCTION: 0x100ef060 size=0x18b
#include "CBaseDoor.h"

extern "C" int __cdecl sub_1043e780(const char*, const char*);
extern char g_106b8540[];

struct str_100ef060
{
	const char* p;
	const char* ToCStr() const { return p ? p : g_106b8540; }
};

struct DoorSeqEntry_100ef060
{
	int id;
	str_100ef060 name;
};

struct DoorRegistry_100ef060
{
	char pad[0x14];
	int count;
	DoorSeqEntry_100ef060** items;

	int sub_10009331(void* ent, const char* name, int flags);

	int Lookup(const char* name)
	{
		for (int i = 0; i < count; i++)
		{
			if (sub_1043e780(items[i]->name.ToCStr(), name) == 0)
				return items[i]->id;
		}
		return -1;
	}
};

extern DoorRegistry_100ef060 g_1074b308;
extern int g_106eb3dc;
extern int g_106eb3e0;
extern int g_106eb3e8;
extern int g_106eb3e4;

void CBaseDoor::vfunc71()
{
	*(int*)((char*)this + 0xbc) = 0;
	*(int*)((char*)this + 0xb4) = g_1074b308.sub_10009331(this, ((str_100ef060*)((char*)this + 0xc0))->ToCStr(), 0);
	g_106eb3dc = g_1074b308.Lookup("close");
	g_106eb3e0 = g_1074b308.Lookup("open");
	g_106eb3e8 = g_1074b308.Lookup("swing");
	g_106eb3e4 = g_1074b308.Lookup("locked");
}
// END FUNCTION

// FUNCTION: 0x100ef260 size=0x2c9
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseDoor.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include "Ray_t.h"
#include "math.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
void __cdecl sub_101cf5c0(CBaseEntity *pEnt, const Vector *pPos, int a);

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

// TARGET: CBaseDoor::sub_100ef260
void CBaseDoor::sub_100ef260()
{
	((CBaseEntity *)this)->vfunc104();
	((CEntityVSlots *)this)->slot171();

	{
		int dummy;
		((CBaseEntity *)this)->vfunc105(STRINGR(*((CEntityVSlots *)this)->slot9(&dummy)));
	}

	m_vecPosition508 = *((CEntityVSlots *)this)->slot220();

	float flExtent = fabs((((CEntityVSlots *)this)->slot214()->x - 2.0f) * m_vecMovedir[0])
	               + fabs((((CEntityVSlots *)this)->slot214()->y - 2.0f) * m_vecMovedir[1])
	               + fabs((((CEntityVSlots *)this)->slot214()->z - 2.0f) * m_vecMovedir[2])
	               - *(float *)((char *)this + 0x504);

	m_vecPosition514 = m_vecPosition508 + (*(Vector *)m_vecMovedir) * flExtent;

	if (m_flags204 & 1)
	{
		sub_101cf5c0(this, &m_vecPosition514, 0);
		m_nState4f8 = 0;
	}
	else
	{
		m_nState4f8 = 1;
	}

	if (m_flags204 & 0x800)
		m_b55c = 1;

	((CBaseEntity *)this)->vfunc93(8, 0);
	((CBaseEntity *)this)->sub_100b3b00();

	if (m_flSpeed164 == g_104454c4)
		m_flSpeed164 = 100.0f;

	*(void (CBaseDoor::**)(CBaseEntity *))((char *)this + 0x1ec) =
		reinterpret_cast<void (CBaseDoor::*)(CBaseEntity *)>(&CBaseDoor::sub_100efae0);

	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(1);
	}

	if (_strcmpi(STRINGR(m_classname11c), "func_water") != 0 && (m_flags204 & 8))
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", STRINGR(m_name26c));
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(4);
	}

	vfunc223();
	((CBaseEntity *)this)->sub_100a9470(1);

	m_flTimer640 = 0;
	m_bfNpcFailedFlags = 0;
	((char *)this)[0x655] = 0;
}
// END FUNCTION

// FUNCTION: 0x100ef5f0 size=0x21
struct CBaseDoorX
{
    void sub_10013534(bool bFlag);
    void sub_100ef5f0(bool bFlag);
};

// TARGET: sub_100ef5f0
void CBaseDoorX::sub_100ef5f0(bool bFlag)
{
    sub_10013534(bFlag);
    if (bFlag) {
        void (__fastcall *pfn)(void *) = (void (__fastcall *)(void *))(*(void ***)this)[0x3e8 / 4];
        pfn(this);
    }
}
// END FUNCTION

// FUNCTION: 0x100ef630 size=0x8a
#include "CBaseDoor.h"

void sub_100043cc(CBaseDoor *door, void *pData, int a);

void CBaseDoor::vfunc250()
{
	unsigned int flags = *(unsigned int *)((char *)this + 0x204);
	if (!(flags & 0x20) && *(int *)((char *)this + 0x3fc) != 0xbf800000) {
		if (flags & 1) {
			sub_100043cc(this, (char *)this + 0x514, 0);
			*(int *)((char *)this + 0x4f8) = 0;
		} else {
			sub_100043cc(this, (char *)this + 0x508, 0);
			*(int *)((char *)this + 0x4f8) = 1;
		}
		*(int *)((char *)this + 0x3fc) = 0xbf800000;
		m_pfnTouch = (void (CBaseEntity::*)(CBaseEntity *))&CBaseDoor::sub_10012837;
		switch (*(int *)((char *)this + 0x4f8)) {
		case 0:
			sub_100efbf0(1);
			break;
		case 1:
			sub_100efbf0(0);
			break;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100ef6f0 size=0x20e
#include "CBaseEntity.h"
#include "CBaseDoor.h"
#include "CCollisionProperty.h"
#include "IPhysicsObject.h"
#include "IPhysicsEnvironment.h"
#include "ScopeTrace.h"
#include "engineserver.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }


extern IPhysicsEnvironment *g_10723940;
extern "C" int __cdecl _strcmpi(const char *a, const char *b);

struct CVFluidParams
{
	float m_surface[4];
	float m_current[3];
	float m_damping;
	float m_torque;
	float m_viscosity;
	void *m_pGameData;
	char m_bUseAerodynamics;
	int m_nContents;
};

struct CVDoorView : CBaseDoor
{
	const char *GetClassname() { return STRINGR_F(m_classname11c); }
	bool IsSolidFlagSet()
	{
		ScopeTrace trace("CBaseEntity::IsSolidFlagSet", this ? (STRINGR_F(m_name26c)) : g_105387dc);
		return (m_b2b4 >> 2) & 1;
	}
	void AddSolidFlags(int flags)
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", this ? (STRINGR_F(m_name26c)) : g_105387dc);
		((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(flags);
	}
};

// TARGET: CBaseDoor::vfunc223
bool CBaseDoor::vfunc223()
{
	CVDoorView *pView = (CVDoorView *)this;
	if (_strcmpi(pView->GetClassname(), "func_water") != 0) {
		if (!pView->IsSolidFlagSet())
			sub_100a6150(0, 0, 0);
	} else {
		pView->AddSolidFlags(0x20);
		m_flags204 |= 0x1000;
		if (engine->vfunc58(vfunc8())) {
			int pObject = sub_100a6150(0, 0, 0);
			CCollisionProperty *pCol = (CCollisionProperty *)((char *)this + 0x270);
			CVFluidParams params;
			params.m_damping = 0.01f;
			params.m_surface[0] = 0;
			params.m_surface[1] = 0;
			params.m_surface[2] = 1.0f;
			params.m_surface[3] = ((float *(__fastcall *)(void *))(*(void ***)pCol)[8])(pCol)[2] + pCol->vfunc2()[2] - 1.0f;
			params.m_current[0] = 0;
			params.m_current[1] = 0;
			params.m_current[2] = 0;
			params.m_torque = 0.1f;
			params.m_viscosity = 0.01f;
			params.m_pGameData = this;
			g_10723940->vfunc10((void *)pObject, &params);
		}
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x100ef990 size=0xa3
#include "CBaseEntity.h"
#include "CBaseDoor.h"
#include "CGlobalEntityList.h"

extern char g_106b8540[];	// empty string
extern CGlobalEntityList g_106eb5d8;

static inline void SetHandle(unsigned int *pHandle, CGlobalEntityList_Ent *pObj)
{
	if (pObj)
		*pHandle = *pObj->v1();
	else
		*pHandle = 0xffffffff;
}

void CBaseDoor::vfunc113()
{
	CBaseEntity::vfunc113();
	switch (m_nState4f8) {
	case 0:
		sub_100efbf0(1);
		break;
	case 1:
		sub_100efbf0(0);
		break;
	}
	CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, m_pszLinked634 ? m_pszLinked634 : g_106b8540, 0, 0);
	SetHandle(&m_hLinked630, pEnt == 0 ? 0 : *(CGlobalEntityList_Ent **)((char *)pEnt + 0xa4));
	pEnt = g_106eb5d8.sub_100f7770(0, m_pszLinked63c ? m_pszLinked63c : g_106b8540, 0, 0);
	if (pEnt)
		m_hLinked638 = *pEnt->vfunc1();
}
// END FUNCTION

// FUNCTION: 0x100efa70 size=0x30
#include "CBaseDoor.h"
void sub_101cf5c0(CBaseDoor *pDoor, Vector *pPos, int a);
void CBaseDoor::vfunc156(int bOpen)
{
	if (!bOpen)
		sub_101cf5c0(this, &m_vecPosition514, 0);
	else
		sub_101cf5c0(this, &m_vecPosition508, 0);
}
// END FUNCTION

// FUNCTION: 0x100efab0 size=0x13
#include "CBaseDoor.h"
#include "CBaseEntitySlots.h"

void CBaseDoor::vfunc104()
{
	((CBaseEntitySlots *)this)->slot71();
	sub_100eecf0();
}
// END FUNCTION

// FUNCTION: 0x100efc90 size=0x257
#include "CBaseCombatCharacter.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseDoor.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"
#include "CUnknown100290c0.h"
#include "CEHandleGet.h"
#include "CVariantCopy.h"

extern CGlobalEntityList *g_10566458;
extern int g_106eb3e4;
void sub_101cebc0(CBaseEntity *pPlayer, int a, int b);

struct CDoorHandleView
{
	unsigned int m_h;
	CBaseEntity *sub_100d15d0();
};

struct CDoorActivatorView
{
	char m_pad0000[0xa8];
	CBaseCombatCharacter *m_pPlayer;
};

void CBaseDoor::vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int value)
{
#define value (*(float *)&value)
	ScopeTrace trace("CBaseDoor::Use", g_106b8540, g_106b8540);
	CBaseCombatCharacter *pPlayer;
	if (pActivator == 0)
		pPlayer = (CBaseCombatCharacter *)pActivator;
	else
		pPlayer = ((CDoorActivatorView *)pActivator)->m_pPlayer;
	m_hActivator53c = pActivator;
	if (((CUnknown100290c0 *)g_10566458)->sub_100290c0(&m_hLinked638)) {
		CVariantCopy variant;
		((CEntityVSlots *)((CDoorHandleView *)&m_hLinked638)->sub_100d15d0())->slot118("Use", (CEntityVSlots *)pActivator, (CEntityVSlots *)this, variant, 0);
		return;
	}
	if (sub_100127ec()) {
		sub_101cebc0((CBaseEntity *)pPlayer, 0x4d, 0);
		return;
	}
	if (m_nState4f8 == 3 && m_n558 == 0)
		vfunc244(1);
	if (m_nState4f8 == 2 && m_n558 == 0)
		vfunc243(1, 1);
	((CEntityVSlots *)this)->slot248();
	if (EHandle_Get(m_hDoorknob0)) {
		sub_100eef50(pActivator, pCaller, useType, value);
		return;
	}
	if (m_nState4f8 == 1 || m_nState4f8 == 0 || (m_flags204 & 0x20)) {
		if (m_b55c) {
			if (pPlayer) {
				sub_100ee4e0(g_106eb3e4, pPlayer->sub_101671a0());
				sub_100ee560(pPlayer->sub_101671a0());
			} else {
				sub_100ee4e0(g_106eb3e4, 0);
			}
		} else {
			vfunc242();
		}
	}
#undef value
}
// END FUNCTION

// FUNCTION: 0x100eff90 size=0xc7
#include "CBaseDoor.h"
#include <math.h>
#include "CEntityVSlots.h"
#pragma intrinsic(fabs)

static inline float FloatMakePositive(float f)
{
    return (float)fabs(f);
}

static inline bool VectorsAreEqual(const Vector &src1, const Vector &src2, float tolerance)
{
    if (FloatMakePositive(src1.x - src2.x) > tolerance)
        return false;
    if (FloatMakePositive(src1.y - src2.y) > tolerance)
        return false;
    return FloatMakePositive(src1.z - src2.z) <= tolerance;
}

// TARGET: CBaseDoor::vfunc248
void CBaseDoor::vfunc248()
{
    if (VectorsAreEqual(m_vecPosition508, *((CEntityVSlots *)this)->slot220(), 0.001f)) {
        m_nState4f8 = 1;
        return;
    }
    if (VectorsAreEqual(m_vecPosition514, *((CEntityVSlots *)this)->slot220(), 0.001f))
        m_nState4f8 = 0;
}
// END FUNCTION

// FUNCTION: 0x100f0340 size=0x20b
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CBaseDoor.h"
#include "CBaseCombatCharacter.h"
#include "CEHandleGet.h"
#include "inputdata_t.h"
#include "CEntityVSlots.h"
#include <math.h>

struct CKnobView
{
	void sub_10224170(inputdata_t *pInput);
};

struct SDoorActivator
{
	char m_pad0000[0xa8];
	CBaseCombatCharacter *m_pPlayer;	// 0xa8
};

// The real earlier unit function CBaseDoor::sub_100ee950 (the doorknob closer to the target, 0x100ee950), a same-unit
// copy: its first three knob lookups decline the header inline LookupEntity (VC6 inline budget), so the COMDAT is
// compiled before the target.
namespace block_100f0340 {
static inline float KnobDist(const Vector &a, const Vector &b)
{
	return fabs(a.y - b.y) + fabs(a.z - b.z) + fabs(a.x - b.x);
}
struct DoorUnit : CBaseDoor
{
	CBaseEntity *sub_100ee950(CBaseEntity *pTarget);
};
#define KNOB_GET(h) ((EHANDLE *)&(h))->Get()
CBaseEntity *DoorUnit::sub_100ee950(CBaseEntity *pTarget)
{
	if (!pTarget)
		return 0;
	if (KNOB_GET(m_hDoorknob0) && KNOB_GET(m_hDoorknob1))
	{
		Vector vTarget;
		((CEntityVSlots *)pTarget)->slot193(&vTarget);
		Vector vTmp;
		const Vector *p0 = ((CEntityVSlots *)KNOB_GET(m_hDoorknob0))->slot193(&vTmp);
		float d0 = KnobDist(vTarget, *p0);
		const Vector *p1 = ((CEntityVSlots *)KNOB_GET(m_hDoorknob1))->slot193(&vTmp);
		float d1 = KnobDist(vTarget, *p1);
		if (d1 > d0)
			return KNOB_GET(m_hDoorknob0);
		return KNOB_GET(m_hDoorknob1);
	}
	if (KNOB_GET(m_hDoorknob0) || KNOB_GET(m_hDoorknob1))
	{
		if (KNOB_GET(m_hDoorknob0))
			return KNOB_GET(m_hDoorknob0);
		if (KNOB_GET(m_hDoorknob1))
			return KNOB_GET(m_hDoorknob1);
	}
	return 0;
}
#undef KNOB_GET
}

// m_toggle_state read through the CBaseToggle accessor
struct CDoorToggleView : CBaseDoor
{
	int GetToggleState() const { return m_nState4f8; }
};

// TARGET: ?vfunc242@CBaseDoor@@UAEHXZ
int CBaseDoor::vfunc242()
{
	SDoorActivator *pActivator = (SDoorActivator *)m_hActivator53c.Get();
	CBaseCombatCharacter *pPlayer;
	if (!pActivator)
		pPlayer = (CBaseCombatCharacter *)pActivator;
	else
		pPlayer = pActivator->m_pPlayer;
	const CDoorToggleView *pToggle = (const CDoorToggleView *)this;
	if (pToggle->GetToggleState() == 0 || pToggle->GetToggleState() == 2)
		vfunc244(1);
	else if (pToggle->GetToggleState() == 1 || pToggle->GetToggleState() == 3)
		vfunc243(1, 1);
	inputdata_t input;
	input.value.iValue = 0;
	input.value.eVal = 0xffffffff;
	input.value.fieldType = 0;
	input.pCaller = this;
	input.pActivator = m_hActivator53c.Get();
	if (((CBaseHandle *)&m_hDoorknob0)->Get()) {
		((CKnobView *)((CBaseHandle *)&m_hDoorknob0)->Get())->sub_10224170(&input);
		((CEntityVSlots *)((CBaseHandle *)&m_hDoorknob0)->Get())->slot273();
	}
	if (((CBaseHandle *)&m_hDoorknob1)->Get()) {
		((CKnobView *)((CBaseHandle *)&m_hDoorknob1)->Get())->sub_10224170(&input);
		((CEntityVSlots *)((CBaseHandle *)&m_hDoorknob1)->Get())->slot273();
	}
	if (pPlayer)
		sub_100ee560(pPlayer->sub_101671a0());
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100f05e0 size=0x1f9
#include "CBaseDoor.h"
#include "CBaseToggle.h"
#include "CEHandleGet.h"
#include "COutputEvent.h"
extern int g_106eb3e0;
extern int g_106eb3e8;
struct CDoorView164 { char pad[0x164]; float m_flSpeed; };

// TARGET: CBaseDoor::vfunc243
void CBaseDoor::vfunc243(char bChain, int bLinked)
{
	if (bChain && EHandle_Get(m_hLinked630)) {
		CBaseDoor *pLinked = (CBaseDoor *)EHandle_Get(m_hLinked630);
		CBaseEntity *pActivator = (CBaseEntity *)EHandle_Get(*(unsigned int *)&pLinked->m_hActivator53c);
		((CBaseDoor *)EHandle_Get(m_hLinked630))->m_hActivator53c = m_hActivator53c;
		((CBaseDoor *)EHandle_Get(m_hLinked630))->vfunc243(0, 1);
		CBaseDoor *pLinked2 = (CBaseDoor *)EHandle_Get(m_hLinked630);
		pLinked2->m_hActivator53c = pActivator;
	}
	sub_100ee4e0(g_106eb3e0, 0);
	sub_100ee4e0(g_106eb3e8, 0);
	sub_100ee810();
	sub_100efbf0(1);
	m_nState4f8 = 2;
	m_pfn0114 = (void (CBaseEntity::*)())&CBaseDoor::sub_100f0860;
	((CBaseToggle *)this)->sub_101c1520(&m_vecPosition514, ((CDoorView164 *)this)->m_flSpeed);
	m_items564[7].sub_100cd660((CBaseEntity *)EHandle_Get(m_hActivator53c), this, 0);
}
// END FUNCTION

// FUNCTION: 0x100f0a40 size=0x159
#include "CBaseDoor.h"
#include "CCollisionProperty.h"
#include <math.h>

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CDoorSlots
{
	PV10(0) PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV100(1)
	PV10(20)
	PV(210) PV(211) PV(212) PV(213)
	virtual Vector *v214();
	PV(215) PV(216)
	virtual Vector *v217();
};

struct CDoorMoveFields
{
	char m_pad0000[0x190];
	Vector m_vecMoveDir;	// 0x190
	char m_pad019c[0x504 - 0x19c];
	float m_flLip;	// 0x504
};

// TARGET: CBaseDoor::vfunc245
void CBaseDoor::vfunc245(Vector *pMins, Vector *pMaxs)
{
	CDoorMoveFields *f = (CDoorMoveFields *)this;
	CDoorSlots *s = (CDoorSlots *)this;
	Vector vecAbs = *s->v217();
	Vector vecMoveDir = f->m_vecMoveDir * -1.0f;
	float t0 = fabs((s->v214()->x - 2.0f) * f->m_vecMoveDir.x) + fabs(f->m_vecMoveDir.y * (s->v214()->y - 2.0f)) + fabs(f->m_vecMoveDir.z * (s->v214()->z - 2.0f)); float t1 = f->m_flLip; float flDist = t0 - t1;
	CCollisionProperty *pColl = (CCollisionProperty *)(0x270 + (char *)this);
	Vector vecPos = vecAbs + vecMoveDir * flDist;
	*pMins = *(Vector *)pColl->vfunc1() + vecPos;
	*pMaxs = *(Vector *)pColl->vfunc2() + vecPos;
}
// END FUNCTION

// FUNCTION: 0x100f0ef0 size=0xe
#include "CBaseDoor.h"
void CBaseDoor::vfunc246(int a, int* b, int c)
{
	b[6] = -1;
}
// END FUNCTION

// FUNCTION: 0x100f0f10 size=0x7
#include "CBaseDoor.h"
namespace lifted {
extern float g_104454c4;
}
float CBaseDoor::vfunc247()
{
    return lifted::g_104454c4;
}
// END FUNCTION

// FUNCTION: 0x100f0f50 size=0x1d8
#include "CBaseDoor.h"
#include "CBaseToggle.h"
#include "CEHandleGet.h"

extern int g_106eb3e8;

void CBaseDoor::vfunc244(char bChain)
{
	if (bChain && EHandle_Get(m_hLinked630)) {
		CBaseEntity *pOldActivator = (CBaseEntity *)EHandle_Get(*(unsigned int *)&((CBaseDoor *)EHandle_Get(m_hLinked630))->m_hActivator53c);
		((CBaseDoor *)EHandle_Get(m_hLinked630))->m_hActivator53c = m_hActivator53c;
		((CBaseDoor *)EHandle_Get(m_hLinked630))->vfunc244(0);
		((CBaseDoor *)EHandle_Get(m_hLinked630))->m_hActivator53c = pOldActivator;
	}
	sub_100ee4e0(g_106eb3e8, 0);
	m_nState4f8 = 3;
	m_pfn0114 = (void (CBaseEntity::*)())&CBaseDoor::sub_100f11b0;
	((CBaseToggle *)this)->sub_101c1520(&m_vecPosition508, m_flSpeed164);
	m_items564[6].sub_100cd660(m_hActivator53c.Get(), this, 0);
}
// END FUNCTION

// FUNCTION: 0x100f1340 size=0x107
#include "CBaseDoor.h"
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"

struct S100f1340Ai
{
	void sub_1027de00(CBaseDoor *pDoor);
	void sub_1027dfb0(CBaseDoor *pDoor);
};

struct S100f1340Ent
{
	char m_pad[0x94];
	S100f1340Ai *m_pAi;
};

void CBaseDoor::vfunc177(CBaseEntity *pOther)
{
	ScopeTrace trace("CBaseDoor::StartBlocked", g_106b8540);
	if (m_nState4f8 == 3) {
		m_items564[0].sub_100cd660(pOther, this, 0);
		return;
	}
	S100f1340Ent *pActivator = (S100f1340Ent *)EHandle_Get(m_hActivator53c);
	if (pActivator) {
		S100f1340Ai *pAi = pActivator->m_pAi;
		if (pAi) {
			sub_100f0e90(2);
			pAi->sub_1027de00(this);
		}
	}
	S100f1340Ent *pEnt = (S100f1340Ent *)pOther;
	if (pEnt) {
		S100f1340Ai *pAi = pEnt->m_pAi;
		if (pAi) {
			sub_100f0e90(0x80);
			pAi->sub_1027dfb0(this);
		}
	}
	m_items564[1].sub_100cd660(pOther, this, 0);
}
// END FUNCTION

// FUNCTION: 0x100f14a0 size=0x2c2
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "TestBit.h"
#include "ScopeTrace.h"
#include "CBaseDoor.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CUnknown101c26d0.h"
#include "Vector.h"

extern float g_104454c4;
extern float g_1070d1b0[];
extern float g_1070d9d0[];

static inline const Vector &DoorAbsVelocity(CBaseEntity *p)
{
	if (TestBit(p->m_flags268, 12))
		p->sub_100b1d10();
	return p->m_vecVelocity3bc;
}

void CBaseDoor::sub_100f14a0(CBaseEntity *pOther)
{
	ScopeTrace trace("CBaseDoor::Blocked", g_106b8540);

	if (!pOther)
		return;
	if (m_flDamage560 != g_104454c4) {
		CUnknown101c26d0 info;
		pOther->sub_100a1250(info.sub_101c26d0(this, this, m_flDamage560, 1, 0, 0, -1));
	}

	if (m_fl500 >= g_104454c4 && ((char *)this)[0x654] && m_nState4f8 != 2)
		vfunc243(1, 1);

	if (m_name26c) {
		CBaseDoor *pDoors[0x40];
		int nDoors; nDoors = sub_100f12a0(pDoors, 0x40);
		{ long i; i = 0; while (i < nDoors) { CBaseDoor *pDoor = pDoors[i];
			if (pDoor->m_fl500 >= g_104454c4) {
				if (*(Vector *)pDoor->m_vecMovedir == *(Vector *)m_vecMovedir
				    && DoorAbsVelocity(pDoor) == DoorAbsVelocity(this)
				    && *(Vector *)pDoor->m_angVel3c8 == *(Vector *)m_angVel3c8) {
					pDoor->m_nSimulationTick = m_nSimulationTick;
					if (!((CEntityVSlots *)pDoor)->slot241()) {
						pDoor->vfunc62((const float *)pcd_stage(((CEntityVSlots *)this)->slot220()));
						pDoor->sub_100b2770(*(const Vector *)g_1070d1b0);
					} else {
						pDoor->vfunc64((const float *)pcd_stage(((CEntityVSlots *)this)->slot221()));
						pDoor->sub_100b2f50(g_1070d9d0);
					}
				}
				if (m_nState4f8 == 2 && pDoor->m_nState4f8 != 2)
					pDoor->vfunc243(1, 1);
				else if (m_nState4f8 == 3 && 3 != pDoor->m_nState4f8)
					pDoor->vfunc244(1);
			} ++i; } }
	}
}
// END FUNCTION

// FUNCTION: 0x100f1830 size=0x27
// TARGET: CBaseDoor::vfunc179
#include "CBaseDoor.h"

void CBaseDoor::vfunc179()
{
	if (m_nState4f8 == 3)
	{
		m_items564[2].sub_100cd660(this, this, 0);
		return;
	}
	m_items564[3].sub_100cd660(this, this, 0);
}
// END FUNCTION
