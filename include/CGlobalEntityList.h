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

class CGlobalEntityList
{
public:
	virtual void vfunc0(int a, int b);
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

	CBaseEntity *sub_100f7060(CBaseEntity *pCurrent);	// "CGlobalEntityList::NextEnt": the first entity's slot-4 result when pCurrent is null, else the first non-null slot-4 result after pCurrent in the list
	CBaseEntity *sub_100f7770(CBaseEntity *pStart, const char *szName, CBaseEntity *pSearching, CBaseEntity *pActivator);	// "CGlobalEntityList::FindEntityByName" (called through the stub at 0x1000b4b5)
	CBaseEntity *sub_100f7380(CBaseEntity *pStart, const char *pszClassname);	// "CGlobalEntityList::FindEntityByClassname": the first entity after pStart (the first one when null) whose classname matches
	CBaseEntity *sub_100f7930(CBaseEntity *pStart, const char *szName);	// the first entity after pStart whose target name matches szName (stub 0x1000e665)
	CGlobalEntityList_Ent *sub_100f7b20(const char *pszClass, const char *pszName, int pStart, void *pSearching, int pActivator);	// a name search variant (stub 0x10009b8d); the entity found, or 0
	CBaseEntity *sub_100f7890(CBaseEntity *pStart, const char *szName);	// the first entity after pStart that has an edict and whose name (slot 9) equals szName, case-insensitive
	void sub_100f6e40(void *pList);	// handles a list of pending entities (the object at pList, a CUtlVector behind a leading dword); stub 0x10011de7
	int sub_100f7040();	// the number of entity slots in use (stub 0x1000e4d0)
	void *sub_100f9e20(void *pEnt, int a);	// "CBaseEntityList::AddNonNetworkableEntity"-like: errors when the list at +0x18020 (6 byte nodes) is empty, takes the entry at its head, unlinks and frees it and registers pEnt through sub_100f9fc0(pEnt, a, <the entry's data>, -1); returns pEnt (NB: the real signature of sub_100f9fc0 is below: its first stack argument is the hidden return slot of the CBaseHandle, so this one is AddNonNetworkableEntity(CBaseHandle *pRet, IHandleEntity *pEnt))
	CBaseHandle sub_100f9fc0(CGlobalEntityList_Ent *pEnt, int slot, int forcedSerial);	// "CBaseEntityList::AddEntityAtSlot" (stub 0x1000e98f): stores pEnt (and the serial unless -1) in the slot, appends the slot to the live list, gives the entity its handle (slot 0), tells the list (slot 0: pEnt, handle) and returns the handle
	CBaseEntity *sub_100290c0(const unsigned int *pHandle);	// "CBaseEntityList::LookupEntity" (stub 0x10009c8c): the entity behind the handle, 0 when the handle is invalid or stale
	CBaseEntity *sub_100f79b0(CBaseEntity *pStart, const float *pCenter, float flRadius);	// "CGlobalEntityList::FindEntityInSphere" (stub 0x10013bbf)
	CBaseEntity *sub_100f81f0(const Vector *pOrigin, const Vector *pDir, float flThreshold);	// "CGlobalEntityList::FindEntityInCone"-like: the live entity with a world edict (not worldspawn / soundent) whose direction from pOrigin lines up best with pDir (dot product at least flThreshold), 0 when none (stub 0x10007059)
	CBaseEntity *sub_100f8420(CBaseEntity *pCurrent);	// the next entity after pCurrent (the first one when null) that has an edict (+0x98 object) with the byte at +0x1480 set and fails sub_100b5190 (stub 0x1000f9ca)
	CBaseEntity *sub_100f8370(CBaseEntity *pCurrent, unsigned int nFlags);	// the next entity after pCurrent (the first one when null) with any of the flag bits nFlags in its dword at +0x4c (stub 0x10015b95)
	void sub_100f6ec0();	// "CGlobalEntityList::Clear": sets the byte at +0x18044, removes every live entity (UTIL_Remove through the list from its head), runs sub_100f6ce0, purges a global vector (0x10703668), resets two globals and the counters at +0x1803c / +0x18040 and the byte
	void sub_100f6ce0();	// stub 0x10007478
};
