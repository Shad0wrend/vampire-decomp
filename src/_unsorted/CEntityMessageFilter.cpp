// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10110430 size=0x68
extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);
extern int vt_10447108[];

struct TFilterX {
	int *vptr;
	int pad;
	void *p;
	int count;
	int grow;
	int size;
	void *elems;
	TFilterX *sub_10110430(unsigned char flags);
};

TFilterX *TFilterX::sub_10110430(unsigned char flags)
{
	size = 0;
	if (grow != -1) {
		if (p) {
			Plat_Free(p);
			p = 0;
		}
		count = 0;
	}
	void *e = p;
	int g = grow;
	elems = e;
	if (g != -1) {
		if (e) {
			Plat_Free(e);
			p = 0;
		}
		count = 0;
	}
	vptr = vt_10447108;
	if (flags & 1)
		delete this;
	return this;
}
// END FUNCTION
