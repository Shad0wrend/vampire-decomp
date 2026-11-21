// CPlayerLocalPredictedData (RTTI .?AVCPlayerLocalPredictedData@@): the local player's predicted data block (vtable 0x10470490).
#pragma once

class CPlayerLocalPredictedData
{
public:
	virtual void vfunc0();	// slot 0 (0x100130b6); the vtable pointer is at 0x00 (vtable 0x10470490)

	int m_i04;		// 0x04
	int m_i08;		// 0x08
	int m_i0c;		// 0x0c
	int m_i10;		// 0x10
	int m_aData[8];	// 0x14: eight dwords cleared with the block

	CPlayerLocalPredictedData *sub_100bce00();	// initialiser: vtable 0x10470490, the dwords at 0x04..0x10 and the eight at 0x14 cleared; returns this
};
