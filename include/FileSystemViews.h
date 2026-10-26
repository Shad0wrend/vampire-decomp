// FileSystemViews: vtable views of the engine's file system (global at 0x1070b238) and random stream (global at 0x1070b244)
// objects; only the slots decompiled code calls are typed, the placeholders keep the slot numbers right.
#pragma once

#include "CBCCSlotViews.h"

class IFileSystemView
{
public:
	VIEW_SLOT(0) VIEW_SLOT(1) VIEW_SLOT(2)
	virtual void vfunc3(const char *pszFile, int length, int arg);	// slot 3 (+0xc): takes a file name with its length and an argument
	VIEW_SLOT(4) VIEW_SLOT(5) VIEW_SLOT(6) VIEW_SLOT(7) VIEW_SLOT(8) VIEW_SLOT(9)
	VIEW_SLOT10(1) VIEW_SLOT(20) VIEW_SLOT(21)
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
