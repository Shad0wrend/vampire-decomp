// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10135150 size=0x6
#include "CLogicPythonCheck.h"
namespace lifted {
extern char g_10577394;
}
CLogicPythonCheck::Datamap82 CLogicPythonCheck::vfunc82()
{
    return (CLogicPythonCheck::Datamap82)&lifted::g_10577394;
}
// END FUNCTION

// FUNCTION: 0x10136170 size=0x36
#include "CLogicPythonCheck.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CLogicPythonCheck *CLogicPythonCheck::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x454))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
