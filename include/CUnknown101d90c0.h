// CUnknown101d90c0: one record (0x19c bytes) of the RollInfo data table: a name pointer at +4, a dword at +8 and 100 dwords from +0xc;
// real name not yet known. The data is read from a KeyValues-like section object (CUnknown101d90c0_Section).
#pragma once

class CUnknown101d90c0_Section
{
public:
	virtual const char *vfunc0();	// the section's own name
	virtual char vfunc1();	// whether the section is a sub-section with values (counted by the RollInfo loader)
	virtual CUnknown101d90c0_Section *vfunc2(const char *name);	// the sub-section with this name
	virtual void vfunc3(); virtual CUnknown101d90c0_Section *vfunc4();	// the first child section
	virtual CUnknown101d90c0_Section *vfunc5();	// the next sibling
	virtual void vfunc6(); virtual void vfunc7();
	virtual void vfunc8(); virtual void vfunc9();
	virtual int vfunc10(const char *name, int create);	// handle of the named value
	virtual void vfunc11(); virtual void vfunc12();
	virtual const char *vfunc13(const char *key, const char *pszDefault);	// the string value of key
	virtual void vfunc14(); virtual void vfunc15();
	virtual char vfunc16(const char *name, int n, const char *pszFormat, int *pOut, int *pCount);	// reads up to n values of that format (\"%d\") of the named value
};

class CUnknown101d90c0
{
public:
	char pad0[4];
	const char *m_pszName;	// 0x04
	int m_nName;	// 0x08
	int m_values[100];	// 0x0c

	bool sub_101d90c0(CUnknown101d90c0_Section *pSection);	// reads the "Name" value and the 100 values named "0".."99" of the sub-section called m_pszName ("" when null); false when there is none
};
