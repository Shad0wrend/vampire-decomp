// CBasePlayer: the player entity.
// Barely recovered yet: only the members decompiled code needs are named, the
// rest is padding that keeps their offsets. The vtable is modelled as placeholder
// slots up to slot 468 (the ones the code calls are typed).
#pragma once

class CBaseEntity;
class CBasePlayer;
struct inputdata_t;

struct CBasePlayerHandleVec	// a CUtlVector<EHANDLE>
{
	unsigned int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_Size;
	unsigned int *m_pElements;
};

struct CBasePlayerSub270	// small polymorphic object embedded at +0x270
{
	virtual void v0();
	virtual int vfunc1();
	virtual int vfunc2();
};

#define CBP_V1(p) virtual void p();
#define CBP_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define CBP_V100(p) CBP_V10(p##0) CBP_V10(p##1) CBP_V10(p##2) CBP_V10(p##3) CBP_V10(p##4) \
	CBP_V10(p##5) CBP_V10(p##6) CBP_V10(p##7) CBP_V10(p##8) CBP_V10(p##9)

struct CBasePlayerVehicle	// the vehicle object at +0x20fc; slots 1, 2, 4, 5 and 10 are typed
{
	virtual void vv0();
	virtual CBaseEntity *vfunc1();	// the vehicle's entity
	virtual int vfunc2(int a);	// slot 2: whether the vehicle knows the given role (0 = not yet)
	virtual void vv3();
	virtual void vfunc4(int role, CBasePlayer *pPlayer);	// slot 4: hands the role to the vehicle for the player
	virtual char vfunc5(int role);	// slot 5: whether the vehicle wants the player to be controlled by it for the role
	virtual void vv6(); virtual void vv7(); virtual void vv8(); virtual void vv9();
	virtual void vfunc10(CBasePlayer *pPlayer);
};

struct CBasePlayerPart	// a view object (pointer at +0x2104 / +0x2108); slots 21 and 35 are typed
{
	CBP_V10(qa) CBP_V10(qb) CBP_V1(qc)
	virtual void vfunc21(int a);
	CBP_V10(qd) CBP_V1(qe0) CBP_V1(qe1) CBP_V1(qe2)
	virtual void vfunc35(int a);
};

struct CBasePlayerPartOwner	// the object at +0x2100; only slot 5 is typed
{
	CBP_V1(pa0) CBP_V1(pa1) CBP_V1(pa2) CBP_V1(pa3) CBP_V1(pa4)
	virtual void vfunc5(CBasePlayerPart *pPart);
};

class CBasePlayer
{
public:
	// slots 0..63
	CBP_V10(sa0) CBP_V10(sa1) CBP_V10(sa2) CBP_V10(sa3) CBP_V10(sa4) CBP_V10(sa5) CBP_V1(sa6) CBP_V1(sa7) CBP_V1(sa8) CBP_V1(sa9)
	virtual void vfunc64(float *pVec);
	// slots 65..220
	CBP_V100(sb) CBP_V10(sc0) CBP_V10(sc1) CBP_V10(sc2) CBP_V10(sc3) CBP_V10(sc4) CBP_V1(sd0) CBP_V1(sd1)
	virtual int vfunc217(const void *pName, int a);
	CBP_V1(sd3) CBP_V1(sd4) CBP_V1(sd5)
	virtual float *vfunc221();
	// slots 222..402
	CBP_V100(se) CBP_V10(sf0) CBP_V10(sf1) CBP_V10(sf2) CBP_V10(sf3) CBP_V10(sf4) CBP_V10(sf5) CBP_V10(sf6) CBP_V10(sf7) CBP_V1(sg0)
	virtual void vfunc403();
	CBP_V1(sh0) CBP_V1(sh1) CBP_V1(sh2)
	virtual void vfunc407();
	virtual void vfunc408();
	// slots 409..447
	CBP_V1(si0a) CBP_V1(si0b) CBP_V1(si0c)
	virtual bool vfunc412();
	CBP_V1(si0e) CBP_V1(si0f) CBP_V1(si0g) CBP_V1(si0h) CBP_V1(si0i) CBP_V1(si0j)
	CBP_V10(si1) CBP_V10(si2) CBP_V1(sj0) CBP_V1(sj1) CBP_V1(sj2) CBP_V1(sj3) CBP_V1(sj4) CBP_V1(sj5) CBP_V1(sj6) CBP_V1(sj7) CBP_V1(sj8)
	virtual void vfunc448();
	// slots 449..467
	CBP_V1(sk0a)
	virtual void vfunc450();
	CBP_V1(sk0c)
	virtual bool vfunc452(const char *pszKey);	// slot 452 key handler: "vehicleRole" with two console arguments hands the role number to the vehicle at +0x20fc (leaving the vehicle first when it does not know the role yet)
	CBP_V1(sk0e) CBP_V1(sk0f) CBP_V1(sk0g) CBP_V1(sk0h) CBP_V1(sk0i)
	virtual void vfunc458();	// slot 458: if the entity at +0x1538 is not set up, lets the vehicle at +0x20fc handle it, else picks the weapon call by the float at +0x1564
	CBP_V1(sl0) CBP_V1(sl1) CBP_V1(sl2) CBP_V1(sl3) CBP_V1(sl4) CBP_V1(sl5) CBP_V1(sl6) CBP_V1(sl7) CBP_V1(sl8)
	virtual void vfunc468();	// registers the "player_stand" / "player_crouch" collision hulls (16x16x36 and -16,-16,0) for the sub-object at +0x270

	char m_pad0004[0x26c];	// 0x0004 .. 0x026F
	CBasePlayerSub270 m_sub270;	// 0x0270
	char m_pad0274[0x6c];	// 0x0274 .. 0x02DF
	int m_n02E0;
	char m_pad02E4[0x1254];	// 0x02E4 .. 0x1537
	unsigned int m_h1538;	// entity handle
	int m_n153C;
	char m_pad1540[0x24];	// 0x1540 .. 0x1563
	float m_f1564;
	char m_pad1568[0x48e];	// 0x1568 .. 0x19F5
	bool m_b19F6;
	char m_pad19F7[0x2E1];	// 0x19F7 .. 0x1CD7
	unsigned int m_nCriminalLevelEnc;	// 0x1CD8, scrambled by the xor/and/add mask chain
	char m_pad1CDC[0x128];	// 0x1CDC .. 0x1E03
	unsigned int m_hEnt1E04;	// entity handle
	int m_n1E08;
	int m_n1E0C;
	char m_pad1E10[0x64];	// 0x1E10 .. 0x1E73
	unsigned int m_flags1E74;
	char m_pad1E78[0x230];	// 0x1E78 .. 0x20A7
	char m_b20A8;
	char m_pad20A9[0x4b];	// 0x20A9 .. 0x20F3
	char m_b20F4;	// vehicle active flag
	char m_pad20F5[3];	// 0x20F5 .. 0x20F7
	unsigned int m_hVehicle;	// 0x20F8: handle of the vehicle's entity (-1 when none)
	CBasePlayerVehicle *m_pVehicle;	// 0x20FC
	CBasePlayerPartOwner *m_pPartOwner;	// 0x2100
	CBasePlayerPart *m_pPart2104;	// 0x2104
	CBasePlayerPart *m_pPart2108;	// 0x2108
	int m_nPartMode;	// 0x210C
	char m_pad2110[0x198];	// 0x2110 .. 0x22A7
	float m_f22A8;
	float m_f22AC;
	float m_f22B0;
	char m_pad22B4[0x23bc - 0x22b4];	// 0x22B4 .. 0x23BB
	CBasePlayerHandleVec m_SimulationList;	// 0x23BC (count at +0x23C8)

	void sub_10177120();
	void sub_101835e0();	// "CBasePlayer::Inventory_CreateKey": scope trace (entity name), then allocates the 5-dword inventory object at +0x245c when it is not there yet
	int sub_1017ddd0();	// the decoded value at +0x1cd8, or a convar override
	int sub_10175290();	// slot 444: refreshes the counter at +0x1e08, else the field at +0x45c of the entity at +0x1e04
	CBaseEntity *sub_1015dc60();	// slot 167 override: resolves the entity handle at +0x1c60 (null when stale)
	bool sub_10168e10();	// slot 361 override: true when the entity handle at +0xfe8 does not resolve
	bool sub_1015ff40();	// slot 411: true when the byte at +0x1edc is set, or the float at +0x19b0 (stamped with curtime while slot 158 of the entity at +0x1c58 is true) is positive and less than 5 seconds old
	CBasePlayer *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100017d5();	// as in CPhysForce (transplant)
	float *vfunc367(float *out);	// as in CBaseEntity (transplant)
	int sub_101647a0(int act);	// NPC_TranslateActivity: scope-traced, 0x16 -> 9, 0x17 -> 0x13
	void sub_1017c1d0(CBaseEntity *pEnt);	// "CBasePlayer::RemoveFromPlayerSimulationList": removes the entity from the handle vector at +0x23bc (count at +0x23c8) by shifting the tail down
	CBaseEntity *sub_10081890();	// provisional, like sub_1015dc60 (transplant)
	CBaseEntity *sub_100dead0();	// provisional, like sub_1015dc60 (transplant)
	CBaseEntity *sub_101618a0();	// provisional, like sub_1015dc60 (transplant)
	CBaseEntity *sub_10161ed0();	// provisional, like sub_1015dc60 (transplant)
	CBaseEntity *sub_10270ae0();	// provisional, like sub_1015dc60 (transplant)
	CBaseEntity *sub_102a9960();	// provisional, like sub_1015dc60 (transplant)
	CBaseEntity *sub_1039ede0();	// provisional, like sub_1015dc60 (transplant)
	void sub_1016f0f0(const char *name, const void *data, int unused);	// "CBasePlayer::StoreGlobalEmailFlags": scope trace (entity name), finds the 0x240 byte record at [+0x1e28] (count at +0x1e34) whose name matches (Q_strncmp over the longer length) and copies 0x200 bytes to record+0x40, else DevWarning("Could not save email for terminal: %s\n"); the third stack argument is not used
	void sub_1017e150(int level, float time, const char *pszReason);	// "CBasePlayer::SetCriminalLevel"-like setter of the scrambled value at +0x1cd8 (called through the stub at 0x1000fa33)
	void sub_1017e560(inputdata_t *pData);	// input handler: the input's integer (0 unless its type is 4) clamped to 0..5, passed to sub_1017e150(level, -1.0f, "Input")
	void sub_1017df50(int level, float time, const char *pszReason);	// sibling setter of another scrambled value (called through the stub at 0x10004237)
	void sub_1017e5f0(inputdata_t *pData);	// input handler like sub_1017e560, passing the clamped integer to sub_1017df50
	void sub_1017cef0(CBaseEntity *pEnt);	// "CBasePlayer::SetUseEntity"-like: remembers the engine index (+0x1ec4) and handle (+0x19b4) of pEnt (cleared when null) and releases the previous use entity when it is different and flagged
	CBaseEntity *sub_1000306c();	// the current use entity (CBasePlayer::sub_1017cf90 stub)
	void vfunc149(int a, int b);	// forwards (a, b) to slot 148 of every other connected player the game rules (slot 64) relate to this one with the value 1
	void sub_100ac4e0(void *pFunc, int a, int b);	// sets a think function and delay (called through the stub at 0x10007fe5)
	void sub_1032bdf0();	// CBaseCombatCharacter::vfunc403, called directly
	void sub_1017ec40();	// per-frame timer: when curtime reached the float at +0x1cf8, either postpones it by a constant (flag byte 0x106c8a41) or resets it to FLT_MAX and, when the entity handle at +0x1d00 resolves, calls sub_1017ee80(dword at +0x1cfc, the dword at +0x98 of that entity, &+0x1d04)
	void sub_1017ee80(int a, int b, void *pData);	// called through the stub at 0x10006055
	void sub_1016bd50();	// resets the model related state: sub_101618e0(1, 1), -1 at +0x1ebc, 0 at +0x168 / +0x16c / +0x1edc, curtime at +0x1c68, then makes sure the model name buffer at +0x23d4 matches the model (slot 105 otherwise)
	void sub_101618e0(int a, int b);	// worker (stub 0x10012503)
	void sub_1017b6f0(int a, const char *pszName, int b, const char *pszName2);	// registers a hull pair (called through the stub at 0x100105c8)
	void sub_1017c830();	// matches the player's saved quest records (0x40 bytes each at the pointer +0x1d68, count +0x1d74) with the global quest journal by name: after resetting the journal's records (sub_10221270), copies the record's dwords at +0x34 / +0x38 into the matching quest (+0x10 / +0xc) and stores the quest index at +0x30
	void sub_101713c0();	// leaves the vehicle at +0x20fc (called by vfunc452): asks the vehicle for the driver slot and exit position, teleports the player there through the virtual slots, clears the flag bit 0 at +0x1e74 and the vehicle fields at +0x20f4 / +0x20f8 / +0x20fc
	void sub_101712d0(CBasePlayerVehicle *pVehicle, int role);	// enters the vehicle: asks it (slot 2) whether it knows the role, remembers the vehicle and its entity handle (+0x20fc / +0x20f8), sets the active flag (+0x20f4) and flag bit 0 at +0x1e74, lets the vehicle take control (slot 5, else slot 66), zeroes the velocity (sub_100b2e30), sets move type 9 / collision group 8, then notifies the vehicle (slot 4) and slot 454
	void *sub_1032e7b0();	// CBaseCombatCharacter::GetActiveWeapon (stub 0x10007e19), called directly
	void sub_1017bf10(int mode);	// switches the active view part: mode 0 / 1 swap the parts at +0x2104 / +0x2108 (name from slot 217, show / hide through their slots 35 / 21, handed to the part owner at +0x2100 and VPhysicsSwapObject), mode 2 hides both
};
