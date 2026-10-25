// CNPC_VScurrying: declared by pcdecomp transplant for 0x103abbe0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

#include "Vector.h"

struct CScurryPick
{
	virtual void vfunc0();
	virtual unsigned int *vfunc1();
};

class CNPC_VScurrying : public CBaseEntity
{
public:
	CNPC_VScurrying *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VScurrying *sub_103abb00();	// as in CKeepUpright (transplant)
	int vfunc438();	// slot 438 "SelectSchedule" (plain member): stamps +0x1b2c = 0x20; waits (schedule 0x162) until the time at +0x668c; condition 0x78 -> 0x162; condition 0x70 -> copies the vector of the object at +0x618c to +0x6680, sets the time at +0x668c from the delay at +0x669c, 0x162; else the animal schedule pick, with 0x6b turned into 0x161
	int vfunc440(int act);	// slot 440: 0x6b -> 0x161, 0x156 -> 0x15e, 0x157 -> 0x15f, else the animal's own (base) translation
	char sub_10269aa0(int condition);	// \"HasCondition\" (stub 0x10014df8)
	void vfunc433();	// slot 433: clears condition 0x78, re-picks the handle at +0x667c once the time at +0x6678 has passed
	void sub_10269b50(int condition);	// stub 0x10015839
	void sub_10269a20(int condition);	// stub 0x100041b0
	void sub_102b27f0();	// CAI_BaseNPCTroika::vfunc433 (stub 0x10013f2f)
	char sub_103acac0(CBaseEntity *pEnt);	// stub 0x1000f9f7
	CScurryPick *sub_103aca80();	// stub 0x1000b573

	char m_pad03e0[0x1b2c - 0x3e0];
	int m_n1b2c;
	const char *m_pszFile1b30;	// source file stamp of the schedule pick
	int m_nLine1b34;	// source line stamp
	char m_pad1b38[0x618c - 0x1b38];
	char m_Obj618c[0x6678 - 0x618c];	// the object whose stub 0x100019ab (sub_101b99d0) returns a vector
	float m_flTime6678;
	unsigned int m_hEnt667c;
	Vector m_vec6680;
	float m_flTime668c;	// 0x668c
	char m_pad6690[0x669c - 0x6690];
	float m_flDelay669c;	// 0x669c
};
