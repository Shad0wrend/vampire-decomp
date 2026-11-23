// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1018dd70 size=0x1e
#include "CVProfPanel.h"
// TARGET: CVProfPanel::CHudElement_vfunc9
bool CVProfPanel::CHudElement_vfunc9()
{
	return CHudElement::sub_100f05b0() && *(int *)((char *)this + 0x68) != 0;
}
// END FUNCTION
