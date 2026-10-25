// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a46b0 size=0x32
extern char g_1064bc7c;
int __fastcall sub_1000df2b(char *self);

int __fastcall sub_103a46b0(char *self)
{
    int t = *(int *)(self + 0x5cc0);
    *(int *)(self + 0x1b2c) = 2;
    if (t - 1) {
        return sub_1000df2b(self);
    }
    *(char **)(self + 0x1b30) = &g_1064bc7c;
    *(int *)(self + 0x1b34) = 0xe6;
    return 0x6b;
}
// END FUNCTION
