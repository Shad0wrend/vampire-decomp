// ConCommandBase: declared by pcdecomp transplant for 0x10245510 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once

class ConCommandBase
{
public:
	ConCommandBase();	// function 0x102454e0, stub 0x10007f3b
	virtual ConCommandBase *vfunc0(unsigned int flags);	// slot 0 (the destructor): ConVar shares the vftable pointer at +0
	void vfunc2(const char *pszName, const char *pszHelp, int nFlags);	// slot 2: the base part of a command's constructor (name, help text, flags)
	ConCommandBase *sub_100df200(const char *pszName, const char *pszHelp, int nFlags);	// the constructor of a command with a name, help text and flags (stub 0x10245540): stores ConCommandBase::vftable, then vfunc2
	void vfunc3();	// slot 3 (0x10245630): registers this command through the global accessor once (+0xc), not declared virtual to keep the derived classes' slot numbering
public:
	bool vfunc1();
};
