// CHudElement: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, its operator delete; nothing else yet
// the destructor is slot 0 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include <stdlib.h>

class CHudElement
{
public:
	virtual ~CHudElement();
	static void operator delete(void *pMem) { free(pMem); }
};
