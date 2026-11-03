// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10394120 size=0x84
#include "CNPC_VMingXiao.h"

// TARGET: CNPC_VMingXiao::vfunc437
int CNPC_VMingXiao::vfunc437()
{
	m_n1b2c = 0x19;
	if (m_nState5cc0 == 5) {
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
		m_nLine1b34 = 0x4f6;
		return 0x157;
	}
	CBaseEntity *pEnt = m_h6680.Get();
	vfunc388(!pEnt ? 0 : pEnt->m_n00a0, 0);
	return 0;
}
// END FUNCTION

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

// FUNCTION: 0x10395c70 size=0x4f
#include "CNPC_VMingXiao.h"
#include "CAI_BaseNPCTroika.h"
void CNPC_VMingXiao::sub_10395c70()
{
	*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
	*(int *)((char *)this + 0x1b34) = 0x916;
	if (sub_10398870())
		((CAI_BaseNPCTroika *)this)->sub_102ae750(0x16e, 1);
	else
		((CAI_BaseNPCTroika *)this)->sub_102ae750(0x16d, 1);
	*(int *)((char *)this + 0x200) = 1;
	*((char *)this + 0x6744) = 1;
	*((char *)this + 0x63d8) = 1;
}
// END FUNCTION

// FUNCTION: 0x10396dc0 size=0x97
#include "CNPC_VMingXiao.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

static inline bool HandleValid(const unsigned int *ph)
{
	if (*ph == 0xffffffff)
		return false;
	CGlobalEntityList_Slot *s = &g_10566458->m_Slots[*ph & 0x1fff];
	return s->m_Serial == (int)(*ph >> 13) && s->m_pEntity;
}

int CNPC_VMingXiao::sub_10396dc0()
{
	if (HandleValid((unsigned int *)((char *)this + 0x6718))
		&& *(int *)((char *)this + 0x673c) >= 3 && *(int *)((char *)this + 0x673c) <= 4) {
		if (sub_10014df8(0x7b)) {
			*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
			*(int *)((char *)this + 0x1b34) = 0xbe1;
			return 0x15c;
		}
		if (sub_10014df8(0x7c)) {
			*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
			*(int *)((char *)this + 0x1b34) = 0xbe5;
			return 0x15d;
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1039a6e0 size=0xd
#include "CUnknown1039a6e0.h"
void CUnknown1039a6e0::sub_1039a6e0(int value)
{
	m_unk1594 = value;
}
// END FUNCTION

// FUNCTION: 0x1039a700 size=0x34
extern char g_10647090[];

struct CMingXiaoView {
    char pad0[0x1b30];
    const char *m_psz1b30;
    int m_n1b34;
    void sub_10013cf5(int a, int b, int c);
    void sub_1000198d(int a, int b);
    void sub_1039a700(int unused);
};

// TARGET: CMingXiaoView::sub_1039a700
void CMingXiaoView::sub_1039a700(int unused)
{
    sub_10013cf5(1, 1, 10);
    m_psz1b30 = g_10647090;
    m_n1b34 = 0x14b1;
    sub_1000198d(0x156, 0);
}
// END FUNCTION
