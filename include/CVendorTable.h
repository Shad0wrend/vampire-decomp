// CVendorTable: the global vendor (shop) table at 0x1074f004 (vdata\system\vendors.txt). It keeps a growable array of
// CUnknown10206400 vendor records (0x24 bytes each, built with CUnknown10206400(id) and filled by
// CUnknown102064b0::sub_102064b0); g_1074f018 / g_1074f01c of CUnknown10206400.h are its m_nVendors / m_ppVendors.
// The array is a hand-grown pointer array (grow size, allocation count, size; new[]/delete of the pointer block with a
// copy and zero fill), not a CUtlVector.
#pragma once

class CUnknown10206400;

class CVendorTable
{
public:
	int m_nGrowSize;	// 0x00: how much the pointer array grows by
	int m_nNextId;	// 0x04: the id the next vendor record gets (reset to 0 by the loader)
	int m_nInternalName;	// 0x08: the "InternalName" string of the file (a string table id)
	int m_nTableId;	// 0x0c: the id the global name table (sub_10203920) gave the file's name
	int m_nAllocCount;	// 0x10
	int m_nVendors;	// 0x14: the number of vendor records (g_1074f018)
	CUnknown10206400 **m_ppVendors;	// 0x18: the array of vendor records (g_1074f01c)

	bool sub_102066d0();	// 0x102066d0 (stub 0x100132af, no arguments, returns al = 0): frees the old records (CPtrArray10206430::sub_10206430 + operator delete per element, then the array), clears +4 / +0x10 / +0x14, sprintf("%s%s.txt", "vdata\\system\\", "vendors"), opens the key file (cdecl 0x101f2e20(path, filesystem g_1070b238), Msg "Unable to load data for: %s\n" and false when it fails), reads the InternalName (name table sub_10203920 / sub_102038e0), then for every "Vendor" key (slot 2 FindKey, slot 3 NextKey of CUnknown102064b0Keys): grows the pointer array when m_nAllocCount == m_nVendors by m_nGrowSize, creates (operator new(0x24), CUnknown10206400(m_nNextId++)) the record when the slot is empty and loads it with CUnknown102064b0::sub_102064b0(key); finally releases the file through its virtual base (slot 1 of the sub-object found through the vtable's second dword)
};
