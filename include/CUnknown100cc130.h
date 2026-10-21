// CUnknown100cc130: an entity-like object whose input handler hands a float to the connected player that owns it
// (compared by identity only); real name not yet known.
#pragma once

#include "inputdata_t.h"

class CUnknown100cc130
{
public:
	void sub_100cc130(inputdata_t *pData);	// for every connected player whose owner object is this one: passes the input's float (0 when it is not a float) to the player's setter sub_1017d6d0
};
