// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10185ac0 size=0x9
#include "CPlayerMove.h"
// TARGET: CPlayerMove::CPlayerMove
CPlayerMove::CPlayerMove() { }
// END FUNCTION

// FUNCTION: 0x10185ae0 size=0x20
#include "vampire.h"
extern char g_10471730;
void sub_10430964(void *p);
struct CUnk10185ae0
{
    void *sub_10185ae0(unsigned char bFree);
};
// TARGET: CUnk10185ae0::sub_10185ae0
void *CUnk10185ae0::sub_10185ae0(unsigned char bFree)
{
    *(void **)this = &g_10471730;
    if (bFree & 1) {
        sub_10430964(this);
    }
    return this;
}
// END FUNCTION
