// CPropHacking: declared by pcdecomp transplant for 0x10219ee0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CRestore;
class CSave;

class CPropHacking : public CBaseEntity
{
public:
	CPropHacking *vfunc5(unsigned int flags);
	void sub_1000befb();
	CPropHacking *sub_10219d40();	// as in CKeepUpright (transplant)
	void vfunc275();	// slot 275: sub_1021c890(the dword at +0x9e0), then stores the id of the global record named "access" in a global (-1 when there is none)
	void sub_1021c890(int a);	// called through the stub at 0x10003aa8
	void sub_1021a2f0(CRestore *pRestore);	// "CPropHacking::LoadGlobalEmailState": scope trace (entity name), when the byte at +0xa10 is set reads the 0x80 byte string at +0xa28 from pRestore under the entity name
	void sub_1021a3d0(CSave *pSave);	// "CPropHacking::SaveGlobalEmailState": as LoadGlobalEmailState, writing the string to pSave
	void sub_1021b030();	// prints the four help lines (screen texts 8..11, each when not empty, as "\n%s\n") after starting a new page with text 0x14, then sets the byte at +0x9ec
	void vfunc276();	// slot 276: counts the current screen (+0x9e0: -2 bumps +0xc28, a valid index bumps the counter in the array at +0x98c), switches the display (sub_10218820, sub_1021b5e0 / sub_1021c890), then stores the id of the global record named "error" in a global (-1 when there is none)
	void sub_10218820(int a, int b);	// stub 0x1000c77f, called directly
	void sub_1021b5e0(int a);	// stub 0x100139ad, called directly

	char m_pad03e0[0x83c - 0x3e0];
	char m_b083c;	// 0x83c
	char m_pad083d[0x98c - 0x83d];
	int *m_pnCounts098c;	// 0x98c: the per screen counters
	char m_pad0990[0x998 - 0x990];
	int m_nCounts0998;	// 0x998: the number of counters
	char m_pad099c[0x9e0 - 0x99c];
	int m_n09e0;	// 0x9e0
	char m_pad09e4[0x9ec - 0x9e4];
	char m_b09ec;	// 0x9ec
	char m_pad09ed[0xa10 - 0x9ed];
	char m_bEmailState;	// 0xa10
	char m_pad0a11[0xa28 - 0xa11];
	char m_szEmailState[0x80];	// 0xa28
	char m_pad0aa8[0xc28 - 0xaa8];
	int m_n0c28;	// 0xc28
};
