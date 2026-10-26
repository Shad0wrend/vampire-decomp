// CGameRules: base of the game's rule sets.
// Only the vtable slots that decompiled code needs are given their real names,
// the others are placeholders that keep the slot indices of the game's primary
// vtable.
#pragma once

#include "Vector.h"

class CBaseEntity;
class CBaseCombatCharacter;
struct CMPDamageInfo;

class CGameRules
{
public:
	virtual CGameRules *vfunc0(unsigned int flags);
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual void vfunc14();
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc18();
	virtual char vfunc19(CBaseEntity *pPlayer, CBaseEntity *pWeapon);	// "FShouldSwitchWeapon": whether the player should switch to pWeapon on pickup
	virtual CBaseEntity *vfunc20(CBaseEntity *pPlayer, CBaseEntity *pCurrentWeapon);	// "GetNextBestWeapon"
	virtual void vfunc21();
	virtual void vfunc22();
	virtual void vfunc23();
	virtual void vfunc24();
	virtual void vfunc25();
	virtual void vfunc26();
	virtual void vfunc27();
	virtual void vfunc28(void *pEdict);	// "ClientDisconnected": the edict of the leaving player
	virtual void vfunc29(void *pPlayer);	// sends a user message (no payload byte) to the player
	virtual float vfunc30(int a);
	virtual void vfunc31();
	virtual void vfunc32();
	virtual void vfunc33();
	virtual void vfunc34();
	virtual void vfunc35(CBaseEntity *pPlayer);	// "EquipPlayer"-like: gives the player its starting items
	virtual void vfunc36();
	virtual void vfunc37();
	virtual float vfunc38(int a);
	virtual void vfunc39();
	virtual void vfunc40();
	virtual void vfunc41();
	virtual void vfunc42();
	virtual int vfunc43(int a, int b);
	virtual void vfunc44(CBaseEntity *pVictim, CMPDamageInfo *pInfo);	// "PlayerKilled"
	virtual void vfunc45(CBaseEntity *pVictim, CMPDamageInfo *pInfo);	// "DeathNotice"
	virtual void vfunc46();
	virtual char vfunc47(CBaseEntity *pPlayer, CBaseEntity *pItem);	// "CanHavePlayerItem"
	virtual int vfunc48(int index);
	virtual float vfunc49(int a);
	virtual float vfunc50(int a);
	virtual Vector vfunc51(CBaseEntity *pEnt);	// returns a copy of the entity's origin
	virtual void vfunc52(CBaseCombatCharacter *pChar, int nIndex);	// slot 52: the object of the index (slot 55) gives the value (its sub_1000df3f) that is handed to slot 53 with the character
	virtual char vfunc53(CBaseCombatCharacter *pChar, int nIndex);	// the character's count of the index (sub_103346c0) is below the limit of the index (slot 55's object, sub_1000a37b)
	virtual void vfunc54();
	virtual void *vfunc55(int a);	// slot 55: the object of the index a (its sub_1000df3f gives the limit, see vfunc52)
	virtual void vfunc56();
	virtual void vfunc57();
	virtual void vfunc58();
	virtual void vfunc59();
	virtual void vfunc60();
	virtual int vfunc61(int index);
	virtual int vfunc62(int index);
	virtual const char *vfunc63(int index);
	virtual void vfunc64();
	virtual void vfunc65();
	virtual void vfunc66();
	virtual const char *vfunc67(int index);
	virtual void vfunc68();
	virtual void vfunc69();
	virtual const char *vfunc70(int index);
	virtual void vfunc71();
	virtual void vfunc72();
	virtual bool vfunc73(CBaseEntity *pPlayer);	// slot 73 (multiplayer rules: whether the player's movement counts, see CMultiplayRules)
	virtual char vfunc74();	// asked by Spawn of the NPCs: false removes the NPC again (the rule set does not allow it)
	virtual void vfunc75();
	virtual void vfunc76();
	virtual void vfunc77();
	virtual float vfunc78(int a, int b, int c, int d, int e);	// 0x10129700: passes the five arguments on to sub_10009863 and answers the constant at 0x104454c0
	virtual void vfunc79();
	virtual void vfunc80();
	void sub_1000d189();	// as in CDataObjectAccessSystem (transplant)
};
