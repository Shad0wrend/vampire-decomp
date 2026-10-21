// IFileSystemFind: the engine's file system object (global pointer at 0x1070b238), seen through the slots the
// decompiled code uses: slot 16 asks whether a find result is a directory, slots 22 / 23 / 24 / 25 are
// FindFirst / FindNext / FindIsDirectory / FindClose. Every other slot is a placeholder that keeps the numbering.
#pragma once

#define IFSF_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class IFileSystemFind
{
public:
	IFSF_V10(a0)	// slots 0..9
	virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14();
	virtual void a15();
	virtual bool vfunc16(const char *pszFound);	// whether the find result is a directory
	virtual void a17(); virtual void a18(); virtual void a19(); virtual void a20(); virtual void a21();
	virtual const char *vfunc22(const char *pszWildcard, int *pHandle);	// FindFirst: the first file name, 0 when there is none
	virtual const char *vfunc23(int hFind);	// FindNext
	virtual bool vfunc24(int hFind);	// FindIsDirectory: whether the current find result is a directory
	virtual void vfunc25(int hFind);	// FindClose
};
