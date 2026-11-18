// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101928a0 size=0x8
#include "CPropMover.h"
namespace lifted {
int sub_10006703();
}
int CPropMover::vfunc117()
{
    return (lifted::sub_10006703()) | 8;
}
// END FUNCTION

// FUNCTION: 0x101928c0 size=0x1e
#include "CPropMover.h"

void sub_100aa7b0(void *p);

// TARGET: CPropMover::vfunc5
CBaseEntity *CPropMover::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101928f0 size=0x10
#include "CPropMover.h"

void __fastcall sub_10011793(void *pThis);
void __fastcall sub_101c1cb0(void *pThis);

// TARGET: CPropMover::vfunc103
void CPropMover::vfunc103()
{
	sub_10011793(this);
	sub_101c1cb0(this);
}
// END FUNCTION

// FUNCTION: 0x10192910 size=0x14
#include "CPropMover.h"

class CBaseToggleFwd : public CBaseEntity
{
public:
	void sub_101c1dc0(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value);
};

void CPropMover::vfunc113()
{
	CBaseEntity::vfunc113();
	m_pfnUse = (void (CBaseEntity::*)(CBaseEntity *, CBaseEntity *, int, float))&CBaseToggleFwd::sub_101c1dc0;
}
// END FUNCTION
