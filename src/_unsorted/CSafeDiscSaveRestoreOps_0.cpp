// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042f1c0 size=0x46
#include "CSafeDiscSaveRestoreOps_0.h"

int sub_1042fbf0(unsigned int h);

#define HASH(x) (((((((x) & 0x710935) ^ 0x148739) + 0x4094ab) & 0x18ef6ca) ^ (x)) ^ 0x412a96ec)

// TARGET: CSafeDiscSaveRestoreOps_0::vfunc0
void CSafeDiscSaveRestoreOps_0::vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave)
{
	int v = HASH((*(int **)fieldInfo)[2]);
	fieldInfo = (SaveRestoreFieldInfo_t *)sub_1042fbf0(v);
	((CSafeDiscWriter *)pSave)->vfunc10((int *)&fieldInfo, 1);
}
// END FUNCTION

// FUNCTION: 0x1042f230 size=0x56
#include "CSafeDiscSaveRestoreOps_0.h"
unsigned int sub_1042fb50(int);
struct R { char a; char b; int c; };
struct O { int x; char a; char b; int c; };
void CSafeDiscSaveRestoreOps_0::vfunc1(SaveRestoreFieldInfo_t *ppObject, IRestore *pRestore)
{
#define ppObject ((int **)ppObject)
#define pRestore ((CSafeDiscReader *)pRestore)
	R s;
	O *p = (O *)*ppObject;
	unsigned int v = sub_1042fb50(pRestore->vfunc14());
	s.c = ((((v & 0x710935) ^ 0x34871d) + 0x4094ab) & 0x18ef6ca) ^ v ^ 0x412a96ec;
	p->b = s.b;
	p->c = s.c;
	p->a = s.a;
#undef pRestore
#undef ppObject
}
// END FUNCTION
