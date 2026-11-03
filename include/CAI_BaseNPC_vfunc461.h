// View of CAI_BaseNPC for CAI_BaseNPC::vfunc461 (0x1026f660, slot 461, ret 0: SelectIdealState-like state
// machine). CAI_BaseNPC itself declares no data members, so the function's fields are given here as a derived
// view (define the function on it and cast `this`).
#pragma once

#include "CAI_BaseNPC.h"

class CAI_Motor;

class CAI_BaseNPCUnit461 : public CAI_BaseNPC
{
public:
	char m_pad0004[0x1b38 - 4];
	int m_n1b38;			// 0x1b38: set to 1 on every call
	const char *m_pszFile1b3c;	// 0x1b3c: "E:\Vampire\main\dlls\AI_BaseNPC.cpp" stamp
	int m_nLine1b40;		// 0x1b40: its line
	char m_pad1b44[0x5b80 - 0x1b44];
	char m_b5b80;			// 0x5b80: cleared by the movement branches
	char m_pad5b81[0x5cc0 - 0x5b81];
	int m_nState5cc0;		// 0x5cc0: the current NPC state (switch key)
	int m_nIdealState5cc4;		// 0x5cc4: the state the function decides on (its return value)
	char m_pad5cc8[0x5d44 - 0x5cc8];
	CAI_Motor *m_pMotor5d44;	// 0x5d44: the NPC's motor
};
