// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10107f80 size=0x58
#include "CFilterMass.h"
#include "CBaseEntity.h"

struct MassObj
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual float GetMass();
};

__declspec(dllimport) void DevWarning(const char *fmt, ...);

// TARGET: CFilterMass::vfunc241
bool CFilterMass::vfunc241(CBaseEntity *pEntity)
{
	MassObj *pObj = (MassObj *)pEntity->m_obj36c;
	if (!pObj) {
		DevWarning("%s cannot test mass of %s, it is not a physics object\n", sub_100ab4f0(), pEntity->sub_100ab4f0());
		return false;
	}
	return pObj->GetMass() > m_flMass;
}
// END FUNCTION

// FUNCTION: 0x10108000 size=0x6
#include "datamap.h"
#include "CFilterMass.h"
namespace lifted {
extern char g_1056c510;
}
datamap_t *CFilterMass::vfunc82()
{
    return (datamap_t *)&lifted::g_1056c510;
}
// END FUNCTION

// FUNCTION: 0x10108670 size=0x36
#include "CFilterMass.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseEntity *CFilterMass::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x454))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
