// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101aa750 size=0xd
struct TroikaField63f0 { char pad[0x63f0]; char m; };
void CAI_BaseNPCTroika::vfunc416(char value)
{
	((TroikaField63f0 *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x10293ec0 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc488()
{
	static int id = FindSound("Death");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10293f80 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc489()
{
	static int id = FindSound("Target_Suspect");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x102ad110 size=0x20
#include "CAI_BaseNPCTroika.h"
struct CUnknownGlobals1070b228 { int m_pad[3]; float m_curtime; };
extern CUnknownGlobals1070b228 *g_1070b228;
void CAI_BaseNPCTroika::vfunc616()
{
	sub_10015839(0x30);
	m_f65bc = g_1070b228->m_curtime + 15.0f;
}
// END FUNCTION

// FUNCTION: 0x102c5470 size=0x38
#include "CAI_BaseNPCTroika.h"

struct EntObj {
	char pad[0x9c];
	int field9c;
};
struct EntSlot {
	EntObj *ent;
	int serial;
	int pad;
};
extern char *g_10566458;

static inline EntObj *ResolveHandle(unsigned int h)
{
	if (h != 0xffffffff) {
		EntSlot *slot = (EntSlot *)(g_10566458 + 4) + (h & 0x1fff);
		if (slot->serial == (int)(h >> 13))
			return slot->ent;
	}
	return 0;
}

int CAI_BaseNPCTroika::vfunc293()
{
	EntObj *ent = ResolveHandle(*(unsigned int *)(m_pad0004 + 0x647c - 4));
	return ent == 0 ? 0 : ent->field9c;
}
// END FUNCTION
