// CPropHacking: declared by pcdecomp transplant for 0x10219ee0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CRestore;
class CSave;

struct CPropHackingRecord	// 0xd4 byte element of the array at +0x9a0
{
	char m_szName[0x30];	// 0x00
	char m_szText[0xd4 - 0x30];	// 0x30
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
	virtual void vfunc113();	// slot 113 "CPropHacking::vfunc113": CBreakableProp::vfunc113, a new screen page (sub_1021b140(0)), the think function sub_1021a740 and its first think after a random second; the line delay at +0x9e4 is at least 2.0f
	void sub_1018f3e0();	// CBreakableProp::vfunc113 (stub 0x10004dbd), called directly
	void vfunc272();	// slot 272: clears the counter of every screen (the array at +0x98c, count at +0x998) and the dword at +0xc28, then CBaseVampireSkillEntity::vfunc272
	void *vfunc274();	// slot 274: the record of the selected screen (+0x9e0; -2 gives the field at +0x944) as the pointer to its text (+0x30 into the record of the array at +0x9a0, 0xd4 bytes each)
	int vfunc268(int a);	// slot 268: the value (+0x40) of the selected record (+0x9e0) when it is positive; DevMsg "%s has invalid difficulty for subdir: %d" and 0 for an index out of range; else CBaseVampireSkillEntity::vfunc268 (also for -2)
	int sub_1020b1c0(int a);	// CBaseVampireSkillEntity::vfunc268 (stub 0x10010ac3), tail called
	const char *sub_100ab4f0();	// the entity's name for messages (stub 0x1000b5cd)
	void vfunc275();	// slot 275: sub_1021c890(the dword at +0x9e0), then stores the id of the global record named "access" in a global (-1 when there is none)
	void vfunc278(int a);	// slot 278: sub_10218ff0(0, the selected count - 1), then sub_10217ac0 with the screen text 0xc and the argument a
	char sub_1021c890(int a);	// switches to the screen a (-1: the main one, -2: the summary, else that record; false when a is beyond the count at +0x9ac), then plays the sound g_1074f754; called through the stub at 0x10003aa8
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
	void sub_1021ac30();	// starts a new page, then prints each line of the global table at 0x105af7c8 (up to its empty string) followed by a newline
	void sub_10218db0();	// stub 0x10005812: starts a new page, run first by sub_1021c260
	void sub_10219240();	// stub 0x1000f196: ends the page, run last by sub_1021c260
	void sub_10219270();	// stub 0x100150f0: ends the page of the command screens, run last by sub_1021c3c0
	void sub_1021b140(const char *pszText);	// stub 0x10013aac: starts a new screen page with the text (centred)
	void sub_1021c3c0(int a, char *pszCommand);	// the fallback of AcceptCmd (vfunc273) for an unknown command: plays the error sound (g_1074f75c), starts a page headed by the screen text 5 ("%s: %s" with the command when it is not empty), prints the texts 6 and 7, the text 0x12 and sub_10218ff0(0, the line count - 1), then ends the page
	void sub_1021c260();	// prints the selected record (+0x9f4 of the array at +0xa14): the screen texts 0x17 / 0x16 with its three strings, then the five heading texts 0x18..0x1c
	void vfunc42(void *pPlayer);	// slot 42: the save step of the use: sub_1021a3d0, the terminal base, the noise think function sub_1021a740 after m_flDelay09e8 seconds, a new page, the selection reset to -1 and the player's camera released
	void sub_10218220(void *pPlayer);	// CBaseTerminal::vfunc42 (stub 0x100080e4), called directly
	void sub_1021a740();	// a random "noise" line: a random column and row (RandomInt within the line width left after the text at +0x904 and the screen height at +0x814), one of two page printers, the text at +0x904, then the next think at +0x9e4 seconds ahead
	void sub_102189e0(const char *pszText);	// sends the text to every player but the one of this entity, reliably, in chunks of at most 250 characters (user message 0, byte 2, the chunk as a string)
	void sub_102193c0(int c);	// sends the one character c (formatted "%c") to every player but the one of this entity, through sub_102189e0
	void sub_1021a5b0(CBaseEntity *pPlayer);	// slot 39 "CPropHacking::OnUse"-like (CBaseTerminal::vfunc39 override, ret 4): sub_1021a1c0, the terminal base (sub_102181a0), sub_1021a2f0, ThinkSet(0, 0, 0), sub_1021aca0, sub_1021b410, makes the player a camera cinematic watching this terminal (sub_10070470 "Hacking", then CBasePlayer::sub_1017cef0), then the feat list default (id 2) value for the player (CVFeatSet::Find(2)->sub_101e56e0)
	void sub_102181a0(CBaseEntity *pPlayer);	// CBaseTerminal::vfunc39 (stub 0x1000f515), called directly
	void sub_1021aca0();	// stub 0x10002fae
	void sub_1021bd80();	// stub 0x10001df7, run first by the screen refresh
	void sub_10218b90();	// stub 0x100068c0
	void sub_10218ca0();	// stub 0x100156c7
	void sub_10219120();	// stub 0x1000aa1f, tail called by the screen refresh
	bool sub_1021b9c0(int a, const char *pszCommand);	// the command letters / numbers of AcceptCmd (vfunc273)
	void sub_1021bc90(int a);	// stub 0x10015569
	void sub_1021bc60();	// stub 0x1001497a
	void sub_1021bbf0(int a);	// stub 0x100056a5
	void sub_1021bfd0();	// stub 0x1000b7b2
	void sub_1021bc20x();	// stub 0x10001424
	unsigned char sub_10219ec0();	// CPropHacking::vfunc117 body (CBaseEntity::vfunc117 & 0xfd)
	void sub_1021c040();	// stub 0x10014f5b / 0x1021c040: tail of the sub_1021c000 and sub_1021b9c0 paths (the screen refresh), called with this
	char sub_1021b750(int a, const char *pszName);	// looks the screen named pszName up (first in the records at +0x9a0, then through the index list of the selected record in the records at +0x9b4) and switches to it
	void sub_1021c390(int a);	// stub 0x1000137a
	char sub_1021c6d0(int a);	// stub 0x1000e174
	void sub_1021c000();	// stub-less member: m_n0a0c = min(m_n0a04 / 10, m_n0a0c + 1), then sub_1021c040()

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
	char m_abVisited0986[6];	// 0x986: one flag per record, set once its screen has been shown
	int *m_pnCounts098c;	// 0x98c: the per screen counters
	char m_pad0990[0x998 - 0x990];
	int m_nCounts0998;	// 0x998: the number of counters
	char m_pad099c[0x9a0 - 0x99c];
	CPropHackingRecord *m_pRecords09a0;	// 0x9a0
	char m_pad09a4[0x9ac - 0x9a4];
	int m_n09ac;	// 0x9ac
	char m_pad09b0[4];
	void *m_p09b4;	// 0x9b4: array of 0x2b4 byte records
	char m_pad09b8[0x9c0 - 0x9b8];
	int m_n09c0;	// 0x9c0: the count of the records at +0x9b4
	char m_pad09c4[0x9dc - 0x9c4];
	int m_n09dc;	// 0x9dc
	int m_n09e0;	// 0x9e0
	float m_flDelay09e4;	// 0x9e4
	float m_flDelay09e8;	// 0x9e8: the delay of the first noise think
	char m_b09ec;	// 0x9ec
	char m_pad09ed[0x9f4 - 0x9ed];
	int m_nSelected09f4;	// 0x9f4: the selected record
	char m_pad09f8[0xa04 - 0x9f8];
	int m_n0a04;	// 0xa04: the count of the screen list (the lines of the selected record divided by 10 in sub_1021c000)
	char m_pad0a08[0xa0c - 0xa08];
	int m_n0a0c;	// 0xa0c: the current screen line, clamped to m_n0a04 / 10 by sub_1021c000
	char m_bEmailState;	// 0xa10
	char m_pad0a11[0xa14 - 0xa11];
	CPropHackingScreenRecord *m_pScreenRecords0a14;	// 0xa14
	char m_pad0a18[0xa20 - 0xa18];
	int m_n0a20;	// 0xa20: the index of sub_1021bbf0 must be below it
	char m_pad0a24[0xa28 - 0xa24];
	char m_szEmailState[0x80];	// 0xa28
	char m_pad0aa8[0xc28 - 0xaa8];
	int m_n0c28;	// 0xc28
	char m_b0c2c;	// 0xc2c
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc33();
    virtual int vfunc117();
    void vfunc277();	// as in CAI_Hint (transplant)
};
