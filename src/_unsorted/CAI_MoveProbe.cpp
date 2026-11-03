// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1027cf30 size=0x20
extern int g_1049a0f8;

struct Helper
{
	void* sub_1027cf30(unsigned char flags);
};

// TARGET: Helper::sub_1027cf30
void* Helper::sub_1027cf30(unsigned char flags)
{
	*(void**)this = &g_1049a0f8;
	if (flags & 1)
		::operator delete(this);
	return this;
}
// END FUNCTION
