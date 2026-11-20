// CEntityDataInstantiator<T>: per-entity data hash (bases IEntityDataInstantiator not modelled). Only the members
// used by the matched functions are declared; the bucket table is a CUtlHash with 0x14-byte buckets.
#pragma once

struct EntityDataKey_t
{
	unsigned int key;
	int pad;
};

struct EntityDataBucket_t
{
	char *elems;
	int pad[2];
	int count;
	int pad2;
};

template <class T>
class CEntityDataInstantiator
{
public:
	virtual void vfunc0();
	virtual int vfunc1(unsigned int key);
	virtual void *vfunc2(unsigned int key);	// "CreateDataObject": finds or inserts the hash entry of key and gives it a new zeroed T
	virtual void vfunc3(unsigned int key);

	unsigned int HashFind(EntityDataKey_t *pKey);
	void HashRemove(unsigned int handle);

	EntityDataBucket_t *m_pBuckets;
	int m_pad8;
	int m_padC;
	unsigned int m_nBuckets;
	int m_pad14;
	bool (*m_pCompare)(void *elem, EntityDataKey_t *key);
	unsigned int (*m_pHash)(EntityDataKey_t *key);
	bool m_bPow2;
	unsigned int m_nMask;
};

struct touchlink_t	// 20 bytes, the first dword is an entity handle that starts invalid
{
	unsigned int m_hEntity;
	int m_data[4];
	touchlink_t() { m_hEntity = 0xffffffff; }
};

struct groundlink_t	// 12 bytes, the first dword is an entity handle that starts invalid
{
	unsigned int m_hEntity;
	int m_a;
	int m_b;
	groundlink_t() { m_hEntity = 0xffffffff; }
};

struct StepSimulationData	// 0x6c bytes of per-entity step simulation data (zeroed on creation)
{
	int m_data[27];
};

struct ModelWidthScale	// 16 bytes of per-entity model width scale data (zeroed on creation)
{
	int m_data[4];
};
