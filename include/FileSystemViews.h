// FileSystemViews: vtable views of the engine's file system (global at 0x1070b238) and random stream (global at 0x1070b244)
// objects; only the slots decompiled code calls are typed, the placeholders keep the slot numbers right.
#pragma once

#include "CBCCSlotViews.h"

class IFileSystemView
{
public:
	VIEW_SLOT10(0) VIEW_SLOT10(1) VIEW_SLOT(20) VIEW_SLOT(21)
	virtual const char *FindFirst(const char *pWildCard, int *pHandle);	// slot 22 (+0x58)
	virtual const char *FindNext(int handle);	// slot 23 (+0x5c)
	virtual bool FindIsDirectory(int handle);	// slot 24 (+0x60)
	virtual void FindClose(int handle);	// slot 25 (+0x64)
};

class IUniformRandomView
{
public:
	VIEW_SLOT(0) VIEW_SLOT(1)
	virtual int RandomInt(int minVal, int maxVal);	// slot 2 (+8)
};
