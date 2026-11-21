// vgui2::Button: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor; nothing else yet
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__Label.h"

namespace vgui2
{
class Button : public vgui2::Label
{
public:
	virtual ~Button();
};
}
