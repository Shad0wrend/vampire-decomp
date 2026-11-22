// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

// FUNCTION: 0x1013db80 size=0x18
extern void (__cdecl *g_1071a240)(const char *, int);

struct CUnk1013db80 {
    char pad[0x20];
    int m_20;
    void sub_1013db80();
};

void CUnk1013db80::sub_1013db80()
{
    if (g_1071a240)
        g_1071a240("Memory leak: mempool blocks left in memory: %d\n", m_20);
}
// END FUNCTION
