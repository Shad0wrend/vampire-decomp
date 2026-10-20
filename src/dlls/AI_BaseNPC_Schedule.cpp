// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1028a2a0 size=0xaa
#include "CAI_BaseNPC.h"

extern char g_105cde88[];	// "E:\\Vampire\\main\\dlls\\AI_BaseNPC_Schedule.cpp"

int CAI_BaseNPC::vfunc437()
{
	*(int *)((char *)this + 0x1b2c) = 1;
	if (sub_10269aa0(0x73)) {
		*(float *)((char *)this + 0x3ec) = 1.0f;
		vfunc208(0);
	}
	if (sub_10269aa0(0x75)) {
		*(const char **)((char *)this + 0x1b30) = g_105cde88;
		*(int *)((char *)this + 0x1b34) = 0xe2b;
		return 0x3a;
	}
	if (sub_10269aa0(0x30)) {
		*(const char **)((char *)this + 0x1b30) = g_105cde88;
		*(int *)((char *)this + 0x1b34) = 0xe32;
		return 0x151;
	}
	if (sub_10269aa0(0x73)) {
		*(const char **)((char *)this + 0x1b30) = g_105cde88;
		*(int *)((char *)this + 0x1b34) = 0xe37;
		return 0x3e;
	}
	return 0;
}
// END FUNCTION
