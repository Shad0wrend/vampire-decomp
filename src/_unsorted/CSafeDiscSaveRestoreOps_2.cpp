// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042f420 size=0x46
#include "CSafeDiscSaveRestoreOps_2.h"

int sub_1042fe90(unsigned int h);

#define HASH(x) (((((((x) & 0x68d8635) ^ 0xce9f66a) + 0xffa91d8) & 0x197279ca) ^ (x)) ^ 0xa641cacd)

// TARGET: CSafeDiscSaveRestoreOps_2::vfunc0
void CSafeDiscSaveRestoreOps_2::vfunc0(int **ppObject, CSafeDiscWriter *pSave)
{
	int v = HASH((*ppObject)[2]);
	ppObject = (int **)sub_1042fe90(v);
	pSave->vfunc10((int *)&ppObject, 1);
}
// END FUNCTION

// FUNCTION: 0x1042f490 size=0x56
#include "CSafeDiscSaveRestoreOps_2.h"
unsigned int sub_1042fde0(int);
struct R { char a; char b; int c; };
struct O { int x; char a; char b; int c; };
void CSafeDiscSaveRestoreOps_2::vfunc1(int **ppObject, CSafeDiscReader *pRestore)
{
	R s;
	O *p = (O *)*ppObject;
	unsigned int v = sub_1042fde0(pRestore->vfunc14());
	s.c = ((((v & 0x68d8635) ^ 0xae8746f) + 0xffa91d8) & 0x197279ca) ^ v ^ 0xa641cacd;
	p->b = s.b;
	p->c = s.c;
	p->a = s.a;
}
// END FUNCTION
