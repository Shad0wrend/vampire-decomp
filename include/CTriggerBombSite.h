// CTriggerBombSite: declared by pcdecomp transplant for 0x10216f70 from CBaseButton (0x100c8760);
// only what matched code needs, as plain members (no vtable pointer is declared, so offsets start at 0).
#pragma once

struct datamap_t;

class CBaseEntity;
class CBasePlayer;

struct CBombState	// four bytes passed by value, the first one is the state
{
	char m_c;
	char m_pad[3];
};

class CTriggerBombSite
{
public:
	CTriggerBombSite *vfunc5(unsigned int flags);
	void vfunc39(CBaseEntity *pOther);	// slot 39: CBaseEntity::vfunc39(pOther) (direct call), stores the time of the global at 0x1070b228 (+0xc, as a dword) at +0x598, then sub_1015ef40(pOther) and CAI_BaseNPCTroika::sub_10181580(1) on pOther
	void sub_1000cb8a();
	bool vfunc32(void *pOther);	// slot 32: false when disabled (+0x55c), or when the player object at pOther+0xa8 does not point back to this entity (handle at +0x1cb8) or this entity's own handle at +0x8c resolves to another object
	int vfunc35(CBasePlayer *pPlayer);	// slot 35 (plain member): 0x11 when the player's bomb site handle (+0x1cb8) resolves to this entity, else 0
	void vfunc41(CBombState state);	// slot 41: the bomb progress (0..100, a sixth of the time since +0x598 in percent) is stored at +0x59c; a full bar runs sub_102116c0 first, then the update sub_10211550 with 0x62 (0x21 while still running)
	void vfunc42(CBasePlayer *pPlayer);	// slot 42 (plain member): CBaseEntity::vfunc42, clears the player's byte at +0x19f7 (sub_1015ef60) and flag bit 1 (sub_101815b0(1)), then the update sub_10211550 for the player with 0x22 (0x62 once the bar is full)
	void sub_100a5030(CBasePlayer *pPlayer);	// CBaseEntity::vfunc42 (stub 0x10010e60), called directly
	void vfunc174(void *pOther);	// slot 174 (StartTouch): trigger list at +0x568 handles it, then stores this entity's handle into the player's bomb site handle (+0x1cb8)
	void vfunc176(void *pOther);	// slot 176 (EndTouch): lets the toucher's trigger list at +0x568 handle it, then clears the player's bomb site handle (+0x1cb8) when it resolves to this entity
	void sub_10211870(void *pSender, void *pParam);	// called through the stub at 0x1000d913 with the owner object and the argument by CUnknown103f6a20::sub_103f6a20
	void sub_102116c0(CBombState state);	// stub 0x10005385
	void sub_10211550(CBombState state, CBombState newState);	// stub 0x1000fbe6

	char m_pad0000[0x8c];
	unsigned int m_hOwner008c;	// 0x008c
	char m_pad0090[0x55c - 0x90];
	bool m_bDisabled;	// 0x055c
	char m_pad055d[0x598 - 0x55d];
	float m_flStartTime;	// 0x0598
	unsigned char m_nProgress;	// 0x059c
public:
	int vfunc33();
	int vfunc36();
	typedef datamap_t *Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
	void vfunc103();	// as in CNPC_VBach (transplant)
};
