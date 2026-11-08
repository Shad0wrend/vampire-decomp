// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10265ad0 size=0x2f7
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CAI_BaseNPC_vfunc144.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"
#include "CUnknown100290c0.h"
#include "CDevFlagObj.h"
#include "CCineNPC.h"
#include "CUnknown103158f0.h"
#include "IPhysicsObject.h"

#define FILE_ "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp"

struct CScriptView144
{
	char m_pad0000[0x204];
	unsigned int m_flags204;
	char m_pad0208[0x5f91 - 0x208];
	char m_b5f91;
};

extern CDevFlagObj *g_10924a6c;
extern CDevFlagObj *g_106bbaa4;

void CAI_BaseNPC::vfunc144(int a)
{
	CAI_BaseNPCUnit144 *p = (CAI_BaseNPCUnit144 *)this;
	const CAI_NPCDamageRecord *pInfo = (const CAI_NPCDamageRecord *)a;

	if (p->m_pSchedule5c38 && (int)p->m_pSchedule5c38 == p->sub_102cc1f0(0x3a))
		return;

	if (p->m_nState5cc0 == 4)
	{
		if (((CUnknown100290c0 *)g_10566458)->sub_100290c0((unsigned int *)&p->m_hScript5d74))
		{
			CScriptView144 *pScript = (CScriptView144 *)((CUnknown100290c0 *)g_10566458)->sub_100290c0((unsigned int *)&p->m_hScript5d74);
			if (pScript->m_b5f91 && (((CScriptView144 *)((CUnknown100290c0 *)g_10566458)->sub_100290c0((unsigned int *)&p->m_hScript5d74))->m_flags204 & 0x2080) != 0x80)
			{
				p->m_LastDamage.m_n00 = pInfo->m_n00;
				p->m_LastDamage.m_n04 = pInfo->m_n04;
				p->m_LastDamage.m_n08 = pInfo->m_n08;
				p->m_LastDamage.m_n0c = pInfo->m_n0c;
				p->m_LastDamage.m_vecForce.sub_1003e4b0(pInfo->m_vecForce);
				p->m_LastDamage.m_vecPosition.sub_1003e4b0(pInfo->m_vecPosition);
				p->m_LastDamage.m_n28 = pInfo->m_n28;
				p->m_LastDamage.m_pInflictor = pInfo->m_pInflictor;
				p->m_LastDamage.m_n30 = pInfo->m_n30;
				p->m_LastDamage.m_n34 = pInfo->m_n34;
				p->m_LastDamage.m_n38 = pInfo->m_n38;
				p->m_LastDamage.m_n3c = pInfo->m_n3c;
				p->m_LastDamage.m_n40 = pInfo->m_n40;
				p->m_LastDamage.m_n44 = pInfo->m_n44;
				p->m_LastDamage.m_b48 = pInfo->m_b48;
				p->m_LastDamage.m_b49 = pInfo->m_b49;
				p->m_LastDamage.m_b4a = pInfo->m_b4a;
				return;
			}
			((CCineNPC *)((CUnknown100290c0 *)g_10566458)->sub_100290c0((unsigned int *)&p->m_hScript5d74))->sub_101a8c30();
			IPhysicsObject *pPhys;
			if (!g_106bbaa4->vfunc1() && g_106bbaa4->m_n2c && (pPhys = p->m_pPhysObj36c))
			{
				Vector vecTmp;
				Vector vecPos;
				vecPos = *p->vfunc263(&vecTmp);
				pPhys->vfunc39((float *)&vecPos, 0);
			}
		}
	}

	p->vfunc511();
	if (p->m_n153c == -1 || !p->m_h1538.Get())
		p->vfunc488();

	p->sub_10265a90(pInfo->m_pInflictor);
	if (((CBaseEntity *)p)->sub_100b3700() & 0x2000)
	{
		*(int *)((char *)p + 0x1ec) = 0;
		p->sub_10265a40();
	}
	p->sub_1032b9b0(a);
	p->m_pszFile1b3c = FILE_;
	p->m_nLine1b40 = 0x217;
	p->m_nIdealState5cc4 = 7;
	g_10924a6c->vfunc1();
	p->sub_10269a20(0x4c);
	p->m_hAttacker5b7c = pInfo->m_pInflictor;
	p->m_b5b80 = 1;
	p->sub_1028ae60();
	if (p->m_pSquad5da4)
		((CUnknown103158f0 *)p->m_pSquad5da4)->sub_103158f0((CBaseEntity *)p);
	if ((char)p->vfunc552())
		p->sub_102695d0();
	else
		sub_101babc0(0x20, p->vfunc217(), 0x180, 30.0f, 0);
	p->m_pszFile1b3c = FILE_;
	p->m_nLine1b40 = 0x241;
	p->m_nIdealState5cc4 = 7;
	p->sub_1026e340(7);
}
// END FUNCTION

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

// FUNCTION: 0x10273390 size=0x2c1
#include "CBaseEntity.h"
#include "CBaseAnimating.h"
#include "CAI_BaseNPC.h"
#include "CAI_Motor.h"
#include "CUnknown102ee270.h"
#include "globalvars.h"
#include "Vector.h"
#include <string.h>

extern int g_1093407c;

void sub_10272650(int a);
void sub_10273aa0();
void sub_1026d7b0();

struct CUnknown1026a2a0
{
    void sub_1026a2a0(int a);
};

struct CObj1a9c
{
    void sub_102cc7e0();
};

struct CObj5d34
{
    char m_pad00[0x2c];
    int m_field2c;
};

struct CCondBits5c5c
{
    unsigned int m_bits[6];
    void ClearAll() { if (this) memset(this, 0, sizeof(m_bits)); }
};

// TARGET: CAI_BaseNPC::sub_10273390
void CAI_BaseNPC::sub_10273390()
{
    char *pSelf = (char *)this;

    ((CBaseEntity *)this)->sub_100a9290(1);
    *(EHANDLE *)(pSelf + 0x5b7c) = (CBaseEntity *)0;
    *(bool *)(pSelf + 0x5b80) = false;
    ((CBaseAnimating *)this)->sub_100904a0();
    ((CBaseEntity *)this)->sub_100b3580(0x12000);
    *(float *)(pSelf + 0x3ec) = 1.0f;
    *(int *)(pSelf + 0x1fc) = 2;

    sub_102e0b40((float *)*(void **)(pSelf + 0x5d44));
    CAI_Motor *pMotor = (CAI_Motor *)*(void **)(pSelf + 0x5d44);

    float yaw = ((Vector *)((CAI_BaseNPC *)this)->vfunc221())->y;
    if (*(char *)((char *)pMotor + 0x28) != 0)
    {
        if (yaw >= 180.0f)
            yaw -= 180.0f;
        else
            yaw += 180.0f;
    }
    if (*(int *)((char *)pMotor + 0x1c) == 0x43340000)
        *(float *)((char *)pMotor + 0x34) = yaw;
    else
        *(float *)((char *)pMotor + 0x34) = pMotor->sub_102e0a80(yaw);

    *(int *)(pSelf + 0x208) = 100;
    *(int *)(pSelf + 0x200) = 0;
    *(const char **)(pSelf + 0x1b3c) = "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp";
    *(int *)(pSelf + 0x1b40) = 0x1af1;
    *(int *)(pSelf + 0x5cc4) = 1;

    if (((CBaseAnimating *)this)->sub_1008dd30(1, -1) >= 0)
    {
        sub_10272650(1);
    }
    else if (((CBaseAnimating *)this)->sub_1008dd30(0xf1, -1) >= 0)
    {
        sub_10272650(0xf1);
    }
    else
    {
        *(int *)(pSelf + 0x6f0) = 0;
    }

    *(char *)(pSelf + 0x1a40) = 0;
    *(int *)(pSelf + 0x1a44) = 0x202400b;
    ((CObj5d34 *)*(void **)(pSelf + 0x5d34))->m_field2c = g_1093407c;
    ((CAI_BaseNPC *)this)->sub_10280d30();
    ((CUnknown102ee270 *)*(void **)(pSelf + 0x5d34))->sub_102ee270();
    ((CBaseAnimating *)this)->sub_10095be0();
    ((CBaseAnimating *)this)->sub_1008f540();

    *(int *)(pSelf + 0x5ddc) = 0;
    *(int *)(pSelf + 0x5d8c) = 0;
    ((CAI_BaseNPC *)this)->sub_10279a50(0);
    *(float *)(pSelf + 0x5de4) = 1024.0f;
    ((CUnknown1026a2a0 *)this)->sub_1026a2a0(0x45400000);
    *(char *)(pSelf + 0x5cd8) = 0;

    unsigned int nFlags = *(unsigned int *)(pSelf + 0x204);
    unsigned char bFlag = (unsigned char)(nFlags >> 8);
    if (bFlag & 1)
    {
        *(float *)(pSelf + 0x5de4) = 1.0e9f;
        ((CUnknown1026a2a0 *)this)->sub_1026a2a0(0x45bb8000);
    }

    ((CCondBits5c5c *)(pSelf + 0x5c5c))->ClearAll();
    ((CObj1a9c *)(pSelf + 0x1a9c))->sub_102cc7e0();
    ((CObj1a9c *)(pSelf + 0x1ae0))->sub_102cc7e0();
    ((CAI_BaseNPC *)this)->sub_10274ca0();
    *(int *)(pSelf + 0x1f0) = (int)sub_1026d7b0;

    if (gpGlobals->curtime > 1.0)
    {
        ((void (__fastcall *)(void *))sub_10273aa0)(this);
    }
    else
    {
        ((CBaseEntity *)this)->sub_100ac4e0((int)sub_10273aa0, 0, 0);
        *(float *)(pSelf + 0x17c) = gpGlobals->curtime + 0.1;
    }

    *(char *)(pSelf + 0x1b28) = 0;
    *(int *)(pSelf + 0x5b58) = 0;
    *(float *)(pSelf + 0x5b5c) = gpGlobals->curtime;
    *(int *)(pSelf + 0x5b84) = 0;
    *(int *)(pSelf + 0x5b88) = 0;
    *(int *)(pSelf + 0x5b8c) = 0x7f7fffff;
    *(int *)(pSelf + 0x5cc8) = 0;
    *(int *)(pSelf + 0x5b98) = 10;
    *(EHANDLE *)(pSelf + 0x5ba8) = (CBaseEntity *)0;
    *(int *)(pSelf + 0x5b90) = 0;
    *(bool *)(pSelf + 0x5d78) = false;
    *(bool *)(pSelf + 0x5bc4) = false;
    ((CAI_BaseNPC *)this)->sub_10270180(0, 0);
    *(int *)(pSelf + 0x5d98) = 0;
    *(int *)(pSelf + 0x5d9c) = 0;
    *(int *)(pSelf + 0x5ce8) = 0;
    *(int *)(pSelf + 0x5d6c) = 0;
    *(int *)(pSelf + 0x5da0) = 0;
    *(int *)(pSelf + 0x5db4) = 0;
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
