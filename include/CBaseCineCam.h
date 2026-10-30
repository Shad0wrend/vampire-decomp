// CBaseCineCam: cinematic camera entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "Vector.h"

class CBaseCineCam
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CBaseCineCam *vfunc5(unsigned int flags);	// scalar deleting destructor
	float *vfunc193(float *out);	// as in CBaseEntity (transplant)
	bool sub_1006e6a0(int a, int b, int c, int d, int e);	// slot 86: true while the time at +0x90 is ahead of curtime, else whether the entity handle at +0x5d0 resolves and its edict (+0x2e0) is `b`, then sub_1006e890
	bool sub_1006d9d0();	// CBaseEntity::GetFlags (as the shot mask); false when -1, else for every set bit i (0..3) the entity handle at +0x610+4*i must resolve; finally whether the handle at +0x630 is set
	bool sub_1006e130(const char *pszName, int a, int b);	// stub 0x1000d15c: sets up the shot named pszName (here "Follow"); false when it could not be set up
	void sub_1006e8e0();	// stub 0x10009868: finishes the set up after the first shot's target handle was stored
	void sub_1006ef50(void *pTarget, int a);	// stub 0x10005ae2: makes pTarget (the prop the camera films) the target of the first shot
	void sub_1006e770();	// picks the think function of the shot state at +0x638 (0: none, 1..4: the shot's think functions, otherwise the function at 0x100034ef while the time at +0x55c is in the past) and schedules the next think 0.1 after curtime
	bool sub_1006db10();	// stub 0x10011734: whether the shot just set up is usable
	bool sub_1006e4c0(const char *pszPrefix, int unused);	// "CBaseCineCam::FindBestShot": state 1, sets up every shot "<prefix>_<n>" (n = 1, 2, ... while the handle at +0x630 stays set) and collects the usable ones; none -> false, else a random one of them is set up again ("CBaseCineCam::FindBestShot chose %s") -> true; takes a second, unused stack argument
	Vector sub_1006f670();	// the position the shot looks at: the middle of the two shot positions (flags 4 and 8 of sub_1006edb0), or the one that is set, else the zero vector (returned by value)
	void sub_1006ed40(Vector *pFirst, Vector *pSecond);	// copies the two shot positions to the non-null outputs
	int sub_1006edb0();	// stub 0x10002a6d: the shot flags (bit 2 = first position, bit 3 = second)
	Vector sub_1006f010(int index);	// stub 0x10011ebe: the position of shot `index` (2 or 3), returned by value

	char m_pad0004[0x8c];
	float m_flTime90;	// 0x0090
	char m_pad0094[0x17c - 0x94];
	float m_flNextThink17c;	// 0x017c
	char m_pad0180[0x55c - 0x180];
	float m_flTime55c;	// 0x055c
	char m_pad0560[0x5d0 - 0x560];
	unsigned int m_hTarget5d0;	// 0x05d0
	const char *m_psz5d4;	// 0x05d4: the shot's name
	const char *m_psz5d8;	// 0x05d8: the names of the four shot targets
	const char *m_psz5dc;
	const char *m_psz5e0;
	const char *m_psz5e4;
	char m_pad05e8[4];
	Vector m_vecShot5ec;	// 0x05ec: the first shot position
	char m_pad05f8[0x604 - 0x5f8];
	Vector m_vecShot604;	// 0x0604: the second shot position
	unsigned int m_hShot610[4];	// 0x0610: entity handles, one per flag bit
	char m_pad0620[0x630 - 0x620];
	unsigned int m_hShot630;	// 0x0630
	char m_pad0634[4];
	int m_nState638;	// 0x0638: the shot state
	char m_pad063c[4];
	char m_b640;	// 0x0640
	void sub_10070780(class CBasePlayer *pPlayer);	// starts the shot for the player: finds the four target entities by name, then either sets up the player's current camera (sub_1017cf90) with the shot's name or creates a new one (sub_10070470) and makes the player watch it; Warning when that fails
	int sub_100ab4f0();	// stub 0x1000b5cd, thiscall without stack arguments (the debug name)
	float *sub_1030be50(float *out);	// provisional, like vfunc193 (transplant)
public:
	virtual int vfunc81();
public:
	virtual int vfunc80();
	virtual int vfunc82();
};
