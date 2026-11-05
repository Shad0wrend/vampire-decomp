// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042f680 size=0x46
#include "CSafeDiscSaveRestoreOps_4.h"

int sub_10430130(unsigned int h);

#define HASH(x) (((((((x) & 0x3f3c1135) ^ 0x544222df) + 0x4ba5398d) & 0xc0c3eeca) ^ (x)) ^ 0x151a77f8)

// TARGET: CSafeDiscSaveRestoreOps_4::vfunc0
void CSafeDiscSaveRestoreOps_4::vfunc0(int **ppObject, CSafeDiscWriter *pSave)
{
	int v = HASH((*ppObject)[2]);
	ppObject = (int **)sub_10430130(v);
	pSave->vfunc10((int *)&ppObject, 1);
}
// END FUNCTION

// FUNCTION: 0x1042f6f0 size=0x56
#include "CSafeDiscSaveRestoreOps_4.h"
unsigned int sub_10430080(int);
struct R { char a; char b; int c; };
struct O { int x; char a; char b; int c; };
void CSafeDiscSaveRestoreOps_4::vfunc1(int **ppObject, CSafeDiscReader *pRestore)
{
	R s;
	O *p = (O *)*ppObject;
	unsigned int v = sub_10430080(pRestore->vfunc14());
	s.c = ((((v & 0x3f3c1135) ^ 0x415a33ef) + 0x4ba5398d) & 0xc0c3eeca) ^ v ^ 0x151a77f8;
	p->b = s.b;
	p->c = s.c;
	p->a = s.a;
}
// END FUNCTION
