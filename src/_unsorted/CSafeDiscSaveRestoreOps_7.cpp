// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042fa80 size=0x56
#include "CSafeDiscSaveRestoreOps_7.h"
unsigned int sub_10430470(int);
struct R { char a; char b; int c; };
struct O { int x; char a; char b; int c; };
void CSafeDiscSaveRestoreOps_7::vfunc1(int **ppObject, CSafeDiscReader *pRestore)
{
	R s;
	O *p = (O *)*ppObject;
	unsigned int v = sub_10430470(pRestore->vfunc14());
	s.c = ((((v & 0x1b78b435) ^ 0x42307141) + 0x4b0a6787) & 0xe4874bca) ^ v ^ 0x9a5db6cc;
	p->b = s.b;
	p->c = s.c;
	p->a = s.a;
}
// END FUNCTION
