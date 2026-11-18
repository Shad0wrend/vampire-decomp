// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10367f60 size=0x6
#include "datamap.h"
#include "CNPC_VCamera.h"
namespace lifted {
extern char g_1062f650;
}
datamap_t *CNPC_VCamera::vfunc82()
{
    return (datamap_t *)&lifted::g_1062f650;
}
// END FUNCTION

// FUNCTION: 0x103680b0 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc488()
{
}
// END FUNCTION

// FUNCTION: 0x103680d0 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc489()
{
}
// END FUNCTION

// FUNCTION: 0x103680f0 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc490()
{
}
// END FUNCTION

// FUNCTION: 0x10368110 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc491()
{
}
// END FUNCTION

// FUNCTION: 0x10368130 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc492()
{
}
// END FUNCTION

// FUNCTION: 0x10368150 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc493()
{
}
// END FUNCTION

// FUNCTION: 0x10368170 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc494()
{
}
// END FUNCTION

// FUNCTION: 0x10368190 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc495()
{
}
// END FUNCTION

// FUNCTION: 0x103681b0 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc496()
{
}
// END FUNCTION

// FUNCTION: 0x103681d0 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc497()
{
}
// END FUNCTION

// FUNCTION: 0x103681f0 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc498()
{
}
// END FUNCTION

// FUNCTION: 0x10368210 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc499()
{
}
// END FUNCTION

// FUNCTION: 0x10368230 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc500()
{
}
// END FUNCTION

// FUNCTION: 0x10368250 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc501()
{
}
// END FUNCTION

// FUNCTION: 0x10368270 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc502()
{
}
// END FUNCTION

// FUNCTION: 0x10368290 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc503()
{
}
// END FUNCTION

// FUNCTION: 0x103682b0 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc504()
{
}
// END FUNCTION

// FUNCTION: 0x103682d0 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc505()
{
}
// END FUNCTION

// FUNCTION: 0x103682f0 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc506()
{
}
// END FUNCTION

// FUNCTION: 0x10368310 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc507()
{
}
// END FUNCTION

// FUNCTION: 0x10368330 size=0x3
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc508(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10368350 size=0x3
#include "CNPC_VCamera.h"
bool CNPC_VCamera::vfunc509()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10368370 size=0x3
#include "CNPC_VCamera.h"
bool CNPC_VCamera::vfunc510()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10368390 size=0x5
#include "CNPC_VCamera.h"
bool CNPC_VCamera::vfunc72(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103683b0 size=0x6
#include "CNPC_VCamera.h"
namespace lifted {
extern char g_1093a7d8;
}
int CNPC_VCamera::vfunc580()
{
    return (int)&lifted::g_1093a7d8;
}
// END FUNCTION

// FUNCTION: 0x103683d0 size=0x6
#include "CNPC_VCamera.h"
namespace lifted {
extern int g_1062f670;
}
int CNPC_VCamera::vfunc451()
{
    return lifted::g_1062f670;
}
// END FUNCTION

// FUNCTION: 0x103683f0 size=0x1e
#include "CNPC_VCamera.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VCamera::vfunc5
CNPC_VCamera *CNPC_VCamera::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103684f0 size=0x6
// TARGET: sub_103684f0
extern unsigned char g_1062f668;
unsigned char __cdecl sub_103684f0(void) { return g_1062f668; }
// END FUNCTION

// FUNCTION: 0x10368550 size=0x1d
#include "CNPC_VCamera.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a7bc;
extern B g_10936c74;
int CNPC_VCamera::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a7bc.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103689c0 size=0x14a
#include "CNPC_VCamera.h"
extern char g_106b8540[];
inline const char *STRINGV(const char *s) { return s ? s : g_106b8540; }
struct CS { const char *p; CS(const char *s) { p = *s ? s : 0; } };
struct SV { const char *pszValue; bool operator!() const { return pszValue == 0; } const char *ToCStr() const { return pszValue ? pszValue : g_106b8540; } };

#define PV1(n) virtual void v##n();
#define PV10(p) PV1(p##0) PV1(p##1) PV1(p##2) PV1(p##3) PV1(p##4) PV1(p##5) PV1(p##6) PV1(p##7) PV1(p##8) PV1(p##9)

struct CCamSlots
{
	PV1(0) PV1(1) PV1(2) PV1(3) PV1(4) PV1(5) PV1(6) PV1(7) PV1(8)
	virtual SV *GetModelName(int *pOut);
	virtual void SetModelIndex(int nModelIndex);
	PV1(11) PV1(12) PV1(13) PV1(14) PV1(15) PV1(16) PV1(17) PV1(18) PV1(19)
	PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV10(10) PV10(11) PV10(12) PV10(13) PV10(14) PV10(15) PV10(16) PV10(17) PV10(18) PV10(19)
	PV10(20)
	PV1(210) PV1(211)
	virtual void SetModel(CS s);
	PV1(213) PV1(214) PV1(215) PV1(216) PV1(217) PV1(218) PV1(219)
	PV10(22) PV10(23) PV10(24) PV10(25) PV10(26) PV10(27) PV10(28) PV10(29)
	PV10(30) PV10(31) PV10(32)
	PV1(330) PV1(331) PV1(332) PV1(333) PV1(334) PV1(335) PV1(336)
	virtual int GetHullBits();
	PV1(338) PV1(339)
	PV10(34) PV10(35) PV10(36) PV10(37) PV10(38) PV10(39) PV10(40) PV10(41) PV10(42) PV10(43) PV10(44)
	PV1(450) PV1(451)
	virtual char LoadedSchedules();
};

extern "C" __declspec(dllimport) void Msg(const char *pszFormat, ...);
__declspec(dllimport) void DevMsg(const char *pszFormat, ...);
void sub_101cd940(CNPC_VCamera *pEnt);
char sub_102f9970();
int sub_102f9950();
void sub_102f9920(int nHullBits);
const char *sub_102d6230(int nHull);

static inline const char *MakeString(const char *psz)
{
	return psz[0] ? psz : 0;
}

void CNPC_VCamera::vfunc104()
{
	CCamSlots *pSlots = (CCamSlots *)this;
	int n;
	if (!*pSlots->GetModelName(&n) || !pSlots->GetModelName(&n)->ToCStr() || !pSlots->GetModelName(&n)->ToCStr()[0])
		pSlots->SetModel(CS("models/null.mdl"));
	pSlots->SetModelIndex(engine->vfunc13(pSlots->GetModelName(&n)->ToCStr(), 0));
	if (!pSlots->LoadedSchedules())
	{
		Msg("ERROR: Rejecting spawn of %s as error in NPC's schedules.\n", sub_1000b5cd());
		sub_101cd940(this);
		return;
	}
	m_n62dc = 0;
	if (sub_102f9970())
	{
		int nBits = pSlots->GetHullBits();
		nBits &= sub_102f9950();
		if (nBits != pSlots->GetHullBits())
		{
			DevMsg("\n****ERROR***\n");
			DevMsg("%s is being spawned after links have been initialized, but its hull %s\n", sub_1000b5cd(), sub_102d6230(m_n1568));
			DevMsg("Has not been initialized.  Be sure that this class's GetUsedHullBits function includes that hull type.\n");
			DevMsg("If it already is, this entity is probably spawned after the node graph is created.\n");
			DevMsg("Have the class responsible for spawning it include it.\n");
			DevMsg("****ERROR***\n\n");
			return;
		}
	}
	else
		sub_102f9920(pSlots->GetHullBits());
}
// END FUNCTION

// FUNCTION: 0x10368b70 size=0x24d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VCamera.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
extern void (*g_109f3650)(int level, const char *fmt, ...);
void sub_101cf600(CNPC_VCamera *p);

void CNPC_VCamera::vfunc103()
{
	sub_1026dc00(0x4000000);
	vfunc104_slot();
	int n;
	const char *name = *vfunc9(&n);
	const char *empty = g_106b8540;
	if (!name)
		name = empty;
	vfunc105(name);
	m_n1570 = 0xf7;
	m_n19c = 0;
	m_n210 = 1;
	m_fl1574 = 0.2f;
	m_n5cc0 = 0;
	m_v1578.Init(0, 0, 0);
	m_n63d0 = 0;
	m_n62ec = 0;
	{
		ScopeTrace t("CBaseEntity::SetSolidFlags", m_iName26c ? m_iName26c : empty, empty);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc580(0);
	}
	{
		ScopeTrace t("CBaseEntity::SetSolid", m_iName26c ? m_iName26c : empty, empty);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	vfunc93(4, 0);
	sub_10273070(0);
	sub_101cf600(this);
	vfunc420();
	sub_1028fb70();
	sub_1033df80();
	void (*dm)(int, const char *, ...) = g_109f3650;
	m_ne64 = (CBaseEntity *)0;
	m_n5b94 = 0;
	if (m_iPLInvestigateLevel < 1) { dm(1, "Warning: Invalid m_iPLInvestigateLevel ('pl_investigate' in world craft)\n"); m_iPLInvestigateLevel = 6; }
	if (m_iPLCriminalFleeLevel < 1) { dm(1, "Warning: Invalid m_iPLCriminalFleeLevel ('pl_criminal_flee' in world craft)\n"); m_iPLCriminalFleeLevel = 6; }
	if (m_iPLCriminalAttackLevel < 1) { dm(1, "Warning: Invalid m_iPLCriminalAttackLevel ('pl_criminal_attack' in world craft)\n"); m_iPLCriminalAttackLevel = 6; }
	if (m_iPLSupernaturalFleeLevel < 1) { dm(1, "Warning: Invalid m_iPLSupernaturalFleeLevel ('pl_supernatural_flee' in world craft)\n"); m_iPLSupernaturalFleeLevel = 6; }
	if (m_iPLSupernaturalAttackLevel < 1) { dm(1, "Warning: Invalid m_iPLSupernaturalAttackLevel ('pl_supernatural_attack' in world craft)\n"); m_iPLSupernaturalAttackLevel = 6; }
	vfunc66();
	sub_100b3840(0x10);
}
// END FUNCTION

// FUNCTION: 0x10368e60 size=0x3
#include "CNPC_VCamera.h"
int CNPC_VCamera::vfunc138()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10368e80 size=0x6
#include "CNPC_VCamera.h"
int CNPC_VCamera::vfunc337()
{
    return 0x80;
}
// END FUNCTION

// FUNCTION: 0x10368ea0 size=0x3
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc463(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x10368ec0 size=0x3
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc259(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10368ee0 size=0x3
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc563(int a0, int a1, int a2, int a3)
{
}
// END FUNCTION

// FUNCTION: 0x10368f00 size=0x3
#include "CNPC_VCamera.h"
bool CNPC_VCamera::vfunc564()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10368f20 size=0x10
#include "CNPC_VCamera.h"
int CNPC_VCamera::sub_10368f20()
{
	m_n1b2c = 9;
	return 0x156;
}
// END FUNCTION

// FUNCTION: 0x10368f40 size=0x10
#include "CNPC_VCamera.h"
int CNPC_VCamera::vfunc438()
{
	m_n1b2c = 9;
	return 0x156;
}
// END FUNCTION

// FUNCTION: 0x10368f60 size=0x5
#include "CNPC_VCamera.h"
int CNPC_VCamera::vfunc482(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103690a0 size=0x7
#include "CNPC_VCamera.h"
int CNPC_VCamera::vfunc375(int a0)
{
    return a0;
}
// END FUNCTION

// FUNCTION: 0x103690c0 size=0x7
#include "CNPC_VCamera.h"
int CNPC_VCamera::vfunc376(int a0)
{
    return a0;
}
// END FUNCTION

// FUNCTION: 0x103690e0 size=0xd
struct CAI_BaseNPCTroikaFwd;
struct CNPC_VCameraFwd {
    void sub_103690e0(int a);
};
struct CAI_BaseNPCTroikaFwd {
    void sub_1028fcc0(int a);
};

// TARGET: sub_103690e0
void CNPC_VCameraFwd::sub_103690e0(int a)
{
    a = *(volatile int *)&a;
    ((CAI_BaseNPCTroikaFwd *)this)->sub_1028fcc0(a);
}
// END FUNCTION

// FUNCTION: 0x10369100 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc434()
{
}
// END FUNCTION

// FUNCTION: 0x10369120 size=0xd2
#include "CNPC_VCamera.h"
#include "CEntityVSlots.h"

extern char g_1093408c;

struct CameraSlots432
{
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS10(21) EVS10(22) EVS10(23) EVS10(24) EVS10(25) EVS10(26) EVS10(27) EVS10(28) EVS10(29)
	EVS10(30) EVS10(31) EVS10(32) EVS10(33) EVS10(34) EVS10(35) EVS10(36) EVS10(37) EVS10(38) EVS10(39)
	EVS10(40) EVS10(41) EVS10(42)
	EVS(430) EVS(431)
	virtual void slot432(int a);
};

// TARGET: CNPC_VCamera::vfunc431
void CNPC_VCamera::vfunc431()
{
	if (m_b5b55) {
		m_b5b55 = 0;
		sub_1027efb0();
	}
	if (!sub_1029f2e0()) {
		sub_1026a0f0();
		if (!sub_1026c3d0()) {
			if (!g_1093408c)
				m_flNextThink = gpGlobals->curtime + 0.1f;
		} else {
			((CameraSlots432 *)this)->slot432(0);
			m_flPrev6254[0] = m_flCur6244[0];
			m_flPrev6254[1] = m_flCur6244[1];
			m_flPrev6254[2] = m_flCur6244[2];
			m_flPrev6254[3] = m_flCur6244[3];
			m_flCur6244[0] = m_flNextThink = gpGlobals->curtime + 0.2;
			m_flCur6244[1] = m_flNextThink;
			m_flCur6244[2] = m_flNextThink;
			m_flCur6244[3] = m_flNextThink;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10369240 size=0x5
#include "CNPC_VCamera.h"
int CNPC_VCamera::vfunc390(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10369260 size=0x5
#include "CNPC_VCamera.h"
bool CNPC_VCamera::vfunc366(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10369280 size=0x5
#include "CNPC_VCamera.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VCamera::vfunc144
// the game's 0x10369280: a tail call (jmp) of CAI_BaseNPCTroika::vfunc144
void CNPC_VCamera::vfunc144(int a0)
{
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc144(a0);
}
// END FUNCTION

// FUNCTION: 0x103692a0 size=0x3
#include "CNPC_VCamera.h"
int CNPC_VCamera::vfunc473()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10369930 size=0x208
#include "CNPC_VCamera.h"
#include "CGlobalEntityList.h"
#include "engineiface.h"
#include "globalvars.h"
#include "Vector.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern char g_106b8540[];
extern CGlobalEntityList g_106eb5d8;
__declspec(dllimport) void Warning(const char *fmt, ...);
void sub_1027fc40();

struct CVCameraMotor
{
	char sub_102e7880(Vector *pPos, unsigned int mask, void *pPass, float flDist, Vector *pOut, int f);
};

static inline bool CamBit(unsigned int v, int bit)
{
	return ((v >> bit) & 1) != 0;
}

void CNPC_VCamera::vfunc422()
{
	int nTmp;
	const char *pszModel = *vfunc9(&nTmp);
	if (!pszModel)
		pszModel = g_106b8540;
	if (!_strcmpi(pszModel, "models/null.mdl")) {
		if (vfunc94() == 5 || vfunc94() == 6 || (vfunc513() & 4) || CamBit(m_flags204, 2)) {
			sub_100b3640(1);
		} else {
			Vector vec = *(Vector *)vfunc220();
			CVCameraMotor *pMotor = (CVCameraMotor *)m_pMotor5d40;
			if (!pMotor->sub_102e7880(&vec, 0x202400b, 0, -256.0f, &vec, 0))
				Warning("NPC %s stuck in wall--level design error\n", sub_1000ea11());
			vfunc62(&vec.x);
		}
	}
	if (m_target20c) {
		m_pTarget5de8 = g_106eb5d8.sub_100f7770(0, m_target20c, 0, 0);
		if (!m_pTarget5de8) {
			Warning("ReadyNPC()--%s couldn't find target %s", sub_1000ea11(), m_target20c ? m_target20c : g_106b8540);
		} else {
			sub_1026e340(1);
			sub_10280de0(3);
		}
	}
	vfunc545_slot();
	if (gpGlobals->curtime > 1.0) {
		sub_100ac4e0((int)sub_1027fc40, 0, 0);
		m_flNextThink = gpGlobals->curtime;
	} else {
		sub_100ac4e0((int)sub_1027fc40, 0, 0);
		m_flNextThink = enginerandom->vfunc1(0.1f, 0.4f) + gpGlobals->curtime;
	}
	m_n5d7c = -1;
	m_n5d80 = 0;
	if (CamBit(m_flags204, 7)) {
		sub_1026e340(1);
		vfunc310(1);
		sub_10280de0(0x2d);
	}
	sub_100ac4e0((int)sub_1027fc40, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x10369bd0 size=0xa5
#include "CBaseEntity.h"
#include "CNPC_VCamera.h"
class CBaseEntity;
#include "CUnknown103158f0.h"
extern void (*g_109f3650)(int level, const char *fmt, ...);
int __fastcall sub_1009f200(void *p);
void *sub_10008ee5(void *h);
void *sub_10015bc7(void *e, void *h);

typedef unsigned int (__fastcall *FlagsFn)(void *);
typedef void (__fastcall *VoidFn)(void *);

// TARGET: CNPC_VCamera::vfunc545
int CNPC_VCamera::vfunc545()
{
    if (m_p5da4 == 0) {
        unsigned int f = ((FlagsFn)(*(void ***)this)[0x804 / 4])(this);
        if (f & 0x4000000) {
            if (*(void * volatile *)&m_p5da8 == 0) {
                g_109f3650(2, "WARNING: Found %s that isn't in a squad\n", sub_1009f200(this));
                return m_p5da4 != 0;
            }
            m_p5da4 = sub_10008ee5(m_p5da8);
            if (m_p5da4 == 0) {
                m_p5da4 = sub_10015bc7(this, m_p5da8);
                if (m_p5da4 != 0)
                    ((CUnknown103158f0 *)m_p5da4)->sub_103158f0((CBaseEntity *)this);
            }
            ((VoidFn)(*(void ***)this)[0x878 / 4])(this);
        }
    }
    return m_p5da4 != 0;
}
// END FUNCTION
