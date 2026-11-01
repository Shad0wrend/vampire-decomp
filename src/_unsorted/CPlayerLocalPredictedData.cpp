// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1015e110 size=0x20
#include "vampire.h"
extern char g_10470490;
void sub_10430964(void *p);
struct CUnk1015e110
{
    void *sub_1015e110(unsigned char bFree);
};
// TARGET: CUnk1015e110::sub_1015e110
void *CUnk1015e110::sub_1015e110(unsigned char bFree)
{
    *(void **)this = &g_10470490;
    if (bFree & 1) {
        sub_10430964(this);
    }
    return this;
}
// END FUNCTION
