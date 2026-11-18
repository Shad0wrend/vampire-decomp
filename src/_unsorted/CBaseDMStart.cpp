// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c0970 size=0x6
#include "datamap.h"
#include "CBaseDMStart.h"
namespace lifted {
extern char g_1059b680;
}
datamap_t *CBaseDMStart::vfunc82()
{
    return (datamap_t *)&lifted::g_1059b680;
}
// END FUNCTION

// FUNCTION: 0x101c0ae0 size=0x17
#include "CBaseDMStart.h"

int sub_101cf930(int a, int b);

// TARGET: CBaseDMStart::vfunc147
int CBaseDMStart::vfunc147(int a)
{
	return sub_101cf930(m_field450, a);
}
// END FUNCTION

// FUNCTION: 0x101c2060 size=0x1e
#include "CBaseDMStart.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseDMStart::vfunc5
CBaseEntity *CBaseDMStart::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
