// vgui2::TextImage: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor; nothing else yet
// the destructor is slot 5 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__Image.h"

namespace vgui2
{
class TextImage : public vgui2::Image
{
public:
	virtual ~TextImage();
};
}
