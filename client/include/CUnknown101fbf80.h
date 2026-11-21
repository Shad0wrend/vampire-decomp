#pragma once

// The class of 0x101fbf80 is not known yet: three dwords (x, y, z) that its test compares with the arguments.
class CUnknown101fbf80
{
public:
    bool sub_10159b10(int a, int b, int c, int d, int e);	// 0x101fbf80: true when a, b, c equal the three dwords (d and e are not read)

    int m_x;	// +0x00
    int m_y;	// +0x04
    int m_z;	// +0x08
};
