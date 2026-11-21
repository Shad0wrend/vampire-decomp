#pragma once

// The class of 0x101f0b80 is not known yet: two dwords at +4 (the value looked up under "InternalName") and +8.
class CUnknown101f0b80
{
public:
    void sub_10152bd0(int a, int b);	// 0x101f0b80: stores b at +8, then +4 = the dword sub_102038e0(&b, a, "InternalName") points to

    char m_pad0000[4];
    int m_n04;	// +0x04
    int m_n08;	// +0x08
};
