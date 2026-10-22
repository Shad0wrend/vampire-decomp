// CUnknown102304e0: the stat owner singleton (global at 0x107510b8) of the 0x10230xxx unit; real name not yet known.
#pragma once

struct CVDmgBlock16_t;

class CUnknown102304e0
{
public:
	int sub_102304e0(int id, void *pCharacter);	// stat lookup by id: builds a block from the default record's block (+0x18), evaluates it for the character (or without one) and hands it to sub_102304b0
	int sub_102304b0(int a, int b);	// stub 0x1000a687: looks up the stat default of a (global stat owner 0x106c7c34) and passes b to its sub_1000d102; takes no use of this
};
