#pragma once

// The class of 0x101f73b0 is not known yet: a dword at +8 (the value looked up under "InternalName") and +0xc.
class CUnknown101f73b0
{
public:
    void sub_10156f40(int a, int b);	// 0x101f73b0: stores b at +0xc, then +8 = the dword sub_102038e0(&b, a, "InternalName") points to

    char m_pad0000[8];
    int m_n08;	// +0x08
    int m_n0c;	// +0x0c
};
