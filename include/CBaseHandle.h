// CBaseHandle: Source's entity handle (index in the low 13 bits, serial number above), passed and returned by value.
#pragma once

class IHandleEntity
{
public:
	virtual void vfunc0();
	virtual unsigned int *vfunc1();	// GetRefEHandle: the entity's handle
};

class CBaseHandle
{
public:
	CBaseHandle() : m_Index(0xffffffff) {}
	CBaseHandle(const CBaseHandle &other) { m_Index = other.m_Index; }
	CBaseHandle(int iEntry, int iSerialNumber) { m_Index = iEntry | (iSerialNumber << 13); }

	CBaseHandle &operator=(IHandleEntity *pEntity);	// the handle of pEntity (GetRefEHandle), or the invalid handle for null

	unsigned long m_Index;
};
