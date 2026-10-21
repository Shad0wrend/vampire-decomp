// CItemContainerLock: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

class CBaseEntity;
class CItemGKeyring;
struct inputdata_t;

class CItemContainerLock
{
public:
	char pad0[0x780];
	int m_unk780;
	char pad784[0x80c - 0x784];
	unsigned int m_hContainer;	// 0x80c: EHANDLE to the container this lock is attached to
	CItemGKeyring *m_pKeyring;	// 0x810: the keyring item the lock was made for (a static default object when null)
	char m_bGiveKeyring;	// 0x814

	void vfunc275();
	void vfunc103();	// base vfunc103, then sets bit 0x40 in the flags at +0x19c
	CItemContainerLock *vfunc5(unsigned int flags);	// as in CMomentaryRotButton (transplant)
	void vfunc113();	// slot 113 (plain member): base update, then finds the container named by the string at +0x124 and attaches this lock to it (sub_10209ac0), or warns "attached to non existent container" and removes itself
	int vfunc34(int a);	// slot 34 (plain member): 2 while the attached container answers sub_100eef10, else 3 when sub_10224100 fails, else 2 + (sub_10224910(a) != 0)
	bool sub_10224100();	// stub 0x10001d2f
	bool sub_10224910(int a);	// stub 0x1000ffa1
	void sub_10224950(CBaseEntity *pPlayer);	// a player opens the lock: tells the player's hud about the keyring (messages 0x13 / 0x14), state 3, slot 274, and tells the container who it is used by and runs its slot 242
	void sub_102241f0(inputdata_t *pInput);	// input handler: with the lock open (sub_10224100 false) and the container alive: when the container answers sub_100eef10 sends message 0x4d to the activator's player object (+0xa8), else remembers the activator's handle at +0x53c of the container and runs the container's slot 242
};
