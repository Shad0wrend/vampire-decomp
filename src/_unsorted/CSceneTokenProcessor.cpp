// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10083890 size=0x22
// TARGET: CSceneTokenProcessor::vfunc1
#include "CSceneTokenProcessor.h"
#include "CUnknown1070b22c.h"
extern CUnknown1070b22c *g_1070b22c;
bool CSceneTokenProcessor::vfunc1(int a)
{
    m_4 = g_1070b22c->vfunc98(m_4, &m_8);
    return true;
}
// END FUNCTION

// FUNCTION: 0x10083910 size=0x3a
#include <stdarg.h>

extern int (*g_109f387c)(char *pBuffer, int nSize, const char *pszFormat, va_list args);
extern void (*g_109f362c)(const char *pszFormat, ...);

// TARGET: sub_10083910
void sub_10083910(int unused, const char *pszFormat, ...)
{
    char buf[0x800];
    va_list args;
    va_start(args, pszFormat);
    g_109f387c(buf, 0x800, pszFormat, args);
    g_109f362c("%s", buf);
    va_end(args);
}
// END FUNCTION
