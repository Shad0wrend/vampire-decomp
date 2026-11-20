// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e6e70 size=0x2f
#include "CGameMovement.h"

// TARGET: CGameMovement::vfunc14
int CGameMovement::vfunc14(int type)
{
	switch (type) {
	case 0:
		return 0x14;
	case 1:
		return 0x1a;
	case 2:
		return 0xd;
	}
	return 1;
}
// END FUNCTION
