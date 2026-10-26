// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10156d50 size=0x29
struct CUnit10156d50 {
    void sub_10156d50(int a);
    void sub_10006c2b();
    void sub_10001aeb(int a);
};

void CUnit10156d50::sub_10156d50(int a)
{
    if (*((char *)this + 0x105c) != 0) {
        sub_10006c2b();
        *((char *)this + 0x105c) = 0;
    }
    sub_10001aeb(a);
}
// END FUNCTION
