// CPhysicsCannister: declared by pcdecomp transplant for 0x10150670 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CVDmg_t;

struct CCannisterDamageInfo	// the damage info handed to slot 142
{
	CVDmg_t *m_pDmg;	// 0x00
	char m_pad04[0x0c];
	unsigned int m_flags10;	// 0x10 (of the record behind m_pDmg, read through it)
};

struct CCannisterTakeInfo
{
	CVDmg_t *m_pDmg;	// 0x00
	char m_pad04[0x28];
	int m_field2c;	// 0x2c
	float m_flDamage;	// 0x30
	char m_pad34[4];
	unsigned int m_nDamageType;	// 0x38
};

class CPhysicsCannister
{
public:
	CPhysicsCannister *vfunc5(unsigned int flags);
	void sub_10001ebf();
	void vfunc99(const float *pRay, int b, int c);	// slot 99: world-space bounds of the collision property at +0x270 tested against the two vectors at pRay (sub_102404e0); when they hit forwards its arguments to the base slot 99 (sub_100956e0)
	void sub_100956e0(const float *pRay, int b, int c);	// CBaseAnimating::vfunc99 (stub 0x1000dd0a), called directly
	void vfunc103();	// slot 103 (Spawn): slot 104, the model name (slot 9) through slot 105, blood color -1, the "CBaseEntity::AddSolidFlags" scope trace around SetSolidFlags(flags | 1), take-damage mode 2, think time 0, health 0x19 when not positive, stamps the creation time (+0x174), clears +0x6f0..0x6f8 and +0x19e4, AddFlag(0x20000000), then slot 223
	int vfunc142(CCannisterTakeInfo *pInfo);	// slot 142 (OnTakeDamage): without a take-damage mode returns 0; for a live cannister subtracts the damage from the health (+0x210), explodes at zero, else may start the leak; for an already leaking one ends it on fire / explosion damage
	void sub_10150e80();	// removes the physics object at +0x19dc (sub-object slot 3 with the object at +0x36c, then slot 40 of the global at 0x10723940), clears the fields at +0x17c / +0x19e8 / +0x19e4, calls sub_101510c0() when +0x19e0 is set, then slot 7 of the global at 0x1070b248 with the edict's (+0x2e0) index (engine slot 35) for the string at +0x19f8
	void sub_101510c0();	// called through the stub at 0x1000abeb
	void sub_10150910(int a, void *b);	// stub 0x1000c08b
	void sub_10150f50();	// stub 0x1000201d

	char m_pad0000[0x1fc];
	int m_nTakeDamage;	// 0x1fc
	char m_pad0200[0x10];
	int m_iHealth;	// 0x210
	char m_pad0214[0x19e4 - 0x214];
	char m_bLeaking;	// 0x19e4
	char m_pad19e5[0x19f4 - 0x19e5];
	float m_flLeakStart;	// 0x19f4
};
