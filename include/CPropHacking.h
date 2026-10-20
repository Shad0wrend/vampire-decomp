// CPropHacking: declared by pcdecomp transplant for 0x10219ee0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CRestore;

class CPropHacking : public CBaseEntity
{
public:
	CPropHacking *vfunc5(unsigned int flags);
	void sub_1000befb();
	CPropHacking *sub_10219d40();	// as in CKeepUpright (transplant)
	void vfunc275();	// slot 275: sub_1021c890(the dword at +0x9e0), then stores the id of the global record named "access" in a global (-1 when there is none)
	void sub_1021c890(int a);	// called through the stub at 0x10003aa8
	void sub_1021a2f0(CRestore *pRestore);	// "CPropHacking::LoadGlobalEmailState": scope trace (entity name), when the byte at +0xa10 is set reads the 0x80 byte string at +0xa28 from pRestore under the entity name

	char m_pad03e0[0x9e0 - 0x3e0];
	int m_n09e0;	// 0x9e0
	char m_pad09e4[0xa10 - 0x9e4];
	char m_bEmailState;	// 0xa10
	char m_pad0a11[0xa28 - 0xa11];
	char m_szEmailState[0x80];	// 0xa28
};
