// CUnknown10300e60: the graph search helper used by FindBackAway (real name not yet known); the object holds the NPC at +4 and a value at +8.
#pragma once

#include "Vector.h"

class CUnknown10300e60
{
public:
	bool sub_10300e60(Vector vecMins, Vector vecMaxs, Vector vecPoint1, Vector vecPoint2);	// whether the box (vecMins, vecMaxs) overlaps the box spanned by the two unordered corner points vecPoint1 / vecPoint2 (stub 0x100095f7; the object itself is not used); the vectors are passed by value (callee pops 0x30)
};
