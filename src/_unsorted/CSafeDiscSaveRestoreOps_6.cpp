// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042f8e0 size=0x46
#include "CSafeDiscSaveRestoreOps_6.h"
#include "CSafeDiscSaveRestoreOps_0.h"

int sub_104303d0(unsigned int h);

#define HASH(x) (((((((x) & 0x3ebf0135) ^ 0x5d8f1fcc) + 0x4ad2507e) & 0xc140feca) ^ (x)) ^ 0x567227d9)

// TARGET: CSafeDiscSaveRestoreOps_6::vfunc0
void CSafeDiscSaveRestoreOps_6::vfunc0(int **ppObject, CSafeDiscWriter *pSave)
{
	int v = HASH((*ppObject)[2]);
	ppObject = (int **)sub_104303d0(v);
	pSave->vfunc10((int *)&ppObject, 1);
}
// END FUNCTION

// FUNCTION: 0x1042f950 size=0x56
#include "CSafeDiscSaveRestoreOps_6.h"
unsigned int sub_10430320(int);
struct R { char a; char b; int c; };
struct O { int x; char a; char b; int c; };
void CSafeDiscSaveRestoreOps_6::vfunc1(int **ppObject, CSafeDiscReader *pRestore)
{
	R s;
	O *p = (O *)*ppObject;
	unsigned int v = sub_10430320(pRestore->vfunc14());
	s.c = ((((v & 0x3ebf0135) ^ 0x4bbd1edd) + 0x4ad2507e) & 0xc140feca) ^ v ^ 0x567227d9;
	p->b = s.b;
	p->c = s.c;
	p->a = s.a;
}
// END FUNCTION
