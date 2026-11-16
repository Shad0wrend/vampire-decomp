// ai_hull_t.h: an NPC hull's bit, name and bounds (dlls/ai_hull.cpp, 2003 and 2004 SDK); the game defines 22
// such globals (Human_Hull, ...), each built by its own initializer from Vector temporaries.
#ifndef AI_HULL_T_H
#define AI_HULL_T_H
#include "Vector.h"

struct ai_hull_t
{
	ai_hull_t( int bit, const char *pName, const Vector &_mins, const Vector &_maxs, const Vector &_smallMins, const Vector &_smallMaxs )
		: hullBit( bit ), mins( _mins ), maxs( _maxs ), smallMins( _smallMins ), smallMaxs( _smallMaxs ), name( pName ) {}
	int			hullBit;
	const char*	name;

	Vector	mins;
	Vector	maxs;

	Vector	smallMins;
	Vector	smallMaxs;
};

#endif
