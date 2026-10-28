// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
