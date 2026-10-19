// CNPC_VMingXiao: declared by pcdecomp transplant for 0x10391390 from CNPC_Crow (0x10359240);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VMingXiao
{
public:
	int vfunc546(int arg);
	int vfunc461();	// sets the task state at +0x5cc4 (and the source file/line markers at +0x1b3c/+0x1b40) from slots 158, 464 and 167
	char vfunc69(void *pOther);	// as in CNPC_VHengeyokai (transplant)
	char sub_1029b180(void *pOther);	// as in CNPC_VHengeyokai (transplant)
	char vfunc166(void *pOther);	// slot 166: false when pOther is one of the two handle arrays at +0x668c / +0x66a8 (six entries each), else true unless pOther's slot 164 says no
};
