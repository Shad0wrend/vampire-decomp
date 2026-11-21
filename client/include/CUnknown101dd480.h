#pragma once

// 0x101dd480: the constructor of an object whose head is a -1 word, two counters and two flag bytes, with two
// sub-objects at +0x10 and +0x20 (each built by its own constructor, 0x1001232d and 0x10002036). The class's real
// name is not known yet.
class CUnknown101dd480
{
public:
    CUnknown101dd480 *sub_10147e30();
    int m_nHead;    // +0x00: -1
    int m_n04;      // +0x04
    int m_n08;      // +0x08
    char m_b0c;     // +0x0c
    char m_b0d;     // +0x0d
};
