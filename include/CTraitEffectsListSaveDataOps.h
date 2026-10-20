// CTraitEffectsListSaveDataOps: save/restore ops for a list of trait ids (5 vtable slots).
#pragma once

class CSave;

struct CTraitEffectsListField
{
	int *m_pList;	// [0] = count, then the trait ids
};

class CTraitEffectsListSaveDataOps
{
public:
	virtual void vfunc0(CTraitEffectsListField *pField, CSave *pSave);	// saves the count, then per trait the length of its name and the name
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
};
