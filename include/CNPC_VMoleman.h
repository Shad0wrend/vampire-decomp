// CNPC_VMoleman: declared by pcdecomp transplant for 0x1039f640 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

#include "CAI_Navigator.h"

struct CTakeDamageInfo;	// a tail-call override's parameter
struct animevent_t;	// a tail-call override's parameter
class CNPC_VMoleman : public CBaseEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void vfunc103();	// slot 103: sub_1026dc00(0x200000), then sub_10384690
	void sub_10384690();	// CNPC_VHuman::vfunc103 (stub 0x1000d83c), called directly
	CNPC_VMoleman *sub_1039f5c0();	// as in CKeepUpright (transplant)
	int vfunc438();	// slot 438 "SelectSchedule": clears the flag 2 at +0x14b8 (schedule 0xf1), else by state 1 and the navigator / conditions 0x13, 0x10, 0x11, or CNPC_VHuman::vfunc438
	int sub_10015ad2();	// CNPC_VHuman::vfunc438 (stub 0x10015ad2), tail called
	char sub_1001482b(int condition);	// CAI_BaseNPCTroika::sub_10269d30 (stub 0x1001482b), called directly
	char vfunc452();	// slot 452: the byte global at 0x1064a580
	int vfunc461();	// slot 461 override: the state field at +0x1b38 = 0x1b, then CNPC_VHuman's implementation

	char m_pad03e0[0x14b8 - 0x3e0];
	unsigned int m_flags14b8;
	char m_pad14bc[0x1b2c - 0x14bc];
	int m_n1b2c;	// +0x1b2c: schedule selection id
	char m_pad1b30[0x5cc0 - 0x1b30];
	int m_nState5cc0;	// +0x5cc0
	char m_pad5cc4[0x5d34 - 0x5cc4];
	CAI_Navigator *m_pNavigator;	// +0x5d34
	char m_pad5d38[0x62ec - 0x5d38];
	int m_n62ec;	// +0x62ec
public:
	virtual void vfunc134();
	virtual float vfunc135(float);
	virtual bool vfunc136();
	virtual int vfunc137();
	virtual int vfunc138();
	char *vfunc580();
	const char *sub_1039f620();
	char m_pad62f0[0x6664 - 0x62f0];
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	virtual void vfunc104();	// slot 104 (0x1039fc70): a tail call of CNPC_VHuman::vfunc104
	int vfunc440(int);	// slot 440 (0x1039fdf0): a tail call of CNPC_VHuman::vfunc440 (no such slot in this view: plain)
	void vfunc434();	// slot 434 (0x1039fe50): a tail call of CNPC_VHuman::vfunc434 (no such slot in this view: plain)
	bool vfunc366(int, int, int);	// slot 366 (0x1039fe90): a tail call of CNPC_VHuman::vfunc366 (no such slot in this view: plain)
	void vfunc442(int const *);	// slot 442 (0x1039fed0): a tail call of CNPC_VHuman::vfunc442 (no such slot in this view: plain)
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	void vfunc463(int, int);	// slot 463 (0x1039fce0): a tail call of CNPC_VHuman::vfunc463 (no such slot in this view: plain)
	void vfunc259(animevent_t *);	// slot 259 (0x1039fd00): a tail call of CNPC_VHuman::vfunc259 (no such slot in this view: plain)
	int vfunc390(CTakeDamageInfo *);	// slot 390 (0x1039fe70): a tail call of CNPC_VHuman::vfunc390 (no such slot in this view: plain)
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	void vfunc144(void *p0);	// slot 144 (0x1039feb0): a tail call of CNPC_VHuman::vfunc144 (a base declares another vfunc144: this one hides it)
};
