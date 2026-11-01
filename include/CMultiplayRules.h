// CMultiplayRules: the multiplayer rule set (primary vtable 0x1046b934).
#pragma once

#include "CGameRules.h"

struct CMPDamageInfo	// the damage info handed to PlayerKilled / DeathNotice: the inflictor at +0x28, the attacker at +0x2c
{
	char m_pad0000[0x28];
	CBaseEntity *m_pInflictor;	// 0x28
	CBaseEntity *m_pAttacker;	// 0x2c
};

class CMultiplayRules : public CGameRules
{
public:
	virtual CGameRules *vfunc0(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc16();	// "CMultiplayRules::Think"-like: the base think, then: with the flag byte at 0x1070ba2c set, once the time at +0x8 has passed (and the byte at +0xc is set or 120 more seconds passed) slot 79; otherwise the time limit (60 times the value of the cvar at 0x1070ae7c) or the frag limit (the cvar at 0x1070aa8c, compared with the frags at +0x22bc of every player) ends the game through slot 80
	virtual char vfunc19(CBaseEntity *pPlayer, CBaseEntity *pWeapon);	// "FShouldSwitchWeapon": the player can switch to the weapon (CanSwitchTo, team test) and it outweighs the active weapon (slot 345), true without an active weapon
	virtual void vfunc45(CBaseEntity *pVictim, CMPDamageInfo *pInfo);	// "DeathNotice" (CHalfLifeMultiplay::DeathNotice): the user message 0x10726034 (killer id, victim index, weapon name) to everybody and a log line
	virtual CBaseEntity *vfunc20(CBaseEntity *pPlayer, CBaseEntity *pCurrentWeapon);	// "GetNextBestWeapon": over the player's 0xe0 weapon slots, the first owned weapon that has the same weight as pCurrentWeapon and is usable, else the usable one with the highest weight above the weight of the best so far; null when pCurrentWeapon cannot be switched from
	virtual void vfunc27(void *pPlayer);	// "ClientPutInServer": announces "<name> has joined the game" (the name or "unconnected") to everybody, logs "<name><userid>" has entered the game, slot 29(pPlayer), sub_101427f0(the player's edict index) and, in a multiplayer game, sends the user message 0x1a to the player alone
	virtual void vfunc28(void *pEdict);	// "ClientDisconnected": the player behind the edict fires game_playerleave, logs "<name><userid>" disconnected and is removed (slot 442(1)); clears the byte at +0x22dc
	virtual void vfunc29(void *pPlayer);	// sends the user message of the global at 0x10726038 to the player alone: a byte 0, then the message end
	virtual float vfunc30(int a);
	virtual void vfunc35(CBaseEntity *pPlayer);	// "EquipPlayer": every game_player_equip entity equips the player (slot 175); without one gives weapon_crowbar, weapon_9mmhandgun and 0x44 SmallRound
	virtual void vfunc36(void *pOwner);	// clears the dwords +0x208c, +0x2088 and +0x2090 of pOwner when the flag byte at 0x1070ba2c is set, and sets this's byte at +0xc when one of the bits 0x440827 of +0x208c was set
	virtual float vfunc38(int a);
	virtual int vfunc43(int a, int b);
	virtual void vfunc44(CBaseEntity *pVictim, CMPDamageInfo *pInfo);	// "PlayerKilled": DeathNotice (slot 45), counts the death and fires game_playerdie; credits the scorer (sub_10141b10) with the points of slot 43 and fires game_playerkill, or takes a point off a suicide
	virtual char vfunc47(CBaseEntity *pPlayer, CBaseEntity *pItem);	// "CanHavePlayerItem": in a running multiplayer game with the item limit set, refuses an item (without the flag bit 3 of its slot 346) the player already owns in one of its 0xe0 weapon slots; everything else goes to CGameRules
	virtual float vfunc49(CBaseEntity *pPlayer);
	virtual float vfunc50(CBaseEntity *pPlayer);	// slot 50: the weapon respawn delay-like value of slot 49 for a player flagged (slot 346 bit 3) whose entity count is within 100 of the engine's maximum, else 0.0f
	virtual Vector vfunc51(CBaseEntity *pEnt);
	virtual int vfunc61(int index);
	virtual int vfunc62(int index);
	virtual const char *vfunc63(int index);
	virtual bool vfunc73(CBaseEntity *pPlayer);	// slot 73: false when the gate convar at 0x1070aec4 is flagged or zero; true for a player the sub_101664d0 test accepts (its slot 94 / 0x178 answer is 10), else true only when the horizontal speed (the velocity at +0x3d4) exceeds 220.0f
	virtual void vfunc75();
	virtual void vfunc79();	// "CHalfLifeMultiplay::ChangeLevel": reads the map cycle file named by the cvar at 0x1070aad0 and changes to the map after the current one (the first valid one when the current map is last or missing), sets the flag byte at 0x1070ba2c
	virtual void vfunc80();	// once (flag byte at 0x1070ba2c): sends the user message 0x1a reliably to everybody, then sets the time at +0x8 to the current time (0x1070b228 + 0xc) plus a constant, the flag byte and clears the byte at +0xc

	int m_n04;	// 0x04
	int m_n08;	// 0x08
	char m_b0c;	// 0x0c

	CMultiplayRules *sub_10140f60();	// "CMultiplayRules::CMultiplayRules" body: base constructor, vtable, sub_1000fcbd(), then runs the dedicated / listen server config file (exec <cvar string>) when its cvar is non-empty; returns this
	void sub_101291f0();	// CGameRules constructor body (stub 0x10011d79)
	void sub_1000fcbd();	// CMultiplayRules::vfunc15, called directly
	CBaseEntity *sub_10141b10(CBaseEntity *pAttacker, CBaseEntity *pInflictor);	// the entity that scores for a kill: the attacker when it is a player (slot 138 == 1), else its scorer interface's answer, else the inflictor's (stub 0x100073b0)
	void sub_10128f50();	// CGameRules::vfunc16 (stub 0x10013976), called directly
	void sub_101427f0(int nEdict);	// stub 0x1000d2d8: tells the rules about the new player's edict index
public:
    virtual char vfunc74();
public:
    virtual bool vfunc72();
    virtual bool vfunc21();
    virtual bool vfunc22();
    virtual void vfunc54(int, int, int);
    virtual bool vfunc18();
    virtual bool vfunc31(int, int);
    virtual bool vfunc37(int);
    virtual bool vfunc17(int);
    virtual int vfunc64(int, int);
    virtual float vfunc59();
    virtual float vfunc60();
    virtual bool vfunc26(int, int, int, int);
};
