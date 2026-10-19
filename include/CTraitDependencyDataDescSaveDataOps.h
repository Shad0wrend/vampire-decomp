// CTraitDependencyDataDescSaveDataOps: save/restore ops for a trait dependency description (5 vtable slots).
#pragma once

struct CTraitDependencyData
{
	int m_type;
	int m_value;
	char m_flag;
	int m_extra;
};

struct CTraitDependencyField
{
	CTraitDependencyData *m_pData;
};

class CTraitDependencyDataDescSaveDataOps
{
public:
	virtual void vfunc0();
	virtual void vfunc1(CTraitDependencyField *pField, void *pRestore);	// restores the description
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
};
