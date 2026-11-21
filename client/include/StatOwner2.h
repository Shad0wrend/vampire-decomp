// StatOwner2: the global record list at 0x1074e968 (same layout as CUnknown10202d10); looked up by id or by name.
#pragma once

#include "CUnknown10202d10.h"

class StatOwner2 : public CUnknown10202d10
{
public:
	CUnknown102029c0 *sub_1015f270(int id);	// the record with that id, a shared default record when there is none
	int sub_1015f160(const char *pszName);	// the id of the record named pszName, -1 when there is none (stub 0x10012d50)
};
