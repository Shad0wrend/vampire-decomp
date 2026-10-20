// CBasePlayer: the player entity.
// Barely recovered yet: only the members decompiled code needs are named, the
// rest is padding that keeps their offsets. The vtable is modelled as placeholder
// slots up to slot 448 (the ones the code calls are typed).
#pragma once

class CBaseEntity;
struct inputdata_t;

struct CBasePlayerHandleVec	// a CUtlVector<EHANDLE>
{
	unsigned int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_Size;
	unsigned int *m_pElements;
};

#define CBP_V1(p) virtual void p();
#define CBP_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define CBP_V100(p) CBP_V10(p##0) CBP_V10(p##1) CBP_V10(p##2) CBP_V10(p##3) CBP_V10(p##4) \
	CBP_V10(p##5) CBP_V10(p##6) CBP_V10(p##7) CBP_V10(p##8) CBP_V10(p##9)

class CBasePlayer
{
public:
	// slots 0..63
	CBP_V10(sa0) CBP_V10(sa1) CBP_V10(sa2) CBP_V10(sa3) CBP_V10(sa4) CBP_V10(sa5) CBP_V1(sa6) CBP_V1(sa7) CBP_V1(sa8) CBP_V1(sa9)
	virtual void vfunc64(float *pVec);
	// slots 65..220
	CBP_V100(sb) CBP_V10(sc0) CBP_V10(sc1) CBP_V10(sc2) CBP_V10(sc3) CBP_V10(sc4) CBP_V1(sd0) CBP_V1(sd1) CBP_V1(sd2) CBP_V1(sd3) CBP_V1(sd4) CBP_V1(sd5)
	virtual float *vfunc221();
	// slots 222..402
	CBP_V100(se) CBP_V10(sf0) CBP_V10(sf1) CBP_V10(sf2) CBP_V10(sf3) CBP_V10(sf4) CBP_V10(sf5) CBP_V10(sf6) CBP_V10(sf7) CBP_V1(sg0)
	virtual void vfunc403();
	CBP_V1(sh0) CBP_V1(sh1) CBP_V1(sh2)
	virtual void vfunc407();
	virtual void vfunc408();
	// slots 409..447
	CBP_V10(si0) CBP_V10(si1) CBP_V10(si2) CBP_V1(sj0) CBP_V1(sj1) CBP_V1(sj2) CBP_V1(sj3) CBP_V1(sj4) CBP_V1(sj5) CBP_V1(sj6) CBP_V1(sj7) CBP_V1(sj8)
	virtual void vfunc448();

	char m_pad0004[0x2DC];	// 0x0004 .. 0x02DF
	int m_n02E0;
	char m_pad02E4[0x1712];	// 0x02E4 .. 0x19F5
	bool m_b19F6;
	char m_pad19F7[0x2E1];	// 0x19F7 .. 0x1CD7
	unsigned int m_nCriminalLevelEnc;	// 0x1CD8, scrambled by the xor/and/add mask chain
	char m_pad1CDC[0x128];	// 0x1CDC .. 0x1E03
	unsigned int m_hEnt1E04;	// entity handle
	int m_n1E08;
	int m_n1E0C;
	char m_pad1E10[0x298];	// 0x1E10 .. 0x20A7
	char m_b20A8;
	char m_pad20A9[0x1FF];	// 0x20A9 .. 0x22A7
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
	void sub_100ac4e0(void *pFunc, int a, int b);	// schedules a think function (called through the stub at 0x10007fe5)
	void sub_10015a91();	// CBaseCombatCharacter::vfunc403, called directly
};
