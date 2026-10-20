// CGlobalEntityList (RTTI .?AVCGlobalEntityList@@): base CBaseEntityList at +0x0 is not modelled;
// primary vtable 0x10455e90 has 2 slots.
// +0x04: the table of 0x2000 entity slots (12 bytes each), +0x18004: the memory of a linked list (6 byte nodes) of
// the live entities, with its head index at +0x18010.
#pragma once

class CBaseEntity;

class CGlobalEntityList_Ent	// the object an entity slot points to
{
public:
	virtual void v0();
	virtual unsigned int *v1();	// the entity's handle
	virtual void v2();
	virtual void v3();
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
	char m_pad18012[0x18040 - 0x18012];
	int m_iNumEnts;

	CBaseEntity *sub_100f7060(CBaseEntity *pCurrent);	// "CGlobalEntityList::NextEnt": the first entity's slot-4 result when pCurrent is null, else the first non-null slot-4 result after pCurrent in the list
	CBaseEntity *sub_100f7770(CBaseEntity *pStart, const char *szName, CBaseEntity *pSearching, CBaseEntity *pActivator);	// "CGlobalEntityList::FindEntityByName" (called through the stub at 0x1000b4b5)
	CBaseEntity *sub_100f7380(CBaseEntity *pStart, const char *pszClassname);	// "CGlobalEntityList::FindEntityByClassname": the first entity after pStart (the first one when null) whose classname matches
	CGlobalEntityList_Ent *sub_100f7b20(const char *pszClass, const char *pszName, int pStart, void *pSearching, int pActivator);	// a name search variant (stub 0x10009b8d); the entity found, or 0
};
