#pragma once

// A table of 12-byte slots after a 4-byte head (0x100290c0 looks up a handle in it): the slot's first dword is the
// value, the second its serial. The class's real name is not known yet.
struct CUnknown100290c0Slot
{
    unsigned int m_Value;
    int m_Serial;
    int m_pad08;
};

class CUnknown100290c0
{
public:
    unsigned int sub_1007aca0(unsigned int *pHandle);
    char m_pad0000[4];
    CUnknown100290c0Slot m_Slots[1];
};
