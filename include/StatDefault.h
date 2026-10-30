// StatDefault: default stat object used by a stat-list lookup (name provisional).
#pragma once

struct StatDefault
{
	int a[10];
	StatDefault(int);
	~StatDefault();
	void sub_10015528(int value);
	int sub_1006cba0(int arg);	// stub 0x10015500: returns a value (a table id) for arg
	int sub_1006cb60(int index);	// stub 0x10013ccd: a value of the object looked up by index
	int sub_1006ca50(int arg);	// stub 0x10003265: the value of the stat for the character arg (a stat value record of type 2)
	float sub_1006caa0(int level);	// stub 0x1000c874: the stat's float value at the level (the barter adjustments)
};
