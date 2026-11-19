// CBaseHandle: Source's entity handle (index in the low 13 bits, serial number above), passed and returned by value.
// Get() and Set() are defined in ehandle.h (they need the entity list); include ehandle.h to use them.
#pragma once

class IHandleEntity	// RTTI .?AVIHandleEntity@@: Source's 2003 interface (two slots, no destructor). The game has no vtable
{	// of its own: VC6 drops its vptr store, which the next class's store overwrites at once
public:
	virtual int vfunc0(int a0) = 0;	// slot 0: SetRefEHandle (stores the handle a0 points at)
	virtual unsigned int *vfunc1() = 0;	// slot 1: GetRefEHandle: the entity's handle
};

class CBaseHandle
{
public:
	CBaseHandle() : m_Index(0xffffffff) {}
	CBaseHandle(const CBaseHandle &other) { m_Index = other.m_Index; }
	CBaseHandle(int iEntry, int iSerialNumber) { m_Index = iEntry | (iSerialNumber << 13); }

	CBaseHandle &operator=(IHandleEntity *pEntity);	// the handle of pEntity (GetRefEHandle), or the invalid handle for null

	CBaseHandle &sub_1028ac80(IHandleEntity *pEntity);	// copy of operator=(IHandleEntity *) at another address

	bool IsValid() const { return m_Index != 0xffffffff; }
	int GetEntryIndex() const { return m_Index & 0x1fff; }
	int GetSerialNumber() const { return m_Index >> 13; }
	bool operator==(const CBaseHandle &other) const { return m_Index == other.m_Index; }
	bool operator!=(const CBaseHandle &other) const { return m_Index != other.m_Index; }
	inline IHandleEntity *Get() const;	// ehandle.h
	IHandleEntity *sub_100d1590();	// Get() as an out-of-line copy (the same lookup)
	IHandleEntity *sub_1028acc0();	// Get() as an out-of-line copy (the same lookup), 0x1028acc0
	IHandleEntity *sub_102c6370();	// Get() as an out-of-line copy (the same lookup), 0x102c6370
	IHandleEntity *sub_102c6420();	// Get() as an out-of-line copy (the same lookup), 0x102c6420
	IHandleEntity *sub_102c64d0();	// Get() as an out-of-line copy (the same lookup), 0x102c64d0
	IHandleEntity *sub_100d15d0();	// Get() as an out-of-line copy (the same lookup), 0x100d15d0
	inline const CBaseHandle &Set(const IHandleEntity *pEntity);	// ehandle.h

	unsigned long m_Index;
};
