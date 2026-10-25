// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a8840 size=0x33
extern char g_10594b48[];

struct CCineStateView {
    char pad0[0x1b3c];
    const char *m_psz1b3c;
    int m_n1b40;
    char pad1[0x5cc4 - 0x1b44];
    int m_n5cc4;
    void sub_10006a8c();
};

// TARGET: sub_101a8840
void __stdcall sub_101a8840(CCineStateView *p)
{
    if (p->m_n5cc4 != 7) {
        p->m_psz1b3c = g_10594b48;
        p->m_n1b40 = 0x3ca;
        p->m_n5cc4 = 1;
    }
    p->sub_10006a8c();
}
// END FUNCTION
