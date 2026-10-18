// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10217680 size=0x18b
#include "CBaseTerminal.h"

extern "C" int __cdecl sub_1043e780(const char*, const char*);
extern char g_106b8540[];

struct str_10217680
{
	const char* p;
	const char* ToCStr() const { return p ? p : g_106b8540; }
};

struct TermSeqEntry_10217680
{
	int id;
	str_10217680 name;
};

struct TermRegistry_10217680
{
	char pad[0x14];
	int count;
	TermSeqEntry_10217680** items;

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

extern TermRegistry_10217680 g_1074b330;
extern int g_1074f754;
extern int g_1074f758;
extern int g_1074f75c;
extern int g_1074f760;

void CBaseTerminal::vfunc71()
{
	*(int*)((char*)this + 0xbc) = 0;
	*(int*)((char*)this + 0xb4) = g_1074b330.sub_10009331(this, ((str_10217680*)((char*)this + 0xc0))->ToCStr(), 0);
	g_1074f754 = g_1074b330.Lookup("accept");
	g_1074f758 = g_1074b330.Lookup("access");
	g_1074f75c = g_1074b330.Lookup("error");
	g_1074f760 = g_1074b330.Lookup("typing");
}
// END FUNCTION

// FUNCTION: 0x10219f10 size=0x6d
#include "CBaseTerminal.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1008b3c0();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseTerminal *CBaseTerminal::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x7f4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7dc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7c4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7ac))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x794))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x748))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x730))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
