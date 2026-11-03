// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103aebd0 size=0x79
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VSheriffMan.h"
#include "ScopeTrace.h"
void CNPC_VSheriffMan::vfunc432(int arg)
{
	ScopeTrace trace("CNPC_VSheriffMan::RunAI", g_106b8540);
	if (!m_bTransformed)
		sub_103b1510();
	sub_10385a10(arg);
}
// END FUNCTION

// FUNCTION: 0x103af8d0 size=0x64
#include "CNPC_VSheriffMan.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_10651428[];
extern char g_106b8540[];

// TARGET: CNPC_VSheriffMan::vfunc619
void CNPC_VSheriffMan::vfunc619(int arg)
{
	g_109f3620[*g_109f3680].a = g_10651428;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000c27a(arg);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103b1510 size=0x9c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VSheriffMan.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

void CNPC_VSheriffMan::sub_103b1510()
{
	ScopeTrace trace("CNPC_VSheriffMan::CacheFloorHeights", g_106b8540);
	CEntityVSlots *pEnt = sub_103b0930();
	if (pEnt) {
		*(int *)((char *)this + 0x66e8) = *(int *)&pEnt->slot217()->z;
		pEnt = sub_103b0ab0(0);
		if (pEnt) {
			int nHeight = *(int *)&pEnt->slot217()->z;
			*(char *)((char *)this + 0x66e7) = 1;
			*(int *)((char *)this + 0x66ec) = nHeight;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x103b15e0 size=0x7a
#include "CNPC_VSheriffMan.h"
struct ScopeEnt { const char *name; const char *file; const char *file2; };
extern ScopeEnt *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CNPC_VSheriffMan::sub_103b15e0(int arg)
{
    g_109f3620[*g_109f3680].name = "CNPC_VSheriffMan::StartTransformation";
    g_109f3620[*g_109f3680].file = g_106b8540;
    g_109f3620[*g_109f3680].file2 = g_106b8540;
    ++*g_109f3680;
    m_pszSourceFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\npc_vsheriffman.cpp";
    m_nSourceLine = 0x4c7;
    sub_102ae750(0x15b, 0);
    --*g_109f3680;
}
// END FUNCTION
