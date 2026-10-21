// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10114a20 size=0x14
#include "CFunc_LOD.h"

CFunc_LOD::CFunc_LOD() : CConstraintAnchorBase(0)
{
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
