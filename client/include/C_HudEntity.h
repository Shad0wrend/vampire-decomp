#pragma once
#include "C_BaseEntity.h"

class C_HudEntity : public C_BaseEntity
{
public:
	C_HudEntity() {}
	virtual ~C_HudEntity() { sub_100bc660(); }
	void sub_100bc660();
};
