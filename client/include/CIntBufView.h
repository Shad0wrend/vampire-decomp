// CIntBufView: a growable buffer of 4-byte elements: count at +0, capacity at +4, data at +8 (vgui2 TextEntry's helper).
#pragma once
class CIntBufView
{
public:
	int m_nCount;
	int m_nCapacity;
	int *m_pData;
	void sub_101b1cb0(int nNeeded);
	void sub_101b1d40(int nNeeded);
};
