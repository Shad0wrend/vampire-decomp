// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101359c0 size=0x6
#include "datamap.h"
#include "CLogicSquadCondition.h"
namespace lifted {
extern char g_105775b0;
}
datamap_t *CLogicSquadCondition::vfunc82()
{
    return (datamap_t *)&lifted::g_105775b0;
}
// END FUNCTION

// FUNCTION: 0x10135b00 size=0x98
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CLogicSquadCondition.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

int sub_102c8cc0(const char *pszName);
char *sub_101d3730(const char *pszFormat, ...);
void sub_10143d80(const Vector &origin, float flSize, int r, int g, int b, int noDepthTest, float flDuration);
void sub_10143710(const Vector &origin, const char *pszText, int bViewCheck, float flDuration);

// TARGET: CLogicSquadCondition::vfunc113
void CLogicSquadCondition::vfunc113()
{
    sub_10135bd0();
    m_nCondition = sub_102c8cc0(m_name450 ? m_name450 : g_106b8540);
    if (m_nCondition <= 0) {
        char *pszText = sub_101d3730("%s has invalid condition %s!\n", sub_1000b5cd(), m_name450 ? m_name450 : g_106b8540);
        sub_10143d80(*((CEntityVSlots *)this)->slot220(), 10.0f, 200, 50, 50, 0, 9999.0f);
        sub_10143710(*((CEntityVSlots *)this)->slot220(), pszText, 0, 9999.0f);
    }
}
// END FUNCTION

// FUNCTION: 0x10136210 size=0x36
#include "CLogicSquadCondition.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseEntity *CLogicSquadCondition::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x470))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x458))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
