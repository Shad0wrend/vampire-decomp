// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1012f950 size=0x5
#include "CPositionInterpolator_Linear.h"

bool CPositionInterpolator_Linear::vfunc4(const char *pName, const char *pValue)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x1012f990 size=0x1
#include "CPositionInterpolator_Linear.h"
void CPositionInterpolator_Linear::vfunc0()
{
}
// END FUNCTION

// FUNCTION: 0x1012f9b0 size=0x21
#include "CPositionInterpolator_Linear.h"

void CPositionInterpolator_Linear::vfunc1(char **outName, int *outMinKeyReq, int *outMaxKeyReq)
{
	*outName = "Linear";
	*outMinKeyReq = 0;
	*outMaxKeyReq = 1;
}
// END FUNCTION

// FUNCTION: 0x1012f9f0 size=0x2d
#include "CPositionInterpolator_Linear.h"

extern char *g_1057519c;

// TARGET: CPositionInterpolator_Linear::vfunc2
void CPositionInterpolator_Linear::vfunc2(int nIndex, const Vector *pPosition)
{
	Vector *pDest = (Vector *)(g_1057519c + nIndex * 28);
	*pDest = *pPosition;
}
// END FUNCTION

// FUNCTION: 0x1012fa30 size=0x3c
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CPositionInterpolator_Linear.h"

extern char *g_1057519c;

void CPositionInterpolator_Linear::vfunc3(float flT, Vector *pOut)
{
	const Vector &b = *(const Vector *)(0x1c + (int)g_1057519c);
	const Vector &a = *(const Vector *)g_1057519c;
	pOut->x = ((pcd_stage(b.x) - a.x) * flT) + a.x;
	pOut->y = a.y + (flT * (b.y - a.y));
	pOut->z = (((b.z) - a.z) * flT) + a.z;
}
// END FUNCTION
