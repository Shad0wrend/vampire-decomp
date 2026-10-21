// CPropKeypad: keypad prop. Declared standalone: only the members the matched functions touch.
#pragma once

class CBasePlayer;

class CPropKeypad
{
public:
	char m_pad0000[0x82c];
	char m_b082c;	// 0x82c: first byte of the four cleared dwords at +0x82c of CUnknown10217f50
	char m_pad082d[0x880 - 0x82d];
	const char *m_pszCode;	// 0x880
	char m_pad0884[0x34];
	char m_bFlag8b8;	// 0x8b8

	const char *sub_1021dc20();	// slot 274: the string at +0x880, or "" when it is null
	char vfunc32(int a);	// slot 32: 0 when the byte at +0x8b8 is set, else CBaseTerminal::vfunc32
	CPropKeypad *sub_1021d890();	// constructor body: CBaseTerminal base constructor (0x10014f4c), two member constructors (+0x888, +0x8a0), vtables, flags at +0x8b8/+0x8b9; returns this
	CPropKeypad *vfunc5(unsigned int flags);	// scalar deleting destructor, declared as a plain member: destroys the nine members, then the base; deletes this when bit 0 of flags is set
	void vfunc276();	// slot 276: fires the output at +0x8a0 (activator: the entity of the handle at +0x8c), sets the byte at +0x8b9, rebuilds the screen (sub_1021df90) and stores the id of the global record named "error" in a global (-1 when there is none)
	void sub_1021df90();	// rebuilds the keypad screen (stub 0x1001347b), called directly
	void vfunc273(CBasePlayer *pPlayer, const char *pszCommand);	// slot 273: unless the byte at +0x82c is set: "quit" / "exit" (first 16 characters) let the player leave (sub_10167fd0), any other non-empty command goes to sub_10217f50(0, command); the screen is rebuilt after each
};
