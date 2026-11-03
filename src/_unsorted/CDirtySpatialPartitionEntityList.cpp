// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100dbb50 size=0x68
#include "CDirtySpatialPartitionEntityList.h"
#include "utlvector.h"

void __cdecl sub_10430964(void *p);

CAutoGameSystem *CDirtySpatialPartitionEntityList::vfunc8(unsigned int flags)
{
	((CUtlVector<int> *)((char *)this + 0xc))->~CUtlVector<int>();
	sub_1000cfbd();
	if (flags & 1)
		sub_10430964(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100dbbe0 size=0x27
extern int g_1070b24c;

struct CDirtyIfaceView {
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual void vfunc5();
    virtual void vfunc6();
    virtual void vfunc7();
    virtual void vfunc8();
    virtual void vfunc9();
    virtual void vfunc10(int p);
};

bool __fastcall sub_100dbbe0(char *p)
{
    int a;
    if (p != 0) {
        a = (int)(p + 8);
    } else {
        a = 0;
    }
    ((CDirtyIfaceView *)g_1070b24c)->vfunc10(a);
    return true;
}
// END FUNCTION

// FUNCTION: 0x100dbd50 size=0x8
#include "CDirtySpatialPartitionEntityList.h"
// TARGET: CDirtySpatialPartitionEntityList::vfunc5
void CDirtySpatialPartitionEntityList::vfunc5()
{
	m_18 = 0;
}
// END FUNCTION
