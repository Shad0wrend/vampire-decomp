// vgui2::Panel: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, its operator delete; nothing else yet
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__IClientPanel.h"

namespace vgui2
{
class Panel : public vgui2::IClientPanel
{
public:
	virtual ~Panel();
	static void operator delete(void *pMem);
};
}
