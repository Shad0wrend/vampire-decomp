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
	void vfunc39(void *pArg);	// slot 39: CBaseEntity::vfunc39(pArg), then the entity found by "FuncMonitor" (sub_10070470) gets its byte at +0x5e8 cleared and pArg's sub_1017cef0 / sub_1015ef40 run
	void vfunc42(void *pCamera);	// slot 42: CBaseEntity::vfunc42(pCamera) on this, then pCamera's sub_1017cef0 / sub_1015ef60 / sub_101815b0 run
	CFuncMonitor *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
	void sub_101150f0(const char *szName);	// slot 113 helper: finds the entity of that name, keeps it at +0x45c when it is a CPointCamera (else null) and its edict index (engine slot 35) at +0x458 (0 without a camera)
	void vfunc180();	// slot 180: sub_101157c0(this); when the camera handle resolves, hands the camera to slot 42 and forgets it; then CBaseEntity::vfunc180
	void sub_1000cb94();	// CBaseEntity::vfunc180, tail called (stub 0x1000cb94)
	void vfunc77();	// slot 77: unless the flag byte (sub_10014da8) is set, hands the camera to slot 42 and forgets it; then CBaseEntity::vfunc77
	void vfunc113();	// slot 113: CBaseEntity::vfunc113, then sub_101150f0 with the camera's name (or the default at 0x106b8540), then sub_10115660(this)
	bool sub_10014da8();	// stub 0x10014da8: the byte at +0xf4
	void sub_100011cc();	// CBaseEntity::vfunc77, called directly (stub 0x100011cc)
	void sub_1015ef60();	// member of CFuncMonitor, CBaseTerminal, CPropSign (the same worker)
public:
	int vfunc80();
	int vfunc81();
	typedef int Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
};
