// CPhysBox: physics box entity.
#pragma once
#include "CBaseEntity.h"

// The helper object embedded at CPhysBox+0x498.
class CPhysBoxHelper498
{
public:
	void sub_10010794(int a, CBaseEntity *owner, int b);
};

class CPhysBox : public CBaseEntity
{
public:
	bool sub_1004e1c0(int a);	// slot 32 override: true when the entity looked up from a (sub_104115b0) is this
	void sub_1004e910(int a);	// slot 242 override: forwards to the helper at +0x498 with this
	bool vfunc223();	// slot 223 override: warns when there is no physics object (+0x36c), otherwise wakes it / copies the origin to +0x458 and sets the flag object at +0x1b0
	void vfunc243(int a);	// as in CPhysBox (transplant)
	CPhysBox *sub_1004e0a0();	// as in CKeepUpright (transplant)
	void sub_102d08e0(int a);	// provisional, like sub_1004e910 (transplant)
};
