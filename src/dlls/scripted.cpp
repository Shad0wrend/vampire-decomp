// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a8840 size=0x33
extern char g_10594b48[];

struct CCineStateView {
    char pad0[0x1b3c];
    const char *m_psz1b3c;
    int m_n1b40;
    char pad1[0x5cc4 - 0x1b44];
    int m_n5cc4;
    void sub_10006a8c();
};

// TARGET: sub_101a8840
void __stdcall sub_101a8840(CCineStateView *p)
{
    if (p->m_n5cc4 != 7) {
        p->m_psz1b3c = g_10594b48;
        p->m_n1b40 = 0x3ca;
        p->m_n5cc4 = 1;
    }
    p->sub_10006a8c();
}
// END FUNCTION

// FUNCTION: 0x101a9080 size=0x39c
#include "CAI_Motor.h"
// TARGET: CCineAI::vfunc583
#include "CCineAI.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"

__declspec(dllimport) void DevMsg(const char *fmt, ...);
__declspec(dllimport) void DevMsg(int level, const char *fmt, ...);
extern void (*g_109f3658)(int level, const char *pszFormat, ...);
extern Vector g_1070d1b0;
extern Vector g_1070d9d0;

struct CCineThisView
{
	EVS(0) virtual unsigned int *slot1x(); EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9) EVS10(10)
	EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19) EVS10(20) EVS10(21)
	virtual Vector *slot220x(int a, const Vector *b);
	virtual Vector *slot221x();
	char pad[0x19c - 4];
	unsigned int m_flags19c;
};

struct CCineNpcSlot181
{
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9) EVS10(10)
	EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17)
	EVS(180) virtual void slot181x(const Vector *pPos);
};

struct CCineMotor
{
	char pad[0x1c];
	int m_n1c;
	char pad2[0x28 - 0x20];
	char m_b28;
	char pad3[0x34 - 0x29];
	float m_f34;
	void sub_102e0b40();
	float sub_102e0a80(float yaw);
};

struct CCineNpcView : CEntityVSlots
{
	char pad[0x98 - 4];
	CEntityVSlots *m_pObj98;
	char pad2[0x19c - 0x9c];
	unsigned int m_flags19c;
	char pad3[0x1b3c - 0x1a0];
	const char *m_pszFile;
	int m_nLine;
	char pad4[0x1b4c - 0x1b44];
	char m_b1b4c;
	char pad5[0x5cc0 - 0x1b4d];
	int m_nState;
	int m_nNewState;
	char pad6[0x5d44 - 0x5cc8];
	CCineMotor *m_pMotor;
	char pad7[0x5d70 - 0x5d48];
	int m_nMoveState;
	unsigned int m_hScript;
	char pad8[0x5de8 - 0x5d78];
	void *m_pScript;
	const char *sub_1000b5cd();
	char sub_100b5190();
	void sub_1026d130();
	void sub_10279cc0(void *pScript);
	void sub_1027f270(int a);
	void sub_10280de0(int a);
	void sub_100b2f50(const Vector *p);
	void sub_100b3640(int a);
};

struct CCineTargetView : CEntityVSlots
{
	char pad[0x94 - 4];
	CCineNpcView *m_pNpc;
};

void CCineAI::vfunc583()
{
	CCineTargetView *pEnt = (CCineTargetView *)EHandle_Get(m_hTarget5ce4);
	if (!pEnt)
		return;
	CCineNpcView *pNpc = pEnt->m_pNpc;
	if (!pNpc)
		return;
	CCineThisView *pThis = (CCineThisView *)this;
	if (!pNpc->m_b1b4c)
	{
		DevMsg("************************************************\n");
		DevMsg("***  WARNING  **********************************\n");
		DevMsg("   scripted sequence(%s)\n", sub_1000b5cd());
		DevMsg("   is targeting an entity(%s)\n", pNpc->sub_1000b5cd());
		DevMsg("   This can happen if it starts hidden and is\n");
		DevMsg("   immediately put into a script without a delay.\n");
		DevMsg("   If this is the case.  Put at least a .1 second\n");
		DevMsg("   delay between ScriptUnhide and starting the\n");
		DevMsg("   scripted sequence.\n");
		DevMsg("   Otherwise, talk to a programmer.\n");
		DevMsg("***  WARNING  **********************************\n");
		DevMsg("************************************************\n");
	}
	if (pNpc->sub_100b5190())
		sub_101a77a0(pNpc);
	if (!m_b5f90)
		pNpc->sub_1026d130();
	pNpc->m_pScript = this;
	pNpc->m_hScript = *pThis->slot1x();
	pNpc->sub_10279cc0(this);
	m_saved_movetype = pNpc->slot94();
	m_saved_movecollide = pNpc->slot95();
	m_saved_solid = pNpc->slot92();
	m_saved_solidflags = pNpc->slot211();
	m_saved_effects = pNpc->m_flags19c;
	CEntityVSlots *pObj = pNpc->m_pObj98;
	if (pObj)
	{
		pObj->slot614();
		m_saved_troika_flags = *(int *)((char *)pObj + 0x14b8);
		if (m_flags204 & 0x1000)
			*(int *)((char *)pObj + 0x14b8) |= 0x40;
	}
	pNpc->m_flags19c |= pThis->m_flags19c;
	switch (m_fMoveTo)
	{
	case 0:
	case 5:
		pNpc->sub_1027f270(1);
		pNpc->m_nMoveState = 1;
		break;
	case 1:
		pNpc->sub_1027f270(4);
		pNpc->m_nMoveState = 4;
		break;
	case 2:
		pNpc->sub_1027f270(5);
		pNpc->m_nMoveState = 5;
		break;
	case 3:
		pNpc->sub_1027f270(6);
		pNpc->m_nMoveState = 6;
		break;
	case 4:
		{
			((CCineNpcSlot181 *)pNpc)->slot181x(pThis->slot220x(0, &g_1070d1b0));
			pNpc->m_pMotor->sub_102e0b40();
			CCineMotor *pMotor = pNpc->m_pMotor;
			float yaw = pThis->slot221x()->y;
			if (pMotor->m_b28)
			{
				if (yaw >= 180.0f)
					yaw -= 180.0f;
				else
					yaw += 180.0f;
			}
			if (pMotor->m_n1c == 0x43340000)
				pMotor->m_f34 = yaw;
			else
				pMotor->m_f34 = pMotor->sub_102e0a80(yaw);
			pNpc->sub_100b2f50(&g_1070d9d0);
			unsigned int npcFlags = pNpc->m_flags19c;
			npcFlags |= 0x10;
			pNpc->m_flags19c = npcFlags;
			Vector ang = *pNpc->slot221();
			ang.y = pThis->slot221x()->y;
			pNpc->slot64(&ang.x);
			pNpc->sub_1027f270(1);
			pNpc->m_nMoveState = 1;
			pNpc->sub_100b3640(1);
		}
		break;
	default:
		g_109f3658(2, "aiscript:  invalid Move To Position value!");
		break;
	}
	DevMsg(2, "\"%s\" found and used\n", pNpc->sub_1000b5cd());
	int oldState = pNpc->m_nState;
	pNpc->m_pszFile = "E:\\Vampire\\main\\dlls\\scripted.cpp";
	pNpc->m_nLine = 0x554;
	pNpc->m_nNewState = 4;
	if (oldState == 4)
		pNpc->sub_10280de0(0x2e);
}
// END FUNCTION
