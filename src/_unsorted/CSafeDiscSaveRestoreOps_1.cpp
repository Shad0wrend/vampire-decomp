// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042f360 size=0x56
#include "CSafeDiscSaveRestoreOps_1.h"
unsigned int sub_1042fc90(int);
struct R { char a; char b; int c; };
struct O { int x; char a; char b; int c; };
void CSafeDiscSaveRestoreOps_1::vfunc1(int **ppObject, CSafeDiscReader *pRestore)
{
	R s;
	O *p = (O *)*ppObject;
	unsigned int v = sub_1042fc90(pRestore->vfunc14());
	s.c = ((((v & 0x8a66e35) ^ 0x85f3db1) + 0x8b10412) & 0x175991ca) ^ v ^ 0x783682a9;
	p->b = s.b;
	p->c = s.c;
	p->a = s.a;
}
// END FUNCTION
