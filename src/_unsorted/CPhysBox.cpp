// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1004e1c0 size=0x1f
#include "CPhysBox.h"

CBaseEntity *sub_104115b0(int a, int b);

bool CPhysBox::sub_1004e1c0(int a)
{
	return this == sub_104115b0(a, 0);
}
// END FUNCTION
