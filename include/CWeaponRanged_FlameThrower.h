// CWeaponRanged_FlameThrower (RTTI .?AVCWeaponRanged_FlameThrower@@): flamethrower weapon, derived from CWeaponRanged.
// Only what decompiled code needs is declared.
#pragma once

#include "CWeaponRanged.h"
#include "Vector.h"

class CWeaponRanged_FlameThrower : public CWeaponRanged
{
public:
	CWeaponRanged_FlameThrower();	// the constructor (0x103e2ad0), called by the item_w_flamethrower factory

	virtual CWeaponRanged *vfunc5(unsigned int flags);	// slot 5: its own (0x103e2b90); VC6 has no covariant returns
	virtual void vfunc104();
	int vfunc80();	// slot 80 override: the game's 0x103e2740
	int vfunc81();	// slot 81 override: the game's 0x103e2760
	virtual void vfunc265();	// slot 265: stops the flame sound when the burning list is not empty (the deactivate sample at channel 1 when the flag at +0x1519 is set), clears that flag, then sets the flag byte at +0x1520
	virtual void vfunc326();	// slot 326: with a loaded clip (+0x74c) and the flag at +0x1519 clear plays the activate sample and stamps +0x151c, sets the flag, then sets the byte at +0x1520 and tail calls sub_102382f0
	virtual void vfunc291();	// slot 291: its own (0x103e3240)
	virtual void vfunc319();	// slot 319: its own (0x103e31c0)
	virtual void vfunc320();	// slot 320: its own (0x103e3200)

	bool sub_103e3490(CBaseEntity *pEnt);	// true when pEnt is a valid target (flagged 0x20002080, not unselectable, byte +0x19c bit 6 clear) that is not already in the burning list (8 byte records {handle, time} at +0x1554, count at +0x1560)
	void sub_103e3d80(float *pOrigin, float *pAngles);	// the muzzle attachment origin / angles: re-queries the "muzzle" attachment when the engine's slot 120 value changed since the last call (cached at +0x1534 / +0x1538 / +0x1544), then copies the cached vectors to the non-null outputs
	void sub_103e2d10(const char *pszSample, int channel);	// emits the sample from the weapon (channel) to a CPASAttenuationFilter of the weapon's sound origin
	void sub_103e3c40();	// debug overlay of the 50 flame particles (list at +0x91c, 0x3c bytes each): a coloured box of the particle's fade for type 1, a fading box for the other live types (stub 0x1001...: called by 0x103e32b0 when the debug bit 1 is set)
	float sub_103e3900();	// the debug box size: 0 while the debug object (global 0x10940954) is on, else its float at +0x28 (stub 0x10005425)
	void sub_103e32b0();	// the per-frame update (called by vfunc319 / vfunc320): steps the 50 flame particles by the time since the last call (+0x1524), drops burning records older than half a second, ends the particles of type 2 / 3 / 4 (type 3 hands a burning target to sub_103e3570), clears the owner's flag when no particle is alive, the debug overlay, and every 0.05 s the burn scan sub_103e3930
	CBaseEntity *sub_103e3130();	// stub 0x1000e1d3: the entity of the handle at +0x1530, null when it does not resolve
	void sub_103e3570(CBaseEntity *pEnt, Vector vecPos);	// stub 0x1001020d: sets pEnt alight (damage record, burning list entry at +0x1554)
	void sub_103e3930();	// stub 0x1000397c: the burn scan over the particles' bounds (calls sub_103e3570 for the entities it finds)

	char m_pad0004[0x91c - 4];
	int m_aBuf[0x2ee];	// 0x91c, zeroed by the constructor
	char m_pad14d4[0x1510 - 0x14d4];
	int m_n1510;	// 0x1510
	int m_n1514;
	char m_b1518;
	char m_b1519;
	char m_pad151a[2];
	int m_n151c;
	char m_b1520;
	char m_pad1521[3];
	float m_f1524;	// curtime stamp
	float m_f1528;	// curtime stamp
	int m_n152c;
	int m_n1530;
	int m_nMuzzleStamp;	// 0x1534
	float m_vMuzzleOrigin[3];	// 0x1538
	float m_vMuzzleAngles[3];	// 0x1544
	char m_unk1550;
	char m_pad1551[3];
	int m_n1554;
	int m_n1558;
	int m_n155c;
	int m_n1560;
	int m_n1564;
public:
	virtual void vfunc330();
	virtual const Vector &vfunc331();
	virtual void vfunc332();
	virtual void vfunc333();
	virtual void vfunc334();
	virtual void vfunc335();
	virtual void vfunc336();
	virtual void vfunc337();
	virtual void vfunc338();
	virtual void vfunc339();
	virtual void vfunc340();
	virtual void vfunc341();
	virtual void vfunc342();
	virtual void vfunc343();
	virtual void vfunc344();
	virtual void vfunc345();
	virtual void vfunc346();
	virtual void vfunc347();
	virtual void vfunc348();
	virtual void vfunc349();
	virtual void vfunc350();
	virtual void vfunc351();
	virtual void vfunc352();
	virtual void vfunc353();
	virtual void vfunc354();
	virtual void vfunc355();
	virtual void vfunc356();
	virtual void vfunc357();
	virtual void vfunc358();
	virtual void vfunc359();
	virtual void vfunc360();
	virtual void vfunc361();
	virtual int vfunc362();
	virtual int vfunc363();
};
