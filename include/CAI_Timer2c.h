// CAI_Timer2c: a 0x2c byte sense snapshot (five ints, a flag byte, two ints and a three float position);
// sub_102b3d90 is its memberwise assignment, kept out of line.
#pragma once

struct CAI_Timer2c
{
	int m_n00, m_n04, m_n08, m_n0c, m_n10;
	char m_b14;
	int m_n18, m_n1c;
	int m_n20, m_n24, m_n28;

	CAI_Timer2c &sub_102b3d90(const CAI_Timer2c &rhs);	// operator=
};
