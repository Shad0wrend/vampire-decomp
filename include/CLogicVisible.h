// CLogicVisible: declared by pcdecomp transplant for 0x1020f7e0 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CLogicVisible : public CBaseEntity
{
public:
	CLogicVisible *sub_1020f990();
	virtual CBaseEntity *vfunc5(unsigned int flags);	// scalar deleting destructor, declared as a plain member
	void sub_1000cb8a();	// destructor body of the base class
public:
    virtual datamap_t * vfunc82();
};
