// CBaseTerminal: computer terminal entity. Only slots that decompiled code needs are declared, as plain members.
#pragma once

struct datamap_t;

class CBaseTerminal
{
public:
	char m_pad0[0x8c];
	unsigned int m_hUser;	// 0x8c: handle of the entity using the terminal
	char m_pad0090[0x80c - 0x90];
	char m_b080c;	// 0x80c: the terminal is usable
	char m_b080d;	// 0x80d: the terminal is in use
	char m_pad080e[0x810 - 0x80e];
	int m_nScreenW810;	// 0x810: clamped to [4, 0x24] by vfunc103 (Spawn)
	int m_nScreenH814;	// 0x814: clamped to [2, 0x18] by vfunc103
	char m_pad0818[4];
	int m_n081c;	// 0x81c: cleared by vfunc103
	int m_n0820;	// 0x820: cleared by vfunc103
	char m_b0824;	// 0x824: cleared by vfunc103
	char m_pad0825[0x82c - 0x825];
	union {
		char m_b082c;	// 0x82c: set while a screen is shown (the user is turned towards it)
		int m_n082c[4];	// 0x82c: four dwords cleared together on use
	};
	void sub_10217d60();	// stub 0x1001131a, run by vfunc41 while the byte at +0x82c is set
	void vfunc39(void *pPlayer);	// slot 39 (CBaseEntity::vfunc39 signature): the stub 0x1000f515 takes the one pointer argument
	void vfunc41(void *pArg);	// slot 41: the stub 0x1000f321 takes the one pointer argument
	void vfunc71();
	void vfunc103();	// slot 103 "CBaseTerminal::Spawn" (0x10217880, plain member like the others; the slots below are called through a CBaseEntity view): CBaseVampireSkillEntity::vfunc103 (sub_1020ab90), SetSolid(2), SetSize(GetModelPtr(-1)+0xb4, GetModelPtr(-1)+0xc0), RemoveSolidFlags(0xc), slot 93 (0, 0), sub_100b3b00, +0x810 / +0x814 clamped, +0x81c / +0x820 / +0x824 cleared, then a tail jump to slot 71. Use `CBaseEntity *pEnt = (CBaseEntity *)this` for m_name26c, vfunc93, the ScopeTrace name and the collision property at +0x270
	int vfunc34(int a);
	int vfunc35(int a);	// slot 34: false unless the byte at +0x80c is set; false while the user handle at +0x8c resolves, else sub_10218710(a) != 0
	char sub_102180c0(int a);	// slot 32 "CBaseTerminal::CanUse"-like: false unless the byte at +0x80c is set and a (an entity with an edict at +0xa8) is given; when the user handle at +0x8c resolves to a different entity also false, else sub_10218710(a) != 0
	CBaseTerminal *vfunc5(unsigned int flags);	// as in CMomentaryRotButton (transplant)
	int sub_10218710(int a);	// called through the stub at 0x10007dba: whether the viewer (a, an entity) is looking at the screen: the direction from the "screen" attachment to "screen_axis" against the viewer's position (slot 193), above 0.7f
	void vfunc42(void *pPlayer);	// slot 42 "CBaseTerminal::StopUse"-like: closes the terminal screen for the user (sub_10218820(2, 0)), re-enables the player's input (sub_1015ef60, sub_101815b0(1) / (8)), clears the in-use byte at +0x80d, tells the global at 0x1070b248 about the terminal's edict index, then the CBaseVampireSkillEntity version
	void sub_10218820(int a, int b);	// sends the user message g_10726070 (a, b) reliably to the player of the entity at m_hUser
public:
	int vfunc80();
	int vfunc81();
	datamap_t * vfunc82();
	void vfunc273(int, int);
	int vfunc274();
	void vfunc275();
	void vfunc276();
	void vfunc277();
	int vfunc278(int);
};
