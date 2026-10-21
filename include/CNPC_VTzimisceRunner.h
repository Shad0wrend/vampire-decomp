// CNPC_VTzimisceRunner: the Tzimisce runner boss NPC.
// Declared standalone: the vtable slots are not modelled, so the position of the
// virtual below is not its real slot (599).
#pragma once

class CAI_Motor;

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
	void vfunc444(int *pTask);	// slot 444 "RunTask" (plain member): tasks 0x122..0x124 run AutoMovement, keep the motor looking at the position of the slot 167 object (facing target, weight -1.0f) until the time at +0x5db4 has passed, then clear +0x63ec and call sub_10273e80(0); other tasks go to CAI_BaseNPCTroika::vfunc444
	bool sub_10280a50();	// CAI_BaseNPC::AutoMovement (stub 0x1000cf6d), called directly
	void sub_102aacf0(int *pTask);	// CAI_BaseNPCTroika::vfunc444 (stub 0x10015c2b), called directly
	void sub_10273e80(int a);	// called through the stub at 0x1000ac68

	char m_pad0004[0x5d44 - 4];
	CAI_Motor *m_pMotor;	// +0x5d44
	char m_pad5d48[0x5db4 - 0x5d48];
	float m_flTime5db4;	// +0x5db4
	char m_pad5db8[0x63ec - 0x5db8];
	int m_n63ec;	// +0x63ec
};
