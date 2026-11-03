// CPropKeypad: keypad prop. Declared standalone: only the members the matched functions touch.
#pragma once

struct datamap_t;

class CBasePlayer;

class CPropKeypad
{
public:
	char m_pad0000[0x8c];
	unsigned int m_hActivator;	// 0x8c
	char m_pad0090[0x17c - 0x90];
	float m_flNextThink17c;	// 0x17c
	char m_pad0180[0x814 - 0x180];
	int m_n0814;	// 0x814: the selected count (vfunc278 sends count - 1)
	char m_pad0818[0x828 - 0x818];
	int m_nKeySound828;	// 0x828: the precached keystroke sound
	char m_b082c;	// 0x82c: first byte of the four cleared dwords at +0x82c of CUnknown10217f50
	char m_pad082d[0x840 - 0x82d];
	char m_szTitle840[0x40];	// 0x840: the title text of the screen
	const char *m_pszCode;	// 0x880
	const char *m_pszTextID884;	// 0x884: the text id the title is looked up with
	char m_pad0888[0x30];
	char m_bFlag8b8;	// 0x8b8
	char m_bFlag8b9;	// 0x8b9

	const char *sub_1021dc20();	// slot 274: the string at +0x880, or "" when it is null
	void vfunc104();	// slot 104: precaches the keystroke sound, CBreakableProp::vfunc104, loads the text strings, sets a think function and thinks again in a second
	char vfunc32(int a);	// slot 32: 0 when the byte at +0x8b8 is set, else CBaseTerminal::vfunc32
	void vfunc42(CBasePlayer *pPlayer);	// slot 42: CBaseTerminal::vfunc42(pPlayer), then pPlayer->sub_1017cef0(0)
	CPropKeypad *sub_1021d890();	// constructor body: CBaseTerminal base constructor (0x10014f4c), two member constructors (+0x888, +0x8a0), vtables, flags at +0x8b8/+0x8b9; returns this
	CPropKeypad *vfunc5(unsigned int flags);	// scalar deleting destructor, declared as a plain member: destroys the nine members, then the base; deletes this when bit 0 of flags is set
	void vfunc39(CBasePlayer *pPlayer);	// slot 39: CBaseTerminal::vfunc39 on the player, rebuilds the screen, then the "Hacking" record handed to the player's sub_1017cef0
	void vfunc41(void *pArg);	// slot 41: CBaseTerminal::vfunc41 on the argument, then unless the byte at +0x8b8 is clear, the stub 0x10014a6a with the argument in ecx
	void vfunc275();	// slot 275: fires the output at +0x888 (activator: the entity of the handle at +0x8c), sets the byte at +0x8b8, clears +0x8b9 and rebuilds the screen (sub_1021df90)
	void vfunc276();	// slot 276: fires the output at +0x8a0 (activator: the entity of the handle at +0x8c), sets the byte at +0x8b9, rebuilds the screen (sub_1021df90) and stores the id of the global record named "error" in a global (-1 when there is none)
	void sub_1021df90();	// rebuilds the keypad screen (stub 0x1001347b), called directly
	void vfunc273(CBasePlayer *pPlayer, const char *pszCommand);	// slot 273: unless the byte at +0x82c is set: "quit" / "exit" (first 16 characters) let the player leave (sub_10167fd0), any other non-empty command goes to sub_10217f50(0, command); the screen is rebuilt after each
	void sub_1021dbd0();
	void sub_1021da40();	// "CPropKeypad::LoadTextStrings": sets the title to "##ERROR##", loads vdata/HackTerminals/prop_keypad.txt and takes the TitleText of the "keypad" entry whose TextID is a prefix match of the text id at +0x884; Warning "Error in CPropKeypad::LoadTextStrings for %s" when the file does not load
public:
	int vfunc33();
	datamap_t * vfunc82();
	void vfunc113();
};
