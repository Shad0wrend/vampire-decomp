// CPlayerBitVec.h: the voice code's player bit vector (CBitVec<32>, one dword) with the SDK's clearing constructor; the
// voice source defines its own copy with the accessors, so the initializer units alone see this one.
#pragma once
#ifdef PCD_INITIALIZERS
struct CPlayerBitVec
{
	CPlayerBitVec() { for (int i = 0; i < 1; i++) m_DWords[i] = 0; }
	unsigned long m_DWords[1];
};
#endif
