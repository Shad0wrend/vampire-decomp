// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1018d2f0 size=0x35
#include "CPointAngleSensor.h"

void sub_1009d940(void *p, int n);
void sub_1009d960(void *p, int n);

int CPointAngleSensor::vfunc126(int a)
{
	void *member = (char *)this + 0x464;
	sub_1009d940(member, 3);
	int r = CBaseEntity::vfunc126(a);
	sub_1009d960(member, 3);
	return r;
}
// END FUNCTION

// FUNCTION: 0x1018d340 size=0x28
#include "CPointAngleSensor.h"
void __cdecl sub_10015311(void *p, int mode);
int CPointAngleSensor::vfunc127(int a)
{
	int r = CBaseEntity::vfunc127(a);
	sub_10015311((char *)this + 0x464, 3);
	return r;
}
// END FUNCTION

// FUNCTION: 0x1018d380 size=0x36
#include "CPointAngleSensor.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CPointAngleSensor *CPointAngleSensor::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x484))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
