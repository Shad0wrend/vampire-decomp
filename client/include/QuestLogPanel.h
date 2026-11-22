// QuestLogPanel: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, its operator delete; nothing else yet
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include <stdlib.h>
#include "vgui2__PropertyPage.h"

class QuestLogPanel : public vgui2::PropertyPage
{
public:
	virtual ~QuestLogPanel();
	static void operator delete(void *pMem) { free(pMem); }
};
