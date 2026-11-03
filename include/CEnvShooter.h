// CEnvShooter: declared by pcdecomp transplant for 0x100f5ad0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "string_t.h"

struct datamap_t;

#include "Vector.h"

class CBaseEntity;
class CGib;

class CEnvShooter
{
public:
	CEnvShooter *vfunc5(unsigned int flags);
	void vfunc104();	// slot 104: CGibShooter::vfunc104, then the model of slot 212(+0x480) and the precached model name of slot 9 into +0x45c
	void sub_1000cb8a();

	// Slot 241, declared as a plain member.
	CGib *vfunc241();	// "CEnvShooter::CreateGib": creates a "gib" entity (warns when it is the wrong class), gives it the model name of slot 9, a random body from the body count at +0x470, and copies the shooter's settings (+0x458, +0x16c, +0x1a0, +0x168, +0x47c, +0x478, life time +0x468 + curtime); with flag 2 of +0x204 also lights it (free function sub_100f54c0 + sub_100f5600)
	// Slot 242, declared as a plain member.
	CBaseEntity *vfunc242(Vector origin, Vector angles);	// "CEnvShooter::CreateEnvGib"-like: creates a prop_physics at origin / angles with the model of slot 9, the skin-like value at +0x478 copied to +0x670, spawns it, sets bits 5 and 7 of +0x19c and applies a random 0.95..1.05 times the float at +0x468; returns it

	char m_pad0000[4];	// the vtable pointer
	char m_pad0004[0x168 - 4];
	int m_n168;	// 0x168
	int m_n16c;	// 0x16c
	char m_pad0170[0x1a0 - 0x170];
	int m_n1a0;	// 0x1a0
	char m_pad01a4[0x204 - 0x1a4];
	unsigned int m_flags204;	// 0x204
	char m_pad0208[0x458 - 0x208];
	int m_n458;	// 0x458
	char m_pad045c[0x468 - 0x45c];
	float m_flLife468;	// 0x468
	char m_pad046c[4];
	int m_nBodies470;	// 0x470
	char m_pad0474[4];
	int m_n478;	// 0x478
	int m_n47c;	// 0x47c
public:
	datamap_t * vfunc82();
	string_t m_iszShootModel;	// 0x0480
	char m_pad0484[0x488 - 0x484];
};
