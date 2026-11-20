// StatDefault: default stat object used by a stat-list lookup (name provisional).
#pragma once

#include "CVDmg_t.h"

struct StatDefault
{
	int a[10];
	StatDefault(int);
	~StatDefault();
	int sub_10160250(int arg);	// stub 0x10015500: returns a value (a table id) for arg
		// stub 0x10013ccd: a value of the object looked up by index
		// stub 0x10003265: the value of the stat for the character arg (a stat value record of type 2)
		// stub 0x1000c874: the stat's float value at the level (the barter adjustments)
};
