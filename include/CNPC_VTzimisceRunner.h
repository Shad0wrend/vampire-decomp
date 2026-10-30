// CNPC_VTzimisceRunner: the Tzimisce runner boss NPC.
// Declared standalone: the vtable slots are not modelled, so the position of the
// virtual below is not its real slot (599).
#pragma once

class CAI_Motor;
class CUnknown1025ddd0;

class CNPC_VTzimisceRunner
{
public:
	virtual bool vfunc599(void *pEntity);
	CNPC_VTzimisceRunner *vfunc5(unsigned int flags);	// slot 5 (scalar deleting destructor, plain member): the record vector at +0x665c goes, then the Troika base's destructor body (stub 0x100123af), then the delete when bit 0 of flags is set
	void sub_1028d610();	// CAI_BaseNPCTroika destructor body (stub 0x100123af), called directly
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	bool vfunc600(void *pEntity);	// slot 600: touches the global at 0x10924edc (slot 1), stores the handle of pEntity (-1 for null) at +0x6678, then toggles the byte at +0x6078 on the result of the behaviour object at +0x65e8 (sub_10015564(this, 0))
	void vfunc601(int unused);	// slot 601 (plain member, ret 4): touches the global at 0x10924edc (slot 1), sets the handle at +0x6678 to -1, clears the byte at +0x6078, then the behaviour object at +0x65e8 drops this (sub_1025ddd0(this), stub 0x10013d31)
	int vfunc310(int act);	// slot 310: when the byte at +0x6672 is set, maps activities 1/0xf1 -> 0x1134, 9 -> 0x1136, 0x13 -> 0x1137, 3 -> 0x1135; then the Troika base
	int sub_10295750(int act);	// CAI_BaseNPCTroika::vfunc310, called directly
	void vfunc104();	// "CNPC_VTzimisceRunner::Precache": the base precache, then every footstep / breath / exertion sound of the runner and the claw weapon
	void sub_100097b4();	// CAI_BaseNPCTroika::vfunc104 (Precache), called directly
	void vfunc130(int a);	// slot 130: the Troika version (sub_102998c0), then the size (50, 50, 82) and RemoveFlag2(4) as at spawn
	void sub_102998c0(int a);	// CAI_BaseNPCTroika::vfunc130 (stub 0x10002b99), called directly
	void vfunc103();	// slot 103 "Spawn" (plain member): the name pointers (null when empty), the fields at +0x6420.., the Troika spawn, solid flag 0x4000000, the runner bytes, flag 0x80 at +0x5b84, the size (50, 50, 82) and RemoveFlag2(4)
	void sub_10298d30();	// CAI_BaseNPCTroika::vfunc103 (stub 0x1000303a), called directly
	void sub_10012855(int flags);	// sets the solid flags, called directly
	void sub_1009b060(const float *pSize);	// stub 0x10001a50, called directly with a three-float vector
	void sub_100b3900(unsigned int flags);	// CBaseEntity::RemoveFlag2 (stub 0x1000df44), called directly
	void vfunc444(int *pEvent);	// slot 444
	void sub_102aacf0(int *pEvent);	// CAI_BaseNPCTroika::vfunc444 (stub 0x10015c2b), called directly
	bool sub_10280a50();	// CAI_BaseNPC::AutoMovement (stub 0x1000cf6d), called directly
	void sub_10273e80(int a);	// CAI_BaseNPC member (stub 0x1000ac68), called directly
	void vfunc619(char bRight);	// slot 619 (plain member): a footstep (the left or right foot table at 0x1065d680 / 0x1065d688, random of two) and a breath (table 0x1065d690, random of four) from the edict at +0x2e0, channel 4, volume 1.0, attenuation 0.8, to the players that can hear it, reliably
	void vfunc336();	// slot 336 (plain member): when the engine time (slot 119 of the engine) differs from the time at +0x6674: sub_10273070(1), clears the byte at +0x6672, sets the byte at +0x5f2c
	void sub_10273070(int a);	// CAI_BaseNPC member (stub 0x1000dc29), called directly
	void vfunc618();	// slot 618 (plain member): plays one of the 0x1065d6a0 sounds (channel 4, volume 1.0, attenuation 0.8) from the edict at +0x2e0 to the players that can hear it, reliably (PAS attenuation filter inline)

	char pad4[0x2e0 - 4];
	int m_pEdict2e0;	// +0x2e0
	char pad2e4[0xfe0 - 0x2e4];
	char m_b0fe0;	// +0xfe0
	char pad0fe1[0x10e4 - 0xfe1];
	const char *m_pszName10e4;	// +0x10e4: the model-related name, null when its string is empty
	char pad10e8[0x5b84 - 0x10e8];
	unsigned int m_nFlags5b84;	// +0x5b84
	char pad5b88[0x5d44 - 0x5b88];
	CAI_Motor *m_pMotor;	// +0x5d44
	char pad5d48[0x5db4 - 0x5d48];
	float m_flTime5db4;	// +0x5db4
	char pad5db8[0x5f2c - 0x5db8];
	char m_b5f2c;	// +0x5f2c
	char pad5f2d[0x6078 - 0x5f2d];
	char m_b6078;	// +0x6078
	char pad6079[0x63ac - 0x6079];
	const char *m_pszName63ac;	// +0x63ac
	char pad63b0[0x63ec - 0x63b0];
	int m_n63ec;	// +0x63ec
	char pad63f0[0x6420 - 0x63f0];
	int m_n6420;	// +0x6420 .. +0x642c cleared at spawn
	int m_n6424;
	int m_n6428;
	int m_n642c;
	int m_n6430;	// +0x6430: 100 at spawn
	char pad6434[0x65e8 - 0x6434];
	CUnknown1025ddd0 *m_pBehaviour65e8;	// +0x65e8
	char pad65ec[0x6672 - 0x65ec];
	char m_b6672;	// +0x6672
	char pad6673[1];
	float m_f6674;	// +0x6674: an engine time
	int m_h6678;	// +0x6678: entity handle, -1 at spawn
public:
	virtual bool vfunc70();
	virtual bool vfunc324();
	virtual bool vfunc325();
	virtual bool vfunc329();
	virtual bool vfunc399();
	virtual bool vfunc400();
public:
	virtual int vfunc82();
	virtual int vfunc451();
	virtual bool vfunc452();
	virtual int vfunc580();
public:
	virtual int vfunc588();
public:
	virtual int vfunc320(int, int);
};
