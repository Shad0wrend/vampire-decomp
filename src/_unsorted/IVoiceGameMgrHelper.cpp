// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103531c0 size=0x20
extern int g_104a3078;

struct Helper
{
	void* sub_103531c0(unsigned char flags);
};

// TARGET: Helper::sub_103531c0
void* Helper::sub_103531c0(unsigned char flags)
{
	*(void**)this = &g_104a3078;
	if (flags & 1)
		::operator delete(this);
	return this;
}
// END FUNCTION
