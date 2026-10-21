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

// FUNCTION: 0x1029fcf0 size=0x89
#include "CAI_BaseNPCTroika.h"

struct CGlobalVarsX { char m_pad[0xc]; float m_curtime; };
extern CGlobalVarsX *g_1070b228;
extern float g_1049a1c0;
extern float g_1049a1c4;

struct CTroikaKindObj { int sub_103498b0(); };

char CAI_BaseNPCTroika::sub_1029fcf0(int a, CBaseEntity *pEnt, int b)
{
	if (!pEnt)
		return 0;
	if (!sub_1028a190())
		return 0;
	if (((CTroikaKindObj *)pEnt)->sub_103498b0() != 3) {
		*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		*(int *)((char *)this + 0x1b34) = 0x2939;
		sub_102ae750(0xd7, 0);
	} else {
		*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp";
		*(int *)((char *)this + 0x1b34) = 0x2935;
		sub_102ae750(0xd8, 0);
	}
	float fDelay = (g_1049a1c0 - g_1049a1c4) + g_1049a1c4;
	*(float *)((char *)this + 0x1564) = fDelay + g_1070b228->m_curtime;
	return 1;
}
// END FUNCTION

// FUNCTION: 0x102b4fe0 size=0x91
#include "CAI_BaseNPCTroika.h"
#include "CUnknown102dfaa0.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
char *sub_101d3730(const char *fmt, ...);

struct CHandleX {
    unsigned int m_Index;
    CBaseEntity *Get() const
    {
        if (m_Index != 0xffffffff) {
            CGlobalEntityList_Slot *s = &g_10566458->m_Slots[m_Index & 0x1fff];
            if (s->m_Serial == (int)(m_Index >> 13))
                return (CBaseEntity *)s->m_pEntity;
        }
        return 0;
    }
};

void CAI_BaseNPCTroika::vfunc598(CBaseEntity *pEnt)
{
    sub_10332ca0(pEnt, 4, 0);
    if (vfunc167() == (int)pEnt)
        sub_10279a50(0);
    if (((CHandleX *)((char *)this + 0x1a94))->Get() == pEnt)
        sub_10279b70(0);
    ((CUnknown102dfaa0 *)vfunc541())->sub_102dfaa0(pEnt, (int)sub_101d3730("%s(%d) :", "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp", 0x5511));
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

// FUNCTION: 0x102b8a60 size=0x17d
#include "CAI_BaseNPCTroika.h"
#include "CUnknown102b5dc0.h"

namespace block_102b8a60 {
	struct CUnknown102b5dc0Unit : CUnknown102b5dc0
	{
		void sub_102b5dc0(int value);
	};

	void CUnknown102b5dc0Unit::sub_102b5dc0(int value)
	{
		m_unk63f4 = value;
	}
}
using namespace block_102b8a60;

#define NPC_DWORD(off) (*(unsigned int *)((char *)this + (off)))
#define NPC_FILE(off) (*(const char **)((char *)this + (off)))
#define SRC_FILE "E:\\Vampire\\main\\dlls\\AI_BaseNPCTroika.cpp"
#define SET_SRC(ln) { NPC_DWORD(0x1b34) = (ln); NPC_FILE(0x1b30) = SRC_FILE; }

// TARGET: CAI_BaseNPCTroika::sub_102b8a60
int CAI_BaseNPCTroika::sub_102b8a60()
{
	if (sub_10269d30(3) && !(NPC_DWORD(0x5d8c) & 0x8000000)) {
		SET_SRC(0x5f38);
		return 0x60;
	}
	if (sub_10269d30(1) || sub_10269d30(5) || sub_10014df8(0x26)) {
		((CUnknown102b5dc0Unit *)this)->sub_102b5dc0(3);
		if (NPC_DWORD(0x5d8c) & 0x8000000) {
			if (NPC_DWORD(0x14b8) & 0x200000) {
				char bCond = sub_10014df8(4);
				NPC_FILE(0x1b30) = SRC_FILE;
				if (bCond) {
					NPC_DWORD(0x1b34) = 0x5f48;
					return 0x5e;
				}
				NPC_DWORD(0x1b34) = 0x5f4c;
				return 0x5c;
			} else {
				SET_SRC(0x5f51);
				return 0x5a;
			}
		} else {
			SET_SRC(0x5f56);
			return 0x59;
		}
	}
	if (sub_10269d30(2)) {
		if ((NPC_DWORD(0x5d8c) & 0x8000000) && sub_10014df8(4)) {
			SET_SRC(0x5f5e);
			return 0x5f;
		}
		SET_SRC(0x5f62);
		return 0x5d;
	} else {
		if (NPC_DWORD(0x14b8) & 0x200000) {
			SET_SRC(0x5f71);
			return 0x5c;
		}
		return 0;
	}
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
