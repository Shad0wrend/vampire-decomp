// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042f2f0 size=0x46
#include "CSafeDiscSaveRestoreOps_1.h"

int sub_1042fd40(unsigned int h);

#define HASH(x) (((((((x) & 0x8a66e35) ^ 0x793f90) + 0x8b10412) & 0x175991ca) ^ (x)) ^ 0x783682a9)

void CSafeDiscSaveRestoreOps_1::vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave)
{
	int v = HASH((*(int **)fieldInfo)[2]);
	fieldInfo = (SaveRestoreFieldInfo_t *)sub_1042fd40(v);
	((CSafeDiscWriter *)pSave)->vfunc10((int *)&fieldInfo, 1);
}
// END FUNCTION

// FUNCTION: 0x1042f360 size=0x56
#include "CSafeDiscSaveRestoreOps_1.h"
unsigned int sub_1042fc90(int);
struct R { char a; char b; int c; };
struct O { int x; char a; char b; int c; };
void CSafeDiscSaveRestoreOps_1::vfunc1(SaveRestoreFieldInfo_t *ppObject, IRestore *pRestore)
{
#define ppObject ((int **)ppObject)
#define pRestore ((CSafeDiscReader *)pRestore)
	R s;
	O *p = (O *)*ppObject;
	unsigned int v = sub_1042fc90(pRestore->vfunc14());
	s.c = ((((v & 0x8a66e35) ^ 0x85f3db1) + 0x8b10412) & 0x175991ca) ^ v ^ 0x783682a9;
	p->b = s.b;
	p->c = s.c;
	p->a = s.a;
#undef pRestore
#undef ppObject
}
// END FUNCTION
