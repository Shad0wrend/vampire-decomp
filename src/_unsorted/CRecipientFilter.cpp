// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1019ce00 size=0x23
CRecipientFilter::CRecipientFilter()
{
	Reset();
}
// END FUNCTION

// FUNCTION: 0x1019ce40 size=0x68
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
	TFilterX *sub_1019ce40(unsigned char flags);
};

TFilterX *TFilterX::sub_1019ce40(unsigned char flags)
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

// FUNCTION: 0x1019d320 size=0x8
#include "CRecipientFilter.h"

char CRecipientFilter::vfunc4()
{
	return m_1c == 1;
}
// END FUNCTION
