// CHudEntity: declared by pcdecomp transplant for 0x1012ede0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

class CHudEntity
{
public:
	CHudEntity *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void vfunc104();	// slot 104: the text at +0x454 (the default string when unset) through the global at 0x1070b22c (slot 13, flags 0), stored at +0x458
	int vfunc124();	// slot 124 (debug text overlay): CBaseEntity::vfunc124, then with the text overlay bit set the frame, position, size and colour lines through engine slot 35; returns the next line

	int sub_100a02b0();	// CBaseEntity::vfunc124 (stub 0x100018cf), called directly: returns the first free text line

	char m_pad0000[0x1a0];
	unsigned char m_r1a0;	// 0x1a0
	unsigned char m_g1a1;	// 0x1a1
	unsigned char m_b1a2;	// 0x1a2
	char m_pad01a3[0x224 - 0x1a3];
	unsigned char m_bDebugOverlays224;	// 0x224
	char m_pad0225[0x2e0 - 0x225];
	int m_nEdict2e0;	// 0x2e0
	char m_pad02e4[0x454 - 0x2e4];
	char *m_p454;	// 0x454
	int m_n458;	// 0x458
	int m_nFrame45c;	// 0x45c
	float m_flX460;	// 0x460
	float m_flY464;	// 0x464
	float m_flW468;	// 0x468
	float m_flH46c;	// 0x46c
public:
	int vfunc80();
	int vfunc81();
	typedef int Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
};
