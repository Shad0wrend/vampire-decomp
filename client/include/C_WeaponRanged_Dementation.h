// C_WeaponRanged_Dementation: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases; nothing else yet
#pragma once
#include "C_WeaponRanged_Targeted.h"

class C_WeaponRanged_Dementation : public C_WeaponRanged_Targeted
{
public:
	C_WeaponRanged_Dementation();
	virtual int vfunc16();
private:
	char m_pad0014[0x9a8 - 0x14];
};
