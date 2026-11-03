// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012fac0 size=0x1a
#include "CPositionInterpolator_CatmullRom.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

int CPositionInterpolator_CatmullRom::vfunc4(const char *pszName, int unused)
{
	return !_strcmpi(pszName, "Corner");
}
// END FUNCTION

// FUNCTION: 0x1012fb10 size=0x1
#include "CPositionInterpolator_CatmullRom.h"
void CPositionInterpolator_CatmullRom::vfunc0()
{
}
// END FUNCTION

// FUNCTION: 0x1012fb30 size=0x21
#include "CPositionInterpolator_CatmullRom.h"
namespace lifted {
extern char g_105752b4;
}
int CPositionInterpolator_CatmullRom::vfunc1(int a0, int a1, int a2)
{
    *(int *)((char *)a0) = (int)&lifted::g_105752b4;
    *(int *)((char *)a1) = -1;
    *(int *)((char *)a2) = 2;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x1012fb70 size=0x2d
#include "CPositionInterpolator_CatmullRom.h"

extern char *g_1057519c;

// TARGET: CPositionInterpolator_CatmullRom::vfunc2
void CPositionInterpolator_CatmullRom::vfunc2(int nIndex, const Vector *pPosition)
{
	Vector *pDest = (Vector *)(g_1057519c + nIndex * 28);
	*pDest = *pPosition;
}
// END FUNCTION

// FUNCTION: 0x1012fbb0 size=0x27
// TARGET: CPositionInterpolator_CatmullRom::vfunc3
#include "CPositionInterpolator_CatmullRom.h"

extern char *g_1057519c;
void sub_1000cfb3(int a, int b, int c, int d, int e, int f);

void CPositionInterpolator_CatmullRom::vfunc3(int nIndex, int flTime)
{
	sub_1000cfb3((int)(g_1057519c - 0x1c), (int)g_1057519c, (int)(g_1057519c + 0x1c), (int)(g_1057519c + 0x38), nIndex, flTime);
}
// END FUNCTION
