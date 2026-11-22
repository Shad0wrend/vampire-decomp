// C_TEBubbles: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor; nothing else yet
// the destructor is slot 10 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseTempEntity.h"

class C_TEBubbles : public C_BaseTempEntity
{
public:
	virtual ~C_TEBubbles();
public:
	virtual int vfunc9();
};
