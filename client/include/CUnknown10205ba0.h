// CUnknown10205ba0: a tagged value (type at +0: 0 number, 1 sub-object at +4, 2 stat id, 3 function; -1 none); real name not yet known.
#pragma once

#include "CVDmg_t.h"

class CUnknown10204bf0;

class CUnknown10205ba0
{
public:
	int m_type;	// 0x00
	int m_value;	// 0x04: the number, the stat id or the sub-object

		// the text form of the value; numbers go through pNames when it is set, else "%d"
	int sub_10161510();	// evaluates the value (stub 0x10004e85): the number itself, the sub-object's result, the stat's value, 0 for a function, -1 for anything else
	int sub_10161440(void *pCharacter);	// evaluates the value for the character (stub 0x100099e4)
		// stub 0x100032a6: parses the value text for the block
};
