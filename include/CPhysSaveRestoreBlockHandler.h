// CPhysSaveRestoreBlockHandler: the physics save/restore block handler (RTTI name). Only the members the recovered code needs.
#pragma once

#include "utlrbtree.h"
#include "CRBTree16Entry8.h"

class CSave;
class CRestore;
#include "CPhysRestoreRecords.h"

#ifdef PCD_INITIALIZERS	// the initializer unit: the global 0x106bda60 (the SDK's g_PhysSaveRestoreBlockHandler)
#include "utlvector.h"
#include "utlpriorityqueue.h"
#include "CPhysObjSaveRestoreOps.h"
#include "CGlobalEntityList.h"	// IEntityListener
class CBaseEntity;
class IPhysicsObject;
class CPhysCollide;

// The 2003 SDK's CDefOps (utlrbtree.h): the default less function of a key type.
template <class T> class CDefOps
{
public:
	static bool LessFunc(const T &lhs, const T &rhs);
};

// The 2003 SDK's CUtlMap (utlmap.h): the tree of (key, element) nodes, then the key less function.
template <typename K, typename T, typename I = unsigned short> class CUtlMap
{
public:
	typedef K KeyType_t;
	typedef T ElemType_t;
	typedef bool (*LessFunc_t)(const KeyType_t &, const KeyType_t &);
	struct Node_t
	{
		KeyType_t key;
		ElemType_t elem;
	};
	typedef CUtlRBTree<Node_t, I> CTree;

	CUtlMap(int growSize = 0, int initSize = 0, LessFunc_t lessfunc = 0)
		: m_Tree(growSize, initSize, TreeLessFunc)
	{
		m_pfnLess = lessfunc;
	}
	void SetLessFunc(LessFunc_t func) { m_pfnLess = func; }

	static bool TreeLessFunc(const Node_t &left, const Node_t &right);

	CTree m_Tree;
	LessFunc_t m_pfnLess;
};

class CDefSaveRestoreBlockHandler	// ISaveRestoreBlockHandler with empty defaults
{
public:
	virtual const char *GetBlockName();
	virtual void PreSave(void *pData);
	virtual void Save(void *pSave);
	virtual void WriteSaveHeaders(void *pSave);
	virtual void PostSave();
	virtual void PreRestore();
	virtual void ReadRestoreHeaders(void *pRestore);
	virtual void Restore(void *pRestore, bool fCreatePlayers);
	virtual void PostRestore();
	virtual void vfunc9(void *p, void *q);	// slot 9, Troika's: an empty default of two arguments (0x10043be0)
};

class IPhysSaveRestoreManager
{
public:
	virtual void NoteBBox(const Vector &mins, const Vector &maxs, CPhysCollide *pCollide);
	virtual void AssociateModel(IPhysicsObject *pObject, int modelIndex);
	virtual void AssociateModel(IPhysicsObject *pObject, const CPhysCollide *pModel);
	virtual void ForgetModel(IPhysicsObject *pObject);
	virtual void ForgetAllModels();
};

// The SDK's form (physics_saverestore.cpp): three polymorphic bases, built inline; the implicit destructor.
class CPhysSaveRestoreBlockHandler : public CDefSaveRestoreBlockHandler, public IPhysSaveRestoreManager, public IEntityListener
{
public:
	struct QueuedItem_t
	{
		char m_data[0x38];
	};
	class CEntityRestoreSet;

	CPhysSaveRestoreBlockHandler()
	{
		m_QueuedSaves.SetLessFunc(SaveQueueFunc);
		SetDefLessFunc(m_QueuedRestores);
		SetDefLessFunc(m_PhysObjectModels);
		SetDefLessFunc(m_PhysObjectCustomModels);
		SetDefLessFunc(m_PhysCollideBBoxModels);
	}
	template <class MAP> static void SetDefLessFunc(MAP &map)
	{
		map.SetLessFunc(CDefOps<MAP::KeyType_t>::LessFunc);
	}
	static bool SaveQueueFunc(const QueuedItem_t &left, const QueuedItem_t &right);
	virtual const char *GetBlockName();	// declared here (not inline): the vtables stay the game's, not this unit's
	// the overrides the game's vtables hold (its functions are matched under the flat view's names below)
	virtual void PreSave(void *pData);
	virtual void Save(void *pSave);
	virtual void WriteSaveHeaders(void *pSave);
	virtual void PostSave();
	virtual void PreRestore();
	virtual void ReadRestoreHeaders(void *pRestore);
	virtual void Restore(void *pRestore, bool fCreatePlayers);
	virtual void PostRestore();
	virtual void NoteBBox(const Vector &mins, const Vector &maxs, CPhysCollide *pCollide);
	virtual void AssociateModel(IPhysicsObject *pObject, int modelIndex);
	virtual void AssociateModel(IPhysicsObject *pObject, const CPhysCollide *pModel);
	virtual void ForgetModel(IPhysicsObject *pObject);
	virtual void ForgetAllModels();
	virtual void OnEntityCreated(CBaseEntity *pEntity);
	virtual void OnEntityDeleted(CBaseEntity *pEntity);

	CUtlPriorityQueue<QueuedItem_t> m_QueuedSaves;	// 0x0c
	CUtlMap<CBaseEntity *, CEntityRestoreSet *> m_QueuedRestores;	// 0x24
	bool m_fDoLoad;	// 0x40
	CUtlMap<IPhysicsObject *, int> m_PhysObjectModels;	// 0x44
	CUtlMap<IPhysicsObject *, const CPhysCollide *> m_PhysObjectCustomModels;	// 0x60
	CUtlMap<const CPhysCollide *, BBox_t> m_PhysCollideBBoxModels;	// 0x7c
	char m_blockHeader[0x10];	// 0x98
};
#else
class CPhysSaveRestoreBlockHandler
{
public:
	char m_pad0000[0xc];
	// 0x0c: the priority queue of 0x38 byte records (the matched PQ of 0x10046050, defined in that block's source):
	// CUtlVector layout memory +0xc, alloc +0x10, grow +0x14, size +0x18, elems +0x1c, then the less function pointer +0x20
	// (called as less(a, b), returns bool in al); each record: +0 key, +4 entity handle, +0xc item count,
	// +0x14 / +0x20 Vectors, +0x34 item array pointer.
	void *m_pqMemory;	// 0x0c
	int m_pqAllocationCount;	// 0x10
	int m_pqGrowSize;	// 0x14
	int m_pqSize;	// 0x18
	void *m_pqElements;	// 0x1c
	void *m_pqLess;	// 0x20: the less function pointer of the priority queue
	CUtlRBTree<CRBTree16Entry8, unsigned short> m_Tree24;	// 0x24: the tree whose elements own heap vectors
	char m_pad003c[0x40 - 0x3c];
	bool m_bMatch40;	// 0x40: the saved short of the source equals the global at 0x1053c340
	char m_pad0041[0x98 - 0x41];
	char m_data98[0x10];	// 0x98: the sub-object the source is handed to (slot 2 of the source's vtable)

	void vfunc2(CSave *pSave);	// slot 2 (0x10043c70, stub 0x1000b474, ret 4): m_data98 dword 0 = the queue size at +0x18, dword 1 = the global 0x10723938; then pops the queue (heap, smallest first) until empty: for a record whose entity handle (+4) resolves, pSave slot 2(record, 0x1053c410), slot 4, per item (+0xc count, items at +0x34) slot 4, the item handed with the save to the object at 0x10723940 slot 48 (a 0x10 byte block {pSave, item, record key}), slot 6; finally slot 6. PopMin = memmove of the last record to the front, --size, sift-down via less(+0x20) with S47190::sub_10047190 / SPhysRecordX::sub_10046a90 / Vector::sub_1003e4b0 swaps.
	void vfunc3(CSave *pSave);	// slot 3 "save": calls slot 8 of the save (the global at 0x1053c340 with 1), then slot 2 of it with this + 0x98 and the empty name at 0x1053c344
	void vfunc4();	// slot 4: the Purge of the priority queue vector at +0x0c
	void vfunc5();	// slot 5: hands this + 8 (or 0 without a block) to the global at 0x106eb5d8, then calls slot 49 of the object at 0x10723940 with a zeroed dword
	void vfunc6(void *pSource);	// stores whether the source's slot 13 short equals 0x1053c340 at +0x40, then forwards the block at +0x98 with the string 0x1053c344 to the source's slot 2
	// vfunc7's arg 3 (pRestore) is really a CRestore (slots 2 / 5 / 8: vfunc2, s5, vfunc8 in CRestore.h); stub 0x100071c6.
	// +0x98 count / +0x9c dword: m_data98; +0x04 of the handler holds the physics environment object whose vtable slot 1
	// (obj, entity ptr) / slot 2 (obj, model index) is called by sub_100443e0 to attach the restored object.
	// sub_100443e0 (0x100443e0, stub 0x1000b3e8, ret 16, no result): (CRestore *pRestore, CPhysRestoreRecord *pRec, CPhysObjectDesc *pDesc, int nItems);
	// nItems != 1 -> DevMsg "Don't know how to reconsitite models for physobj..."; single-item restore of one object.
	void sub_100443e0(CRestore *pRestore, CPhysRestoreRecord *pRec, CPhysObjectDesc *pDesc, int nItems);
	void vfunc7(CRestore *pRestore, int unused, const char *pszName);	// slot 7 (0x100440c0, stub 0x100071c6, ret 12: the restore object, an unused dword, the name / context string): the restore side of vfunc2; only while m_bMatch40: tells the object at 0x10723940 slot 49 a 0x10 byte block {1, m_data98 dword 1 (+0x9c), the global 0x10723938}; then `while (m_data98 dword 0 (+0x98))`: --count; a zeroed 0x34 byte record {+4 = -1 handle} is filled by pRestore slot 2(record, 0x1053c410) + slot 5; if the handle at +4 resolves (LookupEntity sub_100290c0) the entity is looked up in m_Tree24 (CUtlRBTreeFind16 at sentinel 0x106bdb38, global 0x109f0b7c set from the dword at +0x3c when non-zero), its node element (nodes at +0x28, 0x10 byte nodes, element dword at +0xc) is a vector of 0x38 byte records (count +0xc, data +0) matched by the key dword at +8 against the record's dword 0; with entity slot 128 true and a positive item count: a record of type 1 with a single item goes to 0x100443e0 (stub 0x1000b3e8, 4 args, unmatched), else per item pRestore slot 5, the object at 0x10723940 slot 50 gets a 0x20 byte block {pRestore, item, record key, entity, name (\"\" when null) , 0, the global 0x10580180} when set, pRestore slot 8; entities answering slot 128 false or with no items get slot 223; pRestore slot 8 closes each record; the last --count on exit
	void vfunc8();	// slot 8: tells the physics environment (slot 51), destroys every tree element (their heap vectors) and frees the nodes, then hands this + 8 (or 0) to the global at 0x106eb5d8
public:
	int vfunc0();
};
#endif
