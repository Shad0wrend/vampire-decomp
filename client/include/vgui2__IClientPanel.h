// vgui2::IClientPanel: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases; nothing else yet
#pragma once

namespace vgui2
{
class IClientPanel
{
public:
	IClientPanel()
	{
		*(char *)((char *)this + 0x1c) = 0;
		*(char *)((char *)this + 0x1d) = 0;
		*(char *)((char *)this + 0x1e) = 0;
		*(char *)((char *)this + 0x1f) = 0;
		*(char *)((char *)this + 0x20) = 0;
		*(char *)((char *)this + 0x21) = 0;
		*(char *)((char *)this + 0x22) = 0;
		*(char *)((char *)this + 0x23) = 0;
		*(int *)((char *)this + 0x34) = 0;
		*(int *)((char *)this + 0x38) = 0;
		*(int *)((char *)this + 0x3c) = 0;
	}
};
}
