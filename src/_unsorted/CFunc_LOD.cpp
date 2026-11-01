// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10114720 size=0x6
#include "CFunc_LOD.h"
namespace lifted {
extern char g_1070a7d4;
}
int CFunc_LOD::vfunc80()
{
    return (int)&lifted::g_1070a7d4;
}
// END FUNCTION

// FUNCTION: 0x10114740 size=0x3
#include "CFunc_LOD.h"
int CFunc_LOD::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10114990 size=0x6
#include "CFunc_LOD.h"
namespace lifted {
extern char g_105702e8;
}
CFunc_LOD::Datamap82 CFunc_LOD::vfunc82()
{
    return (CFunc_LOD::Datamap82)&lifted::g_105702e8;
}
// END FUNCTION

// FUNCTION: 0x10114a20 size=0x14
#include "CFunc_LOD.h"

CFunc_LOD::CFunc_LOD() : CConstraintAnchorBase(0)
{
}
// END FUNCTION

// FUNCTION: 0x10114a50 size=0x8
#include "CFunc_LOD.h"
// TARGET: CFunc_LOD::sub_10114a50
unsigned char CFunc_LOD::sub_10114a50()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x10114ac0 size=0xb4
#include "CFunc_LOD.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CFuncLODSlotsX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV100(1)
	PV10(20) PV10(21)
	PV(220) PV(221) PV(222)
	virtual void vfunc223();
};

// TARGET: CFunc_LOD::vfunc103
void CFunc_LOD::vfunc103()
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	int local;
	const char *model = *pEnt->vfunc9(&local);
	pEnt->vfunc105(model ? model : g_106b8540);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", pEnt->m_name26c ? pEnt->m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(1);
	}
	pEnt->sub_100b3b00();
	pEnt->CBaseEntity::vfunc103();
	((CFuncLODSlotsX *)this)->vfunc223();
}
// END FUNCTION

// FUNCTION: 0x10114bb0 size=0x8
#include "CFunc_LOD.h"
namespace lifted {
int sub_10007284();
}
bool CFunc_LOD::vfunc223()
{
    lifted::sub_10007284();
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10114bf0 size=0xcd
#include "CFunc_LOD.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl atoi(const char *);

// TARGET: CFunc_LOD::vfunc110
bool CFunc_LOD::vfunc110(const char *key, const char *value)
{
	if (!_strcmpi(key, "Solid")) {
		if (atoi(value)) {
			CBaseEntity *pEnt = (CBaseEntity *)this;
			ScopeTrace trace("CBaseEntity::AddSolidFlags", pEnt ? (pEnt->m_name26c ? pEnt->m_name26c : g_106b8540) : g_105387dc);
			CCollisionProperty *pCol = (CCollisionProperty *)((char *)pEnt + 0x270);
			pCol->sub_100dc580(pCol->m_usSolidFlags | 4);
		}
		return true;
	}
	return ((CBaseEntity *)this)->CBaseEntity::vfunc110(key, value);
}
// END FUNCTION
