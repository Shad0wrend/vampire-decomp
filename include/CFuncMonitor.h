// CFuncMonitor: security-camera monitor brush. Layout declared flat (vptr and base members are padding)
// until the bases are recovered. Only what decompiled code needs.
#pragma once

struct CFuncMonitorHandle
{
	unsigned int m_Index;
};

class CFuncMonitor
{
public:
	char pad0[0x8c];
	CFuncMonitorHandle m_hCamera;	// EHANDLE at +0x8c

	// Slot 32, called directly so far; declared as a plain member.
	bool vfunc32(void *pEntity);	// true if pEntity is the camera or no camera is set
};
