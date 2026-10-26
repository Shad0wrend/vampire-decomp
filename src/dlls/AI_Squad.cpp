// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10316720 size=0x2c
extern char g_10591ae8[];
extern char g_10614f80[];
int sub_100067f3(char *fmt, char *file, int line);

struct CUnknown102dfaa0_10316720 {
    void sub_10009c32(int a, int b);
};
struct CSquadUnit10316720 {
    char pad[8];
    CUnknown102dfaa0_10316720 m_sub;
    void sub_10316720(int a);
};

// TARGET: sub_10316720
void CSquadUnit10316720::sub_10316720(int a)
{
    int v = sub_100067f3(g_10591ae8, g_10614f80, 0x252);
    m_sub.sub_10009c32(a, v);
}
// END FUNCTION
