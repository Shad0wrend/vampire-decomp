// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003a780 size=0x33
#include "C_LocalTempEntity.h"
C_LocalTempEntity *pcd_emit_1003a780() { return new C_LocalTempEntity; }
// TARGET: ??_GC_LocalTempEntity@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1003a7c0 size=0x77
#include "C_LocalTempEntity.h"

class CUnknown1009fc10
{
public:
	void sub_1009fc10(int);
};

void C_LocalTempEntity::vfunc143(int a, float b)
{
	*(int *)((char *)this + 0x44) = -1;
	vfunc78();
	*(int *)((char *)this + 0x7ac) = 0;
	*(int *)((char *)this + 0x56c) = 0;
	*(float *)((char *)this + 0x7b0) = b + 0.75;
	*(int *)((char *)this + 0x570) = 0;
	((CUnknown1009fc10 *)this)->sub_1009fc10(a);
	*(int *)((char *)this + 0x48) = 0;
	*(int *)((char *)this + 0x4c) = 0;
	*(int *)((char *)this + 0x7c8) = 0;
	*(int *)((char *)this + 0x7f4) = 0;
	*(float *)((char *)this + 0x7c0) = 0.5f;
	*(short *)((char *)this + 0x7d0) = -1;
	*(float *)((char *)this + 0x7c4) = 1.0f;
}
// END FUNCTION
