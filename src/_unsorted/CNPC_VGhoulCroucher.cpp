// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1037a950 size=0x1d
#include "CNPC_VGhoulCroucher.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b0e0;
extern B g_10936c74;
int CNPC_VGhoulCroucher::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b0e0.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1037aff0 size=0x36
#include "CNPC_VGhoulCroucher.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1028d610();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CNPC_VGhoulCroucher *CNPC_VGhoulCroucher::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x668c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x6674))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1028d610();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1037bc90 size=0x96
#include "CNPC_VGhoulCroucher.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CNPC_VGhoulCroucher::vfunc390(void *pInfo)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VGhoulCroucher::OnTakeDamage_Alive";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1037b6e0(*(int *)((char *)pInfo + 0x2c));
	*((char *)this + 0x6667) = 1;
	int r = sub_10001b45(pInfo);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x1037c420 size=0x8f
#include "CNPC_VGhoulCroucher.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

char CNPC_VGhoulCroucher::vfunc615()
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CNPC_VGhoulCroucher::CanBeSetOnFire";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (*((char *)this + 0x6665)) {
		(*g_109f3680)--;
		return 0;
	}
	char r = sub_1000c5db();
	(*g_109f3680)--;
	return r;
}
// END FUNCTION
