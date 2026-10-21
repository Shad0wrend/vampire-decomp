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
	CFuncMonitor *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
	void sub_101150f0(const char *szName);	// slot 113 helper: finds the entity of that name, keeps it at +0x45c when it is a CPointCamera (else null) and its edict index (engine slot 35) at +0x458 (0 without a camera)
	void vfunc77();	// slot 77: unless the flag byte (sub_10014da8) is set, hands the camera to slot 42 and forgets it; then CBaseEntity::vfunc77
	bool sub_10014da8();	// stub 0x10014da8: the byte at +0xf4
	void sub_100011cc();	// CBaseEntity::vfunc77, called directly (stub 0x100011cc)
};
