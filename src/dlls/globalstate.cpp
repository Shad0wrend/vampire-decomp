// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

// FUNCTION: 0x100576f0 size=0x3e
typedef int (*MsgFn)(const char *, ...);
extern MsgFn g_109f3628;
extern const char *g_1053fc48[];
extern const char g_1053fdb8[];
extern const char g_1053fda8[];

void __fastcall sub_100576f0(int *param_1)
{
    MsgFn msg = g_109f3628;
    int *iVar1;

    msg(g_1053fdb8);
    for (iVar1 = (int *)*param_1; iVar1 != 0; iVar1 = *(int **)((char *)iVar1 + 0x64)) {
        msg(g_1053fda8, iVar1, (char *)iVar1 + 0x40, g_1053fc48[*(int *)((char *)iVar1 + 0x60)]);
    }
}
// END FUNCTION
