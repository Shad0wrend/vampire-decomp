// CNPC_VTzimisceHeadClaw: Tzimisce head claw boss NPC.
#pragma once
#include "CNPC_VBaseBoss.h"

class CNPC_VTzimisceHeadClaw : public CNPC_VBaseBoss
{
public:
	char pad4[0x10e4 - 4];
	const char *m_pszName10e4;	// +0x10e4: the model-related name, null when its string is empty
	char pad10e8[0x5b84 - 0x10e8];
	unsigned int m_nFlags5b84;	// +0x5b84
	char pad5b88[0x63ac - 0x5b88];
	const char *m_pszName63ac;	// +0x63ac
	char pad63b0[0x6420 - 0x63b0];
	int m_n6420;	// +0x6420 .. +0x642c cleared at spawn
	int m_n6424;
	int m_n6428;
	int m_n642c;
	int m_n6430;	// +0x6430: 100 at spawn
	char pad6434[0x6678 - 0x6434];
	int m_iField6678;

	virtual void vfunc420();
	virtual int vfunc440(int act);	// slot 440 (the position here is not its real slot): activities 0xbf / 0xc7 / 0xe7 / 0xed / 0xef -> 0x157 / 0xc8 / 0x156 / 0xf0 / 0xf0, else the Troika base
	int sub_102b12f0(int act);	// CAI_BaseNPCTroika::vfunc440, called directly
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void vfunc453();	// as in CNPC_VAndreiBlood (transplant)
	void sub_102ad140();	// as in CNPC_VAndreiBlood (transplant)
	void sub_100123f5(int a);	// as in CNPC_VAndreiBlood (transplant)
	CNPC_VTzimisceHeadClaw *sub_103c1220();	// constructor
	void vfunc259(void *pEvent);	// "HandleAnimEvent" (slot 259 override; the position here is not its real slot): events 0x802 / 0x803 hand slot 619 a flag (1 / 0) after slot 220's result went to sub_101cdba0, the rest goes to CAI_BaseNPCTroika::vfunc259
	void vfunc104();	// "CNPC_VTzimisceHeadClaw::Precache" (the position is not its real slot 104): the base precache, the four Tzim2 emitter particle systems, every footstep / breath / exertion sound of the boss and the claw and head weapons
	void sub_100097b4();	// CAI_BaseNPCTroika::vfunc104 (Precache), called directly
	void vfunc103();	// slot 103 "Spawn" (plain member): the name pointers (null when empty), the fields at +0x6420.., the Troika spawn, solid flags 0x4000000 / 0x200000, flag 0x80 at +0x5b84, the size (45, 45, 100) and RemoveFlag2(4)
	void sub_10298d30();	// CAI_BaseNPCTroika::vfunc103 (stub 0x1000303a), called directly
	void sub_10012855(int flags);	// sets the solid flags, called directly
	void sub_1009b060(const float *pSize);	// stub 0x10001a50, called directly with a three-float vector
	void sub_100b3900(unsigned int flags);	// CBaseEntity::RemoveFlag2 (stub 0x1000df44), called directly
};
