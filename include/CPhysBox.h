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
};
