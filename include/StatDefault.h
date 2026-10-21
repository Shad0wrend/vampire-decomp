// StatDefault: default stat object used by a stat-list lookup (name provisional).
#pragma once

struct StatDefault
{
	int a[10];
	StatDefault(int);
	~StatDefault();
	void sub_10015528(int value);
	int sub_1006cb60(int index);	// stub 0x10013ccd: a value of the object looked up by index
};
