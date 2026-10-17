// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100ef060 size=0x18b
#include "CBaseDoor.h"

extern "C" int __cdecl sub_1043e780(const char*, const char*);
extern char g_106b8540[];

struct str_100ef060
{
	const char* p;
	const char* ToCStr() const { return p ? p : g_106b8540; }
};

struct DoorSeqEntry_100ef060
{
	int id;
	str_100ef060 name;
};

struct DoorRegistry_100ef060
{
	char pad[0x14];
	int count;
	DoorSeqEntry_100ef060** items;

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

extern DoorRegistry_100ef060 g_1074b308;
extern int g_106eb3dc;
extern int g_106eb3e0;
extern int g_106eb3e8;
extern int g_106eb3e4;

void CBaseDoor::vfunc71()
{
	*(int*)((char*)this + 0xbc) = 0;
	*(int*)((char*)this + 0xb4) = g_1074b308.sub_10009331(this, ((str_100ef060*)((char*)this + 0xc0))->ToCStr(), 0);
	g_106eb3dc = g_1074b308.Lookup("close");
	g_106eb3e0 = g_1074b308.Lookup("open");
	g_106eb3e8 = g_1074b308.Lookup("swing");
	g_106eb3e4 = g_1074b308.Lookup("locked");
}
// END FUNCTION

// FUNCTION: 0x100f0ef0 size=0xe
void CBaseDoor::vfunc246(int a, int* b, int c)
{
	b[6] = -1;
}
// END FUNCTION
