// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x1035d1b0 size=0x588
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPCMaker_Fleshpile.h"
// TARGET: CNPC_VAndreiBlood::vfunc442
#include "CNPC_VAndreiBlood.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"
#include "engineiface.h"
#include "engineserver.h"
#include "ehandle.h"
#include "globalvars.h"
#include "CGlobalEntityList.h"
#include "CFlagsUnit.h"
#include "COutputEvent.h"

struct CGL442 : CGlobalEntityList { CBaseEntity *sub_100f7d50(const char *pszName, const float *pCenter, float flRadius); };
extern CGL442 g_106eb5d8;
void sub_101cd940(CBaseEntity *p);
extern "C" void *__cdecl __RTDynamicCast(void *pObj, long lDelta, void *pSrcType, void *pTargetType, int bReference);
extern char g_10538764[];
extern char g_1062520c[];

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
inline int ENTINDEX442(int pEdict) { return engine->vfunc35(pEdict); }
struct CColl442 {
	char m_pad0000[0x44];
	unsigned short m_usSolidFlags;
	void sub_100dc580(int flags);
};

#define F(T, o) (*(T *)((char *)this + (o)))

void CNPC_VAndreiBlood::vfunc442(const int *pTask)
{
	ScopeTrace trace("CNPC_VAndreiBlood::StartTask", g_106b8540);
	switch (pTask[0]) {
	case 0x151:
		{
			CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
			enginesound->vfunc3(&filter, ENTINDEX442(F(int, 0x2e0)), 2, "Character/Boss/Andrei/TeleportOut.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		}
		sub_1035e1a0("Andrei_Teleport_Out-Emitter");
		sub_10289ee0(0x113c);
		break;
	case 0x152:
		{
			CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
			enginesound->vfunc3(&filter, ENTINDEX442(F(int, 0x2e0)), 2, "Character/Boss/Andrei/TeleportIn.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		}
		sub_1035e1a0("Andrei_Teleport_In-Emitter");
		sub_10289ee0(0x113b);
		break;
	case 0x153:
		F(CBaseEntity *, 0x5ddc) = sub_1035ddd0();
		sub_10273e80(0);
		break;
	case 0x14b:
		if (F(CEntityVSlots *, 0x5ddc) == 0) {
			F(const char *, 0x1b44) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAndreiBlood.cpp";
			F(int, 0x1b48) = 0x130;
			((CEntityVSlots *)this)->slot448(4);
			break;
		}
		{
			CEntityVSlots *pNode = F(CEntityVSlots *, 0x5ddc);
			((CEntityVSlots *)this)->slot216(pNode->slot217());
			Vector vecOrigin;
			vecOrigin = *((CEntityVSlots *)this)->slot220();
			((CEntityVSlots *)this)->slot181(&vecOrigin, 0, 0);
			((CEntityVSlots *)this)->slot62((float *)&vecOrigin);
			sub_10273070(1);
			F(char, 0x66ce) = 1;
			F(unsigned int, 0x19c) &= ~0x20;
			{
				ScopeTrace traceFlags("CBaseEntity::RemoveSolidFlags", STRINGR(F(const char *, 0x26c)), g_106b8540);
				CColl442 *pColl = (CColl442 *)((char *)this + 0x270);
				pColl->sub_100dc580(pColl->m_usSolidFlags & ~4);
			}
			((CBaseEntity *)this)->sub_1009d1e0();
			((CBaseEntity *)this)->sub_100b3b00();
			F(unsigned int, 0x19c) |= 0x10;
			sub_10273e80(0);
		}
		break;
	case 0x154: {
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		enginesound->vfunc3(&filter, ENTINDEX442(F(int, 0x2e0)), 2, "Character/Boss/Andrei/Summon.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		sub_10289ee0(0x113a);
		sub_1035e3c0("Andrei_Summon-Emitter");
		CBaseEntity *pEnt = g_106eb5d8.sub_100f7d50("npc_maker_fleshpile", (float *)((CEntityVSlots *)this)->slot217(), 1024.0f);
		if (pEnt) {
			CNPCMaker_Fleshpile *pMaker = (CNPCMaker_Fleshpile *)__RTDynamicCast(pEnt, 0, g_10538764, g_1062520c, 0);
			if (pMaker)
				pMaker->vfunc617(0);
		}
		break;
	}
	case 0x155:
		((COutputEvent *)((char *)this + 0x5e24))->sub_100cd660(F(EHANDLE, 0x628c).Get(), (CBaseEntity *)this, 0);
		sub_101cd940((CBaseEntity *)this);
		break;
	case 0x156:
		F(float, 0x66d0) = gpGlobals->curtime;
		break;
	case 0x150:
		break;
	default:
		sub_103c5ac0(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x1035d8b0 size=0x1cc
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VAndreiBlood.h"
#include "ScopeTrace.h"

void CNPC_VAndreiBlood::vfunc444(const void *pTask)
{
	ScopeTrace trace("CNPC_VAndreiBlood::RunTask", g_106b8540);
	switch (*(const int *)pTask) {
	case 0x150:
		sub_1035e5f0();
		return;
	case 0x151:
		if (*(float *)((char *)this + 0x6f8) >= 0.5f)
			*(int *)((char *)this + 0x1fc) = 0;
		if (vfunc251()) {
			sub_10273e80(0);
			return;
		}
		break;
	case 0x152:
		if (m_b66ce) {
			vfunc67();
			m_b66ce = 0;
			*(int *)((char *)this + 0x1fc) = 2;
			m_n66d8 = 0;
			m_b66d4 = 0;
		}
		sub_1035e5f0();
		if (vfunc251()) {
			sub_10273e80(0);
			return;
		}
		break;
	case 0x154:
		if (vfunc251()) {
			m_b66d4 = 1;
			sub_10273e80(0);
			return;
		}
		break;
	case 0x156:
		if (m_b66d4 || m_n66d8 >= m_n66dc || gpGlobals->curtime - m_f66d0 >= 5.0f) {
			sub_10273e80(0);
			return;
		}
		break;
	default:
		sub_103c5f40(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x1035db00 size=0x5
#include "CNPC_VAndreiBlood.h"
bool CNPC_VAndreiBlood::vfunc566(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1035db20 size=0x5a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CNPC_VAndreiBlood.h"
#include "CNPC_VVampireBoss.h"

void CNPC_VAndreiBlood::vfunc431()
{
    g_109f3620[*g_109f3680].name = "CNPC_VAndreiBlood::NPCThink";
    g_109f3620[*g_109f3680].file = g_106b8540;
    g_109f3620[*g_109f3680].line = g_106b8540;
    (*g_109f3680)++;
    ((CNPC_VVampireBoss *)this)->vfunc431();
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1035dba0 size=0x64
#include "CNPC_VAndreiBlood.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_1062b244[];
extern char g_106b8540[];

// TARGET: CNPC_VAndreiBlood::vfunc619
void CNPC_VAndreiBlood::vfunc619(int arg)
{
	g_109f3620[*g_109f3680].a = g_1062b244;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000c27a(arg);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1035dc30 size=0x91
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VAndreiBlood.h"
#include "ScopeTrace.h"

void __fastcall sub_100097af(CAI_BaseNPCTroika *pNPC);	// CAI_BaseNPCTroika::vfunc113 (stub of 0x1028e310), called directly

// TARGET: CNPC_VAndreiBlood::vfunc113
void CNPC_VAndreiBlood::vfunc113()
{
	ScopeTrace trace("CNPC_VAndreiBlood::Activate", g_106b8540);
	char *p = (char *)this;
	sub_100097af(this);
	*(int *)(p + 0x5cc0) = 2;
	*(int *)(p + 0x5cc4) = 2;
	*(const char **)(p + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAndreiBlood.cpp";
	*(int *)(p + 0x1b34) = 0x1cc;
	sub_102ae750(0x6b, 0);
}
// END FUNCTION

// FUNCTION: 0x1035dd00 size=0x9c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VAndreiBlood.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"

void CNPC_VAndreiBlood::sub_1035dd00(inputdata_t *pInput)
{
    ScopeTrace st("CNPC_VAndreiBlood::InputTriggerCombat", g_106b8540);
    *((char *)this + 0x66cc) = 1;
    ((CBaseCombatCharacter *)this)->sub_10332aa0(1, 1, 10);
    vfunc461();
    *(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VAndreiBlood.cpp";
    *(int *)((char *)this + 0x1b34) = 0x1da;
    sub_102ae750(0x15c, 0);
}
// END FUNCTION
