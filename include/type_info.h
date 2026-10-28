// type_info: the C++ runtime type descriptor class; only the raw name getter that the game's code calls directly with a
// type descriptor of the program in ecx is declared (a descriptor of a game class at a fixed address).
#pragma once

class type_info
{
public:
	const char *raw_name() const;	// 0x104308a2
};
