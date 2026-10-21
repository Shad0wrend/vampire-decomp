// CNPC_VTzimisceRunner: the Tzimisce runner boss NPC.
// Declared standalone: the vtable slots are not modelled, so the position of the
// virtual below is not its real slot (599).
#pragma once

class CNPC_VTzimisceRunner
{
public:
	virtual bool vfunc599(void *pEntity);
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	bool vfunc600(void *pEntity);	// slot 600: touches the global at 0x10924edc (slot 1), stores the handle of pEntity (-1 for null) at +0x6678, then toggles the byte at +0x6078 on the result of the behaviour object at +0x65e8 (sub_10015564(this, 0))
	int vfunc310(int act);	// slot 310: when the byte at +0x6672 is set, maps activities 1/0xf1 -> 0x1134, 9 -> 0x1136, 0x13 -> 0x1137, 3 -> 0x1135; then the Troika base
	int sub_10295750(int act);	// CAI_BaseNPCTroika::vfunc310, called directly
	void vfunc104();	// "CNPC_VTzimisceRunner::Precache": the base precache, then every footstep / breath / exertion sound of the runner and the claw weapon
	void sub_100097b4();	// CAI_BaseNPCTroika::vfunc104 (Precache), called directly
	void vfunc103();	// slot 103 "Spawn" (plain member): the name pointers (null when empty), the fields at +0x6420.., the Troika spawn, solid flag 0x4000000, the runner bytes, flag 0x80 at +0x5b84, the size (50, 50, 82) and RemoveFlag2(4)
	void sub_10298d30();	// CAI_BaseNPCTroika::vfunc103 (stub 0x1000303a), called directly
	void sub_10012855(int flags);	// sets the solid flags, called directly
	void sub_1009b060(const float *pSize);	// stub 0x10001a50, called directly with a three-float vector
	void sub_100b3900(unsigned int flags);	// CBaseEntity::RemoveFlag2 (stub 0x1000df44), called directly

	char pad4[0xfe0 - 4];
	char m_b0fe0;	// +0xfe0
	char pad0fe1[0x10e4 - 0xfe1];
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
	char pad6434[0x6672 - 0x6434];
	char m_b6672;	// +0x6672
	char pad6673[0x6678 - 0x6673];
	int m_h6678;	// +0x6678: entity handle, -1 at spawn
};
