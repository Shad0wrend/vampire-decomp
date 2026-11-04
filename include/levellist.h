// levellist_t: one entry of the level transition list (Source's triggers.cpp), 0x50 bytes.
// Built by sub_101c7e00 (adds an entry, skipping duplicates of the same landmark entity), walked by the
// transition builder 0x101c7ff0 (trigger_changelevel search plus the entity transition list).
#pragma once

#include "Vector.h"

struct edict_t;

struct levellist_t
{
	char mapName[32];	// 0x00
	char landmarkName[32];	// 0x20
	edict_t *pentLandmark;	// 0x40: the landmark's edict (the game reads its entity through IServerUnknown slot 4)
	Vector vecLandmarkOrigin;	// 0x44
};
