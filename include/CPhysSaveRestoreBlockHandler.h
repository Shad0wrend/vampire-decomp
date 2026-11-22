// CPhysSaveRestoreBlockHandler (RTTI .?AVCPhysSaveRestoreBlockHandler@@): the physics save/restore block handler, the
// global 0x106bda60 (the SDK's g_PhysSaveRestoreBlockHandler, physics_saverestore.cpp). Bases as the game's RTTI has
// them: CDefSaveRestoreBlockHandler (vtable 0x1044943c: GetBlockName .. PostRestore and the default slot 9),
// IPhysSaveRestoreManager (+0x04, vtable 0x10449420: NoteBBox, AssociateModel x2, ForgetModel, ForgetAllModels) and
// IEntityListener (+0x08, vtable 0x10449410). The overrides of the later bases are compiled with this at their base
// (members 4 / 8 bytes lower).
#pragma once

#include "utlrbtree.h"
#include "CRBTree16Entry8.h"
#include "utlvector.h"
#include "utlpriorityqueue.h"
#include "CPhysObjSaveRestoreOps.h"
#include "IEntityListener.h"
#include "ISaveRestoreBlockHandler.h"

class CSave;
class CRestore;
#include "CPhysRestoreRecords.h"
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

class IPhysSaveRestoreManager
{
public:
	virtual void NoteBBox(const Vector &mins, const Vector &maxs, CPhysCollide *pCollide);
	virtual void AssociateModel(IPhysicsObject *pObject, int modelIndex);
	virtual void AssociateModel(IPhysicsObject *pObject, const CPhysCollide *pModel);
	virtual void ForgetModel(IPhysicsObject *pObject);
	virtual void ForgetAllModels();
};

// Three polymorphic bases, built inline in the initializer unit; the implicit destructor.
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
	// the overrides (declared, not inline: the vtables stay the game's)
	virtual const char *GetBlockName();
	virtual void PreSave(CSaveRestoreData *pData);	// clears m_blockHeader
	virtual void Save(ISave *pSave);	// m_blockHeader = {queue size, the global 0x10723938}; pops m_QueuedSaves (smallest first): per record whose entity resolves the header (datamap 0x1053c410), then per object the physics environment's save (0x10723940 slot 48)
	virtual void WriteSaveHeaders(ISave *pSave);	// the version short (0x1053c340), then m_blockHeader (datamap 0x1053c344)
	virtual void PostSave();	// the Purge of m_QueuedSaves
	virtual void PreRestore();	// listens to the entity list (0x106eb5d8) as the IEntityListener, then 0x10723940 slot 49
	virtual void ReadRestoreHeaders(IRestore *pRestore);	// m_fDoLoad = the saved version short equals 0x1053c340; reads m_blockHeader
	virtual void Restore(IRestore *pRestore, bool fCreatePlayers, int nUnused);	// while m_fDoLoad: per saved record finds the entity's queued restores in m_QueuedRestores and restores its objects (0x10723940 slot 50, or sub_100443e0 for one model)
	virtual void PostRestore();	// 0x10723940 slot 51, frees m_QueuedRestores' sets, stops listening
	virtual void NoteBBox(const Vector &mins, const Vector &maxs, CPhysCollide *pCollide);	// m_PhysCollideBBoxModels
	virtual void AssociateModel(IPhysicsObject *pObject, int modelIndex);	// m_PhysObjectModels
	virtual void AssociateModel(IPhysicsObject *pObject, const CPhysCollide *pModel);	// m_PhysObjectCustomModels
	virtual void ForgetModel(IPhysicsObject *pObject);
	virtual void ForgetAllModels();
	virtual void OnEntityCreated(CBaseEntity *pEntity);
	virtual void OnEntityDeleted(CBaseEntity *pEntity);	// frees the entity's queued restore set in m_QueuedRestores

	// 0x100443e0 (ret 16): restores one object of a single-model record (the model by name or index, a custom box, or
	// the tracer), then AssociateModel through this + 4; nItems != 1: DevMsg "Don't know how to reconsitite models ...".
	void sub_100443e0(CRestore *pRestore, CPhysRestoreRecord *pRec, CPhysObjectDesc *pDesc, int nItems);

	CUtlPriorityQueue<QueuedItem_t> m_QueuedSaves;	// 0x0c
	CUtlMap<CBaseEntity *, CEntityRestoreSet *> m_QueuedRestores;	// 0x24
	bool m_fDoLoad;	// 0x40
	CUtlMap<IPhysicsObject *, int> m_PhysObjectModels;	// 0x44
	CUtlMap<IPhysicsObject *, const CPhysCollide *> m_PhysObjectCustomModels;	// 0x60
	CUtlMap<const CPhysCollide *, BBox_t> m_PhysCollideBBoxModels;	// 0x7c
	char m_blockHeader[0x8];	// 0x98: PhysBlockHeader_t {nSaved, nTick}; the object ends at 0xa0 (0x106bdb00 is the next global)
};
