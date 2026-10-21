// CNPC_VCameraSecurity: declared by pcdecomp transplant for 0x10369e40 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VCameraSecurity : public CBaseEntity
{
public:
	CNPC_VCameraSecurity *vfunc5(unsigned int flags);
	void sub_100123af();
	CNPC_VCameraSecurity *sub_10369df0();	// as in CKeepUpright (transplant)
	CBaseEntity *sub_10369e70();	// finds the camera entity named by m_pCameraName (cached as a handle, looked up again once stale), returns it or null

	char m_pad03e0[0x6660 - 0x3e0];
	const char *m_pCameraName;	// 0x6660
	unsigned int m_hCamera;	// 0x6664
	char m_bCameraFound;	// 0x6668
};
