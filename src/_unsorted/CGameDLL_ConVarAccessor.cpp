// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101182d0 size=0x5c
#include "CGameDLL_ConVarAccessor.h"
#include "CUnknown10245790.h"
#include "CUnknown102457d0.h"

struct CUnknown1070b234View {
	virtual void vfunc0(void *p);
	virtual void *vfunc1(int n);
};
extern CUnknown1070b234View *g_1070b234;

class CUnknown10245700 {
public:
	int sub_10245700();
};

bool CGameDLL_ConVarAccessor::vfunc0(CConVarArgView *pCommand)
{
	((CUnknown10245790 *)pCommand)->sub_10245790(4);
	((CUnknown102457d0 *)pCommand)->sub_102457d0(0);
	g_1070b234->vfunc0(pCommand);
	void *p = g_1070b234->vfunc1(((CUnknown10245700 *)pCommand)->sub_10245700());
	if (p && !pCommand->vfunc1())
		pCommand->vfunc6(p);
	return true;
}
// END FUNCTION
