// UtlMem: the memory part of a CUtlVector<int>-like container (pointer, allocation count, grow size); its
// member at 0x10055ec0 grows the allocation (starting at 8 elements).
#pragma once

class UtlMem
{
public:
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;

	void sub_1004e830(int num);
	void sub_1009cf00(int num);
	void sub_100aad80(int num);
	void sub_100ca0b0(int num);
	void sub_10135430(int num);
	void sub_10197a20(int num);
	void sub_1002d470();	// "CUtlMemory::Purge": frees the allocation unless the grow size is -1 (external memory)
	void sub_10039e60();
	void sub_100558d0();
	void sub_10096d10();
	void sub_10096d40();
	void sub_10096e70();
	void sub_10096f60();
	void sub_10096f90();
	void sub_100a3590();
	void sub_100a35c0();
	void sub_100aad50();
	void sub_100b4e00();
	void sub_100c1eb0();
	void sub_100d3380();
	void sub_100d33d0();
	void sub_100d3470();
	void sub_100d3cc0();
	void sub_100d3e00();
	void sub_100d8690();
	void sub_100d8830();
	void sub_100d90b0();
	void sub_100e1040();
	void sub_100e1290();
	void sub_1011f020();
	void sub_1011f050();
	void sub_1011f110();
	void sub_1011f140();
	void sub_1011f200();
	void sub_1011f230();
	void sub_1011f2f0();
	void sub_1011f320();
	void sub_10130fd0();
	void sub_10135350();
	void sub_101b1e60();
	void sub_101c2cc0();
	void sub_1012d830();
	UtlMem *sub_100d3c30(int growSize, int allocationCount);	// constructor for 8-byte elements
	UtlMem *sub_10131440(int growSize, int allocationCount);
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_1002cbd0 (transplant)
		// provisional, like sub_10032ab0 (transplant)
	UtlMem *sub_100557c0(int growSize, int allocationCount);	// provisional, like sub_10032ab0 (transplant)
	UtlMem *sub_101be2e0(int growSize, int allocationCount);
	UtlMem *sub_101c2bd0(int growSize, int allocationCount);
	UtlMem *sub_101c2c80(int growSize, int allocationCount);
	UtlMem *sub_1008e560(int growSize, int allocationCount);
		// provisional, like sub_10032ab0 (transplant)
		// provisional, like sub_10032ab0 (transplant)
		// provisional, like sub_10032ab0 (transplant)
		// provisional, like sub_10032ab0 (transplant)
		// provisional, like sub_10032ab0 (transplant)
		// provisional, like sub_10032ab0 (transplant)
		// provisional, like sub_10032ab0 (transplant)
		// provisional, like sub_10032ab0 (transplant)
		// provisional, like sub_10032ab0 (transplant)
		// provisional, like sub_10032ab0 (transplant)
		// provisional, like sub_10032ab0 (transplant)
		// provisional, like sub_10032ab0 (transplant)
};
