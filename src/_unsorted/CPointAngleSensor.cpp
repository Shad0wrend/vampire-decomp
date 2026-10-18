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
