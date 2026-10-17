// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103c3960 size=0x58
#include "CNPC_VTzimisceRunner.h"

struct HandleEnt_ { virtual void f0(); virtual unsigned long *GetRefEHandle(); };
struct Unk65e8_ { bool sub_10008b98(void *p); };
struct Unk924edc_ { virtual void f0(); virtual void f1(); };
extern Unk924edc_ *g_10924edc;

bool CNPC_VTzimisceRunner::vfunc599(void *pEntity)
{
	HandleEnt_ *e = (HandleEnt_ *)pEntity;
	if (e)
		*(unsigned long *)((char *)this + 0x6678) = *e->GetRefEHandle();
	else
		*(unsigned long *)((char *)this + 0x6678) = 0xffffffff;
	if ((*(Unk65e8_ **)((char *)this + 0x65e8))->sub_10008b98(this))
	{
		g_10924edc->f1();
		*((bool *)this + 0x6078) = true;
		return true;
	}
	*((bool *)this + 0x6078) = false;
	return false;
}
// END FUNCTION
