// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101163f0 size=0x92
#include "CFuncMoveLinear.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

bool CFuncMoveLinear::vfunc223()
{
	const char *name;
	if (this)
		name = *(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseEntity::IsSolidFlagSet";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	unsigned char bit = (*((unsigned char *)this + 0x2b4) >> 2) & 1;
	(*g_109f3680)--;
	if (!bit)
		sub_100a6150(0, 0, 0);
	return true;
}
// END FUNCTION

// FUNCTION: 0x10116bf0 size=0xed
#include "CFuncMoveLinear.h"

struct COutputX { void sub_10010794(CFuncMoveLinear *a, CFuncMoveLinear *b, int c); };
__declspec(dllimport) void Warning(const char *, ...);
extern struct { char pad[0xc]; float curtime; } *g_1070b228;
void sub_10007180();

typedef Vector *(__fastcall *Slot220)(CFuncMoveLinear *);
#define SLOT220(p) ((*(Slot220 **)(p))[220](p))

void CFuncMoveLinear::sub_10116bf0()
{
    ((COutputX *)((char *)this + 0x590))->sub_10010794(this, this, 0);
    sub_100ac4e0((int)sub_10007180, 0, 0);
    *(float *)((char *)this + 0x17c) = g_1070b228->curtime + 0.1;
    sub_10013912();
    Vector *p = SLOT220(this);
    if (*p == m_vecPosition2) {
        ((COutputX *)((char *)this + 0x5c0))->sub_10010794(this, this, 0);
        return;
    }
    p = SLOT220(this);
    if (*p == m_vecPosition1) {
        ((COutputX *)((char *)this + 0x5a8))->sub_10010794(this, this, 0);
        return;
    }
    Warning("%s done moving, at invalid position?\n", sub_100ab4f0());
}
// END FUNCTION
