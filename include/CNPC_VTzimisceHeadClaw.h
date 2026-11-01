// CNPC_VTzimisceHeadClaw: Tzimisce head claw boss NPC.
#pragma once

struct datamap_t;
#include "CNPC_VBaseBoss.h"

class CUnknown1025ddd0;

class CNPC_VTzimisceHeadClaw : public CNPC_VBaseBoss
{
public:
	char pad4[0x2e0 - 4];
	int m_pEdict2e0;	// +0x2e0: the entity's edict
	char pad2e4[0x10e4 - 0x2e4];
	const char *m_pszName10e4;	// +0x10e4: the model-related name, null when its string is empty
	char pad10e8[0x5b80 - 0x10e8];
	char m_b5b80;	// +0x5b80
	char pad5b81[0x5b84 - 0x5b81];
	unsigned int m_nFlags5b84;	// +0x5b84
	char pad5b88[0x5cc0 - 0x5b88];
	int m_nState5cc0;	// +0x5cc0: the NPC state, 2 while a schedule is running
	char pad5cc4[0x6074 - 0x5cc4];
	float m_f6074;	// +0x6074: time of the next behaviour change
	char m_b6078;	// +0x6078
	char pad6079[0x6268 - 0x6079];
	float m_f6268;	// +0x6268
	char pad626c[0x63ac - 0x626c];
	const char *m_pszName63ac;	// +0x63ac
	char pad63b0[0x6420 - 0x63b0];
	int m_n6420;	// (the byte at +0x6078 and the behaviour object at +0x65e8 are reached through vfunc600 only)	// +0x6420 .. +0x642c cleared at spawn
	int m_n6424;
	int m_n6428;
	int m_n642c;
	int m_n6430;	// +0x6430: 100 at spawn
	char pad6434[0x65e8 - 0x6434];
	CUnknown1025ddd0 *m_pBehaviour65e8;	// +0x65e8
	char pad65ec[0x6678 - 0x65ec];
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
	int vfunc438();	// slot 438 "SelectSchedule" (plain member): while a schedule runs (state 2) and the NPC is not hurt (condition 0x35) it picks 0x158; the weapon the NPC holds (its slot 360 flags) decides between the attack choices of slots 604 (weapon type 0x18000) and 605 (after the sight checks and a 40% roll, 0xca when they fail); falls back to the Troika base
	char sub_103c24a0();	// stub 0x100098a9: sight / range check run before the melee choice
	int sub_102af660();	// CAI_BaseNPCTroika::vfunc438 (stub 0x10015596), called directly
	virtual void vfunc619(char bFlag);	// slot 619 (the position here is not its real slot): emits the footstep-like sound of the claw through a reliable CPASAttenuationFilter, the sample set picked by the flag
	virtual void vfunc310(int a);	// slot 310 "CNPC_VTzimisceHeadClaw::vfunc310": a 9 with the NPC's slot 167 value answers 0x1136 to the Troika base, else the argument goes on to the Troika base
	bool vfunc599(CBaseEntity *pEntity);	// slot 599 (plain member, ret 4): when the behaviour object at +0x65e8 accepts the entity, touches g_10924edc (slot 1), sets the byte at +0x6078 and the next time at +0x6074 (7.5 to 15 seconds ahead); else clears the byte; returns whether it was accepted
	bool vfunc600(void *pEntity);	// slot 600 (plain member, ret 4): touches the global at 0x10924edc (slot 1), then toggles the byte at +0x6078 on the result of the behaviour object at +0x65e8 (sub_1025dca0(this, 0))
	void vfunc618();	// slot 618 (plain member): plays one of the 0x1065ca78 sounds (channel 4, volume 1.0, attenuation 0.8) from the edict at +0x2e0 to the players that can hear it, reliably (PAS attenuation filter inline)
	void vfunc601(int a);	// slot 601 (0x103c1ad0): the state flag at +0x6078 cleared, the object at +0x65e8 handed this (sub_1025ddd0) after the vtable call of g_10924edc slot 1; takes one argument
	CNPC_VTzimisceHeadClaw *vfunc5(unsigned int flags);	// slot 5 (scalar deleting destructor, plain member): the vector at +0x665c goes, then the Troika base's destructor body (sub_1028d610), then the delete when bit 0 of flags is set
	void sub_1028d610();	// CAI_BaseNPCTroika destructor body (stub 0x100123af), called directly
public:
	virtual bool vfunc70();
	virtual bool vfunc324();
	virtual bool vfunc325();
public:
	typedef datamap_t *Datamap82;	// staged: becomes datamap_t *
	virtual Datamap82 vfunc82();
	virtual bool vfunc452();
	virtual int vfunc580();
public:
	virtual int vfunc451();
	virtual char vfunc602();	// slot 602: true when the NPC may carry on (difficulty-scaled timer at +0x6268, then the behaviour object at +0x65e8 must not hold this entity)
};
