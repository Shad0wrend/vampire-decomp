// CUnknown102064b0: a vendor loaded from a KeyValues-like block (not identified yet); it owns a growable array of
// vendor entries (CUnknown10206340).
#pragma once

#include "CUnknown10206340.h"

class CUnknown102064b0Keys	// the KeyValues-like block (slots 2, 3 and 13 are the ones used)
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CUnknown102064b0Keys *vfunc2(const char *pName);	// first sub block with that name
	virtual CUnknown102064b0Keys *vfunc3();	// next sub block
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual const char *vfunc13(const char *pName, const char *pDefault);	// string value
};

class CUnknown102064b0
{
public:
	int m_growSize;	// 0x00
	int m_nNextId;	// 0x04
	int m_field0008;	// 0x08: InternalName
	int m_field000c;	// 0x0c
	int m_allocationCount;	// 0x10
	int m_size;	// 0x14
	CUnknown10206340 **m_ppItems;	// 0x18
	int m_field001c;	// 0x1c
	int m_field0020;	// 0x20: VendorImage

	bool sub_102064b0(CUnknown102064b0Keys *pKeys);	// reads the ids and the image, then one entry per VendorItem block
};
