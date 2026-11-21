// StatDefault3: default item object (0xe0 bytes) used by a list lookup; name provisional.
#pragma once

class CStatDefault3List;

struct StatDefault3
{
	int m_0;	// 0x00
	int m_4;	// 0x04
	const char *m_pszName;	// 0x08
	const char *m_pszName0c;	// 0x0c
	const char *m_pszDisplayName;	// 0x10
	int m_14;	// 0x14
	int m_18;	// 0x18
	int m_1c;	// 0x1c
	int m_20;	// 0x20
	float m_24;	// 0x24: NormalFootfallVol
	float m_28;	// 0x28: NormalFootfallDist
	float m_2c;	// 0x2c: HeavyFootfallVol
	float m_30;	// 0x30: HeavyFootfallDist
	int m_34;	// 0x34: NpcFakeReloadCountMin
	int m_38;	// 0x38: NpcFakeReloadCountMax
	int m_3c;	// 0x3c: Clan
	const char *m_pszMBody[6];	// 0x40: M_Body, M_Body0..
	const char *m_pszFBody[6];	// 0x58: F_Body, F_Body0..
	const char *m_pszFHands;	// 0x70
	const char *m_pszMHands;	// 0x74
	union { int m_78; const char *m_pszGib; };	// 0x78: DeathGib model
	union { int m_7c; const char *m_pszGibParticle; };	// 0x7c: DeathGibParticle
	int m_80;	// 0x80
	int m_84;
	int m_88;
	bool m_8c[12];	// 0x8c..0x97, [5] == true by default
	bool m_98[10];	// 0x98..0xa1
	char pad_a2[2];
	int m_a4;	// 0xa4
	bool m_a8;
	bool m_a9;
	char pad_aa[2];
	int m_ac;	// 0xac
	int m_b0;	// 0xb0
	int m_b4;
	int m_b8;
	float m_bc[3];	// 0xbc.. 1.0f
	float m_c8;
	float m_cc;	// 0xcc
	int *m_d0[2];	// 0xd0..0xd7: heap arrays freed by the destructor
	int *m_pd8;	// 0xd8: array of 17 ints
	int *m_dc;	// 0xdc: heap array freed by the destructor
	StatDefault3(int);
	~StatDefault3();
	const char **sub_1013f3a0(const char **pOut, int n);	// the n-th (clamped 0..5) name of the dword array at +0x40, stored to *pOut and returned
	const char **sub_1013f3d0(const char **pOut, int n);
		// the hands model: +0x70 (bMale 0) / +0x74 (1), stored to *pOut and returned	// like sub_101d4e70 for the array at +0x58
	int sub_1013f440(int n);	// stub 0x1000295a: index of the n-th used slot
		// stub 0x100054ca
	void sub_1013e3a0();	// stub 0x10012a12: resets the item before it is loaded from a data node
	void sub_1013e530(StatDefault3 *pParent);	// stub 0x1000a245: fills every unset field (the zero ints, the lists, the flag bytes and floats) from the parent item
		// stub 0x10005ba5: loads the item from a "ClanData" node (called by Loader::sub_101d56f0)
	void sub_1013f180(void *pNode, char *pTable, int *pOut);	// stub 0x1000a32b: loads the item from a "ClanData" node
		// stub 0x100135a7: applies the clan item to its owner (run by the clan console command)
};
