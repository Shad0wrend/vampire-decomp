// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10208ad0 size=0x1e
#include "CItemContainer.h"

void sub_100aa7b0(void *p);

// TARGET: CItemContainer::vfunc5
CItemContainer *CItemContainer::vfunc5(unsigned int flags)
{
	sub_10005718();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10208ff0 size=0x72
#include "CItemContainer.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

inline CBaseEntity *ResolveHandle(const unsigned int &h)
{
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
		if (s->m_Serial == (int)(h >> 13))
			return (CBaseEntity *)s->m_pEntity;
	}
	return 0;
}

void CItemContainer::vfunc350(int unused)
{
	if (ResolveHandle(m_hUser.m_Index))
		sub_1000e020(ResolveHandle(m_hUser.m_Index), 1);
}
// END FUNCTION

// FUNCTION: 0x10209790 size=0x18b
#include "CItemContainer.h"

extern "C" int __cdecl sub_1043e780(const char*, const char*);
extern char g_106b8540[];

struct str_10209790
{
	const char* p;
	const char* ToCStr() const { return p ? p : g_106b8540; }
};

struct DoorSeqEntry_10209790
{
	int id;
	str_10209790 name;
};

struct DoorRegistry_10209790
{
	char pad[0x14];
	int count;
	DoorSeqEntry_10209790** items;

	int sub_10009331(void* ent, const char* name, int flags);

	int Lookup(const char* name)
	{
		for (int i = 0; i < count; i++)
		{
			if (sub_1043e780(items[i]->name.ToCStr(), name) == 0)
				return items[i]->id;
		}
		return -1;
	}
};

extern DoorRegistry_10209790 g_1074b308;
extern int g_1074f038;
extern int g_1074f034;
extern int g_1074f03c;
extern int g_1074f040;

// TARGET: CItemContainer::vfunc71
void CItemContainer::vfunc71()
{
	*(int*)((char*)this + 0xbc) = 0;
	*(int*)((char*)this + 0xb4) = g_1074b308.sub_10009331(this, ((str_10209790*)((char*)this + 0xc0))->ToCStr(), 0);
	g_1074f038 = g_1074b308.Lookup("close");
	g_1074f034 = g_1074b308.Lookup("open");
	g_1074f03c = g_1074b308.Lookup("swing");
	g_1074f040 = g_1074b308.Lookup("locked");
}
// END FUNCTION
