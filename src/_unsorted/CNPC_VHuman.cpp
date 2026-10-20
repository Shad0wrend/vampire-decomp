// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103858b0 size=0x108
#include "CNPC_VHuman.h"

int CNPC_VHuman::vfunc376(int act)
{
	switch (act) {
	case 0x3d:
		act = 0x3b;
		break;
	case 0x3e:
		act = 0x3c;
		break;
	case 0x9f:
		act = 0x9d;
		break;
	case 0xa0:
		act = 0x9e;
		break;
	case 0xa3:
		act = 0xa1;
		break;
	case 0xa4:
		act = 0xa2;
		break;
	}
	return sub_10295710(act);
}
// END FUNCTION
