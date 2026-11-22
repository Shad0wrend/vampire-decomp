// CPlayerLocalPredictedData (RTTI .?AVCPlayerLocalPredictedData@@): the local player's predicted data block (vtable 0x10470490).
#pragma once

class CPlayerLocalPredictedData
{
public:

	int m_i04;		// 0x04
	int m_i08;		// 0x08
	int m_i0c;		// 0x0c
	int m_i10;		// 0x10
	int m_aData[8];	// 0x14: eight dwords cleared with the block

	CPlayerLocalPredictedData *sub_100bce00();	// initialiser: vtable 0x10470490, the dwords at 0x04..0x10 and the eight at 0x14 cleared; returns this
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the slots CPlayerLocalPredictedData adds to its base's vtable: 0-0, vfuncK at slot K
	virtual void vfunc0();
};
