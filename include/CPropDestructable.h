// CPropDestructable: declared by pcdecomp transplant for 0x101938d0 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

struct CPropDestructableDamage	// the 0x4c byte damage info handed to vfunc144: the attacker at +0x28, a value at +0x2c
{
	int m_data[19];
};

class CPropDestructable : public CBaseEntity
{
public:
	CPropDestructable *sub_10193940();
	void vfunc103();	// slot 103 "CPropDestructable::Spawn": remembers the model name (+0x388 -> +0x794), CBreakableProp::vfunc103, SetModel, stage counter +0x784 = 0, stage health +0x780 = health, AddFlag(0x40000), SetSolid(6) (inlined scope trace), then VPhysicsInitShadow-like sub_100a5bb0 when the dword at +0x788 is set, else VPhysicsInitNormal(6, 0, 0, 0); SetNPCTransparent(0)
	void sub_100a5bb0();	// stub 0x10007284, called by Spawn
	void vfunc144(const CPropDestructableDamage *pInfo);	// slot 144 "CPropDestructable::OnTakeDamage"-like: copies the damage info; when the stage counter (+0x784) reached the stage count (+0x77c) fires the output at +0x874 with the attacker and, with the byte at +0x790, breaks through CBreakableProp::vfunc144, else stops taking damage, clears bit 13 of the flags and sets +0x200 = 2; otherwise advances to the next stage (sub_10193cc0) and restores the health from +0x780
	void sub_10007c57(const CPropDestructableDamage *pInfo);	// CBreakableProp::vfunc144, called directly
	void sub_10193cc0(int stage, int a);	// switches to the given stage (stub 0x1000d35f)
};
