// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b79c0 size=0xb
char * __fastcall sub_100b79c0(char *self)
{
	return self ? self + 4 : 0;
}
// END FUNCTION

// FUNCTION: 0x100b7bc0 size=0xc
void __fastcall sub_100b7bc0(int *self, int, int *src)
{
	self[3] = *src;
}
// END FUNCTION
