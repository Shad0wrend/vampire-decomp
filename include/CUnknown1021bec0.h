// CUnknown1021bec0: an entity class (real name not yet known) whose dialog-style dependency lists are evaluated with python expressions.
#pragma once

#include "CBaseEntity.h"

class CUnknown1021bec0 : public CBaseEntity
{
public:
	bool sub_1021bec0(const char *pszExpression);	// "CheckDependency": true for an empty / missing expression, else evaluates it (python, sub_100ea2d0) with the entity behind the handle at +0x8c; logs PASSED / FAILED dependency through DevMsg when the debug cvar (0x1074f714) is set; false when it fails
};
