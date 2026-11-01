// CPlayerResource: declared by pcdecomp transplant for 0x1018a3d0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members. Declared flat (it derives from CBaseEntity; the
// vtable and the base members are not modelled, so offsets count from the start of the object).
#pragma once

struct datamap_t;

class CPlayerResource
{
public:
	CPlayerResource *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void vfunc103();	// slot 103 "CPlayerResource::Spawn": clears the twelve 33 entry tables at +0x450, installs the think function sub_1010f4e0 (CBaseEntity::sub_100ac4e0) and stamps curtime + 1.0 at +0x17c and +0xa80
	void vfunc242();	// slot 242 "CPlayerResource::UpdatePlayerData": for every player slot refreshes the per player tables from the player (the ping / packet loss tables only once the update time at +0xa80 has passed, the ping capped at 1023), then moves the update time to curtime + 0.25

	char m_pad0000[0x450];
	int m_tables[12][0x21];	// +0x450: per player values (the 33 entries are the player slots plus one)
	float m_flNextUpdate;	// +0xa80
public:
	int vfunc80();
	int vfunc81();
	datamap_t * vfunc82();
	bool vfunc86(int, int, int, int, int);
};
