// CUnknown1021bec0: an entity class (real name not yet known) whose dialog-style dependency lists are evaluated with python expressions.
#pragma once

#include "CBaseEntity.h"

class CUnknown1021bec0 : public CBaseEntity
{
public:
	bool sub_1021bec0(const char *pszExpression);	// "CheckDependency": true for an empty / missing expression, else evaluates it (python, sub_100ea2d0) with the entity behind the handle at +0x8c; logs PASSED / FAILED dependency through DevMsg when the debug cvar (0x1074f714) is set; false when it fails
	bool sub_1021a4f0(int index);	// stub 0x100075c7: whether entry `index` of the 0x2c0-byte entry table (count at +0xa20) is excluded
	void sub_1021bd80();	// rebuilds the index vector at +0x9f8 (a CUtlVector<int>, purged first) with the entries that are not excluded and whose expression (+0x240 in the entry, base at +0xa14) passes the dependency check
};
