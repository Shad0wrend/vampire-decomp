// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103945a0 size=0x96
#include "CNPC_VMingXiao.h"

typedef char (__fastcall *PFN_CHAR)(void *);
typedef int (__fastcall *PFN_INT)(void *);

int CNPC_VMingXiao::vfunc461()
{
	char *p = (char *)this;
	volatile int *state = (volatile int *)(p + 0x5cc4);
	*(int *)(p + 0x1b38) = 0x19;
	if (!((PFN_CHAR)(*(void ***)this)[158])(this) || ((PFN_INT)(*(void ***)this)[464])(this) == 7) {
		*(const char **)(p + 0x1b3c) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
		*(int *)(p + 0x1b40) = 0x5da;
		*state = 7;
	}
	int r = ((PFN_INT)(*(void ***)this)[167])(this);
	*(const char **)(p + 0x1b3c) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
	int ret;
	if (r) {
		*state = 2;
		ret = *state;
		*(int *)(p + 0x1b40) = 0x5e0;
		return ret;
	}
	*state = 1;
	ret = *state;
	*(int *)(p + 0x1b40) = 0x5e4;
	return ret;
}
// END FUNCTION

// FUNCTION: 0x1039a6e0 size=0xd
void CUnknown1039a6e0::sub_1039a6e0(int value)
{
	m_unk1594 = value;
}
// END FUNCTION
