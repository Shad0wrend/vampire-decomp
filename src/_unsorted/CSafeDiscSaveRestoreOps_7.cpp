// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042fa10 size=0x46
#include "CSafeDiscSaveRestoreOps_7.h"
#include "CSafeDiscSaveRestoreOps_0.h"

int sub_10430520(unsigned int h);

#define HASH(x) (((((((x) & 0x1b78b435) ^ 0x5868c545) + 0x4b0a6787) & 0xe4874bca) ^ (x)) ^ 0x9a5db6cc)

// TARGET: CSafeDiscSaveRestoreOps_7::vfunc0
void CSafeDiscSaveRestoreOps_7::vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave)
{
	int v = HASH((*(int **)fieldInfo)[2]);
	fieldInfo = (SaveRestoreFieldInfo_t *)sub_10430520(v);
	((CSafeDiscWriter *)pSave)->vfunc10((int *)&fieldInfo, 1);
}
// END FUNCTION

// FUNCTION: 0x1042fa80 size=0x56
#include "CSafeDiscSaveRestoreOps_7.h"
unsigned int sub_10430470(int);
struct R { char a; char b; int c; };
struct O { int x; char a; char b; int c; };
void CSafeDiscSaveRestoreOps_7::vfunc1(SaveRestoreFieldInfo_t *ppObject, IRestore *pRestore)
{
#define ppObject ((int **)ppObject)
#define pRestore ((CSafeDiscReader *)pRestore)
	R s;
	O *p = (O *)*ppObject;
	unsigned int v = sub_10430470(pRestore->vfunc14());
	s.c = ((((v & 0x1b78b435) ^ 0x42307141) + 0x4b0a6787) & 0xe4874bca) ^ v ^ 0x9a5db6cc;
	p->b = s.b;
	p->c = s.c;
	p->a = s.a;
#undef pRestore
#undef ppObject
}
// END FUNCTION
