// FileSystemViews: vtable views of the engine's file system (global at 0x1070b238) and random stream (global at 0x1070b244)
// objects; only the slots decompiled code calls are typed, the placeholders keep the slot numbers right.
#pragma once

#include "CBCCSlotViews.h"

class IFileSystemView
{
public:
	virtual int vfunc0(const char *pszFile, const char *pszMode, int arg);	// slot 0: opens a file, returns its handle (0 on failure)
	virtual void vfunc1(int hFile);	// slot 1 (+0x4): closes the handle
	virtual void vfunc2(void *pBuffer, int nBytes, int hFile);	// slot 2 (+8): reads nBytes from the handle into the buffer
	virtual void vfunc3(const char *pszFile, int length, int arg);	// slot 3 (+0xc): takes a file name with its length and an argument
	VIEW_SLOT(4) VIEW_SLOT(5)
	virtual int vfunc6(int hFile);	// slot 6 (+0x18): the size of the open file
	VIEW_SLOT(7) VIEW_SLOT(8) VIEW_SLOT(9)
	VIEW_SLOT(10) VIEW_SLOT(11) VIEW_SLOT(12) VIEW_SLOT(13)
	virtual void vfunc14(const char *pszFile, int arg);	// slot 14 (+0x38): removes a file
	VIEW_SLOT(15) VIEW_SLOT(16) VIEW_SLOT(17) VIEW_SLOT(18) VIEW_SLOT(19)
	VIEW_SLOT(20) virtual void vfunc21(int hFile, const char *pszFormat, ...);	// slot 21 (+0x54): Printf (variadic __cdecl, `this` + handle + format)
	virtual const char *FindFirst(const char *pWildCard, int *pHandle);	// slot 22 (+0x58)
	virtual const char *FindNext(int handle);	// slot 23 (+0x5c)
	virtual bool FindIsDirectory(int handle);	// slot 24 (+0x60)
	virtual void FindClose(int handle);	// slot 25 (+0x64)
};

extern IFileSystemView *g_1070b238;	// 0x1070b238: the engine file system

class IUniformRandomView
{
public:
	VIEW_SLOT(0) VIEW_SLOT(1)
	virtual int RandomInt(int minVal, int maxVal);	// slot 2 (+8)
};
