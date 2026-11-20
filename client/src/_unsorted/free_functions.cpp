// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10003c10 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory192 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10003c10(int num);
};

void CUtlMemory192::sub_10003c10(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 1;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 0xc0);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 0xc0);
}
// END FUNCTION

// FUNCTION: 0x10004d80 size=0x43
#include "Vector.h"
Vector Vector::sub_10004d80(float fl) const
{
	Vector res;
	VectorMultiply(*this, fl, res);
	return res;
}
// END FUNCTION

// FUNCTION: 0x10027d20 size=0x191
#include "Vector.h"
void sub_100dfc60(const Vector &a, const Vector &b, int r, int g, int bl, bool noDepthTest, float duration);

void sub_10027d20(const Vector &origin, const Vector &mins, const Vector &maxs, int r, int g, int b, bool noDepthTest, float duration)
{
    Vector o = origin;
    double t0 = maxs.z; o.z = o.z - t0 * 0.5;
    Vector p1 = o + mins;
    Vector p2 = o + maxs;
    sub_100dfc60(p1, p2, r, g, b, noDepthTest, duration);
    p1.x += maxs.x - mins.x;
    p2.x -= maxs.x - mins.x;
    sub_100dfc60(p1, p2, r, g, b, noDepthTest, duration);
    p1.y += maxs.y - mins.y;
    p2.y -= maxs.y - mins.y;
    sub_100dfc60(p1, p2, r, g, b, noDepthTest, duration);
    p1.x -= maxs.x - mins.x;
    p2.x += maxs.x - mins.x;
    sub_100dfc60(p1, p2, r, g, b, noDepthTest, duration);
}
// END FUNCTION

// FUNCTION: 0x100291c0 size=0x32
#include <string.h>

int *__fastcall sub_100291c0(int *p)
{
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    memset(p + 5, 0, 0x41 * 4);
    *(char *)(p + 0x46) = 0;
    p[0xd] = -1;
    return p;
}
// END FUNCTION
