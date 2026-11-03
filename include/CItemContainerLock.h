// CItemContainerLock: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

struct datamap_t;

#include "COutputEvent.h"

class CBaseEntity;
class CBasePlayer;
class CBaseCombatCharacter;
class CItemGKeyring;
struct inputdata_t;

class CItemContainerLock
{
public:
	char pad0[0x8c];
	unsigned int m_hUser8c;	// 0x8c: EHANDLE of the entity that may use the lock
	char pad90[0x780 - 0x90];
	int m_unk780;
	char pad784[0x7dc - 0x784];
	COutputEvent m_OnIntrusion;	// 0x7dc
	char pad7f4[0x80c - 0x7f4];
	unsigned int m_hContainer;	// 0x80c: EHANDLE to the container this lock is attached to
	CItemGKeyring *m_pKeyring;	// 0x810: the keyring item the lock was made for (a static default object when null)
	char m_bGiveKeyring;	// 0x814
	char m_bLocked815;	// 0x815
	unsigned char m_b816;	// 0x816: sent to the player's hud in the keyring message
	char pad817;
	int m_n818;	// 0x818: slot 35 answer while the lock is closed
	int m_n81c;	// 0x81c: slot 35 answer while the keyring check fails
	int m_n820;	// 0x820: slot 35 answer while the keyring check passes

	Vector vfunc193();	// slot 193 "EyePosition": the "camera_position" attachment's origin when the model has one, else slot 192 (WorldSpaceCenter); returned by value
	void vfunc275();
	void vfunc103();	// base vfunc103, then sets bit 0x40 in the flags at +0x19c
	CItemContainerLock *vfunc5(unsigned int flags);	// as in CMomentaryRotButton (transplant)
	void vfunc113();	// slot 113 (plain member): base update, then finds the container named by the string at +0x124 and attaches this lock to it (sub_10209ac0), or warns "attached to non existent container" and removes itself
	void vfunc39(CBasePlayer *pPlayer);	// slot 39: a player who is not accepted by sub_10224910 triggers the "Intrusion" camera record and the output at +0x7dc; else sub_10224950
	int vfunc34(int a);	// slot 34 (plain member): 2 while the attached container answers sub_100eef10, else 3 when sub_10224100 fails, else 2 + (sub_10224910(a) != 0)
	int vfunc35(int a);	// slot 35 (plain member): 0x3a while the attached container answers sub_100eef10, else when the lock is open (sub_10224100) the field at +0x820 / +0x81c by sub_10224910(a), else 0x3b when the container answers sub_100eedd0, else the field at +0x818
	int vfunc33();	// slot 33 (plain member): 1 while the lock is not open (sub_10224100), else 1 when sub_10224910 accepts the user at +0x8c, 300 when it refuses
	bool vfunc32(int a);	// slot 32 (plain member): CanUse-like check of the player a (as an entity pointer): false when the lock is not open (sub_10224100), when the entity at +0x8c is another one, when the open container refuses and the player has flag 0x20 (message 0x4d) or when the lock is closed (+0x815) / the keyring check fails (message 0xf)
	void vfunc42(CBasePlayer *pPlayer);	// slot 42 (plain member): the base slot 42, then the keyring hud message (type 6: +0x816, sub_1020b000, slot 268) to this player only
	bool sub_10224100();	// stub 0x10001d2f
	bool sub_10224910(int a);	// stub 0x1000ffa1
	void sub_10224950(CBaseEntity *pPlayer);	// a player opens the lock: tells the player's hud about the keyring (messages 0x13 / 0x14), state 3, slot 274, and tells the container who it is used by and runs its slot 242
	void sub_102241f0(inputdata_t *pInput);	// input handler: with the lock open (sub_10224100 false) and the container alive: when the container answers sub_100eef10 sends message 0x4d to the activator's player object (+0xa8), else remembers the activator's handle at +0x53c of the container and runs the container's slot 242
	void sub_10224fa0(CBaseCombatCharacter *pPlayer);	// a player picks the lock: records the player (sub_1020b090), tells an equipped lockpick the lock's difficulty (+0x780), then message 0x18 (lock open) or 0x4b (slot 274 first) to the player with the answer of slot 268
	void sub_1020b090(void *ppPlayer, void *pPlayer);	// stub 0x10009fe3 (CBaseVampireSkillEntity::vfunc267), called directly
	void sub_103f4fe0(int nMode);	// slot-333 caller (plain member): calls slot 333 with 7 (nMode > 1), 0xd (nMode 0) or 2 (nMode 1), then 1 and four zeros
public:
	int vfunc36();
	float vfunc37();
	void vfunc41(CBasePlayer *pPlayer);	// slot 41 (plain member): the use/close handler; calls slot 192 for the eye position, the active weapon's sub_10252410(0) / slot 292, the feat-0 value (CVFeatSet::Find(0)->sub_101e56e0), the clamp 100 - (sub_1020b040/sub_1020aea0)*100 into +0x816, and sends the g_1072607c HUD message (+0x816, sub_1020b000, feat value) to pPlayer only
	datamap_t * vfunc82();
	int vfunc117();
	void vfunc273();
	void vfunc274();
};
