// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10373570 size=0x1e
#include "CNPC_VDog.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VDog::vfunc5
CNPC_VDog *CNPC_VDog::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103736d0 size=0x1d
#include "CNPC_VDog.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093ad64;
extern B g_10936c74;
int CNPC_VDog::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093ad64.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103747e0 size=0xa4
#include "CNPC_VDog.h"

extern "C" __declspec(dllimport) int RandomInt(int minVal, int maxVal);

#define SL_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL_V100(p) SL_V10(p##0) SL_V10(p##1) SL_V10(p##2) SL_V10(p##3) SL_V10(p##4) SL_V10(p##5) SL_V10(p##6) SL_V10(p##7) SL_V10(p##8) SL_V10(p##9)

// the vtable of the NPC up to slot 309, then slot 310
struct CNpcSlots
{
	SL_V100(a0) SL_V100(a1) SL_V100(a2)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
	virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
	virtual void SetNpcState(int state);	// slot 310
};

void CNPC_VDog::vfunc432(int a)
{
	int &activity = *(int *)((char *)this + 0xfec);
	int &state = *(int *)((char *)this + 0x5cc0);
	if (activity == 1 && state == activity) {
		if (RandomInt(0, 0xff) == 0x80)
			((CNpcSlots *)this)->SetNpcState(3);
	} else if (activity == 3) {
		if (*(char *)((char *)this + 0x65c))
			((CNpcSlots *)this)->SetNpcState(1);
	} else if (activity == 0x6e) {
		if (*(char *)((char *)this + 0x65c))
			((CNpcSlots *)this)->SetNpcState(1);
	} else if (activity == 0x40) {
		if (*(char *)((char *)this + 0x65c))
			((CNpcSlots *)this)->SetNpcState(1);
	}
	CNPC_VAnimal::vfunc432(a);
}
// END FUNCTION
