// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100f1870 size=0x6
#include "datamap.h"
#include "CRotDoor.h"
namespace lifted {
extern char g_10564ae4;
}
datamap_t * CRotDoor::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10564ae4);
}
// END FUNCTION

// FUNCTION: 0x100f1970 size=0x3
#include "CRotDoor.h"
bool CRotDoor::vfunc241()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100f1990 size=0xf
#include "CRotDoor.h"
int CRotDoor::vfunc249()
{
    *(int *)((char *)this + 0x708) = 0;
    *(int *)((char *)this + 0x70c) = 0;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100f1c60 size=0x443
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include <math.h>
#include "CRotDoor.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern float g_104454c4;

inline QAngle AxisAngles(const Vector &v) { return QAngle(v.y, v.z, v.x); }

// TARGET: CRotDoor::vfunc103
void CRotDoor::vfunc103()
{
	ScopeTrace spawnTrace("CRotDoor::Spawn", g_106b8540, g_106b8540);
	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	*(Vector *)&m_angRotationClosed = *pSlots->slot221();
	m_vecAxis.x = 0;
	m_vecAxis.y = 0;
	m_vecAxis.z = 1.0f;
	QAngle angAxis = AxisAngles(m_vecAxis);
	m_flDistance = fabs(90.0);
	m_angTarget674.x = m_angRotationClosed.x - m_flDistance * angAxis.x;
	m_angTarget674.y = m_angRotationClosed.y - m_flDistance * angAxis.y;
	m_angTarget674.z = m_angRotationClosed.z - m_flDistance * angAxis.z;
	m_angRotationOpenBack.x = m_flDistance * angAxis.x + m_angRotationClosed.x;
	m_angRotationOpenBack.y = m_flDistance * angAxis.y + m_angRotationClosed.y;
	m_angRotationOpenBack.z = m_flDistance * angAxis.z + m_angRotationClosed.z;
	sub_101c1a70();
	if (m_flags204 & 2)
		*(Vector *)m_vecMovedir = *(Vector *)m_vecMovedir * -1.0f;
	m_angRotation520 = *pSlots->slot221();
	m_angRotation52c = *(Vector *)m_vecMovedir * m_fl4fc + *pSlots->slot221();
	pSlots->slot93(8, 0);
	{
		int buf;
		const char *pszName = *pSlots->slot9(&buf);
		if (!pszName)
			pszName = g_106b8540;
		pSlots->slot105(pszName);
	}
	pSlots->slot104();
	if (m_flags204 & 1) {
		pSlots->slot64(&m_angRotation52c.x);
		m_angRotation52c = m_angRotation520;
		m_angRotation520 = *pSlots->slot221();
		*(Vector *)m_vecMovedir = *(Vector *)m_vecMovedir * -1.0f;
	}
	if (m_flags204 & 0x800)
		m_b55c = 1;
	if (m_flSpeed164 == g_104454c4) {
		m_nState4f8 = 1;
		m_flSpeed164 = 100.0f;
	} else {
		m_nState4f8 = 1;
	}
	if (m_flags204 & 0x800)
		m_b55c = 1;
	*(void (CRotDoor::**)(CBaseEntity *))((char *)this + 0x1ec) = &CRotDoor::sub_100efae0;
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540, g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(1);
	}
	if (m_flags204 & 8) {
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540, g_106b8540);
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)this + 0x270);
		pCol->sub_100dc580(pCol->m_usSolidFlags | 4);
	}
	pSlots->slot223();
	sub_100b3b00();
	sub_100a9470(1);
	m_flAngle704 = 0;
	pSlots->slot249();
}
// END FUNCTION

// FUNCTION: 0x100f21d0 size=0x81
#include "CBaseEntity.h"
#include "CRotDoor.h"
#include "CBaseDoor.h"

#define V1(p) virtual void p();
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

// the entity's vtable viewed as a flat list of slots (slot 64 takes a position)
struct CRotDoorSlots {
    V10(a0) V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V1(b0) V1(b1) V1(b2) V1(b3)
    virtual void vfunc64(float *pPos);
};

struct CRotDoorFields {
    char pad0000[0x204];
    int m_nFlags;	// 0x204
    char pad0208[0x3fc - 0x208];
    float m_f3fc;	// 0x3fc
    char pad0400[0x4f8 - 0x400];
    int m_nState;	// 0x4f8
    char pad04fc[0x520 - 0x4fc];
    float m_vecClosed[3];	// 0x520
    float m_vecOpen[3];	// 0x52c
};

void CRotDoor::vfunc250()
{
    CRotDoorFields *p = (CRotDoorFields *)this;
    if (p->m_nFlags & 0x20)
        return;
    if (p->m_nFlags & 1) {
        ((CRotDoorSlots *)this)->vfunc64(p->m_vecOpen);
        p->m_nState = 0;
    } else {
        ((CRotDoorSlots *)this)->vfunc64(p->m_vecClosed);
        p->m_nState = 1;
    }
    p->m_f3fc = -1.0f;
    m_pfnTouch = (void (CBaseEntity::*)(CBaseEntity *))&CRotDoor::sub_100efae0;
    switch (p->m_nState) {
    case 0:
        ((CBaseDoor *)this)->sub_100efbf0(1);
        break;
    case 1:
        ((CBaseDoor *)this)->sub_100efbf0(0);
        break;
    }
}
// END FUNCTION

// FUNCTION: 0x100f2290 size=0x151
#include "Vector.h"
#include "CRotDoor.h"

void CRotDoor::vfunc104()
{
	sub_100efab0();
	sub_100f19b0(m_angRotation52c, &m_vecMins698, &m_vecMaxs6a4);
	sub_100f19b0(-1.0f * m_angRotation52c, &m_vecMins6bc, &m_vecMaxs6c8);
	m_vecCenter6b0 = 0.5f * (m_vecMins698 + m_vecMaxs6a4);
	m_vecCenter6d4 = (m_vecMins6bc + m_vecMaxs6c8) * 0.5f;
	sub_100f3f20();
	sub_100eecf0();
}
// END FUNCTION

// FUNCTION: 0x100f2450 size=0x92
#include "CRotDoor.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

bool CRotDoor::vfunc223()
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseEntity::IsSolidFlagSet";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	unsigned char bit = (*((unsigned char *)this + 0x2b4) >> 2) & 1;
	(*g_109f3680)--;
	if (!bit)
		sub_100a6150(0, 0, 0);
	return true;
}
// END FUNCTION

// FUNCTION: 0x100f2520 size=0xdb
#include <math.h>
#include "CRotDoor.h"
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

// TARGET: CRotDoor::vfunc248
void CRotDoor::vfunc248()
{
    if (VectorsAreEqual(m_angRotation520, *((CEntityVSlots *)this)->slot221(), 0.001f)) {
        m_nState4f8 = 1;
        ((CEntityVSlots *)this)->slot249();
        return;
    }
    if (VectorsAreEqual(m_angRotation52c, *((CEntityVSlots *)this)->slot221(), 0.001f)) {
        m_nState4f8 = 0;
        ((CEntityVSlots *)this)->slot249();
    }
}
// END FUNCTION

// FUNCTION: 0x100f2640 size=0x43
#include "CRotDoor.h"
void CRotDoor::vfunc156(int bFirst)
{
	if (bFirst == 0)
		vfunc64(&m_angRotation52c.x);
	else
		vfunc64(&m_angRotation520.x);
	sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x100f26b0 size=0x297
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CRotDoor.h"
#include "CBaseDoor.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"
#include "CBaseCombatCharacter.h"
#include "inputdata_t.h"
#include <math.h>

class CUnknown1017f770
{
public:
	int sub_1017f770();
};

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
namespace block_100f26b0 {
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

// TARGET: ?vfunc242@CRotDoor@@UAEHXZ
int CRotDoor::vfunc242()
{
	ScopeTrace trace("CRotDoor::DoorActivate", g_106b8540);
	CBaseDoor *pDoor = (CBaseDoor *)this;
	SDoorActivator *pActivator = (SDoorActivator *)pDoor->m_hActivator53c.Get();
	CBaseCombatCharacter *pPlayer;
	if (!pActivator)
		pPlayer = (CBaseCombatCharacter *)pActivator;
	else
	{
		pPlayer = pActivator->m_pPlayer;
		if (pPlayer && pDoor->m_bNoOpenWanted && ((CUnknown1017f770 *)pPlayer)->sub_1017f770() > 0)
			return 0;
	}
	const CDoorToggleView *pToggle = (const CDoorToggleView *)pDoor;
	if (pToggle->GetToggleState() == 2 || pToggle->GetToggleState() == 0)
		pDoor->vfunc244(1);
	else if (pToggle->GetToggleState() == 1 || pToggle->GetToggleState() == 3)
		pDoor->vfunc243(1, 1);
	inputdata_t input;
	input.value.iValue = 0;
	input.value.eVal = 0xffffffff;
	input.value.fieldType = 0;
	input.pCaller = this;
	input.pActivator = pDoor->m_hActivator53c.Get();
	if (((CBaseHandle *)&pDoor->m_hDoorknob0)->Get()) {
		((CKnobView *)((CBaseHandle *)&pDoor->m_hDoorknob0)->Get())->sub_10224170(&input);
		((CEntityVSlots *)EHandle_Get(pDoor->m_hDoorknob0))->slot273();
	}
	if (((CBaseHandle *)&pDoor->m_hDoorknob1)->Get()) {
		((CKnobView *)((CBaseHandle *)&pDoor->m_hDoorknob1)->Get())->sub_10224170(&input);
		((CEntityVSlots *)EHandle_Get(pDoor->m_hDoorknob1))->slot273();
	}
	if (pPlayer)
		pDoor->sub_100ee560(pPlayer->sub_101671a0());
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100f2a00 size=0x16f
#include "CRotDoor.h"
#include "CEntityVSlots.h"

__declspec(dllimport) void DevMsg(const char *pszFormat, ...);

struct SDoorBoundsView
{
	char m_pad0000[0x52c];
	Vector m_angRotation52c;	// 0x52c
	char m_pad0538[0x698 - 0x538];
	Vector m_vecA698;	// 0x698
	Vector m_vecB6a4;	// 0x6a4
	char m_pad06b0[0x6bc - 0x6b0];
	Vector m_vecA6bc;	// 0x6bc
	Vector m_vecB6c8;	// 0x6c8
};

struct CRotDoorUnit : CRotDoor
{
	void sub_100f2a00(Vector *pMins, Vector *pMaxs);	// "CRotDoor::ComputeCloseBounds"-like
	void sub_100f19b0(Vector vecAngles, Vector *pMins, Vector *pMaxs);	// stub 0x10011216
};

void CRotDoorUnit::sub_100f2a00(Vector *pMins, Vector *pMaxs)
{
	SDoorBoundsView *pView = (SDoorBoundsView *)this;
	CEntityVSlots *pThis = (CEntityVSlots *)this;
	if (*pThis->slot221() == pView->m_angRotation52c) {
		*pMins = pView->m_vecA698;
		*pMaxs = pView->m_vecB6a4;
		return;
	}
	Vector vecScaled = pView->m_angRotation52c * -1.0f;
	if (*pThis->slot221() == vecScaled) {
		*pMins = pView->m_vecA6bc;
		*pMaxs = pView->m_vecB6c8;
		return;
	}
	DevMsg("ComputeCloseBounds() called when not fully open from either direction. Is that OK?\n");
	sub_100f19b0(*pThis->slot221(), pMins, pMaxs);
}
// END FUNCTION

// FUNCTION: 0x100f2bd0 size=0x2f4
#include "CAI_Node.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "VectorHelpers.h"
#include "CRotDoor.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

struct RotDoorEntV
{
	EVS10(a) EVS10(b) EVS10(c) EVS10(d) EVS10(e) EVS10(f) EVS10(g) EVS10(h) EVS10(i) EVS10(j)
	EVS10(k) EVS10(l) EVS10(m) EVS10(n) EVS10(o) EVS10(p) EVS10(q) EVS10(r) EVS10(s) EVS10(t)
	EVS10(u)
	EVS(v0) EVS(v1) EVS(v2) EVS(v3) EVS(v4) EVS(v5) EVS(v6)
	virtual const Vector &GetAbsOrigin();
};

extern float g_104454c4;

void CRotDoor::vfunc246(CBaseEntity *pNPC, CNPCOpenData *pOut, char bFlag)
{
	ScopeTrace trace("CRotDoor::GetNPCOpenData", g_106b8540, g_106b8540);
	if (pNPC == 0 || (m_flags204 & 0xc0)) {
		pOut->m_nResult = -1;
		return;
	}
	Vector vecRight = sub_101d2f40(m_flAngle6f8);
	Vector vecDirA = sub_101d2f40(m_flAngle6fc);
	Vector vecDirB = sub_101d2f40(m_flAngle700);
	Vector vecDir;
	{
		Vector vecOrigin = ((RotDoorEntV *)this)->GetAbsOrigin();
		const Vector &vecDoor = ((RotDoorEntV *)this)->GetAbsOrigin();
		const Vector &vecNPC = ((RotDoorEntV *)pNPC)->GetAbsOrigin();
		float dx = vecNPC.x - vecDoor.x;
		float dy = vecNPC.y - vecDoor.y;
		if (vecDirA.x * dx + vecDirA.y * dy >= g_104454c4)
			vecDir = vecDirA;
		else if (vecDirB.x * dx + vecDirB.y * dy >= g_104454c4)
			vecDir = vecDirB;
		else {
			pOut->m_nResult = -1;
			return;
		}
		if (bFlag) {
			pOut->m_vecOrigin = vecOrigin + vecRight * 24.0f;
			pOut->m_vecOrigin.z -= 54.0f;
			pOut->m_vecOrigin += vecDir * 100.0f;
			pOut->m_vecAngles = -vecDir;
			pOut->m_nResult = 1;
			return;
		}
		pOut->m_vecOrigin = vecOrigin + vecRight * 24.0f;
		pOut->m_vecOrigin.z -= 54.0f;
		pOut->m_vecOrigin += vecDir * 50.0f;
	}
	{
		Vector vecFace;
		vecFace.sub_100f2f90(-vecDir.x, -vecDir.y, -vecDir.z);
		pOut->m_vecAngles = vecFace;
	}
	pOut->m_nResult = 0xc84;
}
// END FUNCTION

// FUNCTION: 0x100f2fc0 size=0x50
#include "CRotDoor.h"
#include "CEntityVSlots.h"

// TARGET: CRotDoor::vfunc247
float CRotDoor::vfunc247()
{
	Vector *pAngles = ((CEntityVSlots *)this)->slot221();
	Vector d;
	d = m_angTarget674 - *pAngles;
	return FastSqrt(d.x * d.x + (d.y * d.y + d.z * d.z)) / m_flSpeed164;
}
// END FUNCTION

// FUNCTION: 0x100f3030 size=0x2a2
#include "CBaseDoor.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "CRotDoor.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"

extern int g_106eb3e0;
extern int g_106eb3e8;

void CRotDoor::vfunc243(char bChain, char bOpenAway)
{
    ScopeTrace trace("CRotDoor::DoorGoUp", g_106b8540, g_106b8540);
    if (bChain) {
        CGlobalEntityList *pGlobal = g_10566458;
        EHandleEntityList *pList = (EHandleEntityList *)pGlobal;
        if (pGlobal->sub_100290c0((const unsigned int *)&m_hLinked630)) {
            CBaseEntity *pOldActivator = (CBaseEntity *)pList->LookupEntity(((CRotDoor *)pList->LookupEntity(m_hLinked630))->m_hActivator53c);
            ((CRotDoor *)pList->LookupEntity(m_hLinked630))->m_hActivator53c = m_hActivator53c;
            m_hLinked630.Get()->vfunc243(0, 1);
            m_hLinked630.Get()->m_hActivator53c = pOldActivator;
        }
    }
    sub_100ee4e0(g_106eb3e0, 0);
    sub_100ee4e0(g_106eb3e8, 0);
    ((CBaseDoor *)this)->sub_100ee810();
    ((CBaseDoor *)this)->sub_100efbf0(1);
    m_nState4f8 = 2;
    m_pfn0114 = (void (CBaseEntity::*)())&CRotDoor::sub_100f0860;
    if (m_hActivator53c.Get() && !(m_flags204 & 0x10)) {
        if (bOpenAway)
            sub_100f3390(m_hActivator53c.Get());
    } else {
        sub_101c17e0(&m_angRotation52c, m_flSpeed164);
    }
    m_items564[7].sub_100cd660(m_hActivator53c.Get(), this, 0);
}
// END FUNCTION

// FUNCTION: 0x100f35a0 size=0x22d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CRotDoor.h"
#include "ScopeTrace.h"

extern int g_106eb3e8;

// TARGET: CRotDoor::vfunc244
void CRotDoor::vfunc244(char bChain)
{
	ScopeTrace trace("CRotDoor::DoorGoDown", g_106b8540);
	if (bChain) {
		if (m_hLinked630 != 0) {
			CBaseEntity *pOldActivator = m_hLinked630->m_hActivator53c.Get();
			m_hLinked630->m_hActivator53c = m_hActivator53c;
			m_hLinked630->vfunc244(0);
			m_hLinked630->m_hActivator53c = pOldActivator;
		}
	}
	sub_100ee4e0(g_106eb3e8, 0);
	m_nState4f8 = 3;
	m_pfn0114 = (void (CBaseEntity::*)())&CRotDoor::sub_100f11b0;
	sub_101c17e0(&m_angRotation520, m_flSpeed164);
	m_items564[6].sub_100cd660(m_hActivator53c.Get(), this, 0);
}
// END FUNCTION

// FUNCTION: 0x100f3900 size=0x387
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include <math.h>
#include "CRotDoor.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
float sub_1013d580(float a, float b);

inline float AngDist(float a, float b)
{
	float d = (float)fabs(sub_1013d580(a, b));
	return d;
}

inline float AngDiff(float a, float b)
{
	float d = sub_1013d580(a, b);
	return (float)fabs(d);
}

void CRotDoor::vfunc178(CBaseEntity *pOther)
{
	ScopeTrace trace("CRotDoor::Blocked", g_106b8540, g_106b8540);
	if (pOther) {
		m_bBlocked654 = true;
		if (pOther->m_pNPC98)
			m_bReverse655 = true;
		float flAngle = sub_100f3d80() + m_flAngle6f8;
		Vector *pMine = ((CEntityVSlots *)this)->slot217();
		Vector *pTheirs = ((CEntityVSlots *)pOther)->slot217();
		Vector dir = *pTheirs - *pMine;
		float flDirAngle = sub_10004ea8(&dir.x);
		bool bFirstCloser = false;
		float flDiff1 = AngDist(flAngle, m_flAngle6fc);
		if (AngDist(flAngle, m_flAngle700) > flDiff1)
			bFirstCloser = true;
		if (m_nCount708 > 0) {
			if (AngDist(flAngle, m_flAngle704) <= 1.0f) {
				m_nCount708++;
				if (m_nCount708 >= 15) {
					vfunc249();
					if (m_nState4f8 == 2)
						m_nState70c = 3;
					else
						m_nState70c = 2;
				}
			} else {
				vfunc249();
			}
		} else {
			m_nCount708 = 1;
		}
		m_flAngle704 = flAngle;
		if (m_nState4f8 == 2) {
			m_bBlocked654 = false;
			if (m_nState70c == 3) {
				vfunc244(1);
			} else if (m_nState70c != 2) {
				float flPick = bFirstCloser ? m_flAngle6fc : m_flAngle700;
				float d2 = AngDiff(flDirAngle, flPick);
				if (AngDiff(flAngle, flPick) > d2)
					vfunc244(1);
			}
		} else if (m_nState4f8 == 3) {
			m_bBlocked654 = false;
			if (m_nState70c == 2) {
				vfunc243(1, 1);
			} else if (m_nState70c != 3) {
				float d1 = AngDist(flDirAngle, m_flAngle6f8);
				if (AngDist(flAngle, m_flAngle6f8) > d1 && m_nState4f8 != 2) {
					if (!bFirstCloser) {
						Vector neg = m_angRotation52c * -1.0f;
						sub_101c17e0(&neg, m_flSpeed164);
					} else {
						sub_101c17e0(&m_angRotation52c, m_flSpeed164);
					}
					vfunc243(1, 0);
				}
			}
		}
		sub_100f14a0(pOther);
		m_bBlocked654 = true;
	}
}
// END FUNCTION

// FUNCTION: 0x100f4080 size=0x8e
#include "CRotDoor.h"

void __cdecl sub_100aa7b0(void *p);

CRotDoor *CRotDoor::vfunc5(unsigned char flags)
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
