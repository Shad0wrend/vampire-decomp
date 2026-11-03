// CAI_HumanoidMotor: declared by pcdecomp transplant for 0x10262400 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once

class CAI_HumanoidMotor
{
public:
	CAI_HumanoidMotor *vfunc0(unsigned int flags);
	void sub_10014b32();

	char m_pad0000[0x6c];
	int m_n6c;	// 0x6c: a target / facing id, reset to -1 by slot 10

	void vfunc10();	// slot 10: CAI_Motor::vfunc10, then resets m_n6c to -1
};
