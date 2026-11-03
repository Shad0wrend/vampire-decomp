// VectorHelpers: matched free mathlib helpers that take / return a Vector and were not declared anywhere shared.
// (sub_101d2f40 is also declared in CRotDoor.h, where it was first needed; an identical repeat is harmless.)
#pragma once

#include "Vector.h"

Vector sub_101d2f40(float flYaw);		// 0x101d2f40: degrees -> (cos(flYaw), sin(flYaw), 0), returned by value; 22 callers
float sub_101d2c70(const Vector *pVec);	// 0x101d2c70: atan2(pVec->y, pVec->x) in degrees (+360 when negative), 0 for a zero vector
float sub_1013d580(float a, float b);	// 0x1013d580: a - b wrapped into (-180, 180]
