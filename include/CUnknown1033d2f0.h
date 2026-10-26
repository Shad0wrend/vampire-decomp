#pragma once

// The class of 0x1033d2f0 is not known yet: two bit masks at +0xeb0 (for a non-negative flag) and +0xeb4 (for a negative
// flag, tested without its sign bit).
class CUnknown1033d2f0
{
public:
    bool sub_1033d2f0(int nFlags);	// 0x1033d2f0: whether the flag's bits meet the matching mask

    char m_pad0000[0xeb0];
    int m_nMaskPos;	// +0xeb0
    int m_nMaskNeg;	// +0xeb4
};
