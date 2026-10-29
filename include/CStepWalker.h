// CStepWalker: a position stepper driven by a 20-byte record table at 0x1049df28 (state at +0).
#pragma once

struct CStepRecord	// 20 bytes
{
	int m_nLimit;	// +0 (0x1049df28)
	int m_nStep;	// +4
	int m_nNextState;	// +8
	int m_pad[2];
};
extern CStepRecord g_1049df28[];

class CStepWalker
{
public:
	int m_nState;	// +0
	int m_pad04;
	int m_nRepeats;	// +8
	int m_nCount;	// +0xc
	int m_nPos;	// +0x10

	bool sub_10307b80();
	int sub_10307c20();
};
