// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c9910 size=0x8
#include "CBaseEntity.h"
#include "CAI_ChangeTarget.h"
// TARGET: CAI_ChangeTarget::vfunc117
char CAI_ChangeTarget::vfunc117() { char c = ((CBaseEntity *)this)->CBaseEntity::vfunc117(); return c & (char)0xfd; }
// END FUNCTION

// FUNCTION: 0x101c9930 size=0x6
#include "datamap.h"
#include "CAI_ChangeTarget.h"
namespace lifted {
extern char g_1059e044;
}
datamap_t *CAI_ChangeTarget::vfunc82()
{
    return (datamap_t *)&lifted::g_1059e044;
}
// END FUNCTION

// FUNCTION: 0x101cc0e0 size=0x1e
#include "CAI_ChangeTarget.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_ChangeTarget::vfunc5
CAI_ChangeTarget *CAI_ChangeTarget::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
