// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100e8e60 size=0x70
#include "CDialogDependency.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

CDialogDependency::CDialogDependency()
{
	((CDialogDependencyBlock *)((char *)this + 4))->sub_10230ed0();
	g_109f3620[*g_109f3680].a = "CDialogDependency::CDialogDependency";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100e8ef0(0);
	(*g_109f3680)--;
}
// END FUNCTION
