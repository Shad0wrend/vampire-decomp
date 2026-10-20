// CUnknown101da960: helper object whose method looks an entry up in a global pointer table (0x105a1bdc); real name not yet known.
#pragma once

class CUnknown101da960
{
public:
	const char *sub_101da960(int index);
	bool sub_101da980(int index);	// true when the entry exists (called through the stub at 0x1000d788)
	void sub_101dadd0();	// prints "[AffectsFilter]:" and every existing entry (0..14) with Msg
};
