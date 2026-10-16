// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10376bd0 size=0xe
struct CUnknown10924edc
{
	virtual void slot0();
	virtual void slot1();
};
extern CUnknown10924edc *g_10924edc;

void CNPC_VFrenzyShadow::vfunc601(int unused)
{
	g_10924edc->slot1();
}
// END FUNCTION
