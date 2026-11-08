// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1026d050 size=0x4f
struct SSquadView { void sub_10316700(void *pNPC); };
struct SDbgSink { void sub_102dfc10(const char *); };
extern SDbgSink *g_109203f0;
char *__cdecl sub_101d3730(const char *, const char *, int);

struct SNpcView5bb0 {
    char pad[0x5bb0];
    int m_n5bb0;
    char pad2[0x5da4 - 0x5bb4];
    void *m_p5da4;
    void sub_1026d050();
};

// TARGET: SNpcView5bb0::sub_1026d050
void SNpcView5bb0::sub_1026d050()
{
    if (m_n5bb0 <= 0) {
        SSquadView *pSquad = *(SSquadView **)&m_p5da4;
        if (pSquad)
            pSquad->sub_10316700(this);
        g_109203f0->sub_102dfc10(sub_101d3730("%s(%d) :", "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp", 0xf36));
    }
    ++m_n5bb0;
}
// END FUNCTION

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

// FUNCTION: 0x1026f660 size=0x3d8
#include "CBaseEntity.h"
#include "CAI_BaseNPC_vfunc461.h"
#include "CAI_Motor.h"

#define FILE_ "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp"

typedef void (*FnDevWarning)(int, const char *, ...);
extern FnDevWarning g_109f3658;

int CAI_BaseNPC::vfunc461()
{
	CAI_BaseNPCUnit461 *p = (CAI_BaseNPCUnit461 *)this;
	p->m_n1b38 = 1;
	switch (p->m_nState5cc0) {
	case 1:
		if (p->sub_10269d30(0x54) || p->sub_10269d30(0x46)) {
			p->m_nLine1b40 = 0x136a;
			p->m_nIdealState5cc4 = 2;
		} else if (p->sub_10269d30(0x4c)) {
			p->m_b5b80 = 0;
			sub_102e0b40((float *)p->m_pMotor5d44);
			Vector v = ((CEnemiesView *)p->vfunc541())->sub_102dfed0((CBaseEntity *)p->vfunc167());
			p->m_pMotor5d44->sub_102e2020(&v.x, 0);
			p->m_nLine1b40 = 0x1373;
			p->m_nIdealState5cc4 = 3;
		} else if (p->sub_10269d30(0x4d)) {
			p->m_b5b80 = 0;
			sub_102e0b40((float *)p->m_pMotor5d44);
			Vector v = ((CEnemiesView *)p->vfunc541())->sub_102dfed0((CBaseEntity *)p->vfunc167());
			p->m_pMotor5d44->sub_102e2020(&v.x, 0);
			p->m_nLine1b40 = 0x137c;
			p->m_nIdealState5cc4 = 3;
		} else if (p->sub_10269d30(0x6a) || p->sub_10269d30(0x6d) || p->sub_10269d30(0x6e) || p->sub_10269d30(0x6f) || p->sub_10269d30(0x6b) || p->sub_10269d30(0x70)) {
			S101b9920 *pObj = (S101b9920 *)p->vfunc474();
			if (!pObj)
				return p->m_nIdealState5cc4;
			sub_102e0b40((float *)p->m_pMotor5d44);
			CAI_Motor *pMotor = p->m_pMotor5d44;
			pMotor->sub_102e2020((const float *)pObj->sub_101b99d0(), 0);
			int n = *(int *)((char *)pObj + 4);
			if (n != 1 && n != 8 && n != 0x10)
				return p->m_nIdealState5cc4;
			p->m_nLine1b40 = 0x1397;
			p->m_nIdealState5cc4 = 3;
		} else if (p->sub_10269d30(0x5e)) {
			p->m_nLine1b40 = 0x139e;
			p->m_nIdealState5cc4 = 3;
		} else {
			return p->m_nIdealState5cc4;
		}
		p->m_pszFile1b3c = FILE_;
		break;
	case 3:
		if (p->sub_10269d30(0x54) || p->sub_10269d30(0x46)) {
			p->m_nLine1b40 = 0x13ac;
			p->m_nIdealState5cc4 = 2;
			p->m_pszFile1b3c = FILE_;
		} else if (p->sub_10269d30(0x6a) || p->sub_10269d30(0x6d)) {
			p->m_pszFile1b3c = FILE_;
			p->m_nLine1b40 = 0x13b2;
			p->m_nIdealState5cc4 = 3;
			S101b9920 *pObj = (S101b9920 *)p->vfunc474();
			if (pObj) {
				sub_102e0b40((float *)p->m_pMotor5d44);
				CAI_Motor *pMotor = p->m_pMotor5d44;
				pMotor->sub_102e2020((const float *)pObj->sub_101b99d0(), 0);
			}
			g_10739a4c.sub_101e3d70((CUnknown101e3cfObj *)p);
			return p->m_nIdealState5cc4;
		} else if (p->vfunc462()) {
			p->m_nLine1b40 = 0x13c0;
			p->m_nIdealState5cc4 = 1;
			p->m_pszFile1b3c = FILE_;
		}
		break;
	case 2:
		if (!p->vfunc167()) {
			p->m_pszFile1b3c = FILE_;
			p->m_nLine1b40 = 0x13cc;
			p->m_nIdealState5cc4 = 3;
			g_109f3658(2, "***Combat state with no enemy!\n");
			return p->m_nIdealState5cc4;
		}
		break;
	case 4:
		if (p->sub_10269d30(0x5c) || p->sub_10269d30(0x4c) || p->sub_10269d30(0x4d)) {
			p->m_b5b80 = 0;
			p->sub_1027d0a0();
			return p->m_nIdealState5cc4;
		}
		break;
	case 7:
		p->m_nLine1b40 = 0x13dd;
		p->m_nIdealState5cc4 = 7;
		p->m_pszFile1b3c = FILE_;
		break;
	}
	return p->m_nIdealState5cc4;
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
