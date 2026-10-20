// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1029e750 size=0xbd
#include "CBaseEntity.h"
#include "CAI_BaseNPCTroika.h"
#include "CBCCSlotViews.h"

char __fastcall sub_100a52a0(void *pEnt);	// CBaseEntity::EntityUnselectable (stub 0x10011e1e)

class CNpcSlot404View	// slot 404: asked about the other entity
{
public:
	VIEW_SLOT100(0) VIEW_SLOT100(1) VIEW_SLOT100(2) VIEW_SLOT100(3)
	VIEW_SLOT(400) VIEW_SLOT(401) VIEW_SLOT(402) VIEW_SLOT(403)
	virtual int vfunc404(CBaseEntity *pEnt);
};

int CAI_BaseNPCTroika::vfunc359(CBaseEntity *pEnt)
{
	if (sub_100a52a0(this))
		return -1;
	if (*(int *)((char *)this + 0x146c) > 0)
		return 4;
	if ((m_flags14bc & 0x80000) == 0x80000)
		return 3;
	switch (*(int *)((char *)this + 0x5cc0)) {
	case 2:
	case 0xb:
		return 1;
	case 3:
	case 0xe:
		return 7;
	case 5:
	case 6:
	case 8:
	case 9:
	case 10:
	case 0xd:
		return 0;
	case 7:
		return -1;
	default:
		if (pEnt && ((CNpcSlot404View *)this)->vfunc404(pEnt) == 1)
			return 2;
		return 5;
	}
}
// END FUNCTION

// FUNCTION: 0x102b6fe0 size=0xe1
#include "CBaseEntity.h"
#include "CAI_BaseNPCTroika.h"

#define NPC_FILE "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp"

int CAI_BaseNPCTroika::sub_102b6fe0(int a)
{
	if (sub_10014df8(0x48)) {
		if (vfunc308()) {
			if (*((char *)this + 0x6078))
				vfunc601(a);
			*(const char **)((char *)this + 0x1b30) = NPC_FILE;
			*(int *)((char *)this + 0x1b34) = 0x5a5f;
			return 0xe9;
		}
		*(const char **)((char *)this + 0x1b30) = NPC_FILE;
		*(int *)((char *)this + 0x1b34) = 0x5a69;
		return 0xcd;
	}
	if (sub_10014df8(0x3a)) {
		if (vfunc308()) {
			if (*((char *)this + 0x6078))
				vfunc601(a);
			*(const char **)((char *)this + 0x1b30) = NPC_FILE;
			*(int *)((char *)this + 0x1b34) = 0x5a77;
			return 0xe9;
		}
		*(const char **)((char *)this + 0x1b30) = NPC_FILE;
		*(int *)((char *)this + 0x1b34) = 0x5a81;
		return 0xce;
	}
	return 0;
}
// END FUNCTION

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
