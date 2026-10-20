// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102b8c40 size=0x65
#include "CAI_BaseNPCTroika.h"

#define NPCF(type, off) (*(type *)((char *)this + (off)))

struct Vec3
{
	float x, y, z;
	Vec3 &operator=(const Vec3 &o)
	{
		x = o.x;
		y = o.y;
		z = o.z;
		return *this;
	}
};

// TARGET: CAI_BaseNPCTroika::sub_102b8c40
int CAI_BaseNPCTroika::sub_102b8c40()
{
	if (sub_10269d30(0x4c) || sub_10269d30(0x4d))
	{
		NPCF(char, 0x5b80) = 0;
		NPCF(Vec3, 0x5dd0) = NPCF(Vec3, 0x5b9c);
		NPCF(const char *, 0x1b30) = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		NPCF(int, 0x1b34) = 0x5f8b;
		return 0x8a;
	}
	return 0;
}
// END FUNCTION
