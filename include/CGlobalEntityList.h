// CGlobalEntityList (RTTI .?AVCGlobalEntityList@@): base CBaseEntityList at +0x0 is not modelled;
// primary vtable 0x10455e90 has 2 slots.
// +0x04: the table of 0x2000 entity slots (12 bytes each), +0x18004: the memory of a linked list (6 byte nodes) of
// the live entities, with its head index at +0x18010.
#pragma once

#include "CBaseHandle.h"

class CBaseEntity;
class Vector;

class CGlobalEntityList_Ent	// the object an entity slot points to
{
public:
	virtual void v0();
	virtual unsigned int *v1();	// the entity's handle
	virtual void v2();
	virtual CBaseEntity *v3();	// GetBaseEntity
	virtual CBaseEntity *vfunc4();
};

struct CGlobalEntityList_Slot
{
	CGlobalEntityList_Ent *m_pEntity;
	int m_Serial;
	unsigned short m_ListIndex;	// the node of the linked list this slot is in
	unsigned short m_pad;
};

struct CGlobalEntityList_Node
{
	unsigned short m_EntIndex;
	unsigned short m_Previous;
	unsigned short m_Next;
};

class IEntityListener
{
public:
	virtual void OnEntityCreated(CBaseEntity *pEntity);
	virtual void OnEntityDeleted(CBaseEntity *pEntity);
};

class CGlobalEntityList
{
public:
	virtual void vfunc0(CGlobalEntityList_Ent *pEnt, unsigned int handle);
	virtual void vfunc1(int a, int b);
	CGlobalEntityList_Slot m_Slots[0x2000];	// 0x0004
	CGlobalEntityList_Node *m_pNodes;	// 0x18004
	int m_nNodeAlloc;	// 0x18008
	int m_nNodeGrow;	// 0x1800c
	unsigned short m_Head;	// 0x18010
	char m_pad18012[0x1803c - 0x18012];
	int m_n1803c;
	int m_iNumEnts;	// 0x18040
	char m_b18044;
	char m_pad18045[3];
	class IEntityListener **m_ppListeners;	// 0x18048
	char m_pad1804c[0x18054 - 0x1804c];
	int m_nListeners;	// 0x18054

	void sub_100f8700(unsigned int hEnt);	// "CGlobalEntityList::NotifyRemoveEntity"-like: resolves the handle's slot and tells every listener (OnEntityDeleted) about its entity, last listener first
	CBaseEntity *sub_100f7060(CBaseEntity *pCurrent);	// "CGlobalEntityList::NextEnt": the first entity's slot-4 result when pCurrent is null, else the first non-null slot-4 result after pCurrent in the list
	CBaseEntity *sub_100f7770(CBaseEntity *pStart, const char *szName, CBaseEntity *pSearching, CBaseEntity *pActivator);	// "CGlobalEntityList::FindEntityByName" (called through the stub at 0x1000b4b5)
	CBaseEntity *sub_100f7f20(CBaseEntity *pStart, const char *szName, CBaseEntity *pSearching, CBaseEntity *pActivator);	// a name search with the same four arguments as sub_100f7770 (stub 0x1000b9b0)
	CBaseEntity *sub_100f7c30(CBaseEntity *pStart, const char *szName, const Vector *pCenter, float flRadius, CBaseEntity *pSearching, CBaseEntity *pActivator);	// "FindEntityByNameWithin" (stub 0x10012193): sub_100f7770, then the first one with an edict within flRadius of pCenter; matched as a free function, called as a member here
	void sub_100f7e30(CBaseEntity *pStart, const char *szName, const Vector *pCenter, float flRadius);	// stub 0x10013da4: the fallback of sub_100f7f70 when sub_100f7c30 finds nothing
	CBaseEntity *sub_100f7380(CBaseEntity *pStart, const char *pszClassname);	// "CGlobalEntityList::FindEntityByClassname": the first entity after pStart (the first one when null) whose classname matches
	CBaseEntity *sub_100f7930(CBaseEntity *pStart, const char *szName);	// the first entity after pStart whose target name matches szName (stub 0x1000e665)
	CGlobalEntityList_Ent *sub_100f7b20(const char *pszClass, const char *pszName, int pStart, void *pSearching, int pActivator);	// a name search variant (stub 0x10009b8d); the entity found, or 0
	CBaseEntity *sub_100f7890(CBaseEntity *pStart, const char *szName);	// the first entity after pStart that has an edict and whose name (slot 9) equals szName, case-insensitive
	void sub_100f6e40(void *pList);	// handles a list of pending entities (the object at pList, a CUtlVector behind a leading dword); stub 0x10011de7
	int sub_100f7040();	// the number of entity slots in use (stub 0x1000e4d0)
	CBaseHandle sub_100f9e20(CGlobalEntityList_Ent *pEnt);	// "CBaseEntityList::AddNonNetworkableEntity": errors when the list at +0x18020 (6 byte nodes) is empty, takes the entry at its head, unlinks and frees it and registers pEnt through sub_100f9fc0(pEnt, <the entry's data>, -1); returns the handle (by value: hidden result pointer)
	CBaseHandle sub_100f9fc0(CGlobalEntityList_Ent *pEnt, int slot, int forcedSerial);	// "CBaseEntityList::AddEntityAtSlot" (stub 0x1000e98f): stores pEnt (and the serial unless -1) in the slot, appends the slot to the live list, gives the entity its handle (slot 0), tells the list (slot 0: pEnt, handle) and returns the handle
	CBaseEntity *sub_100290c0(const unsigned int *pHandle);	// "CBaseEntityList::LookupEntity" (stub 0x10009c8c): the entity behind the handle, 0 when the handle is invalid or stale
	CBaseEntity *sub_100f79b0(CBaseEntity *pStart, const float *pCenter, float flRadius);	// "CGlobalEntityList::FindEntityInSphere" (stub 0x10013bbf)
	CBaseEntity *sub_100f81f0(const Vector *pOrigin, const Vector *pDir, float flThreshold);	// "CGlobalEntityList::FindEntityInCone"-like: the live entity with a world edict (not worldspawn / soundent) whose direction from pOrigin lines up best with pDir (dot product at least flThreshold), 0 when none (stub 0x10007059)
	CBaseEntity *sub_100f8030(const Vector *pOrigin, const Vector *pDir, float flThreshold, const char *pszClassname);	// "FindEntityInCone" with a classname: the entity of that classname (not worldspawn / soundent) with a non-zero field at +0x2b8 whose normalised direction from pOrigin has the best dot product with pDir above flThreshold; 0 when none
	CBaseEntity *sub_100f8420(CBaseEntity *pCurrent);	// the next entity after pCurrent (the first one when null) that has an edict (+0x98 object) with the byte at +0x1480 set and fails sub_100b5190 (stub 0x1000f9ca)
	CBaseEntity *sub_100f83b0(CBaseEntity *pCurrent, int index);	// the next entity after pCurrent (the first one when null) whose edict's index (engine slot 35) equals index; 0 when none
	// (the global list OBJECT is at 0x106eb5d8: its FindEntityByName / NextEnt / ... are called directly on that address,
	//  not through the g_10566458 pointer. No extern is declared here because some matched units declare that address
	//  with other types; a source that needs it writes `extern CGlobalEntityList g_106eb5d8;` itself.)
	CBaseEntity *sub_100f8370(CBaseEntity *pCurrent, unsigned int nFlags);
	CBaseEntity *sub_100f8490(CBaseEntity *pStart, unsigned int nClass, const Vector *pCenter, float flRadius);	// the next entity after pCurrent (the first one when null) with any of the flag bits nFlags in its dword at +0x4c (stub 0x10015b95)
	void sub_100f6ec0();	// "CGlobalEntityList::Clear": sets the byte at +0x18044, removes every live entity (UTIL_Remove through the list from its head), runs sub_100f6ce0, purges a global vector (0x10703668), resets two globals and the counters at +0x1803c / +0x18040 and the byte
	void sub_100f6bb0(struct SEntityObject *pObject);	// "UTIL_Remove" queue step (stub 0x1000f8bc): adds a live networkable to the pending-delete vector (0x10703668); called on the global with this unused
	CGlobalEntityList *sub_100f6b40();	// the constructor: CBaseEntityList::CBaseEntityList (0x100f9a60), the vptr and the zeroed counters
	void sub_100f6ce0();	// stub 0x10007478
	int sub_100f6d60();	// takes the global pending-delete value (0x10703674) and clears it (stub 0x10003d1e); does not use this
};
