// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10131680 size=0x23
struct CTimerEntityCallee {
    void sub_10010794(void *a, void *b, int c);
};
void __fastcall sub_10001226(void *pSelf);

// TARGET: sub_10131680
void __fastcall sub_10131680(void *pSelf)
{
    if (*((unsigned char *)pSelf + 0x204) & 2) {
        ((CTimerEntityCallee *)((char *)pSelf + 0x450))->sub_10010794(pSelf, pSelf, 0);
    }
    sub_10001226(pSelf);
}
// END FUNCTION
