// CUnknown1021bec0: an entity class (real name not yet known) whose dialog-style dependency lists are evaluated with python expressions.
#pragma once

#include "CBaseEntity.h"

class CUnknown1021bec0 : public CBaseEntity
{
public:
	bool sub_1021bec0(const char *pszExpression);	// "CheckDependency": true for an empty / missing expression, else evaluates it (python, sub_100ea2d0) with the entity behind the handle at +0x8c; logs PASSED / FAILED dependency through DevMsg when the debug cvar (0x1074f714) is set; false when it fails
	bool sub_1021a4f0(int index);	// stub 0x100075c7: whether entry `index` of the 0x2c0-byte entry table (count at +0xa20) is excluded
	void sub_1021bd80();	// rebuilds the index vector at +0x9f8 (a CUtlVector<int>, purged first) with the entries that are not excluded and whose expression (+0x240 in the entry, base at +0xa14) passes the dependency check
	void sub_1021bc90(int index);	// selects entry `index` of the index vector (clamped into it, +0x9f0 / +0x9f4), runs sub_1021c260 and, when sub_1021a4b0 does not accept the entry, evaluates its expression (+0x280 in the entry) for the entity behind the handle at +0x8c; then sub_1021a530 (stub 0x10009c2d)
	void sub_1021c260();	// stub 0x10002167, run after a new entry was selected
	bool sub_1021a4b0(int entry);	// stub 0x1000a6e6: whether the entry is already settled
	void sub_1021a530(int entry);	// stub 0x10009c2d
};
