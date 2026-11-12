// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103da3e0 size=0x6
#include "datamap.h"
#include "CTriggerWWZone.h"
namespace lifted {
extern char g_1065f7ac;
}
datamap_t * CTriggerWWZone::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1065f7ac);
}
// END FUNCTION

// FUNCTION: 0x103da540 size=0x7e
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CTriggerWWZone.h"
#include "ScopeTrace.h"
void CTriggerWWZone::vfunc113()
{
	ScopeTrace trace("CTriggerWWZone::Activate", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	sub_100113a6();
	sub_1000dfd0();
}
// END FUNCTION

// FUNCTION: 0x103da5e0 size=0x5a
#include "CTriggerWWZone.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
void CTriggerWWZone::vfunc251()
{
	if (!m_n5ac) {
		sub_103da730();
		sub_103daa30();
	}
	const char *pszName = m_pszName5b0;
	if (!pszName)
		pszName = g_106b8540;
	CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, pszName, 0, 0);
	if (pEnt)
		m_h5b4 = *(unsigned int *)pEnt->vfunc1();
	else
		m_h5b4 = 0xffffffff;
}
// END FUNCTION

// FUNCTION: 0x103da660 size=0x9b
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseTrigger.h"
#include "CTriggerWWZone.h"

void sub_10015b68();

// TARGET: CTriggerWWZone::vfunc119
void CTriggerWWZone::vfunc119()
{
	ScopeTrace trace("CTriggerWWZone::Kill", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	((CBaseTrigger *)this)->sub_101c4dd0();
	sub_100ac4e0((int)sub_10015b68, 0, 0);
	*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 1.0f;
}
// END FUNCTION

// FUNCTION: 0x103dafd0 size=0x48c
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "CTriggerWWZone.h"
#include "CUnknown103dae50.h"
#include "ScopeTrace.h"
#include "CEHandleGet.h"
#include <string.h>
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);

static inline bool WWNameIs(CBaseEntity *e, const char *lit)
{
	const char *n = *(const char *volatile *)&e->m_name26c;
	if (n && n == lit)
		return true;
	int len = strlen(lit);
	int r;
	if (len == 0) {
		r = (int)e->m_name26c;
	} else if (lit[len - 1] != '*') {
		r = _strcmpi(e->m_name26c ? e->m_name26c : g_106b8540, lit);
	} else {
		r = _strnicmp(e->m_name26c ? e->m_name26c : g_106b8540, lit, len - 1);
	}
	return r == 0;
}

static inline CBaseEntity *WWLookup(CGlobalEntityList *pList, const unsigned int &rh)
{
	if (rh == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *pSlot = &pList->m_Slots[rh & 0x1fff];
	if (pSlot->m_Serial == (int)(rh >> 13))
		return (CBaseEntity *)pSlot->m_pEntity;
	return 0;
}

// TARGET: CTriggerWWZone::vfunc175
void CTriggerWWZone::vfunc175(CBaseEntity *pOther)
{
	ScopeTrace trace("CTriggerWWZone::Touch", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CBaseEntity::vfunc175(pOther);
	CTriggerWWZone *pPlayer = sub_103dad80();
	switch (m_n5ac) {
	case 0:
		if (pOther->m_pA8) {
			((CUnknown103dae50 *)this)->sub_103dae50();
			if (WWNameIs(this, "player_outside_trigger")) {
				if (pPlayer)
					pPlayer->m_flags66e8 |= 0x80;
			} else if (WWNameIs(this, "player_inside_trigger")) {
				if (pPlayer)
					pPlayer->m_flags66e8 |= 0x40;
			}
		} else if (pOther == (CBaseEntity *)pPlayer) {
			if (WWNameIs(this, "player_outside_trigger")) {
				if (pPlayer)
					pPlayer->m_flags66e8 |= 0x1000;
			} else if (WWNameIs(this, "player_inside_trigger")) {
				if (pPlayer)
					pPlayer->m_flags66e8 |= 0x800;
			}
		}
		break;
	case 1:
		if (pOther == (CBaseEntity *)sub_103dad80() && pPlayer)
			pPlayer->m_flags66e8 |= 1;
		break;
	case 4:
	case 5:
		if (pOther == (CBaseEntity *)sub_103dad80() && pPlayer) {
			if (m_n5ac == 4)
				pPlayer->m_flags66e8 |= 8;
			else
				pPlayer->m_flags66e8 |= 0x10;
		}
		break;
	case 2:
		if (pOther->m_pA8 && pPlayer) {
			pPlayer->m_flags66e8 |= 2;
			CGlobalEntityList *pList = g_10566458;
			if (pList->sub_100290c0(&m_h5b4)) {
				pPlayer->sub_103cecd0(WWLookup(pList, m_h5b4));
				return;
			}
		}
		break;
	case 3:
		if (pOther->m_pA8) {
			if (pPlayer)
				pPlayer->m_flags66e8 |= 4;
		} else if (pOther == (CBaseEntity *)sub_103dad80() && pPlayer) {
			pPlayer->m_flags66e8 |= 0x100;
		}
		break;
	case 6:
		if (pOther == (CBaseEntity *)sub_103dad80() && pPlayer)
			pPlayer->m_flags66e8 |= 0x20;
		break;
	case 7:
		if (pOther->m_pA8 && pPlayer)
			pPlayer->m_flags66e8 |= 0x200;
		break;
	case 8:
		if (pOther->m_pA8 && pPlayer)
			pPlayer->m_flags66e8 |= 0x400;
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x103db590 size=0x430
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CBaseTrigger.h"
#include "CTriggerWWZone.h"
#include "ScopeTrace.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);
extern "C" unsigned int __cdecl strlen(const char *);
#pragma intrinsic(strlen)

struct CWWPlayerView
{
	char m_pad[0x66e8];
	unsigned int m_nFlags;
};

static inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

static inline bool NamesMatch(const char *pszQuery, const char *const &nameToMatch)
{
	int namelen = strlen(pszQuery);
	int cmp;
	if (namelen == 0)
		cmp = (int)nameToMatch;
	else if (pszQuery[namelen - 1] != '*')
		cmp = _strcmpi(STRINGR(nameToMatch), pszQuery);
	else
		cmp = _strnicmp(STRINGR(nameToMatch), pszQuery, namelen - 1);
	return cmp == 0;
}

struct CWWNameView : CBaseEntity
{
	bool NameMatches(const char *pszNameOrWildcard)
	{
		if (m_name26c && m_name26c == pszNameOrWildcard)
			return true;
		return NamesMatch(pszNameOrWildcard, m_name26c);
	}
};

// TARGET: CTriggerWWZone::vfunc176
void CTriggerWWZone::vfunc176(CBaseEntity *pOther)
{
	ScopeTrace scope("CTriggerWWZone::EndTouch", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CBaseTrigger::vfunc176(pOther);
	CWWPlayerView *pPlayer = (CWWPlayerView *)sub_103dad80();
	switch (m_n5ac) {
	case 0:
		if (pOther->m_pA8) {
			sub_103daf10();
			if (pPlayer) {
				if (((CWWNameView *)this)->NameMatches("player_outside_trigger"))
					pPlayer->m_nFlags &= ~0x80;
				else if (((CWWNameView *)this)->NameMatches("player_inside_trigger"))
					pPlayer->m_nFlags &= ~0x40;
			}
		} else if (pOther == (CBaseEntity *)pPlayer) {
			if (((CWWNameView *)this)->NameMatches("player_outside_trigger")) {
				if (pPlayer)
					pPlayer->m_nFlags &= ~0x1000;
			} else if (((CWWNameView *)this)->NameMatches("player_inside_trigger")) {
				if (pPlayer)
					pPlayer->m_nFlags &= ~0x800;
			}
		}
		break;
	case 1:
		if (pOther == sub_103dad80() && pPlayer)
			pPlayer->m_nFlags &= ~1;
		break;
	case 4:
	case 5:
		if (pOther == sub_103dad80() && pPlayer) {
			if (m_n5ac == 4)
				pPlayer->m_nFlags &= ~8;
			else
				pPlayer->m_nFlags &= ~0x10;
		}
		break;
	case 2:
		if (pOther->m_pA8 && pPlayer) {
			pPlayer->m_nFlags &= ~2;
			((CTriggerWWZone *)pPlayer)->sub_103cecd0(0);
		}
		break;
	case 3:
		if (pOther->m_pA8) {
			if (pPlayer)
				pPlayer->m_nFlags &= ~4;
		} else if (pOther == sub_103dad80() && pPlayer) {
			pPlayer->m_nFlags |= 0x100;
		}
		break;
	case 7:
		if (pOther->m_pA8 && pPlayer)
			pPlayer->m_nFlags &= ~0x200;
		break;
	case 8:
		if (pOther->m_pA8 && pPlayer)
			pPlayer->m_nFlags &= ~0x400;
		break;
	case 6:
		if (pOther == sub_103dad80() && pPlayer)
			pPlayer->m_nFlags |= 0x20;
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x103dbf50 size=0xb2
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CTriggerWWZone.h"
#include "CDoorEventList.h"

extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);
void sub_100aa7b0(void *pEnt);

struct CUtlMemoryView
{
	int *m_pMemory;
	int m_nAlloc;
	int m_nGrow;

	void Purge()
	{
		if (m_nGrow != -1) {
			if (m_pMemory) {
				Plat_Free(m_pMemory);
				m_pMemory = 0;
			}
			m_nAlloc = 0;
		}
	}
	~CUtlMemoryView() { Purge(); }
};

struct CUtlVectorView
{
	CUtlMemoryView m_Memory;
	int m_Size;
	int *m_pElements;

	void Purge()
	{
		m_Size = 0;
		m_Memory.Purge();
		m_pElements = m_Memory.m_pMemory;
	}
	~CUtlVectorView() { Purge(); }
};

CTriggerWWZone *CTriggerWWZone::vfunc5(unsigned char flags)
{
	((CUtlVectorView *)&m_pHandles)->~CUtlVectorView();
	((CDoorEventList *)((char *)this + 0x580))->sub_100cd2d0();
	((CDoorEventList *)((char *)this + 0x568))->sub_100cd2d0();
	((CDoorEventList *)((char *)this + 0x4bc))->sub_100cd2d0();
	((CDoorEventList *)((char *)this + 0x4a4))->sub_100cd2d0();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
