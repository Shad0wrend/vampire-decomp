// CBitStringSaveRestoreOps<CBitString>: the save / restore ops of a CBitString field (the template's primary vtable, 5 slots).
// Only the slots decompiled code needs have a signature; the rest are placeholders.
#pragma once

#include "CBitString.h"

class CSave;

template <class T>
class CBitStringSaveRestoreOps
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual bool vfunc2(T **ppBits);	// 0x10316d50: masks off the unused bits of the last dword, true when no bit is set
	virtual void vfunc3(T **ppBits);	// 0x10316d10: clears the dword storage of the bit string (nDwords * 4 bytes at m_pData, when there is storage)
	virtual void vfunc4();
};
