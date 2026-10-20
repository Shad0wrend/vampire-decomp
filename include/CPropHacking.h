// CPropHacking: declared by pcdecomp transplant for 0x10219ee0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CPropHacking : public CBaseEntity
{
public:
	CPropHacking *vfunc5(unsigned int flags);
	void sub_1000befb();
	CPropHacking *sub_10219d40();	// as in CKeepUpright (transplant)
	void vfunc275();	// slot 275: sub_1021c890(the dword at +0x9e0), then stores the id of the global record named "access" in a global (-1 when there is none)
	void sub_1021c890(int a);	// called through the stub at 0x10003aa8

	char m_pad03e0[0x9e0 - 0x3e0];
	int m_n09e0;	// 0x9e0
};
