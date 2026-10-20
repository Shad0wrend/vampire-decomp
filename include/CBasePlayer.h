// CBasePlayer: the player entity.
// Barely recovered yet: only the members decompiled code needs are named, the
// rest is padding that keeps their offsets. The vtable slots are *not* modelled
// here, so the declaration order of the virtuals below carries no meaning --
// add the padding slots before using a virtual call through this class.
#pragma once

class CBaseEntity;

struct CBasePlayerHandleVec	// a CUtlVector<EHANDLE>
{
	unsigned int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_Size;
	unsigned int *m_pElements;
};

class CBasePlayer
{
public:
	virtual void vfunc407();
	virtual void vfunc408();

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
	void sub_1016f0f0(const char *name, const void *data);	// "CBasePlayer::StoreGlobalEmailFlags": scope trace (entity name), finds the 0x240 byte record at [+0x1e28] (count at +0x1e34) whose name matches (Q_strncmp over the longer length) and copies 0x200 bytes to record+0x40, else DevWarning("Could not save email for terminal: %s\n")
};
