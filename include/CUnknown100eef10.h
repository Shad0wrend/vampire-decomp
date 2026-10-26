#pragma once

// The class of 0x100eef10 is not known yet: a flag byte at +0x648 that, when set, asks the object sub_1000ac8b(1)
// (its member 0x10007ee6 answers a count) whether it is positive.
class CUnknown100eef10
{
public:
    bool sub_100eef10();	// 0x100eef10

    char m_pad0000[0x648];
    char m_b648;	// +0x648
};
