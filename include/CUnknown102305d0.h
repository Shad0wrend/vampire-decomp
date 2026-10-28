// CUnknown102305d0: object the stat owner helpers of the 0x10230xxx unit work for; real name not yet known.
#pragma once

class CUnknown102305d0
{
public:
	int sub_102305a0(int a, int b);	// takes a stat id and its value (stub 0x1000bcf3)
	int sub_102305d0(int id, void *pCharacter);	// looks the stat's default block up in the stat owner (0x106c7c34), evaluates it for pCharacter (or its plain default without one) and hands the value to sub_102305a0
};
