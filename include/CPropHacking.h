// CPropHacking: declared by pcdecomp transplant for 0x10219ee0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CRestore;
class CSave;

struct CPropHackingRecord	// 0xd4 byte element of the array at +0x9a0
{
	char m_pad0000[0xd4];
};

struct CPropHackingScreenRecord	// 0x2c0 byte element of the array at +0xa14
{
	char m_szFirst[0x20];	// 0x00
	char m_szSecond[0x20];	// 0x20
	char m_szText[0x280];	// 0x40
};

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
	void sub_1021a1c0();	// stub 0x10003deb, run at the end of the constructor
	void sub_10218ff0(int a, int b);	// sends the user message 0 with the byte 1 and the two values to every player but the one of this entity (a reliable entity message filter)
	const char *sub_10219400(int index);	// stub 0x1000bde8: the screen text number index
	void sub_1021b410();	// prints the current screen line (user name from the handle at +0x8c) and the selected record, then clears bit 1 of +0x81c and sub_10219120
	void sub_10218db0();	// stub 0x10005812: starts a new page, run first by sub_1021c260
	void sub_10219240();	// stub 0x1000f196: ends the page, run last by sub_1021c260
	void sub_10219270();	// stub 0x100150f0: ends the page of the command screens, run last by sub_1021c3c0
	void sub_1021b140(const char *pszText);	// stub 0x10013aac: starts a new screen page with the text (centred)
	void sub_1021c3c0(int a, char *pszCommand);	// the fallback of AcceptCmd (vfunc273) for an unknown command: plays the error sound (g_1074f75c), starts a page headed by the screen text 5 ("%s: %s" with the command when it is not empty), prints the texts 6 and 7, the text 0x12 and sub_10218ff0(0, the line count - 1), then ends the page
	void sub_1021c260();	// prints the selected record (+0x9f4 of the array at +0xa14): the screen texts 0x17 / 0x16 with its three strings, then the five heading texts 0x18..0x1c
	void sub_1021a740();	// a random "noise" line: a random column and row (RandomInt within the line width left after the text at +0x904 and the screen height at +0x814), one of two page printers, the text at +0x904, then the next think at +0x9e4 seconds ahead
	void sub_102189e0(const char *pszText);	// sends the text to every player but the one of this entity, reliably, in chunks of at most 250 characters (user message 0, byte 2, the chunk as a string)
	bool sub_1021aaa0(int a, char *pszCommand);	// AcceptCmd helper (called by vfunc273): matches the command against the screen texts 0x21..0x24, 0x11
	void sub_10167fd0();	// stub 0x10014a6a
	void sub_1021aca0();	// stub 0x10002fae
	void sub_1021c390(int a);	// stub 0x1000137a

	char m_pad03e0[0x814 - 0x3e0];
	int m_n0814;	// 0x814
	char m_pad0818[4];
	unsigned int m_flags081c;	// 0x81c
	char m_pad0820[0x83c - 0x820];
	char m_b083c;	// 0x83c
	char m_pad083d[0x904 - 0x83d];
	char m_szText0904[0x984 - 0x904];	// 0x904: the text line
	char m_b0984;	// 0x984
	char m_b0985;	// 0x985
	char m_pad0986[0x98c - 0x986];
	int *m_pnCounts098c;	// 0x98c: the per screen counters
	char m_pad0990[0x998 - 0x990];
	int m_nCounts0998;	// 0x998: the number of counters
	char m_pad099c[0x9a0 - 0x99c];
	CPropHackingRecord *m_pRecords09a0;	// 0x9a0
	char m_pad09a4[0x9ac - 0x9a4];
	int m_n09ac;	// 0x9ac
	char m_pad09b0[0x9dc - 0x9b0];
	int m_n09dc;	// 0x9dc
	int m_n09e0;	// 0x9e0
	float m_flDelay09e4;	// 0x9e4
	char m_pad09e8[0x9ec - 0x9e8];
	char m_b09ec;	// 0x9ec
	char m_pad09ed[0x9f4 - 0x9ed];
	int m_nSelected09f4;	// 0x9f4: the selected record
	char m_pad09f8[0xa10 - 0x9f8];
	char m_bEmailState;	// 0xa10
	char m_pad0a11[0xa14 - 0xa11];
	CPropHackingScreenRecord *m_pScreenRecords0a14;	// 0xa14
	char m_pad0a18[0xa20 - 0xa18];
	int m_n0a20;	// 0xa20
	char m_pad0a24[0xa28 - 0xa24];
	char m_szEmailState[0x80];	// 0xa28
	char m_pad0aa8[0xc28 - 0xaa8];
	int m_n0c28;	// 0xc28
	char m_b0c2c;	// 0xc2c
};
