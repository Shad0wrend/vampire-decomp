// ConCommandBase: declared by pcdecomp transplant for 0x10245510 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once

class ConCommandBase
{
public:
	ConCommandBase *vfunc0(unsigned int flags);
	void vfunc2(const char *pszName, const char *pszHelp, int nFlags);	// slot 2: the base part of a command's constructor (name, help text, flags)
	ConCommandBase *sub_10245540(const char *pszName, const char *pszHelp, int nFlags);	// the constructor of a command with a name, help text and flags (stub 0x10245540): stores ConCommandBase::vftable, then vfunc2
	void sub_100049d0();
};
