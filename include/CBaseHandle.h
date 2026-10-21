// CBaseHandle: Source's entity handle (index in the low 13 bits, serial number above), passed and returned by value.
#pragma once

class CBaseHandle
{
public:
	CBaseHandle() : m_Index(0xffffffff) {}
	CBaseHandle(int iEntry, int iSerialNumber) { m_Index = iEntry | (iSerialNumber << 13); }

	unsigned long m_Index;
};
