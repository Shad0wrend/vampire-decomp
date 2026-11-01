// CGameRules: base of the game's rule sets.
// Only the vtable slots that decompiled code needs are given their real names,
// the others are placeholders that keep the slot indices of the game's primary
// vtable.
#pragma once

#include "Vector.h"

class CBaseEntity;
class CBaseCombatCharacter;
struct CMPDamageInfo;
struct CGameTrace;

// The 0x484 byte object that CGameRules creates in its slot 56 (its class is not known yet).
class CGameRulesSub
{
public:
	CGameRulesSub();
	char m_pad0000[0x484];
};

class CGameRules
{
public:
	CGameRules();
	virtual CGameRules *vfunc0(unsigned int flags);
	virtual int vfunc1();
	virtual void vfunc2();
	virtual void vfunc3(int);
	virtual void vfunc4(int);
	virtual void vfunc5(int, int);
	virtual void vfunc6(int, int, int);
	virtual void vfunc7(int);
	virtual void vfunc8(int);
	virtual void vfunc9(int, int);
	virtual void vfunc10(int, int);
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual void vfunc14();
	virtual void vfunc15();
	virtual void vfunc16();
	virtual bool vfunc17(int);
	virtual bool vfunc18();
	virtual char vfunc19(CBaseEntity *pPlayer, CBaseEntity *pWeapon);	// "FShouldSwitchWeapon": whether the player should switch to pWeapon on pickup
	virtual CBaseEntity *vfunc20(CBaseEntity *pPlayer, CBaseEntity *pCurrentWeapon);	// "GetNextBestWeapon"
	virtual bool vfunc21();
	virtual bool vfunc22();
	virtual bool vfunc23();
	virtual bool vfunc24();
	virtual int vfunc25();
	virtual bool vfunc26(int, int, int, int);
	virtual void vfunc27();
	virtual void vfunc28(void *pEdict);	// "ClientDisconnected": the edict of the leaving player
	virtual void vfunc29(void *pPlayer);	// sends a user message (no payload byte) to the player
	virtual float vfunc30(int a);
	virtual bool vfunc31(int, int);
	virtual bool vfunc32(int, int);
	virtual void vfunc33(void *pInfo, void *a, float flDamage, int b, int c);
	virtual bool vfunc34(int);
	virtual void vfunc35(CBaseEntity *pPlayer);	// "EquipPlayer"-like: gives the player its starting items
	virtual void vfunc36(CBaseEntity *pPlayer);
	virtual bool vfunc37(int);
	virtual float vfunc38(int a);
	virtual CBaseEntity *vfunc39(CBaseEntity *pPlayer);	// \"GetPlayerSpawnSpot\": puts the player on the spawn spot it selects (the origin one unit up, the spot's angles; the middle of the world model's bounds and zero angles without a spot), clears its velocity and the two vectors at +0x1efc / +0x1f08, sets +0x207c to 1 and returns the spot
	virtual bool vfunc40();
	virtual bool vfunc41(const char *pcmd, CBaseEntity *pPlayer);	// "ClientCommand" (0x10128f10): false without a player object (+0xa8); else the voice manager (global 0x10751750, sub_10232400) handles the command (CVoiceGameMgr::sub_102325e0(pPlayer, pcmd)); true when it did
	virtual void vfunc42(int, int);
	virtual int vfunc43(int a, int b);
	virtual void vfunc44(CBaseEntity *pVictim, CMPDamageInfo *pInfo);	// "PlayerKilled"
	virtual void vfunc45(CBaseEntity *pVictim, CMPDamageInfo *pInfo);	// "DeathNotice"
	virtual int vfunc46(int);
	virtual char vfunc47(CBaseEntity *pPlayer, CBaseEntity *pItem);	// "CanHavePlayerItem"
	virtual int vfunc48(int index);
	virtual float vfunc49(int a);
	virtual float vfunc50(int a);
	virtual Vector vfunc51(CBaseEntity *pEnt);	// returns a copy of the entity's origin
	virtual void vfunc52(CBaseCombatCharacter *pChar, int nIndex);	// slot 52: the object of the index (slot 55) gives the value (its sub_1000df3f) that is handed to slot 53 with the character
	virtual char vfunc53(CBaseCombatCharacter *pChar, int nIndex);	// the character's count of the index (sub_103346c0) is below the limit of the index (slot 55's object, sub_1000a37b)
	virtual void vfunc54(int, int, int);
	virtual void *vfunc55(int a);	// slot 55: the object of the index a (its sub_1000df3f gives the limit, see vfunc52)
	virtual void vfunc56();	// creates the 0x484 byte object at +4 (CGameRulesSub), null when the allocation fails
	virtual void vfunc57();
	virtual int vfunc58(int);
	virtual float vfunc59();
	virtual float vfunc60();
	virtual int vfunc61(int index);
	virtual int vfunc62(int index);
	virtual const char *vfunc63(int index);
	virtual int vfunc64(int, int);
	virtual void vfunc65();
	virtual int vfunc66(int);
	virtual const char *vfunc67(int index);
	virtual bool vfunc68(int);
	virtual void vfunc69(int, int, int, int);
	virtual const char *vfunc70(int index);
	virtual void vfunc71(int);
	virtual bool vfunc72();
	virtual bool vfunc73(CBaseEntity *pPlayer);	// slot 73 (multiplayer rules: whether the player's movement counts, see CMultiplayRules)
	virtual char vfunc74();	// asked by Spawn of the NPCs: false removes the NPC again (the rule set does not allow it)
	virtual void vfunc75();
	virtual float vfunc76(const Vector &vecStart, const Vector &vecEnd, const Vector &vecMins, const Vector &vecMaxs, unsigned int fMask, CBaseEntity *pPassEnt, int collisionGroup, int unused, CGameTrace *pTrace);	// slot 76: a hull trace from vecStart to vecEnd through the engine trace object (the trace filter ignores pPassEnt); when the debug switch of the global at 0x10738964 is on draws the traced line; always answers 1.0f; this is unused
	virtual char vfunc77(void *pPassEnt, int collisionGroup);	// slot 77: whether the collision group of a trace (the pass entity) collides with the given group
	virtual float vfunc78(int a, int b, int c, int d, int e);	// 0x10129700: passes the five arguments on to sub_10009863 and answers the constant at 0x104454c0
	virtual void vfunc79();
	virtual void vfunc80();
	void sub_1000d189();	// as in CDataObjectAccessSystem (transplant)
	void *sub_10128400();	// the object at +4, created by vfunc56 when it is still null
};
