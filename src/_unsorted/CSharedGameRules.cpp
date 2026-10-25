// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042df70 size=0x34
// TARGET: sub_1042df70
bool __stdcall sub_1042df70(int a, int b)
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
