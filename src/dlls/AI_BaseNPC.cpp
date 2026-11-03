// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1026d7b0 size=0x21
namespace lifted {
extern char g_105cb988;
}
struct CUnknown1026d7b0 { void sub_1026d7b0(int, int, int, int); };
void CUnknown1026d7b0::sub_1026d7b0(int a0, int a1, int a2, int a3)
{
    *(int *)((char *)this + 0x1b3c) = (int)&lifted::g_105cb988;
    *(int *)((char *)this + 0x1b40) = 0xffc;
    *(int *)((char *)this + 0x5cc4) = 3;
}
// END FUNCTION

// FUNCTION: 0x1026f4d0 size=0x86
#include "CAI_BaseNPC.h"

#define FIELD(type, off) (*(type *)((char *)this + (off)))

int CAI_BaseNPC::sub_1026f4d0()
{
	FIELD(int, 0x1b2c) = 0;
	FIELD(int, 0x1b30) = 0;
	FIELD(int, 0x1b34) = 0;
	FIELD(int, 0x1b44) = 0;
	FIELD(int, 0x1b48) = 0;
	int state = vfunc460();
	if (state == 0)
		state = vfunc461();
	if ((FIELD(unsigned int, 0x14bc) & 0x20000) == 0x20000) {
		switch (state) {
		case 1:
			FIELD(int, 0x1b40) = 0x12f7;
			break;
		case 3:
			FIELD(int, 0x1b40) = 0x12f8;
			break;
		default:
			return state;
		}
		FIELD(const char *, 0x1b3c) = "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp";
		state = FIELD(int, 0x5cc4) = 0xb;
	}
	return state;
}
// END FUNCTION

// FUNCTION: 0x1027be60 size=0xb5
#include "CAI_BaseNPC.h"
#include "CUnknown102ee270.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;
extern void (__cdecl *g_109f3650)(int, const char *, ...);

struct CHandleView
{
	unsigned int m_Index;

	CGlobalEntityList_Ent *Get() const
	{
		if (m_Index != 0xffffffff) {
			CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[m_Index & 0x1fff];
			if (pSlot->m_Serial == (int)(m_Index >> 13))
				return pSlot->m_pEntity;
		}
		return 0;
	}
};

struct CConditionBits
{
	int m_Bits[6];

	void ClearAll()
	{
		if (this)
			for (int i = 0; i < 6; i++)
				m_Bits[i] = 0;
	}
};

#define NV1(n) virtual void nv##n();
#define NV10(p) NV1(p##0) NV1(p##1) NV1(p##2) NV1(p##3) NV1(p##4) NV1(p##5) NV1(p##6) NV1(p##7) NV1(p##8) NV1(p##9)
#define NV100(p) NV10(p##0) NV10(p##1) NV10(p##2) NV10(p##3) NV10(p##4) NV10(p##5) NV10(p##6) NV10(p##7) NV10(p##8) NV10(p##9)

struct CAI_BaseNPCLevelView	// the NPC as the level transition cleanup sees it
{
	NV100(a) NV10(b0) NV10(b1) NV10(b2) NV10(b3) NV10(b4) NV10(b5) NV1(c0) NV1(c1) NV1(c2) NV1(c3) NV1(c4) NV1(c5) NV1(c6)
	virtual int slot167();

	char m_pad0004[0xfec - 4];
	int m_nFec;
	char m_pad0ff0[0x1b3c - 0xff0];
	const char *m_pszFile1b3c;
	int m_nLine1b40;
	char m_pad1b44[0x5c5c - 0x1b44];
	CConditionBits m_Conditions;
	char m_pad5c74[0x5cc0 - 0x5c74];
	int m_nState5cc0;
	int m_nState5cc4;
	char m_pad5cc8[0x5d34 - 0x5cc8];
	CUnknown102ee270 *m_pNavigator;
	char m_pad5d38[0x5d74 - 0x5d38];
	CHandleView m_hScripted;

	void sub_10280d30();
	void sub_1026e340(int newState);
	const char *sub_100ab4f0();
};

void CAI_BaseNPC::sub_1027be60()
{
	CAI_BaseNPCLevelView *p = (CAI_BaseNPCLevelView *)this;
	p->m_pNavigator->sub_102ee270();
	p->sub_10280d30();
	p->m_nFec = 0;
	if (!p->slot167())
		p->m_Conditions.ClearAll();
	if (p->m_nState5cc0 == 4 && (!p->m_hScripted.Get())) {
		p->sub_1026e340(1);
		p->m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp";
		p->m_nLine1b40 = 0x28d0;
		p->m_nState5cc4 = 1;
		g_109f3650(1, "Scripted Sequence stripped on level transition for %s\n", p->sub_100ab4f0());
	}
}
// END FUNCTION
