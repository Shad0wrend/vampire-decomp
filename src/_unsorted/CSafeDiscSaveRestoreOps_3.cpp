// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042f550 size=0x46
#include "CSafeDiscSaveRestoreOps_3.h"
#include "CSafeDiscSaveRestoreOps_0.h"

int sub_1042ffe0(unsigned int h);

#define HASH(x) (((((((x) & 0x98b2235) ^ 0xc80e68e3) + 0x4e242ee1) & 0xf674ddca) ^ (x)) ^ 0x10ade2d8)

// TARGET: CSafeDiscSaveRestoreOps_3::vfunc0
void CSafeDiscSaveRestoreOps_3::vfunc0(int **ppObject, CSafeDiscWriter *pSave)
{
	int v = HASH((*ppObject)[2]);
	ppObject = (int **)sub_1042ffe0(v);
	pSave->vfunc10((int *)&ppObject, 1);
}
// END FUNCTION

// FUNCTION: 0x1042f5c0 size=0x56
#include "CSafeDiscSaveRestoreOps_3.h"
unsigned int sub_1042ff30(int);
struct R { char a; char b; int c; };
struct O { int x; char a; char b; int c; };
void CSafeDiscSaveRestoreOps_3::vfunc1(int **ppObject, CSafeDiscReader *pRestore)
{
	R s;
	O *p = (O *)*ppObject;
	unsigned int v = sub_1042ff30(pRestore->vfunc14());
	s.c = ((((v & 0x98b2235) ^ 0xc8874af3) + 0x4e242ee1) & 0xf674ddca) ^ v ^ 0x10ade2d8;
	p->b = s.b;
	p->c = s.c;
	p->a = s.a;
}
// END FUNCTION
