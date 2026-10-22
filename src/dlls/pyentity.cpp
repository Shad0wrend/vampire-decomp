// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1019ab40 size=0x138
#include "CBasePlayer.h"
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "CGameRules.h"
#include "CUnknown102dfc10.h"

#define PV1(n) virtual void v##n();
#define PV10(p) PV1(p##0) PV1(p##1) PV1(p##2) PV1(p##3) PV1(p##4) PV1(p##5) PV1(p##6) PV1(p##7) PV1(p##8) PV1(p##9)

struct CPyNpcSlots	// the NPC's vtable up to slot 541
{
	PV10(0) PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV10(10) PV10(11) PV10(12) PV10(13) PV10(14) PV10(15) PV10(16) PV10(17) PV10(18) PV10(19)
	PV10(20) PV10(21) PV10(22) PV10(23) PV10(24) PV10(25) PV10(26) PV10(27) PV10(28) PV10(29)
	PV10(30) PV10(31) PV10(32) PV10(33) PV10(34) PV10(35) PV10(36) PV10(37) PV10(38) PV10(39)
	PV10(40) PV10(41) PV10(42) PV10(43) PV10(44) PV10(45) PV10(46) PV10(47) PV10(48) PV10(49)
	PV10(50) PV10(51) PV10(52) PV10(53)
	PV1(540)
	virtual CUnknown102dfc10 *vfunc541();
};

struct CPySphere	// CEntitySphereQuery: the entities found in a sphere
{
	int m_listIndex;
	int m_listCount;
	void *m_pList[0x100];

	void sub_101cccf0(const Vector *pCenter, float flRadius, int flagMask, int partitionMask);	// constructor (stub 0x1000bc30)
};

struct CPyTarget	// an entity of the sphere
{
	char m_pad0000[0x94];
	void *m_p94;
	CAI_BaseNPCTroika *m_pNpc;	// 0x98
	char m_pad009c[0x2e0 - 0x9c];
	void *m_pEdict;	// 0x2e0
};

struct CPyPlayer : CBasePlayer
{
	void sub_1017e150(int a, float b, const char *psz);	// stub 0x1000fa33
	void sub_1017e6f0(int a);	// stub 0x1000c838
};

struct CPyLocalEnt
{
	char m_pad0000[0xa8];
	CPyPlayer *m_pPlayer;	// 0xa8
};

extern "C" __declspec(dllimport) int PyRun_SimpleString(const char *pszCommand);
extern CGameRules *g_1070ba0c;
CPyLocalEnt *sub_101193b0();	// stub 0x10008d8c
int __fastcall sub_101ccd40(int *pQuery);
const char *sub_101d3730(const char *pszFormat, const char *pszFile, int nLine);	// stub 0x100067f3

void sub_1019ab40()
{
	CPyLocalEnt *pLocal = sub_101193b0();
	if (!pLocal)
		return;
	CPyPlayer *pPlayer = pLocal->m_pPlayer;
	if (!pPlayer)
		return;
	PyRun_SimpleString("G.ClearAll()");
	pPlayer->sub_1017df50(0, -1.0f, "CC_GClearDialog");
	pPlayer->sub_1017e150(0, -1.0f, "CC_GClearDialog");
	pPlayer->sub_1017e6f0(0);
	g_1070ba0c->vfunc57();
	CPySphere sphere;
	sphere.sub_101cccf0(((CEntityVSlots *)pPlayer)->slot220(), 64000.0f, 0, 0);
	CPyTarget *pEnt = (CPyTarget *)sub_101ccd40((int *)&sphere);
	while (pEnt)
	{
		if (pEnt->m_pEdict && pEnt->m_p94 && pEnt->m_pNpc)
		{
			CAI_BaseNPCTroika *pNpc = pEnt->m_pNpc;
			pNpc->m_n64bc = 0;
			pNpc->sub_10279a50(0);
			pNpc->sub_10279b70(0);
			*(unsigned int *)((char *)pNpc + 0x5d8c) &= 0xf7fc7fff;
			pNpc->sub_1000dc38();
			((CPyNpcSlots *)pNpc)->vfunc541()->sub_102dfc10((int)sub_101d3730("%s(%d) :", "E:\\Vampire\\main\\dlls\\pyentity.cpp", 0xb9a));
		}
		sphere.m_listIndex++;
		pEnt = (CPyTarget *)sub_101ccd40((int *)&sphere);
	}
}
// END FUNCTION
