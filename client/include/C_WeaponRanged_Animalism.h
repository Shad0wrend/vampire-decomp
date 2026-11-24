// C_WeaponRanged_Animalism: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases; nothing else yet
#pragma once
#include "C_WeaponRanged_Targeted.h"

class C_WeaponRanged_Animalism : public C_WeaponRanged_Targeted
{
public:
	C_WeaponRanged_Animalism();
	virtual int vfunc16();
	virtual bool vfunc189(int a);
	virtual void vfunc167();
private:
	char m_pad0014[0x9a8 - 0x14];
};
