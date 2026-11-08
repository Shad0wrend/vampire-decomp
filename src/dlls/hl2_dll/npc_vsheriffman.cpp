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

// FUNCTION: 0x103af960 size=0x36a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "vampire.h"
#include "CNPC_VSheriffMan.h"
#include "CAI_BaseNPCTroika.h"
#include "ScopeTrace.h"

#define FILE_ "E:\\Vampire\\main\\dlls\\hl2_dll\\npc_vsheriffman.cpp"

int CNPC_VSheriffMan::vfunc604(int arg)
{
	ScopeTrace scope("CNPC_VSheriffMan::SelectScheduleMeleeCombat", g_106b8540);
	CAI_BaseNPCTroika *p = (CAI_BaseNPCTroika *)this;
	if (m_b6078)
	{
		if (p->vfunc602())
		{
			p->vfunc601(p->vfunc167());
			if (p->vfunc308())
			{
				m_pszSourceFile = FILE_;
				m_nSourceLine = 0x22f;
				return 0xe9;
			}
			m_pszSourceFile = FILE_;
			m_nSourceLine = 0x235;
			return 0xe7;
		}
	}
	else
	{
		if (!p->vfunc599(p->vfunc167()))
		{
			if (p->vfunc308())
			{
				m_pszSourceFile = FILE_;
				m_nSourceLine = 0x244;
				return 0xe9;
			}
			m_pszSourceFile = FILE_;
			m_nSourceLine = 0x248;
			return 0x15a;
		}
	}
	if (p->sub_10269aa0(0x59))
	{
		p->vfunc601(p->vfunc167());
		m_pszSourceFile = FILE_;
		m_nSourceLine = 0x252;
		return 0x15a;
	}
	if (p->sub_10269aa0(0x51))
	{
		if (p->vfunc308())
		{
			m_pszSourceFile = FILE_;
			m_nSourceLine = 0x269;
			return 0xdc;
		}
		m_pszSourceFile = FILE_;
		m_nSourceLine = 0x26d;
		return 0xdd;
	}
	bool bRetry = false;
	if (m_fl626c > 64.0f)
	{
		if (m_fl6274 == -1.0f)
			m_fl6274 = enginerandom->vfunc1(3.0f, 4.0f) + gpGlobals->curtime;
		else if (gpGlobals->curtime >= m_fl6274)
			bRetry = true;
	}
	else
		m_fl6274 = -1.0f;
	if (p->vfunc308())
	{
		if (p->sub_10269aa0(9) || p->sub_10269aa0(0x1a) || bRetry)
		{
			p->vfunc601(p->vfunc167());
			m_pszSourceFile = FILE_;
			m_nSourceLine = 0x290;
			return 0xe9;
		}
	}
	if (!p->sub_10269aa0(9) && !p->sub_10269aa0(0x60) && !p->sub_10269aa0(0x48))
	{
		m_pszSourceFile = FILE_;
		m_nSourceLine = 0x2a3;
		return 0xc7;
	}
	if (p->vfunc308())
	{
		m_pszSourceFile = FILE_;
		m_nSourceLine = 0x29b;
		return 0xca;
	}
	m_pszSourceFile = FILE_;
	m_nSourceLine = 0x29f;
	return 0xcb;
}
// END FUNCTION

// FUNCTION: 0x103afdb0 size=0x3d8
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CNPC_VSheriffMan.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseAnimating.h"

#define FILE_STAMP(line) (m_pszSourceFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\npc_vsheriffman.cpp", m_nSourceLine = (line))

// TARGET: CNPC_VSheriffMan::vfunc605
int CNPC_VSheriffMan::vfunc605(int unused)
{
	ScopeTrace trace("CNPC_VSheriffMan::SelectScheduleRangedCombat", g_106b8540);
	CAI_BaseNPCTroika *p = (CAI_BaseNPCTroika *)this;
	if (m_b6078) {
		FILE_STAMP(0x2b1);
		return 0xe3;
	}
	if (p->sub_10014df8(8) && p->vfunc307() && p->vfunc599((int)p->vfunc167())) {
		FILE_STAMP(0x2cb);
		return 0xe3;
	}
	if (p->sub_10014df8(0x3c)) {
		FILE_STAMP(0x2d0);
		return 0xb8;
	}
	int r = p->sub_102b8620();
	if (r) return r;
	r = p->sub_102b7370();
	if (r) return r;
	r = p->sub_102b7cf0();
	if (r) return r;
	if (!p->sub_10014df8(0x5f) && !p->sub_10014df8(8)) {
		if (!p->sub_10014df8(0x46) || p->sub_10014df8(0x48) || p->sub_10014df8(0x60))
			;
		else
			return 0;
		if (p->sub_10014df8(0x59)) {
			FILE_STAMP(0x314);
			return 0x15a;
		}
		FILE_STAMP(0x31a);
		return 0xe8;
	}
	if (!p->sub_10014df8(0x2f) && !p->sub_10014df8(0x63)) {
		if (((CBaseAnimating *)this)->sub_1008dc40(0x10, -1) && !p->sub_10014df8(0x2c) && enginerandom->vfunc2(0, 0x63) < 0x4b) {
			FILE_STAMP(0x2ed);
			return 0xef;
		}
		if (p->vfunc307() && enginerandom->vfunc2(0, 0x63) < 0x19 && p->vfunc599((int)p->vfunc167())) {
			FILE_STAMP(0x2f1);
			return 0xe8;
		}
		FILE_STAMP(0x2f5);
		return 0xf0;
	}
	if (((CBaseAnimating *)this)->sub_1008dc40(0x10, -1) && !p->sub_10014df8(0x2c) && enginerandom->vfunc2(0, 0x63) < 0x4b) {
		FILE_STAMP(0x2fc);
		return 0xb8;
	}
	if (p->vfunc307() && p->vfunc599((int)p->vfunc167())) {
		FILE_STAMP(0x300);
		return 0xe8;
	}
	FILE_STAMP(0x304);
	return 0xb9;
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
