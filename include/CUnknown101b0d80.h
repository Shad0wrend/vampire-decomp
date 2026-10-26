// CUnknown101b0d80: the owner of 0x101b0d80 (only what matched code needs; the real class is not known yet).
#pragma once

class CUnknown101b0d80
{
public:
	void sub_101b0d80(int a);	// asks the engine (slot 35) for the index of the edict at +0x2e0 and passes it with a to sub_101b1040
	char m_pad0000[0x2e0];
	int m_n2e0;	// +0x2e0: the edict
};
