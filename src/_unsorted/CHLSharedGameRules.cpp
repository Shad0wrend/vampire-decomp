// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042c0c0 size=0x68
struct THL {
	bool sub_1042c0c0(int a, int b);
	bool sub_1000e232(int a, int b);
};

bool THL::sub_1042c0c0(int a, int b)
{
	if (a == 6)
		a = 3;
	if (b == 6)
		b = 3;
	if (a > b) {
		int t = a;
		a = b;
		b = t;
	}
	if (a == 0xf) {
		if (b == 0xf)
			return false;
	} else if (a == 0xd) {
		if (b == 0xd)
			return false;
	}
	if (b == 0x11 && (a == 3 || a == 0x10 || a == 0x11))
		return false;
	if (a == 0x12 && b == 0x12)
		return false;
	return sub_1000e232(a, b);
}
// END FUNCTION
