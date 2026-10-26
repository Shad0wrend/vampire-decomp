#pragma once

// The class of 0x10247c10 is not known yet: a dword at +0 (cleared by the constructor 0x10247c10, which takes three
// arguments: a stdcall call with the first one, then the member 0x1000af92 with the other two).
class CUnknown10247c10
{
public:
    CUnknown10247c10 *sub_10247c10(int a, int b, int c);	// 0x10247c10: constructor body, returns this

    int m_n00;	// +0x00
};
