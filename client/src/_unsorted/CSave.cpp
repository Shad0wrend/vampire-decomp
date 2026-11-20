// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10128fb0 size=0x1d
#include "CSave.h"

// TARGET: CSave::vfunc1
void CSave::vfunc1(int pos)
{
	int *piVar1 = (int *)m_pData;
	if (pos >= 0 && pos < piVar1[3]) {
		piVar1[2] = pos;
		piVar1[1] = piVar1[0] + pos;
	}
}
// END FUNCTION

// FUNCTION: 0x101290f0 size=0x1a
#include "CSave.h"

void CSave::vfunc7(int a, int b, int count)
{
    sub_10129830(a, count * 2, b);
}
// END FUNCTION
