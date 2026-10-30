// CTraitEffectsListSaveDataOps: save/restore ops for a list of trait ids (5 vtable slots).
#pragma once

class CSave;
class CRestore;

struct CTraitEffectsListField
{
	int *m_pList;	// [0] = count, then the trait ids
};

class CTraitEffectsListSaveDataOps
{
public:
	virtual void vfunc0(CTraitEffectsListField *pField, CSave *pSave);	// saves the count, then per trait the length of its name and the name
	virtual void vfunc1(CTraitEffectsListField *pField, CRestore *pRestore);	// restores the count, then per trait the name read as a string and looked up
	virtual bool vfunc2(int);
	virtual void vfunc3(int);
	virtual bool vfunc4(int, int);
};
