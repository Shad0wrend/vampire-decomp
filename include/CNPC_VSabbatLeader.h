// CNPC_VSabbatLeader: Sabbat leader NPC. Only the members that decompiled code needs are declared.
#pragma once

struct CNPC_VSabbatLeaderHint
{
	char pad0[0x5dc];
	int m_hintType;
};

class CNPC_VSabbatLeader
{
public:
	char pad0[0x66c0];
	int m_nFailureType;

	void sub_103a7760(int arg);
	void sub_1000b8a2(int arg);
	int sub_103aa480(int arg);
	int sub_10001b45(int arg);
	void sub_103a9d00();	// FlipFailureType
	char sub_103a9340(CNPC_VSabbatLeaderHint *pHint);	// "FValidateHintType": hint type in [0x3e80, 0x3e85]
};
