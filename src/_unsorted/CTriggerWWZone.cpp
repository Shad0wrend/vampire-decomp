// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103da660 size=0x9b
#include "ScopeTrace.h"
#include "CBaseTrigger.h"
#include "CTriggerWWZone.h"

struct CGlobalVarsX { char pad[0xc]; float curtime; };
extern CGlobalVarsX *g_1070b228;
void sub_10015b68();

// TARGET: CTriggerWWZone::vfunc119
void CTriggerWWZone::vfunc119()
{
	ScopeTrace trace("CTriggerWWZone::Kill", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	((CBaseTrigger *)this)->sub_101c4dd0();
	sub_100ac4e0((int)sub_10015b68, 0, 0);
	*(float *)((char *)this + 0x17c) = g_1070b228->curtime + 1.0f;
}
// END FUNCTION
