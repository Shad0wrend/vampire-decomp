// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10135d70 size=0x6
extern int g_102c5b5c;

#include "C_Sprite.h"

// TARGET: C_Sprite::vfunc17
int C_Sprite::vfunc17()
{
	return (int)&g_102c5b5c;
}
// END FUNCTION

// FUNCTION: 0x10135d80 size=0x6
#include "C_Sprite.h"

// TARGET: C_Sprite::vfunc16
int C_Sprite::vfunc16()
{
	return (int)"C_Sprite";
}
// END FUNCTION
