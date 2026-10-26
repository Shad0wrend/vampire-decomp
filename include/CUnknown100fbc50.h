#pragma once

// The class of 0x100fbc50 is not known yet: a float at +0x498 (a time, 0.1 s is added to it) and the member
// 0x1000fb23 that takes the new value.
class CUnknown100fbc50
{
public:
    void sub_100fbc50();	// 0x100fbc50: passes the value at +0x498 to sub_10004845 (0, value) and calls sub_1000fb23 with value + 0.1f
    void sub_1000fb23(float flValue);	// stub 0x1000fb23, called directly

    char m_pad0000[0x498];
    float m_fValue498;	// +0x498
};
