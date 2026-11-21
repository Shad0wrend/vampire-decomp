// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1012c6e0 size=0x34
// TARGET: sub_1012c6e0
bool __stdcall sub_1012c6e0(int a, int b)
{
    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }
    if (a != 8 && b != 8 && a != 1 && !(a == 4 && b == 4))
        return true;
    return false;
}
// END FUNCTION
