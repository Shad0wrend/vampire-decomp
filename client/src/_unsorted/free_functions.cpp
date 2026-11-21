// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10001000 size=0x2a
struct CUnkElem { };
typedef void (CUnkElem::*CUnkElemFn)();

// TARGET: sub_10001000
void __stdcall sub_10001000(char *ptr, unsigned size, int count, CUnkElemFn fn)
{
    while (--count >= 0) {
        (((CUnkElem *)ptr)->*fn)();
        ptr += size;
    }
}
// END FUNCTION

// FUNCTION: 0x10001030 size=0x31
struct CUnknown1004ddc0 { };
typedef void (CUnknown1004ddc0::*PMF_1004ddc0)();

// TARGET: sub_10001030
void __stdcall sub_10001030(char *ptr, unsigned size, int count, PMF_1004ddc0 pmf)
{
	ptr += size * count;
	while (--count >= 0) {
		ptr -= size;
		(((CUnknown1004ddc0 *)ptr)->*pmf)();
	}
}
// END FUNCTION

// FUNCTION: 0x100011e0 size=0x6
namespace lifted {
extern char g_102de670;
}
int sub_100011e0()
{
    return (int)&lifted::g_102de670;
}
// END FUNCTION

// FUNCTION: 0x10001590 size=0x4
struct CUnknown10001590 { char * sub_10001590(); };
char * CUnknown10001590::sub_10001590()
{
    return (char *)this + -4;
}
// END FUNCTION

// FUNCTION: 0x10001640 size=0x3
char sub_10001640()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100018f0 size=0x3
char sub_100018f0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10002200 size=0x3
void __stdcall sub_10002200(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100025c0 size=0x6
namespace lifted {
extern char g_102de588;
}
int sub_100025c0()
{
    return (int)&lifted::g_102de588;
}
// END FUNCTION

// FUNCTION: 0x10002900 size=0x6
namespace lifted {
extern char g_102de74c;
}
int sub_10002900()
{
    return (int)&lifted::g_102de74c;
}
// END FUNCTION

// FUNCTION: 0x10002bb0 size=0x5
namespace lifted {
int sub_100a5b60();
}
int sub_10002bb0()
{
    return lifted::sub_100a5b60();
}
// END FUNCTION

// FUNCTION: 0x10002be0 size=0x6
namespace lifted {
extern char g_102de768;
}
int sub_10002be0()
{
    return (int)&lifted::g_102de768;
}
// END FUNCTION

// FUNCTION: 0x10003270 size=0x6
namespace lifted {
extern char g_102de8c0;
}
int sub_10003270()
{
    return (int)&lifted::g_102de8c0;
}
// END FUNCTION

// FUNCTION: 0x10003580 size=0x6
namespace lifted {
extern char g_102deaec;
}
int sub_10003580()
{
    return (int)&lifted::g_102deaec;
}
// END FUNCTION

// FUNCTION: 0x100039a0 size=0x6
namespace lifted {
extern char g_102dead0;
}
int sub_100039a0()
{
    return (int)&lifted::g_102dead0;
}
// END FUNCTION

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

// FUNCTION: 0x10003d80 size=0x6
namespace lifted {
extern char g_102dec00;
}
int sub_10003d80()
{
    return (int)&lifted::g_102dec00;
}
// END FUNCTION

// FUNCTION: 0x10003fc0 size=0x6
namespace lifted {
extern char g_102ded50;
}
int sub_10003fc0()
{
    return (int)&lifted::g_102ded50;
}
// END FUNCTION

// FUNCTION: 0x10004560 size=0x3
char sub_10004560()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10004ce0 size=0x62
#include "Vector.h"
#include <stdlib.h>
// TARGET: Vector::sub_10004ce0
void Vector::sub_10004ce0(float minVal, float maxVal)
{
	float scale = (maxVal - minVal) * 3.051851e-5f;
	x = rand() * scale + minVal;
	y = rand() * scale + minVal;
	z = rand() * scale + minVal;
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

// FUNCTION: 0x100058e0 size=0x3
char sub_100058e0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10005c20 size=0x6
namespace lifted {
extern char g_102df14c;
}
int sub_10005c20()
{
    return (int)&lifted::g_102df14c;
}
// END FUNCTION

// FUNCTION: 0x10005de0 size=0x1b
struct CSubObj1005f190 {
	virtual int v0();
	virtual char v1();
	char pad[0x28];
	int m_n2c;
};

struct CFoo1005f190 {
	char pad[4];
	CSubObj1005f190 *m_pSub;
	int sub_10005de0();
};

// TARGET: sub_10005de0
int CFoo1005f190::sub_10005de0()
{
	if (m_pSub->v1()) {
		return 0;
	}
	return m_pSub->m_n2c;
}
// END FUNCTION

// FUNCTION: 0x10005e00 size=0x8f
#include "Ray_t.h"

// TARGET: Ray_t::sub_10005e00
inline void Ray_t::sub_10005e00(const float *pStart, const float *pEnd)
{
    VectorSubtract(*(const Vector *)pEnd, *(const Vector *)pStart, *(Vector *)m_Delta);
    m_IsSwept = ((Vector *)m_Delta)->LengthSqr() != 0;
    m_StartOffset[2] = 0;
    m_StartOffset[1] = 0;
    m_StartOffset[0] = 0;
    m_IsRay = true;
    m_Extents[2] = 0;
    m_Extents[1] = 0;
    m_Extents[0] = 0;
    m_Start[0] = pStart[0];
    m_Start[1] = pStart[1];
    m_Start[2] = pStart[2];
    m_b32 = 0;
    m_n34 = 0;
    m_b33 = 0;
}
static void (Ray_t::*s_sub_1004f7a0)(const float *, const float *) = &Ray_t::sub_10005e00;
// END FUNCTION

// FUNCTION: 0x10005eb0 size=0x6
namespace lifted {
extern char g_102df184;
}
int sub_10005eb0()
{
    return (int)&lifted::g_102df184;
}
// END FUNCTION

// FUNCTION: 0x100060f0 size=0x3
char sub_100060f0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100061b0 size=0x6
namespace lifted {
extern char g_102df68c;
}
int sub_100061b0()
{
    return (int)&lifted::g_102df68c;
}
// END FUNCTION

// FUNCTION: 0x10006480 size=0x6
namespace lifted {
extern char g_102dfad0;
}
int sub_10006480()
{
    return (int)&lifted::g_102dfad0;
}
// END FUNCTION

// FUNCTION: 0x10006750 size=0x6
namespace lifted {
extern char g_102df8ac;
}
int sub_10006750()
{
    return (int)&lifted::g_102df8ac;
}
// END FUNCTION

// FUNCTION: 0x10006a20 size=0x6
namespace lifted {
extern char g_102df87c;
}
int sub_10006a20()
{
    return (int)&lifted::g_102df87c;
}
// END FUNCTION

// FUNCTION: 0x10007220 size=0x6
namespace lifted {
extern char g_102dfd28;
}
int sub_10007220()
{
    return (int)&lifted::g_102dfd28;
}
// END FUNCTION

// FUNCTION: 0x10007280 size=0x4
struct CUnknown10007280 { char * sub_10007280(); };
char * CUnknown10007280::sub_10007280()
{
    return (char *)this + -4;
}
// END FUNCTION

// FUNCTION: 0x100073a0 size=0x6
namespace lifted {
extern char g_102dfcf4;
}
int sub_100073a0()
{
    return (int)&lifted::g_102dfcf4;
}
// END FUNCTION

// FUNCTION: 0x100075d0 size=0x6
namespace lifted {
extern char g_102e1a60;
}
int sub_100075d0()
{
    return (int)&lifted::g_102e1a60;
}
// END FUNCTION

// FUNCTION: 0x10007850 size=0x6
namespace lifted {
extern char g_102e1780;
}
int sub_10007850()
{
    return (int)&lifted::g_102e1780;
}
// END FUNCTION

// FUNCTION: 0x10007ad0 size=0x6
namespace lifted {
extern char g_102e338c;
}
int sub_10007ad0()
{
    return (int)&lifted::g_102e338c;
}
// END FUNCTION

// FUNCTION: 0x10007d50 size=0x6
namespace lifted {
extern char g_102e5e64;
}
int sub_10007d50()
{
    return (int)&lifted::g_102e5e64;
}
// END FUNCTION

// FUNCTION: 0x10007fd0 size=0x6
namespace lifted {
extern char g_102e13ec;
}
int sub_10007fd0()
{
    return (int)&lifted::g_102e13ec;
}
// END FUNCTION

// FUNCTION: 0x10008250 size=0x6
namespace lifted {
extern char g_102e0b98;
}
int sub_10008250()
{
    return (int)&lifted::g_102e0b98;
}
// END FUNCTION

// FUNCTION: 0x100084d0 size=0x6
namespace lifted {
extern char g_102e23e8;
}
int sub_100084d0()
{
    return (int)&lifted::g_102e23e8;
}
// END FUNCTION

// FUNCTION: 0x10008750 size=0x6
namespace lifted {
extern char g_102e60e0;
}
int sub_10008750()
{
    return (int)&lifted::g_102e60e0;
}
// END FUNCTION

// FUNCTION: 0x100089d0 size=0x6
namespace lifted {
extern char g_102e6ec8;
}
int sub_100089d0()
{
    return (int)&lifted::g_102e6ec8;
}
// END FUNCTION

// FUNCTION: 0x10008c50 size=0x6
namespace lifted {
extern char g_102e239c;
}
int sub_10008c50()
{
    return (int)&lifted::g_102e239c;
}
// END FUNCTION

// FUNCTION: 0x10008ed0 size=0x6
namespace lifted {
extern char g_102e1f9c;
}
int sub_10008ed0()
{
    return (int)&lifted::g_102e1f9c;
}
// END FUNCTION

// FUNCTION: 0x10009150 size=0x6
namespace lifted {
extern char g_102e6390;
}
int sub_10009150()
{
    return (int)&lifted::g_102e6390;
}
// END FUNCTION

// FUNCTION: 0x100093d0 size=0x6
namespace lifted {
extern char g_102e27c8;
}
int sub_100093d0()
{
    return (int)&lifted::g_102e27c8;
}
// END FUNCTION

// FUNCTION: 0x10009650 size=0x6
namespace lifted {
extern char g_102e5eb0;
}
int sub_10009650()
{
    return (int)&lifted::g_102e5eb0;
}
// END FUNCTION

// FUNCTION: 0x100098d0 size=0x6
namespace lifted {
extern char g_102e5b9c;
}
int sub_100098d0()
{
    return (int)&lifted::g_102e5b9c;
}
// END FUNCTION

// FUNCTION: 0x10009b50 size=0x6
namespace lifted {
extern char g_102e3d20;
}
int sub_10009b50()
{
    return (int)&lifted::g_102e3d20;
}
// END FUNCTION

// FUNCTION: 0x10009dd0 size=0x6
namespace lifted {
extern char g_102e3a4c;
}
int sub_10009dd0()
{
    return (int)&lifted::g_102e3a4c;
}
// END FUNCTION

// FUNCTION: 0x1000a050 size=0x6
namespace lifted {
extern char g_102e0e48;
}
int sub_1000a050()
{
    return (int)&lifted::g_102e0e48;
}
// END FUNCTION

// FUNCTION: 0x1000a2d0 size=0x6
namespace lifted {
extern char g_102e19b4;
}
int sub_1000a2d0()
{
    return (int)&lifted::g_102e19b4;
}
// END FUNCTION

// FUNCTION: 0x1000a550 size=0x6
namespace lifted {
extern char g_102e68cc;
}
int sub_1000a550()
{
    return (int)&lifted::g_102e68cc;
}
// END FUNCTION

// FUNCTION: 0x1000a7d0 size=0x6
namespace lifted {
extern char g_102e4a4c;
}
int sub_1000a7d0()
{
    return (int)&lifted::g_102e4a4c;
}
// END FUNCTION

// FUNCTION: 0x1000aa50 size=0x6
namespace lifted {
extern char g_102e3498;
}
int sub_1000aa50()
{
    return (int)&lifted::g_102e3498;
}
// END FUNCTION

// FUNCTION: 0x1000acd0 size=0x6
namespace lifted {
extern char g_102dffdc;
}
int sub_1000acd0()
{
    return (int)&lifted::g_102dffdc;
}
// END FUNCTION

// FUNCTION: 0x1000af50 size=0x6
namespace lifted {
extern char g_102e23b8;
}
int sub_1000af50()
{
    return (int)&lifted::g_102e23b8;
}
// END FUNCTION

// FUNCTION: 0x1000b1d0 size=0x6
namespace lifted {
extern char g_102e6754;
}
int sub_1000b1d0()
{
    return (int)&lifted::g_102e6754;
}
// END FUNCTION

// FUNCTION: 0x1000b450 size=0x6
namespace lifted {
extern char g_102e5db0;
}
int sub_1000b450()
{
    return (int)&lifted::g_102e5db0;
}
// END FUNCTION

// FUNCTION: 0x1000b6d0 size=0x6
namespace lifted {
extern char g_102e0a5c;
}
int sub_1000b6d0()
{
    return (int)&lifted::g_102e0a5c;
}
// END FUNCTION

// FUNCTION: 0x1000b950 size=0x6
namespace lifted {
extern char g_102e69ec;
}
int sub_1000b950()
{
    return (int)&lifted::g_102e69ec;
}
// END FUNCTION

// FUNCTION: 0x1000bbd0 size=0x6
namespace lifted {
extern char g_102e088c;
}
int sub_1000bbd0()
{
    return (int)&lifted::g_102e088c;
}
// END FUNCTION

// FUNCTION: 0x1000be50 size=0x6
namespace lifted {
extern char g_102e2158;
}
int sub_1000be50()
{
    return (int)&lifted::g_102e2158;
}
// END FUNCTION

// FUNCTION: 0x1000c0d0 size=0x6
namespace lifted {
extern char g_102e516c;
}
int sub_1000c0d0()
{
    return (int)&lifted::g_102e516c;
}
// END FUNCTION

// FUNCTION: 0x1000c350 size=0x6
namespace lifted {
extern char g_102e19fc;
}
int sub_1000c350()
{
    return (int)&lifted::g_102e19fc;
}
// END FUNCTION

// FUNCTION: 0x1000c5d0 size=0x6
namespace lifted {
extern char g_102e04f0;
}
int sub_1000c5d0()
{
    return (int)&lifted::g_102e04f0;
}
// END FUNCTION

// FUNCTION: 0x1000c850 size=0x6
namespace lifted {
extern char g_102e370c;
}
int sub_1000c850()
{
    return (int)&lifted::g_102e370c;
}
// END FUNCTION

// FUNCTION: 0x1000cad0 size=0x6
namespace lifted {
extern char g_102e4000;
}
int sub_1000cad0()
{
    return (int)&lifted::g_102e4000;
}
// END FUNCTION

// FUNCTION: 0x1000cd50 size=0x6
namespace lifted {
extern char g_102e20d0;
}
int sub_1000cd50()
{
    return (int)&lifted::g_102e20d0;
}
// END FUNCTION

// FUNCTION: 0x1000cfd0 size=0x6
namespace lifted {
extern char g_102e763c;
}
int sub_1000cfd0()
{
    return (int)&lifted::g_102e763c;
}
// END FUNCTION

// FUNCTION: 0x1000d250 size=0x6
namespace lifted {
extern char g_102e3164;
}
int sub_1000d250()
{
    return (int)&lifted::g_102e3164;
}
// END FUNCTION

// FUNCTION: 0x1000d4d0 size=0x6
namespace lifted {
extern char g_102e39ac;
}
int sub_1000d4d0()
{
    return (int)&lifted::g_102e39ac;
}
// END FUNCTION

// FUNCTION: 0x1000d750 size=0x6
namespace lifted {
extern char g_102e59d4;
}
int sub_1000d750()
{
    return (int)&lifted::g_102e59d4;
}
// END FUNCTION

// FUNCTION: 0x1000d9d0 size=0x6
namespace lifted {
extern char g_102e50cc;
}
int sub_1000d9d0()
{
    return (int)&lifted::g_102e50cc;
}
// END FUNCTION

// FUNCTION: 0x1000dc50 size=0x6
namespace lifted {
extern char g_102e0dc4;
}
int sub_1000dc50()
{
    return (int)&lifted::g_102e0dc4;
}
// END FUNCTION

// FUNCTION: 0x1000ded0 size=0x6
namespace lifted {
extern char g_102e314c;
}
int sub_1000ded0()
{
    return (int)&lifted::g_102e314c;
}
// END FUNCTION

// FUNCTION: 0x1000e150 size=0x6
namespace lifted {
extern char g_102e5bb4;
}
int sub_1000e150()
{
    return (int)&lifted::g_102e5bb4;
}
// END FUNCTION

// FUNCTION: 0x1000e3d0 size=0x6
namespace lifted {
extern char g_102e13b8;
}
int sub_1000e3d0()
{
    return (int)&lifted::g_102e13b8;
}
// END FUNCTION

// FUNCTION: 0x1000e650 size=0x6
namespace lifted {
extern char g_102e7090;
}
int sub_1000e650()
{
    return (int)&lifted::g_102e7090;
}
// END FUNCTION

// FUNCTION: 0x1000e8d0 size=0x6
namespace lifted {
extern char g_102e0380;
}
int sub_1000e8d0()
{
    return (int)&lifted::g_102e0380;
}
// END FUNCTION

// FUNCTION: 0x1000eb50 size=0x6
namespace lifted {
extern char g_102e1d10;
}
int sub_1000eb50()
{
    return (int)&lifted::g_102e1d10;
}
// END FUNCTION

// FUNCTION: 0x1000edd0 size=0x6
namespace lifted {
extern char g_102e2cf0;
}
int sub_1000edd0()
{
    return (int)&lifted::g_102e2cf0;
}
// END FUNCTION

// FUNCTION: 0x1000f050 size=0x6
namespace lifted {
extern char g_102e5414;
}
int sub_1000f050()
{
    return (int)&lifted::g_102e5414;
}
// END FUNCTION

// FUNCTION: 0x1000f2d0 size=0x6
namespace lifted {
extern char g_102e59a4;
}
int sub_1000f2d0()
{
    return (int)&lifted::g_102e59a4;
}
// END FUNCTION

// FUNCTION: 0x1000f550 size=0x6
namespace lifted {
extern char g_102e1034;
}
int sub_1000f550()
{
    return (int)&lifted::g_102e1034;
}
// END FUNCTION

// FUNCTION: 0x1000f7d0 size=0x6
namespace lifted {
extern char g_102e6788;
}
int sub_1000f7d0()
{
    return (int)&lifted::g_102e6788;
}
// END FUNCTION

// FUNCTION: 0x1000fa50 size=0x6
namespace lifted {
extern char g_102e3624;
}
int sub_1000fa50()
{
    return (int)&lifted::g_102e3624;
}
// END FUNCTION

// FUNCTION: 0x1000fcd0 size=0x6
namespace lifted {
extern char g_102e225c;
}
int sub_1000fcd0()
{
    return (int)&lifted::g_102e225c;
}
// END FUNCTION

// FUNCTION: 0x1000ff50 size=0x6
namespace lifted {
extern char g_102e7c74;
}
int sub_1000ff50()
{
    return (int)&lifted::g_102e7c74;
}
// END FUNCTION

// FUNCTION: 0x100101d0 size=0x6
namespace lifted {
extern char g_102e6a70;
}
int sub_100101d0()
{
    return (int)&lifted::g_102e6a70;
}
// END FUNCTION

// FUNCTION: 0x10010450 size=0x6
namespace lifted {
extern char g_102e1a90;
}
int sub_10010450()
{
    return (int)&lifted::g_102e1a90;
}
// END FUNCTION

// FUNCTION: 0x100106d0 size=0x6
namespace lifted {
extern char g_102e1548;
}
int sub_100106d0()
{
    return (int)&lifted::g_102e1548;
}
// END FUNCTION

// FUNCTION: 0x10010950 size=0x6
namespace lifted {
extern char g_102e1598;
}
int sub_10010950()
{
    return (int)&lifted::g_102e1598;
}
// END FUNCTION

// FUNCTION: 0x10010bd0 size=0x6
namespace lifted {
extern char g_102e1e74;
}
int sub_10010bd0()
{
    return (int)&lifted::g_102e1e74;
}
// END FUNCTION

// FUNCTION: 0x10010e50 size=0x6
namespace lifted {
extern char g_102e22f8;
}
int sub_10010e50()
{
    return (int)&lifted::g_102e22f8;
}
// END FUNCTION

// FUNCTION: 0x100110d0 size=0x6
namespace lifted {
extern char g_102e47fc;
}
int sub_100110d0()
{
    return (int)&lifted::g_102e47fc;
}
// END FUNCTION

// FUNCTION: 0x10011350 size=0x6
namespace lifted {
extern char g_102e3a34;
}
int sub_10011350()
{
    return (int)&lifted::g_102e3a34;
}
// END FUNCTION

// FUNCTION: 0x100115d0 size=0x6
namespace lifted {
extern char g_102e3974;
}
int sub_100115d0()
{
    return (int)&lifted::g_102e3974;
}
// END FUNCTION

// FUNCTION: 0x10011850 size=0x6
namespace lifted {
extern char g_102e1bb8;
}
int sub_10011850()
{
    return (int)&lifted::g_102e1bb8;
}
// END FUNCTION

// FUNCTION: 0x10011ad0 size=0x6
namespace lifted {
extern char g_102e0b10;
}
int sub_10011ad0()
{
    return (int)&lifted::g_102e0b10;
}
// END FUNCTION

// FUNCTION: 0x10011d50 size=0x6
namespace lifted {
extern char g_102e1338;
}
int sub_10011d50()
{
    return (int)&lifted::g_102e1338;
}
// END FUNCTION

// FUNCTION: 0x10011fd0 size=0x6
namespace lifted {
extern char g_102e26ac;
}
int sub_10011fd0()
{
    return (int)&lifted::g_102e26ac;
}
// END FUNCTION

// FUNCTION: 0x10012250 size=0x6
namespace lifted {
extern char g_102e0f9c;
}
int sub_10012250()
{
    return (int)&lifted::g_102e0f9c;
}
// END FUNCTION

// FUNCTION: 0x100124d0 size=0x6
namespace lifted {
extern char g_102e0458;
}
int sub_100124d0()
{
    return (int)&lifted::g_102e0458;
}
// END FUNCTION

// FUNCTION: 0x10012750 size=0x6
namespace lifted {
extern char g_102e12d8;
}
int sub_10012750()
{
    return (int)&lifted::g_102e12d8;
}
// END FUNCTION

// FUNCTION: 0x100129d0 size=0x6
namespace lifted {
extern char g_102e0a44;
}
int sub_100129d0()
{
    return (int)&lifted::g_102e0a44;
}
// END FUNCTION

// FUNCTION: 0x10012c50 size=0x6
namespace lifted {
extern char g_102e2abc;
}
int sub_10012c50()
{
    return (int)&lifted::g_102e2abc;
}
// END FUNCTION

// FUNCTION: 0x10012ed0 size=0x6
namespace lifted {
extern char g_102e79f4;
}
int sub_10012ed0()
{
    return (int)&lifted::g_102e79f4;
}
// END FUNCTION

// FUNCTION: 0x10013150 size=0x6
namespace lifted {
extern char g_102e6558;
}
int sub_10013150()
{
    return (int)&lifted::g_102e6558;
}
// END FUNCTION

// FUNCTION: 0x100133d0 size=0x6
namespace lifted {
extern char g_102e0588;
}
int sub_100133d0()
{
    return (int)&lifted::g_102e0588;
}
// END FUNCTION

// FUNCTION: 0x10013650 size=0x6
namespace lifted {
extern char g_102e4210;
}
int sub_10013650()
{
    return (int)&lifted::g_102e4210;
}
// END FUNCTION

// FUNCTION: 0x100138d0 size=0x6
namespace lifted {
extern char g_102e57dc;
}
int sub_100138d0()
{
    return (int)&lifted::g_102e57dc;
}
// END FUNCTION

// FUNCTION: 0x10013b50 size=0x6
namespace lifted {
extern char g_102e3990;
}
int sub_10013b50()
{
    return (int)&lifted::g_102e3990;
}
// END FUNCTION

// FUNCTION: 0x10013dd0 size=0x6
namespace lifted {
extern char g_102e1fcc;
}
int sub_10013dd0()
{
    return (int)&lifted::g_102e1fcc;
}
// END FUNCTION

// FUNCTION: 0x10014050 size=0x6
namespace lifted {
extern char g_102e7ae8;
}
int sub_10014050()
{
    return (int)&lifted::g_102e7ae8;
}
// END FUNCTION

// FUNCTION: 0x100142d0 size=0x6
namespace lifted {
extern char g_102e1f10;
}
int sub_100142d0()
{
    return (int)&lifted::g_102e1f10;
}
// END FUNCTION

// FUNCTION: 0x10014550 size=0x6
namespace lifted {
extern char g_102e69b4;
}
int sub_10014550()
{
    return (int)&lifted::g_102e69b4;
}
// END FUNCTION

// FUNCTION: 0x100147d0 size=0x6
namespace lifted {
extern char g_102e15c8;
}
int sub_100147d0()
{
    return (int)&lifted::g_102e15c8;
}
// END FUNCTION

// FUNCTION: 0x10014a50 size=0x6
namespace lifted {
extern char g_102e7568;
}
int sub_10014a50()
{
    return (int)&lifted::g_102e7568;
}
// END FUNCTION

// FUNCTION: 0x10014cd0 size=0x6
namespace lifted {
extern char g_102e418c;
}
int sub_10014cd0()
{
    return (int)&lifted::g_102e418c;
}
// END FUNCTION

// FUNCTION: 0x10014f50 size=0x6
namespace lifted {
extern char g_102e09bc;
}
int sub_10014f50()
{
    return (int)&lifted::g_102e09bc;
}
// END FUNCTION

// FUNCTION: 0x100151d0 size=0x6
namespace lifted {
extern char g_102e2ed0;
}
int sub_100151d0()
{
    return (int)&lifted::g_102e2ed0;
}
// END FUNCTION

// FUNCTION: 0x10015450 size=0x6
namespace lifted {
extern char g_102e3c84;
}
int sub_10015450()
{
    return (int)&lifted::g_102e3c84;
}
// END FUNCTION

// FUNCTION: 0x100156d0 size=0x6
namespace lifted {
extern char g_102e0280;
}
int sub_100156d0()
{
    return (int)&lifted::g_102e0280;
}
// END FUNCTION

// FUNCTION: 0x10015950 size=0x6
namespace lifted {
extern char g_102e0f14;
}
int sub_10015950()
{
    return (int)&lifted::g_102e0f14;
}
// END FUNCTION

// FUNCTION: 0x10015bd0 size=0x6
namespace lifted {
extern char g_102e5dc8;
}
int sub_10015bd0()
{
    return (int)&lifted::g_102e5dc8;
}
// END FUNCTION

// FUNCTION: 0x10015e50 size=0x6
namespace lifted {
extern char g_102e435c;
}
int sub_10015e50()
{
    return (int)&lifted::g_102e435c;
}
// END FUNCTION

// FUNCTION: 0x100160d0 size=0x6
namespace lifted {
extern char g_102e6f54;
}
int sub_100160d0()
{
    return (int)&lifted::g_102e6f54;
}
// END FUNCTION

// FUNCTION: 0x10016350 size=0x6
namespace lifted {
extern char g_102e4d10;
}
int sub_10016350()
{
    return (int)&lifted::g_102e4d10;
}
// END FUNCTION

// FUNCTION: 0x100165d0 size=0x6
namespace lifted {
extern char g_102e0570;
}
int sub_100165d0()
{
    return (int)&lifted::g_102e0570;
}
// END FUNCTION

// FUNCTION: 0x10016850 size=0x6
namespace lifted {
extern char g_102e4994;
}
int sub_10016850()
{
    return (int)&lifted::g_102e4994;
}
// END FUNCTION

// FUNCTION: 0x10016ad0 size=0x6
namespace lifted {
extern char g_102e0368;
}
int sub_10016ad0()
{
    return (int)&lifted::g_102e0368;
}
// END FUNCTION

// FUNCTION: 0x10016d50 size=0x6
namespace lifted {
extern char g_102e5e94;
}
int sub_10016d50()
{
    return (int)&lifted::g_102e5e94;
}
// END FUNCTION

// FUNCTION: 0x10016fd0 size=0x6
namespace lifted {
extern char g_102e16e4;
}
int sub_10016fd0()
{
    return (int)&lifted::g_102e16e4;
}
// END FUNCTION

// FUNCTION: 0x10017250 size=0x6
namespace lifted {
extern char g_102dfed4;
}
int sub_10017250()
{
    return (int)&lifted::g_102dfed4;
}
// END FUNCTION

// FUNCTION: 0x100174d0 size=0x6
namespace lifted {
extern char g_102e5be8;
}
int sub_100174d0()
{
    return (int)&lifted::g_102e5be8;
}
// END FUNCTION

// FUNCTION: 0x10017750 size=0x6
namespace lifted {
extern char g_102e053c;
}
int sub_10017750()
{
    return (int)&lifted::g_102e053c;
}
// END FUNCTION

// FUNCTION: 0x100179d0 size=0x6
namespace lifted {
extern char g_102e2d3c;
}
int sub_100179d0()
{
    return (int)&lifted::g_102e2d3c;
}
// END FUNCTION

// FUNCTION: 0x10017c50 size=0x6
namespace lifted {
extern char g_102e67c4;
}
int sub_10017c50()
{
    return (int)&lifted::g_102e67c4;
}
// END FUNCTION

// FUNCTION: 0x10017ed0 size=0x6
namespace lifted {
extern char g_102e62a8;
}
int sub_10017ed0()
{
    return (int)&lifted::g_102e62a8;
}
// END FUNCTION

// FUNCTION: 0x10018150 size=0x6
namespace lifted {
extern char g_102e0c88;
}
int sub_10018150()
{
    return (int)&lifted::g_102e0c88;
}
// END FUNCTION

// FUNCTION: 0x100183d0 size=0x6
namespace lifted {
extern char g_102e6290;
}
int sub_100183d0()
{
    return (int)&lifted::g_102e6290;
}
// END FUNCTION

// FUNCTION: 0x10018650 size=0x6
namespace lifted {
extern char g_102e4a68;
}
int sub_10018650()
{
    return (int)&lifted::g_102e4a68;
}
// END FUNCTION

// FUNCTION: 0x100188d0 size=0x6
namespace lifted {
extern char g_102e1320;
}
int sub_100188d0()
{
    return (int)&lifted::g_102e1320;
}
// END FUNCTION

// FUNCTION: 0x10018b50 size=0x6
namespace lifted {
extern char g_102e157c;
}
int sub_10018b50()
{
    return (int)&lifted::g_102e157c;
}
// END FUNCTION

// FUNCTION: 0x10018dd0 size=0x6
namespace lifted {
extern char g_102e1b4c;
}
int sub_10018dd0()
{
    return (int)&lifted::g_102e1b4c;
}
// END FUNCTION

// FUNCTION: 0x10019050 size=0x6
namespace lifted {
extern char g_102e4108;
}
int sub_10019050()
{
    return (int)&lifted::g_102e4108;
}
// END FUNCTION

// FUNCTION: 0x100192d0 size=0x6
namespace lifted {
extern char g_102e2170;
}
int sub_100192d0()
{
    return (int)&lifted::g_102e2170;
}
// END FUNCTION

// FUNCTION: 0x10019550 size=0x6
namespace lifted {
extern char g_102e1308;
}
int sub_10019550()
{
    return (int)&lifted::g_102e1308;
}
// END FUNCTION

// FUNCTION: 0x100197d0 size=0x6
namespace lifted {
extern char g_102e0114;
}
int sub_100197d0()
{
    return (int)&lifted::g_102e0114;
}
// END FUNCTION

// FUNCTION: 0x10019a50 size=0x6
namespace lifted {
extern char g_102e3b1c;
}
int sub_10019a50()
{
    return (int)&lifted::g_102e3b1c;
}
// END FUNCTION

// FUNCTION: 0x10019cd0 size=0x6
namespace lifted {
extern char g_102e3ad0;
}
int sub_10019cd0()
{
    return (int)&lifted::g_102e3ad0;
}
// END FUNCTION

// FUNCTION: 0x10019f50 size=0x6
namespace lifted {
extern char g_102e7268;
}
int sub_10019f50()
{
    return (int)&lifted::g_102e7268;
}
// END FUNCTION

// FUNCTION: 0x1001a1d0 size=0x6
namespace lifted {
extern char g_102e4a30;
}
int sub_1001a1d0()
{
    return (int)&lifted::g_102e4a30;
}
// END FUNCTION

// FUNCTION: 0x1001a450 size=0x6
namespace lifted {
extern char g_102dfe14;
}
int sub_1001a450()
{
    return (int)&lifted::g_102dfe14;
}
// END FUNCTION

// FUNCTION: 0x1001a6d0 size=0x6
namespace lifted {
extern char g_102e3da0;
}
int sub_1001a6d0()
{
    return (int)&lifted::g_102e3da0;
}
// END FUNCTION

// FUNCTION: 0x1001a950 size=0x6
namespace lifted {
extern char g_102e4c60;
}
int sub_1001a950()
{
    return (int)&lifted::g_102e4c60;
}
// END FUNCTION

// FUNCTION: 0x1001abd0 size=0x6
namespace lifted {
extern char g_102e2620;
}
int sub_1001abd0()
{
    return (int)&lifted::g_102e2620;
}
// END FUNCTION

// FUNCTION: 0x1001ae50 size=0x6
namespace lifted {
extern char g_102e4a18;
}
int sub_1001ae50()
{
    return (int)&lifted::g_102e4a18;
}
// END FUNCTION

// FUNCTION: 0x1001b0d0 size=0x6
namespace lifted {
extern char g_102e6118;
}
int sub_1001b0d0()
{
    return (int)&lifted::g_102e6118;
}
// END FUNCTION

// FUNCTION: 0x1001b350 size=0x6
namespace lifted {
extern char g_102e4814;
}
int sub_1001b350()
{
    return (int)&lifted::g_102e4814;
}
// END FUNCTION

// FUNCTION: 0x1001b5d0 size=0x6
namespace lifted {
extern char g_102e2554;
}
int sub_1001b5d0()
{
    return (int)&lifted::g_102e2554;
}
// END FUNCTION

// FUNCTION: 0x1001b850 size=0x6
namespace lifted {
extern char g_102e24a0;
}
int sub_1001b850()
{
    return (int)&lifted::g_102e24a0;
}
// END FUNCTION

// FUNCTION: 0x1001bad0 size=0x6
namespace lifted {
extern char g_102e55fc;
}
int sub_1001bad0()
{
    return (int)&lifted::g_102e55fc;
}
// END FUNCTION

// FUNCTION: 0x1001bd50 size=0x6
namespace lifted {
extern char g_102e66c8;
}
int sub_1001bd50()
{
    return (int)&lifted::g_102e66c8;
}
// END FUNCTION

// FUNCTION: 0x1001bfd0 size=0x6
namespace lifted {
extern char g_102e4e7c;
}
int sub_1001bfd0()
{
    return (int)&lifted::g_102e4e7c;
}
// END FUNCTION

// FUNCTION: 0x1001c250 size=0x6
namespace lifted {
extern char g_102e699c;
}
int sub_1001c250()
{
    return (int)&lifted::g_102e699c;
}
// END FUNCTION

// FUNCTION: 0x1001c4d0 size=0x6
namespace lifted {
extern char g_102e19cc;
}
int sub_1001c4d0()
{
    return (int)&lifted::g_102e19cc;
}
// END FUNCTION

// FUNCTION: 0x1001c750 size=0x6
namespace lifted {
extern char g_102e3fd0;
}
int sub_1001c750()
{
    return (int)&lifted::g_102e3fd0;
}
// END FUNCTION

// FUNCTION: 0x1001c9d0 size=0x6
namespace lifted {
extern char g_102e464c;
}
int sub_1001c9d0()
{
    return (int)&lifted::g_102e464c;
}
// END FUNCTION

// FUNCTION: 0x1001cc50 size=0x6
namespace lifted {
extern char g_102e0350;
}
int sub_1001cc50()
{
    return (int)&lifted::g_102e0350;
}
// END FUNCTION

// FUNCTION: 0x1001ced0 size=0x6
namespace lifted {
extern char g_102e7b04;
}
int sub_1001ced0()
{
    return (int)&lifted::g_102e7b04;
}
// END FUNCTION

// FUNCTION: 0x1001d150 size=0x6
namespace lifted {
extern char g_102e6360;
}
int sub_1001d150()
{
    return (int)&lifted::g_102e6360;
}
// END FUNCTION

// FUNCTION: 0x1001d3d0 size=0x6
namespace lifted {
extern char g_102e2310;
}
int sub_1001d3d0()
{
    return (int)&lifted::g_102e2310;
}
// END FUNCTION

// FUNCTION: 0x1001d650 size=0x6
namespace lifted {
extern char g_102e1b30;
}
int sub_1001d650()
{
    return (int)&lifted::g_102e1b30;
}
// END FUNCTION

// FUNCTION: 0x1001d8d0 size=0x6
namespace lifted {
extern char g_102e01cc;
}
int sub_1001d8d0()
{
    return (int)&lifted::g_102e01cc;
}
// END FUNCTION

// FUNCTION: 0x1001db50 size=0x6
namespace lifted {
extern char g_102e253c;
}
int sub_1001db50()
{
    return (int)&lifted::g_102e253c;
}
// END FUNCTION

// FUNCTION: 0x1001ddd0 size=0x6
namespace lifted {
extern char g_102e60c8;
}
int sub_1001ddd0()
{
    return (int)&lifted::g_102e60c8;
}
// END FUNCTION

// FUNCTION: 0x1001e050 size=0x6
namespace lifted {
extern char g_102e3f00;
}
int sub_1001e050()
{
    return (int)&lifted::g_102e3f00;
}
// END FUNCTION

// FUNCTION: 0x1001e2d0 size=0x6
namespace lifted {
extern char g_102e25d8;
}
int sub_1001e2d0()
{
    return (int)&lifted::g_102e25d8;
}
// END FUNCTION

// FUNCTION: 0x1001e550 size=0x6
namespace lifted {
extern char g_102e16b0;
}
int sub_1001e550()
{
    return (int)&lifted::g_102e16b0;
}
// END FUNCTION

// FUNCTION: 0x1001e7d0 size=0x6
namespace lifted {
extern char g_102e0e9c;
}
int sub_1001e7d0()
{
    return (int)&lifted::g_102e0e9c;
}
// END FUNCTION

// FUNCTION: 0x1001ea50 size=0x6
namespace lifted {
extern char g_102dff8c;
}
int sub_1001ea50()
{
    return (int)&lifted::g_102dff8c;
}
// END FUNCTION

// FUNCTION: 0x1001ecd0 size=0x6
namespace lifted {
extern char g_102dff74;
}
int sub_1001ecd0()
{
    return (int)&lifted::g_102dff74;
}
// END FUNCTION

// FUNCTION: 0x1001ef50 size=0x6
namespace lifted {
extern char g_102e4978;
}
int sub_1001ef50()
{
    return (int)&lifted::g_102e4978;
}
// END FUNCTION

// FUNCTION: 0x1001f1d0 size=0x6
namespace lifted {
extern char g_102e0bb0;
}
int sub_1001f1d0()
{
    return (int)&lifted::g_102e0bb0;
}
// END FUNCTION

// FUNCTION: 0x1001f450 size=0x6
namespace lifted {
extern char g_102e3324;
}
int sub_1001f450()
{
    return (int)&lifted::g_102e3324;
}
// END FUNCTION

// FUNCTION: 0x1001f6d0 size=0x6
namespace lifted {
extern char g_102e5c88;
}
int sub_1001f6d0()
{
    return (int)&lifted::g_102e5c88;
}
// END FUNCTION

// FUNCTION: 0x1001f950 size=0x6
namespace lifted {
extern char g_102e2eb4;
}
int sub_1001f950()
{
    return (int)&lifted::g_102e2eb4;
}
// END FUNCTION

// FUNCTION: 0x1001fbd0 size=0x6
namespace lifted {
extern char g_102e5154;
}
int sub_1001fbd0()
{
    return (int)&lifted::g_102e5154;
}
// END FUNCTION

// FUNCTION: 0x1001fe50 size=0x6
namespace lifted {
extern char g_102e5594;
}
int sub_1001fe50()
{
    return (int)&lifted::g_102e5594;
}
// END FUNCTION

// FUNCTION: 0x100200d0 size=0x6
namespace lifted {
extern char g_102dfeec;
}
int sub_100200d0()
{
    return (int)&lifted::g_102dfeec;
}
// END FUNCTION

// FUNCTION: 0x10020350 size=0x6
namespace lifted {
extern char g_102e6378;
}
int sub_10020350()
{
    return (int)&lifted::g_102e6378;
}
// END FUNCTION

// FUNCTION: 0x100205d0 size=0x6
namespace lifted {
extern char g_102e5e7c;
}
int sub_100205d0()
{
    return (int)&lifted::g_102e5e7c;
}
// END FUNCTION

// FUNCTION: 0x10020850 size=0x6
namespace lifted {
extern char g_102e3410;
}
int sub_10020850()
{
    return (int)&lifted::g_102e3410;
}
// END FUNCTION

// FUNCTION: 0x10020ad0 size=0x6
namespace lifted {
extern char g_102e45e4;
}
int sub_10020ad0()
{
    return (int)&lifted::g_102e45e4;
}
// END FUNCTION

// FUNCTION: 0x10020d50 size=0x6
namespace lifted {
extern char g_102e241c;
}
int sub_10020d50()
{
    return (int)&lifted::g_102e241c;
}
// END FUNCTION

// FUNCTION: 0x10020fd0 size=0x6
namespace lifted {
extern char g_102e4a98;
}
int sub_10020fd0()
{
    return (int)&lifted::g_102e4a98;
}
// END FUNCTION

// FUNCTION: 0x10021250 size=0x6
namespace lifted {
extern char g_102e52dc;
}
int sub_10021250()
{
    return (int)&lifted::g_102e52dc;
}
// END FUNCTION

// FUNCTION: 0x100214d0 size=0x6
namespace lifted {
extern char g_102e56e4;
}
int sub_100214d0()
{
    return (int)&lifted::g_102e56e4;
}
// END FUNCTION

// FUNCTION: 0x10021750 size=0x6
namespace lifted {
extern char g_102e3aec;
}
int sub_10021750()
{
    return (int)&lifted::g_102e3aec;
}
// END FUNCTION

// FUNCTION: 0x100219d0 size=0x6
namespace lifted {
extern char g_102e1a30;
}
int sub_100219d0()
{
    return (int)&lifted::g_102e1a30;
}
// END FUNCTION

// FUNCTION: 0x10021c50 size=0x6
namespace lifted {
extern char g_102e1fb4;
}
int sub_10021c50()
{
    return (int)&lifted::g_102e1fb4;
}
// END FUNCTION

// FUNCTION: 0x10021ed0 size=0x6
namespace lifted {
extern char g_102e6bec;
}
int sub_10021ed0()
{
    return (int)&lifted::g_102e6bec;
}
// END FUNCTION

// FUNCTION: 0x10022150 size=0x6
namespace lifted {
extern char g_102e008c;
}
int sub_10022150()
{
    return (int)&lifted::g_102e008c;
}
// END FUNCTION

// FUNCTION: 0x100223d0 size=0x6
namespace lifted {
extern char g_102e7868;
}
int sub_100223d0()
{
    return (int)&lifted::g_102e7868;
}
// END FUNCTION

// FUNCTION: 0x10022650 size=0x6
namespace lifted {
extern char g_102e4fb8;
}
int sub_10022650()
{
    return (int)&lifted::g_102e4fb8;
}
// END FUNCTION

// FUNCTION: 0x100228d0 size=0x6
namespace lifted {
extern char g_102e3f18;
}
int sub_100228d0()
{
    return (int)&lifted::g_102e3f18;
}
// END FUNCTION

// FUNCTION: 0x10022b50 size=0x6
namespace lifted {
extern char g_102e1158;
}
int sub_10022b50()
{
    return (int)&lifted::g_102e1158;
}
// END FUNCTION

// FUNCTION: 0x10022dd0 size=0x6
namespace lifted {
extern char g_102e1e58;
}
int sub_10022dd0()
{
    return (int)&lifted::g_102e1e58;
}
// END FUNCTION

// FUNCTION: 0x10023050 size=0x6
namespace lifted {
extern char g_102e36f4;
}
int sub_10023050()
{
    return (int)&lifted::g_102e36f4;
}
// END FUNCTION

// FUNCTION: 0x100232d0 size=0x6
namespace lifted {
extern char g_102e62c0;
}
int sub_100232d0()
{
    return (int)&lifted::g_102e62c0;
}
// END FUNCTION

// FUNCTION: 0x10023550 size=0x6
namespace lifted {
extern char g_102e59ec;
}
int sub_10023550()
{
    return (int)&lifted::g_102e59ec;
}
// END FUNCTION

// FUNCTION: 0x100237d0 size=0x6
namespace lifted {
extern char g_102e25f0;
}
int sub_100237d0()
{
    return (int)&lifted::g_102e25f0;
}
// END FUNCTION

// FUNCTION: 0x10023a50 size=0x6
namespace lifted {
extern char g_102e34b0;
}
int sub_10023a50()
{
    return (int)&lifted::g_102e34b0;
}
// END FUNCTION

// FUNCTION: 0x10023cd0 size=0x6
namespace lifted {
extern char g_102e01b4;
}
int sub_10023cd0()
{
    return (int)&lifted::g_102e01b4;
}
// END FUNCTION

// FUNCTION: 0x10023f50 size=0x6
namespace lifted {
extern char g_102e71bc;
}
int sub_10023f50()
{
    return (int)&lifted::g_102e71bc;
}
// END FUNCTION

// FUNCTION: 0x100241d0 size=0x6
namespace lifted {
extern char g_102e5ec8;
}
int sub_100241d0()
{
    return (int)&lifted::g_102e5ec8;
}
// END FUNCTION

// FUNCTION: 0x10024450 size=0x6
namespace lifted {
extern char g_102e1cf8;
}
int sub_10024450()
{
    return (int)&lifted::g_102e1cf8;
}
// END FUNCTION

// FUNCTION: 0x100246d0 size=0x6
namespace lifted {
extern char g_102dffac;
}
int sub_100246d0()
{
    return (int)&lifted::g_102dffac;
}
// END FUNCTION

// FUNCTION: 0x10024950 size=0x6
namespace lifted {
extern char g_102e21a0;
}
int sub_10024950()
{
    return (int)&lifted::g_102e21a0;
}
// END FUNCTION

// FUNCTION: 0x10024bd0 size=0x6
namespace lifted {
extern char g_102e4668;
}
int sub_10024bd0()
{
    return (int)&lifted::g_102e4668;
}
// END FUNCTION

// FUNCTION: 0x10024e50 size=0x6
namespace lifted {
extern char g_102e0fb8;
}
int sub_10024e50()
{
    return (int)&lifted::g_102e0fb8;
}
// END FUNCTION

// FUNCTION: 0x100250d0 size=0x6
namespace lifted {
extern char g_102e0bcc;
}
int sub_100250d0()
{
    return (int)&lifted::g_102e0bcc;
}
// END FUNCTION

// FUNCTION: 0x10025350 size=0x6
namespace lifted {
extern char g_102e039c;
}
int sub_10025350()
{
    return (int)&lifted::g_102e039c;
}
// END FUNCTION

// FUNCTION: 0x100255d0 size=0x6
namespace lifted {
extern char g_102e0554;
}
int sub_100255d0()
{
    return (int)&lifted::g_102e0554;
}
// END FUNCTION

// FUNCTION: 0x10025850 size=0x6
namespace lifted {
extern char g_102e29d0;
}
int sub_10025850()
{
    return (int)&lifted::g_102e29d0;
}
// END FUNCTION

// FUNCTION: 0x10025ad0 size=0x6
namespace lifted {
extern char g_102e3c54;
}
int sub_10025ad0()
{
    return (int)&lifted::g_102e3c54;
}
// END FUNCTION

// FUNCTION: 0x10025d50 size=0x6
namespace lifted {
extern char g_102e1c58;
}
int sub_10025d50()
{
    return (int)&lifted::g_102e1c58;
}
// END FUNCTION

// FUNCTION: 0x10025fd0 size=0x6
namespace lifted {
extern char g_102e2d54;
}
int sub_10025fd0()
{
    return (int)&lifted::g_102e2d54;
}
// END FUNCTION

// FUNCTION: 0x10026250 size=0x6
namespace lifted {
extern char g_102e1e3c;
}
int sub_10026250()
{
    return (int)&lifted::g_102e1e3c;
}
// END FUNCTION

// FUNCTION: 0x100264d0 size=0x6
namespace lifted {
extern char g_102e79dc;
}
int sub_100264d0()
{
    return (int)&lifted::g_102e79dc;
}
// END FUNCTION

// FUNCTION: 0x10026750 size=0x6
namespace lifted {
extern char g_102e7534;
}
int sub_10026750()
{
    return (int)&lifted::g_102e7534;
}
// END FUNCTION

// FUNCTION: 0x100269d0 size=0x6
namespace lifted {
extern char g_102e766c;
}
int sub_100269d0()
{
    return (int)&lifted::g_102e766c;
}
// END FUNCTION

// FUNCTION: 0x10026c50 size=0x6
namespace lifted {
extern char g_102e11a4;
}
int sub_10026c50()
{
    return (int)&lifted::g_102e11a4;
}
// END FUNCTION

// FUNCTION: 0x10026e80 size=0x6
namespace lifted {
extern char g_102e580c;
}
int sub_10026e80()
{
    return (int)&lifted::g_102e580c;
}
// END FUNCTION

// FUNCTION: 0x100275b0 size=0x6
namespace lifted {
extern char g_102ea150;
}
int sub_100275b0()
{
    return (int)&lifted::g_102ea150;
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

// FUNCTION: 0x100283d0 size=0x6
namespace lifted {
extern char g_102ea238;
}
int sub_100283d0()
{
    return (int)&lifted::g_102ea238;
}
// END FUNCTION

// FUNCTION: 0x100285d0 size=0x3
char sub_100285d0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100285e0 size=0x3
int sub_100285e0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100285f0 size=0x6
int sub_100285f0()
{
    return 0xff;
}
// END FUNCTION

// FUNCTION: 0x10028610 size=0x3
char sub_10028610()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10028620 size=0x5
char __stdcall sub_10028620(int a0, int a1, int a2, int a3, int a4)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10028630 size=0x1
void sub_10028630()
{
}
// END FUNCTION

// FUNCTION: 0x10028640 size=0x1
void sub_10028640()
{
}
// END FUNCTION

// FUNCTION: 0x10028650 size=0x3
char sub_10028650()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10028660 size=0x5
int __stdcall sub_10028660(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100286d0 size=0x4
struct CUnknown100286d0 { char * sub_100286d0(); };
char * CUnknown100286d0::sub_100286d0()
{
    return (char *)this + -4;
}
// END FUNCTION

// FUNCTION: 0x10028740 size=0x4
struct CUnknown10028740 { char * sub_10028740(); };
char * CUnknown10028740::sub_10028740()
{
    return (char *)this + 0x14;
}
// END FUNCTION

// FUNCTION: 0x10028750 size=0x6
namespace lifted {
extern char g_104d5190;
}
int sub_10028750()
{
    return (int)&lifted::g_104d5190;
}
// END FUNCTION

// FUNCTION: 0x10028760 size=0x3
char sub_10028760()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10028770 size=0x3
char sub_10028770()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10028780 size=0x3
char sub_10028780()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10028920 size=0xe1
extern char *(*g_101e3188)(char *, const char *, int);
extern char g_1027aedc[];
extern char g_1027aed8[];
char *sub_101d1300(const char *, const char *);
double sub_101d12af(const char *);

void sub_10028920(float *out, const char *str)
{
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    char buf[48];
    char *(*pfnCopy)(char *, const char *, int) = g_101e3188;
    pfnCopy(buf, str, 48);
    char *p = sub_101d1300(buf, g_1027aedc);
    if (p) {
        pfnCopy(buf, p + 1, 48);
        x = (float)sub_101d12af(buf);
    }
    p = sub_101d1300(buf, g_1027aed8);
    if (p) {
        pfnCopy(buf, p + 1, 48);
        y = (float)sub_101d12af(buf);
    }
    p = sub_101d1300(buf, g_1027aed8);
    if (p) {
        pfnCopy(buf, p + 1, 48);
        z = (float)sub_101d12af(buf);
    }
    out[0] = x;
    out[1] = y;
    out[2] = z;
}
// END FUNCTION

// FUNCTION: 0x100291b0 size=0x3
struct CUnknown100291b0 { void * sub_100291b0(); };
void * CUnknown100291b0::sub_100291b0()
{
    return this;
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

// FUNCTION: 0x10029370 size=0x44
#include "utlrbtree.h"
#include "utlvector.h"
struct SVecHolder {
    CUtlVector<int> m_List;
    char pad[0x118 - sizeof(CUtlVector<int>)];
    char m_bFlag;
};
void __fastcall sub_10029370(SVecHolder *p)
{
    p->m_bFlag = 0;
    p->m_List.Purge();
}
// END FUNCTION

// FUNCTION: 0x10029450 size=0x35
#include "CCameraShotTable.h"
extern void (*g_101e3108)(const char *pszFormat, ...);
CCameraShot_t *CCameraShotTable::sub_10029450(int index)
{
	if (index <= m_size && index >= 0)
		return &m_pMemory[index];
	g_101e3108("Invalid camera shot index\n");
	return &m_default;
}
// END FUNCTION

// FUNCTION: 0x10029e70 size=0x36
// TARGET: sub_10029e70
struct CLinkElem
{
	int m_pad00[8];
	int m_iPrev;	// 0x20
	int m_iNext;	// 0x24
	int m_pad28[5];
};

void sub_10029e70(CLinkElem *pBase, CLinkElem *pNode)
{
	if (pNode->m_iNext != -1) {
		pBase[pNode->m_iNext].m_iPrev = -1;
	}
	if (pNode->m_iPrev != -1) {
		pBase[pNode->m_iPrev].m_iNext = -1;
	}
	pNode->m_iPrev = -1;
	pNode->m_iNext = -1;
}
// END FUNCTION

// FUNCTION: 0x1002a040 size=0x33
void sub_10029eb0(int *base, int *entry, int arg);

int sub_1002a040(int *p, int arg)
{
    int count = 0;
    int *entry = p;
    int i = 0x32;
    do {
        if (*entry != 0) {
            sub_10029eb0(p, entry, arg);
            count++;
        }
        entry += 0xf;
        i--;
    } while (i != 0);
    return count;
}
// END FUNCTION

// FUNCTION: 0x1002a0e0 size=0x4c
struct Node60 { int d[8]; int m_n20; int m_n24; int e[5]; };
int sub_1002a080(Node60 *);
void sub_1002a0e0(Node60 *list, Node60 *src, int parent)
{
    int idx = sub_1002a080(list);
    Node60 *n = &list[idx];
    *n = *src;
    n->m_n20 = -1;
    if (parent != -1) {
        n->m_n24 = parent;
        list[parent].m_n20 = idx;
    } else {
        n->m_n24 = -1;
    }
}
// END FUNCTION

// FUNCTION: 0x1002a1a0 size=0x6
namespace lifted {
extern char g_102ea5e8;
}
int sub_1002a1a0()
{
    return (int)&lifted::g_102ea5e8;
}
// END FUNCTION

// FUNCTION: 0x1002a2e0 size=0x6
namespace lifted {
extern char g_102ea97c;
}
int sub_1002a2e0()
{
    return (int)&lifted::g_102ea97c;
}
// END FUNCTION

// FUNCTION: 0x1002a430 size=0x6
namespace lifted {
extern char g_102eab34;
}
int sub_1002a430()
{
    return (int)&lifted::g_102eab34;
}
// END FUNCTION

// FUNCTION: 0x1002b4e0 size=0x3
struct CUnknown1002b4e0 { void * sub_1002b4e0(); };
void * CUnknown1002b4e0::sub_1002b4e0()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x1002c080 size=0x8d
#include "CUtlLinkedList8.h"

void CUtlLinkedList8::sub_1002c080(unsigned short elem)
{
	if (elem < m_NumAlloced && m_pMemory[elem].m_Previous != elem) {
		CUtlLinkedList8Node *pList = m_pMemory;
		CUtlLinkedList8Node *pElem = &pList[elem];
		if (pElem->m_Previous != 0xffff)
			pList[pElem->m_Previous].m_Next = pElem->m_Next;
		else
			m_Head = pElem->m_Next;
		if (pElem->m_Next != 0xffff)
			pList[pElem->m_Next].m_Previous = pElem->m_Previous;
		else
			m_Tail = pElem->m_Previous;
		pElem->m_Previous = pElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x1002c130 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_1002c130
	void sub_1002c130(int num);
};

void CMem8b_t::sub_1002c130(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x1002c1c0 size=0x6
namespace lifted {
extern char g_102ead54;
}
int sub_1002c1c0()
{
    return (int)&lifted::g_102ead54;
}
// END FUNCTION

// FUNCTION: 0x1002c320 size=0x6
namespace lifted {
extern int g_102ead70;
}
int sub_1002c320()
{
    return lifted::g_102ead70;
}
// END FUNCTION

// FUNCTION: 0x1002c330 size=0x6
namespace lifted {
extern int g_102ead6c;
}
int sub_1002c330()
{
    return lifted::g_102ead6c;
}
// END FUNCTION

// FUNCTION: 0x1002c3a0 size=0x4
struct CUnknown1002c3a0 { int sub_1002c3a0(); };
int CUnknown1002c3a0::sub_1002c3a0()
{
    return *(int *)((char *)this + 8);
}
// END FUNCTION

// FUNCTION: 0x1002c3b0 size=0x4
struct CUnknown1002c3b0 { int sub_1002c3b0(); };
int CUnknown1002c3b0::sub_1002c3b0()
{
    return *(int *)((char *)this + 0xc);
}
// END FUNCTION

// FUNCTION: 0x1002c4a0 size=0x1
void sub_1002c4a0()
{
}
// END FUNCTION

// FUNCTION: 0x1002c4b0 size=0x3
void __stdcall sub_1002c4b0(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1002c4c0 size=0x3
void __stdcall sub_1002c4c0(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1002c4d0 size=0x3
int sub_1002c4d0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1002c4e0 size=0x3
void __stdcall sub_1002c4e0(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1002c4f0 size=0x3
void __stdcall sub_1002c4f0(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1002c500 size=0x3
void __stdcall sub_1002c500(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1002c520 size=0x3
char sub_1002c520()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1002c530 size=0x3
void __stdcall sub_1002c530(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x1002c540 size=0x4
struct CUnknown1002c540 { char * sub_1002c540(); };
char * CUnknown1002c540::sub_1002c540()
{
    return (char *)this + -4;
}
// END FUNCTION

// FUNCTION: 0x1002d430 size=0x33
#include "CUtlMemory12.h"
extern void *(*g_101e3100)(int);

CUtlMemory12 *CUtlMemory12::sub_1002d430(int growSize, int allocationCount)
{
    m_pMemory = 0;
    m_allocationCount = allocationCount;
    m_growSize = growSize;
    if (allocationCount)
        m_pMemory = (char *)g_101e3100(allocationCount * 12);
    return this;
}
// END FUNCTION

// FUNCTION: 0x1002d470 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1002d470()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1002d620 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory36 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1002d620(int num);
};

void CUtlMemory36::sub_1002d620(int num)
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
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 36);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 36);
}
// END FUNCTION

// FUNCTION: 0x1002d690 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1002d690(int num);
};

void CUtlMemory12::sub_1002d690(int num)
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
				n = 3;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 12);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x1002d700 size=0x6
namespace lifted {
extern char g_104a6d28;
}
int sub_1002d700()
{
    return (int)&lifted::g_104a6d28;
}
// END FUNCTION

// FUNCTION: 0x1002ebc0 size=0x1
void sub_1002ebc0()
{
}
// END FUNCTION

// FUNCTION: 0x1002f7a0 size=0x6
namespace lifted {
extern char g_102eae78;
}
int sub_1002f7a0()
{
    return (int)&lifted::g_102eae78;
}
// END FUNCTION

// FUNCTION: 0x10030c50 size=0x6
namespace lifted {
extern char g_102eb568;
}
int sub_10030c50()
{
    return (int)&lifted::g_102eb568;
}
// END FUNCTION

// FUNCTION: 0x100310b0 size=0x3
char sub_100310b0()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100322b0 size=0x6
namespace lifted {
extern char g_102eb5e0;
}
int sub_100322b0()
{
    return (int)&lifted::g_102eb5e0;
}
// END FUNCTION

// FUNCTION: 0x10032350 size=0x6
namespace lifted {
extern char g_102eb584;
}
int sub_10032350()
{
    return (int)&lifted::g_102eb584;
}
// END FUNCTION

// FUNCTION: 0x10032480 size=0x6
namespace lifted {
extern char g_102eb5f8;
}
int sub_10032480()
{
    return (int)&lifted::g_102eb5f8;
}
// END FUNCTION

// FUNCTION: 0x10032550 size=0x6
namespace lifted {
extern char g_102eb5b4;
}
int sub_10032550()
{
    return (int)&lifted::g_102eb5b4;
}
// END FUNCTION

// FUNCTION: 0x100326e0 size=0x3
void __stdcall sub_100326e0(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100326f0 size=0x3
void __stdcall sub_100326f0(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10032720 size=0x6
namespace lifted {
extern char g_102eb748;
}
int sub_10032720()
{
    return (int)&lifted::g_102eb748;
}
// END FUNCTION

// FUNCTION: 0x10032ba0 size=0x6
namespace lifted {
extern char g_102ebbdc;
}
int sub_10032ba0()
{
    return (int)&lifted::g_102ebbdc;
}
// END FUNCTION

// FUNCTION: 0x10032c40 size=0x6
namespace lifted {
extern char g_102ebbfc;
}
int sub_10032c40()
{
    return (int)&lifted::g_102ebbfc;
}
// END FUNCTION

// FUNCTION: 0x10032f40 size=0x6
namespace lifted {
extern char g_102ebc64;
}
int sub_10032f40()
{
    return (int)&lifted::g_102ebc64;
}
// END FUNCTION

// FUNCTION: 0x10032fe0 size=0x6
namespace lifted {
extern char g_102ebc84;
}
int sub_10032fe0()
{
    return (int)&lifted::g_102ebc84;
}
// END FUNCTION

// FUNCTION: 0x100332b0 size=0x6
namespace lifted {
extern char g_102ebdbc;
}
int sub_100332b0()
{
    return (int)&lifted::g_102ebdbc;
}
// END FUNCTION

// FUNCTION: 0x10033350 size=0x6
namespace lifted {
extern char g_102ebeac;
}
int sub_10033350()
{
    return (int)&lifted::g_102ebeac;
}
// END FUNCTION

// FUNCTION: 0x10033620 size=0x6
namespace lifted {
extern char g_102ec060;
}
int sub_10033620()
{
    return (int)&lifted::g_102ec060;
}
// END FUNCTION

// FUNCTION: 0x100336c0 size=0x6
namespace lifted {
extern char g_102ebf14;
}
int sub_100336c0()
{
    return (int)&lifted::g_102ebf14;
}
// END FUNCTION

// FUNCTION: 0x10033990 size=0x6
namespace lifted {
extern char g_102ec078;
}
int sub_10033990()
{
    return (int)&lifted::g_102ec078;
}
// END FUNCTION

// FUNCTION: 0x10033a30 size=0x6
namespace lifted {
extern char g_102ec16c;
}
int sub_10033a30()
{
    return (int)&lifted::g_102ec16c;
}
// END FUNCTION

// FUNCTION: 0x10033d00 size=0x6
namespace lifted {
extern char g_102ec2ec;
}
int sub_10033d00()
{
    return (int)&lifted::g_102ec2ec;
}
// END FUNCTION

// FUNCTION: 0x10033da0 size=0x6
namespace lifted {
extern char g_102ec30c;
}
int sub_10033da0()
{
    return (int)&lifted::g_102ec30c;
}
// END FUNCTION

// FUNCTION: 0x10033fd0 size=0x6
namespace lifted {
extern char g_102ec36c;
}
int sub_10033fd0()
{
    return (int)&lifted::g_102ec36c;
}
// END FUNCTION

// FUNCTION: 0x10034070 size=0x6
namespace lifted {
extern char g_102ec38c;
}
int sub_10034070()
{
    return (int)&lifted::g_102ec38c;
}
// END FUNCTION

// FUNCTION: 0x100343d0 size=0x6
namespace lifted {
extern char g_102ec560;
}
int sub_100343d0()
{
    return (int)&lifted::g_102ec560;
}
// END FUNCTION

// FUNCTION: 0x10034470 size=0x6
namespace lifted {
extern char g_102ec584;
}
int sub_10034470()
{
    return (int)&lifted::g_102ec584;
}
// END FUNCTION

// FUNCTION: 0x10034c30 size=0x6
namespace lifted {
extern char g_102ec9d8;
}
int sub_10034c30()
{
    return (int)&lifted::g_102ec9d8;
}
// END FUNCTION

// FUNCTION: 0x10034cd0 size=0x6
namespace lifted {
extern char g_102ec9f4;
}
int sub_10034cd0()
{
    return (int)&lifted::g_102ec9f4;
}
// END FUNCTION

// FUNCTION: 0x10034fc0 size=0x6
namespace lifted {
extern char g_102ecc50;
}
int sub_10034fc0()
{
    return (int)&lifted::g_102ecc50;
}
// END FUNCTION

// FUNCTION: 0x10035060 size=0x6
namespace lifted {
extern char g_102ecc6c;
}
int sub_10035060()
{
    return (int)&lifted::g_102ecc6c;
}
// END FUNCTION

// FUNCTION: 0x10035420 size=0x6
namespace lifted {
extern char g_102eccfc;
}
int sub_10035420()
{
    return (int)&lifted::g_102eccfc;
}
// END FUNCTION

// FUNCTION: 0x100354c0 size=0x6
namespace lifted {
extern char g_102eccd4;
}
int sub_100354c0()
{
    return (int)&lifted::g_102eccd4;
}
// END FUNCTION

// FUNCTION: 0x10035710 size=0x6
namespace lifted {
extern char g_102ece38;
}
int sub_10035710()
{
    return (int)&lifted::g_102ece38;
}
// END FUNCTION

// FUNCTION: 0x100357b0 size=0x6
namespace lifted {
extern char g_102ece54;
}
int sub_100357b0()
{
    return (int)&lifted::g_102ece54;
}
// END FUNCTION

// FUNCTION: 0x10035a50 size=0x6
namespace lifted {
extern char g_102ed238;
}
int sub_10035a50()
{
    return (int)&lifted::g_102ed238;
}
// END FUNCTION

// FUNCTION: 0x10035af0 size=0x6
namespace lifted {
extern char g_102ed04c;
}
int sub_10035af0()
{
    return (int)&lifted::g_102ed04c;
}
// END FUNCTION

// FUNCTION: 0x10035e90 size=0x6
namespace lifted {
extern char g_102ed298;
}
int sub_10035e90()
{
    return (int)&lifted::g_102ed298;
}
// END FUNCTION

// FUNCTION: 0x10035f30 size=0x6
namespace lifted {
extern char g_102ed25c;
}
int sub_10035f30()
{
    return (int)&lifted::g_102ed25c;
}
// END FUNCTION

// FUNCTION: 0x10036290 size=0x6
namespace lifted {
extern char g_102ed4a0;
}
int sub_10036290()
{
    return (int)&lifted::g_102ed4a0;
}
// END FUNCTION

// FUNCTION: 0x10036330 size=0x6
namespace lifted {
extern char g_102ed46c;
}
int sub_10036330()
{
    return (int)&lifted::g_102ed46c;
}
// END FUNCTION

// FUNCTION: 0x100365f0 size=0x6
namespace lifted {
extern char g_102ed800;
}
int sub_100365f0()
{
    return (int)&lifted::g_102ed800;
}
// END FUNCTION

// FUNCTION: 0x10036690 size=0x6
namespace lifted {
extern char g_102ed7d4;
}
int sub_10036690()
{
    return (int)&lifted::g_102ed7d4;
}
// END FUNCTION

// FUNCTION: 0x10036d40 size=0x6
namespace lifted {
extern char g_102eda88;
}
int sub_10036d40()
{
    return (int)&lifted::g_102eda88;
}
// END FUNCTION

// FUNCTION: 0x10036de0 size=0x6
namespace lifted {
extern char g_102ed81c;
}
int sub_10036de0()
{
    return (int)&lifted::g_102ed81c;
}
// END FUNCTION

// FUNCTION: 0x10037100 size=0x6
namespace lifted {
extern char g_102edba4;
}
int sub_10037100()
{
    return (int)&lifted::g_102edba4;
}
// END FUNCTION

// FUNCTION: 0x100371a0 size=0x6
namespace lifted {
extern char g_102edbc0;
}
int sub_100371a0()
{
    return (int)&lifted::g_102edbc0;
}
// END FUNCTION

// FUNCTION: 0x10037610 size=0x6
namespace lifted {
extern char g_102edc24;
}
int sub_10037610()
{
    return (int)&lifted::g_102edc24;
}
// END FUNCTION

// FUNCTION: 0x100376b0 size=0x6
namespace lifted {
extern char g_102edbfc;
}
int sub_100376b0()
{
    return (int)&lifted::g_102edbfc;
}
// END FUNCTION

// FUNCTION: 0x10037850 size=0x6
namespace lifted {
extern char g_102ede9c;
}
int sub_10037850()
{
    return (int)&lifted::g_102ede9c;
}
// END FUNCTION

// FUNCTION: 0x100378f0 size=0x6
namespace lifted {
extern char g_102edebc;
}
int sub_100378f0()
{
    return (int)&lifted::g_102edebc;
}
// END FUNCTION

// FUNCTION: 0x10038230 size=0x6
namespace lifted {
extern char g_102edf98;
}
int sub_10038230()
{
    return (int)&lifted::g_102edf98;
}
// END FUNCTION

// FUNCTION: 0x100382d0 size=0x6
namespace lifted {
extern char g_102edf24;
}
int sub_100382d0()
{
    return (int)&lifted::g_102edf24;
}
// END FUNCTION

// FUNCTION: 0x10038780 size=0x6
namespace lifted {
extern char g_102ee4a4;
}
int sub_10038780()
{
    return (int)&lifted::g_102ee4a4;
}
// END FUNCTION

// FUNCTION: 0x10038820 size=0x6
namespace lifted {
extern char g_102ee2f4;
}
int sub_10038820()
{
    return (int)&lifted::g_102ee2f4;
}
// END FUNCTION

// FUNCTION: 0x10039080 size=0x19
#include "Vector.h"
Vector &Vector::sub_10039080(const Vector &v)
{
	x = v.x;
	y = v.y;
	z = v.z;
	return *this;
}
// END FUNCTION

// FUNCTION: 0x10039460 size=0x3
void __stdcall sub_10039460(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10039700 size=0x6
namespace lifted {
extern char g_102ee620;
}
int sub_10039700()
{
    return (int)&lifted::g_102ee620;
}
// END FUNCTION

// FUNCTION: 0x100397a0 size=0x6
namespace lifted {
extern char g_102ee51c;
}
int sub_100397a0()
{
    return (int)&lifted::g_102ee51c;
}
// END FUNCTION

// FUNCTION: 0x10039c40 size=0x6
namespace lifted {
extern char g_102ee56c;
}
int sub_10039c40()
{
    return (int)&lifted::g_102ee56c;
}
// END FUNCTION

// FUNCTION: 0x10039ce0 size=0x6
namespace lifted {
extern char g_102ee4c4;
}
int sub_10039ce0()
{
    return (int)&lifted::g_102ee4c4;
}
// END FUNCTION

// FUNCTION: 0x10039e60 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_10039e60()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10039f20 size=0x3
void __stdcall sub_10039f20(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10039f70 size=0x6
namespace lifted {
extern char g_102ee94c;
}
int sub_10039f70()
{
    return (int)&lifted::g_102ee94c;
}
// END FUNCTION

// FUNCTION: 0x1003a010 size=0x6
namespace lifted {
extern char g_102ee920;
}
int sub_1003a010()
{
    return (int)&lifted::g_102ee920;
}
// END FUNCTION

// FUNCTION: 0x1003a1e0 size=0x3
void __stdcall sub_1003a1e0(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1003a210 size=0x6
namespace lifted {
extern char g_102eead8;
}
int sub_1003a210()
{
    return (int)&lifted::g_102eead8;
}
// END FUNCTION

// FUNCTION: 0x1003a2b0 size=0x6
namespace lifted {
extern char g_102eeabc;
}
int sub_1003a2b0()
{
    return (int)&lifted::g_102eeabc;
}
// END FUNCTION

// FUNCTION: 0x1003a470 size=0x6
namespace lifted {
extern char g_102eeba0;
}
int sub_1003a470()
{
    return (int)&lifted::g_102eeba0;
}
// END FUNCTION

// FUNCTION: 0x1003a510 size=0x6
namespace lifted {
extern char g_102eeb74;
}
int sub_1003a510()
{
    return (int)&lifted::g_102eeb74;
}
// END FUNCTION

// FUNCTION: 0x1003db30 size=0x6
namespace lifted {
extern char g_103eae50;
}
int sub_1003db30()
{
    return (int)&lifted::g_103eae50;
}
// END FUNCTION

// FUNCTION: 0x1003dbd0 size=0x6
namespace lifted {
extern char g_103eae70;
}
int sub_1003dbd0()
{
    return (int)&lifted::g_103eae70;
}
// END FUNCTION

// FUNCTION: 0x1003dd60 size=0x6
namespace lifted {
extern char g_103eaf54;
}
int sub_1003dd60()
{
    return (int)&lifted::g_103eaf54;
}
// END FUNCTION

// FUNCTION: 0x1003e860 size=0x6
namespace lifted {
extern char g_103eb108;
}
int sub_1003e860()
{
    return (int)&lifted::g_103eb108;
}
// END FUNCTION

// FUNCTION: 0x1003e900 size=0x6
namespace lifted {
extern char g_103eaf8c;
}
int sub_1003e900()
{
    return (int)&lifted::g_103eaf8c;
}
// END FUNCTION

// FUNCTION: 0x1003ec10 size=0x6
namespace lifted {
extern char g_103eb120;
}
int sub_1003ec10()
{
    return (int)&lifted::g_103eb120;
}
// END FUNCTION

// FUNCTION: 0x1003ecb0 size=0x6
namespace lifted {
extern char g_103eb1f0;
}
int sub_1003ecb0()
{
    return (int)&lifted::g_103eb1f0;
}
// END FUNCTION

// FUNCTION: 0x1003ef00 size=0x6
namespace lifted {
extern char g_103eb360;
}
int sub_1003ef00()
{
    return (int)&lifted::g_103eb360;
}
// END FUNCTION

// FUNCTION: 0x1003efa0 size=0x6
namespace lifted {
extern char g_103eb37c;
}
int sub_1003efa0()
{
    return (int)&lifted::g_103eb37c;
}
// END FUNCTION

// FUNCTION: 0x1003f1e0 size=0x6
namespace lifted {
extern char g_103eb3e8;
}
int sub_1003f1e0()
{
    return (int)&lifted::g_103eb3e8;
}
// END FUNCTION

// FUNCTION: 0x1003f280 size=0x6
namespace lifted {
extern char g_103eb3bc;
}
int sub_1003f280()
{
    return (int)&lifted::g_103eb3bc;
}
// END FUNCTION

// FUNCTION: 0x1003f5a0 size=0x6
namespace lifted {
extern char g_103eb74c;
}
int sub_1003f5a0()
{
    return (int)&lifted::g_103eb74c;
}
// END FUNCTION

// FUNCTION: 0x1003f640 size=0x6
namespace lifted {
extern char g_103eb524;
}
int sub_1003f640()
{
    return (int)&lifted::g_103eb524;
}
// END FUNCTION

// FUNCTION: 0x1003f930 size=0x6
namespace lifted {
extern char g_103eb768;
}
int sub_1003f930()
{
    return (int)&lifted::g_103eb768;
}
// END FUNCTION

// FUNCTION: 0x1003f9d0 size=0x6
namespace lifted {
extern char g_103eb93c;
}
int sub_1003f9d0()
{
    return (int)&lifted::g_103eb93c;
}
// END FUNCTION

// FUNCTION: 0x1003fd00 size=0x6
namespace lifted {
extern char g_103eba60;
}
int sub_1003fd00()
{
    return (int)&lifted::g_103eba60;
}
// END FUNCTION

// FUNCTION: 0x1003fda0 size=0x6
namespace lifted {
extern char g_103eb97c;
}
int sub_1003fda0()
{
    return (int)&lifted::g_103eb97c;
}
// END FUNCTION

// FUNCTION: 0x10040150 size=0x6
namespace lifted {
extern char g_103ec240;
}
int sub_10040150()
{
    return (int)&lifted::g_103ec240;
}
// END FUNCTION

// FUNCTION: 0x100401f0 size=0x6
namespace lifted {
extern char g_103ec0dc;
}
int sub_100401f0()
{
    return (int)&lifted::g_103ec0dc;
}
// END FUNCTION

// FUNCTION: 0x10040430 size=0x6
namespace lifted {
extern char g_103ec290;
}
int sub_10040430()
{
    return (int)&lifted::g_103ec290;
}
// END FUNCTION

// FUNCTION: 0x100404d0 size=0x6
namespace lifted {
extern char g_103ec25c;
}
int sub_100404d0()
{
    return (int)&lifted::g_103ec25c;
}
// END FUNCTION

// FUNCTION: 0x10040720 size=0x6
namespace lifted {
extern char g_103ec2c4;
}
int sub_10040720()
{
    return (int)&lifted::g_103ec2c4;
}
// END FUNCTION

// FUNCTION: 0x100407c0 size=0x6
namespace lifted {
extern char g_103ebe5c;
}
int sub_100407c0()
{
    return (int)&lifted::g_103ebe5c;
}
// END FUNCTION

// FUNCTION: 0x10040b10 size=0x6
namespace lifted {
extern char g_103ec400;
}
int sub_10040b10()
{
    return (int)&lifted::g_103ec400;
}
// END FUNCTION

// FUNCTION: 0x10040bb0 size=0x6
namespace lifted {
extern char g_103ec41c;
}
int sub_10040bb0()
{
    return (int)&lifted::g_103ec41c;
}
// END FUNCTION

// FUNCTION: 0x10040e90 size=0x6
namespace lifted {
extern char g_103ec604;
}
int sub_10040e90()
{
    return (int)&lifted::g_103ec604;
}
// END FUNCTION

// FUNCTION: 0x10040f30 size=0x6
namespace lifted {
extern char g_103ec44c;
}
int sub_10040f30()
{
    return (int)&lifted::g_103ec44c;
}
// END FUNCTION

// FUNCTION: 0x10041270 size=0x6
namespace lifted {
extern char g_103ec624;
}
int sub_10041270()
{
    return (int)&lifted::g_103ec624;
}
// END FUNCTION

// FUNCTION: 0x10041310 size=0x6
namespace lifted {
extern char g_103ec72c;
}
int sub_10041310()
{
    return (int)&lifted::g_103ec72c;
}
// END FUNCTION

// FUNCTION: 0x10041460 size=0x6
namespace lifted {
extern char g_103ec754;
}
int sub_10041460()
{
    return (int)&lifted::g_103ec754;
}
// END FUNCTION

// FUNCTION: 0x10041730 size=0x3
char sub_10041730()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100421e0 size=0x3
struct CUnknown100421e0 { void * sub_100421e0(); };
void * CUnknown100421e0::sub_100421e0()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x10042370 size=0x3
struct CUnknown10042370 { void * sub_10042370(); };
void * CUnknown10042370::sub_10042370()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x10043150 size=0x76
extern int g_104d4970, g_104d4974, g_104d4978;
struct Rec64 {
    int m00;
    int m04, m08, m0c, m10, m14, m18;
    char m1c;
    int m20, m24, m28, m2c, m30, m34, m38;
    int m3c;
    int m40;
    short m44;
    int m48;
    int m4c, m50, m54;
    int m58, m5c, m60;
    void sub_10043150(int v);
};
void Rec64::sub_10043150(int v)
{
    m3c = v;
    m04 = 0;
    m08 = 0;
    m0c = 0;
    m10 = 0;
    m14 = 0;
    m18 = 0;
    m48 = 0;
    m20 = 0;
    m44 = 0;
    m40 = 0;
    m1c = 0;
    m4c = g_104d4970;
    m50 = g_104d4974;
    m54 = g_104d4978;
    m58 = g_104d4970;
    m5c = g_104d4974;
    m60 = g_104d4978;
    m24 = 0;
    m28 = 0;
    m2c = 0;
    m30 = 0;
    m34 = 0;
    m38 = 0;
}
// END FUNCTION

// FUNCTION: 0x10043220 size=0x1
void sub_10043220()
{
}
// END FUNCTION

// FUNCTION: 0x10043580 size=0xfa
#include "CUnknown100dc9f0.h"
#include "TempVector.h"

float *CUnknown100dc9f0::sub_10043580(const float *pPoint, float *pOut)
{
	Vector &vecTemp = AllocTempVector();
	VectorSubtract(m_maxs, m_mins, vecTemp);
	Vector vecSize = vecTemp;
	pOut[0] = (vecSize.x != 0.0f) ? (pPoint[0] - m_mins.x) / vecSize.x : 0.5f;
	pOut[1] = (vecSize.y != 0.0f) ? (pPoint[1] - m_mins.y) / vecSize.y : 0.5f;
	pOut[2] = (vecSize.z != 0.0f) ? (pPoint[2] - m_mins.z) / vecSize.z : 0.5f;
	return pOut;
}
// END FUNCTION

// FUNCTION: 0x100437f0 size=0x6d
#include "CUnknown100dcd00.h"

struct RandomStream
{
	virtual void a0();
	virtual float RandomFloat(float lo, float hi);
};
extern RandomStream *g_104a5738;

// TARGET: CUnknown100dcd00::sub_100437f0
void CUnknown100dcd00::sub_100437f0(const float *pA, const float *pB, int arg)
{
	float v[3];
	v[0] = g_104a5738->RandomFloat(pA[0], pB[0]);
	v[1] = g_104a5738->RandomFloat(pA[1], pB[1]);
	v[2] = g_104a5738->RandomFloat(pA[2], pB[2]);
	sub_10043680(v, arg);
}
// END FUNCTION

// FUNCTION: 0x10044420 size=0x21
struct CUnkVT100ddc00
{
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3(unsigned short value);
};

extern CUnkVT100ddc00 *g_104a5808;

struct CUnk100ddc00
{
    void sub_10044420();
};

// TARGET: sub_10044420
void CUnk100ddc00::sub_10044420()
{
    unsigned short h = *(unsigned short *)((char *)this + 0x46);
    if (h != 0xffff) {
        g_104a5808->vf3(h);
        *(unsigned short *)((char *)this + 0x46) = 0xffff;
    }
}
// END FUNCTION

// FUNCTION: 0x10044450 size=0x1
void sub_10044450()
{
}
// END FUNCTION

// FUNCTION: 0x10045630 size=0x3b
#include "Vector.h"

void sub_10045630(Vector *a, Vector *b, Vector *out)
{
    CrossProduct(*a, *b, *out);
}
// END FUNCTION

// FUNCTION: 0x10048ff0 size=0x1
void sub_10048ff0()
{
}
// END FUNCTION

// FUNCTION: 0x10049f20 size=0x19
struct CUnknown100f2f90 { void * sub_10049f20(int, int, int); };
void * CUnknown100f2f90::sub_10049f20(int a0, int a1, int a2)
{
    *(int *)this = a0;
    *(int *)((char *)this + 4) = a1;
    *(int *)((char *)this + 8) = a2;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10049f40 size=0x43
#include "Vector.h"
Vector Vector::sub_10049f40(const Vector &v) const
{
	Vector res;
	VectorAdd(*this, v, res);
	return res;
}
// END FUNCTION

// FUNCTION: 0x1004b220 size=0x4b
#include "Vector.h"
#include <math.h>
// TARGET: sub_1004b220
float __cdecl sub_1004b220(const Vector *v)
{
    if (v->y == 0 && v->x == 0)
        return 0;
    float yaw = (float)atan2(v->y, v->x) * 57.29578f;
    if (yaw < 0)
        yaw += 360;
    return yaw;
}
// END FUNCTION

// FUNCTION: 0x1004b7e0 size=0xa7
#include "CTraceEntList.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *, unsigned int);

void CTraceEntList::sub_1004b7e0(int value)
{
	int elem = m_size;
	if (1 + m_size > m_allocationCount && m_growSize != -1) {
		int newSize = m_allocationCount + (1 + m_size - m_allocationCount);
		while (m_allocationCount < newSize) {
			if (m_allocationCount != 0) {
				if (m_growSize != 0)
					m_allocationCount += m_growSize;
				else
					m_allocationCount += m_allocationCount;
			} else {
				m_allocationCount = 8;
			}
		}
		if (m_pMemory)
			m_pMemory = (int *)Plat_Realloc(m_pMemory, m_allocationCount * 4);
		else
			m_pMemory = (int *)Plat_Alloc(m_allocationCount * 4);
	}
	m_size += 1;
	m_pElements = m_pMemory;
	int numToMove = m_size - elem - 1;
	if (numToMove > 0)
		memmove(m_pMemory + elem + 1, m_pMemory + elem, numToMove * 4);
	int *p = m_pMemory + elem;
	if (p)
		*p = value;
}
// END FUNCTION

// FUNCTION: 0x1004ba40 size=0x46
#include <stdarg.h>
extern int (__cdecl *g_101e31a8)(char *pDest, int maxLen, const char *pFormat, va_list params);
extern char g_103ecd98[4][1024];
extern int g_103edddc;
char *sub_1004ba40(const char *format, ...)
{
	va_list argptr;
	g_103edddc = (g_103edddc + 1) % 4;
	va_start(argptr, format);
	g_101e31a8(g_103ecd98[g_103edddc], sizeof(g_103ecd98[0]), format, argptr);
	va_end(argptr);
	return g_103ecd98[g_103edddc];
}
// END FUNCTION

// FUNCTION: 0x1004ba90 size=0x1f
extern char g_103ecd98[];

// TARGET: sub_1004ba90
bool sub_1004ba90(char *p)
{
    char *q = g_103ecd98;
    do
    {
        if (q == p)
        {
            return true;
        }
        q += 0x400;
    } while (q < g_103ecd98 + 0x1000);
    return false;
}
// END FUNCTION

// FUNCTION: 0x1004bbb0 size=0x6
int sub_1004bbb0()
{
    return 0x2000;
}
// END FUNCTION

// FUNCTION: 0x1004bbc0 size=0x4
struct CUnknown1004bbc0 { char sub_1004bbc0(); };
char CUnknown1004bbc0::sub_1004bbc0()
{
    return *(char *)((char *)this + 0x2c);
}
// END FUNCTION

// FUNCTION: 0x1004d410 size=0x3
void __stdcall sub_1004d410(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x1004d490 size=0x4
struct CUnknown1004d490 { char sub_1004d490(); };
char CUnknown1004d490::sub_1004d490()
{
    return *(char *)((char *)this + 0x30);
}
// END FUNCTION

// FUNCTION: 0x1004d4a0 size=0x6
int sub_1004d4a0()
{
    return 4;
}
// END FUNCTION

// FUNCTION: 0x1004d580 size=0x4
struct CUnknown1004d580 { char sub_1004d580(); };
char CUnknown1004d580::sub_1004d580()
{
    return *(char *)((char *)this + 0x28);
}
// END FUNCTION

// FUNCTION: 0x1004d590 size=0x6
int sub_1004d590()
{
    return 0x100000;
}
// END FUNCTION

// FUNCTION: 0x1004dc30 size=0x6
namespace lifted {
extern int g_103ede3c;
}
int sub_1004dc30()
{
    return lifted::g_103ede3c;
}
// END FUNCTION

// FUNCTION: 0x1004e210 size=0x4
struct CUnknown1004e210 { char sub_1004e210(); };
char CUnknown1004e210::sub_1004e210()
{
    return *(char *)((char *)this + 0x18);
}
// END FUNCTION

// FUNCTION: 0x1004e330 size=0x6
int sub_1004e330()
{
    return 0x200000;
}
// END FUNCTION

// FUNCTION: 0x1004e830 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1004e830(int num);
};

// TARGET: UtlMem::sub_1004e830
void UtlMem::sub_1004e830(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x1004ea50 size=0x6
int sub_1004ea50()
{
    return 0x20;
}
// END FUNCTION

// FUNCTION: 0x1004f830 size=0x6
namespace lifted {
extern char g_103ede7c;
}
char sub_1004f830()
{
    return lifted::g_103ede7c;
}
// END FUNCTION

// FUNCTION: 0x10050100 size=0x3d
#include "CUtlVector16.h"

extern void (__cdecl *g_101e30fc)(void *);

void CUtlVector16::sub_10050100()
{
	m_size = 0;
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
	m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x100509a0 size=0x4
struct CUnknown100509a0 { char sub_100509a0(); };
char CUnknown100509a0::sub_100509a0()
{
    return *(char *)((char *)this + 0x34);
}
// END FUNCTION

// FUNCTION: 0x100509b0 size=0x6
int sub_100509b0()
{
    return 0x80;
}
// END FUNCTION

// FUNCTION: 0x10050a60 size=0x4
struct CUnknown10050a60 { char sub_10050a60(); };
char CUnknown10050a60::sub_10050a60()
{
    return *(char *)((char *)this + 0x24);
}
// END FUNCTION

// FUNCTION: 0x10050a70 size=0x6
int sub_10050a70()
{
    return 0x200;
}
// END FUNCTION

// FUNCTION: 0x10051b20 size=0x3
void __stdcall sub_10051b20(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10051b30 size=0x3
void __stdcall sub_10051b30(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10051b50 size=0x4
struct CUnknown10051b50 { char sub_10051b50(); };
char CUnknown10051b50::sub_10051b50()
{
    return *(char *)((char *)this + 0x1c);
}
// END FUNCTION

// FUNCTION: 0x10051b60 size=0x6
int sub_10051b60()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10051d00 size=0x6
int sub_10051d00()
{
    return 0x40;
}
// END FUNCTION

// FUNCTION: 0x10051d10 size=0x4
struct CUnknown10051d10 { char sub_10051d10(); };
char CUnknown10051d10::sub_10051d10()
{
    return *(char *)((char *)this + 0x20);
}
// END FUNCTION

// FUNCTION: 0x10052e90 size=0x6
int sub_10052e90()
{
    return 0x100;
}
// END FUNCTION

// FUNCTION: 0x10052ea0 size=0x4
struct CUnknown10052ea0 { char sub_10052ea0(); };
char CUnknown10052ea0::sub_10052ea0()
{
    return *(char *)((char *)this + 0x40);
}
// END FUNCTION

// FUNCTION: 0x10052ef0 size=0x6
namespace lifted {
extern int g_103ee138;
}
int sub_10052ef0()
{
    return lifted::g_103ee138;
}
// END FUNCTION

// FUNCTION: 0x100557c0 size=0x34
#include "UtlMem.h"
extern void *(__cdecl *g_101e3100)(int);

UtlMem *UtlMem::sub_100557c0(int growSize, int allocationCount)
{
	m_pMemory = 0;
	m_allocationCount = allocationCount;
	m_growSize = growSize;
	if (allocationCount) {
		m_pMemory = (int *)g_101e3100(allocationCount * 4);
	}
	return this;
}
// END FUNCTION

// FUNCTION: 0x10055800 size=0x8c
#include "CUtlVector4.h"
extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUtlVector4::sub_10055800(int num)
{
    if (m_size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 8;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (int *)g_101e3104(m_pMemory, m_allocationCount << 2);
        else
            m_pMemory = (int *)g_101e3100(m_allocationCount << 2);
    }
    m_size += num;
    m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x10055890 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_10055890(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
}
// END FUNCTION

// FUNCTION: 0x100558d0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100558d0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10055900 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_10055900
	void sub_10055900(int num);
};

void CMem8b_t::sub_10055900(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x10055f30 size=0x6
int sub_10055f30()
{
    return 0x800;
}
// END FUNCTION

// FUNCTION: 0x10055f40 size=0x4
struct CUnknown10055f40 { char sub_10055f40(); };
char CUnknown10055f40::sub_10055f40()
{
    return *(char *)((char *)this + 0xc);
}
// END FUNCTION

// FUNCTION: 0x100561f0 size=0x6
namespace lifted {
extern int g_103eea74;
}
int sub_100561f0()
{
    return lifted::g_103eea74;
}
// END FUNCTION

// FUNCTION: 0x10057470 size=0x72
struct Elem { char data[0x88]; };
struct Mem {
    Elem *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
};
extern void *(*g_101e3104)(void *, int);
extern void *(*g_101e3100)(int);

void __fastcall sub_10057470(Mem *self, int, int num)
{
    if (self->m_nGrowSize == -1)
        return;
    int nAllocationRequested = self->m_nAllocationCount + num;
    if (self->m_nAllocationCount < nAllocationRequested) {
        int count = self->m_nAllocationCount;
        do {
            if (count != 0) {
                if (self->m_nGrowSize != 0)
                    count += self->m_nGrowSize;
                else
                    count += count;
            } else
                count = 1;
        } while (count < nAllocationRequested);
        self->m_nAllocationCount = count;
    }
    if (self->m_pMemory)
        self->m_pMemory = (Elem *)g_101e3104(self->m_pMemory, self->m_nAllocationCount * sizeof(Elem));
    else
        self->m_pMemory = (Elem *)g_101e3100(self->m_nAllocationCount * sizeof(Elem));
}
// END FUNCTION

// FUNCTION: 0x10057500 size=0x3
void __stdcall sub_10057500(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10057510 size=0x6
int sub_10057510()
{
    return 0x20000;
}
// END FUNCTION

// FUNCTION: 0x10057520 size=0x3
char sub_10057520()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10057d40 size=0x3
void __stdcall sub_10057d40(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x10057e10 size=0x3
void __stdcall sub_10057e10(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x10057f40 size=0x3
void __stdcall sub_10057f40(int a0, int a1, int a2, int a3, int a4)
{
}
// END FUNCTION

// FUNCTION: 0x10058080 size=0x6
namespace lifted {
extern int g_103eec98;
}
int sub_10058080()
{
    return lifted::g_103eec98;
}
// END FUNCTION

// FUNCTION: 0x1005d870 size=0x6
namespace lifted {
extern char g_103eeca0;
}
int sub_1005d870()
{
    return (int)&lifted::g_103eeca0;
}
// END FUNCTION

// FUNCTION: 0x1005e000 size=0x6
int sub_1005e000()
{
    return 0x10000;
}
// END FUNCTION

// FUNCTION: 0x1005e010 size=0x4
struct CUnknown1005e010 { char sub_1005e010(); };
char CUnknown1005e010::sub_1005e010()
{
    return *(char *)((char *)this + 0x1c);
}
// END FUNCTION

// FUNCTION: 0x1005ed00 size=0x6
int sub_1005ed00()
{
    return 0x400;
}
// END FUNCTION

// FUNCTION: 0x1005ed10 size=0x4
struct CUnknown1005ed10 { char sub_1005ed10(); };
char CUnknown1005ed10::sub_1005ed10()
{
    return *(char *)((char *)this + 0x3c);
}
// END FUNCTION

// FUNCTION: 0x1005edb0 size=0x6
int sub_1005edb0()
{
    return 2;
}
// END FUNCTION

// FUNCTION: 0x1005f160 size=0x4
struct CUnknown1005f160 { int sub_1005f160(); };
int CUnknown1005f160::sub_1005f160()
{
    return *(int *)((char *)this + 4);
}
// END FUNCTION

// FUNCTION: 0x1005f280 size=0x6
int sub_1005f280()
{
    return 0x10;
}
// END FUNCTION

// FUNCTION: 0x1005f290 size=0x4
struct CUnknown1005f290 { char sub_1005f290(); };
char CUnknown1005f290::sub_1005f290()
{
    return *(char *)((char *)this + 0x10);
}
// END FUNCTION

// FUNCTION: 0x1005f6c0 size=0x6
int sub_1005f6c0()
{
    return 0x4000;
}
// END FUNCTION

// FUNCTION: 0x1005f6d0 size=0x4
struct CUnknown1005f6d0 { char sub_1005f6d0(); };
char CUnknown1005f6d0::sub_1005f6d0()
{
    return *(char *)((char *)this + 0x24);
}
// END FUNCTION

// FUNCTION: 0x1005fb00 size=0x6
int sub_1005fb00()
{
    return 0x1000;
}
// END FUNCTION

// FUNCTION: 0x1005fb10 size=0x4
struct CUnknown1005fb10 { char sub_1005fb10(); };
char CUnknown1005fb10::sub_1005fb10()
{
    return *(char *)((char *)this + 0xc);
}
// END FUNCTION

// FUNCTION: 0x100622a0 size=0x6
int sub_100622a0()
{
    return 0x40000;
}
// END FUNCTION

// FUNCTION: 0x100622b0 size=0x6
namespace lifted {
extern char g_103eee48;
}
char sub_100622b0()
{
    return lifted::g_103eee48;
}
// END FUNCTION

// FUNCTION: 0x100624d0 size=0x4
struct CUnknown100624d0 { char sub_100624d0(); };
char CUnknown100624d0::sub_100624d0()
{
    return *(char *)((char *)this + 0x14);
}
// END FUNCTION

// FUNCTION: 0x10063960 size=0x6
int sub_10063960()
{
    return 0x8000;
}
// END FUNCTION

// FUNCTION: 0x10063970 size=0x6
namespace lifted {
extern char g_103eef44;
}
char sub_10063970()
{
    return lifted::g_103eef44;
}
// END FUNCTION

// FUNCTION: 0x10064c60 size=0x1
void sub_10064c60()
{
}
// END FUNCTION

// FUNCTION: 0x10065660 size=0x6
namespace lifted {
extern char g_103ef088;
}
int sub_10065660()
{
    return (int)&lifted::g_103ef088;
}
// END FUNCTION

// FUNCTION: 0x10067a50 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10067a50(int num);
};

// TARGET: UtlMem::sub_10067a50
void UtlMem::sub_10067a50(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x10067d00 size=0x46
#include "ConVar.h"
extern ConVar *g_10477114;
extern ConVar g_10477110;
void sub_10067db0();
// TARGET: sub_10067d00
void sub_10067d00()
{
	int n = g_10477114->vfunc1() ? 0 : g_10477114->m_nValue;
	g_10477110.sub_100dfa90(1);
	sub_10067db0();
	bool b = n != 0;
	g_10477110.sub_100dfa90(b);
}
// END FUNCTION

// FUNCTION: 0x10067f00 size=0x6
namespace lifted {
extern int g_10477104;
}
int sub_10067f00()
{
    return lifted::g_10477104;
}
// END FUNCTION

// FUNCTION: 0x10067f10 size=0x43
struct S8 { int a; unsigned short b; char c; char d; };
extern S8 *g_104770f8;
extern int g_10477104;
struct CUnknown10249fc0 { int sub_101390c0(unsigned short x); };
extern CUnknown10249fc0 g_103ef0c8;
bool sub_10067f10(int idx, int *out1, int *out2)
{
    if (idx >= 0 && idx < g_10477104) {
        S8 *p = &g_104770f8[idx];
        if (!p->c) {
            *out1 = p->a;
            *out2 = g_103ef0c8.sub_101390c0(p->b);
            return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10067f70 size=0x48
#include "utlrbtree.h"
#include "utlvector.h"
struct CTreeHolder1024a120;
void __fastcall sub_101391d0(CTreeHolder1024a120 *p);
extern CTreeHolder1024a120 g_103ef0c8;
extern CUtlVector<int> g_104770f8;
void sub_10067f70()
{
    sub_101391d0(&g_103ef0c8);
    g_104770f8.Purge();
}
// END FUNCTION

// FUNCTION: 0x10068120 size=0x3f
struct CActivityTable
{
	int sub_10138cb0(const char *pszName);	// the index of the name, -1 when there is none (stub 0x1000cc2a)
};

struct CActivityEntry
{
	int m_n00;
	int m_n04;
};

extern CActivityTable g_103ef0c8;
extern CActivityEntry *g_104770f8;
extern char g_10288bf0[];
typedef void (*FnDevWarning)(int level, const char *pszFormat, ...);
extern FnDevWarning g_101e3120;

// TARGET: sub_10068120
CActivityEntry *sub_10068120(const char *pszName)
{
	int iIndex = g_103ef0c8.sub_10138cb0(pszName);
	if (iIndex < 0) {
		return 0;
	}
	if (iIndex >= 0x118d) {
		g_101e3120(1, g_10288bf0, pszName);
		return 0;
	}
	return &g_104770f8[iIndex];
}
// END FUNCTION

// FUNCTION: 0x10068160 size=0x2a
struct CUnknown10412470Ent
{
    int key;
    int value;
};

extern int g_10477104;
extern CUnknown10412470Ent *g_104770f8;

// TARGET: sub_10068160
CUnknown10412470Ent *sub_10068160(int key)
{
    int i;
    for (i = 0; i < g_10477104; i++) {
        if (g_104770f8[i].key == key)
            return &g_104770f8[i];
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100681e0 size=0x18
void *sub_10068120(int h);

int sub_100681e0(int h)
{
	int *p = (int *)sub_10068120(h);
	if (p)
		return *p;
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10068200 size=0x24
extern int g_103ef0c8;
unsigned short *sub_10068160(int a);

struct CUnknown10249fc0Callee {
    int sub_101390c0(unsigned short handle);
};

// TARGET: sub_10068200
int sub_10068200(int a)
{
    unsigned short *p = sub_10068160(a);
    if (p != 0) {
        return ((CUnknown10249fc0Callee *)&g_103ef0c8)->sub_101390c0(p[2]);
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10068300 size=0x2f
// TARGET: sub_10068300
extern int g_10477160;
extern int *g_10477154;

bool sub_10068300(int value)
{
    int idx = 0;
    if (g_10477160 > 0)
    {
        do
        {
            if (g_10477154[idx] == value)
            {
                goto found;
            }
            idx++;
        } while (idx < g_10477160);
    }
    idx = -1;
found:
    return idx >= 0;
}
// END FUNCTION

// FUNCTION: 0x10078da0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_10078da0
	void sub_10078da0(int num);
};

void CMem8b_t::sub_10078da0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x10078f20 size=0x19
struct CUnk10427480
{
	int m_nCount;

	int *sub_10078f20(int i);
};

// TARGET: sub_10078f20
int *CUnk10427480::sub_10078f20(int i)
{
	if (i >= m_nCount) {
		return 0;
	}
	return (int *)this + i * 9 + 1;
}
// END FUNCTION

// FUNCTION: 0x10078f90 size=0x53
struct SubObj { virtual void v0(); virtual bool v1(); char pad[0x24]; float f28; };
struct Inner { int pad0; SubObj *pObj; };
struct Entry { int pad[4]; int m10; int pad14[2]; Inner *m1c; int pad20; };
struct CTable {
    int count;
    int pad4[8];
    Entry e[1];
    int sub_10078f90(int i);
};
extern float g_101e34f0;
// TARGET: CTable::sub_10078f90
int CTable::sub_10078f90(int i)
{
    if (i >= 1 && i < count) {
        Entry &en = e[i - 1];
        if (en.m10 != -1) return en.m10;
        Inner *p = en.m1c;
        if (p) {
            if (p->pObj->v1()) return (int)g_101e34f0;
            return (int)p->pObj->f28;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10078ff0 size=0x58
struct CTblObjInner { virtual bool vfunc0(); virtual bool vfunc1(); char m_pad[0x24]; float m_f28; };
struct CTblObj { int m_n0; CTblObjInner *m_p4; };
struct CTblEntry { int m_pad0[5]; int m_n14; int m_n18; int m_pad1c; CTblObj *m_p20; };
struct CTbl { int m_nCount; CTblEntry m_entries[1]; int sub_10078ff0(int i); };
extern float g_101e34f0;
int CTbl::sub_10078ff0(int i)
{
	if (i >= 1 && i < m_nCount) {
		CTblEntry *e = (CTblEntry *)((char *)this + i * 36);
		if (e->m_n14 == -1) {
			CTblObj *p = e->m_p20;
			if (p) {
				if (p->m_p4->vfunc1())
					return (int)g_101e34f0;
				return (int)p->m_p4->m_f28;
			}
		} else
			return e->m_n18;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10079050 size=0x55
#include "CGameRulesSlotTable.h"

extern float g_101e34f0;

int CGameRulesSlotTable::sub_10079050(int index)
{
	if (index >= 1 && index < m_nCount)
	{
		int *p = (int *)this;
		if (p[index * 9 + 6] != -1)
			return p[index * 9 + 6];
		CGameRulesSlotHolder *pHolder = (CGameRulesSlotHolder *)p[index * 9 + 9];
		if (pHolder)
		{
			if (pHolder->m_pInner->vfunc1())
				return (int)g_101e34f0;
			return (int)pHolder->m_pInner->m_fValue28;
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100790b0 size=0x1c
struct CUnknown104276a0 {
	int m_nCount;	// 0x00
	int sub_100790b0(int i);
};

// TARGET: CUnknown104276a0::sub_100790b0
int CUnknown104276a0::sub_100790b0(int i)
{
	if (i >= 1 && i < m_nCount)
		return *(int *)((char *)this + i * 36 + 8);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100790d0 size=0x1c
struct CUnknown104276d0 {
	int m_nCount;	// 0x00
	int sub_100790d0(int i);
};

// TARGET: CUnknown104276d0::sub_100790d0
int CUnknown104276d0::sub_100790d0(int i)
{
	if (i >= 1 && i < m_nCount)
		return *(int *)((char *)this + i * 36 + 12);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100790f0 size=0x69
#include "CUnknown10427700.h"
#include <string.h>

extern char *(*g_101e3188)(char *, const char *, int);

bool CUnknown10427700::sub_100790f0(const char *name, int a, int b)
{
    if (m_nEntries == 0x20)
        return false;
    unsigned int len = strlen(name);
    m_entries[m_nEntries].m_pName = (char *)operator new(len + 1);
    g_101e3188(m_entries[m_nEntries].m_pName, name, len + 1);
    m_entries[m_nEntries].m_a = a;
    m_entries[m_nEntries].m_b = b;
    return true;
}
// END FUNCTION

// FUNCTION: 0x10079260 size=0x4d
#include "CUnknown10427700.h"
void CUnknown10427700::sub_10079260(const char *name, int a, int b, int plrDmg, int npcDmg, int maxCarry)
{
    if (sub_100790f0(name, a, b)) {
        m_entries[m_nEntries].m_plrDmg = plrDmg;
        m_entries[m_nEntries].m_npcDmg = npcDmg;
        m_entries[m_nEntries].m_maxCarry = maxCarry;
        m_nEntries++;
    }
}
// END FUNCTION

// FUNCTION: 0x100792d0 size=0x1e
struct CUnk10427970Entry {
	void *m_p0;
	char m_pad0004[0x24 - 4];
};

struct CUnk10427970 {
	char m_pad0000[0x28];
	CUnk10427970Entry m_arr[31];
	void sub_100792d0();
};

// TARGET: CUnk10427970::sub_100792d0
void CUnk10427970::sub_100792d0()
{
	for (int i = 0; i < 31; i++)
	{
		operator delete(m_arr[i].m_p0);
	}
}
// END FUNCTION

// FUNCTION: 0x10079480 size=0x63
struct SEntry { char pad[0x1c]; float a[3]; float b[3]; };
SEntry *sub_1008d9d0(int, int);
// TARGET: sub_10079480
int sub_10079480(int a, int b, float *pA, float *pB)
{
	SEntry *p = sub_1008d9d0(a, b);
	if (p == 0) {
		pA[0] = 0; pA[1] = 0; pA[2] = 0;
		pB[0] = 0; pB[1] = 0; pB[2] = 0;
		return 0;
	}
	pA[0] = p->a[0]; pA[1] = p->a[1]; pA[2] = p->a[2];
	pB[0] = p->b[0]; pB[1] = p->b[1]; pB[2] = p->b[2];
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100797c0 size=0x1c
void sub_10079520(void *p);

// TARGET: sub_100797c0
void __cdecl sub_100797c0(char *p)
{
	if (p && *(int *)(p + 0x118) == 0)
		sub_10079520(p);
}
// END FUNCTION

// FUNCTION: 0x100797e0 size=0x16d
#include "StudioHdr.h"

void sub_100797c0(StudioHdr *pHdr);
int sub_100797e0(StudioHdr *pHdr, int activity, int *pSeqOut, int *pWeightOut, int base, char bExclude100, char bExclude200, int maxWeight);

int sub_100797e0(StudioHdr *pHdr, int activity, int *pSeqOut, int *pWeightOut, int base, char bExclude100, char bExclude200, int maxWeight)
{
	if (activity <= 0)
		return 0;
	if (!pHdr)
		return 0;
	int nFound = 0;
	unsigned int flags = 0x80;
	if (pHdr->m_nLocalSeq) {
		sub_100797c0(pHdr);
		StudioSeqDesc *pDesc = pHdr->LocalSeq(0);
		for (int i = 0; i < pHdr->m_nLocalSeq; i++, pDesc++) {
			if (pDesc->m_nActivity == activity
				&& (!bExclude100 || !(pDesc->m_flags & 0x100))
				&& (!bExclude200 || !(pDesc->m_flags & 0x200))
				&& (maxWeight < 0 || pDesc->m_nMaxWeight < 0 || maxWeight >= pDesc->m_nMaxWeight)) {
				pSeqOut[nFound] = base + i;
				pWeightOut[nFound] = pDesc->m_nActivityWeight;
				flags = pDesc->m_flags;
				nFound++;
			}
		}
	}
		if (0) nFound += pHdr->m_nIncludeIndex + 0;
	if (flags & 0x80) {
		for (int i = 0; i < pHdr->m_nIncludeModels; i++) {
			StudioIncludeModel *pInc = pHdr->IncludeModel(i);
			if (pInc->m_pVirtual)
				nFound += sub_100797e0(pInc->m_pVirtual->vfunc1(pHdr, i), activity, pSeqOut + nFound, pWeightOut + nFound, pInc->m_nBase + base, bExclude100, bExclude200, maxWeight);
		}
	}
	return nFound;
}
// END FUNCTION

// FUNCTION: 0x100799d0 size=0x6d
extern int g_102aaee0;
int sub_100799d0(int n, int *items, int *w)
{
    int sum, i, r;
    if (n < 1)
        return -1;
    if (n == 1)
        return items[0];
    sum = 0;
    for (i = 0; i < n; i++)
        sum += w[i];
    if (sum < 1) {
        i = g_102aaee0;
        if (i >= 0 && i < n)
            return items[i];
        return items[0];
    }
    r = g_102aaee0;
    for (i = 0; i < n; i++) {
        if (r < w[i])
            return items[i];
        r -= w[i];
    }
    return items[0];
}
// END FUNCTION

// FUNCTION: 0x10079a40 size=0x47
int sub_10079a40(int n, int *values, int *weights)
{
	if (n < 1)
		return -1;
	if (n == 1)
		return *values;
	int best = 0;
	int bestVal = 0x80000000;
	for (int i = 0; i < n; i++) {
		if (weights[i] > bestVal) {
			bestVal = weights[i];
			best = i;
		}
	}
	return values[best];
}
// END FUNCTION

// FUNCTION: 0x10079a90 size=0x6e
int sub_100797e0(int, int, char *, char *, int, int, int, int);
int sub_10079950(int, char *, char *);

int sub_10079a90(int a, int b, int c, int d, int e)
{
	char x[0x2000];
	char y[0x2000];
	if (a == 0)
		return 0;
	int r = sub_100797e0(a, b, x, y, 0, c, d, e);
	return sub_10079950(r, x, y);
}
// END FUNCTION

// FUNCTION: 0x10079b00 size=0x6e
int sub_100797e0(int, int, char *, char *, int, int, int, int);
int sub_100799d0(int, char *, char *);

int sub_10079b00(int a, int b, int c, int d, int e)
{
	char x[0x2000];
	char y[0x2000];
	if (a == 0)
		return 0;
	int r = sub_100797e0(a, b, x, y, 0, c, d, e);
	return sub_100799d0(r, x, y);
}
// END FUNCTION

// FUNCTION: 0x10079b70 size=0x6e
int sub_100797e0(int, int, char *, char *, int, int, int, int);
int sub_10079a40(int, char *, char *);

int sub_10079b70(int a, int b, int c, int d, int e)
{
	char x[0x2000];
	char y[0x2000];
	if (a == 0)
		return 0;
	int r = sub_100797e0(a, b, x, y, 0, c, d, e);
	return sub_10079a40(r, x, y);
}
// END FUNCTION

// FUNCTION: 0x10079cf0 size=0x40
int sub_10079d30(int a, int b);
int sub_10079c20(int a, int b);
int sub_10079b70(int a, int b, int c, int d, int e);

// TARGET: sub_10079cf0
int sub_10079cf0(int a, int b)
{
    int iVar1 = sub_10079d30(a, b);
    if (iVar1 < 0) {
        iVar1 = sub_10079c20(a, b);
        if (iVar1 != -1) {
            return sub_10079b70(a, iVar1, 0, 0, -1);
        }
        iVar1 = -1;
    }
    return iVar1;
}
// END FUNCTION

// FUNCTION: 0x10079e00 size=0x87
#include "StudioHdr.h"

extern void (*g_101e311c)(const char *fmt, ...);
void *__cdecl sub_1008d9d0(StudioHdr *pstudiohdr, int iSequence);
void __cdecl sub_1008c770(StudioHdr *pstudiohdr, int iSequence, float flCycle, float flFraction, float *poseParameter, float *pVec, float *pOut);

void sub_10079e00(StudioHdr *pstudiohdr, int iSequence, float *pPose, float *pVec)
{
	float vecOut[3];
	if (!pstudiohdr) {
		g_101e311c("Bad pstudiohdr in GetSequenceLinearMotion()!\n");
		return;
	}
	if (!sub_1008d9d0(pstudiohdr, iSequence)) {
		if (sub_1008d9d0(pstudiohdr, 0)) {
			g_101e311c("Bad sequence (%i out of %i max) in GetSequenceLinearMotion() for model '%s'!\n", iSequence, pstudiohdr->m_nLocalSeq, (char *)pstudiohdr + 0xc);
			return;
		}
	} else {
		sub_1008c770(pstudiohdr, iSequence, 0, 1.0f, pPose, pVec, vecOut);
	}
}
// END FUNCTION

// FUNCTION: 0x10079fe0 size=0x1b
// TARGET: sub_10079fe0
int sub_10079fe0(int v)
{
    if (v == 0x3ec || v == 0x3f0) {
        return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007a030 size=0x1d
// TARGET: sub_1007a030
struct CUnk10428970
{
    char pad[8];
    int m_8;
};
CUnk10428970 *__cdecl sub_1008d9d0(int a, int b);
int __cdecl sub_1007a030(int a, int b)
{
    CUnk10428970 *p = sub_1008d9d0(a, b);
    if (p)
    {
        return p->m_8;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007a140 size=0x13d
struct CStudioHdr;
char *sub_1008da80(CStudioHdr *pStudioHdr, int iSequence, CStudioHdr **ppOwner);
extern void (__cdecl *g_101e3108)(const char *fmt, ...);	// Msg

// TARGET: sub_1007a140
int sub_1007a140(CStudioHdr *pStudioHdr, int iFrom, int iTo, int *pDirection)
{
	CStudioHdr *pFromHdr;
	CStudioHdr *pToHdr;
	char *pFrom = sub_1008da80(pStudioHdr, iFrom, &pFromHdr);
	char *pTo = sub_1008da80(pStudioHdr, iTo, &pToHdr);
	unsigned int uEntryNode;
	unsigned int uExitNode;
	if (!pFrom || !(uEntryNode = *(unsigned int *)(pFrom + 0x270)) || !pTo || !(uExitNode = *(unsigned int *)(pTo + 0x270)) || pFromHdr != pToHdr)
	{
		*pDirection = 1;
		return iTo;
	}
	unsigned int uNode = *pDirection > 0 ? *(unsigned int *)(pFrom + 0x274) : uEntryNode;
	if (uNode == uExitNode)
	{
		*pDirection = 1;
		return iTo;
	}
	char *pBase = (char *)pFromHdr;
	unsigned int uStep = *(unsigned char *)(pBase + *(int *)(pBase + 0x150) * (uNode - 1) + *(int *)(pBase + 0x154) + uExitNode - 1);
	if (uStep == 0)
		return iTo;
	int i = 0;
	char *pSeq = pBase + *(int *)(pBase + 0x114);
	int nSeqs = *(int *)(pBase + 0x110);
	if (0 < nSeqs)
	{
		do
		{
			if (*(unsigned int *)(pSeq + 0x270) == uNode && *(unsigned int *)(pSeq + 0x274) == uStep)
			{
				*pDirection = 1;
				return i;
			}
			if (*(unsigned int *)(pSeq + 0x278) != 0 && *(unsigned int *)(pSeq + 0x274) == uNode && *(unsigned int *)(pSeq + 0x270) == uStep)
			{
				*pDirection = -1;
				return i;
			}
			i++;
			pSeq += 0x2fc;
		} while (i < nSeqs);
	}
	g_101e3108("error in transition graph");
	*pDirection = 1;
	return iTo;
}
// END FUNCTION

// FUNCTION: 0x1007a280 size=0x53
struct SeqHdr { char pad[0x140]; int m140; int m144; };
// TARGET: sub_1007a280
void __cdecl sub_1007a280(SeqHdr *p, int *pv, int a, int b)
{
    if (p && a <= p->m140) {
        int *e = (int *)((char *)p + p->m144 + a * 16);
        int n = e[1];
        if (b < n) {
            int d = e[2];
            *pv = (b - (*pv / d) % n) * d + *pv;
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1007a2e0 size=0x47
struct SeqHdr { char pad[0x140]; int count; int tableOffset; };
struct SeqRec { int a; int n; int divisor; int d; };
int sub_1007a2e0(SeqHdr *hdr, int value, int index)
{
	if (!hdr)
		return 0;
	if (index > hdr->count)
		return 0;
	SeqRec *rec = (SeqRec *)((char *)hdr + hdr->tableOffset + index * 16);
	int n = rec->n;
	if (n <= 1)
		return 0;
	return (value / rec->divisor) % n;
}
// END FUNCTION

// FUNCTION: 0x1007a330 size=0x35
extern char g_102de300[];

struct CStrTable10428d50 {
	char m_pad[0x140];
	int m_nCount;
	int m_nTableOfs;
};

// TARGET: sub_1007a330
char *sub_1007a330(CStrTable10428d50 *pTable, int index)
{
	char *base = (char *)pTable;
	if (!base)
		return g_102de300;
	if (index > pTable->m_nCount)
		return g_102de300;
	char *entry = base + pTable->m_nTableOfs + index * 16;
	return entry + *(int *)entry;
}
// END FUNCTION

// FUNCTION: 0x1007a3d0 size=0x2c
struct CTable10428e20 {
    char pad[0x140];
    int m_i140;
    int m_i144;
};

// TARGET: sub_1007a3d0
int sub_1007a3d0(CTable10428e20 *p, int idx)
{
    if (p == 0) {
        return 0;
    }
    if (idx > p->m_i140) {
        return 0;
    }
    return *(int *)((char *)p + 4 + p->m_i144 + idx * 16);
}
// END FUNCTION

// FUNCTION: 0x1007a440 size=0x2e
// TARGET: sub_1007a440
void sub_10108430(void *pDest, const float *pData);

void sub_1007a440(char *pObj, int index, const float *pData)
{
    if (index >= 0)
    {
        sub_10108430(pObj + *(int *)(pObj + 0x14c) + index * 0x3c + 0xc, pData);
    }
}
// END FUNCTION

// FUNCTION: 0x1007a4d0 size=0x2d
extern char g_102de300[];

// TARGET: sub_1007a4d0
char *sub_1007a4d0(char *pObj, int nIndex)
{
	if (pObj == 0) {
		return g_102de300;
	}
	int *p = (int *)(pObj + *(int *)(pObj + 0x104) + nIndex * 12);
	if (p == 0) {
		return g_102de300;
	}
	return (char *)(*p + (int)p);
}
// END FUNCTION

// FUNCTION: 0x1007aca0 size=0x2b
#include "CUnknown100290c0.h"

// TARGET: CUnknown100290c0::sub_1007aca0
unsigned int CUnknown100290c0::sub_1007aca0(unsigned int *pHandle)
{
    unsigned int h = *pHandle;
    if (h != 0xffffffff) {
        CUnknown100290c0Slot *pSlot = &m_Slots[h & 0x1fff];
        if (pSlot->m_Serial == (int)(h >> 13)) {
            return pSlot->m_Value;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007b250 size=0x351
struct CWeaponStruct44 { int d[17]; };
struct CWeaponStruct88 { int d[34]; };
struct CWeaponStructBig { int d[0x39e9]; };
struct CWeaponCopy
{
	int m0;
	char m4[0x80];
	char m84[0x80];
	int m104, m108, m10c, m110, m114;
	char m118[0x80];
	CWeaponStruct44 m198;
	char m1dc[0x80];
	int m25c, m260, m264, m268, m26c, m270;
	CWeaponStruct88 m274[2];
	int m384, m388, m38c, m390, m394, m398, m39c, m3a0, m3a4, m3a8, m3ac, m3b0, m3b4, m3b8, m3bc, m3c0, m3c4, m3c8, m3cc, m3d0, m3d4, m3d8, m3dc, m3e0, m3e4, m3e8, m3ec, m3f0, m3f4, m3f8, m3fc, m400, m404, m408, m40c;
	char m410[0x80];
	CWeaponStructBig m490;
	int mec34[10];
	int mec5c[10];

	CWeaponCopy *sub_1007b250(const CWeaponCopy *p);
};

// TARGET: CWeaponCopy::sub_1007b250
CWeaponCopy *CWeaponCopy::sub_1007b250(const CWeaponCopy *p)
{
	unsigned i0, i1, i3, i4, i8;
	int i6, i10, i11, i9;
	m0 = p->m0;
	for (i0 = 0; i0 < 0x80; i0++) m4[i0] = p->m4[i0];
	for (i1 = 0; i1 < 0x80; i1++) m84[i1] = p->m84[i1];
	m104 = p->m104; m108 = p->m108; m10c = p->m10c; m110 = p->m110; m114 = p->m114;
	for (i3 = 0; i3 < 0x80; i3++) m118[i3] = p->m118[i3];
	m198 = p->m198;
	for (i4 = 0; i4 < 0x80; i4++) m1dc[i4] = p->m1dc[i4];
	m25c = p->m25c; m260 = p->m260; m264 = p->m264; m268 = p->m268; m26c = p->m26c; m270 = p->m270;
	for (i6 = 0; i6 < 2; i6++) m274[i6] = p->m274[i6];
	m384 = p->m384; m388 = p->m388; m38c = p->m38c; m390 = p->m390; m394 = p->m394; m398 = p->m398; m39c = p->m39c; m3a0 = p->m3a0; m3a4 = p->m3a4; m3a8 = p->m3a8; m3ac = p->m3ac; m3b0 = p->m3b0; m3b4 = p->m3b4; m3b8 = p->m3b8; m3bc = p->m3bc; m3c0 = p->m3c0; m3c4 = p->m3c4; m3c8 = p->m3c8; m3cc = p->m3cc; m3d0 = p->m3d0; m3d4 = p->m3d4; m3d8 = p->m3d8; m3dc = p->m3dc; m3e0 = p->m3e0; m3e4 = p->m3e4; m3e8 = p->m3e8; m3ec = p->m3ec; m3f0 = p->m3f0; m3f4 = p->m3f4; m3f8 = p->m3f8; m3fc = p->m3fc; m400 = p->m400; m404 = p->m404; m408 = p->m408; m40c = p->m40c;
	for (i8 = 0; i8 < 0x80; i8++) m410[i8] = p->m410[i8];
	m490 = p->m490;
	for (i10 = 0; i10 < 10; i10++) mec34[i10] = p->mec34[i10];
	for (i11 = 0; i11 < 10; i11++) mec5c[i11] = p->mec5c[i11];
	return this;
}
// END FUNCTION

// FUNCTION: 0x1007bf10 size=0x3
void __stdcall sub_1007bf10(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1007bf40 size=0x1
void sub_1007bf40()
{
}
// END FUNCTION

// FUNCTION: 0x1007c1c0 size=0x5
char __stdcall sub_1007c1c0(int a0, int a1, int a2, int a3)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1007c8d0 size=0x5
char __stdcall sub_1007c8d0(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1007c8e0 size=0x3
void __stdcall sub_1007c8e0(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1007cdc0 size=0x1c
namespace block_10256200 {
unsigned char __fastcall sub_1007cd70(unsigned char *self)
{
	unsigned char v = self[0x778];
	v >>= 1;
	v &= 1;
	return v;
}
}
using namespace block_10256200;

char *__fastcall sub_1007b160(void *p);

// TARGET: sub_1007cdc0
unsigned char __fastcall sub_1007cdc0(void *p)
{
	if (sub_1007cd70((unsigned char *)p))
		return 0;
	return *(int *)(sub_1007b160(p) + 0x24d0) == 4;
}
// END FUNCTION

// FUNCTION: 0x1007ce10 size=0x6
namespace lifted {
extern char g_1047733c;
}
int sub_1007ce10()
{
    return (int)&lifted::g_1047733c;
}
// END FUNCTION

// FUNCTION: 0x1007d7f0 size=0x1
void sub_1007d7f0()
{
}
// END FUNCTION

// FUNCTION: 0x1007d930 size=0x1a
char *sub_1007b160();

// TARGET: sub_1007d930
char sub_1007d930()
{
	int v = *(int *)(sub_1007b160() + 0x24d0);
	if (v >= 0 && v <= 2) {
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1007dae0 size=0x6
namespace lifted {
extern char g_1027ace8;
}
int sub_1007dae0()
{
    return (int)&lifted::g_1027ace8;
}
// END FUNCTION

// FUNCTION: 0x1007db70 size=0x3
struct CUnknown1007db70 { int sub_1007db70(); };
int CUnknown1007db70::sub_1007db70()
{
    return *(int *)this;
}
// END FUNCTION

// FUNCTION: 0x1007ddc0 size=0x6
namespace lifted {
extern int g_102af670;
}
int sub_1007ddc0()
{
    return lifted::g_102af670;
}
// END FUNCTION

// FUNCTION: 0x1007ddd0 size=0x1c
extern unsigned int g_102af670;

void sub_1007ddd0(void *p)
{
	if (p == 0)
		g_102af670 = 0xffffffff;
	else
		g_102af670 = *(unsigned int *)((char *)p + 0x48);
}
// END FUNCTION

// FUNCTION: 0x1007ddf0 size=0x6
namespace lifted {
extern int g_1049e358;
}
int sub_1007ddf0()
{
    return lifted::g_1049e358;
}
// END FUNCTION

// FUNCTION: 0x1007e230 size=0x6
namespace lifted {
extern char g_104865a0;
}
int sub_1007e230()
{
    return (int)&lifted::g_104865a0;
}
// END FUNCTION

// FUNCTION: 0x1007f300 size=0x6
namespace lifted {
extern char g_104867c8;
}
int sub_1007f300()
{
    return (int)&lifted::g_104867c8;
}
// END FUNCTION

// FUNCTION: 0x1007f6e0 size=0x3
char sub_1007f6e0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007f960 size=0x6
namespace lifted {
extern char g_10486a78;
}
int sub_1007f960()
{
    return (int)&lifted::g_10486a78;
}
// END FUNCTION

// FUNCTION: 0x1007fd00 size=0x6
namespace lifted {
extern char g_10487084;
}
int sub_1007fd00()
{
    return (int)&lifted::g_10487084;
}
// END FUNCTION

// FUNCTION: 0x10080e00 size=0x5
int __stdcall sub_10080e00(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10080e10 size=0x3
void __stdcall sub_10080e10(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x10080ff0 size=0x3
char sub_10080ff0()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10086500 size=0x3
struct CUnknown10086500 { void * sub_10086500(); };
void * CUnknown10086500::sub_10086500()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x100865a0 size=0x1e
struct CUnknown100bc460 { void * sub_100865a0(); };
void * CUnknown100bc460::sub_100865a0()
{
    *(int *)this = 0;
    *(int *)((char *)this + 4) = 0;
    *(int *)((char *)this + 8) = -1;
    *(int *)((char *)this + 0xc) = 0;
    *(char *)((char *)this + 0x10) = 0;
    *(char *)((char *)this + 0x11) = 1;
    *(int *)((char *)this + 0x14) = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x100865c0 size=0x2c
#include "bf_write.h"

// TARGET: bf_write::sub_100865c0
bf_write *bf_write::sub_100865c0(const char *pDebugName, void *pData, int nBytes, int nBits)
{
	m_pDebugName = pDebugName;
	m_bAssertOnOverflow = true;
	sub_10086620(pData, nBytes, 0, nBits);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100865f0 size=0x25
#include "bf_write.h"

// TARGET: sub_100865f0
bf_write *bf_write::sub_100865f0(void *pData, int nBytes, int nBits)
{
    m_bAssertOnOverflow = true;
    sub_10086620(pData, nBytes, 0, nBits);
    return this;
}
// END FUNCTION

// FUNCTION: 0x10086620 size=0x3b
#include "bf_write.h"

// TARGET: bf_write::sub_10086620
void bf_write::sub_10086620(void *pData, int nBytes, int iStartBit, int nBits)
{
	m_pData = (unsigned long *)pData;
	m_nDataBytes = nBytes;
	m_bOverflow = false;
	if (nBits == -1) {
		m_nDataBits = nBytes * 8;
	} else {
		m_nDataBits = nBits;
	}
	m_iCurBit = iStartBit;
}
// END FUNCTION

// FUNCTION: 0x10086680 size=0x4
struct CUnknown10086680 { int sub_10086680(); };
int CUnknown10086680::sub_10086680()
{
    return *(int *)((char *)this + 0x14);
}
// END FUNCTION

// FUNCTION: 0x100866b0 size=0x1d9
#include "bf_write.h"

#define g_BitWriteMasks g_104871b0

struct bf_write03 : public bf_write
{
	void WriteSBitLong(int data, int numbits);

	bool CheckForOverflow(int nBits)
	{
		if (m_iCurBit + nBits > m_nDataBits)
		{
			SetOverflowFlag();
		}

		return m_bOverflow;
	}

	void SetOverflowFlag()
	{
		if (m_bAssertOnOverflow)
		{
		}

		m_bOverflow = true;
	}

	void WriteOneBitNoCheck(int nValue)
	{
		if (nValue)
			((unsigned char *)m_pData)[m_iCurBit >> 3] |= (1 << (m_iCurBit & 7));
		else
			((unsigned char *)m_pData)[m_iCurBit >> 3] &= ~(1 << (m_iCurBit & 7));

		++m_iCurBit;
	}

	void WriteOneBit(int nValue)
	{
		if (!CheckForOverflow(1))
			WriteOneBitNoCheck(nValue);
	}

	void WriteUBitLong(unsigned int curData, int numbits, bool bCheckRange = true)
	{
		// Bounds checking..
		if ((m_iCurBit + numbits) > m_nDataBits)
		{
			m_iCurBit = m_nDataBits;
			SetOverflowFlag();
			return;
		}

		int nBitsLeft = numbits;
		int iCurBit = m_iCurBit;

		// Mask in a dword.
		unsigned int iDWord = iCurBit >> 5;

		unsigned long iCurBitMasked = iCurBit & 31;
		((unsigned long *)m_pData)[iDWord] &= g_BitWriteMasks[iCurBitMasked][nBitsLeft];
		((unsigned long *)m_pData)[iDWord] |= curData << iCurBitMasked;

		// Did it span a dword?
		int nBitsWritten = 32 - iCurBitMasked;
		if (nBitsWritten < nBitsLeft)
		{
			nBitsLeft -= nBitsWritten;
			iCurBit += nBitsWritten;
			curData >>= nBitsWritten;

			unsigned long iCurBitMasked = iCurBit & 31;
			((unsigned long *)m_pData)[iDWord + 1] &= g_BitWriteMasks[iCurBitMasked][nBitsLeft];
			((unsigned long *)m_pData)[iDWord + 1] |= curData << iCurBitMasked;
		}

		m_iCurBit += numbits;
	}

	void sub_100866b0(int data, int numbits);
};

// TARGET: bf_write03::sub_100866b0
void bf_write03::sub_100866b0(int data, int numbits)
{
	// Note: it does this wierdness here so it's bit-compatible with regular integer data in the buffer.
	// (Some old code writes direct integers right into the buffer).
	if (data < 0)
	{
		WriteUBitLong((unsigned int)(0x80000000 + data), numbits - 1, false);
		WriteOneBit(1);
	}
	else
	{
		WriteUBitLong((unsigned int)data, numbits - 1);
		WriteOneBit(0);
	}
}
// END FUNCTION

// FUNCTION: 0x10086890 size=0xd6
#include "bf_write.h"

// TARGET: bf_write::sub_10086890
void bf_write::sub_10086890(unsigned int curData, int numbits, bool bCheckRange)
{
	if (bCheckRange) {
		sub_100866b0(curData, numbits);
		return;
	}

	// Bounds checking..
	if ((m_iCurBit + numbits) > m_nDataBits)
	{
		m_bOverflow = true;
		m_iCurBit = m_nDataBits;
		return;
	}

	int nBitsLeft = numbits;
	int iCurBit = m_iCurBit;

	// Mask in a dword.
	unsigned int iDWord = iCurBit >> 5;

	unsigned long iCurBitMasked = iCurBit & 31;
	((unsigned long*)m_pData)[iDWord] &= g_104871b0[iCurBitMasked][nBitsLeft];
	((unsigned long*)m_pData)[iDWord] |= curData << iCurBitMasked;

	// Did it span a dword?
	int nBitsWritten = 32 - iCurBitMasked;
	if (nBitsWritten < nBitsLeft)
	{
		nBitsLeft -= nBitsWritten;
		iCurBit += nBitsWritten;
		curData >>= nBitsWritten;

		unsigned long iCurBitMasked = iCurBit & 31;
		((unsigned long*)m_pData)[iDWord+1] &= g_104871b0[iCurBitMasked][nBitsLeft];
		((unsigned long*)m_pData)[iDWord+1] |= curData << iCurBitMasked;
	}

	m_iCurBit += numbits;
}
// END FUNCTION

// FUNCTION: 0x10086970 size=0x316
#include "bf_write.h"

bool bf_write::sub_10086970(const void *pInData, int nBits)
{
	unsigned char *pOut = (unsigned char *)pInData;
	int nBitsLeft = nBits;

	while (((unsigned long)pOut & 3) != 0 && nBitsLeft >= 8) {
		WriteUBitLongIndexed(*pOut, 8);
		++pOut;
		nBitsLeft -= 8;
	}

	if (nBitsLeft >= 32) {
		int nDwords = (unsigned int)nBitsLeft >> 5;
		nBitsLeft -= nDwords * 32;
		do {
			WriteUBitLongIndexed(*(unsigned long *)pOut, 32);
			pOut += 4;
		} while (--nDwords);
	}

	if (nBitsLeft >= 8) {
		int nBytes = (unsigned int)nBitsLeft >> 3;
		nBitsLeft -= nBytes * 8;
		do {
			WriteUBitLongIndexed(*pOut, 8);
			++pOut;
		} while (--nBytes);
	}

	if (nBitsLeft)
		WriteUBitLongIndexed(*pOut, nBitsLeft);

	return !m_bOverflow;
}
// END FUNCTION

// FUNCTION: 0x10086c90 size=0x277
#include "bf_read.h"
#include "bf_write.h"

struct bf_writeWBFB : bf_write
{
	// the 2003 SDK's bf_write::WriteUBitLong, as WriteBitsFromBuffer inlines it
	void WriteUBitLong2003(unsigned int curData, int numbits)
	{
		if ((m_iCurBit + numbits) > m_nDataBits) {
			m_iCurBit = m_nDataBits;
			m_bOverflow = true;
			return;
		}

		int nBitsLeft = numbits;
		int iCurBit = m_iCurBit;

		unsigned int iDWord = iCurBit >> 5;
		unsigned long iCurBitMasked = iCurBit & 31;
		m_pData[iDWord] &= g_104871b0[iCurBitMasked][nBitsLeft];
		m_pData[iDWord] |= curData << iCurBitMasked;

		int nBitsWritten = 32 - iCurBitMasked;
		if (nBitsWritten < nBitsLeft) {
			nBitsLeft -= nBitsWritten;
			iCurBit += nBitsWritten;
			curData >>= nBitsWritten;

			iCurBitMasked = iCurBit & 31;
			m_pData[iDWord + 1] &= g_104871b0[iCurBitMasked][nBitsLeft];
			m_pData[iDWord + 1] |= curData << iCurBitMasked;
		}

		m_iCurBit += numbits;
	}
};

bool bf_write::sub_10086c90(bf_read *pIn, int nBits)
{
	while (nBits > 32) {
		((bf_writeWBFB *)this)->WriteUBitLong2003(pIn->ReadUBitLong(32), 32);
		nBits -= 32;
	}
	((bf_writeWBFB *)this)->WriteUBitLong2003(pIn->ReadUBitLong(nBits), nBits);
	return !m_bOverflow && !pIn->m_bOverflow;
}
// END FUNCTION

// FUNCTION: 0x10086f10 size=0xfd
#include "bf_write.h"
void bf_write::sub_10086f10(float fAngle, int numbits)
{
	unsigned int shift = 1 << numbits;
	int t1 = fAngle * shift; unsigned int t0 = (t1) / 360; unsigned int t2 = shift - 1; unsigned int curData = (t0) & (t2);
	int nBits = m_nDataBits;
	int bit; bit = m_iCurBit;
	if (bit + numbits > nBits) {
		m_iCurBit = nBits;
		m_bOverflow = true;
		return;
	}
	int iDWord = bit >> 5;
	int iCur = bit & 31;
	m_pData[iDWord] &= g_104871b0[iCur][numbits];
	m_pData[iDWord] |= curData << iCur;
	int n = 32 - iCur;
	if (n < numbits) {
		int t3 = n + bit; int iCur2 = (t3) & 31;
		*(m_pData + iDWord + 1) &= g_104871b0[iCur2][numbits - n];
		*(m_pData + iDWord + 1) |= (curData >> n) << iCur2;
	}
	m_iCurBit += numbits;
}
// END FUNCTION

// FUNCTION: 0x10087210 size=0xb7
#include "bf_write.h"

struct bf_writeX : bf_write
{
	void SetOverflowFlag() { m_bOverflow = true; }
	void WriteUBitLong(unsigned int curData, int numbits, bool bCheckRange);
};

void bf_write::sub_10087210(unsigned int curData, int numbits, bool bCheckRange)
{
	extern unsigned long g_104871b0[32][33];

	// Bounds checking..
	if((m_iCurBit+numbits) > m_nDataBits)
	{
		m_iCurBit = m_nDataBits;
		((bf_writeX *)this)->SetOverflowFlag();
		return;
	}

	int nBitsLeft = numbits;
	int iCurBit = m_iCurBit;

	// Mask in a dword.
	unsigned int iDWord = iCurBit >> 5;

	unsigned long iCurBitMasked = iCurBit & 31;
	((unsigned long*)m_pData)[iDWord] &= g_104871b0[iCurBitMasked][nBitsLeft];
	((unsigned long*)m_pData)[iDWord] |= curData << iCurBitMasked;

	// Did it span a dword?
	int nBitsWritten = 32 - iCurBitMasked;
	if(nBitsWritten < nBitsLeft)
	{
		nBitsLeft -= nBitsWritten;
		iCurBit += nBitsWritten;
		curData >>= nBitsWritten;

		unsigned long iCurBitMasked = iCurBit & 31;
		((unsigned long*)m_pData)[iDWord+1] &= g_104871b0[iCurBitMasked][nBitsLeft];
		((unsigned long*)m_pData)[iDWord+1] |= curData << iCurBitMasked;
	}

	m_iCurBit += numbits;
}
// END FUNCTION

// FUNCTION: 0x100872d0 size=0xad
#include "bf_write.h"

extern unsigned int g_10487230[];

void bf_write::sub_100872d0(unsigned int curData)
{
	int bit = m_iCurBit;
	if (bit + 32 > m_nDataBits) {
		m_bOverflow = true;
		m_iCurBit = m_nDataBits;
		return;
	}
	int iCur = bit & 31;
	int iDWord = bit >> 5;
	m_pData[iDWord] &= g_10487230[iCur * 33];
	m_pData[iDWord] |= curData << iCur;
	int n = 32 - iCur;
	if (n < 32) {
		int iCur2 = (n + bit) & 31;
		m_pData[iDWord + 1] &= g_10487230[iCur2 * 33 - n];
		m_pData[iDWord + 1] |= (curData >> n) << iCur2;
	}
	m_iCurBit += 32;
}
// END FUNCTION

// FUNCTION: 0x10087380 size=0x1a9
#include "bf_write.h"

void bf_write::sub_10087380(const Vector &fa)
{
	int xflag, yflag, zflag;
	xflag = (fa[0] >= 0.0625) || (fa[0] <= -0.0625);
	yflag = (fa[1] >= 0.0625) || (fa[1] <= -0.0625);
	zflag = (fa[2] >= 0.0625) || (fa[2] <= -0.0625);

	WriteOneBit(xflag);
	WriteOneBit(yflag);
	WriteOneBit(zflag);

	if (xflag)
		sub_10087010(fa[0]);
	if (yflag)
		sub_10087010(fa[1]);
	if (zflag)
		sub_10087010(fa[2]);
}
// END FUNCTION

// FUNCTION: 0x10087650 size=0x19e
#include "bf_write.h"
#include "Vector.h"

void bf_write::sub_10087650(const Vector &fa)
{
	int xflag, yflag;
	xflag = (fa[0] >= 0.0004885197850512946) || (fa[0] <= -0.0004885197850512946);
	yflag = (fa[1] >= 0.0004885197850512946) || (fa[1] <= -0.0004885197850512946);
	WriteOneBit(xflag);
	WriteOneBit(yflag);
	if (xflag)
		sub_10087530(fa[0]);
	if (yflag)
		sub_10087530(fa[1]);
	WriteOneBit(fa[2] <= -0.0004885197850512946);
}
// END FUNCTION

// FUNCTION: 0x100877f0 size=0x2b
#include "bf_write.h"

// TARGET: bf_write::sub_100877f0
void bf_write::sub_100877f0(const Vector *pVec)
{
	Vector local(pVec->x, pVec->y, pVec->z);
	sub_10087380(local);
}
// END FUNCTION

// FUNCTION: 0x10087830 size=0xad
#include "bf_write.h"

extern unsigned int g_104871d0[];

void bf_write::sub_10087830(unsigned int curData)
{
	int bit = m_iCurBit;
	if (bit + 8 > m_nDataBits) {
		m_bOverflow = true;
		m_iCurBit = m_nDataBits;
		return;
	}
	int iCur = bit & 31;
	int iDWord = bit >> 5;
	m_pData[iDWord] &= g_104871d0[iCur * 33];
	m_pData[iDWord] |= curData << iCur;
	int n = 32 - iCur;
	if (n < 8) {
		int iCur2 = (n + bit) & 31;
		m_pData[iDWord + 1] &= g_104871d0[iCur2 * 33 - n];
		m_pData[iDWord + 1] |= (curData >> n) << iCur2;
	}
	m_iCurBit += 8;
}
// END FUNCTION

// FUNCTION: 0x100878f0 size=0xad
#include "bf_write.h"

extern unsigned int g_104871f0[];

void bf_write::sub_100878f0(unsigned int curData)
{
	int bit = m_iCurBit;
	if (bit + 16 > m_nDataBits) {
		m_bOverflow = true;
		m_iCurBit = m_nDataBits;
		return;
	}
	int iCur = bit & 31;
	int iDWord = bit >> 5;
	m_pData[iDWord] &= g_104871f0[iCur * 33];
	m_pData[iDWord] |= curData << iCur;
	int n = 32 - iCur;
	if (n < 16) {
		int iCur2 = (n + bit) & 31;
		m_pData[iDWord + 1] &= g_104871f0[iCur2 * 33 - n];
		m_pData[iDWord + 1] |= (curData >> n) << iCur2;
	}
	m_iCurBit += 16;
}
// END FUNCTION

// FUNCTION: 0x100879e0 size=0x45
struct CStrParser {
	char m_pad[0x10];
	char m_bFailed;
	void sub_10087820(int c);
	bool sub_100879e0(const char *s);
};
bool CStrParser::sub_100879e0(const char *s)
{
	if (s) {
		char c;
		do {
			sub_10087820(*s);
			c = *s;
			s++;
		} while (c != 0);
	} else {
		sub_10087820(0);
	}
	return m_bFailed == 0;
}
// END FUNCTION

// FUNCTION: 0x10087a30 size=0x1e
struct CUnknown100bc460 { void * sub_10087a30(); };
void * CUnknown100bc460::sub_10087a30()
{
    *(int *)this = 0;
    *(int *)((char *)this + 4) = 0;
    *(int *)((char *)this + 8) = -1;
    *(int *)((char *)this + 0xc) = 0;
    *(char *)((char *)this + 0x10) = 0;
    *(char *)((char *)this + 0x11) = 1;
    *(int *)((char *)this + 0x14) = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10087a50 size=0x25
#include "bf_write.h"

// TARGET: sub_10087a50
bf_write *bf_write::sub_10087a50(void *pData, int nBytes, int nBits)
{
    m_bAssertOnOverflow = true;
    sub_10087ab0(pData, nBytes, 0, nBits);
    return this;
}
// END FUNCTION

// FUNCTION: 0x10087a80 size=0x2c
#include "bf_write.h"

// TARGET: bf_write::sub_10087a80
bf_write *bf_write::sub_10087a80(const char *pDebugName, void *pData, int nBytes, int nBits)
{
	m_pDebugName = pDebugName;
	m_bAssertOnOverflow = true;
	sub_10087ab0(pData, nBytes, 0, nBits);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10087ab0 size=0x3b
#include "bf_write.h"

// TARGET: bf_write::sub_10087ab0
void bf_write::sub_10087ab0(void *pData, int nBytes, int iStartBit, int nBits)
{
	m_pData = (unsigned long *)pData;
	m_nDataBytes = nBytes;
	m_bOverflow = false;
	if (nBits == -1) {
		m_nDataBits = nBytes * 8;
	} else {
		m_nDataBits = nBits;
	}
	m_iCurBit = iStartBit;
}
// END FUNCTION

// FUNCTION: 0x10087b10 size=0x4
struct CUnknown10087b10 { int sub_10087b10(); };
int CUnknown10087b10::sub_10087b10()
{
    return *(int *)((char *)this + 0x14);
}
// END FUNCTION

// FUNCTION: 0x10087b30 size=0x7b
#include "bf_read.h"

// bf_read's bit-by-bit peek without the bounds check (2003 bitbuf.h ReadOneBitNoCheck inlined), position restored by
// subtracting numbits.
struct bf_readX : bf_read
{
	int ReadOneBitNoCheck()
	{
		int value = ((const unsigned char *)m_pData)[m_iCurBit >> 3] & (1 << (m_iCurBit & 7));
		++m_iCurBit;
		return !!value;
	}
	unsigned int sub_10087b30(int numbits);
};

unsigned int bf_readX::sub_10087b30(int numbits)
{
	unsigned int r;
	int i;

	r = 0;
	for(i=0; i < numbits; i++)
	{
		r |= ReadOneBitNoCheck() << i;
	}
	m_iCurBit -= numbits;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10087bb0 size=0x233
#include "bf_read.h"

// TARGET: bf_read::sub_10087bb0
bool bf_read::sub_10087bb0(void *pOutData, int nBits)
{
	unsigned char *pOut = (unsigned char *)pOutData;
	int nBitsLeft = nBits;

	while (((unsigned long)pOut & 3) != 0 && nBitsLeft >= 8) {
		*pOut = (unsigned char)ReadUBitLong(8);
		++pOut;
		nBitsLeft -= 8;
	}

	if (nBitsLeft >= 32) {
		unsigned int nDwords = (unsigned int)nBitsLeft >> 5;
		nBitsLeft -= nDwords * 32;
		do {
			*((unsigned long *)pOut) = ReadUBitLong(32);
			pOut += sizeof(unsigned long);
			--nDwords;
		} while (nDwords);
	}

	if (nBitsLeft >= 8) {
		unsigned int nBytes = (unsigned int)nBitsLeft >> 3;
		nBitsLeft -= nBytes * 8;
		do {
			*pOut = (unsigned char)ReadUBitLong(8);
			++pOut;
			--nBytes;
		} while (nBytes);
	}

	if (nBitsLeft)
		*pOut = (unsigned char)ReadUBitLong(nBitsLeft);

	return !m_bOverflow;
}
// END FUNCTION

// FUNCTION: 0x10087df0 size=0xa1
#include "bf_read.h"

float bf_read::sub_10087df0(int numbits)
{
	float shift = (float)(1 << numbits);
	int i = ReadUBitLong(numbits);
	float fReturn = (float)i * (360.0 / shift);
	return fReturn;
}
// END FUNCTION

// FUNCTION: 0x10087ea0 size=0xaf
#include "bf_read.h"

unsigned int bf_read::sub_10087ea0(int numbits)
{
	bf_read savebf;
	savebf.sub_10087a30();
	savebf = *this;

	unsigned int r = 0;
	for (int i = 0; i < numbits; i++) {
		if (ReadOneBit())
			r |= 1u << i;
	}

	*this = savebf;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10087f50 size=0xd4
#include "bf_read.h"

// TARGET: bf_read::sub_10087f50
int bf_read::sub_10087f50(int numbits)
{
    int bits = numbits - 1;
    int ret = ReadUBitLong(bits);
    if (ReadOneBit())
        ret -= (1 << bits);
    return ret;
}
// END FUNCTION

// FUNCTION: 0x10088030 size=0x8e
#include "bf_read.h"
unsigned int bf_read::sub_10088030(int numbits, bool bSigned)
{
    if (bSigned)
        return sub_10087f50(numbits);
    return ReadUBitLong(numbits);
}
// END FUNCTION

// FUNCTION: 0x100880c0 size=0x20e
#include "bf_read.h"

// TARGET: bf_read::sub_100880c0
float bf_read::sub_100880c0()
{
	int intval = 0, fractval = 0, signbit = 0;
	float value = 0.0f;
	intval = ReadOneBit();
	fractval = ReadOneBit();
	if (intval || fractval) {
		signbit = ReadOneBit();
		if (intval)
			intval = ReadUBitLong(14) + 1;
		if (fractval)
			fractval = ReadUBitLong(4);
		value = intval + fractval * (1.0 / 16);
		if (signbit)
			value = -value;
	}
	return value;
}
// END FUNCTION

// FUNCTION: 0x100882d0 size=0x13f
#include "bf_read.h"

void bf_read::sub_100882d0(Vector &fa)
{
    int xflag, yflag, zflag;
    fa.x = 0.0f;
    fa.y = 0.0f;
    fa.z = 0.0f;
    xflag = ReadOneBit();
    yflag = ReadOneBit();
    zflag = ReadOneBit();
    if (xflag)
        fa.x = sub_100880c0();
    if (yflag)
        fa.y = sub_100880c0();
    if (zflag)
        fa.z = sub_100880c0();
}
// END FUNCTION

// FUNCTION: 0x10088410 size=0xd1
#include "bf_read.h"

float bf_read::sub_10088410()
{
	int signbit;
	if (m_iCurBit + 1 > m_nDataBits)
		m_bOverflow = true;
	if (!m_bOverflow) {
		int value = ((unsigned char *)m_pData)[m_iCurBit >> 3] & (1 << (m_iCurBit & 7));
		++m_iCurBit;
		signbit = value != 0;
	} else {
		signbit = 0;
	}
	unsigned int fractVal = ReadUBitLong(11);
	float value = fractVal * (1.0 / 2047.0);
	if (signbit)
		value = -value;
	return value;
}
// END FUNCTION

// FUNCTION: 0x100884f0 size=0xec
#include "bf_read.h"
#include <math.h>

void bf_read::sub_100884f0(Vector &fa)
{
	int xflag = ReadOneBitCall();
	int yflag = ReadOneBitCall();
	if (xflag)
		fa[0] = sub_10088410();
	else
		fa[0] = 0.0f;
	if (yflag)
		fa[1] = sub_10088410();
	else
		fa[1] = 0.0f;
	int znegative = ReadOneBitCall();
	float fafafbfb = fa[0] * fa[0] + fa[1] * fa[1];
	if (fafafbfb < 1.0f)
		fa[2] = (float)sqrt(1.0f - fafafbfb);
	else
		fa[2] = 0.0f;
	if (znegative)
		fa[2] = -fa[2];
}
// END FUNCTION

// FUNCTION: 0x100885e0 size=0x3a
#include "bf_read.h"

// TARGET: bf_read::sub_100885e0
int bf_read::sub_100885e0()
{
	int value = ((unsigned char *)m_pData)[m_iCurBit >> 3] & (1 << (m_iCurBit & 7));
	++m_iCurBit;
	return value != 0;
}
// END FUNCTION

// FUNCTION: 0x10088620 size=0x2b
#include "bf_read.h"

// TARGET: bf_read::sub_10088620
void bf_read::sub_10088620(Vector &fa)
{
    Vector tmp;
    sub_100882d0(tmp);
    fa.Init(tmp.x, tmp.y, tmp.z);
}
// END FUNCTION

// FUNCTION: 0x10088660 size=0x65
#include "bf_read.h"

struct bf_readX : bf_read
{
	int sub_10088660();
};

// TARGET: bf_readX::sub_10088660
int bf_readX::sub_10088660()
{
	return ReadUBitLong(8);
}
// END FUNCTION

// FUNCTION: 0x100886e0 size=0x65
#include "bf_read.h"

struct bf_readX : bf_read
{
	int sub_100886e0();
};

// TARGET: bf_readX::sub_100886e0
int bf_readX::sub_100886e0()
{
	return ReadUBitLong(16);
}
// END FUNCTION

// FUNCTION: 0x10088880 size=0x2f
// TARGET: bf_read::sub_10088880
#include "bf_read.h"

bool bf_read::sub_10088880(int iBit) {
    if (iBit < 0) {
        m_iCurBit = m_nDataBits;
        m_bOverflow = true;
        return false;
    }
    if (iBit > m_nDataBits) {
        m_iCurBit = m_nDataBits;
        m_bOverflow = true;
        return false;
    }
    m_iCurBit = iBit;
    return true;
}
// END FUNCTION

// FUNCTION: 0x100888b0 size=0x133
#include "bf_read.h"
#include "bf_write.h"

namespace block_100bf1c0 {
struct bf_writeUnit : bf_write
{
	bf_writeUnit *sub_100865a0();
};

bf_writeUnit *bf_writeUnit::sub_100865a0()
{
	m_pData = 0;
	m_nDataBytes = 0;
	m_nDataBits = -1;
	m_iCurBit = 0;
	m_bOverflow = false;
	m_bAssertOnOverflow = true;
	m_pDebugName = 0;
	return this;
}
}
using namespace block_100bf1c0;

// TARGET: bf_read::sub_100888b0
void bf_read::sub_100888b0(int iStart, int nBits)
{
	int iEnd = nBits + iStart;
	int nRemaining = m_nDataBits - iEnd;
	bf_writeUnit bf;
	bf.sub_100865a0();
	bf.sub_10086620(m_pData, m_nDataBits * 8, iStart, -1);
	sub_10088880(iEnd);
	for (int i = 0; i < nRemaining; i++)
		bf.WriteOneBit(ReadOneBit());
	sub_10088880(iStart);
	m_nDataBits -= nBits;
	m_nDataBytes = m_nDataBits >> 3;
}
// END FUNCTION

// FUNCTION: 0x100889f0 size=0x1a2
#include "Quaternion.h"
union CBlendAnimValue
{
	struct
	{
		unsigned char valid;
		unsigned char total;
	} num;
	short value;
};

struct CBlendAnim
{
	float weight;
	int pad04[3];
	int offset[4];
};

struct CBlendBone
{
	char pad00[0x2c];
	float value[4];
	char pad3c[0x48 - 0x3c];
	float scale[4];
};

void sub_1010a0b0(Quaternion &p, Quaternion &q, float t, Quaternion &qt);

void sub_100889f0(void *pHdr, int frame, float s, CBlendBone *pbone, CBlendAnim *panim, Quaternion &q)
{
	int j, k;
	Quaternion q1, q2;
	CBlendAnimValue *panimvalue;

	if (panim->weight == 0)
	{
		q.x = 0;
		q.y = 0;
		q.z = 0;
		q.w = 0;
		return;
	} j = 0; while (j < 4) { if (panim->offset[j] == 0)
		{
			q1[j] = q2[j] = pbone->value[j];
		}
		else
		{
			panimvalue = (CBlendAnimValue *)((unsigned char *)panim + panim->offset[j]);
			k = frame;
			while (panimvalue->num.total <= k)
			{
				k = k - panimvalue->num.total;
				panimvalue = panimvalue + (panimvalue->num.valid + 1);
			}
			if (panimvalue->num.valid > k)
			{
				q1[j] = panimvalue[(int)k + 1].value;
				if (panimvalue->num.valid > k + 1)
				{
					q2[j] = panimvalue[k + 2].value;
				}
				else
				{
					if (panimvalue->num.total > k + 1)
						q2[j] = q1[j];
					else
						q2[j] = panimvalue[panimvalue->num.valid + 2].value;
				}
			}
			else
			{
				q1[j] = panimvalue[panimvalue->num.valid].value;
				if (!(panimvalue->num.total > (1 + k))) q2[j] = panimvalue[panimvalue->num.valid + 2].value; else q2[j] = q1[j];
			}
			q1[j] *= (pbone->scale[j]);
			q2[j] = q2[j] * pbone->scale[j];
		} ++j; }
	int *pa1 = (int *)&q1;
	int *pa2 = (int *)&q2;
	if (((pa1[1] ^ pa2[1]) | (pa1[2] ^ pa2[2]) | (pa2[3] ^ pa1[3]) | (pa2[0] ^ pa1[0])) != 0)
	{
		sub_1010a0b0(q1, q2, s, q);
		return;
	} q = q1;
}
// END FUNCTION

// FUNCTION: 0x10088ba0 size=0x153
#include "Vector.h"
struct mstudioanimvalue_t {
    union {
        struct { unsigned char valid; unsigned char total; } num;
        short value;
    };
};
struct mstudioanim_t {
    float weight;
    int offset[6];
};
struct mstudiobone_t {
    char pad[0x20];
    float value[6];
    float pad38;
    float scale[6];
};
void sub_10088ba0(void *pStudioHdr, int frame, float s, mstudiobone_t *pbone, mstudioanim_t *panim, Vector &pos)
{
    if (panim->weight == 0.0) {
        pos.x = 0;
        pos.y = 0;
        pos.z = 0;
        return;
    }
    for (int j = 0; j < 3; j++) {
        pos[j] = pbone->value[j];
        if (panim->offset[j] != 0) {
            mstudioanimvalue_t *panimvalue = (mstudioanimvalue_t *)((unsigned char *)panim + panim->offset[j]);
            int k = frame;
            if (panimvalue->num.total < panimvalue->num.valid)
                k = 0;
            while (panimvalue->num.total <= k) {
                k -= panimvalue->num.total;
                panimvalue += panimvalue->num.valid + 1;
                if (panimvalue->num.total < panimvalue->num.valid)
                    k = 0;
            }
            if (panimvalue->num.valid > k) {
                if (panimvalue->num.valid > k + 1)
                    pos[j] += (panimvalue[k + 1].value * (1.0 - s) + s * panimvalue[k + 2].value) * pbone->scale[j];
                else
                    pos[j] += panimvalue[k + 1].value * pbone->scale[j];
            } else {
                if (panimvalue->num.total <= k + 1)
                    pos[j] += (panimvalue[panimvalue->num.valid].value * (1.0 - s) + s * panimvalue[panimvalue->num.valid + 2].value) * pbone->scale[j];
                else
                    pos[j] += panimvalue[panimvalue->num.valid].value * pbone->scale[j];
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10088d00 size=0x5a
#include "Quaternion.h"

void sub_1010a320(const float *p, float t, float *qt);
void sub_1010a450(const Quaternion &p, const Quaternion &q, Quaternion &qt);
float sub_1010a2b0(Quaternion &q);

void sub_10088d00(float s, const Quaternion &p, const Quaternion &q, Quaternion &qt)
{
	Quaternion p1, q1;
	sub_1010a320(&p.x, s, &p1.x);
	sub_1010a450(p1, q, q1);
	sub_1010a2b0(q1);
	qt[0] = q1[0];
	qt[1] = q1[1];
	qt[2] = q1[2];
	qt[3] = q1[3];
}
// END FUNCTION

// FUNCTION: 0x10088d60 size=0x5a
#include "Quaternion.h"

void sub_1010a320(const float *p, float t, float *qt);
void sub_1010a450(const Quaternion &p, const Quaternion &q, Quaternion &qt);
float sub_1010a2b0(Quaternion &q);

void sub_10088d60(const Quaternion &p, float s, const Quaternion &q, Quaternion &qt)
{
	Quaternion q1, q2;
	sub_1010a320(&q.x, s, &q1.x);
	sub_1010a450(p, q1, q2);
	sub_1010a2b0(q2);
	qt[0] = q2[0];
	qt[1] = q2[1];
	qt[2] = q2[2];
	qt[3] = q2[3];
}
// END FUNCTION

// FUNCTION: 0x10088e10 size=0x35b
#include "Quaternion.h"
#include "Vector.h"
struct BlendBoneWeight { float weight; int m_unk[7]; };
struct BlendSeqData {
    int m_unk[0x30 / 4];
    int weightOffset;
    BlendBoneWeight *pWeight(int i) const { return (BlendBoneWeight *)((char *)this + weightOffset) + i; }
};
struct BlendSeqDataHolder { char m_data[0x48]; };
struct BlendAnimHdr {
    int m_unk[0x10c / 4];
    int seqOffset;
    BlendSeqData *pSeqData(int i) const { return (BlendSeqData *)((BlendSeqDataHolder *)((char *)this + seqOffset) + i); }
};
struct BlendStudioHdr {
    int m_unk[0xf0 / 4];
    int numbones;
};
struct BlendSeqDesc { int m_unk0; int m_unk4; unsigned char flags; char m_unk9[0x2f]; short idx; };
struct BlendBoneMask {
    int m_unk0;
    unsigned int bits[1];
    bool IsBitSet(int i) const { return (bits[i >> 5] & (1 << (i & 0x1f))) != 0; }
};
struct BlendRemap { int dst; int src; int m_unk[13]; };
void sub_10088d00(float s, const Quaternion &p, const Quaternion &q, Quaternion &qt);
void sub_10088d60(const Quaternion &p, float s, const Quaternion &q, Quaternion &qt);
BlendSeqDesc *sub_10089170(BlendStudioHdr *a, int b, BlendAnimHdr **c, int *d);
void sub_1010a140(const Quaternion &p, const Quaternion &q, float t, Quaternion &qt);

void sub_10088e10(BlendStudioHdr *pStudioHdr, Quaternion *q1, Vector *pos1, int sequence, const Quaternion *q2, const Vector *pos2, float s, const BlendBoneMask *boneMask, int nRemap, const BlendRemap *remap)
{
    Quaternion q3;
    int boneMap[350];
    int seqMap[350];
    BlendAnimHdr *pAnim;
    int i, j;
    float s1, s2;

    if (!(s > 0.0f))
        return;
    if (s > 1.0f)
        s = 1.0f;

    BlendSeqDesc *pSeq = sub_10089170(pStudioHdr, sequence, &pAnim, seqMap);
    if (!pSeq)
        return;
    BlendSeqData *pData = pAnim->pSeqData(pSeq->idx);

    if (nRemap > 0 && remap) {
        for (i = 0; i < pStudioHdr->numbones; i++)
            boneMap[i] = -1;
        for (i = 0; i < nRemap; i++)
            boneMap[remap[i].dst] = remap[i].src;
    } else {
        for (i = 0; i < pStudioHdr->numbones; i++)
            boneMap[i] = i;
    }

    if (pSeq->flags & 4) {
        for (i = 0; i < pStudioHdr->numbones; i++) {
            if (!boneMask->IsBitSet(i) || seqMap[i] < 0)
                continue;
            j = boneMap[i];
            if (j < 0)
                continue;
            s2 = s * pData->pWeight(seqMap[i])->weight;
            if (s2 > 0.0) {
                if (pSeq->flags & 0x10) {
                    sub_10088d60(q1[j], s2, q2[j], q1[j]);
                    pos1[j][0] = pos1[j][0] + pos2[j][0] * s2;
                    pos1[j][1] = pos1[j][1] + pos2[j][1] * s2;
                    pos1[j][2] = pos1[j][2] + pos2[j][2] * s2;
                } else {
                    sub_10088d00(s2, q2[j], q1[j], q1[j]);
                    pos1[j][0] = pos1[j][0] + pos2[j][0] * s2;
                    pos1[j][1] = pos1[j][1] + pos2[j][1] * s2;
                    pos1[j][2] = pos1[j][2] + pos2[j][2] * s2;
                }
            }
        }
        return;
    }

    for (i = 0; i < pStudioHdr->numbones; i++) {
        if (!boneMask->IsBitSet(i) || seqMap[i] < 0)
            continue;
        j = boneMap[i];
        if (j < 0)
            continue;
        s2 = s * pData->pWeight(seqMap[i])->weight;
        if (s2 > 0.0) {
            s1 = 1.0 - s2;
            sub_1010a140(q2[j], q1[j], s1, q3);
            q1[j][0] = q3[0];
            q1[j][1] = q3[1];
            q1[j][2] = q3[2];
            q1[j][3] = q3[3];
            pos1[j][0] = pos1[j][0] * s1 + pos2[j][0] * s2;
            pos1[j][1] = pos1[j][1] * s1 + pos2[j][1] * s2;
            pos1[j][2] = pos1[j][2] * s1 + pos2[j][2] * s2;
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10089170 size=0x61
int sub_100891e0(int hdr, int seq, int *pOut, int nBones, int *pRemap);
int sub_10089170(int hdr, int seq, int *pOut, int *pRemap)
{
	int i = 0;
	int nBones = *(int *)(hdr + 0xf0);
	if (0 < nBones) {
		do {
			pRemap[i] = i;
			i++;
		} while (i < nBones);
	}
	if (seq < *(int *)(hdr + 0x110)) {
		*pOut = hdr;
		if (seq < 0)
			seq = 0;
		return *(int *)(hdr + 0x114) + seq * 0x2fc + hdr;
	}
	return sub_100891e0(hdr, seq, pOut, nBones, pRemap);
}
// END FUNCTION

// FUNCTION: 0x100891e0 size=0xd3
struct SStudioHdr;

struct SGroupSource
{
    virtual void v0();
    virtual SStudioHdr *GetHdr(SStudioHdr *hdr, int index);
};

struct SIncludeModel
{
    int m_unk0;
    SGroupSource *m_pSource;	// 0x04
    int m_base;	// 0x08
    int m_count;	// 0x0c
    int m_remapOffset;	// 0x10
};

struct SStudioHdr
{
    char m_pad0000[0x110];
    int m_numSeq;	// 0x110
    int m_seqOffset;	// 0x114
    char m_pad0118[0x194 - 0x118];
    int m_numInclude;	// 0x194
    int m_includeOffset;	// 0x198
};

// TARGET: sub_100891e0
char *sub_100891e0(SStudioHdr *hdr, int seq, SStudioHdr **ppOut, int count, int *remap)
{
    int off = 0;
    for (int i = 0; i < hdr->m_numInclude; i++, off += 0x74) {
        SIncludeModel *inc = (SIncludeModel *)((char *)hdr + hdr->m_includeOffset + off);
        int rel = seq - inc->m_base;
        if (rel >= 0 && rel < inc->m_count && inc->m_pSource) {
            SStudioHdr *found = inc->m_pSource->GetHdr(hdr, i);
            if (found) {
                for (int j = 0; j < count; j++) {
                    if (remap[j] >= 0)
                        remap[j] = *(short *)((char *)inc + inc->m_remapOffset + remap[j] * 0x38);
                }
                if (rel < found->m_numSeq) {
                    *ppOut = found;
                    if (rel < 0)
                        rel = 0;
                    return (char *)found + found->m_seqOffset + rel * 0x2fc;
                }
                return sub_100891e0(found, seq - inc->m_base, ppOut, count, remap);
            }
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100892c0 size=0x237
#include "Vector.h"
struct BlendQuat { float x, y, z, w; float operator[](int i) const { return (&x)[i]; } float &operator[](int i) { return (&x)[i]; } };
struct BlendOwner { char pad[0xf0]; int m_nCount; };
struct BlendSeq
{
	char pad[0x30];
	int m_nOffset;
	float weight(int i) { return *(float *)((char *)this + m_nOffset + i * 0x20); }
};
struct BlendMask { int m_n0; unsigned int m_bits[1]; };
void sub_1010a0b0(const BlendQuat *p, const BlendQuat *q, float t, BlendQuat *qt);

// TARGET: sub_100892c0
void sub_100892c0(BlendOwner *pOwner, BlendQuat *q1, Vector *pos1, BlendSeq *pSeq, const BlendQuat *q2, const Vector *pos2, float s, BlendMask *pMask)
{
	int i;
	if (s <= 0.0f)
		return;
	if (s >= 1.0) {
		for (i = 0; i < pOwner->m_nCount; i++) {
			if ((pMask->m_bits[i >> 5] & (1 << (i & 0x1f))) && pSeq->weight(i) > 0.0) {
				q1[i] = q2[i];
				pos1[i] = pos2[i];
			}
		}
	} else {
		float s1 = 1.0 - s;
		for (i = 0; i < pOwner->m_nCount; i++) {
			if ((pMask->m_bits[i >> 5] & (1 << (i & 0x1f))) && pSeq->weight(i) > 0.0) {
				BlendQuat q3;
				sub_1010a0b0(&q2[i], &q1[i], s1, &q3);
				q1[i][0] = q3[0];
				q1[i][1] = q3[1];
				q1[i][2] = q3[2];
				q1[i][3] = q3[3];
				pos1[i][0] = pos1[i][0] * s1 + pos2[i][0] * s;
				pos1[i][1] = pos1[i][1] * s1 + pos2[i][1] * s;
				pos1[i][2] = pos1[i][2] * s1 + pos2[i][2] * s;
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10089500 size=0x152
#include <math.h>

struct PoseParamDescX
{
	char pad00[8];
	float start;
	float end;
	float loop;
};
struct StudioHdrX
{
	char pad00[0x184];
	int poseparamindex;
};
struct SeqDescX
{
	char pad00[0x23c];
	int groupsize[2];
	int paramindex[2];
	float paramstart[2];
	float paramend[2];
};
extern float g_101e34f0;

void sub_10089500(StudioHdrX *pStudioHdr, const float *poseParameter, SeqDescX &seqdesc, int iLocalIndex, float &flSetting, int &index)
{
	int iPose = seqdesc.paramindex[iLocalIndex];
	if (iPose == -1) {
		flSetting = 0;
		index = 0;
		return;
	}
	PoseParamDescX &Pose = *(PoseParamDescX *)((char *)pStudioHdr + pStudioHdr->poseparamindex + iPose * 0x14);
	float flValue = poseParameter[iPose];
	if (Pose.loop != g_101e34f0) {
		float wrap = (Pose.end + Pose.start) * 0.5 + Pose.loop * 0.5;
		float shift = Pose.loop - wrap;
		flValue = flValue - Pose.loop * floor((flValue + shift) / Pose.loop);
	}
	flSetting = (flValue - (seqdesc.paramstart[iLocalIndex] - Pose.start) / (Pose.end - Pose.start)) /
		((seqdesc.paramend[iLocalIndex] - Pose.start) / (Pose.end - Pose.start) - (seqdesc.paramstart[iLocalIndex] - Pose.start) / (Pose.end - Pose.start));
	if (flSetting < g_101e34f0)
		flSetting = 0.0f;
	else if (flSetting > 1.0f)
		flSetting = 1.0f;
	index = 0;
	if (seqdesc.groupsize[iLocalIndex] > 1) {
		index = (int)((seqdesc.groupsize[iLocalIndex] - 1) * flSetting);
		if (index == seqdesc.groupsize[iLocalIndex] - 1)
			index = seqdesc.groupsize[iLocalIndex] - 2;
		flSetting = (seqdesc.groupsize[iLocalIndex] - 1) * flSetting - index;
	}
}
// END FUNCTION

// FUNCTION: 0x10089660 size=0x57
struct SBone160 { char m_pad[0xa0]; };
struct SBoneOwner { char m_pad0[0x58]; };
void sub_10108450(void *pSrc, void *pOut);
void sub_10108a50(void *pDst, void *pIn, int a);
void sub_10089660(char *pOwner, int iSrc, int iDst, int a)
{
	char tmp[0x30];
	sub_10108450(pOwner + iSrc * 0xa0 + *(int *)(pOwner + 0xf4) + 0x58, tmp);
	sub_10108a50(pOwner + iDst * 0xa0 + *(int *)(pOwner + 0xf4) + 0x58, tmp, a);
}
// END FUNCTION

// FUNCTION: 0x100896c0 size=0x75
#include "StudioHdr.h"
#include "Quaternion.h"

void sub_100896c0(StudioHdr *pStudioHdr, Vector pos[], Quaternion q[])
{
	for (int i = 0; i < pStudioHdr->m_nBones; i++)
	{
		StudioBone *pbone = pStudioHdr->Bone(i);
		pos[i] = pbone->m_pos;
		q[i].x = pbone->m_quat.x;
		q[i].y = pbone->m_quat.y;
		q[i].z = pbone->m_quat.z;
		q[i].w = pbone->m_quat.w;
	}
}
// END FUNCTION

// FUNCTION: 0x10089b20 size=0xdf
struct CBlendStudioHdr { char m_pad[0xf0]; int numbones; int boneindex; };
struct CBlendBone { char m_pad[0xa0]; };
struct CBlendAnim { char m_pad[0x20]; };
struct CBlendSeqDesc { char m_pad0[0xc]; int numframes; char m_pad10[0x30 - 0x10]; int animindex; };
struct CBlendBoneMask { int m_unused; unsigned int m_bits[1]; int IsBitSet(int i) const { return m_bits[i >> 5] & (1 << (i & 0x1f)); } };
struct CBlendVec { float x, y, z; };
struct CBlendQuat { float x, y, z, w; };

void sub_100889f0(CBlendStudioHdr *pHdr, int iFrame, float s, CBlendBone *pBone, CBlendAnim *pAnim, CBlendQuat &q);
void sub_10088ba0(CBlendStudioHdr *pHdr, int iFrame, float s, CBlendBone *pBone, CBlendAnim *pAnim, CBlendVec &pos);

void sub_10089b20(CBlendStudioHdr *pStudioHdr, CBlendVec *pos, CBlendQuat *q, CBlendSeqDesc *pSeq, float cycle, CBlendBoneMask *pMask)
{
	int numbones = pStudioHdr->numbones;
	if (numbones <= 0)
		return;
	int iFrame;
	float s;
	float fFrame = (pSeq->numframes - 1) * cycle;
	iFrame = (int)fFrame;
	s = fFrame - iFrame;
	CBlendBone *pbone = (CBlendBone *)((char *)pStudioHdr + pStudioHdr->boneindex);
	CBlendAnim *panim = (CBlendAnim *)((char *)pSeq + pSeq->animindex);
	for (int i = 0; i < numbones; i++, pbone++, panim++) {
		if (pMask->IsBitSet(i)) {
			sub_100889f0(pStudioHdr, iFrame, s, pbone, panim, q[i]);
			sub_10088ba0(pStudioHdr, iFrame, s, pbone, panim, pos[i]);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10089c40 size=0x4c9
struct IStudioProv { virtual void v0(); virtual char *v1(char *h, int n); };
struct Q4 { float x, y, z, w; };
struct V3 { float x, y, z; };
struct M34 { float m[3][4]; };
struct BoneMap { short idx; char chain; char xform; short from; short to; M34 mat; };
struct Bone { int name; int parent; char pad08[0x18]; V3 pos; Q4 quat; char pad3c[0xa0 - 0x3c]; };
struct BoneBits { int nBits; unsigned int words[11];
    void sub_1008e370(char *pMask, BoneMap *pTable, char *pSource); };
void sub_10089740(char *h, V3 *p, Q4 *q, int f, int a5, float *pp, char *a7);
void sub_10088e10(char *h, Q4 *q, V3 *p, int f, Q4 *q2, V3 *p2, float s, char *a7, int a, int b);
void sub_10107e40(M34 *m, Q4 *q, V3 *p);
void sub_10107f80(V3 *a, M34 *b, V3 *c);
void sub_10108450(M34 *a, M34 *b);
void sub_10108a50(M34 *a, M34 *b, M34 *c);
void sub_10109420(M34 *a);
void sub_1010a540(Q4 *a, V3 *b, M34 *c);
static inline void CopyQ(Q4 &d, const Q4 &s) { d = s; }
static inline void CopyV(V3 &d, const V3 &s) { d = s; }
void sub_10089c40(char *hdr, V3 *outPos, Q4 *outQ, int frame, int a5, float *pp, char *a7);
void sub_10089c40(char *hdr, V3 *outPos, Q4 *outQ, int frame, int a5, float *pp, char *a7)
{
    V3 pos[350];
    Q4 q[350];
    float vals[24];
    if (frame >= *(int *)(hdr + 0x110)) {
        int i;
        for (i = 0; i < *(int *)(hdr + 0x194); i++) {
            char *d = hdr + *(int *)(hdr + 0x198) + i * 0x74;
            if (*(int *)(d + 8) <= frame && *(int *)(d + 8) + *(int *)(d + 0xc) > frame && *(IStudioProv **)(d + 4)) {
                char *sh = (*(IStudioProv **)(d + 4))->v1(hdr, i);
                if (sh) {
                    int k;
                    short *pIdx;
                    for (k = 0, pIdx = (short *)(d + 0x44); k < 24; k++, pIdx++) {
                        int idx = *pIdx;
                        vals[k] = idx >= 0 ? pp[idx] : 0.0f;
                    }
                    {
                        BoneBits bits;
                        bits.sub_1008e370(a7, (BoneMap *)(d + *(int *)(d + 0x10)), sh);
                        sub_10089c40(sh, pos, q, frame - *(int *)(d + 8), a5, vals, (char *)&bits);
                    }
                    {
                        int b;
                        for (b = 0; b < *(int *)(hdr + 0xf0); b++) {
                            BoneMap *s = (BoneMap *)(d + *(int *)(d + 0x10)) + b;
                            if (s->idx < 0) {
                                Bone *bone = (Bone *)(hdr + *(int *)(hdr + 0xf4)) + b;
                                outPos[b].x = bone->pos.x; outPos[b].y = bone->pos.y; outPos[b].z = bone->pos.z;
                                outQ[b].x = bone->quat.x; outQ[b].y = bone->quat.y; outQ[b].z = bone->quat.z; outQ[b].w = bone->quat.w;
                            } else if (!s->chain) {
                                if (!s->xform)
                                    { V3 *p = &pos[s->idx]; outPos[b].x = p->x; outPos[b].y = p->y; outPos[b].z = p->z; }
                                else
                                    sub_10107f80(&pos[s->idx], &s->mat, &outPos[b]);
                                CopyQ(outQ[b], q[s->idx]);
                            } else {
                                M34 mat, tmp, m1, inv, m2;
                                V3 v;
                                int j;
                                sub_1010a540(&q[s->idx], &pos[s->idx], &mat);
                                j = *(int *)(sh + *(int *)(sh + 0xf4) + s->idx * 0xa0 + 4);
                                while (j != s->to) {
                                    sub_1010a540(&q[j], &pos[j], &m2);
                                    sub_10108a50(&m2, &mat, &mat);
                                    j = *(int *)(sh + *(int *)(sh + 0xf4) + j * 0xa0 + 4);
                                }
                                sub_10109420(&tmp);
                                j = s->from;
                                while (j != s->to) {
                                    sub_1010a540(&q[j], &pos[j], &m1);
                                    sub_10108450(&m1, &inv);
                                    sub_10108a50(&tmp, &inv, &tmp);
                                }
                                sub_10108a50(&tmp, &mat, &mat);
                                if (!s->xform)
                                    sub_10107e40(&mat, &outQ[b], &outPos[b]);
                                else {
                                    sub_10107e40(&mat, &outQ[b], &v);
                                    sub_10107f80(&v, &s->mat, &outPos[b]);
                                }
                            }
                        }
                    }
                    return;
                }
            }
        }
        frame = 0;
    } else if (frame < 0) {
        frame = 0;
    }
    sub_10089740(hdr, outPos, outQ, frame, a5, pp, a7);
    {
        int f = frame;
        if (f < 0) f = 0;
        char *g = hdr + *(int *)(hdr + 0x114) + f * 0x2fc;
        int j;
        for (j = 0; j < *(int *)(g + 0x294); j++) {
            int e = *(int *)(g + *(int *)(g + 0x298) + j * 4);
            sub_10089c40(hdr, pos, q, e, a5, pp, a7);
            sub_10088e10(hdr, outQ, outPos, e, q, pos, 1.0f, a7, 0, 0);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1008a110 size=0xc7
void sub_10089740(int a1, void *pB, void *pA, int a4, int a5, int a6, int a7);
void sub_10088e10(int a1, int a3, int a2, int a4, void *pA, void *pB, float flWeight, int a7, int a9, int a10);

void sub_1008a110(int a1, int a2, int a3, int a4, int a5, int a6, int a7, float flWeight)
{
	char bufA[0x15e0];
	char bufB[0x1068];
	if (flWeight > 1.0f)
		flWeight = 1.0f;
	else if (flWeight < 0.0f)
		flWeight = 0.0f;
	sub_10089740(a1, bufB, bufA, a4, a5, a6, a7);
	sub_10088e10(a1, a3, a2, a4, bufA, bufB, flWeight, a7, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x1008a3b0 size=0x103
#include "matrix3x4_t.h"
#include "QAngle.h"

void sub_10107eb0(const matrix3x4_t &matrix, QAngle &angles);
void sub_10108510(const matrix3x4_t &matrix, int column, Vector &out);
void sub_1010c5b0(const QAngle &a0, const QAngle &a1, Vector &axis, float &angle);

void sub_1008a3b0(Vector &velocity, Vector &angVelocity, const matrix3x4_t &prev, const matrix3x4_t &cur, float dt)
{
	float scale = 1.0f;
	if (dt > 0.0f)
		scale = 1.0 / dt;

	QAngle prevAngles;
	Vector prevOrigin;
	sub_10107eb0(prev, prevAngles);
	sub_10108510(prev, 3, prevOrigin);

	QAngle curAngles;
	Vector curOrigin;
	sub_10107eb0(cur, curAngles);
	sub_10108510(cur, 3, curOrigin);

	velocity = (curOrigin - prevOrigin) * scale;

	Vector axis;
	sub_1010c5b0(prevAngles, curAngles, axis, dt);
	angVelocity = axis * (dt = (dt + 0.0f) * scale);
}
// END FUNCTION

// FUNCTION: 0x1008a4c0 size=0x1
void sub_1008a4c0()
{
}
// END FUNCTION

// FUNCTION: 0x1008a4d0 size=0x13a
#include "matrix3x4_t.h"
#include "Quaternion.h"

struct S100c30b0Bone
{
    int m_nName;
    int m_nParent;
    char m_pad08[0x88 - 8];
    int m_nFlags;
    char m_pad8c[0xa0 - 0x8c];
};

struct S100c30b0Hdr
{
    char m_pad0000[0xf4];
    int m_nBoneIndex;
    S100c30b0Bone *Bone(int i) { return (S100c30b0Bone *)((char *)this + m_nBoneIndex) + i; }
};

void sub_1010a540(const Quaternion &q, const Vector &pos, matrix3x4_t &out);
void sub_10108a50(const matrix3x4_t &in1, const matrix3x4_t &in2, matrix3x4_t &out);
void sub_1008a4d0(S100c30b0Hdr *pStudioHdr, const matrix3x4_t &parentTransform, const Vector *pos, const Quaternion *q, int iBone, matrix3x4_t *bonetoworld);

// TARGET: sub_1008a4d0
void sub_1008a4d0(S100c30b0Hdr *pStudioHdr, const matrix3x4_t &parentTransform, const Vector *pos, const Quaternion *q, int iBone, matrix3x4_t *bonetoworld)
{
    matrix3x4_t bonematrix;
    sub_1010a540(q[iBone], pos[iBone], bonematrix);
    int parent = pStudioHdr->Bone(iBone)->m_nParent;
    if (parent == -1) {
        sub_10108a50(parentTransform, bonematrix, bonetoworld[iBone]);
        return;
    }
    sub_1008a4d0(pStudioHdr, parentTransform, pos, q, parent, bonetoworld);
    if (pStudioHdr->Bone(iBone)->m_nFlags & 2) {
        matrix3x4_t tmp;
        sub_10108a50(parentTransform, bonematrix, bonetoworld[iBone]);
        sub_10108a50(bonetoworld[parent], bonematrix, tmp);
        bonetoworld[iBone].m_flMatVal[0][3] = tmp.m_flMatVal[0][3];
        bonetoworld[iBone].m_flMatVal[1][3] = tmp.m_flMatVal[1][3];
        bonetoworld[iBone].m_flMatVal[2][3] = tmp.m_flMatVal[2][3];
        return;
    }
    sub_10108a50(bonetoworld[parent], bonematrix, bonetoworld[iBone]);
}
// END FUNCTION

// FUNCTION: 0x1008a610 size=0x7c
struct matrix3x4_view { float m[12]; };
struct StudioBoneView {
	char m_pad[0xf4];
	int m_nBoneIndex;	// 0xf4: offset of the bone records (0xa0 bytes each; the parent index is at +4)
};

void sub_10108450(const matrix3x4_view *pIn, matrix3x4_view *pOut);
void sub_10108a50(const matrix3x4_view *pIn1, const matrix3x4_view *pIn2, matrix3x4_view *pOut);
void sub_10107e40(const matrix3x4_view *pMatrix, float *pQuat, float *pPos);

void sub_1008a610(StudioBoneView *pHdr, int iBone, matrix3x4_view *pBoneToWorld, float *pPos, float *pQuat)
{
	matrix3x4_view bonematrix, local;
	int parent = *(int *)((char *)pHdr + pHdr->m_nBoneIndex + iBone * 0xa0 + 4);
	sub_10108450(&pBoneToWorld[parent], &bonematrix);
	sub_10108a50(&bonematrix, &pBoneToWorld[iBone], &local);
	sub_10107e40(&local, pQuat + iBone * 4, pPos + iBone * 3);
}
// END FUNCTION

// FUNCTION: 0x1008a690 size=0xde
struct CBoneVecX {
	float x, y, z;
	~CBoneVecX() {}
};
struct CBoneQuatX {
	float x, y, z, w;
	~CBoneQuatX() {}
};

void sub_10089c40(char *pStudioHdr, CBoneVecX *pos, CBoneQuatX *q, int sequence, int cycle, int a6, int a7);
void sub_10088e10(char *pStudioHdr, void *a2, void *a3, int sequence, CBoneQuatX *q2, CBoneVecX *pos2, float flWeight, int a8, int a9, int a10);

void sub_1008a690(char *pStudioHdr, void *pos, void *q, int a4, int a5)
{
	if (*(unsigned int *)(pStudioHdr + 0xe4) & 0x200) {
		static CBoneQuatX q2[350];
		static CBoneVecX pos2[350];
		for (int i = 0; i < *(int *)(pStudioHdr + 0x110); i++) {
			int k = i;
			if (k < 0)
				k = 0;
			if (*(unsigned char *)(*(int *)(pStudioHdr + 0x114) + k * 0x2fc + 8 + (int)pStudioHdr) & 8) {
				sub_10089c40(pStudioHdr, pos2, q2, i, 0, a4, a5);
				sub_10088e10(pStudioHdr, q, pos, i, q2, pos2, 1.0f, a5, 0, 0);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1008a8e0 size=0x2de
#include "StudioHdr.h"
#include "matrix3x4_t.h"
void sub_101094b0(const float *angles, const float *origin, float *matrix);
void sub_1010a540(const float *q, const float *pos, float *matrix);
void sub_10108a50(const float *a, const float *b, float *out);

// TARGET: sub_1008a8e0
void sub_1008a8e0(StudioHdr *pStudioHdr, const float *angles, const float *origin, const float *pos, const float *q, int iBone, matrix3x4_t *pBoneToWorld, StudioBoneMask *pMask)
{
	int boneList[350];
	int n = 0;
	if (iBone < -1 || iBone >= pStudioHdr->m_nBones)
		iBone = 0;
	StudioBone *pbones = pStudioHdr->Bone(0);
	if (iBone == -1) {
		n = pStudioHdr->m_nBones;
		for (int i = 0; i < n; i++)
			boneList[n - i - 1] = i;
	} else {
		do {
			boneList[n++] = iBone;
			iBone = pbones[iBone].m_iParent;
		} while (iBone != -1);
	}
	matrix3x4_t R;
	matrix3x4_t B;
	sub_101094b0(angles, origin, &R.m_flMatVal[0][0]);
	for (int j = n - 1; j >= 0; j--) {
		int i = boneList[j];
		if (!(pMask->m_bits[i >> 5] & (1 << (i & 31))))
			continue;
		sub_1010a540(q + i * 4, pos + i * 3, &B.m_flMatVal[0][0]);
		int parent = pbones[i].m_iParent;
		if (parent == -1) {
			sub_10108a50(&R.m_flMatVal[0][0], &B.m_flMatVal[0][0], &pBoneToWorld[i].m_flMatVal[0][0]);
		} else if (!(pbones[i].m_bFlags88 & 2)) {
			sub_10108a50(&pBoneToWorld[parent].m_flMatVal[0][0], &B.m_flMatVal[0][0], &pBoneToWorld[i].m_flMatVal[0][0]);
		} else {
			float (*O)[4] = pBoneToWorld[i].m_flMatVal;
			float (*P)[4] = pBoneToWorld[parent].m_flMatVal;
			float (*r)[4] = R.m_flMatVal;
			float (*b)[4] = B.m_flMatVal;
			O[0][0] = r[0][0] * b[0][0] + (r[0][1] * b[1][0] + r[0][2] * b[2][0]);
			O[0][1] = r[0][0] * b[0][1] + (r[0][1] * b[1][1] + r[0][2] * b[2][1]);
			O[0][2] = r[0][0] * b[0][2] + (r[0][1] * b[1][2] + r[0][2] * b[2][2]);
			O[0][3] = P[0][0] * b[0][3] + (P[0][1] * b[1][3] + P[0][2] * b[2][3]) + P[0][3];
			O[1][0] = r[1][0] * b[0][0] + (r[1][1] * b[1][0] + r[1][2] * b[2][0]);
			O[1][1] = r[1][0] * b[0][1] + r[1][1] * b[1][1] + r[1][2] * b[2][1];
			O[1][2] = r[1][0] * b[0][2] + r[1][1] * b[1][2] + r[1][2] * b[2][2];
			O[1][3] = P[1][0] * b[0][3] + P[1][1] * b[1][3] + P[1][2] * b[2][3] + P[1][3];
			O[2][0] = r[2][0] * b[0][0] + (r[2][1] * b[1][0] + r[2][2] * b[2][0]);
			O[2][1] = r[2][0] * b[0][1] + r[2][1] * b[1][1] + r[2][2] * b[2][1];
			O[2][2] = r[2][0] * b[0][2] + r[2][1] * b[1][2] + r[2][2] * b[2][2];
			O[2][3] = P[2][0] * b[0][3] + P[2][1] * b[1][3] + P[2][2] * b[2][3] + P[2][3];
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1008ae50 size=0x32f
#include <math.h>

struct matrix3x4_view { float m[12]; };
struct QuatTriggerView
{
	float inv_tolerance;	// 0x00
	float trigger[4];	// 0x04
	float pos[3];		// 0x14
	float quat[4];		// 0x20
};
struct QuatInterpView
{
	int control;		// 0x00
	int numtriggers;	// 0x04
	int triggerindex;	// 0x08
	QuatTriggerView *pTrigger(int i) { return (QuatTriggerView *)((char *)this + triggerindex) + i; }
};
struct BoneView
{
	int m_pad0;
	int parent;		// 0x04
	char m_pad8[0x90 - 8];
	int procindex;		// 0x90
	char m_pad94[0xa0 - 0x94];
	void *pProcedure() { if (procindex == 0) return 0; else return (char *)this + procindex; }
};
struct BoneAccView
{
	int m_pad0;
	matrix3x4_view *m_pBones;	// 0x04
	matrix3x4_view &GetBone(int i) { return m_pBones[i]; }
};

void sub_10108450(const matrix3x4_view *pIn, matrix3x4_view *pOut);
void sub_10108a50(const matrix3x4_view *pIn1, const matrix3x4_view *pIn2, matrix3x4_view *pOut);
void sub_10107e40(const matrix3x4_view *pMatrix, float *pQuat, float *pPos);
float sub_1010a420(const float *p, const float *q);
void sub_1010a020(const float *p, const float *q, float *qt);
void sub_1010a540(const float *q, const float *pos, matrix3x4_view *pMatrix);
void sub_1010a930(const float *q, float *angles);
void sub_10109440(const float *angles, const float *pos, matrix3x4_view *pMatrix);

#define QI_MAX(a, b) (((a) > (b)) ? (a) : (b))

// TARGET: sub_1008ae50
void sub_1008ae50(BoneView *pbones, int ibone, BoneAccView *bonetoworld)
{
	matrix3x4_view bonematrix;

	QuatInterpView *pProc = (QuatInterpView *)pbones[ibone].pProcedure();
	if (pProc && pbones[pProc->control].parent != -1)
	{
		float src[4];
		float weight[32];
		float scale = 0.0f;
		float quat[4];
		float pos[3];

		matrix3x4_view worldToControlParent;
		sub_10108450(&bonetoworld->GetBone(pbones[pProc->control].parent), &worldToControlParent);
		matrix3x4_view controlBoneToControlParent;
		sub_10108a50(&worldToControlParent, &bonetoworld->GetBone(pProc->control), &controlBoneToControlParent);
		sub_10107e40(&controlBoneToControlParent, src, pos);

		int i;
		for (i = 0; i < pProc->numtriggers; i++)
		{
			float dot = (float)fabs(sub_1010a420(pProc->pTrigger(i)->trigger, src));
			weight[i] = 1.0 - (acos(dot) * pProc->pTrigger(i)->inv_tolerance) * 2;
			weight[i] = QI_MAX(0.0f, weight[i]);
			scale += weight[i];
		}

		if (scale <= 0.001)
		{
			float angles[3];
			sub_1010a930(pProc->pTrigger(0)->quat, angles);
			sub_10109440(angles, pProc->pTrigger(0)->pos, &bonematrix);
			sub_10108a50(&bonetoworld->GetBone(pbones[ibone].parent), &bonematrix, &bonetoworld->GetBone(ibone));
			return;
		}

		scale = 1.0 / scale;

		quat[0] = 0.0f; quat[1] = 0.0f; quat[2] = 0.0f; quat[3] = 0.0f;
		pos[0] = 0.0f; pos[1] = 0.0f; pos[2] = 0.0f;

		for (i = 0; i < pProc->numtriggers; i++)
		{
			if (weight[i] != 0.0f)
			{
				float s = scale * weight[i];
				QuatTriggerView *pTrigger = pProc->pTrigger(i);

				sub_1010a020(pTrigger->quat, quat, quat);

				quat[0] = quat[0] + s * pTrigger->quat[0];
				quat[1] = quat[1] + s * pTrigger->quat[1];
				quat[2] = quat[2] + s * pTrigger->quat[2];
				quat[3] = quat[3] + s * pTrigger->quat[3];
				pos[0] = pos[0] + s * pTrigger->pos[0];
				pos[1] = pos[1] + s * pTrigger->pos[1];
				pos[2] = pos[2] + s * pTrigger->pos[2];
			}
		}
		sub_1010a540(quat, pos, &bonematrix);
	}

	sub_10108a50(&bonetoworld->GetBone(pbones[ibone].parent), &bonematrix, &bonetoworld->GetBone(ibone));
}
// END FUNCTION

// FUNCTION: 0x1008b180 size=0x54
struct Elem_100c40e0 { char pad[0x88]; unsigned char flags; char pad2[3]; int type; char pad3[0xa0-0x90]; };
struct Base_100c40e0 { char pad[0xf4]; int offset; };
void sub_1008ae50(Elem_100c40e0 *, int, int);
void sub_1008abc0(Elem_100c40e0 *, int, int);
bool sub_1008b180(Base_100c40e0 *p, int idx, int arg)
{
    Elem_100c40e0 *base = (Elem_100c40e0 *)((char *)p + p->offset);
    if (base[idx].flags & 1) {
        switch (base[idx].type) {
        case 1:
            sub_1008abc0(base, idx, arg);
            return true;
        case 2:
            sub_1008ae50(base, idx, arg);
            return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x1008b1e0 size=0x171
struct posedesc_t { int a; int flags; float start; float end; };
extern posedesc_t *sub_1008b360(void *hdr, int index);
extern double g_1022cc40, g_101e3210, g_1022cc38, g_1022cc30, g_1022cc28, g_101e34e0, g_10227bf0;
extern float g_10227bec, g_101e34f0, g_101e34ec, g_101e4408;

float sub_1008b1e0(void *hdr, int index, float value, float *ctl)
{
    if (!hdr) return value;
    posedesc_t *p = sub_1008b360(hdr, index);
    if (!p) return value;
    if (p->flags & 0x38) {
        if (p->end < p->start) value = -value;
        if (p->start + g_1022cc40 >= p->end) {
            float mid = (p->end + p->start) * g_101e3210;
            if (value > mid + g_1022cc38) value = value - g_10227bec;
            if (value < mid - g_1022cc38) value = value + g_10227bec;
        } else {
            if (value > g_10227bec) {
                value = value - (int)(g_1022cc30 * value) * g_10227bf0;
            } else if (value < g_101e34f0) {
                value = value + (int)(g_1022cc28 * value + g_101e34e0) * g_10227bf0;
            }
        }
    }
    *ctl = (value - p->start) / (p->end - p->start);
    if (*ctl < g_101e34f0) *ctl = 0;
    else if (*ctl > g_101e34ec) *ctl = 1.0f;
    float r = (g_101e34e0 - *ctl) * p->start + p->end * *ctl;
    if ((p->flags & 0x38) && p->end < p->start) r = r * g_101e4408;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1008b360 size=0x3b
struct CEntry100c4340
{
	char m_pad0000[0x14];
	int m_key;
};

struct CHolder100c4340
{
	char m_pad0000[0xf8];
	int m_nCount;
	int m_nOffset;
};

// TARGET: sub_1008b360
CEntry100c4340 *sub_1008b360(CHolder100c4340 *pHolder, int key)
{
	int n = pHolder->m_nCount;
	if (1 <= n)
	{
		int i = 0;
		CEntry100c4340 *p = (CEntry100c4340 *)((char *)pHolder + pHolder->m_nOffset);
		if (p->m_key == key)
			return p;
		long k;
		do
		{
			i++;
			if (i == n)
				return 0;
			p++;
			k = p->m_key;
		} while (k != key);
		return p;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1008b3a0 size=0x36
struct CLerpRange
{
    float m_flStart;
    float m_flEnd;
    float m_flUnk;
    float m_flUnk2;
    float m_flUnk3;
};

struct CLerpRangeSet
{
    float m_fUnk;
};

int sub_1008b360(void *pOwner, int id);

// TARGET: sub_1008b3a0
float sub_1008b3a0(void *pOwner, int id, float t)
{
    if (pOwner == 0) {
        return 0.0f;
    }
    char *e = (char *)sub_1008b360(pOwner, id);
    if (e == 0) {
        return 0.0f;
    }
    return (*(float *)(e + 0xc) - *(float *)(e + 8)) * t + *(float *)(e + 8);
}
// END FUNCTION

// FUNCTION: 0x1008b3e0 size=0xd3
#include <math.h>

struct S100c43e0PoseParam
{
	char m_pad00[8];
	float start;	// 0x08
	float end;	// 0x0c
	float loop;	// 0x10
};

extern float g_101e34f0;
S100c43e0PoseParam *sub_1008d930(const void *pStudioHdr, int iParameter);

float sub_1008b3e0(const void *pStudioHdr, int iParameter, float flValue, float *pCtlValue)
{
	S100c43e0PoseParam *pPoseParam = sub_1008d930(pStudioHdr, iParameter);
	if (!pPoseParam)
		return g_101e34f0;
	const S100c43e0PoseParam &PoseParam = *pPoseParam;
	if (PoseParam.loop != g_101e34f0)
	{
		float wrap = (PoseParam.start + PoseParam.end) / 2.0 + PoseParam.loop / 2.0;
		float shift = PoseParam.loop - wrap;
		flValue = flValue - PoseParam.loop * floor((flValue + shift) / PoseParam.loop);
	}
	*pCtlValue = (flValue - PoseParam.start) / (PoseParam.end - PoseParam.start);
	if (*pCtlValue < g_101e34f0)
		*pCtlValue = 0.0f;
	else if (*pCtlValue > 1.0f)
		*pCtlValue = 1.0f;
	return (PoseParam.end - PoseParam.start) * *pCtlValue + PoseParam.start;
}
// END FUNCTION

// FUNCTION: 0x1008b4c0 size=0x2b
float *sub_1008d930(int a, int b);

// TARGET: sub_1008b4c0
float sub_1008b4c0(int a, int b, float t)
{
	float *p = sub_1008d930(a, b);
	if (p != 0)
		return (p[3] - p[2]) * t + p[2];
	return 0.0f;
}
// END FUNCTION

// FUNCTION: 0x1008b530 size=0x25
// TARGET: sub_1008b530
int *sub_1008b530(char *pThis, int key)
{
    int *pNode = *(int **)(pThis + 0x28);
    while (pNode != 0) {
        if (*pNode == key) {
            return pNode + 1;
        }
        if (*pNode > key) {
            return 0;
        }
        pNode = (int *)pNode[0xd];
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1008b560 size=0x21
// TARGET: sub_1008b560
void sub_1008b560(int *pTable, char *pSrc)
{
    int *p = *(int **)(pSrc + 0x28);
    while (p != 0) {
        pTable[p[0]] = (int)(p + 1);
        p = (int *)p[13];
    }
}
// END FUNCTION

// FUNCTION: 0x1008b590 size=0x5e
struct SPoolEntry100c { char pad[0x38]; };
extern SPoolEntry100c g_104892c8[512];
extern int g_10491338[0xb0];
extern char g_10498e7c;
extern int g_10498e78;
extern SPoolEntry100c *g_10498e74;
extern int g_104902c4;
char sub_1008b590()
{
	if (g_10498e7c == 0) {
		for (int i = 0; i < 0x1c00; i++)
			((int *)g_104892c8)[i] = 0;
		for (int j = 0; j < 0xb0; j++)
			g_10491338[j] = 0;
		g_10498e7c = 1;
		g_10498e78 = 0;
		g_10498e74 = g_104892c8;
		int *p = (int *)g_104892c8 + 0xd;
		do {
			*p = (int)(p + 1);
			p += 0xe;
		} while ((int)p < (int)g_104892c8 + 0x7034);
		g_104902c4 = 0;
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1008b5f0 size=0xc2
struct CacheEntry {
	int m_a;
	int m_b;
	float m_c;
	float m_v1[3];
	float m_v2[3];
	unsigned int m_nFlags;
};

extern int g_10491338[];
extern unsigned int g_10498e78;

void sub_1008b590();

CacheEntry *sub_1008b5f0(int a, int b, float c, const float *v1, const float *v2, unsigned int nFlags)
{
	sub_1008b590();
	unsigned int i = g_10498e78;
	do {
		CacheEntry *e = (CacheEntry *)&g_10491338[i * 11];
		if (e->m_a == a && e->m_b == b && e->m_c == c
			&& v1[0] == e->m_v1[0] && v1[1] == e->m_v1[1] && v1[2] == e->m_v1[2]
			&& v2[0] == e->m_v2[0] && v2[1] == e->m_v2[1] && v2[2] == e->m_v2[2]
			&& (e->m_nFlags & nFlags) == nFlags)
			return e;
		i = (i - 1) & 0xf;
	} while (i != g_10498e78);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1008b6c0 size=0x143
#include "Vector.h"
struct Item48 { int d[12]; };
struct Node { int idx; Item48 item; Node *next; };
struct Rec { int a; int b; int c; Vector v1; Vector v2; unsigned flags; Node *head; };
struct Ent { char pad[0x88]; unsigned flags; char pad2[0xa0 - 0x8c]; };
struct Src {
    char pad[0xf0];
    int count;
    int offset;
    Ent *Ents() { return (Ent *)((char *)this + offset); }
};
extern int g_10498e78;
extern Rec g_10491338[16];
extern Node *g_10498e74;
void sub_1008b590();
void sub_1008b810(Rec *);
void sub_1008b850();

Rec *sub_1008b6c0(Src *src, int b, int c, Vector *v1, Vector *v2, unsigned flags, Item48 *items)
{
    sub_1008b590();
    g_10498e78 = (1 + g_10498e78) & 0xf;
    Rec *r = &*(g_10491338 + g_10498e78);
    sub_1008b810(r);
    r->a = (int)src;
    r->b = b;
    r->c = c;
    r->v1 = *v1;
    r->v2 = *v2;
    r->flags = flags;
    r->head = 0;
    Node *last = 0;
    { long i = 0; while ((int)i < src->count) { if ((flags & src->Ents()[i].flags) || !(src->Ents()[0].flags & 0xfffc)) {
            Node *n = g_10498e74;
            if (!n) {
                sub_1008b850();
                n = g_10498e74;
            }
            g_10498e74 = n->next;
            if (!r->head)
                r->head = n;
            else
                last->next = n;
            n->idx = i;
            n->item = *(items + i);
            last = n;
        } i += 1; } }
    if (last)
        last->next = 0;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1008b810 size=0x35
// TARGET: sub_1008b810
struct CUnknownFreeNode100c4980
{
	char m_pad0000[0x34];
	CUnknownFreeNode100c4980 *m_pNext;	// 0x34
};

struct CUnknownFreeList100c4980
{
	int m_n00;
	char m_pad04[0x28 - 4];
	CUnknownFreeNode100c4980 *m_pHead;	// 0x28
};

extern CUnknownFreeNode100c4980 *g_10498e74;

void sub_1008b810(CUnknownFreeList100c4980 *pList)
{
	CUnknownFreeNode100c4980 *pNode = pList->m_pHead;
	while (pNode != 0) {
		CUnknownFreeNode100c4980 *pNext = pNode->m_pNext;
		pNode->m_pNext = g_10498e74;
		g_10498e74 = pNode;
		pNode = pNext;
	}
	pList->m_n00 = 0;
	pList->m_pHead = 0;
}
// END FUNCTION

// FUNCTION: 0x1008b850 size=0x3b
extern int g_10498e78;
extern int g_10498e74;
extern int g_10491338[];
void sub_1008b810(int *p);

// TARGET: sub_1008b850
void sub_1008b850()
{
    int i = g_10498e78 + 1;
    if (i != g_10498e78) {
        do {
            i &= 0xf;
            sub_1008b810(&g_10491338[i * 11]);
            if (g_10498e74) {
                return;
            }
            i++;
        } while (i != g_10498e78);
    }
}
// END FUNCTION

// FUNCTION: 0x1008c060 size=0x186
struct StudioHdr
{
	char m_pad0000[0x10c];
	int m_nAnimBase;	// 0x10c
};

void *sub_1008db40(StudioHdr *pHdr, int iSeq, StudioHdr **ppHdr, float *pCache, const float *pPose);
void sub_10089500(StudioHdr *pHdr, const float *pPose, void *pSeq, int iParam, float *pSetting, int *pIndex);

struct SeqBlend
{
	char m_pad0000[0x38];
	short m_blend[16][16];	// 0x38
};

void sub_1008c060(StudioHdr *pStudioHdr, int iSequence, const float *poseParameter, void **panim, float *weight)
{
	float pose[24];
	SeqBlend *seqdesc = (SeqBlend *)sub_1008db40(pStudioHdr, iSequence, &pStudioHdr, pose, poseParameter);
	if (pStudioHdr && seqdesc) {
		int i0 = 0, i1 = 0;
		float s0 = 0, s1 = 0;
		sub_10089500(pStudioHdr, pose, seqdesc, 0, &s0, &i0);
		sub_10089500(pStudioHdr, pose, seqdesc, 1, &s1, &i1);
		panim[0] = (char *)pStudioHdr + pStudioHdr->m_nAnimBase + seqdesc->m_blend[i0][i1] * 0x48;
		weight[0] = (1 - s0) * (1 - s1);
		panim[1] = (char *)pStudioHdr + pStudioHdr->m_nAnimBase + seqdesc->m_blend[i0 + 1][i1] * 0x48;
		weight[1] = (s0) * (1 - s1);
		panim[2] = (char *)pStudioHdr + pStudioHdr->m_nAnimBase + seqdesc->m_blend[i0][i1 + 1] * 0x48;
		weight[2] = (1 - s0) * (s1);
		panim[3] = (char *)pStudioHdr + pStudioHdr->m_nAnimBase + seqdesc->m_blend[i0 + 1][i1 + 1] * 0x48;
		weight[3] = (s0) * (s1);
		return;
	}
	panim[3] = 0; panim[2] = 0; panim[1] = 0; panim[0] = 0;
	weight[3] = 0; weight[2] = 0; weight[1] = 0; weight[0] = 0;
}
// END FUNCTION

// FUNCTION: 0x1008c1f0 size=0x71
struct S100c5600 { int pad[3]; int m_n; };

void sub_1008c060(int a, int b, int c, S100c5600 **pEntries, float *pWeights);

// TARGET: sub_1008c1f0
int sub_1008c1f0(int a, int b, int c)
{
	float w[4];
	S100c5600 *p[4];
	sub_1008c060(a, b, c, p, w);
	float sum = 0.0f;
	for (int i = 0; i < 4; i++) {
		if (w[i] > 0.0f)
			sum += p[i]->m_n * w[i];
	}
	if (sum > 1.0f)
		sum -= 1.0f;
	return (int)sum;
}
// END FUNCTION

// FUNCTION: 0x1008c270 size=0x58
void sub_1008c060(int a, int b, int c, float **ppOut, float *pWeights);
float sub_1008c270(int a, int b, int c)
{
	float *ptrs[4];
	float weights[4];
	sub_1008c060(a, b, c, ptrs, weights);
	float sum = 0.0f;
	for (int i = 0; i < 4; i++) {
		if (weights[i] > 0.0f)
			sum += ptrs[i][1] * weights[i];
	}
	return sum;
}
// END FUNCTION

// FUNCTION: 0x1008c530 size=0x96
#include "Vector.h"
struct mstudiomovement_t
{
	int endframe;
	int motionflags;
	float v0;
	float v1;
	float angle;
	Vector vector;
	Vector position;
};

struct mstudioanimdesc_t
{
	char m_pad0[0xc];
	int numframes;
	int nummovements;
	int movementindex;
	mstudiomovement_t *pMovement(int i) const { return (mstudiomovement_t *)(((char *)this) + movementindex) + i; }
};

// TARGET: sub_1008c530
bool sub_1008c530(mstudioanimdesc_t *panim, float flCycle, Vector &vecVelocity)
{
	float prevframe = 0;
	float flFrame = flCycle * (panim->numframes - 1);
	for (int i = 0; i < panim->nummovements; i++)
	{
		mstudiomovement_t *pmove = panim->pMovement(i);
		if (pmove->endframe >= flFrame)
		{
			float f = (flFrame - prevframe) / (pmove->endframe - prevframe);
			float vel = pmove->v0 * (1 - f) + pmove->v1 * f;
			vel = vel * (pmove->endframe - prevframe) / (panim->numframes - 1);
			vecVelocity = pmove->vector * vel;
			return true;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1008c5d0 size=0xb1
#include "Vector.h"
struct CBoneOwner { int pad[4]; int m_p; };
void sub_1008c360(CBoneOwner *p, int idx, Vector *pos, Vector *ang);
void sub_10109e90(Vector *v, float f, Vector *out);
char sub_1008c5d0(CBoneOwner *p, int a, int b, Vector *turn, Vector *pOut)
{
    if (!p->m_p) return 0;
    Vector p0, a0, p1, a1;
    sub_1008c360(p, a, &p0, &a0);
    sub_1008c360(p, b, &p1, &a1);
    Vector delta = p1 - p0;
    pOut->y = a1.y - a0.y;
    sub_10109e90(&delta, -a0.y, turn);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1008c690 size=0xd6
struct SegEntry {
	int m_nValue;
	int m_n04;
	float m_fA;
	float m_fB;
	int m_n10;
	int m_n14;
	int m_n18;
	int m_n1c;
	int m_n20;
	int m_n24;
	int m_n28;
};

struct SegTable {
	int m_n00;
	int m_n04;
	int m_n08;
	int m_nCount;
	int m_nSegs;
	int m_nOffset;
};

bool sub_10109dd0(float a, float b, float c, float &r1, float &r2);

float sub_1008c690(SegTable *tbl, float t)
{
	float prev = 0.0f;
	if (t <= 0.0f)
		return 0.0f;
	int i = 0;
	if (tbl->m_nSegs > 0) {
		SegEntry *e = (SegEntry *)((char *)tbl + tbl->m_nOffset);
		do {
			float len = (e->m_fB + e->m_fA) * 0.5;
			if (len >= t) {
				float root1, root2;
				if (sub_10109dd0((e->m_fB - e->m_fA) * 0.5, e->m_fA, -t, root1, root2))
					return ((e->m_nValue - prev) * root1 + prev) * (1.0 / (tbl->m_nCount - 1));
				return 0.0f;
			}
			t -= len;
			i++;
			prev = (float)e->m_nValue;
			e++;
		} while (i < tbl->m_nSegs);
	}
	return 1.0f;
}
// END FUNCTION

// FUNCTION: 0x1008c770 size=0x168
#include "Vector.h"

void sub_1008c060(void *pStudioHdr, int iSequence, const float *poseParameter, void **panim, float *weight);
char sub_1008c5d0(void *panim, float flCycleFrom, float flCycleTo, Vector &deltaPos, Vector &deltaAngles);

bool sub_1008c770(void *pStudioHdr, int iSequence, float flCycleFrom, float flCycleTo, const float *poseParameter, Vector &deltaPos, Vector &deltaAngles)
{
	void *panim[4];
	float weight[4];
	sub_1008c060(pStudioHdr, iSequence, poseParameter, panim, weight);
	deltaPos.Init();
	deltaAngles.Init();
	bool found = false;
	for (int i = 0; i < 4; i++)
	{
		if (weight[i])
		{
			Vector localPos;
			Vector localAngles;
			localPos.Init();
			localAngles.Init();
			if (sub_1008c5d0(panim[i], flCycleFrom, flCycleTo, localPos, localAngles))
			{
				found = true;
				deltaPos = deltaPos + localPos * weight[i];
				deltaAngles = deltaAngles + localAngles * weight[i];
			}
		}
	}
	return found;
}
// END FUNCTION

// FUNCTION: 0x1008ce30 size=0x3
int sub_1008ce30()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1008ce40 size=0x154
#include "CUnknown101dff00.h"
#include "CRestore.h"

struct CRecord160
{
	char m_pad0000[4];
	int m_nParent;		// 0x04
	char m_pad0008[0x88 - 8];
	unsigned int m_nFlags;	// 0x88
	char m_pad008c[0xa0 - 0x8c];
};

struct CEntry1c
{
	int m_nRecord;
	char m_pad[0x1c - 4];
};

struct CRecordHolder
{
	char m_pad0000[0xf0];
	int m_nRecords;		// 0xf0
	int m_nRecordsOffset;	// 0xf4
	char m_pad00f8[0x18c - 0xf8];
	int m_nEntries;		// 0x18c
	int m_nEntriesOffset;	// 0x190

	CRecord160 *Rec(int i)
	{
		return (CRecord160 *)((char *)this + m_nRecordsOffset) + i;
	}
	CEntry1c *Entry(int i)
	{
		return (CEntry1c *)((char *)this + m_nEntriesOffset) + i;
	}
};

void sub_1008cfa0(CRecordHolder *pHolder, int a, CRestoreVec *pVec);

// TARGET: sub_1008ce40
void sub_1008ce40(CRecordHolder *pHolder, int a)
{
	CRestoreVec vec;
	sub_1008cfa0(pHolder, a, &vec);
	if (!(pHolder)) return; for (int i = 0; i < pHolder->m_nEntries; i++)
		{
			CEntry1c *pEntry = pHolder->Entry(i);
			int r;
			for (r = pEntry->m_nRecord; r >= 0; r = pHolder->Rec(r)->m_nParent)
				pHolder->Rec(r)->m_nFlags |= 0xfffc;
			r = pEntry->m_nRecord;
			while (1) { int j;
				for (j = r + 1; j < pHolder->m_nRecords; j++)
					if (pHolder->Rec(j)->m_nParent == r)
						break;
				if (j >= pHolder->m_nRecords)
					break;
				pHolder->Rec(j)->m_nFlags |= 0xfffc;
				r = j; }
		}
}
// END FUNCTION

// FUNCTION: 0x1008d930 size=0x9f
struct SPoseHdr;

struct SIncModelSource
{
	virtual void v0();
	virtual SPoseHdr *GetHeader(SPoseHdr *pHdr, int a);
};

struct SIncludeModel
{
	int m_unk0;
	SIncModelSource *m_pSource;	// 0x04
	char m_pad08[0x14 - 0x08];
	short m_poseIndex[0x18];	// 0x14
	char m_pad44[0x74 - 0x44];
};

struct SPoseHdr
{
	char m_pad0000[0x180];
	int m_numPoseParams;	// 0x180
	int m_poseOffset;	// 0x184
	char m_pad0188[0x194 - 0x188];
	int m_numIncludes;	// 0x194
	int m_includeOffset;	// 0x198
};

SPoseHdr *sub_1008d930(SPoseHdr *pHdr, int index);

SPoseHdr *sub_1008d930(SPoseHdr *pHdr, int index)
{
	int i = 0;
	if (pHdr && index >= 0 && index < 0x18) {
		if (index < pHdr->m_numPoseParams)
			return (SPoseHdr *)((char *)pHdr + pHdr->m_poseOffset + index * 0x14);
		for (i = 0; i < pHdr->m_numIncludes; i++) {
			SIncludeModel *pInc = (SIncludeModel *)((char *)pHdr + pHdr->m_includeOffset + i * 0x74);
			if (pInc->m_poseIndex[index] >= 0 && pInc->m_pSource) {
				SPoseHdr *pIncHdr = pInc->m_pSource->GetHeader(pHdr, i);
				if (pIncHdr) {
					SPoseHdr *p = sub_1008d930(pIncHdr, pInc->m_poseIndex[index]);
					if (p)
						return p;
				}
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1008d9d0 size=0xad
struct StudioHdr;

struct IncludeModelProvider
{
	virtual void v0();
	virtual StudioHdr *vfunc1(StudioHdr *pHdr, int index);
};

struct IncludeModel
{
	int m_pad0000;
	IncludeModelProvider *m_pProvider;	// 0x04
	int m_nBaseSequence;	// 0x08
	int m_nNumSequences;	// 0x0c
	int m_nBoneRemapIndex;	// 0x10
	char m_pad0014[0x74 - 0x14];
};

struct SeqDesc
{
	char m_pad[0x2fc];
};

struct StudioHdr
{
	char m_pad0000[0x110];
	int numseq;	// 0x110
	int seqindex;	// 0x114
	char m_pad0118[0x194 - 0x118];
	int numincludemodels;	// 0x194
	int includemodelindex;	// 0x198
	SeqDesc *pSeqdesc(int i) const { if (i < 0 || i >= numseq) i = 0; return (SeqDesc *)((char *)this + seqindex) + i; }
};

SeqDesc *sub_1008d9d0(StudioHdr *pHdr, int iSequence);

SeqDesc *sub_1008d9d0(StudioHdr *pHdr, int iSequence)
{
	if (pHdr && iSequence >= 0) {
		if (iSequence < pHdr->numseq)
			return pHdr->pSeqdesc(iSequence);
		for (int j = 0; j < pHdr->numincludemodels; j++) {
			IncludeModel *pInc = (IncludeModel *)((char *)pHdr + (pHdr->includemodelindex + j * sizeof(IncludeModel)));
			if (pInc->m_nBaseSequence <= iSequence && pInc->m_nBaseSequence + pInc->m_nNumSequences > iSequence && pInc->m_pProvider) {
				StudioHdr *pSub = pInc->m_pProvider->vfunc1(pHdr, j);
				if (pSub) {
					SeqDesc *r = sub_1008d9d0(pSub, iSequence - pInc->m_nBaseSequence);
					if (r)
						return r;
				}
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1008da80 size=0xb8
struct CStudioSub
{
	virtual void v0();
	virtual char *vfunc1(char *hdr, int index);
};

struct CStudioInclude	// 0x74 byte record
{
	int m_0;
	CStudioSub *m_pSub;	// 0x04
	int m_nStart;	// 0x08
	int m_nCount;	// 0x0c
};

struct CStudioHdr
{
	char m_pad0[0x110];
	int m_numSeq;	// 0x110
	int m_seqOffset;	// 0x114
	char m_pad118[0x194 - 0x118];
	int m_numInc;	// 0x194
	int m_incOffset;	// 0x198
};

char *sub_1008da80(CStudioHdr *pHdr, int index, CStudioHdr **ppOwner);

// TARGET: sub_1008da80
char *sub_1008da80(CStudioHdr *pHdr, int index, CStudioHdr **ppOwner)
{
	int i = 0;
	if (pHdr != 0 && index >= 0) {
		if (index < pHdr->m_numSeq) {
			*ppOwner = pHdr;
			return (char *)pHdr + pHdr->m_seqOffset + index * 0x2fc;
		}
		if (pHdr->m_numInc > 0) {
			int off = 0;
			do {
				CStudioInclude *pInc = (CStudioInclude *)((char *)pHdr + pHdr->m_incOffset + off);
				if (pInc->m_nStart <= index && pInc->m_nStart + pInc->m_nCount > index && pInc->m_pSub != 0) {
					char *pSub = pInc->m_pSub->vfunc1((char *)pHdr, i);
					if (pSub != 0) {
						char *r = sub_1008da80((CStudioHdr *)pSub, index - pInc->m_nStart, ppOwner);
						if (r != 0)
							return r;
					}
				}
				i++;
				off += 0x74;
			} while (i < pHdr->m_numInc);
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1008db40 size=0x12d
#include "StudioHdr.h"

extern float g_101e34f0;

struct PoseParams
{
    float m_a[24];
};

void *sub_1008db40(StudioHdr *pHdr, int iSeq, StudioHdr **ppOwner, float *pOut, const float *pIn);	// the stub of this function

void *sub_1008db40(StudioHdr *pHdr, int iSeq, StudioHdr **ppOwner, float *pOut, const float *pIn)
{
    if (pHdr && iSeq >= 0) {
        if (iSeq < pHdr->m_nLocalSeq) {
            *ppOwner = pHdr;
            *(PoseParams *)pOut = *(const PoseParams *)pIn;
            return (char *)pHdr + *(int *)((char *)pHdr + 0x114) + iSeq * 0x2fc;
        }
        for (int i = 0; i < pHdr->m_nIncludeModels; i++) {
            StudioIncludeModel *pInc = pHdr->IncludeModel(i);
            if (pInc->m_nBase <= iSeq && pInc->m_nBase + pInc->m_nCount > iSeq && pInc->m_pVirtual) {
                StudioHdr *pIncHdr = pInc->m_pVirtual->vfunc1(pHdr, i);
                if (pIncHdr) {
                    float local[24];
                    for (int k = 0; k < 24; k++) {
                        int idx = pInc->m_aPoseParamRemap[k];
                        local[k] = idx >= 0 ? pIn[idx] : g_101e34f0;
                    }
                    void *p = sub_1008db40(pIncHdr, iSeq - pInc->m_nBase, ppOwner, pOut, local);
                    if (p)
                        return p;
                }
            }
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1008dc70 size=0xf0
struct StudioHdr;
struct ModelCache { virtual void v0(); virtual StudioHdr *vfunc1(StudioHdr *pHdr, int index); };
struct InclModel
{
    char pad0[4];
    ModelCache *m_pCache;
    int m_nBase;
    int m_nCount;
    int m_nRemapOfs;
    char pad14[0x74 - 0x14];
};
struct StudioHdr
{
    char pad0[0xf0];
    int m_nRemap;
    char pad1[0x110 - 0xf4];
    int m_nLocal;
    char pad2[0x194 - 0x114];
    int m_nIncl;
    int m_nInclOfs;
};
int sub_1008dc70(StudioHdr *pHdr, int a, int b);
int sub_1008dc70(StudioHdr *pHdr, int a, int b)
{
    int idx = 0;
    if (pHdr != 0 && a >= 0 && b >= 0) {
        if (a < pHdr->m_nLocal) {
            if (b < pHdr->m_nRemap)
                return b;
        } else {
            for (int i = 0; i < pHdr->m_nIncl; i++) {
                InclModel *pRec = (InclModel *)((char *)pHdr + pHdr->m_nInclOfs + i * 0x74);
                if (pRec->m_nBase <= a && pRec->m_nBase + pRec->m_nCount > a && pRec->m_pCache) {
                    StudioHdr *pSub = pRec->m_pCache->vfunc1(pHdr, i);
                    if (pSub) {
                        idx = sub_1008dc70(pSub, a - pRec->m_nBase, b);
                        if (idx >= 0) {
                            for (int j = 0; j < pHdr->m_nRemap; j++) {
                                if (*(short *)((char *)pRec + pRec->m_nRemapOfs + j * 0x38) == idx)
                                    return j;
                            }
                        }
                    }
                }
            }
        }
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1008dd60 size=0xca
struct StudioHdr;

struct IncludeModelProvider
{
	virtual void v0();
	virtual StudioHdr *vfunc1(StudioHdr *pHdr, int index);
};

struct IncludeModel
{
	int m_pad0000;
	IncludeModelProvider *m_pProvider;	// 0x04
	int m_nBaseSequence;	// 0x08
	int m_nNumSequences;	// 0x0c
	int m_nBoneRemapIndex;	// 0x10
	char m_pad0014[0x74 - 0x14];
};

struct StudioHdr
{
	char m_pad0000[0xf0];
	int numbones;	// 0xf0
	char m_pad00f4[0x110 - 0xf4];
	int numseq;	// 0x110
	int seqindex;	// 0x114
	char m_pad0118[0x194 - 0x118];
	int numincludemodels;	// 0x194
	int includemodelindex;	// 0x198
};

int sub_1008dd60(StudioHdr *pHdr, int iSequence, int iBone);	// the stub of this function, used by its recursion

int sub_1008dd60(StudioHdr *pHdr, int iSequence, int iBone)
{
	if (pHdr && iSequence >= 0 && iBone >= 0 && iBone < pHdr->numbones) {
		if (iSequence < pHdr->numseq)
			return iBone;
		for (int j = 0; j < pHdr->numincludemodels; j++) {
			IncludeModel *pInc = (IncludeModel *)((char *)pHdr + (pHdr->includemodelindex + j * sizeof(IncludeModel)));
			if (pInc->m_nBaseSequence <= iSequence && pInc->m_nBaseSequence + pInc->m_nNumSequences > iSequence && pInc->m_pProvider) {
				StudioHdr *pSub = pInc->m_pProvider->vfunc1(pHdr, j);
				if (pSub) {
					int r = sub_1008dd60(pSub, iSequence - pInc->m_nBaseSequence, *(short *)((char *)pInc + pInc->m_nBoneRemapIndex + iBone * 0x38));
					if (r >= 0)
						return r;
				}
			}
		}
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1008de30 size=0x10d
#include <math.h>
double sub_101d1628(double);
extern float g_101e34dc;
struct SObj {
    char pad0[8];
    unsigned int flags;
    char pad1[0x264 - 12];
    float a;
    float b;
    float c;
};
float sub_1008de30(SObj *p, SObj *q, float t)
{
    if (p == 0 || q == 0 || (q->flags & 2))
        return 0.0f;
    float lim = q->a;
    float r;
    if (t < 0.5f) {
        r = (p->b - p->c) * t;
        r = r + r + p->a;
    } else {
        if (p->flags & 1) {
            double f = fabs(t - sub_101d1628(t) - g_101e34dc);
            f = f + f;
            r = (p->c - p->b) * f;
            r = r + p->b;
        } else if (t >= 1.0f) {
            r = p->c;
        } else {
            r = (t - 0.5f) * (p->c - p->b);
            r = r + r;
            r = r + p->b;
        }
    }
    if (q->flags & 0x400) {
        if (lim < r) return lim;
    } else {
        if (lim > r) return lim;
    }
    return r;
}
// END FUNCTION

// FUNCTION: 0x1008df40 size=0x49
int sub_1008da80(int a, char *b, char **c);

int sub_1008df40(int a, char *pHdr, int x, int y)
{
	char *pRec = (char *)sub_1008da80(a, pHdr, &pHdr);
	if (!pRec)
		return 0;
	char *p = pHdr + *(int *)(pHdr + 0x10c) + *(short *)(pRec + 0x38 + (x * 16 + y) * 2) * 0x48;
	if (!p)
		return 0;
	return *(int *)(p + 8);
}
// END FUNCTION

// FUNCTION: 0x1008e230 size=0x82
#include "CUnknown100c7f30.h"

struct Bone100c7f30 { int m_unk[0x22]; unsigned int flags; int m_unk8c[5]; };
struct Hdr100c7f30 : CUnknown100c7f30Hdr {
    Bone100c7f30 *pBone(int i) { return (Bone100c7f30 *)((char *)this + m_boneOffset) + i; }
};

void CUnknown100c7f30::sub_1008e230(CUnknown100c7f30Hdr *hdr, unsigned int mask)
{
    if (hdr == 0) {
        m_count = 0;
        return;
    }
    unsigned int *out = m_bits;
    unsigned int acc = 0;
    unsigned int bit = 1;
    int n = hdr->m_numBones;
    m_count = n;
    if (n > 0) {
        Bone100c7f30 *pb = ((Hdr100c7f30 *)hdr)->pBone(0);
        if ((int)bit == -1) acc = (-(int)(mask & pb->flags) >> 16) & (int)bit; else acc = (-(int)(mask & pb->flags) >> 16) & (int)bit;
        while (--n != 0) {
            bit += bit;
            pb++;
            if (bit == 0) {
                *out++ = acc;
                bit = 1;
                acc = 0;
            }
            if ((char)(int)n == -1) acc += (-(int)(mask & pb->flags) >> 16) & bit; else acc += (-(int)(mask & pb->flags) >> 16) & bit;
        }
    }
    *out = acc;
}
// END FUNCTION

// FUNCTION: 0x1008e370 size=0xa4
#include "CUnknown100c80d0.h"

void CUnknown100c80d0::sub_1008e370(const unsigned int *pMask, const short *pTable, const void *pSource)
{
	if (pSource && pTable) {
		m_nBits = *(const int *)((const char *)pSource + 0xf0);
		int n = (m_nBits + 31) >> 5;
		if (n != 0) {
			unsigned int *p = &m_words[n];
			do {
				p--;
				n--;
				*p = 0;
			} while (n != 0);
		}
		unsigned int count = *pMask;
		if (count) {
			const unsigned int *pw = pMask;
			unsigned int bit = 1;
			unsigned int bits = *++pw;
			pw++;
			for (;;) {
				if (bits & bit) {
					int s = *pTable;
					if (s >= 0)
						m_words[s >> 5] |= 1 << (s & 0x1f);
				}
				if (--count == 0)
					return;
				bit += bit;
				pTable += 0x1c;
				if (bit == 0) {
					bits = *pw;
					bit = 1;
					pw++;
				}
			}
		}
	} else {
		m_nBits = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1008e420 size=0x8e
#include "CUnknown100c81b0.h"

void CUnknown100c81b0::sub_1008e420(const CBitVecWords *pSource, int count, const CBoneRecord *pRecords, const CStudioBoneCount *pStudio)
{
	if (!pStudio || !pRecords) {
		m_nBits = 0;
		return;
	}
	m_nBits = pStudio->m_nBits;
	int words = (m_nBits + 31) >> 5;
	if (words != 0) {
		unsigned int *p = m_words + words;
		do {
			p = p - 1;
			words = words - 1;
			*p = 0;
		} while (words != 0);
	}
	for (; count != 0; count--, pRecords++) {
		if (pSource->m_words[pRecords->m_nSource >> 5] & (1 << (pRecords->m_nSource & 31))) {
			if (pRecords->m_nIndex >= 0)
				m_words[pRecords->m_nIndex >> 5] |= 1 << (pRecords->m_nIndex & 31);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1008e4b0 size=0xaa
#include "CUtlVector4.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *, unsigned int);

int CUtlVector4::sub_1008e4b0(int elem, const int *src)
{
	if (1 + m_size > m_allocationCount && m_growSize != -1) {
		int newSize = m_allocationCount + (1 + m_size - m_allocationCount);
		while (m_allocationCount < newSize) {
			if (m_allocationCount != 0) {
				if (m_growSize != 0)
					m_allocationCount += m_growSize;
				else
					m_allocationCount += m_allocationCount;
			} else {
				m_allocationCount = 8;
			}
		}
		if (m_pMemory)
			m_pMemory = (int *)Plat_Realloc(m_pMemory, m_allocationCount * 4);
		else
			m_pMemory = (int *)Plat_Alloc(m_allocationCount * 4);
	}
	m_size += 1;
	m_pElements = m_pMemory;
	int numToMove = m_size - elem - 1;
	if (numToMove > 0)
		sub_101d0f30(m_pMemory + elem + 1, m_pMemory + elem, numToMove * 4);
	int *p = m_pMemory + elem;
	if (p)
		*p = *src;
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1008e560 size=0x34
#include "UtlMem.h"
extern void *(__cdecl *g_101e3100)(int);

UtlMem *UtlMem::sub_1008e560(int growSize, int allocationCount)
{
	m_pMemory = 0;
	m_allocationCount = allocationCount;
	m_growSize = growSize;
	if (allocationCount) {
		m_pMemory = (int *)g_101e3100(allocationCount * 4);
	}
	return this;
}
// END FUNCTION

// FUNCTION: 0x1008e5a0 size=0x8c
#include "CUtlVector4.h"
extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUtlVector4::sub_1008e5a0(int num)
{
    if (m_size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 8;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (int *)g_101e3104(m_pMemory, m_allocationCount << 2);
        else
            m_pMemory = (int *)g_101e3100(m_allocationCount << 2);
    }
    m_size += num;
    m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x1008e630 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_1008e630(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
}
// END FUNCTION

// FUNCTION: 0x1008e670 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1008e670(int num);
};

// TARGET: UtlMem::sub_1008e670
void UtlMem::sub_1008e670(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x1008e7e0 size=0x6
namespace lifted {
extern char g_10498e9c;
}
int sub_1008e7e0()
{
    return (int)&lifted::g_10498e9c;
}
// END FUNCTION

// FUNCTION: 0x1008ede0 size=0x6
namespace lifted {
extern char g_10498fa4;
}
int sub_1008ede0()
{
    return (int)&lifted::g_10498fa4;
}
// END FUNCTION

// FUNCTION: 0x10095b90 size=0x5
int __stdcall sub_10095b90(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10095ba0 size=0x5
int __stdcall sub_10095ba0(int a0, int a1, int a2, int a3)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10095bb0 size=0x5
int __stdcall sub_10095bb0(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10096d10 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_10096d10()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10096d40 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_10096d40()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10096d80 size=0x95
#include "CUtlVector76.h"
extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUtlVector76::sub_10096d80(int num)
{
    if (m_size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 1;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (char *)g_101e3104(m_pMemory, m_allocationCount * 76);
        else
            m_pMemory = (char *)g_101e3100(m_allocationCount * 76);
    }
    m_size += num;
    m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x10096e20 size=0x49
#include "CUtlVector76.h"
void *sub_101d0f30(void *, const void *, unsigned int);

void CUtlVector76::sub_10096e20(int elem, int num)
{
    int numToMove = m_size - elem - num;
    if (numToMove > 0 && num > 0)
        sub_101d0f30(m_pMemory + (elem + num) * 76, m_pMemory + elem * 76, numToMove * 76);
}
// END FUNCTION

// FUNCTION: 0x10096e70 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_10096e70()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10096f60 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_10096f60()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10096f90 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_10096f90()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10097080 size=0x70
struct Elem { char data[0x34]; };
struct Mem {
    Elem *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
};
extern void *(*g_101e3104)(void *, int);
extern void *(*g_101e3100)(int);

void __fastcall sub_10097080(Mem *self, int, int num)
{
    if (self->m_nGrowSize == -1)
        return;
    int nAllocationRequested = self->m_nAllocationCount + num;
    if (self->m_nAllocationCount < nAllocationRequested) {
        int count = self->m_nAllocationCount;
        do {
            if (count != 0) {
                if (self->m_nGrowSize != 0)
                    count += self->m_nGrowSize;
                else
                    count += count;
            } else
                count = 1;
        } while (count < nAllocationRequested);
        self->m_nAllocationCount = count;
    }
    if (self->m_pMemory)
        self->m_pMemory = (Elem *)g_101e3104(self->m_pMemory, self->m_nAllocationCount * sizeof(Elem));
    else
        self->m_pMemory = (Elem *)g_101e3100(self->m_nAllocationCount * sizeof(Elem));
}
// END FUNCTION

// FUNCTION: 0x10097160 size=0x6a
extern void *(*g_101e3104)(void *, int);
extern void *(*g_101e3100)(int);
struct S101859a0 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_10097160(int num);
};
// TARGET: S101859a0::sub_10097160
void S101859a0::sub_10097160(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 1;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_101e3104(m_pMemory, m_nAllocationCount * 0x48);
    else
        m_pMemory = g_101e3100(m_nAllocationCount * 0x48);
}
// END FUNCTION

// FUNCTION: 0x10098720 size=0x59
float sub_10098720(float x, float lo, float hi)
{
	if (x > hi) {
		x = hi;
		return (x - lo) / (hi - lo);
	}
	if (x < lo) {
		x = lo;
		return (x - lo) / (hi - lo);
	}
	return (x - lo) / (hi - lo);
}
// END FUNCTION

// FUNCTION: 0x1009c1a0 size=0x1
void sub_1009c1a0()
{
}
// END FUNCTION

// FUNCTION: 0x1009ce10 size=0x8c
#include "CUtlVector4.h"
extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUtlVector4::sub_1009ce10(int num)
{
    if (m_size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 8;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (int *)g_101e3104(m_pMemory, m_allocationCount << 2);
        else
            m_pMemory = (int *)g_101e3100(m_allocationCount << 2);
    }
    m_size += num;
    m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x1009cea0 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_1009cea0(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
}
// END FUNCTION

// FUNCTION: 0x1009cf00 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1009cf00(int num);
};

// TARGET: UtlMem::sub_1009cf00
void UtlMem::sub_1009cf00(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x1009db70 size=0x1
void sub_1009db70()
{
}
// END FUNCTION

// FUNCTION: 0x1009f040 size=0x3
struct CUnknown1009f040 { void * sub_1009f040(); };
void * CUnknown1009f040::sub_1009f040()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x1009f260 size=0x5
char __stdcall sub_1009f260(int a0, int a1, int a2)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1009f2e0 size=0x3
void __stdcall sub_1009f2e0(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x1009f2f0 size=0x4
struct CUnknown1009f2f0 { char * sub_1009f2f0(); };
char * CUnknown1009f2f0::sub_1009f2f0()
{
    return (char *)this + -8;
}
// END FUNCTION

// FUNCTION: 0x1009f330 size=0x3
char sub_1009f330()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1009f340 size=0x4
struct CUnknown1009f340 { int sub_1009f340(); };
int CUnknown1009f340::sub_1009f340()
{
    return *(int *)((char *)this + 0x3c);
}
// END FUNCTION

// FUNCTION: 0x1009fb40 size=0x4
struct CUnknown1009fb40 { int sub_1009fb40(); };
int CUnknown1009fb40::sub_1009fb40()
{
    return *(int *)((char *)this + 0x3c);
}
// END FUNCTION

// FUNCTION: 0x1009fcd0 size=0x3
char sub_1009fcd0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1009ff70 size=0x3
char sub_1009ff70()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1009ffb0 size=0x1
void sub_1009ffb0()
{
}
// END FUNCTION

// FUNCTION: 0x1009ffc0 size=0x1
void sub_1009ffc0()
{
}
// END FUNCTION

// FUNCTION: 0x1009ffd0 size=0x3
char sub_1009ffd0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1009ffe0 size=0x5
int __stdcall sub_1009ffe0(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100a1200 size=0x1
void sub_100a1200()
{
}
// END FUNCTION

// FUNCTION: 0x100a13d0 size=0x3
void __stdcall sub_100a13d0(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100a32c0 size=0x3
char sub_100a32c0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100a3300 size=0x1a
namespace lifted {
extern int g_102afbe8;
extern int g_102afbec;
extern char g_1049e35c;
}
int sub_100a3300()
{
    lifted::g_102afbec = 1;
    lifted::g_102afbe8 = (int)&lifted::g_1049e35c;
    return (int)&lifted::g_102afbe8;
}
// END FUNCTION

// FUNCTION: 0x100a3440 size=0x8c
#include "CUtlVector4.h"
extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUtlVector4::sub_100a3440(int num)
{
    if (m_size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 8;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (int *)g_101e3104(m_pMemory, m_allocationCount << 2);
        else
            m_pMemory = (int *)g_101e3100(m_allocationCount << 2);
    }
    m_size += num;
    m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x100a34d0 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_100a34d0(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
}
// END FUNCTION

// FUNCTION: 0x100a3590 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100a3590()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100a35c0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100a35c0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100a35f0 size=0x76
struct Elem1c { char d[0x1c]; };
extern void *(*g_101e3104)(void *, int);
extern void *(*g_101e3100)(int);
struct Mem1c {
    Elem1c *m_p;
    int m_alloc;
    int m_grow;
    void sub_100a35f0(int num);
};
void Mem1c::sub_100a35f0(int num)
{
    if (m_grow == -1)
        return;
    int want = m_alloc + num;
    if (m_alloc < want) {
        int n = m_alloc;
        do {
            if (n != 0) {
                if (m_grow != 0)
                    n += m_grow;
                else
                    n += n;
            } else
                n = 2;
        } while (n < want);
        m_alloc = n;
    }
    if (m_p)
        m_p = (Elem1c *)g_101e3104(m_p, m_alloc * 0x1c);
    else
        m_p = (Elem1c *)g_101e3100(m_alloc * 0x1c);
}
// END FUNCTION

// FUNCTION: 0x100a3990 size=0x1
void sub_100a3990()
{
}
// END FUNCTION

// FUNCTION: 0x100a39a0 size=0x4
struct CUnknown100a39a0 { int sub_100a39a0(); };
int CUnknown100a39a0::sub_100a39a0()
{
    return *(int *)((char *)this + 0x10);
}
// END FUNCTION

// FUNCTION: 0x100a3a40 size=0x3
void __stdcall sub_100a3a40(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100a3a50 size=0x3
void __stdcall sub_100a3a50(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100a3a70 size=0x4
struct CUnknown100a3a70 { char sub_100a3a70(); };
char CUnknown100a3a70::sub_100a3a70()
{
    return *(char *)((char *)this + 0xc);
}
// END FUNCTION

// FUNCTION: 0x100a3ab0 size=0x4
struct CUnknown100a3ab0 { char * sub_100a3ab0(); };
char * CUnknown100a3ab0::sub_100a3ab0()
{
    return (char *)this + -4;
}
// END FUNCTION

// FUNCTION: 0x100a3b50 size=0x4
struct CUnknown100a3b50 { char * sub_100a3b50(); };
char * CUnknown100a3b50::sub_100a3b50()
{
    return (char *)this + -4;
}
// END FUNCTION

// FUNCTION: 0x100a5410 size=0x3
struct CUnknown100a5410 { void * sub_100a5410(); };
void * CUnknown100a5410::sub_100a5410()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x100a5420 size=0x53
struct SInit {
	int m_n0;
	int m_n4, m_n8, m_nc, m_n10, m_n14, m_n18, m_n1c, m_n20, m_n24, m_n28;
	char m_b2c;
	int m_n30, m_n34;
	char m_b38;
	int m_n3c, m_n40;
	char m_b44, m_b45, m_b46, m_b47;
	int m_n48, m_n4c, m_n50, m_n54, m_n58;
	char m_b5c;

	void sub_100a5420();
};

void SInit::sub_100a5420()
{
	m_n4 = 0; m_n8 = 0; m_nc = 0; m_n10 = 0; m_n14 = 0; m_n18 = 0; m_n1c = 0; m_n20 = 0; m_n24 = 0; m_n28 = 0;
	m_b2c = 0;
	m_n30 = 0; m_n34 = 0;
	m_b38 = 0;
	m_n3c = 0; m_n40 = 0;
	m_b44 = 1; m_b45 = 1; m_b46 = 0; m_b47 = 0;
	m_n48 = 0; m_n4c = 0; m_n50 = 0; m_n54 = 0; m_n58 = 0;
	m_b5c = 0;
}
// END FUNCTION

// FUNCTION: 0x100a5a30 size=0x5
namespace lifted {
int sub_1009f2b0();
}
int sub_100a5a30()
{
    return lifted::sub_1009f2b0();
}
// END FUNCTION

// FUNCTION: 0x100a5a40 size=0x5
namespace lifted {
int sub_100950c0();
}
int sub_100a5a40()
{
    return lifted::sub_100950c0();
}
// END FUNCTION

// FUNCTION: 0x100a6b00 size=0x5
namespace lifted {
int sub_10098800();
}
int sub_100a6b00()
{
    return lifted::sub_10098800();
}
// END FUNCTION

// FUNCTION: 0x100a9910 size=0x5
char __stdcall sub_100a9910(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100a9be0 size=0x3
void __stdcall sub_100a9be0(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x100aa490 size=0x1
void sub_100aa490()
{
}
// END FUNCTION

// FUNCTION: 0x100aacb0 size=0x59
struct CUnknown101a5290 {
    void *m_pMemory;
    int m_allocationCount;
    int m_growSize;
    int m_size;
    void *m_pElements;
    void sub_100aacb0();
};

extern void (__cdecl *g_101e30fc)(void *);

// TARGET: sub_100aacb0
void CUnknown101a5290::sub_100aacb0()
{
    void (__cdecl *pFree)(void *) = g_101e30fc;
    m_size = 0;
    if (m_growSize != -1) {
        if (m_pMemory) {
            pFree(m_pMemory);
            m_pMemory = 0;
        }
        m_allocationCount = 0;
    }
    m_pElements = m_pMemory;
    if (m_growSize != -1) {
        if (m_pMemory) {
            pFree(m_pMemory);
            m_pMemory = 0;
        }
        m_allocationCount = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x100aad50 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100aad50()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100aad80 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100aad80(int num);
};

// TARGET: UtlMem::sub_100aad80
void UtlMem::sub_100aad80(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x100abf90 size=0x3
char sub_100abf90()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100ac060 size=0x5
namespace lifted {
int sub_1009fc40();
}
int sub_100ac060()
{
    return lifted::sub_1009fc40();
}
// END FUNCTION

// FUNCTION: 0x100ac080 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100ac080(int num);
};

// TARGET: UtlMem::sub_100ac080
void UtlMem::sub_100ac080(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x100ac780 size=0x5
struct CUnknown100ac780 { void sub_100ac780(); };
void CUnknown100ac780::sub_100ac780()
{
    *(char *)((char *)this + 0x4c) = 1;
}
// END FUNCTION

// FUNCTION: 0x100ae060 size=0x3
char sub_100ae060()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100b4d30 size=0x8f
#include "CUtlVector40.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *, unsigned int);

void CUtlVector40::sub_100b4d30(int num)
{
	if (num + m_size > m_allocationCount && m_growSize != -1) {
		int newSize = m_allocationCount + (num + m_size - m_allocationCount);
		while (m_allocationCount < newSize) {
			if (m_allocationCount != 0) {
				if (m_growSize != 0)
					m_allocationCount += m_growSize;
				else
					m_allocationCount += m_allocationCount;
			} else {
				m_allocationCount = 1;
			}
		}
		if (m_pMemory)
			m_pMemory = (char *)Plat_Realloc(m_pMemory, m_allocationCount * 40);
		else
			m_pMemory = (char *)Plat_Alloc(m_allocationCount * 40);
	}
	m_size += num;
	m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x100b4dc0 size=0x3e
#include "UtlVec40.h"

void UtlVec40::sub_100b4dc0(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0) {
		sub_101d0f30(m_pMemory + (elem + num) * 40, m_pMemory + elem * 40, numToMove * 40);
	}
}
// END FUNCTION

// FUNCTION: 0x100b4e00 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100b4e00()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100b56b0 size=0x3
char sub_100b56b0()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100b6c30 size=0x5
namespace lifted {
int sub_1009f210();
}
int sub_100b6c30()
{
    return lifted::sub_1009f210();
}
// END FUNCTION

// FUNCTION: 0x100b6c40 size=0x3
char sub_100b6c40()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100b9b80 size=0x43
#include "Vector.h"
Vector Vector::sub_100b9b80(const Vector &v) const
{
	Vector res;
	VectorSubtract(*this, v, res);
	return res;
}
// END FUNCTION

// FUNCTION: 0x100baba0 size=0x3
char sub_100baba0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100bbb80 size=0x5
namespace lifted {
int sub_1009f210();
}
int sub_100bbb80()
{
    return lifted::sub_1009f210();
}
// END FUNCTION

// FUNCTION: 0x100bc170 size=0x5
int __stdcall sub_100bc170(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100bc680 size=0x5
int __stdcall sub_100bc680(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100bd530 size=0x5
namespace lifted {
int sub_100a0240();
}
int sub_100bd530()
{
    return lifted::sub_100a0240();
}
// END FUNCTION

// FUNCTION: 0x100bde50 size=0x5
struct CUnknown100bde50 { void sub_100bde50(); };
void CUnknown100bde50::sub_100bde50()
{
    *(char *)((char *)this + 4) = 1;
}
// END FUNCTION

// FUNCTION: 0x100be0c0 size=0x5
struct CUnknown100be0c0 { void sub_100be0c0(); };
void CUnknown100be0c0::sub_100be0c0()
{
    *(char *)((char *)this + 5) = 1;
}
// END FUNCTION

// FUNCTION: 0x100be130 size=0x4
struct CUnknown100be130 { char sub_100be130(); };
char CUnknown100be130::sub_100be130()
{
    return *(char *)((char *)this + 0x28);
}
// END FUNCTION

// FUNCTION: 0x100be140 size=0x4
struct CUnknown100be140 { char sub_100be140(); };
char CUnknown100be140::sub_100be140()
{
    return *(char *)((char *)this + 0x29);
}
// END FUNCTION

// FUNCTION: 0x100be200 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100be200(int num);
};

// TARGET: UtlMem::sub_100be200
void UtlMem::sub_100be200(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x100c0960 size=0x3
struct CUnknown100c0960 { void * sub_100c0960(); };
void * CUnknown100c0960::sub_100c0960()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x100c1e70 size=0x3e
#include "UtlVec40.h"

void UtlVec40::sub_100c1e70(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0) {
		sub_101d0f30(m_pMemory + (elem + num) * 40, m_pMemory + elem * 40, numToMove * 40);
	}
}
// END FUNCTION

// FUNCTION: 0x100c1eb0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100c1eb0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100c1ee0 size=0x6a
#include "CUnknown101a59f0.h"

extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUnknown101a59f0::sub_100c1ee0(int num)
{
    if (m_nGrowSize == -1)
        return;
    int requested = m_nAllocationCount + num;
    int alloc = m_nAllocationCount;
    if (alloc < requested) {
        while (alloc < requested) {
            if (alloc) {
                if (m_nGrowSize)
                    alloc += m_nGrowSize;
                else
                    alloc += alloc;
            } else
                alloc = 1;
        }
        m_nAllocationCount = alloc;
    }
    if (m_pMemory)
        m_pMemory = g_101e3104(m_pMemory, m_nAllocationCount * 40);
    else
        m_pMemory = g_101e3100(m_nAllocationCount * 40);
}
// END FUNCTION

// FUNCTION: 0x100c4270 size=0x7f
extern "C" unsigned strlen(const char *);
extern void (*g_101e3188)(char *dest, const char *src, int count);

void sub_100c4270(const char *in, char *out)
{
    int len = strlen(in);
    int end = len - 1;
    while (end && in[end] != '.' && in[end] != '/' && in[end] != '\\')
        end--;
    if (in[end] != '.')
        end = len - 1;
    else
        end--;
    int start = len - 1;
    while (start >= 0 && in[start] != '/' && in[start] != '\\')
        start--;
    if (start >= 0 && (in[start] == '/' || in[start] == '\\'))
        start++;
    else
        start = 0;
    g_101e3188(out, &in[start], end - start + 2);
}
// END FUNCTION

// FUNCTION: 0x100c4b10 size=0x81
#include "CUnknown100b6f80.h"

struct CUnknown100b6f80HdrEx : CUnknown100b6f80Hdr
{
	CUnknown100b6f80 *pSetting(int i) const { return (CUnknown100b6f80 *)((char *)this + m_tableOffset90) + i; }
};

struct CUnknown100b6f80Weight { int key; float weight; };

int CUnknown100b6f80::sub_100c4b10(CUnknown100b6f80Hdr *hdr, int index, int *pOut)
{
	*pOut = 0;
	if (m_mode == 1) {
		int i = m_index;
		if (m_mode != 1 || i < 0 || i >= m_count)
			return -1;
		CUnknown100b6f80Weight *p = (CUnknown100b6f80Weight *)((char *)this + m_tableOffset) + i;
		if (!p || p->key == -1)
			return -1;
		CUnknown100b6f80 *s = ((CUnknown100b6f80HdrEx *)hdr)->pSetting(p->key);
		if (!s)
			return -1;
		return s->sub_100c4b10(hdr, index, pOut);
	}
	*pOut = (int)((char *)this + m_tableOffset + index * 12);
	return m_count;
}
// END FUNCTION

// FUNCTION: 0x100c4ba0 size=0x6a
struct TRandom {
	virtual void v0();
	virtual void v1();
	virtual int RandomInt(int lo, int hi);
};
extern TRandom *g_104a5738;

struct TItem {
	int a;
	int weight;
};

struct TSet {
	char pad0[4];
	int type;
	int count;
	char pad0c[4];
	int selected;
	int offset;

	TItem *Get(int i)
	{
		if (type == 1 && i >= 0 && i < count)
			return (TItem *)((char *)this + offset + i * 8);
		return 0;
	}
};

void sub_100c4ba0(int unused, TSet *s)
{
	if (s->type != 1)
		return;
	int chosen = 0;
	int total = 0;
	for (int i = 0; i < s->count; i++) {
		TItem *it = s->Get(i);
		if (it) {
			total += it->weight;
			if (total == 0 || g_104a5738->RandomInt(0, total - 1) < it->weight)
				chosen = i;
		}
	}
	s->selected = chosen;
}
// END FUNCTION

// FUNCTION: 0x100c4c10 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100c4c10(int num);
};

// TARGET: UtlMem::sub_100c4c10
void UtlMem::sub_100c4c10(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x100c9320 size=0x5
char __stdcall sub_100c9320(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100c9d40 size=0x4
struct CUnknown100c9d40 { int sub_100c9d40(); };
int CUnknown100c9d40::sub_100c9d40()
{
    return *(int *)((char *)this + 0x10);
}
// END FUNCTION

// FUNCTION: 0x100ca0b0 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100ca0b0(int num);
};

// TARGET: UtlMem::sub_100ca0b0
void UtlMem::sub_100ca0b0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x100ca7f0 size=0x5
namespace lifted {
int sub_100a0240();
}
int sub_100ca7f0()
{
    return lifted::sub_100a0240();
}
// END FUNCTION

// FUNCTION: 0x100ca8c0 size=0x5
namespace lifted {
int sub_10068330();
}
int sub_100ca8c0()
{
    return lifted::sub_10068330();
}
// END FUNCTION

// FUNCTION: 0x100caa00 size=0x7b
#include "CUtlLinkedList12.h"

void CUtlLinkedList12::sub_100caa00(int elem)
{
	if (IsInList(elem)) {
		CUtlLinkedList12Node *pBase = m_pMemory;
		CUtlLinkedList12Node *pOldElem = &pBase[elem];
		if (pOldElem->m_Previous != -1)
			pBase[pOldElem->m_Previous].m_Next = pOldElem->m_Next;
		else
			m_Head = pOldElem->m_Next;
		if (pOldElem->m_Next != -1)
			pBase[pOldElem->m_Next].m_Previous = pOldElem->m_Previous;
		else
			m_Tail = pOldElem->m_Previous;
		pOldElem->m_Previous = pOldElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x100caa80 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100caa80(int num);
};

void CUtlMemory12::sub_100caa80(int num)
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
				n = 3;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 12);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x100cc560 size=0x1
void sub_100cc560()
{
}
// END FUNCTION

// FUNCTION: 0x100ccb30 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem16_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem16_t::sub_100ccb30
	void sub_100ccb30(int num);
};

void CMem16_t::sub_100ccb30(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 2;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 4);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 4);
}
// END FUNCTION

// FUNCTION: 0x100cd000 size=0x2e
// TARGET: sub_100cd000
void sub_100cd000(float t, const float *a, const float *b, float *out) {
    for (int i = 0; i < 3; i++) {
        out[i] = (b[i] - a[i]) * t + a[i];
    }
}
// END FUNCTION

// FUNCTION: 0x100cd330 size=0xdb
#include "Vector.h"
#include "CUnknown1070b254.h"

extern CUnknown1070b254 *g_104a582c;

// TARGET: sub_100cd330
float sub_100cd330(const Vector &position, float minz, float maxz)
{
    Vector midUp = position;
    midUp.z = minz;
    if (!(g_104a582c->vfunc0(&midUp.x, 0) & 0x4030))
        return minz;
    midUp.z = maxz;
    if (g_104a582c->vfunc0(&midUp.x, 0) & 0x4030)
        return maxz;
    float diff = maxz - minz;
    while (diff > 1.0) {
        midUp.z = minz + diff * 0.5;
        if (g_104a582c->vfunc0(&midUp.x, 0) & 0x4030)
            minz = midUp.z;
        else
            maxz = midUp.z;
        diff = maxz - minz;
    }
    return midUp.z;
}
// END FUNCTION

// FUNCTION: 0x100cd530 size=0x1
void sub_100cd530()
{
}
// END FUNCTION

// FUNCTION: 0x100cdb00 size=0x36
#include <string.h>

// TARGET: sub_100cdb00
void sub_100cdb00(char *pTable, const char *psz)
{
    if (pTable == 0) {
        return;
    }
    if (psz == 0) {
        return;
    }
    memset(pTable, 0, 0x100);
    char c = *psz;
    if (c != 0) {
        const char *p = psz;
        do {
            p++;
            pTable[c] = 1;
            c = *p;
        } while (c != 0);
    }
}
// END FUNCTION

// FUNCTION: 0x100cdb60 size=0x26
extern unsigned int g_10234000[256];

// TARGET: sub_100cdb60
void sub_100cdb60(unsigned int *pCrc, unsigned int value)
{
	unsigned int x = (value & 0xff) ^ *pCrc;
	*pCrc = g_10234000[x & 0xff] ^ (x >> 8);
}
// END FUNCTION

// FUNCTION: 0x100cdb90 size=0x26c
extern unsigned int g_10234000[256];
#define pulCRCTable g_10234000

void sub_100cdb90(unsigned int *pulCRC, const void *pBuffer, int nBuffer)
{
	unsigned int ulCrc = *pulCRC;
	unsigned char *pb = (unsigned char *)pBuffer;
	unsigned int nFront;
	int nMain;

JustAfew:

	switch (nBuffer)
	{
	case 7:
		ulCrc  = pulCRCTable[*pb++ ^ (unsigned char)ulCrc] ^ (ulCrc >> 8);

	case 6:
		ulCrc  = pulCRCTable[*pb++ ^ (unsigned char)ulCrc] ^ (ulCrc >> 8);

	case 5:
		ulCrc  = pulCRCTable[*pb++ ^ (unsigned char)ulCrc] ^ (ulCrc >> 8);

	case 4:
		ulCrc ^= *(unsigned int *)pb;
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		*pulCRC = ulCrc;
		return;

	case 3:
		ulCrc  = pulCRCTable[*pb++ ^ (unsigned char)ulCrc] ^ (ulCrc >> 8);

	case 2:
		ulCrc  = pulCRCTable[*pb++ ^ (unsigned char)ulCrc] ^ (ulCrc >> 8);

	case 1:
		ulCrc  = pulCRCTable[*pb++ ^ (unsigned char)ulCrc] ^ (ulCrc >> 8);

	case 0:
		*pulCRC = ulCrc;
		return;
	}

	nFront = ((unsigned int)pb) & 3;
	nBuffer -= nFront;
	switch (nFront)
	{
	case 3:
		ulCrc  = pulCRCTable[*pb++ ^ (unsigned char)ulCrc] ^ (ulCrc >> 8);
	case 2:
		ulCrc  = pulCRCTable[*pb++ ^ (unsigned char)ulCrc] ^ (ulCrc >> 8);
	case 1:
		ulCrc  = pulCRCTable[*pb++ ^ (unsigned char)ulCrc] ^ (ulCrc >> 8);
	}

	nMain = nBuffer >> 3;
	while (nMain--)
	{
		ulCrc ^= *(unsigned int *)pb;
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc ^= *(unsigned int *)(pb + 4);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		ulCrc  = pulCRCTable[(unsigned char)ulCrc] ^ (ulCrc >> 8);
		pb += 8;
	}

	nBuffer &= 7;
	goto JustAfew;
}
// END FUNCTION

// FUNCTION: 0x100d05d0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem16_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem16_t::sub_100d05d0
	void sub_100d05d0(int num);
};

void CMem16_t::sub_100d05d0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 2;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 4);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 4);
}
// END FUNCTION

// FUNCTION: 0x100d0c80 size=0x4
struct CUnknown100d0c80 { int sub_100d0c80(); };
int CUnknown100d0c80::sub_100d0c80()
{
    return *(int *)((char *)this + 4);
}
// END FUNCTION

// FUNCTION: 0x100d0ca0 size=0x4
struct CUnknown100d0ca0 { int sub_100d0ca0(); };
int CUnknown100d0ca0::sub_100d0ca0()
{
    return *(int *)((char *)this + 8);
}
// END FUNCTION

// FUNCTION: 0x100d0cb0 size=0x4
struct CUnknown100d0cb0 { int sub_100d0cb0(); };
int CUnknown100d0cb0::sub_100d0cb0()
{
    return *(int *)((char *)this + 0xc);
}
// END FUNCTION

// FUNCTION: 0x100d1190 size=0x8d
#include "CUtlLinkedList8.h"

void CUtlLinkedList8::sub_100d1190(unsigned short elem)
{
	if (elem < m_NumAlloced && m_pMemory[elem].m_Previous != elem) {
		CUtlLinkedList8Node *pList = m_pMemory;
		CUtlLinkedList8Node *pElem = &pList[elem];
		if (pElem->m_Previous != 0xffff)
			pList[pElem->m_Previous].m_Next = pElem->m_Next;
		else
			m_Head = pElem->m_Next;
		if (pElem->m_Next != 0xffff)
			pList[pElem->m_Next].m_Previous = pElem->m_Previous;
		else
			m_Tail = pElem->m_Previous;
		pElem->m_Previous = pElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x100d1240 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_100d1240
	void sub_100d1240(int num);
};

void CMem8b_t::sub_100d1240(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x100d14d0 size=0x3
char sub_100d14d0()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100d14e0 size=0x1
void sub_100d14e0()
{
}
// END FUNCTION

// FUNCTION: 0x100d14f0 size=0x3
void __stdcall sub_100d14f0(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100d1500 size=0x1
void sub_100d1500()
{
}
// END FUNCTION

// FUNCTION: 0x100d15b0 size=0x22
struct CUnknown100b7a90 {
	void sub_100d1630();
	void *sub_100d15b0(unsigned int flags);
};

// TARGET: CUnknown100b7a90::sub_100d15b0
void *CUnknown100b7a90::sub_100d15b0(unsigned int flags)
{
	sub_100d1630();
	if (flags & 1) {
		operator delete((char *)this - 4);
	}
	return (char *)this - 4;
}
// END FUNCTION

// FUNCTION: 0x100d1960 size=0x1
void sub_100d1960()
{
}
// END FUNCTION

// FUNCTION: 0x100d3380 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100d3380()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100d33d0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100d33d0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100d3470 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100d3470()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100d3a80 size=0x8d
#include "CUtlLinkedList8.h"

void CUtlLinkedList8::sub_100d3a80(unsigned short elem)
{
	if (elem < m_NumAlloced && m_pMemory[elem].m_Previous != elem) {
		CUtlLinkedList8Node *pList = m_pMemory;
		CUtlLinkedList8Node *pElem = &pList[elem];
		if (pElem->m_Previous != 0xffff)
			pList[pElem->m_Previous].m_Next = pElem->m_Next;
		else
			m_Head = pElem->m_Next;
		if (pElem->m_Next != 0xffff)
			pList[pElem->m_Next].m_Previous = pElem->m_Previous;
		else
			m_Tail = pElem->m_Previous;
		pElem->m_Previous = pElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x100d3c30 size=0x34
#include "UtlMem.h"
extern void *(__cdecl *g_101e3100)(int);

UtlMem *UtlMem::sub_100d3c30(int growSize, int allocationCount)
{
	m_pMemory = 0;
	m_allocationCount = allocationCount;
	m_growSize = growSize;
	if (allocationCount) {
		m_pMemory = (int *)g_101e3100(allocationCount * 8);
	}
	return this;
}
// END FUNCTION

// FUNCTION: 0x100d3cc0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100d3cc0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100d3e00 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100d3e00()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100d3e30 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100d3e30(int num);
};

void CUtlMemory12::sub_100d3e30(int num)
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
				n = 3;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 12);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x100d3ed0 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100d3ed0(int num);
};

// TARGET: UtlMem::sub_100d3ed0
void UtlMem::sub_100d3ed0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x100d5140 size=0x3
struct CUnknown100d5140 { int sub_100d5140(); };
int CUnknown100d5140::sub_100d5140()
{
    return *(int *)this;
}
// END FUNCTION

// FUNCTION: 0x100d8690 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100d8690()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100d8790 size=0x30
#include "CUtlMemory16.h"

extern void *(__cdecl *g_101e3100)(unsigned int);

CUtlMemory16 *CUtlMemory16::sub_100d8790(int growSize, int allocationCount)
{
	m_pMemory = 0;
	m_allocationCount = allocationCount;
	m_growSize = growSize;
	if (allocationCount)
		m_pMemory = (char *)g_101e3100(allocationCount * 16);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100d87c0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem16_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem16_t::sub_100d87c0
	void sub_100d87c0(int num);
};

void CMem16_t::sub_100d87c0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 2;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 4);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 4);
}
// END FUNCTION

// FUNCTION: 0x100d8830 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100d8830()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100d90b0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100d90b0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100d9740 size=0x1
void sub_100d9740()
{
}
// END FUNCTION

// FUNCTION: 0x100da050 size=0x5a
struct SVec3
{
	float x, y, z;
	void AddIn(const SVec3 *v)
	{
		x = x + v->x;
		y = v->y + y;
		z = v->z + z;
	}
};
struct SOut1023f3d0
{
	SVec3 m_a;
	SVec3 m_b;
	char m_pad18[0x2c - 0x18];
	float m_f2c;
	int m_n30;
	char m_pad34[2];
	char m_b36;
	char m_b37;
};

SOut1023f3d0 *sub_100da050(const SVec3 *pA, const SVec3 *pB, SOut1023f3d0 *pOut)
{
	pOut->m_a.x = pA->x;
	pOut->m_a.y = pA->y;
	pOut->m_a.z = pA->z;
	pOut->m_b.x = pA->x;
	pOut->m_b.y = pA->y;
	pOut->m_b.z = pA->z;
	pOut->m_b.AddIn(pB);
	pOut->m_b37 = 0;
	pOut->m_b36 = 0;
	pOut->m_f2c = 1.0f;
	pOut->m_n30 = 0;
	return pOut;
}
// END FUNCTION

// FUNCTION: 0x100da5c0 size=0x189
#include "Vector.h"
int sub_100da5c0(const Vector &p0, const Vector &p1, const Vector &p2, const float *plane, float *out)
{
    float d0 = DotProduct(p0, *(const Vector *)plane);
    float d1 = DotProduct(p1, *(const Vector *)plane);
    float d2 = DotProduct(p2, *(const Vector *)plane);
    int count = 0;
    if (d2 != 0.0f) {
        out[0] = 0;
        float t = -((d0 - plane[3]) / d2);
        out[1] = t;
        if (t >= 0.0f && t <= 1.0f)
            count = 1;
    }
    if (d1 != 0.0f) {
        out[count * 2] = -((d0 - plane[3]) / d1);
        out[count * 2 + 1] = 0;
        if (out[count * 2] >= 0.0f && out[count * 2] <= 1.0f)
            count++;
    }
    if (count == 2)
        return count;
    if (d2 != d1) {
        float t = -(((d0 - plane[3]) + d2) / (d1 - d2));
        out[count * 2] = t;
        t = 1.0f - t;
        out[count * 2 + 1] = t;
        if (out[count * 2] >= 0.0f && out[count * 2] <= 1.0f && t >= 0.0f && t <= 1.0f)
            count++;
    }
    return count;
}
// END FUNCTION

// FUNCTION: 0x100da940 size=0x91
#include "Vector.h"

bool sub_100da940(const Vector &boxMin, const Vector &boxMax, const Vector &center, float radius)
{
	float flDelta;
	float flDistSqr = 0.0f;
	if (center[0] < boxMin[0]) {
		flDelta = center[0] - boxMin[0];
		flDistSqr = flDelta * flDelta;
	} else if (center[0] > boxMax[0]) {
		flDelta = boxMax[0] - center[0];
		flDistSqr = flDelta * flDelta;
	}
	if (center[1] < boxMin[1]) {
		flDelta = center[1] - boxMin[1];
		flDistSqr += flDelta * flDelta;
	} else if (center[1] > boxMax[1]) {
		flDelta = boxMax[1] - center[1];
		flDistSqr += flDelta * flDelta;
	}
	return flDistSqr < radius * radius;
}
// END FUNCTION

// FUNCTION: 0x100da9e0 size=0xfb
#include "Vector.h"

void sub_10108fd0(const Vector &start, float flScale, const Vector &dir, Vector &out);

int sub_100da9e0(const Vector *pStart, const Vector *pDir, const Vector *pPoint, float flRadius1, float flRadius2)
{
	flRadius1 = flRadius1 + flRadius2;
	Vector vecTemp;
	float t = DotProduct(*pPoint - *pStart, *pDir);
	if (t <= 0.0f) {
		t = 0.0f;
	} else {
		float flLenSqr = DotProduct(*pDir, *pDir);
		if (t > flLenSqr)
			t = 1.0f;
		else
			t = t / flLenSqr;
	}
	sub_10108fd0(*pStart, t, *pDir, vecTemp);
	float dx = vecTemp.x - pPoint->x;
	float dy = vecTemp.y - pPoint->y;
	float dz = vecTemp.z - pPoint->z;
	float flDist = dx * dx + dy * dy + dz * dz;
	if (flDist <= flRadius1 * flRadius1)
		return 1;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100daae0 size=0x71
#include "Vector.h"
// TARGET: sub_100daae0
bool sub_100daae0(const Vector *p, const Vector *mins, const Vector *maxs)
{
    if ((double)p->x > (double)maxs->x || (double)p->x < (double)mins->x)
        return false;
    if ((double)p->y > (double)maxs->y || (double)p->y < (double)mins->y)
        return false;
    if ((double)p->z > (double)maxs->z || (double)p->z < (double)mins->z)
        return false;
    return true;
}
// END FUNCTION

// FUNCTION: 0x100dac00 size=0x78
#include "Vector.h"

bool sub_100dac00(const Vector &boxMin1, const Vector &boxMax1, const Vector &boxMin2, const Vector &boxMax2)
{
	if ((boxMin1[0] > boxMax2[0]) || (boxMax1[0] < boxMin2[0]))
		return false;
	if ((boxMin1[1] > boxMax2[1]) || (boxMax1[1] < boxMin2[1]))
		return false;
	if ((boxMin1[2] > boxMax2[2]) || (boxMax1[2] < boxMin2[2]))
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x100dad40 size=0xed
#include "Vector.h"
bool sub_100dac00(const Vector &a, const Vector &b, const Vector &c, const Vector &d);
char sub_100dd5e0(const Vector &p1, const Vector &p2, const Vector &p3, const Vector &p4, const Vector &p5, const Vector &p6, const Vector &p7, const Vector &p8, int p9, void *pOut);

// TARGET: sub_100dad40
bool sub_100dad40(const Vector &p1, const Vector &p2, const Vector &p3, const Vector &p4, const Vector &p5, const Vector &p6, const Vector &p7, const Vector &p8, int p9)
{
	if (p2 == p6)
	{
		Vector delta = p5 - p1;
		Vector lo, hi;
		VectorAdd(delta, p7, lo);
		VectorAdd(delta, p8, hi);
		return sub_100dac00(p3, p4, lo, hi);
	}
	char tmp[20];
	return sub_100dd5e0(p1, p2, p3, p4, p5, p6, p7, p8, p9, tmp) == 0;
}
// END FUNCTION

// FUNCTION: 0x100daf90 size=0x127
#include "Vector.h"

struct Vec3 { float x, y, z; };

struct BoxObj {
	Vec3 m_vMin;
	Vec3 m_vMax;
	char m_pad18[0xc];
	Vec3 m_vExt;
	char m_pad30;
	bool m_bFlag;
};

bool sub_100dac00(const Vector &a, const Vector &b, const Vector &c, const Vector &d);
bool sub_100dae30(const Vec3 &a, const Vec3 &b, const Vec3 &c, const Vec3 &d, float e);
extern float g_101e34f0;

bool sub_100daf90(const Vector &a, const Vector &b, BoxObj *obj, float margin)
{
	float v[6];
	if (!obj->m_bFlag) {
		v[3] = obj->m_vMin.x - obj->m_vExt.x;
		v[4] = obj->m_vMin.y - obj->m_vExt.y;
		v[5] = obj->m_vMin.z - obj->m_vExt.z;
		v[0] = obj->m_vMin.x + obj->m_vExt.x;
		v[1] = obj->m_vExt.y + obj->m_vMin.y;
		v[2] = obj->m_vExt.z + obj->m_vMin.z;
		if (margin != g_101e34f0) {
			v[3] -= margin; v[4] -= margin; v[5] -= margin;
			v[0] += margin; v[1] += margin; v[2] += margin;
		}
		return sub_100dac00(a, b, *(Vector *)&v[3], *(Vector *)&v[0]);
	}
	v[0] = a.x - obj->m_vExt.x;
	v[1] = a.y - obj->m_vExt.y;
	v[2] = a.z - obj->m_vExt.z;
	v[3] = b.x + obj->m_vExt.x;
	float ey = obj->m_vExt.y;
	float ez = obj->m_vExt.z;
	v[4] = ey + b.y;
	v[5] = ez + b.z;
	return sub_100dae30(*(Vec3 *)&v[0], *(Vec3 *)&v[3], obj->m_vMin, obj->m_vMax, margin);
}
// END FUNCTION

// FUNCTION: 0x100db300 size=0x57
#include "Vector.h"
struct RayView10240ac0 { Vector m_vecStart; Vector m_vecDelta; };
struct PlaneView10240ac0 { Vector m_vecNormal; float m_flDist; };

float sub_100db300(const RayView10240ac0 *pRay, const PlaneView10240ac0 *pPlane)
{
	float denom = DotProduct(pRay->m_vecDelta, pPlane->m_vecNormal);
	if (denom == 0.0f)
		return 0.0f;
	return (1.0f / denom) * (pPlane->m_flDist - DotProduct(pRay->m_vecStart, pPlane->m_vecNormal));
}
// END FUNCTION

// FUNCTION: 0x100db360 size=0x5a
struct SVec3 { float x, y, z; };
struct SPlane1024 { float nx, ny, nz, d; };

float sub_100db360(const SVec3 *pOrigin, const SVec3 *pDir, const SPlane1024 *pPlane)
{
	float denom = pDir->z * pPlane->nz + pDir->y * pPlane->ny + pDir->x * pPlane->nx;
	if (denom == 0.0f)
		return 0.0f;
	return (1.0f / denom) * (pPlane->d - (pOrigin->z * pPlane->nz + pOrigin->y * pPlane->ny + pOrigin->x * pPlane->nx));
}
// END FUNCTION

// FUNCTION: 0x100db3c0 size=0x5b
struct SVec3 { float x, y, z; };

float sub_100db3c0(const SVec3 *pOrigin, const SVec3 *pDir, const SVec3 *pNormal, float flDist)
{
	float denom = pDir->z * pNormal->z + pDir->y * pNormal->y + pDir->x * pNormal->x;
	if (denom == 0.0f)
		return 0.0f;
	return (1.0f / denom) * (flDist - (pOrigin->z * pNormal->z + pOrigin->y * pNormal->y + pOrigin->x * pNormal->x));
}
// END FUNCTION

// FUNCTION: 0x100db420 size=0x44
#include "Vector.h"
float sub_100db420(const Vector &a, const Vector &b, int i, float c, float d)
{
	float t = (b[i] - a[i]) * c;
	if (t == 0.0f)
		return 0.0f;
	return (1.0f / t) * (d - a[i] * c);
}
// END FUNCTION

// FUNCTION: 0x100db470 size=0x273
#include "CGameTrace.h"
#include "Vector.h"
extern Vector g_104d4970;
void sub_100da050(const Vector &vecStart, const Vector &vecDelta, CGameTrace *pTrace);
void sub_10108fd0(const float *start, float scale, const Vector &dir, float *dest);

bool sub_100db470(const Vector &vecRayStart, const Vector &vecRayDelta, const Vector &boxMins, const Vector &boxMaxs, float flTolerance, CGameTrace *pTrace)
{
	int i;
	float d1, d2;
	float f;

	int hitside = -1;
	float enterfrac = -1.0f;
	float leavefrac = 1.0f;

	sub_100da050(vecRayStart, vecRayDelta, pTrace);
	pTrace->m_startsolid = true;

	for (i = 0; i < 6; ++i)
	{
		if (i >= 3)
		{
			d1 = pTrace->m_startpos[i - 3] - boxMaxs[i - 3];
			d2 = pTrace->m_endpos[i - 3] - boxMaxs[i - 3];
		}
		else
		{
			d1 = -pTrace->m_startpos[i] + boxMins[i];
			d2 = -pTrace->m_endpos[i] + boxMins[i];
		}

		if (d1 > 0 && d2 > 0)
		{
			pTrace->m_startsolid = false;
			return false;
		}

		if (d1 <= 0 && d2 <= 0)
			continue;

		if (d1 > 0)
			pTrace->m_startsolid = false;

		if (d1 > d2)
		{
			f = d1 - flTolerance;
			if (f < 0)
				f = 0;
			f = f / (d1 - d2);
			if (f > enterfrac)
			{
				enterfrac = f;
				hitside = i;
			}
		}
		else
		{
			f = (d1 + flTolerance) / (d1 - d2);
			if (f < leavefrac)
				leavefrac = f;
		}
	}

	if (enterfrac < leavefrac && enterfrac >= 0.0f)
	{
		pTrace->m_fraction = enterfrac;
		sub_10108fd0(pTrace->m_startpos, enterfrac, vecRayDelta, pTrace->m_endpos);
		pTrace->m_contents = 1;
		*(Vector *)pTrace->m_planeNormal = g_104d4970;
		if (hitside >= 3)
		{
			hitside -= 3;
			pTrace->m_planeDist = boxMaxs[hitside];
			pTrace->m_planeNormal[hitside] = 1.0f;
			pTrace->m_planeType = hitside;
		}
		else
		{
			pTrace->m_planeDist = -boxMins[hitside];
			pTrace->m_planeNormal[hitside] = -1.0f;
			pTrace->m_planeType = hitside;
		}
		return true;
	}

	if (pTrace->m_startsolid)
	{
		pTrace->m_allsolid = (leavefrac <= 0.0f) || (leavefrac >= 1.0f);
		pTrace->m_fraction = 0;
		*(Vector *)pTrace->m_endpos = *(Vector *)pTrace->m_startpos;
		pTrace->m_contents = 1;
		pTrace->m_planeDist = (*(Vector *)pTrace->m_startpos)[0];
		((Vector *)pTrace->m_planeNormal)->Init(1.0f, 0.0f, 0.0f);
		pTrace->m_planeType = 0;
		return true;
	}

	return false;
}
// END FUNCTION

// FUNCTION: 0x100db6f0 size=0xe4
#include "Ray_t.h"
#include "CGameTrace.h"

bool sub_100db470(const Vector &rayStart, const Vector &rayDelta, const Vector &boxMins, const Vector &boxMaxs, float flTolerance, CGameTrace *pTrace);

bool sub_100db6f0(const Ray_t &ray, const Vector &boxMins, const Vector &boxMaxs, float flTolerance, CGameTrace *pTrace)
{
	Vector vecExpandedMins = boxMins;
	Vector vecExpandedMaxs = boxMaxs;
	if (!ray.m_IsRay)
	{
		vecExpandedMins -= *(const Vector *)ray.m_StartOffset;
		vecExpandedMaxs += *(const Vector *)ray.m_StartOffset;
	}

	bool bIntersects = sub_100db470(*(const Vector *)ray.m_Start, *(const Vector *)ray.m_Delta, vecExpandedMins, vecExpandedMaxs, flTolerance, pTrace);

	if (!ray.m_IsRay)
	{
		*(Vector *)pTrace->m_startpos += *(const Vector *)ray.m_Extents;
		*(Vector *)pTrace->m_endpos += *(const Vector *)ray.m_Extents;
	}
	return bIntersects;
}
// END FUNCTION

// FUNCTION: 0x100dbb00 size=0xe7
#include "Vector.h"

extern Vector g_104d5190;
void sub_101094b0(const Vector *pAngles, const Vector *pOrigin, float *pMatrix);
void sub_100db470(int a, int b, const Vector *pMins, const Vector *pMaxs, int c, int d);
void sub_100db7e0(int a, int b, const float *pMatrix, const Vector *pMins, const Vector *pMaxs, int c, int d);

void sub_100dbb00(int a, int b, const Vector *pOrigin, const Vector *pAngles, const Vector *pMins, const Vector *pMaxs, int c, int d)
{
	if (*pAngles == g_104d5190) {
		Vector vecMins;
		Vector vecMaxs;
		VectorAdd(*pOrigin, *pMins, vecMins);
		VectorAdd(*pOrigin, *pMaxs, vecMaxs);
		sub_100db470(a, b, &vecMins, &vecMaxs, c, d);
	} else {
		float matrix[12];
		sub_101094b0(pAngles, pOrigin, matrix);
		sub_100db7e0(a, b, matrix, pMins, pMaxs, c, d);
	}
}
// END FUNCTION

// FUNCTION: 0x100dc610 size=0x113
#include "Vector.h"

struct CObjX { char pad[0xc]; char pad2[0x24]; };
struct matrix3x4_t { float m[12]; };

extern Vector g_104d5190;
void sub_100db6f0(CObjX *, const Vector *, const Vector *, int, int);
void sub_100dbb00(CObjX *, CObjX *, const Vector *, const Vector *, const Vector *, const Vector *, int, int);
void sub_101094b0(const Vector *, const Vector *, matrix3x4_t *);
void sub_100dbbf0(CObjX *, matrix3x4_t *, const Vector *, const Vector *, int, int);

struct CObjY { char pad[0x30]; char flag; };

void sub_100dc610(CObjY *p, const Vector *a1, const Vector *a2, const Vector *a3, const Vector *a4, int a5, int a6)
{
    if (*a2 == g_104d5190) {
        Vector vA, vB;
        VectorAdd(*a1, *a3, vA);
        VectorAdd(*a1, *a4, vB);
        sub_100db6f0((CObjX *)p, &vA, &vB, a5, a6);
        return;
    }
    if (p->flag) {
        sub_100dbb00((CObjX *)p, (CObjX *)((char *)p + 0xc), a1, a2, a3, a4, a5, a6);
        return;
    }
    matrix3x4_t m;
    sub_101094b0(a2, a1, &m);
    sub_100dbbf0((CObjX *)p, &m, a3, a4, a5, a6);
}
// END FUNCTION

// FUNCTION: 0x100dd3a0 size=0xb7
#include "Vector.h"
struct S2D { float x, y; };

inline void VectorLerpIdx(const Vector &src1, const Vector &src2, vec_t t, Vector &dest)
{
	dest[0] = src1[0] + (src2[0] - src1[0]) * t;
	dest[1] = src1[1] + (src2[1] - src1[1]) * t;
	dest[2] = src1[2] + (src2[2] - src1[2]) * t;
}

void sub_100dd3a0(const Vector &p1, const Vector &p2, const Vector &p3, const Vector &p4, const S2D &frac, Vector &out)
{
	Vector t[2];
	VectorLerpIdx(p1, p4, frac.y, t[0]);
	VectorLerpIdx(p2, p3, frac.y, t[1]);
	VectorLerpIdx(t[0], t[1], frac.x, out);
}
// END FUNCTION

// FUNCTION: 0x100dd460 size=0x86
struct Vector2D
{
	float x, y;
	float &operator[](int i) { return ((float *)this)[i]; }
	float operator[](int i) const { return ((float *)this)[i]; }
};

inline void Vector2DLerp(const Vector2D &src1, const Vector2D &src2, float t, Vector2D &dest)
{
	dest[0] = src1[0] + (src2[0] - src1[0]) * t;
	dest[1] = src1[1] + (src2[1] - src1[1]) * t;
}

// TARGET: sub_100dd460
void sub_100dd460(const Vector2D &p1, const Vector2D &p2, const Vector2D &p3, const Vector2D &p4, const Vector2D &t, Vector2D &out)
{
	Vector2D edge[2];
	Vector2DLerp(p1, p4, t.y, edge[0]);
	Vector2DLerp(p2, p3, t.y, edge[1]);
	Vector2DLerp(edge[0], edge[1], t.x, out);
}
// END FUNCTION

// FUNCTION: 0x100dd4f0 size=0x76
#include "Vector.h"

void sub_10108fd0(const Vector &a, int b, const Vector &c, Vector *out);

// TARGET: sub_100dd4f0
void sub_100dd4f0(const Vector &a1, const Vector &a2, const Vector &a3, int a4, int a5, Vector *a6)
{
	Vector d1, d2;
	VectorSubtract(a2, a1, d1);
	VectorSubtract(a3, a1, d2);
	sub_10108fd0(a1, a4, d1, a6);
	sub_10108fd0(*a6, a5, d2, a6);
}
// END FUNCTION

// FUNCTION: 0x100dd570 size=0x61
struct V2 { float x, y; };
void sub_100dd570(const V2 *p0, const V2 *p1, const V2 *p2, float s, float t, V2 *out)
{
	V2 d1, d2;
	d1.x = p1->x - p0->x; d1.y = p1->y - p0->y;
	d2.x = p2->x - p0->x; d2.y = p2->y - p0->y;
	out->x = d1.x * s + p0->x;
	out->y = d1.y * s + p0->y;
	out->x = d2.x * t + out->x;
	out->y = d2.y * t + out->y;
}
// END FUNCTION

// FUNCTION: 0x100dd5e0 size=0x10e
#include "matrix3x4_t.h"

void sub_100dd790(const Vector &a, const Vector &b, const Vector &c, const Vector &d, matrix3x4_t &out);
void sub_100dd6f0(const Vector &a, const Vector &b, const Vector &c, const Vector &d, matrix3x4_t &out);
void sub_100dd830(const matrix3x4_t &m0, const matrix3x4_t &m1, const Vector &v0, const Vector &v1, int p9, int p10);

void sub_100dd5e0(const Vector &a1, const Vector &a2, const Vector &a3, const Vector &a4,
	const Vector &b1, const Vector &b2, const Vector &b3, const Vector &b4, int p9, int p10)
{
	matrix3x4_t m0;
	matrix3x4_t m1;
	sub_100dd790(a1, a2, a3, a4, m0);
	sub_100dd6f0(b1, b2, b3, b4, m1);
	Vector v0, v1;
	VectorSubtract(a4, a3, v0);
	VectorSubtract(b4, b3, v1);
	v0 *= 0.5f;
	v1 *= 0.5f;
	sub_100dd830(m0, m1, v0, v1, p9, p10);
}
// END FUNCTION

// FUNCTION: 0x100dd6f0 size=0x9c
#include "matrix3x4_t.h"
#include "Vector.h"

void sub_101094e0(const Vector &angles, matrix3x4_t &matrix);
void sub_101080e0(const Vector &in, const matrix3x4_t &matrix, Vector &out);
void sub_10108540(const Vector &in, int column, matrix3x4_t &matrix);

void sub_100dd6f0(const Vector &origin, const Vector &angles, const Vector &mins, const Vector &maxs, matrix3x4_t &matrix)
{
	Vector vecWorld;
	Vector vecCenter;
	VectorAdd(mins, maxs, vecCenter);
	VectorScale(vecCenter, 0.5f, vecCenter);
	sub_101094e0(angles, matrix);
	sub_101080e0(vecCenter, matrix, vecWorld);
	vecWorld += origin;
	sub_10108540(vecWorld, 3, matrix);
}
// END FUNCTION

// FUNCTION: 0x100df0f0 size=0x9b
#include "Vector.h"

bool sub_100df0f0(float edgeY, float edgeX, float absEdgeY, float absEdgeX, const Vector &p2, const Vector &p3, const Vector &extents, float flEpsilon)
{
	float dist2 = edgeY * p2.x - edgeX * p2.y;
	float dist3 = edgeY * p3.x - edgeX * p3.y;

	float distBox = absEdgeY * extents.x + absEdgeX * extents.y;

	if( dist3 < dist2 )
	{
		if( ( dist3 > ( distBox + flEpsilon ) ) || ( dist2 < -( distBox + flEpsilon ) ) )
			return false;
	}
	else
	{
		if( ( dist2 > ( distBox + flEpsilon ) ) || ( dist3 < -( distBox + flEpsilon ) ) )
			return false;
	}

	return true;
}
// END FUNCTION

// FUNCTION: 0x100df190 size=0x24
struct CUnknown10753434
{
    virtual void a0();
    virtual void a1();
    virtual void a2();
    virtual void vfunc3();
    int m_pad4;
    CUnknown10753434 *m_pNext;	// +0x8
};

extern CUnknown10753434 *g_104cf3d4;
extern int g_104cf3d8;

// TARGET: sub_100df190
void sub_100df190(int a)
{
    g_104cf3d8 = a;
    CUnknown10753434 *p = g_104cf3d4;
    while (p != 0)
    {
        CUnknown10753434 *next = p->m_pNext;
        p->vfunc3();
        p = next;
    }
}
// END FUNCTION

// FUNCTION: 0x100df1c0 size=0x1d
namespace lifted {
extern char g_102348c8;
}
struct CUnknown102454e0 { void * sub_100df1c0(); };
void * CUnknown102454e0::sub_100df1c0()
{
    *(int *)this = (int)&lifted::g_102348c8;
    *(int *)((char *)this + 4) = 0;
    *(char *)((char *)this + 0xc) = 0;
    *(int *)((char *)this + 0x10) = 0;
    *(int *)((char *)this + 0x14) = 0;
    *(int *)((char *)this + 0x18) = 0;
    *(int *)((char *)this + 8) = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x100df200 size=0x25
#include "ConCommandBase.h"

extern char vt_102348c8[];

// TARGET: sub_100df200
ConCommandBase *ConCommandBase::sub_100df200(const char *pszName, const char *pszHelp, int nFlags)
{
    *(void **)this = vt_102348c8;
    vfunc2(pszName, pszHelp, nFlags);
    return this;
}
// END FUNCTION

// FUNCTION: 0x100df2c0 size=0x3d
int sub_101e28e0(const char *, const char *);

struct CUnk10245660Node {
    const char *sub_100df330();
    CUnk10245660Node *sub_100df3a0();
};

CUnk10245660Node *sub_100df300();

CUnk10245660Node *sub_100df2c0(const char *pName)
{
    CUnk10245660Node *pNode;

    pNode = sub_100df300();
    while (pNode != 0) {
        if (sub_101e28e0(pName, pNode->sub_100df330()) == 0) {
            return pNode;
        }
        pNode = pNode->sub_100df3a0();
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100df340 size=0x38
struct CUnknown10245720Node
{
    char pad0000[8];
    CUnknown10245720Node *pNext;
    char pad000c[0x18 - 0xc];
    unsigned int flags;
};

extern CUnknown10245720Node *g_104cf3d4;

// TARGET: sub_100df340
void sub_100df340(unsigned int mask)
{
    CUnknown10245720Node *pKeep = 0;
    CUnknown10245720Node *pNode = g_104cf3d4;
    while (pNode != 0)
    {
        CUnknown10245720Node *pNext = pNode->pNext;
        if ((mask & pNode->flags) == 0)
        {
            pNode->pNext = pKeep;
            pKeep = pNode;
        }
        else
        {
            pNode->pNext = 0;
        }
        pNode = pNext;
    }
    g_104cf3d4 = pKeep;
}
// END FUNCTION

// FUNCTION: 0x100df3a0 size=0x4
struct CUnknown100df3a0 { int sub_100df3a0(); };
int CUnknown100df3a0::sub_100df3a0()
{
    return *(int *)((char *)this + 8);
}
// END FUNCTION

// FUNCTION: 0x100df3c0 size=0x49
#include <string.h>
char *__stdcall sub_100df3c0(char *s)
{
	int n = strlen(s);
	if (n <= 0) {
		char *q = new char[1];
		*q = 0;
		return q;
	}
	char *p = new char[n + 1];
	strcpy(p, s);
	return p;
}
// END FUNCTION

// FUNCTION: 0x100df4c0 size=0x3
int sub_100df4c0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100df6f0 size=0x18
struct CUnk10245c80 {
    char pad[0x20];
    int m_20;
    char pad2[0x40 - 0x24];
    void (__cdecl *m_40)(void *, int);
    void sub_100df6f0(void (__cdecl *fn)(void *, int));
};

void CUnk10245c80::sub_100df6f0(void (__cdecl *fn)(void *, int))
{
    m_40 = fn;
    if (fn)
        fn(this, m_20);
}
// END FUNCTION

// FUNCTION: 0x100dfae0 size=0x26
struct CNode102461d0
{
	virtual bool vfunc0();
	virtual bool vfunc1();
	int m_unk4;	// +4
	CNode102461d0 *m_pNext8;	// +8
	void sub_100dfad0();
};

extern CNode102461d0 *g_104cf3d4;

// TARGET: sub_100dfae0
void sub_100dfae0()
{
	for (CNode102461d0 *p = g_104cf3d4; p; p = p->m_pNext8)
	{
		if (!p->vfunc1())
			p->sub_100dfad0();
	}
}
// END FUNCTION

// FUNCTION: 0x100dfb60 size=0x1
void sub_100dfb60()
{
}
// END FUNCTION

// FUNCTION: 0x100dfb70 size=0x1
void sub_100dfb70()
{
}
// END FUNCTION

// FUNCTION: 0x100dff10 size=0x4
struct CUnknown100dff10 { char * sub_100dff10(); };
char * CUnknown100dff10::sub_100dff10()
{
    return (char *)this + 4;
}
// END FUNCTION

// FUNCTION: 0x100dff20 size=0x4
struct CUnknown100dff20 { char * sub_100dff20(); };
char * CUnknown100dff20::sub_100dff20()
{
    return (char *)this + 0x10;
}
// END FUNCTION

// FUNCTION: 0x100dfff0 size=0x3
char sub_100dfff0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100e0000 size=0x3
char sub_100e0000()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100e0010 size=0x3
char sub_100e0010()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100e0020 size=0x5
int __stdcall sub_100e0020(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100e00f0 size=0x1
void sub_100e00f0()
{
}
// END FUNCTION

// FUNCTION: 0x100e0100 size=0x1
void sub_100e0100()
{
}
// END FUNCTION

// FUNCTION: 0x100e0110 size=0x4
struct CUnknown100e0110 { int sub_100e0110(); };
int CUnknown100e0110::sub_100e0110()
{
    return *(int *)((char *)this + 0x34);
}
// END FUNCTION

// FUNCTION: 0x100e0240 size=0x3
char sub_100e0240()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100e1040 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100e1040()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100e1290 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_100e1290()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100e12c0 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100e12c0(int num);
};

// TARGET: UtlMem::sub_100e12c0
void UtlMem::sub_100e12c0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x100e13a0 size=0x4
struct CUnknown100e13a0 { char * sub_100e13a0(); };
char * CUnknown100e13a0::sub_100e13a0()
{
    return (char *)this + -4;
}
// END FUNCTION

// FUNCTION: 0x100e15d0 size=0x1
void sub_100e15d0()
{
}
// END FUNCTION

// FUNCTION: 0x100e21f0 size=0x144
#include "utlrbtree.h"
#include "CBaseEntityList.h"

extern void *vt_10234ad4[];
extern void (*g_101e30fc)(void *);

inline void ListRemoveAll(CBaseEntityListLL *p)
{
    if (p->m_NumAlloced) {
        unsigned short prev = CBaseEntityListLL::InvalidIndex();
        for (int i = (int)p->m_NumAlloced; --i >= 0; ) {
            p->InternalElement(i).m_Next = prev;
            p->InternalElement(i).m_Previous = i;
            prev = i;
        }
        p->m_FirstFree = 0;
        p->m_Head = CBaseEntityListLL::InvalidIndex();
        p->m_Tail = CBaseEntityListLL::InvalidIndex();
        p->m_ElementCount = 0;
    }
}

inline void ListPurge(CBaseEntityListLL *p)
{
    if (p->m_growSize != -1) {
        if (p->m_pMemory) {
            g_101e30fc(p->m_pMemory);
            p->m_pMemory = 0;
        }
        p->m_allocationCount = 0;
    }
}

void CBaseEntityList::sub_100e21f0()
{
    unsigned short i = m_Live.m_Head;
    *(void **)this = vt_10234ad4;
    while (i != CBaseEntityListLL::InvalidIndex()) {
        unsigned short element = m_Live.InternalElement(i).m_Element;
        unsigned short next = m_Live.InternalElement(i).m_Next;
        sub_100e2590(element);
        i = next;
    }
    {
        CBaseEntityListLL *pSecond = &m_Second;
        ListRemoveAll(pSecond);
        ListPurge(pSecond);
    }
    {
        CBaseEntityListLL *pLive = &m_Live;
        ListRemoveAll(pLive);
        ListPurge(pLive);
    }
}
// END FUNCTION

// FUNCTION: 0x100e2590 size=0x1ec
#include "utlrbtree.h"
#include "utlvector.h"
#include "CBaseEntityList.h"
#include "CUtlLinkedList6.h"
#include "CBaseHandle.h"
struct S100fa600 { void sub_100e2970(int n); };
struct EntView { virtual void v0(int *p); };
struct ListView { virtual void v0(int, int); virtual void v1(void *pEnt, CBaseHandle h); };
extern void (__cdecl *g_101e310c)(const char *, ...);
struct LL6 : CUtlLinkedList6 {
	CUtlLinkedList6Node &InternalElement(unsigned short i) { return m_pMemory[i]; }
	CUtlLinkedList6Node &InternalElementW(unsigned short i) { return *(CUtlLinkedList6Node *)((char *)m_pMemory + i * sizeof(CUtlLinkedList6Node)); }
	unsigned short Alloc()
	{
		unsigned short elem;
		if (m_FirstFree == InvalidIndex()) {
			if (m_TotalElements == m_allocationCount)
				((S100fa600 *)this)->sub_100e2970(1);
			elem = m_TotalElements;
			++m_TotalElements;
			if (elem == InvalidIndex())
				g_101e310c("CUtlLinkedList overflow!\n");
		} else {
			elem = m_FirstFree;
			m_FirstFree = InternalElement(m_FirstFree).m_Next;
		}
		InternalElementW(elem).m_Next = InternalElementW(elem).m_Previous = elem;
		m_pElements = m_pMemory;
		return elem;
	}
	void LinkToTail(unsigned short elem)
	{
		sub_100e27a0(elem);
		CUtlLinkedList6Node &newElem = InternalElement(elem);
		newElem.m_Next = InvalidIndex();
		newElem.m_Previous = m_Tail;
		m_Tail = elem;
		if (newElem.m_Previous == InvalidIndex())
			m_Head = elem;
		else
			InternalElement(newElem.m_Previous).m_Next = elem;
		++m_ElementCount;
	}
};
void CBaseEntityList::sub_100e2590(unsigned int element)
{
	CBaseEntityListEntry *pEntry = &*(m_EntPtrArray + (int)element);
	if (!(pEntry->m_pEntity)) return; int hTmp = -1;
		((EntView *)pEntry->m_pEntity)->v0(&hTmp);
		int t0; int t1 = pEntry->m_SerialNumber; t0 = t1; ((ListView *)this)->v1(pEntry->m_pEntity, CBaseHandle(element, t0));
		pEntry->m_SerialNumber = pEntry->m_SerialNumber + 1;
		pEntry->m_pEntity = 0;
		((CUtlLinkedList6 *)&m_Live)->Remove(*(unsigned short *)&pEntry->m_pad);
		if ((int)element >= 0x800) {
			unsigned short newElem;
			LL6 *l = (LL6 *)&m_Second; newElem = l->Alloc();
			l->LinkToTail(newElem);
			unsigned short *pe = &l->Element(newElem);
			if (pe)
				*pe = (unsigned short)element;
		}
}
// END FUNCTION

// FUNCTION: 0x100e27a0 size=0x99
#include "CUtlLinkedList6.h"

void CUtlLinkedList6::sub_100e27a0(unsigned short i)
{
	Unlink(i);
}
// END FUNCTION

// FUNCTION: 0x100e2840 size=0x106
#include "utlrbtree.h"
#include "CUtlLinkedList6.h"

extern "C" __declspec(dllimport) void Error(const char *fmt, ...);

unsigned short CUtlLinkedList6::sub_100e2840(bool multilist)
{
	unsigned short elem;
	if (m_FirstFree == InvalidIndex())
	{
		if (m_TotalElements == m_allocationCount)
		{
			if (m_growSize != -1)
			{
				int nAllocationRequested = m_allocationCount + 1;
				while (m_allocationCount < nAllocationRequested)
				{
					if (m_allocationCount != 0)
					{
						if (m_growSize)
							m_allocationCount += m_growSize;
						else
							m_allocationCount += m_allocationCount;
					}
					else
						m_allocationCount = (31 + sizeof(CUtlLinkedList6Node)) / sizeof(CUtlLinkedList6Node);
				}
				if (m_pMemory)
					m_pMemory = (CUtlLinkedList6Node *)_imp__Plat_Realloc(m_pMemory, m_allocationCount * sizeof(CUtlLinkedList6Node));
				else
					m_pMemory = (CUtlLinkedList6Node *)_imp__Plat_Alloc(m_allocationCount * sizeof(CUtlLinkedList6Node));
			}
		}
		elem = m_TotalElements;
		++m_TotalElements;
		if (elem == InvalidIndex())
			Error("CUtlLinkedList overflow!\n");
	}
	else
	{
		elem = m_FirstFree;
		m_FirstFree = InternalElement(m_FirstFree).m_Next;
	}
	if (!multilist)
		InternalElement(elem).m_Next = InternalElement(elem).m_Previous = elem;
	else
		InternalElement(elem).m_Next = InternalElement(elem).m_Previous = InvalidIndex();
	m_pElements = m_pMemory;
	return elem;
}
// END FUNCTION

// FUNCTION: 0x100e2970 size=0x68
extern void *(*g_101e3104)(void *, int);
extern void *(*g_101e3100)(int);
struct S100fa600 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_100e2970(int num);
};
// TARGET: S100fa600::sub_100e2970
void S100fa600::sub_100e2970(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 6;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_101e3104(m_pMemory, m_nAllocationCount * 6);
    else
        m_pMemory = g_101e3100(m_nAllocationCount * 6);
}
// END FUNCTION

// FUNCTION: 0x100e2a10 size=0xc1
#include "CUnknown100fde30.h"

CUnknown100fde30 *CUnknown100fde30::sub_100e2a10()
{
	((CUniformRandomStream *)m_stream1)->CUniformRandomStream::CUniformRandomStream();
	((CUniformRandomStream *)m_stream2)->CUniformRandomStream::CUniformRandomStream();
	m_rec1.CUnknown100fde30Rec::CUnknown100fde30Rec();
	m_rec2.CUnknown100fde30Rec::CUnknown100fde30Rec();
	m_field170 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x100e2ae0 size=0x129
#include "utlrbtree.h"
#include "CUnknown100fde30.h"

extern CUnknown100fde30Owner *sub_10135100();
extern void (*g_101e30fc)(void *);

inline void ListRemoveAll(CUnknown100fde30List *p)
{
    if (p->m_NumAlloced) {
        unsigned short prev = CUnknown100fde30List::InvalidIndex();
        for (int i = (int)p->m_NumAlloced; --i >= 0; ) {
            p->InternalElement(i).m_Next = prev;
            p->InternalElement(i).m_Previous = i;
            prev = i;
        }
        p->m_FirstFree = 0;
        p->m_Head = CUnknown100fde30List::InvalidIndex();
        p->m_Tail = CUnknown100fde30List::InvalidIndex();
        p->m_ElementCount = 0;
    }
}

inline void ListPurge(CUnknown100fde30List *p)
{
    if (p->m_growSize != -1) {
        if (p->m_pMemory) {
            g_101e30fc(p->m_pMemory);
            p->m_pMemory = 0;
        }
        p->m_allocationCount = 0;
    }
}

void CUnknown100fde30::sub_100e2ae0()
{
    CUnknown100fde30List *pList1 = List1();
    CUnknown100fde30List *pList2 = List2();
    if (m_field170)
        sub_10135100()->vfunc5(m_field170);
    ListRemoveAll(pList2);
    ListPurge(pList2);
    ListRemoveAll(pList1);
    ListPurge(pList1);
}
// END FUNCTION

// FUNCTION: 0x100e2c10 size=0x6b
#include "CUnknown100fe0c0.h"

void CUnknown100fe0c0::sub_100e2c10(int a0, int a1, float a2, int a3, float a4)
{
    m_54 = a0;
    m_38 = a2;
    m_4c = m_50 = 1.0f;
    m_40 = a2;
    m_3c = a2;
    *(float *)&m_0 = a2;
    m_4 = a1;
    m_58.vfunc0(a1);
    m_e4.vfunc0(a1);
    m_30 = a3;
    m_28 = a3;
    *(float *)&m_34 = a4;
    m_2c = a4;
    m_44 = a4;
    m_48 = 1;
}
// END FUNCTION

// FUNCTION: 0x100e2c80 size=0x68
#include "CUnknown100fe0c0.h"

// TARGET: CUnknown100fe0c0::sub_100e2c80
void CUnknown100fe0c0::sub_100e2c80(float flTime)
{
	while (flTime >= m_38) {
		m_4c = m_e4.vfunc1(-10.0f, 10.0f);
		m_50 = m_e4.vfunc1(-0.2f, 0.2f) + 1.0;
		m_38 += 0.1f;
	}
}
// END FUNCTION

// FUNCTION: 0x100e2fa0 size=0x1f
extern float g_104cf544;
extern float g_104cf548;
extern float g_104cf54c;

void sub_100e2fa0()
{
    g_104cf544 = 0.0f;
    g_104cf548 = 0.0f;
    g_104cf54c = 0.0f;
}
// END FUNCTION

// FUNCTION: 0x100e2fc0 size=0x1f
namespace lifted {
extern float g_104cf544;
extern int g_104cf548;
extern int g_104cf54c;
}
int sub_100e2fc0(int a0, int a1)
{
    *(float *)((char *)a1) = lifted::g_104cf544;
    *(int *)((char *)a1 + 4) = lifted::g_104cf548;
    *(int *)((char *)a1 + 8) = lifted::g_104cf54c;
    return a1;
}
// END FUNCTION

// FUNCTION: 0x100e2fe0 size=0x10b
void sub_100e30f0();
extern char g_104cf751;
extern char g_104cf550[];
extern char g_104cf650[];

char *sub_100e2fe0(char *data, char *token, char *quoted)
{
    int c;
    int len;
    char *brk;
    if (quoted)
        *quoted = 0;
    if (!data)
        return 0;
    sub_100e30f0();
    brk = g_104cf550;
    if (!g_104cf751)
        brk = g_104cf650;
    len = 0;
    token[0] = 0;
skip:
    c = *data;
    while (c <= 32) {
        if (c == 0)
            return 0;
        c = *++data;
    }
    if (c == '/') {
        if (data[1] == '/') {
            while (*data && *data != '\n')
                data++;
        } else if (data[1] == '*') {
            data += 2;
            while (*data) {
                if (*data == '*' && data[1] == '/') {
                    data += 2;
                    break;
                }
                data++;
            }
        } else
            goto single;
        goto skip;
    }
    if (c == '"') {
        if (quoted)
            *quoted = 1;
        data++;
        for (;;) {
            c = *data++;
            if (c == '\\') {
                if (*data == '"') {
                    c = '"';
                    data++;
                }
            } else if (c == '"' || c == 0)
                break;
            token[len++] = c;
        }
        token[len] = 0;
        return data;
    }
single:
    if (brk[c]) {
        token[0] = c;
        token[1] = 0;
        return data + 1;
    }
    do {
        data++;
        token[len++] = c;
        c = *data;
        if (brk[c])
            break;
    } while (c > 32);
    token[len] = 0;
    return data;
}
// END FUNCTION

// FUNCTION: 0x100e6ce0 size=0x7f
#include <stdarg.h>
struct IFileSys {
    virtual void *Open(const char *file, const char *mode, const char *pathId);
    virtual void Close(void *h);
    virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual int FPrintf(void *h, const char *fmt, ...);
};
extern IFileSys *g_104a580c;
extern int (*g_101e31a8)(char *, int, const char *, char *);
extern char g_102bb1f0[];
extern char g_102bb1ec[];
extern char g_1028653c[];
void sub_100e6ce0(const char *file, const char *fmt, ...)
{
    char buf[1024];
    va_list ap;
    if (!file)
        file = g_102bb1f0;
    va_start(ap, fmt);
    g_101e31a8(buf, 1024, fmt, ap);
    void *h = g_104a580c->Open(file, g_102bb1ec, 0);
    if (h) {
        g_104a580c->FPrintf(h, g_1028653c, buf);
        g_104a580c->Close(h);
    }
}
// END FUNCTION

// FUNCTION: 0x100e6ea0 size=0x5
char __stdcall sub_100e6ea0(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100e91e0 size=0x1a4
#include "Ray_t.h"
#include <math.h>

struct Ray_tView {
	Vector m_Start;
	Vector m_Delta;
	Vector m_StartOffset;
	Vector m_Extents;
	bool m_IsRay;
	bool m_IsSwept;
	char m_b32;
	char m_b33;
	float m_f34;
};

void Ray_t::sub_100e91e0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b)
{
	const Vector &end = *(const Vector *)pEnd;
	Ray_tView *r = (Ray_tView *)this;
	const Vector &mins = *(const Vector *)pMins;
	const Vector &maxs = *(const Vector *)pMaxs;
	VectorSubtract(end, start, r->m_Delta);
	r->m_IsSwept = (r->m_Delta.LengthSqr() != 0.0f);
	VectorSubtract(maxs, mins, r->m_Extents);
	r->m_Extents *= 0.5f;
	r->m_IsRay = (r->m_Extents.LengthSqr() < 1e-6);
	VectorAdd(mins, maxs, r->m_StartOffset);
	r->m_StartOffset *= 0.5f;
	VectorAdd(start, r->m_StartOffset, r->m_Start);
	r->m_StartOffset *= -1.0f;
	r->m_b32 = b;
	r->m_b33 = 0;
	r->m_f34 = 0.0f;
	if (a && !r->m_IsRay) {
		r->m_f34 = (float)sqrt((r->m_Extents.x * r->m_Extents.x) + (r->m_Extents.y * r->m_Extents.y));
		if (1e-6 < r->m_f34)
			r->m_b33 = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x100ea250 size=0x1
void sub_100ea250()
{
}
// END FUNCTION

// FUNCTION: 0x100ea590 size=0xd8
#include "CGameMovement.h"
struct SVarA { virtual void v0(); virtual bool v1(); char pad[0x24]; float f28; };
struct SRandom { virtual void v0(); virtual void v1(); virtual int RandomInt(int lo, int hi); };
struct SSound { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(const void *pos, int ch, const char *snd, float vol, int level, int flags, int pitch); };
extern SVarA *g_104cf7cc;
extern SRandom *g_104a5738;
extern SSound *g_104df784;

void CGameMovement::sub_100ea590()
{
    float vol = g_104cf7cc->v1() ? 0.0f : g_104cf7cc->f28;
    if (vol > 1.0)
        vol = 1.0f;
    int pitch = g_104a5738->RandomInt(95, 105);
    switch (g_104a5738->RandomInt(0, 3)) {
    case 0: g_104df784->v5((char *)m_pPlayer + 0x70, 6, "surfaces/wade/stepleft1.wav", vol, 75, 0, pitch); break;
    case 1: g_104df784->v5((char *)m_pPlayer + 0x70, 6, "surfaces/wade/stepleft2.wav", vol, 75, 0, pitch); break;
    case 2: g_104df784->v5((char *)m_pPlayer + 0x70, 6, "surfaces/wade/stepright1.wav", vol, 75, 0, pitch); break;
    case 3: g_104df784->v5((char *)m_pPlayer + 0x70, 6, "surfaces/wade/stepright2.wav", vol, 75, 0, pitch); break;
    }
}
// END FUNCTION

// FUNCTION: 0x100eb150 size=0x93
#include "CUnknown100353c0.h"

CUnknown100353c0 *CUnknown100353c0::sub_100eb150(const CUnknown100353c0 *o)
{
	m_w[0] = o->m_w[0];
	m_w[1] = o->m_w[1];
	m_w[2] = o->m_w[2];
	m_w[3] = o->m_w[3];
	m_w[4] = o->m_w[4];
	m_w[5] = o->m_w[5];
	m_inner = o->m_inner;
	m_x = o->m_x;
	m_y = o->m_y;
	m_z = o->m_z;
	m_p = o->m_p;
	m_q = o->m_q;
	return this;
}
// END FUNCTION

// FUNCTION: 0x100ebb50 size=0xa5
#include "CGameMovement.h"

// TARGET: CGameMovement::sub_100ebb50
int CGameMovement::sub_100ebb50(Vector &in, Vector &normal, Vector &out, float overbounce)
{
    float backoff;
    float change;
    float angle;
    int i, blocked;

    angle = normal[2];
    blocked = 0x00;
    if (angle > 0)
        blocked |= 0x01;
    if (!angle)
        blocked |= 0x02;
    backoff = DotProduct(in, normal) * overbounce;
    for (i = 0; i < 3; i++) {
        change = normal[i] * backoff;
        out[i] = in[i] - change;
        if (out[i] > -0.1 && out[i] < 0.1)
            out[i] = 0;
    }
    return blocked;
}
// END FUNCTION

// FUNCTION: 0x100ebee0 size=0x4c
#include "Vector.h"
extern int g_104cfab8[][2];
extern Vector g_104cf810[];

int sub_100ebee0(int nIndex, int server, Vector &offset)
{
	int idx;
	idx = g_104cfab8[nIndex][server]++;
	VectorCopy(g_104cf810[idx % 54], offset);
	return (idx % 54);
}
// END FUNCTION

// FUNCTION: 0x100ebf30 size=0x3
void __stdcall sub_100ebf30(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100ebf40 size=0x1
void sub_100ebf40()
{
}
// END FUNCTION

// FUNCTION: 0x100ec3a0 size=0xae
#include "CGameMovement.h"

struct IEngineTraceY { virtual int GetPointContents(const Vector &vecPosition, void *ppEntity); };
extern IEngineTraceY *g_104a582c;
extern char g_102bb1a8;

static inline float DistToSqrY(const Vector &a, const Vector &b)
{
    Vector d;
    VectorSubtract(a, b, d);
    return d.x * d.x + (d.y * d.y + d.z * d.z);
}

// TARGET: CGameMovement::sub_100ec3a0
int CGameMovement::sub_100ec3a0(const Vector &point)
{
    if (g_102bb1a8) {
        if (m_nCachedContents == -9999 || DistToSqrY(point, m_vecCachedPoint) > 1.0f) {
            m_nCachedContents = g_104a582c->GetPointContents(point, 0);
            m_vecCachedPoint = point;
        }
        return m_nCachedContents;
    }
    return g_104a582c->GetPointContents(point, 0);
}
// END FUNCTION

// FUNCTION: 0x100ecfb0 size=0x21
// TARGET: sub_100ecfb0
float __stdcall sub_100ecfb0(float a, float b)
{
    float x = a * b;
    float y = x * x * x;
    return 3.0f * x * x - (y + y);
}
// END FUNCTION

// FUNCTION: 0x100edcf0 size=0x8c
const char *sub_100edcf0(int state)
{
	if (state == 0)
		return "Jump_None";
	if (state == 2)
		return "Jump_Hop";
	if (state == 3)
		return "Jump_Hop_Up";
	if (state == 4)
		return "Jump_Hop_Down";
	if (state == 1)
		return "Jump_Leap";
	if (state == 5)
		return "Jump_Maintain";
	if (state == 6)
		return "Jump_Descent";
	if (state == 7)
		return "Jump_Falling";
	if (state == 8)
		return "Jump_Landed";
	if (state == 9)
		return "Jump_LandedInWater";
	if (state == 10)
		return "Jump_LandedHard";
	return state == 11 ? "Jump_LandedExtremelyHard" : "Invalid jump state";
}
// END FUNCTION

// FUNCTION: 0x100ee890 size=0x2e
#include "CGameStringPool.h"
#include "string_t.h"

extern CStringPool g_104cfd50;

// TARGET: sub_100ee890
string_t sub_100ee890(const char *psz)
{
	if (*psz)
	{
		char *p = g_104cfd50.sub_10137f30(psz);
		return string_t(*p ? p : 0);
	}
	return string_t(0);
}
// END FUNCTION

// FUNCTION: 0x100ee8c0 size=0x1e
struct CUnkTree12 {
	char *sub_10137dd0(int key);
};
extern CUnkTree12 g_104cfd50;

struct R1042c030 {
	char *p;
	R1042c030(char *q) { p = *q ? q : 0; }
};

// TARGET: sub_100ee8c0
R1042c030 sub_100ee8c0(int key)
{
	return R1042c030(g_104cfd50.sub_10137dd0(key));
}
// END FUNCTION

// FUNCTION: 0x100ee900 size=0x19
struct CUnk10129770
{
	char m_pad0000[0x4c];
	int m_n4c;	// 0x4c

	char sub_100ee8e0();
	int sub_100ee900();
};

// TARGET: sub_100ee900
int CUnk10129770::sub_100ee900()
{
	if (m_n4c) {
		if (!sub_100ee8e0())
			return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100efee0 size=0x8d
#include "CUtlLinkedList8.h"

void CUtlLinkedList8::sub_100efee0(unsigned short elem)
{
	if (elem < m_NumAlloced && m_pMemory[elem].m_Previous != elem) {
		CUtlLinkedList8Node *pList = m_pMemory;
		CUtlLinkedList8Node *pElem = &pList[elem];
		if (pElem->m_Previous != 0xffff)
			pList[pElem->m_Previous].m_Next = pElem->m_Next;
		else
			m_Head = pElem->m_Next;
		if (pElem->m_Next != 0xffff)
			pList[pElem->m_Next].m_Previous = pElem->m_Previous;
		else
			m_Tail = pElem->m_Previous;
		pElem->m_Previous = pElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x100eff70 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_100eff70
	void sub_100eff70(int num);
};

void CMem8b_t::sub_100eff70(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x100f10c0 size=0x4
struct CUnknown100f10c0 { float sub_100f10c0(); };
float CUnknown100f10c0::sub_100f10c0()
{
    return *(float *)((char *)this + 0x24);
}
// END FUNCTION

// FUNCTION: 0x100f2490 size=0x3
void __stdcall sub_100f2490(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100f24a0 size=0x1
void sub_100f24a0()
{
}
// END FUNCTION

// FUNCTION: 0x100f25a0 size=0x1
void sub_100f25a0()
{
}
// END FUNCTION

// FUNCTION: 0x100f2740 size=0x3
struct CUnknown100f2740 { int sub_100f2740(); };
int CUnknown100f2740::sub_100f2740()
{
    return *(int *)this;
}
// END FUNCTION

// FUNCTION: 0x100f27a0 size=0x3
void __stdcall sub_100f27a0(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x100f3f90 size=0xcb
extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);
extern void *(__cdecl *g_101e3100)(int);
extern void *(__cdecl *g_101e3104)(void *, int);

struct IntVec {
	int *pMemory;
	int allocationCount;
	int growSize;
	int size;
	int *pElements;
};
extern IntVec g_104d1038;

void sub_100f3f90(int src)
{
	int num = g_104d1038.size + 1;
	int elem = g_104d1038.size;
	if (num > g_104d1038.allocationCount && g_104d1038.growSize != -1) {
		while (g_104d1038.allocationCount < num) {
			if (g_104d1038.allocationCount) {
				if (g_104d1038.growSize)
					g_104d1038.allocationCount += g_104d1038.growSize;
				else
					g_104d1038.allocationCount += g_104d1038.allocationCount;
			} else {
				g_104d1038.allocationCount = 8;
			}
		}
		if (g_104d1038.pMemory)
			g_104d1038.pMemory = (int *)g_101e3104(g_104d1038.pMemory, g_104d1038.allocationCount * 4);
		else
			g_104d1038.pMemory = (int *)g_101e3100(g_104d1038.allocationCount * 4);
	}
	g_104d1038.size++;
	g_104d1038.pElements = g_104d1038.pMemory;
	int toMove = g_104d1038.size - elem - 1;
	if (toMove > 0)
		sub_101d0f30(g_104d1038.pMemory + num, g_104d1038.pMemory + elem, toMove * 4);
	int *p = g_104d1038.pMemory + elem;
	if (p)
		*p = src;
}
// END FUNCTION

// FUNCTION: 0x100f4060 size=0x55
#include "utlvector.h"

extern CUtlVector<void *> g_104d1038;

void sub_100f4060(void *pSystem)
{
	g_104d1038.FindAndRemove(pSystem);
}
// END FUNCTION

// FUNCTION: 0x100f40e0 size=0x94
#include "Vector.h"
struct AutoSys {
	virtual bool Init();
	AutoSys *m_pNext;
};
extern AutoSys *g_104d1050;
extern AutoSys **g_104d1038;
extern int g_104d1044;
extern "C" __declspec(dllimport) void __cdecl DevWarning(int level, const char *fmt, ...);
void sub_100f3f90(AutoSys *sys);

static inline int FindSystem(AutoSys *sys)
{
	for (int i = 0; i < g_104d1044; i++) {
		if (g_104d1038[i] == sys)
			return i;
	}
	return -1;
}

bool sub_100f40e0()
{
	for (AutoSys *p = g_104d1050; p; p = p->m_pNext) {
		if (FindSystem(p) == -1)
			sub_100f3f90(p);
		else
			DevWarning(1, "AutoGameSystem already added to game system list!!!\n");
	}
	g_104d1050 = 0;
	for (int i = 0; i < g_104d1044; i++) {
		if (!g_104d1038[i]->Init())
			return false;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x100f4200 size=0x2a
void sub_100f42a0(void *pfn);
void sub_100f4310();
extern char *g_104d104c;

// TARGET: sub_100f4200
void sub_100f4200()
{
	sub_100f42a0((void *)sub_100f4310);
	if (g_104d104c) {
		delete g_104d104c;
		g_104d104c = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100f4270 size=0x28
typedef void (__fastcall *PFN_ForEach)(void *pThis);
extern void **g_104d1038;
extern int g_104d1044;
void __cdecl sub_100f4270(PFN_ForEach pfn)
{
	for (int i = 0; i < g_104d1044; i++)
		pfn(g_104d1038[i]);
}
// END FUNCTION

// FUNCTION: 0x100f42a0 size=0x23
extern void **g_104d1038;
extern int g_104d1044;

// TARGET: sub_100f42a0
void __cdecl sub_100f42a0(void (__fastcall *pfn)(void *))
{
	for (int i = g_104d1044 - 1; i >= 0; i--) {
		pfn(g_104d1038[i]);
	}
}
// END FUNCTION

// FUNCTION: 0x100f71d0 size=0x5
namespace lifted {
int sub_100f6ce0();
}
int sub_100f71d0()
{
    return lifted::sub_100f6ce0();
}
// END FUNCTION

// FUNCTION: 0x100f71e0 size=0x5
namespace lifted {
int sub_100f6ce0();
}
int sub_100f71e0()
{
    return lifted::sub_100f6ce0();
}
// END FUNCTION

// FUNCTION: 0x100f7710 size=0x5
namespace lifted {
int sub_100f6ce0();
}
int sub_100f7710()
{
    return lifted::sub_100f6ce0();
}
// END FUNCTION

// FUNCTION: 0x100f7720 size=0x5
namespace lifted {
int sub_100f6ce0();
}
int sub_100f7720()
{
    return lifted::sub_100f6ce0();
}
// END FUNCTION

// FUNCTION: 0x100f79a0 size=0x1
void sub_100f79a0()
{
}
// END FUNCTION

// FUNCTION: 0x100f7b10 size=0x1
void sub_100f7b10()
{
}
// END FUNCTION

// FUNCTION: 0x100f7b20 size=0x1
void sub_100f7b20()
{
}
// END FUNCTION

// FUNCTION: 0x100f7d40 size=0x1
void sub_100f7d40()
{
}
// END FUNCTION

// FUNCTION: 0x100f7d50 size=0x1
void sub_100f7d50()
{
}
// END FUNCTION

// FUNCTION: 0x100f7d60 size=0x5
namespace lifted {
int sub_100f7730();
}
int sub_100f7d60()
{
    return lifted::sub_100f7730();
}
// END FUNCTION

// FUNCTION: 0x100f7d70 size=0x5
namespace lifted {
int sub_100f7730();
}
int sub_100f7d70()
{
    return lifted::sub_100f7730();
}
// END FUNCTION

// FUNCTION: 0x100f7d80 size=0x5
namespace lifted {
int sub_100f7730();
}
int sub_100f7d80()
{
    return lifted::sub_100f7730();
}
// END FUNCTION

// FUNCTION: 0x100f7d90 size=0x1
void sub_100f7d90()
{
}
// END FUNCTION

// FUNCTION: 0x100f7da0 size=0x1
void sub_100f7da0()
{
}
// END FUNCTION

// FUNCTION: 0x100f7db0 size=0x1
void sub_100f7db0()
{
}
// END FUNCTION

// FUNCTION: 0x100f7dc0 size=0x1
void sub_100f7dc0()
{
}
// END FUNCTION

// FUNCTION: 0x100f7f20 size=0x5
namespace lifted {
int sub_100f7730();
}
int sub_100f7f20()
{
    return lifted::sub_100f7730();
}
// END FUNCTION

// FUNCTION: 0x100f7f30 size=0x5
namespace lifted {
int sub_100f7730();
}
int sub_100f7f30()
{
    return lifted::sub_100f7730();
}
// END FUNCTION

// FUNCTION: 0x10102fd0 size=0x3
void __stdcall sub_10102fd0(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10104360 size=0x1a
struct CUnk1011d310
{
	int m_n0;
	int m_n4;
	int m_nLimit8;
	int m_nCurrentC;
	char m_bFlag10;

	char sub_10104360(int a);
};

// TARGET: sub_10104360
char CUnk1011d310::sub_10104360(int a)
{
	int sum = m_nCurrentC + a;
	if (sum > m_nLimit8) {
		m_bFlag10 = 1;
	}
	return m_bFlag10;
}
// END FUNCTION

// FUNCTION: 0x10106be0 size=0x7c
#include "InterfaceReg.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];
extern InterfaceReg *g_104d4050;

InterfaceReg *InterfaceReg::sub_10106be0(void *createFn, const char *pName)
{
    m_pName = pName;
    g_101e3124[*g_101e3128].name = "InterfaceReg::InterfaceReg";
    g_101e3124[*g_101e3128].ent = g_102de300;
    g_101e3124[*g_101e3128].extra = g_102de300;
    ++*g_101e3128;
    m_CreateFn = createFn;
    m_pNext = g_104d4050;
    g_104d4050 = this;
    --*g_101e3128;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10106c60 size=0xdc
#include "platform.h"
#include "InterfaceReg.h"
#include <string.h>

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
extern InterfaceReg *g_104d4050;

#pragma intrinsic(strcmp)

// TARGET: CreateInterface
DLL_EXPORT void *CreateInterface(const char *pName, int *pReturnCode)
{
	g_101e3124[*g_101e3128].a = "CreateInterface";
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	++*g_101e3128;
	for (InterfaceReg *pCur = g_104d4050; pCur; pCur = pCur->m_pNext) {
		if (strcmp(pCur->m_pName, pName) == 0) {
			if (pReturnCode)
				*pReturnCode = 0;
			void *pRet = ((void *(*)())pCur->m_CreateFn)();
			--*g_101e3128;
			return pRet;
		}
	}
	if (pReturnCode)
		*pReturnCode = 1;
	--*g_101e3128;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10106de0 size=0x65
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_101e3124;
extern int* g_101e3128;
extern char g_102be184[];
extern char g_102de300[];
extern "C" __declspec(dllimport) int __stdcall FreeLibrary(void* h);

// TARGET: sub_10106de0
void sub_10106de0(void* h)
{
	g_101e3124[*g_101e3128].a = g_102be184;
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	(*g_101e3128)++;
	if (h)
		FreeLibrary(h);
	(*g_101e3128)--;
}
// END FUNCTION

// FUNCTION: 0x10106e50 size=0x78
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
extern int (__stdcall *g_101e30d8)(int, const char *);

int sub_10106e50(int hModule)
{
    g_101e3124[*g_101e3128].a = "Sys_GetFactory";
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    (*g_101e3128)++;
    if (!hModule) {
        (*g_101e3128)--;
        return 0;
    }
    int r = g_101e30d8(hModule, "CreateInterface");
    (*g_101e3128)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10106f30 size=0x69
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
int sub_10106fa0(const char *a, const char *b);

int sub_10106f30(const char *module)
{
    g_101e3124[*g_101e3128].a = "Sys_GetFactory";
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    (*g_101e3128)++;
    int r = sub_10106fa0(module, "CreateInterface");
    (*g_101e3128)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10106fa0 size=0x6e
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
extern int (__stdcall *g_101e30d4)(const char *, const char *);
extern int (__stdcall *g_101e30d8)(int);

int sub_10106fa0(const char *a, const char *b)
{
    g_101e3124[*g_101e3128].a = "Sys_GetProcAddress";
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    (*g_101e3128)++;
    int r = g_101e30d8(g_101e30d4(a, b));
    (*g_101e3128)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10107010 size=0x81
struct SFloatPair { float lo; float range; };

extern void (*g_101e3188)(char *dest, const char *src, int count);
char *sub_101d245b(char *str, const char *delim);
double sub_101d12af(const char *str);

SFloatPair sub_10107010(const char *text)
{
    SFloatPair r;
    r.lo = 0;
    r.range = 0;
    char buf[128];
    g_101e3188(buf, text, 128);
    char *tok = sub_101d245b(buf, ",");
    if (tok) {
        r.lo = (float)sub_101d12af(tok);
        tok = sub_101d245b(0, ",");
        if (tok)
            r.range = sub_101d12af(tok) - r.lo;
    }
    return r;
}
// END FUNCTION

// FUNCTION: 0x101070a0 size=0x35
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_104a5738;

struct CUnknown1012f700
{
	float m_flMin;
	float m_flMax;
};

// TARGET: sub_101070a0
float sub_101070a0(CUnknown1012f700 *pRange)
{
	float flMin = pRange->m_flMin;
	if (pRange->m_flMax != 0.0f)
	{
		return g_104a5738->vfunc1(0.0f, pRange->m_flMax) + flMin;
	}
	return flMin;
}
// END FUNCTION

// FUNCTION: 0x10107500 size=0x43
#include "Vector.h"
#include <math.h>
float Vector::sub_10107500()
{
	float radius = (float)sqrt(x * x + y * y + z * z);
	float iradius = 1.0f / (radius + 1.192092896e-07f);
	x *= iradius;
	y *= iradius;
	z *= iradius;
	return radius;
}
// END FUNCTION

// FUNCTION: 0x10107550 size=0x41
#include "Vector.h"
#include <math.h>

void __fastcall sub_10107550(Vector *v)
{
	float radius = (float)sqrt(v->x * v->x + v->y * v->y + v->z * v->z);
	float iradius = 1.0f / (radius + 1.1920929e-7f);
	v->x *= iradius;
	v->y *= iradius;
	v->z *= iradius;
}
// END FUNCTION

// FUNCTION: 0x101075e0 size=0x28
// TARGET: sub_101075e0
float __cdecl sub_101075e0(float x)
{
	float f = 0.0f;
	__asm {
		femms
		movd mm0, dword ptr [x]
		pfrsqrt mm1, mm0
		punpckldq mm0, mm0
		pfmul mm0, mm1
		movd dword ptr [f], mm0
		femms
		fld dword ptr [f]
	}
}
// END FUNCTION

// FUNCTION: 0x10107630 size=0x8a
// TARGET: sub_10107630
#include "Vector.h"

float __fastcall sub_10107630(Vector &v)
{
    float flLen = 0.0f;
    if (v.x != 0.0f || v.y != 0.0f || v.z != 0.0f)
    {
        __asm
        {
            mov eax, v
            femms
            movq mm0, qword ptr [eax]
            movd mm1, dword ptr [eax+8]
            movq mm2, mm0
            movq mm3, mm1
            pfmul mm0, mm0
            pfmul mm1, mm1
            pfacc mm0, mm0
            pfadd mm1, mm0
            pfrsqrt mm0, mm1
            punpckldq mm1, mm1
            pfmul mm1, mm0
            pfmul mm2, mm0
            pfmul mm3, mm0
            movq qword ptr [eax], mm2
            movd dword ptr [eax+8], mm3
            movd flLen, mm1
            femms
        }
    }
    return flLen;
}
// END FUNCTION

// FUNCTION: 0x10107730 size=0xa3
// TARGET: sub_10107730
#include "Vector.h"

float __fastcall sub_10107730(Vector &v)
{
    __declspec(align(16)) Vector out;
    Vector *pout = &out;
    float flLen = 0.0f;
    if (v.x != 0.0f || v.y != 0.0f || v.z != 0.0f)
    {
        __asm
        {
            mov eax, v
            mov edx, pout
            movups xmm4, xmmword ptr [eax]
            movaps xmm1, xmm4
            mulps xmm1, xmm4
            movhlps xmm3, xmm1
            movaps xmm2, xmm1
            shufps xmm2, xmm2, 1
            addss xmm1, xmm2
            addss xmm1, xmm3
            sqrtss xmm1, xmm1
            movss flLen, xmm1
            rcpss xmm1, xmm1
            shufps xmm1, xmm1, 0
            mulps xmm4, xmm1
            movaps xmmword ptr [edx], xmm4
        }
        v = out;
    }
    return flLen;
}
// END FUNCTION

// FUNCTION: 0x101077e0 size=0x8b
// TARGET: sub_101077e0
#include "Vector.h"

void __fastcall sub_101077e0(Vector &vec)
{
    float half = 0.5f;
    float three = 3.0f;
    float oolength;
    float len2 = vec.x * vec.x + vec.y * vec.y + vec.z * vec.z + 1.1920929e-7f;
    __asm
    {
        movss xmm3, len2
        movss xmm1, half
        movss xmm2, three
        rsqrtss xmm0, xmm3
        mulss xmm3, xmm0
        mulss xmm1, xmm0
        mulss xmm3, xmm0
        subss xmm2, xmm3
        mulss xmm1, xmm2
        movss oolength, xmm1
    }
    vec.x *= oolength;
    vec.y *= oolength;
    vec.z *= oolength;
}
// END FUNCTION

// FUNCTION: 0x10107870 size=0x42
// TARGET: sub_10107870
float __cdecl sub_10107870(float *p)
{
	float f = 1.0f;
	__asm {
		mov eax, dword ptr [p]
		movss xmm5, dword ptr [f]
		movups xmm4, xmmword ptr [eax]
		movaps xmm1, xmm4
		mulps xmm1, xmm4
		movhlps xmm3, xmm1
		movaps xmm2, xmm1
		shufps xmm2, xmm2, 1
		addss xmm1, xmm2
		addss xmm1, xmm3
		maxss xmm1, xmm5
		rcpss xmm0, xmm1
		movss dword ptr [f], xmm0
		fld dword ptr [f]
	}
}
// END FUNCTION

// FUNCTION: 0x10107a00 size=0xbf
// TARGET: sub_10107a00
extern float g_10235460;
extern float g_10235430;
extern float g_10235440;
extern float g_10235420;
extern float g_102354c0;
extern float g_102354b0;
extern float g_102354a0;
extern float g_10235490;

float __cdecl sub_10107a00(float x)
{
    static const unsigned int s_mask[2] = { 0x00000000u, 0xffffffffu };
    __asm
    {
        push ecx
        movss xmm0, dword ptr [ebp+8]
        movss xmm1, dword ptr [g_10235460]
        andps xmm0, xmm1
        addss xmm0, dword ptr [g_10235430]
        mulss xmm0, dword ptr [g_10235440]
        cvttss2si ecx, xmm0
        movss xmm5, dword ptr [g_10235420]
        mov edx, ecx
        shl edx, 1Eh
        cvtsi2ss xmm1, ecx
        and edx, 80000000h
        and ecx, 1
        subss xmm0, xmm1
        movss xmm6, dword ptr [ecx*4 + s_mask]
        minss xmm0, xmm5
        movss xmm1, dword ptr [g_102354c0]
        subss xmm5, xmm0
        andps xmm5, xmm6
        movss xmm7, dword ptr [g_102354b0]
        andnps xmm6, xmm0
        mov dword ptr [ebp-4], edx
        orps xmm5, xmm6
        movss xmm0, xmm5
        mulss xmm5, xmm5
        movss xmm4, dword ptr [g_102354a0]
        movss xmm2, xmm5
        mulss xmm5, xmm1
        movss xmm1, dword ptr [g_10235490]
        addss xmm5, xmm7
        mulss xmm5, xmm2
        movss xmm3, dword ptr [ebp-4]
        addss xmm5, xmm4
        mulss xmm5, xmm2
        orps xmm0, xmm3
        addss xmm5, xmm1
        mulss xmm0, xmm5
        movss dword ptr [ebp+8], xmm0
        fld dword ptr [ebp+8]
        mov esp, ebp
    }
}
// END FUNCTION

// FUNCTION: 0x10107ac0 size=0x11e
// mathlib _SSE2_SinCos (SSE2 sin/cos), verbatim
// TARGET: sub_10107ac0
extern int g_10235460;	// _ps_am_inv_sign_mask
extern int g_10235450;	// _ps_am_sign_mask
extern int g_10235440;	// _ps_am_2_o_pi
extern int g_10235470;	// _epi32_1
extern int g_10235420;	// _ps_am_1
extern int g_10235480;	// _epi32_2
extern int g_102354c0;	// _ps_sincos_p3
extern int g_102354b0;	// _ps_sincos_p2
extern int g_102354a0;	// _ps_sincos_p1
extern int g_10235490;	// _ps_sincos_p0

void sub_10107ac0(float x, float* s, float* c)  // any x
{
	__asm
	{
		movss	xmm0, x
		movaps	xmm7, xmm0
		movss	xmm1, g_10235460
		movss	xmm2, g_10235450
		movss	xmm3, g_10235440
		andps	xmm0, xmm1
		andps	xmm7, xmm2
		mulss	xmm0, xmm3

		pxor	xmm3, xmm3
		movd	xmm5, g_10235470
		movss	xmm4, g_10235420

		cvttps2dq	xmm2, xmm0
		pand	xmm5, xmm2
		movd	xmm1, g_10235480
		pcmpeqd	xmm5, xmm3
		movd	xmm3, g_10235470
		cvtdq2ps	xmm6, xmm2
		paddd	xmm3, xmm2
		pand	xmm2, xmm1
		pand	xmm3, xmm1
		subss	xmm0, xmm6
		pslld	xmm2, (31 - 1)
		minss	xmm0, xmm4

		mov		eax, s
		mov		edx, c

		subss	xmm4, xmm0
		pslld	xmm3, (31 - 1)

		movaps	xmm6, xmm4
		xorps	xmm2, xmm7
		movaps	xmm7, xmm5
		andps	xmm6, xmm7
		andnps	xmm7, xmm0
		andps	xmm0, xmm5
		andnps	xmm5, xmm4
		movss	xmm4, g_102354c0
		orps	xmm6, xmm7
		orps	xmm0, xmm5
		movss	xmm5, g_102354b0

		movaps	xmm1, xmm0
		movaps	xmm7, xmm6
		mulss	xmm0, xmm0
		mulss	xmm6, xmm6
		orps	xmm1, xmm2
		orps	xmm7, xmm3
		movaps	xmm2, xmm0
		movaps	xmm3, xmm6
		mulss	xmm0, xmm4
		mulss	xmm6, xmm4
		movss	xmm4, g_102354a0
		addss	xmm0, xmm5
		addss	xmm6, xmm5
		movss	xmm5, g_10235490
		mulss	xmm0, xmm2
		mulss	xmm6, xmm3
		addss	xmm0, xmm4
		addss	xmm6, xmm4
		mulss	xmm0, xmm2
		mulss	xmm6, xmm3
		addss	xmm0, xmm5
		addss	xmm6, xmm5
		mulss	xmm0, xmm1
		mulss	xmm6, xmm7

		// use full stores since caller might reload with full loads
		movss	[eax], xmm0
		movss	[edx], xmm6
	}
}
// END FUNCTION

// FUNCTION: 0x10107be0 size=0xc7
// mathlib _SSE2_cos (SSE2 cos), verbatim
// TARGET: sub_10107be0
// the game builds an ebp frame here (not in _SSE2_SinCos): frame-pointer omission off for this function
extern int g_10235460;	// _ps_am_inv_sign_mask
extern int g_10235430;	// _ps_am_pi_o_2
extern int g_10235440;	// _ps_am_2_o_pi
extern int g_10235470;	// _epi32_1
extern int g_10235420;	// _ps_am_1
extern int g_10235480;	// _epi32_2
extern int g_102354c0;	// _ps_sincos_p3
extern int g_102354b0;	// _ps_sincos_p2
extern int g_102354a0;	// _ps_sincos_p1
extern int g_10235490;	// _ps_sincos_p0

#pragma optimize("y", off)
float sub_10107be0(float x)
{
	__asm
	{
		movss	xmm0, x
		movss	xmm1, g_10235460
		movss	xmm2, g_10235430
		movss	xmm3, g_10235440
		andps	xmm0, xmm1
		addss	xmm0, xmm2
		mulss	xmm0, xmm3

		pxor	xmm3, xmm3
		movd	xmm5, g_10235470
		movss	xmm4, g_10235420
		cvttps2dq	xmm2, xmm0
		pand	xmm5, xmm2
		movd	xmm1, g_10235480
		pcmpeqd	xmm5, xmm3
		cvtdq2ps	xmm6, xmm2
		pand	xmm2, xmm1
		pslld	xmm2, (31 - 1)

		subss	xmm0, xmm6
		movss	xmm3, g_102354c0
		minss	xmm0, xmm4
		subss	xmm4, xmm0
		andps	xmm0, xmm5
		andnps	xmm5, xmm4
		orps	xmm0, xmm5

		movaps	xmm1, xmm0
		movss	xmm4, g_102354b0
		mulss	xmm0, xmm0
		movss	xmm5, g_102354a0
		orps	xmm1, xmm2
		movaps	xmm7, xmm0
		mulss	xmm0, xmm3
		movss	xmm6, g_10235490
		addss	xmm0, xmm4
		mulss	xmm0, xmm7
		addss	xmm0, xmm5
		mulss	xmm0, xmm7
		addss	xmm0, xmm6
		mulss	xmm0, xmm1
		movss   x,    xmm0
	}

	return x;
}
// END FUNCTION

// FUNCTION: 0x10107ce0 size=0x36
// TARGET: sub_10107ce0
#include "Vector.h"

int sub_10107ce0(Vector *a, Vector *b)
{
	if (a->x == b->x && a->y == b->y && a->z == b->z) {
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10107d20 size=0xc8
#include "Vector.h"
#include <math.h>

// TARGET: sub_10107d20
int sub_10107d20(const Vector &vecSphereCenter, float flRadius, const Vector &vecRayOrigin, const Vector &vecRayDelta, float *pT1, float *pT2)
{
    const Vector vecSphereToRay = vecRayOrigin - vecSphereCenter;
    float a = vecRayDelta.LengthSqr();
    float b = 2 * (vecSphereToRay.y * vecRayDelta.y + vecSphereToRay.z * vecRayDelta.z + vecSphereToRay[0] * vecRayDelta.x);
    float c = vecSphereToRay.LengthSqr() - flRadius * flRadius;
    float flDiscrim = b * b - 4 * a * c;
    if (flDiscrim <= 1e-6f)
        return 0;
    flDiscrim = sqrt(flDiscrim);
    *pT1 = (flDiscrim - b) / (a + a);
    *pT2 = (-b - flDiscrim) / (a + a);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10107df0 size=0x46
#include "matrix3x4_t.h"
struct RadianEulerV
{
	float x, y, z;
	inline void Init(float ix, float iy, float iz) { x = ix; y = iy; z = iz; }
};
void sub_10108510(int *pMatrix, int nCol, int *pOut);
void sub_10107eb0(const matrix3x4_t &matrix, float *angles);
#define DEG2RAD(x) ((float)(x) * (float)(3.14159265358979323846f / 180.f))
// TARGET: sub_10107df0
void sub_10107df0(matrix3x4_t &matrix, RadianEulerV &angles, int *pOrigin)
{
	sub_10108510((int *)&matrix, 3, pOrigin);
	sub_10107eb0(matrix, &angles.x);
	angles.Init(DEG2RAD(angles.z), DEG2RAD(angles.x), DEG2RAD(angles.y));
}
// END FUNCTION

// FUNCTION: 0x10107e40 size=0x61
struct RadianEuler10137e40
{
	float x, y, z;
	inline void Init(float ix, float iy, float iz) { x = ix; y = iy; z = iz; }
};
#define DEG2RAD10137e40(x) ((float)(x) * (float)(3.14159265358979323846f / 180.f))
void sub_10107eb0(float *pMatrix, float *pOut);
void sub_1010a790(RadianEuler10137e40 *pAngles, float *pOut);
void sub_10108510(float *pMatrix, int n, float *pOut);
inline void MatrixAngles10137e40(float *matrix, RadianEuler10137e40 &angles)
{
	sub_10107eb0(matrix, (float *)&angles);
	angles.Init(DEG2RAD10137e40(angles.z), DEG2RAD10137e40(angles.x), DEG2RAD10137e40(angles.y));
}
void sub_10107e40(float *pMatrix, float *pQuat, float *pAngles)
{
	RadianEuler10137e40 angles;
	MatrixAngles10137e40(pMatrix, angles);
	sub_1010a790(&angles, pQuat);
	sub_10108510(pMatrix, 3, pAngles);
}
// END FUNCTION

// FUNCTION: 0x10107eb0 size=0xc4
#include <math.h>
#include "matrix3x4_t.h"
#include "QAngle.h"
#pragma intrinsic(atan2, sqrt)

extern float g_10227c6c;

// TARGET: sub_10107eb0
void sub_10107eb0(const matrix3x4_t &matrix, QAngle &angles)
{
    float forward[3], left[3], up[3];
    forward[0] = matrix.m_flMatVal[0][0];
    forward[1] = matrix.m_flMatVal[1][0];
    forward[2] = matrix.m_flMatVal[2][0];
    left[0] = matrix.m_flMatVal[0][1];
    left[1] = matrix.m_flMatVal[1][1];
    left[2] = matrix.m_flMatVal[2][1];
    up[2] = matrix.m_flMatVal[2][2];
    float xyDist = sqrt(forward[0] * forward[0] + forward[1] * forward[1]);
    if (xyDist > 0.001f) {
        angles.y = atan2(forward[1], forward[0]) * g_10227c6c;
        angles.x = atan2(-forward[2], xyDist) * g_10227c6c;
        angles.z = atan2(left[2], up[2]) * g_10227c6c;
    } else {
        angles.z = 0;
        angles.y = atan2(-left[0], left[1]) * g_10227c6c;
        angles.x = atan2(-forward[2], xyDist) * g_10227c6c;
    }
}
// END FUNCTION

// FUNCTION: 0x10107f80 size=0x5c
void sub_10107f80(const float *in1, const float *in2, float *out)
{
	float t = in2[2] * in1[2];
	t += in2[1] * in1[1];
	t += in1[0] * in2[0];
	out[0] = t + in2[3];
	t = in2[6] * in1[2];
	t += in2[5] * in1[1];
	t += in2[4] * in1[0];
	out[1] = t + in2[7];
	t = in2[10] * in1[2];
	t += in2[9] * in1[1];
	t += in2[8] * in1[0];
	out[2] = t + in2[11];
}
// END FUNCTION

// FUNCTION: 0x10107fe0 size=0x9c
// mathlib VectorTransformSSE, verbatim
// TARGET: sub_10107fe0
void sub_10107fe0(const float *in1, const float (*in2)[4], float *out1)
{
	__asm
	{
		mov eax, in1;
		mov ecx, in2;
		mov edx, out1;

		movss xmm0, [eax];
		mulss xmm0, [ecx];
		movss xmm1, [eax+4];
		mulss xmm1, [ecx+4];
		movss xmm2, [eax+8];
		mulss xmm2, [ecx+8];
		addss xmm0, xmm1;
		addss xmm0, xmm2;
		addss xmm0, [ecx+12]
 		movss [edx], xmm0;
		add ecx, 16;

		movss xmm0, [eax];
		mulss xmm0, [ecx];
		movss xmm1, [eax+4];
		mulss xmm1, [ecx+4];
		movss xmm2, [eax+8];
		mulss xmm2, [ecx+8];
		addss xmm0, xmm1;
		addss xmm0, xmm2;
		addss xmm0, [ecx+12]
		movss [edx+4], xmm0;
		add ecx, 16;

		movss xmm0, [eax];
		mulss xmm0, [ecx];
		movss xmm1, [eax+4];
		mulss xmm1, [ecx+4];
		movss xmm2, [eax+8];
		mulss xmm2, [ecx+8];
		addss xmm0, xmm1;
		addss xmm0, xmm2;
		addss xmm0, [ecx+12]
		movss [edx+8], xmm0;
	}
}
// END FUNCTION

// FUNCTION: 0x10108080 size=0x5c
void sub_10108080(const float *in1, const float in2[3][4], float *out)
{
	float tx = in1[0] - in2[0][3];
	float ty = in1[1] - in2[1][3];
	float tz = in1[2] - in2[2][3];
	out[0] = tx * in2[0][0] + ty * in2[1][0] + tz * in2[2][0];
	out[1] = tx * in2[0][1] + ty * in2[1][1] + tz * in2[2][1];
	out[2] = tx * in2[0][2] + ty * in2[1][2] + tz * in2[2][2];
}
// END FUNCTION

// FUNCTION: 0x101080e0 size=0x53
inline float Dot3(const float *v1, const float *v2)
{
	float z = v1[2] * v2[2];
	float y = v1[1] * v2[1];
	float x = v1[0] * v2[0];
	return z + y + x;
}

void sub_101080e0(const float *in1, const float in2[3][4], float *out)
{
	out[0] = Dot3(in1, in2[0]);
	out[1] = Dot3(in1, in2[1]);
	out[2] = Dot3(in1, in2[2]);
}
// END FUNCTION

// FUNCTION: 0x10108140 size=0x8d
// TARGET: sub_10108140
#include "Vector.h"

void __cdecl sub_10108140(const Vector *v, const float *m, Vector *out)
{
    __asm
    {
        mov eax, dword ptr [esp+4]
        mov ecx, dword ptr [esp+8]
        mov edx, dword ptr [esp+0xc]
        movss xmm0, dword ptr [eax]
        mulss xmm0, dword ptr [ecx]
        movss xmm1, dword ptr [eax+4]
        mulss xmm1, dword ptr [ecx+4]
        movss xmm2, dword ptr [eax+8]
        mulss xmm2, dword ptr [ecx+8]
        addss xmm0, xmm1
        addss xmm0, xmm2
        movss dword ptr [edx], xmm0
        add ecx, 0x10
        movss xmm0, dword ptr [eax]
        mulss xmm0, dword ptr [ecx]
        movss xmm1, dword ptr [eax+4]
        mulss xmm1, dword ptr [ecx+4]
        movss xmm2, dword ptr [eax+8]
        mulss xmm2, dword ptr [ecx+8]
        addss xmm0, xmm1
        addss xmm0, xmm2
        movss dword ptr [edx+4], xmm0
        add ecx, 0x10
        movss xmm0, dword ptr [eax]
        mulss xmm0, dword ptr [ecx]
        movss xmm1, dword ptr [eax+4]
        mulss xmm1, dword ptr [ecx+4]
        movss xmm2, dword ptr [eax+8]
        mulss xmm2, dword ptr [ecx+8]
        addss xmm0, xmm1
        addss xmm0, xmm2
        movss dword ptr [edx+8], xmm0
    }
}
// END FUNCTION

// FUNCTION: 0x101081d0 size=0x112
// mathlib TransformAndRotate (2003 tree): Valve's hand-scheduled x87 __asm, verbatim
// TARGET: sub_101081d0
#include "Vector.h"
struct matrix3x4_t { float m_flMatVal[3][4]; const float *operator[](int i) const { return m_flMatVal[i]; } };
void sub_101081d0( const Vector &srcPos, const Vector &srcNorm, 
							const matrix3x4_t& mat, Vector &pos, Vector &norm )
{
	const float *pMat = &mat[0][0];
	const float *pPos = &srcPos.x;
	const float *pNormal = &srcNorm.x;
	float *pPosOut = &pos.x;
	float *pNormalOut = &norm.x;

	__asm
	{
		mov		eax, DWORD PTR [pMat]
		mov		edx, DWORD PTR [pPos]
		mov		ecx, DWORD PTR [pNormal]
		mov		esi, DWORD PTR [pNormalOut]
		mov		edi, DWORD PTR [pPosOut]

		fld DWORD PTR[eax + 3*4]	// m03
		fld DWORD PTR[eax + 0]		// m00		| m03
		fld DWORD PTR[edx + 0]		// pos.x		| m00		| m03
		fld DWORD PTR[ecx + 0]		// norm.x	| pos.x		| m00		| m03
		fld DWORD PTR[edx + 4]		// pos.y		| norm.x	| pos.x		| m00		| m03
		fld DWORD PTR[eax + 1*4]	// m01		| pos.y		| norm.x	| pos.x		| m00		| m03
		fld DWORD PTR[ecx + 4]		// norm.y	| m01		| pos.y		| norm.x	| pos.x		| m00		| m03

		fxch st(5)					// m00		| m01				| pos.y			| norm.x		| pos.x			| norm.y	| m03
		fmul st(4), st(0)			// m00		| m01				| pos.y			| norm.x 		| pos.x	* m00	| norm.y	| m03
		fmulp st(3), st(0)			// m01		| pos.y				| norm.x * m00	| pos.x	* m00	| norm.y		| m03
		fmul st(1), st(0)			// m01		| pos.y * m01		| norm.x * m00	| pos.x	* m00	| norm.y		| m03
		fmulp st(4), st(0)			// pos.y * m01	| norm.x * m00	| pos.x * m00	| norm.y * m01	| m03

		fld DWORD PTR[eax + 2*4]	// m02		| pos.y * m01		| norm.x * m00	| pos.x * m00		| norm.y * m01	| m03
		fld DWORD PTR[edx + 8]		// pos.z		| m02				| pos.y * m01		| norm.x * m00	| pos.x * m00		| norm.y * m01	| m03
		fld DWORD PTR[ecx + 8]		// norm.z	| pos.z					| m02				| pos.y * m01		| norm.x * m00	| pos.x * m00		| norm.y * m01	| m03

		fxch st(5)					// pos.x * m00	| pos.z							| m02						| pos.y * m01	| norm.x * m00	| norm.z				| norm.y * m01	| m03
		faddp st(3), st(0)			// pos.z			| m02							| pos.x * m00 + pos.y * m01	| norm.x * m00	| norm.z				| norm.y * m01	| m03
		fxch st(3)					// norm.x * m00	| m02							| pos.x * m00 + pos.y * m01	| pos.z			| norm.z				| norm.y * m01	| m03
		faddp st(5), st(0)			// m02			| pos.x * m00 + pos.y * m01		| pos.z						| norm.z		| norm.y * m01 + norm.x * m00		| m03
		fmul  st(2), st(0)			// m02			| pos.x * m00 + pos.y * m01		| pos.z * m02				| norm.z		| norm.y * m01 + norm.x * m00		| m03
		fmulp st(3), st(0)			// pos.x * m00 + pos.y * m01		| pos.z * m02	| norm.z * m02	| norm.y * m01 + norm.x * m00		| m03
		faddp st(4), st(0)			// pos.z * m02	| norm.z * m02	| norm.y * m01 + norm.x * m00		| pos.x * m00 + pos.y * m01	+ m03

		// NOTE: Need two more instructions before we can start using the .z stuff

		fld DWORD PTR[eax + 1*16 + 3*4]	// m13		| pos.z * m02	| norm.z * m02	| norm.y * m01 + norm.x * m00		| pos.x * m00 + pos.y * m01	+ m03
		fld DWORD PTR[eax + 1*16 + 0]	// m10		| m13		| pos.z * m02		| norm.z * m02	| norm.y * m01 + norm.x * m00	| pos.x * m00 + pos.y * m01	+ m03
		fld DWORD PTR[edx + 0]		// pos.x		| m10		| m13				| pos.z * m02	| norm.z * m02		| norm.y * m01 + norm.x * m00		| pos.x * m00 + pos.y * m01	+ m03
		fld DWORD PTR[ecx + 0]		// norm.x	| pos.x		| m10				| m13			| pos.z * m02		| norm.z * m02	| norm.y * m01 + norm.x * m00		| pos.x * m00 + pos.y * m01	+ m03

		fxch st(7)					// pos.x * m00 + pos.y * m01	+ m03 | pos.x		| m10 | m13 | pos.z * m02		| norm.z * m02	| norm.y * m01 + norm.x * m00		| norm.x
		faddp st(4), st(0)			// pos.x		| m10 | m13 | pos.x * m00 + pos.y * m01	+ pos.z * m02 + m03 	| norm.z * m02	| norm.y * m01 + norm.x * m00		| norm.x
		fxch st(5)					// norm.y * m01 + norm.x * m00		| m10 | m13 | pos.x * m00 + pos.y * m01	+ pos.z * m02 + m03 	| norm.z * m02	| pos.x		| norm.x
		faddp st(4), st(0)			// m10 | m13 | pos.x * m00 + pos.y * m01	+ pos.z * m02 + m03 	| norm.x * m00 + norm.y * m01 + norm.z * m02	| pos.x		| norm.x
		fmul st(4), st(0)			// m10 | m13 | pos.x * m00 + pos.y * m01	+ pos.z * m02 + m03 	| norm.x * m00 + norm.y * m01 + norm.z * m02	| pos.x	* m10	| norm.x
		fmulp st(5), st(0)			// m13 | pos.x * m00 + pos.y * m01	+ pos.z * m02 + m03 	| norm.x * m00 + norm.y * m01 + norm.z * m02	| pos.x	* m10	| norm.x * m10
		fxch st(2)					// norm.x * m00 + norm.y * m01 + norm.z * m02 | pos.x * m00 + pos.y * m01	+ pos.z * m02 + m03 	| m13	| pos.x	* m10	| norm.x * m10

		fstp DWORD PTR[esi]			// pos.x * m00 + pos.y * m01	+ pos.z * m02 + m03 	| m13	| pos.x	* m10	| norm.x * m10
		fstp DWORD PTR[edi]			// m13	| pos.x	* m10	| norm.x * m10

		fld DWORD PTR[eax + 1*16 + 1*4]				// m11	| m13	| pos.x	* m10	| norm.x * m10
		fld DWORD PTR[edx + 4]		// pos.y	| m11	| m13		| pos.x	* m10	| norm.x * m10
		fld DWORD PTR[ecx + 4]		// norm.y| pos.y	| m11		| m13	| pos.x	* m10	| norm.x * m10
		fld DWORD PTR[eax + 1*16 + 2*4]				// m12	| norm.y| pos.y		| m11	| m13	| pos.x	* m10	| norm.x * m10
		fld DWORD PTR[edx + 8]		// pos.z	| m12	| norm.y	| pos.y	| m11	| m13	| pos.x	* m10	| norm.x * m10

		fxch st(4)					// m11	| m12	| norm.y	| pos.y		| pos.z		| m13	| pos.x	* m10	| norm.x * m10
		fmul st(3), st(0)			// m11	| m12	| norm.y	| pos.y	* m11	| pos.z		| m13	| pos.x	* m10	| norm.x * m10
		fmulp st(2), st(0)			// m12	| norm.y * m11	| pos.y	* m11	| pos.z		| m13	| pos.x	* m10	| norm.x * m10

		fld DWORD PTR[ecx + 8]		// norm.z	| m12	| norm.y * m11	| pos.y	* m11	| pos.z		| m13	| pos.x	* m10	| norm.x * m10
		fxch st(1)					// m12	| norm.z	| norm.y * m11	| pos.y	* m11	| pos.z		| m13	| pos.x	* m10	| norm.x * m10
		fmul st(4), st(0)			// m12	| norm.z	| norm.y * m11	| pos.y	* m11	| pos.z * m12		| m13	| pos.x	* m10	| norm.x * m10
		fmulp st(1), st(0)			// norm.z * m12		| norm.y * m11	| pos.y	* m11	| pos.z * m12		| m13	| pos.x	* m10	| norm.x * m10

		fld DWORD PTR[eax + 2*16 + 3*4]				// m23	|	norm.z * m12	| norm.y * m11	| pos.y	* m11	| pos.z * m12		| m13	| pos.x	* m10	| norm.x * m10

		fxch st(6)					// pos.x	* m10	| norm.z * m12	| norm.y * m11	| pos.y	* m11	| pos.z * m12	| m13			| m23			| norm.x * m10
		faddp st(3), st(0)			// norm.z * m12	| norm.y * m11	| pos.x	* m10 + pos.y * m11	| pos.z * m12		| m13			| m23			| norm.x * m10
		fxch st(4)					// m13			| norm.y * m11	| pos.x	* m10 + pos.y * m11	| pos.z * m12		| norm.z * m12	| m23			| norm.x * m10
		faddp st(3), st(0)			// norm.y * m11	| pos.x	* m10 + pos.y * m11	| pos.z * m12 + m13	| norm.z * m12	| m23			| norm.x * m10
		faddp st(5), st(0)			// pos.x	* m10 + pos.y * m11	| pos.z * m12 + m13	| norm.z * m12	| m23			| norm.x * m10 + norm.y * m11

		fld DWORD PTR[eax + 2*16 + 0]				// m20		| pos.x	* m10 + pos.y * m11	| pos.z * m12 + m13	| norm.z * m12	| m23			| norm.x * m10 + norm.y * m11
		fld DWORD PTR[edx + 0]		// pos.x		| m20		| pos.x	* m10 + pos.y * m11	| pos.z * m12 + m13	| norm.z * m12	| m23			| norm.x * m10 + norm.y * m11
		fld DWORD PTR[ecx + 0]		// norm.x	| pos.x		| m20		| pos.x	* m10 + pos.y * m11	| pos.z * m12 + m13	| norm.z * m12	| m23			| norm.x * m10 + norm.y * m11

		fxch st(3)					// pos.x	* m10 + pos.y * m11	| pos.x		| m20		| norm.x	| pos.z * m12 + m13	| norm.z * m12	| m23			| norm.x * m10 + norm.y * m11
		faddp st(4), st(0)			// pos.x		| m20		| norm.x	| pos.x	* m10 + pos.y * m11	+ pos.z * m12 + m13	| norm.z * m12	| m23			| norm.x * m10 + norm.y * m11
		fxch st(4)					// norm.z * m12	| m20		| norm.x	| pos.x	* m10 + pos.y * m11	+ pos.z * m12 + m13	| pos.x		| m23			| norm.x * m10 + norm.y * m11
		faddp st(6), st(0)			// m20		| norm.x	| pos.x	* m10 + pos.y * m11	+ pos.z * m12 + m13	| pos.x		| m23			| norm.x * m10 + norm.y * m11 + norm.z * m12
		fmul st(3), st(0)			// m20		| norm.x	| pos.x	* m10 + pos.y * m11	+ pos.z * m12 + m13	| pos.x	* m20	| m23			| norm.x * m10 + norm.y * m11 + norm.z * m12
		fmulp st(1), st(0)			// norm.x * m20	| pos.x	* m10 + pos.y * m11	+ pos.z * m12 + m13	| pos.x	* m20	| m23			| norm.x * m10 + norm.y * m11 + norm.z * m12

		fld DWORD PTR[eax + 2*16 + 1*4]		// m21		| norm.x * m20	| pos.x	* m10 + pos.y * m11	+ pos.z * m12 + m13	| pos.x	* m20	| m23			| norm.x * m10 + norm.y * m11 + norm.z * m12
		fld DWORD PTR[edx + 4]		// pos.y		| m21		| norm.x * m20	| pos.x	* m10 + pos.y * m11	+ pos.z * m12 + m13	| pos.x	* m20	| m23			| norm.x * m10 + norm.y * m11 + norm.z * m12
		fld DWORD PTR[ecx + 4]		// norm.y	| pos.y		| m21		| norm.x * m20	| pos.x	* m10 + pos.y * m11	+ pos.z * m12 + m13	| pos.x	* m20	| m23			| norm.x * m10 + norm.y * m11 + norm.z * m12

		fxch st(4)					// pos.x	* m10 + pos.y * m11	+ pos.z * m12 + m13	| pos.y		| m21		| norm.x * m20	| norm.y	| pos.x	* m20	| m23			| norm.x * m10 + norm.y * m11 + norm.z * m12
		fstp DWORD PTR[edi + 4]		// pos.y		| m21		| norm.x * m20	| norm.y	| pos.x	* m20	| m23			| norm.x * m10 + norm.y * m11 + norm.z * m12
		fxch st(6)					// norm.x * m10 + norm.y * m11 + norm.z * m12		| m21		| norm.x * m20	| norm.y	| pos.x	* m20	| m23			| pos.y
		fstp DWORD PTR[esi + 4]		// m21		| norm.x * m20	| norm.y	| pos.x	* m20	| m23			| pos.y

		fmul st(5), st(0)			// m21			| norm.x * m20	| norm.y		| pos.x	* m20	| m23			| pos.y	* m21
		fmulp st(2), st(0)			// norm.x * m20	| norm.y * m21	| pos.x	* m20	| m23			| pos.y	* m21

		fld DWORD PTR[eax + 2*16 + 2*4]	// m22			| norm.x * m20	| norm.y * m21	| pos.x	* m20	| m23			| pos.y	* m21
		fld DWORD PTR[edx + 8]		// pos.z			| m22			| norm.x * m20	| norm.y * m21	| pos.x	* m20	| m23			| pos.y	* m21
		fld DWORD PTR[ecx + 8]		// norm.z		| pos.z			| m22			| norm.x * m20	| norm.y * m21	| pos.x	* m20	| m23			| pos.y	* m21

		fxch st(5) 					// pos.x	* m20	| pos.z			| m22			| norm.x * m20	| norm.y * m21	| norm.z		| m23			| pos.y	* m21
		faddp st(6), st(0)			// pos.z			| m22			| norm.x * m20	| norm.y * m21	| norm.z		| pos.x	* m20 + m23	| pos.y	* m21
		fxch st(2)					// norm.x * m20 	| m22			| pos.z			| norm.y * m21	| norm.z		| pos.x	* m20 + m23	| pos.y	* m21
		faddp st(3), st(0)			// m22			| pos.z			| norm.x * m20 + norm.y * m21	| norm.z		| pos.x	* m20 + m23	| pos.y	* m21
		fmul st(1), st(0)			// m22			| pos.z * m22	| norm.x * m20 + norm.y * m21	| norm.z		| pos.x	* m20 + m23	| pos.y	* m21
		fmulp st(3), st(0)			// pos.z * m22	| norm.x * m20 + norm.y * m21	| norm.z * m22	| pos.x	* m20 + m23	| pos.y	* m21
		fxch st(4)					// pos.y * m21	| norm.x * m20 + norm.y * m21	| norm.z * m22	| pos.x	* m20 + m23	| pos.z	* m22
		faddp st(3), st(0)			// norm.x * m20 + norm.y * m21	| norm.z * m22	| pos.x	* m20 + pos.y * m21 + m23	| pos.z	* m22

		// STALLS AHOY!!!

		faddp st(1), st(0)			// norm.x * m20 + norm.y * m21 + norm.z * m22	| pos.x	* m20 + pos.y * m21 + m23	| pos.z	* m22
		fxch st(2)					// pos.z	* m22									| pos.x	* m20 + pos.y * m21 + m23	| norm.x * m20 + norm.y * m21 + norm.z * m22 
		faddp st(1), st(0)			// pos.x	* m20 + pos.y * m21 + pos.z	* m22 + m23	| norm.x * m20 + norm.y * m21 + norm.z * m22 
		fxch st(1)					// norm.x * m20 + norm.y * m21 + norm.z * m22	| pos.x	* m20 + pos.y * m21 + pos.z	* m22 + m23
		fstp DWORD PTR[esi + 8]		// pos.x	* m20 + pos.y * m21 + pos.z	* m22 + m23
		fstp DWORD PTR[edi + 8]
	}
}
// END FUNCTION

// FUNCTION: 0x101082f0 size=0x53
void sub_101082f0(const float *in1, const float in2[3][4], float *out)
{
    out[0] = in1[0] * in2[0][0] + in1[1] * in2[1][0] + in1[2] * in2[2][0];
    out[1] = in1[0] * in2[0][1] + in1[1] * in2[1][1] + in1[2] * in2[2][1];
    out[2] = in1[0] * in2[0][2] + in1[1] * in2[1][2] + in1[2] * in2[2][2];
}
// END FUNCTION

// FUNCTION: 0x10108350 size=0x71
#include "QAngle.h"
#include "matrix3x4_t.h"

void sub_10108450(const QAngle &angles, matrix3x4_t &mat);
void sub_101094e0(const QAngle &angles, matrix3x4_t &mat);
void sub_10108a50(const matrix3x4_t &a, const matrix3x4_t &b, matrix3x4_t &out);
void sub_10107eb0(const matrix3x4_t &mat, QAngle &angles);

// TARGET: sub_10108350
QAngle sub_10108350(const QAngle &a, const QAngle &b)
{
	QAngle out;
	matrix3x4_t mA, mB, mC;
	sub_10108450(b, mA);
	sub_101094e0(a, mB);
	sub_10108a50(mA, mB, mC);
	sub_10107eb0(mC, out);
	return out;
}
// END FUNCTION

// FUNCTION: 0x101083d0 size=0x5c
struct QAngleView { float x, y, z; };
struct matrix3x4View { float m[3][4]; };
void sub_101094e0(const QAngleView &a, matrix3x4View &out);
void sub_10108a50(const QAngleView &a, const matrix3x4View &b, matrix3x4View &out);
void sub_10107eb0(const matrix3x4View &m, QAngleView &out);

QAngleView sub_101083d0(const QAngleView &a, const QAngleView &b)
{
	matrix3x4View m0, m1;
	QAngleView res;
	sub_101094e0(a, m0);
	sub_10108a50(b, m0, m1);
	sub_10107eb0(m1, res);
	return res;
}
// END FUNCTION

// FUNCTION: 0x10108450 size=0xb2
#include "matrix3x4_t.h"

namespace block_10138630 {
	void sub_10108430(const matrix3x4_t &in, matrix3x4_t &out)
	{
		out = in;
	}
}
using namespace block_10138630;
void sub_10108450(const matrix3x4_t &in, matrix3x4_t &out);

inline float Dot3(const float *a, const float *b)
{
	return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

// TARGET: sub_10108450
void sub_10108450(const matrix3x4_t &in, matrix3x4_t &out)
{
	if (&in == &out) {
		matrix3x4_t in2;
		sub_10108430(in, in2);
		sub_10108450(in2, out);
		return;
	}
	out.m_flMatVal[0][0] = in.m_flMatVal[0][0];
	out.m_flMatVal[0][1] = in.m_flMatVal[1][0];
	out.m_flMatVal[0][2] = in.m_flMatVal[2][0];
	out.m_flMatVal[1][0] = in.m_flMatVal[0][1];
	out.m_flMatVal[1][1] = in.m_flMatVal[1][1];
	out.m_flMatVal[1][2] = in.m_flMatVal[2][1];
	out.m_flMatVal[2][0] = in.m_flMatVal[0][2];
	out.m_flMatVal[2][1] = in.m_flMatVal[1][2];
	out.m_flMatVal[2][2] = in.m_flMatVal[2][2];
	float tmp[3];
	tmp[0] = in.m_flMatVal[0][3];
	tmp[1] = in.m_flMatVal[1][3];
	tmp[2] = in.m_flMatVal[2][3];
	out.m_flMatVal[0][3] = -Dot3(tmp, out.m_flMatVal[0]);
	out.m_flMatVal[1][3] = -Dot3(tmp, out.m_flMatVal[1]);
	out.m_flMatVal[2][3] = -Dot3(tmp, out.m_flMatVal[2]);
}
// END FUNCTION

// FUNCTION: 0x10108510 size=0x22
// TARGET: sub_10108510
void __cdecl sub_10108510(int *pArr, int index, int *pOut)
{
    pOut[0] = pArr[index];
    pOut[1] = pArr[index + 4];
    pOut[2] = pArr[index + 8];
}
// END FUNCTION

// FUNCTION: 0x10108540 size=0x22
// TARGET: sub_10108540
void __cdecl sub_10108540(int *pSrc, int index, int *pArr)
{
    pArr[index] = pSrc[0];
    pArr[index + 4] = pSrc[1];
    pArr[index + 8] = pSrc[2];
}
// END FUNCTION

// FUNCTION: 0x10108570 size=0x2d
// TARGET: sub_10108570
int sub_10108570(const float *a, const float *b) {
    for (int i = 0; i < 3; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101085a0 size=0x3d
// VectorMA (mathlib.cpp, _WIN32 form): Valve's naked x87 asm.
// TARGET: sub_101085a0
__declspec(naked) void sub_101085a0(const float *start, float scale, const float *direction, float *dest)
{
	_asm {
		mov	eax, DWORD PTR [esp+0x04]	; *start, s0..s2
		mov ecx, DWORD PTR [esp+0x0c]	; *direction, d0..d2
		mov edx, DWORD PTR [esp+0x10]	; *dest
		fld DWORD PTR [esp+0x08]		; sc
		fld	DWORD PTR [eax]				; s0		| sc
		fld DWORD PTR [ecx]				; d0		| s0	| sc
		fld DWORD PTR [eax+4]			; s1		| d0	| s0	| sc
		fld DWORD PTR [ecx+4]			; d1		| s1	| d0	| s0	| sc
		fld DWORD PTR [eax+8]			; s2		| d1	| s1	| d0	| s0	| sc
		fxch st(4)						; s0		| d1	| s1	| d0	| s2	| sc
		fld DWORD PTR [ecx+8]			; d2		| s0	| d1	| s1	| d0	| s2	| sc
		fxch st(4)						; d0		| s0	| d1	| s1	| d2	| s2	| sc
		fmul st,st(6)					; d0*sc		| s0	| d1	| s1	| d2	| s2	| sc
		fxch st(2)						; d1		| s0	| d0*sc	| s1	| d2	| s2	| sc
		fmul st,st(6)					; d1*sc		| s0	| d0*sc	| s1	| d2	| s2	| sc
		fxch st(4)						; d2 		| s0	| d0*sc	| s1	| d1*sc | s2	| sc
		fmulp st(6),st					; s0		| d0*sc	| s1	| d1*sc	| s2	| d2*sc
		faddp st(1),st					; s0+d0*sc	| s1	| d1*sc	| s2	| d2*sc
		fstp DWORD PTR [edx]			; s1		| d1*sc	| s2	| d2*sc
		faddp st(1),st					; s1+d1*sc	| s2	| d2*sc
		fstp DWORD PTR [edx+4]			; s2		| d2*sc
		faddp st(1),st					; s2+d2*sc
		fstp DWORD PTR [edx+8]			; [Empty stack]
		ret
	}
}
// END FUNCTION

// FUNCTION: 0x10108880 size=0xd5
#include "Vector.h"
#include <math.h>
#include "QAngle.h"
#pragma intrinsic(atan2, sqrt)

extern float g_101e34f0;

// TARGET: sub_10108880
void sub_10108880(const Vector &forward, QAngle &angles)
{
    float tmp, yaw, pitch;
    if (forward.y == g_101e34f0 && forward.x == g_101e34f0) {
        yaw = 0;
        if (forward.z > g_101e34f0)
            pitch = 270;
        else
            pitch = 90;
    } else {
        yaw = (float)(atan2(forward.y, forward.x) * (180.0 / 3.14159265358979323846));
        if (yaw < g_101e34f0)
            yaw += 360;
        tmp = (float)sqrt(forward.x * forward.x + forward.y * forward.y);
        pitch = (float)(atan2(-forward.z, tmp) * (180.0 / 3.14159265358979323846));
        if (pitch < g_101e34f0)
            pitch += 360;
    }
    angles.x = pitch;
    angles.y = yaw;
    angles.z = 0;
}
// END FUNCTION

// FUNCTION: 0x10108960 size=0xe7
struct S10138cc0Mat3
{
	float m[3][3];
};

void sub_10108960(const S10138cc0Mat3 &in1, const S10138cc0Mat3 &in2, S10138cc0Mat3 &out)
{
	out.m[0][0] = in1.m[0][0] * in2.m[0][0] + in1.m[0][1] * in2.m[1][0] + in1.m[0][2] * in2.m[2][0];
	out.m[0][1] = in1.m[0][0] * in2.m[0][1] + in1.m[0][1] * in2.m[1][1] + in1.m[0][2] * in2.m[2][1];
	out.m[0][2] = in1.m[0][0] * in2.m[0][2] + in1.m[0][1] * in2.m[1][2] + in1.m[0][2] * in2.m[2][2];
	out.m[1][0] = in1.m[1][0] * in2.m[0][0] + in1.m[1][1] * in2.m[1][0] + in1.m[1][2] * in2.m[2][0];
	out.m[1][1] = in1.m[1][0] * in2.m[0][1] + in1.m[1][1] * in2.m[1][1] + in1.m[1][2] * in2.m[2][1];
	out.m[1][2] = in1.m[1][0] * in2.m[0][2] + in1.m[1][1] * in2.m[1][2] + in1.m[1][2] * in2.m[2][2];
	out.m[2][0] = in1.m[2][0] * in2.m[0][0] + in1.m[2][1] * in2.m[1][0] + in1.m[2][2] * in2.m[2][0];
	out.m[2][1] = in1.m[2][0] * in2.m[0][1] + in1.m[2][1] * in2.m[1][1] + in1.m[2][2] * in2.m[2][1];
	out.m[2][2] = in1.m[2][0] * in2.m[0][2] + in1.m[2][1] * in2.m[1][2] + in1.m[2][2] * in2.m[2][2];
}
// END FUNCTION

// FUNCTION: 0x10108a50 size=0x18a
#include "matrix3x4_t.h"

namespace block_10138600 {
void sub_10108430(const matrix3x4_t &in, matrix3x4_t &out)
{
	out = in;
}
}
using namespace block_10138600;

// the incremental link stub of this very function, which the recursive calls go through
void sub_10108a50(const matrix3x4_t &in1, const matrix3x4_t &in2, matrix3x4_t &out);

// TARGET: sub_10108a50
void sub_10108a50(const matrix3x4_t &in1, const matrix3x4_t &in2, matrix3x4_t &out)
{
	if (&in1 == &out) {
		matrix3x4_t in1b;
		sub_10108430(in1, in1b);
		sub_10108a50(in1b, in2, out);
		return;
	}
	if (&in2 == &out) {
		matrix3x4_t in2b;
		sub_10108430(in2, in2b);
		sub_10108a50(in1, in2b, out);
		return;
	}
	out.m_flMatVal[0][0] = in1.m_flMatVal[0][0] * in2.m_flMatVal[0][0] + in1.m_flMatVal[0][1] * in2.m_flMatVal[1][0] + in1.m_flMatVal[0][2] * in2.m_flMatVal[2][0];
	out.m_flMatVal[0][1] = in1.m_flMatVal[0][0] * in2.m_flMatVal[0][1] + in1.m_flMatVal[0][1] * in2.m_flMatVal[1][1] + in1.m_flMatVal[0][2] * in2.m_flMatVal[2][1];
	out.m_flMatVal[0][2] = in1.m_flMatVal[0][0] * in2.m_flMatVal[0][2] + in1.m_flMatVal[0][1] * in2.m_flMatVal[1][2] + in1.m_flMatVal[0][2] * in2.m_flMatVal[2][2];
	out.m_flMatVal[0][3] = in1.m_flMatVal[0][0] * in2.m_flMatVal[0][3] + in1.m_flMatVal[0][1] * in2.m_flMatVal[1][3] + in1.m_flMatVal[0][2] * in2.m_flMatVal[2][3] + in1.m_flMatVal[0][3];
	out.m_flMatVal[1][0] = in1.m_flMatVal[1][0] * in2.m_flMatVal[0][0] + in1.m_flMatVal[1][1] * in2.m_flMatVal[1][0] + in1.m_flMatVal[1][2] * in2.m_flMatVal[2][0];
	out.m_flMatVal[1][1] = in1.m_flMatVal[1][0] * in2.m_flMatVal[0][1] + in1.m_flMatVal[1][1] * in2.m_flMatVal[1][1] + in1.m_flMatVal[1][2] * in2.m_flMatVal[2][1];
	out.m_flMatVal[1][2] = in1.m_flMatVal[1][0] * in2.m_flMatVal[0][2] + in1.m_flMatVal[1][1] * in2.m_flMatVal[1][2] + in1.m_flMatVal[1][2] * in2.m_flMatVal[2][2];
	out.m_flMatVal[1][3] = in1.m_flMatVal[1][0] * in2.m_flMatVal[0][3] + in1.m_flMatVal[1][1] * in2.m_flMatVal[1][3] + in1.m_flMatVal[1][2] * in2.m_flMatVal[2][3] + in1.m_flMatVal[1][3];
	out.m_flMatVal[2][0] = in1.m_flMatVal[2][0] * in2.m_flMatVal[0][0] + in1.m_flMatVal[2][1] * in2.m_flMatVal[1][0] + in1.m_flMatVal[2][2] * in2.m_flMatVal[2][0];
	out.m_flMatVal[2][1] = in1.m_flMatVal[2][0] * in2.m_flMatVal[0][1] + in1.m_flMatVal[2][1] * in2.m_flMatVal[1][1] + in1.m_flMatVal[2][2] * in2.m_flMatVal[2][1];
	out.m_flMatVal[2][2] = in1.m_flMatVal[2][0] * in2.m_flMatVal[0][2] + in1.m_flMatVal[2][1] * in2.m_flMatVal[1][2] + in1.m_flMatVal[2][2] * in2.m_flMatVal[2][2];
	out.m_flMatVal[2][3] = in1.m_flMatVal[2][0] * in2.m_flMatVal[0][3] + in1.m_flMatVal[2][1] * in2.m_flMatVal[1][3] + in1.m_flMatVal[2][2] * in2.m_flMatVal[2][3] + in1.m_flMatVal[2][3];
}
// END FUNCTION

// FUNCTION: 0x10108be0 size=0x109
#include <math.h>

inline int Floor2Int(float a)
{
	int RetVal;
	int CtrlwdHolder;
	int CtrlwdSetter;
	__asm
	{
		fld a
		fnstcw CtrlwdHolder
		movzx eax, CtrlwdHolder
		and eax, 0xFFFFF3FF
		or eax, 0x400
		mov CtrlwdSetter, eax
		fldcw CtrlwdSetter
		fistp RetVal
		fldcw CtrlwdHolder
	}
	return RetVal;
}

void sub_10108be0(double a, double b, int *pQuot, int *pRem)
{
	int nQuot;
	int nRem;
	if (a >= 0.0) {
		double q = floor(a / b);
		nQuot = (int)q;
		nRem = Floor2Int((float)(a - q * b));
	} else {
		double q = floor(-a / b);
		nQuot = -(int)q;
		nRem = Floor2Int((float)(-a - q * b));
		if (nRem != 0) {
			nQuot--;
			nRem = (int)b - nRem;
		}
	}
	*pQuot = nQuot;
	*pRem = nRem;
}
// END FUNCTION

// FUNCTION: 0x10108cf0 size=0x2b
int sub_10108cf0(int a, int b)
{
    for (;;) {
        if (a > b) {
            if (b == 0)
                return a;
            int t = a % b;
            a = b;
            b = t;
        } else {
            if (a == 0)
                return b;
            b = b % a;
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10108d20 size=0x1d
// TARGET: sub_10108d20
int __cdecl sub_10108d20(const unsigned int *p)
{
	if ((*p & 0x7f800000) == 0 && (*p & 0x7fffff) != 0)
		return 1;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10108d40 size=0x2c
// TARGET: sub_10108d40
unsigned int sub_10108d40(float *v)
{
    unsigned int mask = 0;
    int i;
    for (i = 0; i < 3; i++) {
        if (v[i] < 0.0f) {
            mask |= 1 << i;
        }
    }
    return mask;
}
// END FUNCTION

// FUNCTION: 0x10108d70 size=0x25c
// mathlib BoxOnPlaneSide (2003 tree, C version), verbatim
// TARGET: sub_10108d70
// cplane_t::normal is a Vector: its const operator[] decides the fld/fmul operand order
#include "Vector.h"
struct cplane_t
{
	Vector	normal;
	float	dist;
	unsigned char	type;
	unsigned char	signbits;
	unsigned char	pad[2];
};

int sub_10108d70 (const float *emins, const float *emaxs, const cplane_t *p)
{
	float	dist1, dist2;
	int		sides;

// fast axial cases
	if (p->type < 3)
	{
		if (p->dist <= emins[p->type])
			return 1;
		if (p->dist >= emaxs[p->type])
			return 2;
		return 3;
	}
	
// general case
	switch (p->signbits)
	{
	case 0:
dist1 = p->normal[0]*emaxs[0] + p->normal[1]*emaxs[1] + p->normal[2]*emaxs[2];
dist2 = p->normal[0]*emins[0] + p->normal[1]*emins[1] + p->normal[2]*emins[2];
		break;
	case 1:
dist1 = p->normal[0]*emins[0] + p->normal[1]*emaxs[1] + p->normal[2]*emaxs[2];
dist2 = p->normal[0]*emaxs[0] + p->normal[1]*emins[1] + p->normal[2]*emins[2];
		break;
	case 2:
dist1 = p->normal[0]*emaxs[0] + p->normal[1]*emins[1] + p->normal[2]*emaxs[2];
dist2 = p->normal[0]*emins[0] + p->normal[1]*emaxs[1] + p->normal[2]*emins[2];
		break;
	case 3:
dist1 = p->normal[0]*emins[0] + p->normal[1]*emins[1] + p->normal[2]*emaxs[2];
dist2 = p->normal[0]*emaxs[0] + p->normal[1]*emaxs[1] + p->normal[2]*emins[2];
		break;
	case 4:
dist1 = p->normal[0]*emaxs[0] + p->normal[1]*emaxs[1] + p->normal[2]*emins[2];
dist2 = p->normal[0]*emins[0] + p->normal[1]*emins[1] + p->normal[2]*emaxs[2];
		break;
	case 5:
dist1 = p->normal[0]*emins[0] + p->normal[1]*emaxs[1] + p->normal[2]*emins[2];
dist2 = p->normal[0]*emaxs[0] + p->normal[1]*emins[1] + p->normal[2]*emaxs[2];
		break;
	case 6:
dist1 = p->normal[0]*emaxs[0] + p->normal[1]*emins[1] + p->normal[2]*emins[2];
dist2 = p->normal[0]*emins[0] + p->normal[1]*emaxs[1] + p->normal[2]*emaxs[2];
		break;
	case 7:
dist1 = p->normal[0]*emins[0] + p->normal[1]*emins[1] + p->normal[2]*emins[2];
dist2 = p->normal[0]*emaxs[0] + p->normal[1]*emaxs[1] + p->normal[2]*emaxs[2];
		break;
	default:
		dist1 = dist2 = 0;		// shut up compiler
		break;
	}

	sides = 0;
	if (dist1 >= p->dist)
		sides = 1;
	if (dist2 < p->dist)
		sides |= 2;

	return sides;
}
// END FUNCTION

// FUNCTION: 0x10108fd0 size=0x3d
// VectorMA (mathlib.cpp, _WIN32 form): Valve's naked x87 asm.
// TARGET: sub_10108fd0
__declspec(naked) void sub_10108fd0(const float *start, float scale, const float *direction, float *dest)
{
	_asm {
		mov	eax, DWORD PTR [esp+0x04]	; *start, s0..s2
		mov ecx, DWORD PTR [esp+0x0c]	; *direction, d0..d2
		mov edx, DWORD PTR [esp+0x10]	; *dest
		fld DWORD PTR [esp+0x08]		; sc
		fld	DWORD PTR [eax]				; s0		| sc
		fld DWORD PTR [ecx]				; d0		| s0	| sc
		fld DWORD PTR [eax+4]			; s1		| d0	| s0	| sc
		fld DWORD PTR [ecx+4]			; d1		| s1	| d0	| s0	| sc
		fld DWORD PTR [eax+8]			; s2		| d1	| s1	| d0	| s0	| sc
		fxch st(4)						; s0		| d1	| s1	| d0	| s2	| sc
		fld DWORD PTR [ecx+8]			; d2		| s0	| d1	| s1	| d0	| s2	| sc
		fxch st(4)						; d0		| s0	| d1	| s1	| d2	| s2	| sc
		fmul st,st(6)					; d0*sc		| s0	| d1	| s1	| d2	| s2	| sc
		fxch st(2)						; d1		| s0	| d0*sc	| s1	| d2	| s2	| sc
		fmul st,st(6)					; d1*sc		| s0	| d0*sc	| s1	| d2	| s2	| sc
		fxch st(4)						; d2 		| s0	| d0*sc	| s1	| d1*sc | s2	| sc
		fmulp st(6),st					; s0		| d0*sc	| s1	| d1*sc	| s2	| d2*sc
		faddp st(1),st					; s0+d0*sc	| s1	| d1*sc	| s2	| d2*sc
		fstp DWORD PTR [edx]			; s1		| d1*sc	| s2	| d2*sc
		faddp st(1),st					; s1+d1*sc	| s2	| d2*sc
		fstp DWORD PTR [edx+4]			; s2		| d2*sc
		faddp st(1),st					; s2+d2*sc
		fstp DWORD PTR [edx+8]			; [Empty stack]
		ret
	}
}
// END FUNCTION

// FUNCTION: 0x10109010 size=0x8a
#include "Vector.h"
#include "QAngle.h"

inline void SinCos(float radians, float *sine, float *cosine)
{
	__asm {
		fld dword ptr [radians]
		fsincos
		mov edx, dword ptr [cosine]
		mov eax, dword ptr [sine]
		fstp dword ptr [edx]
		fstp dword ptr [eax]
	}
}

void sub_10109010(const QAngle &angles, Vector *forward)
{
	float sp, sy, cp, cy;
	SinCos(angles.y * 0.017453292f, &sy, &cy);
	SinCos(angles.x * 0.017453292f, &sp, &cp);
	forward->x = cp * cy;
	forward->y = cp * sy;
	forward->z = -sp;
}
// END FUNCTION

// FUNCTION: 0x101090a0 size=0x145
#include "Vector.h"
#include "QAngle.h"
inline void SinCos(float radians, float *sine, float *cosine)
{
    __asm {
        fld dword ptr [radians]
        fsincos
        mov edx, dword ptr [cosine]
        mov eax, dword ptr [sine]
        fstp dword ptr [edx]
        fstp dword ptr [eax]
    }
}
void sub_101090a0(const QAngle &angles, Vector *forward, Vector *right, Vector *up)
{
    float sr, sp, sy, cr, cp, cy;
    SinCos(angles.y * 0.017453292f, &sy, &cy);
    SinCos(angles.x * 0.017453292f, &sp, &cp);
    SinCos(angles.z * 0.017453292f, &sr, &cr);
    if (forward) {
        forward->x = cp * cy;
        forward->y = cp * sy;
        forward->z = -sp;
    }
    if (right) {
        right->x = (-1 * sr * sp * cy + -1 * cr * -sy);
        right->y = (-1 * sr * sp * sy + -1 * cr * cy);
        right->z = -1 * sr * cp;
    }
    if (up) {
        up->x = (cr * sp * cy + -sr * -sy);
        up->y = (cr * sp * sy + -sr * cy);
        up->z = cr * cp;
    }
}
// END FUNCTION

// FUNCTION: 0x101091f0 size=0x145
#include "Vector.h"
#include "QAngle.h"
inline void SinCos(float radians, float *sine, float *cosine)
{
    __asm {
        fld dword ptr [radians]
        fsincos
        mov edx, dword ptr [cosine]
        mov eax, dword ptr [sine]
        fstp dword ptr [edx]
        fstp dword ptr [eax]
    }
}
void sub_101091f0(const QAngle &angles, Vector *forward, Vector *right, Vector *up)
{
    float sr, sp, sy, cr, cp, cy;
    SinCos(angles.y * 0.017453292f, &sy, &cy);
    SinCos(angles.x * 0.017453292f, &sp, &cp);
    SinCos(angles.z * 0.017453292f, &sr, &cr);
    if (forward) {
        forward->x = cp * cy;
        forward->y = sr * sp * cy + cr * -sy;
        forward->z = (cr * sp * cy + -sr * -sy);
    }
    if (right) {
        right->x = cp * sy;
        right->y = sr * sp * sy + cr * cy;
        right->z = (cr * sp * sy + -sr * cy);
    }
    if (up) {
        up->x = -sp;
        up->y = sr * cp;
        up->z = cr * cp;
    }
}
// END FUNCTION

// FUNCTION: 0x10109420 size=0x1f
void sub_10109420(float *p)
{
    for (int i = 0; i < 12; i++)
    {
        ((int *)p)[i] = 0;
    }
    ((int *)p)[0] = 0x3f800000;
    ((int *)p)[5] = 0x3f800000;
    ((int *)p)[10] = 0x3f800000;
}
// END FUNCTION

// FUNCTION: 0x10109440 size=0x22
void __cdecl sub_10109470(int a, int b);
void __cdecl sub_10108540(int a, int b, int c);

// TARGET: sub_10109440
void __cdecl sub_10109440(int a, int b, int c)
{
    sub_10109470(a, c);
    sub_10108540(b, 3, c);
}
// END FUNCTION

// FUNCTION: 0x10109470 size=0x40
#include "Vector.h"

void sub_101094e0(Vector *pVec, int arg);

// TARGET: sub_10109470
void sub_10109470(const Vector *pVec, int arg)
{
    Vector tmp;
    tmp.x = pVec->y * 57.29578f;
    tmp.y = pVec->z * 57.29578f;
    tmp.z = pVec->x * 57.29578f;
    sub_101094e0(&tmp, arg);
}
// END FUNCTION

// FUNCTION: 0x101094b0 size=0x22
void __cdecl sub_101094e0(int a, int b);
void __cdecl sub_10108540(int a, int b, int c);

// TARGET: sub_101094b0
void __cdecl sub_101094b0(int a, int b, int c)
{
    sub_101094e0(a, c);
    sub_10108540(b, 3, c);
}
// END FUNCTION

// FUNCTION: 0x101094e0 size=0x132
#include "QAngle.h"
#include "matrix3x4_t.h"

inline void SinCos(float radians, float *sine, float *cosine)
{
	__asm
	{
		fld dword ptr [radians]
		fsincos
		mov edx, dword ptr [cosine]
		mov eax, dword ptr [sine]
		fstp dword ptr [edx]
		fstp dword ptr [eax]
	}
}

void sub_101094e0(const QAngle &angles, matrix3x4_t &matrix)
{
	float sr, sp, sy, cr, cp, cy;
	SinCos(angles.y * 0.017453292f, &sy, &cy);
	SinCos(angles.x * 0.017453292f, &sp, &cp);
	SinCos(angles.z * 0.017453292f, &sr, &cr);

	float (*m)[4] = matrix.m_flMatVal;
	m[0][0] = cp * cy;
	m[1][0] = cp * sy;
	m[2][0] = -sp;
	m[0][1] = sr * sp * cy + cr * -sy;
	m[1][1] = sr * sp * sy + cr * cy;
	m[2][1] = sr * cp;
	m[0][2] = (cr * sp * cy + -sr * -sy);
	m[1][2] = (cr * sp * sy + -sr * cy);
	m[2][2] = cr * cp;
	float *w = &m[0][3];
	w[0] = 0.0f;
	w[4] = 0.0f;
	w[8] = 0.0f;
}
// END FUNCTION

// FUNCTION: 0x10109810 size=0x71
#include "Vector.h"

// TARGET: sub_10109810
bool sub_10109810(const Vector &center, float radius, const Vector &mins, const Vector &maxs)
{
	float dist = 0.0f;
	for (int i = 0; i < 3; i++) {
		if (center[i] < mins[i]) {
			float d = center[i] - mins[i];
			dist += d * d;
		} else if (center[i] > maxs[i]) {
			float d = center[i] - maxs[i];
			dist += d * d;
		}
	}
	return dist <= radius * radius;
}
// END FUNCTION

// FUNCTION: 0x10109890 size=0x23
struct V3 {
	float x, y, z;
};

void sub_10109890(V3 *mins, V3 *maxs)
{
	mins->x = mins->y = mins->z = 99999.0f;
	maxs->x = maxs->y = maxs->z = -99999.0f;
}
// END FUNCTION

// FUNCTION: 0x101098c0 size=0x41
void sub_101098c0(const float *v, float *mins, float *maxs)
{
	for (int i = 0; i < 3; i++)
	{
		float f = v[i];
		if (f < mins[i])
			mins[i] = f;
		if (maxs[i] < f)
			maxs[i] = f;
	}
}
// END FUNCTION

// FUNCTION: 0x10109910 size=0x33
// TARGET: sub_10109910
#include <math.h>
extern float g_104d4d8c[];

void sub_10109910()
{
    int i = 0;
    float *p = &g_104d4d8c[0];
    do {
        double v = pow(2.0, (double)(i - 128)) * 0.00392156862745098;
        i++;
        p[i] = (float)v;
    } while (i < 256);
}
// END FUNCTION

// FUNCTION: 0x10109950 size=0x2c8
#include <math.h>

extern unsigned char g_104d4470[256];
extern int g_104d95a0[1024];
extern float g_104d51a0[256];
extern float g_104d4980[256];
extern float g_104d4570[256];
extern int g_104da5a0[1024];
extern float g_104d55a0[4096];
extern int g_104db5b0[4096];
void sub_10109910();

// TARGET: sub_10109950
void sub_10109950(float gamma, float texGamma, float brightness, int overbright)
{
	int i, inf;
	float g1, g, g3, f;

	g = gamma;
	if (g > 3.0)
		g = 3.0f;
	g = 1.0 / g;
	g1 = texGamma * g;
	if (brightness <= 0.0)
		g3 = 0.125f;
	else if (brightness > 1.0)
		g3 = 0.05f;
	else
		g3 = 0.125 - (brightness * brightness) * 0.075;

	for (i = 0; i < 256; i++) {
		inf = (int)(pow(i * (1.0f / 255.0f), g1) * 255.0);
		if (inf < 0)
			inf = 0;
		else if (inf > 255)
			inf = 255;
		g_104d4470[i] = inf;
	}

	for (i = 0; i < 1024; i++) {
		f = i * (1.0 / 1023.0);
		if (brightness > 1.0)
			f = f * brightness;
		if (f <= g3)
			f = (f / g3) * 0.125;
		else
			f = 0.125 + ((f - g3) / (1.0 - g3)) * 0.875;
		inf = (int)(pow(f, g) * 255.0);
		if (inf < 0)
			inf = 0;
		else if (inf > 255)
			inf = 255;
		g_104d95a0[i] = inf;
	}

	for (i = 0; i < 256; i++) {
		float t = i * (1.0f / 255.0f);
		g_104d51a0[i] = pow(t, texGamma);
		g_104d4980[i] = pow(t, 0.4545454446934474);
		g_104d4570[i] = pow(t, 2.2f);
	}

	for (i = 0; i < 1024; i++)
		g_104da5a0[i] = (int)(pow(i * (1.0 / 1023.0), 1.0 / texGamma) * 255.0);

	sub_10109910();

	float scale2 = 1.0f;
	if (overbright == 2)
		scale2 = 0.5f;
	else if (overbright == 4)
		scale2 = 0.25f;

	for (i = 0; i < 4096; i++) {
		float v = pow(i * (1.0 / 1024.0), 1.0 / gamma) * scale2;
		g_104d55a0[i] = v;
		if (v > 1.0f)
			g_104d55a0[i] = 1.0f;
		inf = (int)(v * 255.0f);
		g_104db5b0[i] = inf;
		if (inf > 255)
			g_104db5b0[i] = 255;
	}
}
// END FUNCTION

// FUNCTION: 0x10109c20 size=0x58
extern float g_104d4570[];
float sub_10109c20(float f)
{
	if (f < 0.0f)
		return 0.0f;
	if (f >= 0.95f)
		return 1.0f;
	f = f * 255.0f;
	int i;
	__asm {
		fld f
		fistp i
	}
	return g_104d4570[i];
}
// END FUNCTION

// FUNCTION: 0x10109c80 size=0x58
extern float g_104d4980[];
float sub_10109c80(float f)
{
	if (f < 0.0f)
		return 0.0f;
	if (f > 1.0f)
		return 1.0f;
	f = f * 255.0f;
	int i;
	__asm {
		fld f
		fistp i
	}
	return g_104d4980[i];
}
// END FUNCTION

// FUNCTION: 0x10109ce0 size=0x25
extern float g_104d51a0[256];

// TARGET: sub_10109ce0
float sub_10109ce0(int index)
{
    if (index < 0)
        return 0.0f;
    if (index > 0xff)
        return 1.0f;
    return g_104d51a0[index];
}
// END FUNCTION

// FUNCTION: 0x10109d10 size=0x31
extern int g_104da5a0[];

int sub_10109d10(float f)
{
    int i = (int)(f * 1023.0f);
    if (i < 0)
        i = 0;
    else if (i > 0x3ff)
        i = 0x3ff;
    return g_104da5a0[i];
}
// END FUNCTION

// FUNCTION: 0x10109d50 size=0x31
extern int g_104db5b0[];

int sub_10109d50(float f)
{
	int i = (int)(f * 1024.0f);
	if (i < 0)
		i = 0;
	else if (i > 0xfff)
		i = 0xfff;
	return g_104db5b0[i];
}
// END FUNCTION

// FUNCTION: 0x10109d90 size=0x31
extern int g_104d95a0[];

int sub_10109d90(float f)
{
    int i = (int)(f * 1023.0f);
    if (i < 0)
        i = 0;
    else if (i > 0x3ff)
        i = 0x3ff;
    return g_104d95a0[i];
}
// END FUNCTION

// FUNCTION: 0x10109dd0 size=0xb4
#include <math.h>

// TARGET: sub_10109dd0
bool sub_10109dd0(float a, float b, float c, float &root1, float &root2)
{
    if (a == 0) {
        if (b != 0) {
            root1 = root2 = -c / b;
            return true;
        }
        if (c == 0) {
            root1 = root2 = 0;
            return true;
        }
        return false;
    }
    float tmp = b * b - 4 * a * c;
    if (tmp < 0)
        return false;
    tmp = sqrt(tmp);
    root1 = (tmp - b) / (a + a);
    root2 = (-b - tmp) / (a + a);
    return true;
}
// END FUNCTION

// FUNCTION: 0x10109e90 size=0x6b
#include "Vector.h"

inline void SinCos(float radians, float *sine, float *cosine)
{
	__asm {
		fld dword ptr [radians]
		fsincos
		mov edx, dword ptr [cosine]
		mov eax, dword ptr [sine]
		fstp dword ptr [edx]
		fstp dword ptr [eax]
	}
}

// TARGET: sub_10109e90
void sub_10109e90(const Vector &in, float yaw, Vector &out)
{
	float cy;
	SinCos(yaw * 0.017453292f, &yaw, &cy);
	float x = in.x;
	float y = in.y;
	out.x = x * cy - y * yaw;
	float a = x * yaw;
	out.y = a + y * cy;
	out.z = in.z;
}
// END FUNCTION

// FUNCTION: 0x10109f00 size=0x34
#include <math.h>
extern float g_104df5b4;
// TARGET: sub_10109f00
float sub_10109f00(float a, float b)
{
	if (-1.0f != b)
		g_104df5b4 = (float)(log(b) * -1.4427000284194946);
	return (float)pow(a, g_104df5b4);
}
// END FUNCTION

// FUNCTION: 0x10109f40 size=0x58
float sub_10109f00(float a, float b);

float sub_10109f40(float x, float g)
{
	if (x < 0.5)
		return sub_10109f00(x + x, 1.0f - g) * 0.5f;
	return 1.0f - sub_10109f00(2.0f - (x + x), 1.0f - g) * 0.5f;
}
// END FUNCTION

// FUNCTION: 0x10109fa0 size=0x19
#include <math.h>

// TARGET: sub_10109fa0
double sub_10109fa0(float x)
{
	return (1.0 - cos(x * 3.141592653589793)) * 0.5;
}
// END FUNCTION

// FUNCTION: 0x1010a020 size=0x82
#include "Quaternion.h"

void sub_1010a020(const Quaternion &p, const Quaternion &q, Quaternion &qt)
{
	int i;
	float a = 0;
	float b = 0;
	for (i = 0; i < 4; i++) {
		a += (p[i] - q[i]) * (p[i] - q[i]);
		b += (p[i] + q[i]) * (p[i] + q[i]);
	}
	if (a > b) {
		for (i = 0; i < 4; i++)
			qt[i] = -q[i];
	} else if (&qt != &q) {
		for (i = 0; i < 4; i++)
			qt[i] = q[i];
	}
}
// END FUNCTION

// FUNCTION: 0x1010a0b0 size=0x35
void sub_1010a020(int a, int b, void *pOut);
void sub_1010a0f0(int a, void *pIn, int c, int d);

// TARGET: sub_1010a0b0
void sub_1010a0b0(int a, int b, int c, int d)
{
    char local[16];
    sub_1010a020(a, b, local);
    sub_1010a0f0(a, local, c, d);
}
// END FUNCTION

// FUNCTION: 0x1010a0f0 size=0x4a
#include "Quaternion.h"
float sub_1010a2b0(Quaternion &q);
void sub_1010a0f0(const Quaternion &p, const Quaternion &q, float t, Quaternion &qt)
{
	float sclp, sclq;
	int i;
	sclp = 1.0f - t;
	sclq = t;
	for (i = 0; i < 4; i++)
	{
		qt[i] = sclp * p[i] + sclq * q[i];
	}
	sub_1010a2b0(qt);
}
// END FUNCTION

// FUNCTION: 0x1010a140 size=0x35
void sub_1010a020(int a, int b, void *pOut);
void sub_1010a180(int a, void *pIn, int c, int d);

// TARGET: sub_1010a140
void sub_1010a140(int a, int b, int c, int d)
{
    char local[16];
    sub_1010a020(a, b, local);
    sub_1010a180(a, local, c, d);
}
// END FUNCTION

// FUNCTION: 0x1010a180 size=0x12a
#include "Quaternion.h"
#include <math.h>

// TARGET: sub_1010a180
void sub_1010a180(const Quaternion &p, const Quaternion &q, float t, Quaternion &qt)
{
	float omega, cosom, sinom, sclp, sclq;
	int i;

	cosom = p[0] * q[0] + p[1] * q[1] + p[2] * q[2] + p[3] * q[3];

	if ((1.0f + cosom) > 0.000001f) {
		if ((1.0f - cosom) > 0.000001f) {
			omega = acos(cosom);
			sinom = sin(omega);
			sclp = sin((1.0f - t) * omega) / sinom;
			sclq = sin(t * omega) / sinom;
		} else {
			sclp = 1.0f - t;
			sclq = t;
		}
		for (i = 0; i < 4; i++)
			qt[i] = sclp * p[i] + sclq * q[i];
	} else {
		qt[0] = -q[1];
		qt[1] = q[0];
		qt[2] = -q[3];
		qt[3] = q[2];
		sclp = sin((1.0f - t) * (0.5f * 3.14159265358979323846));
		sclq = sin(t * (0.5f * 3.14159265358979323846));
		for (i = 0; i < 3; i++)
			qt[i] = sclp * p[i] + sclq * qt[i];
	}
}
// END FUNCTION

// FUNCTION: 0x1010a2b0 size=0x61
#include <math.h>
float sub_1010a2b0(float *q)
{
	float radius, iradius;
	radius = q[3] * q[3] + q[2] * q[2] + q[1] * q[1] + q[0] * q[0];
	if (radius) {
		radius = sqrt(radius);
		iradius = 1.0f / radius;
		q[3] *= iradius;
		q[2] *= iradius;
		q[1] *= iradius;
		q[0] *= iradius;
	}
	return radius;
}
// END FUNCTION

// FUNCTION: 0x1010a320 size=0xa9
#include <math.h>

// TARGET: sub_1010a320
void sub_1010a320(const float *p, float t, float *q)
{
    float r;
    float sinom = sqrt(p[0] * p[0] + p[1] * p[1] + p[2] * p[2]);
    sinom = sinom < 1.0f ? sinom : 1.0f;
    float sinsom = sin(asin(sinom) * t);
    t = sinsom / (sinom + 1.192092896e-07f);
    q[0] = p[0] * t;
    q[1] = p[1] * t;
    q[2] = p[2] * t;
    r = 1.0f - sinsom * sinsom;
    if (r < 0.0f)
        r = 0.0f;
    r = sqrt(r);
    if (p[3] < 0)
        q[3] = -r;
    else
        q[3] = r;
}
// END FUNCTION

// FUNCTION: 0x1010a3d0 size=0x4a
#include "Quaternion.h"

void sub_1010a020(const Quaternion &p, const Quaternion &q, Quaternion &qt);

void sub_1010a3d0(const Quaternion &p, const Quaternion &q, Quaternion &qt)
{
	Quaternion q2;
	sub_1010a020(p, q, q2);
	qt[0] = p[0] + q2[0];
	qt[1] = p[1] + q2[1];
	qt[2] = p[2] + q2[2];
	qt[3] = p[3] + q2[3];
}
// END FUNCTION

// FUNCTION: 0x1010a420 size=0x25
// TARGET: sub_1010a420
float sub_1010a420(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3];
}
// END FUNCTION

// FUNCTION: 0x1010a450 size=0xed
#include "Quaternion.h"

void sub_1010a020(const Quaternion &p, const Quaternion &q, Quaternion &qt);
void sub_1010a450(const Quaternion &p, const Quaternion &q, Quaternion &qt);

// TARGET: sub_1010a450
void sub_1010a450(const Quaternion &p, const Quaternion &q, Quaternion &qt)
{
	if (&p == &qt)
	{
		Quaternion p2 = p;
		sub_1010a450(p2, q, qt);
		return;
	}
	else
	{
		Quaternion q2;
		sub_1010a020(p, q, q2);

		qt.x = q2.z * p.y + q2.w * p.x - q2.y * p.z + q2.x * p.w;
		qt.y = q2.x * p.z - q2.z * p.x + q2.w * p.y + q2.y * p.w;
		qt.z = q2.y * p.x - q2.x * p.y + q2.w * p.z + q2.z * p.w;
		qt.w = q2.w * p.w - (q2.y * p.y + q2.z * p.z + q2.x * p.x);
	}
}
// END FUNCTION

// FUNCTION: 0x1010a540 size=0x2a
void sub_1010a570(int a, void *p);

void sub_1010a540(int a1, int *pSrc, char *pDst)
{
    sub_1010a570(a1, pDst);
    *(int *)(pDst + 0xc) = pSrc[0];
    *(int *)(pDst + 0x1c) = pSrc[1];
    *(int *)(pDst + 0x2c) = pSrc[2];
}
// END FUNCTION

// FUNCTION: 0x1010a570 size=0xdb
struct Q { float x, y, z, w; };
void sub_1010a570(const Q &q, float *m)
{
    m[0] = 1.0 - 2.0 * q.y * q.y - 2.0 * q.z * q.z;
    m[4] = 2.0 * q.x * q.y + 2.0 * q.w * q.z;
    m[8] = 2.0 * q.x * q.z - 2.0 * q.w * q.y;
    m[1] = 2.0 * q.x * q.y - 2.0 * q.w * q.z;
    m[5] = 1.0f - 2.0f * q.x * q.x - 2.0f * q.z * q.z;
    m[9] = 2.0 * q.y * q.z + 2.0 * q.w * q.x;
    m[2] = 2.0 * q.x * q.z + 2.0 * q.w * q.y;
    m[6] = 2.0 * q.y * q.z - 2.0 * q.w * q.x;
    m[10] = 1.0f - 2.0f * q.x * q.x - 2.0f * q.y * q.y;
}
// END FUNCTION

// FUNCTION: 0x1010a650 size=0x40
#include "Vector.h"
#include "QAngle.h"

#define DEG2RAD(x) ((float)(x) * (float)(3.14159265358979323846f / 180.f))

struct SRadianEuler
{
	SRadianEuler(const QAngle &angles)
	{
		Init(DEG2RAD(angles.z), DEG2RAD(angles.x), DEG2RAD(angles.y));
	}
	void Init(float ix, float iy, float iz) { x = ix; y = iy; z = iz; }
	float x, y, z;
};
void sub_1010a790(const SRadianEuler &ang, float *pQuat);

// TARGET: sub_1010a650
void sub_1010a650(const QAngle &angles, float *pQuat)
{
	SRadianEuler radians(angles);
	sub_1010a790(radians, pQuat);
}
// END FUNCTION

// FUNCTION: 0x1010a690 size=0x25
#include "QAngle.h"
#include "matrix3x4_t.h"
struct Q;
struct matrix3x4_t;
class QAngle;

void sub_1010a570(const Q &q, float *out);
void sub_10107eb0(const matrix3x4_t &m, QAngle &ang);

// TARGET: sub_1010a690
void sub_1010a690(const Q &q, QAngle &ang)
{
    float m[12];
    sub_1010a570(q, m);
    sub_10107eb0(reinterpret_cast<const matrix3x4_t &>(m), ang);
}
// END FUNCTION

// FUNCTION: 0x1010a720 size=0x68
#include "Vector.h"

struct Quaternion
{
	float x, y, z, w;
};

inline void SinCos(float radians, float *sine, float *cosine)
{
	__asm {
		fld dword ptr [radians]
		fsincos
		mov edx, dword ptr [cosine]
		mov eax, dword ptr [sine]
		fstp dword ptr [edx]
		fstp dword ptr [eax]
	}
}

// TARGET: sub_1010a720
void sub_1010a720(const Vector &axis, float angle, Quaternion &q)
{
	float ca;
	float rad = angle * 0.017453292f;
	SinCos(rad * 0.5f, &angle, &ca);
	q.x = axis.x * angle;
	q.y = axis.y * angle;
	q.z = axis.z * angle;
	q.w = ca;
}
// END FUNCTION

// FUNCTION: 0x1010a790 size=0xfc
#include "Quaternion.h"

struct SRadianEuler
{
	float x, y, z;
};

inline void SinCos(float radians, float *sine, float *cosine)
{
	__asm
	{
		fld DWORD PTR [radians]
		fsincos
		mov edx, DWORD PTR [cosine]
		mov eax, DWORD PTR [sine]
		fstp DWORD PTR [edx]
		fstp DWORD PTR [eax]
	}
}

void sub_1010a790(const SRadianEuler &angles, Quaternion &outQuat)
{
	float sr, sp, sy, cr, cp, cy;
	SinCos(angles.z * 0.5f, &sy, &cy);
	SinCos(angles.y * 0.5f, &sp, &cp);
	SinCos(angles.x * 0.5f, &sr, &cr);
	float srXcp = sr * cp, crXsp = cr * sp;
	outQuat.x = srXcp * cy - crXsp * sy;
	outQuat.y = crXsp * cy + srXcp * sy;
	float crXcp = cr * cp, srXsp = sr * sp;
	outQuat.z = crXcp * sy - srXsp * cy;
	outQuat.w = crXcp * cy + srXsp * sy;
}
// END FUNCTION

// FUNCTION: 0x1010a890 size=0x9a
#include "matrix3x4_t.h"
#include "QAngle.h"

void sub_10108540(const Vector &in, int column, matrix3x4_t &out);
void sub_1010a650(const Vector &angles, int a);
void sub_10107eb0(const matrix3x4_t &m, QAngle &ang);

void sub_1010a890(const Vector &a, const Vector &b, const Vector &c, int d)
{
	matrix3x4_t m;
	Vector v = b;
	v *= -1.0f;
	sub_10108540(a, 0, m);
	sub_10108540(v, 1, m);
	sub_10108540(c, 2, m);
	sub_10107eb0(m, *(QAngle *)&v);
	sub_1010a650(v, d);
}
// END FUNCTION

// FUNCTION: 0x1010a930 size=0x4c
void sub_1010a570(const float *q, float *mat);
void sub_10107eb0(const float *mat, float *angles);

void sub_1010a930(const float *q, float *angles)
{
	float mat[12];
	sub_1010a570(q, mat);
	sub_10107eb0(mat, angles);
	float a = angles[1] * 0.017453292f;
	float b = angles[0] * 0.017453292f;
	float c = angles[2] * 0.017453292f;
	angles[0] = c;
	angles[1] = b;
	angles[2] = a;
}
// END FUNCTION

// FUNCTION: 0x1010aba0 size=0x1fb
// mathlib Catmull_Rom_Spline_Tangent, verbatim
// TARGET: sub_1010aba0
#include "Vector.h"

void sub_1010aba0(
	const Vector &p1,
	const Vector &p2,
	const Vector &p3,
	const Vector &p4,
	float t, 
	Vector& output )
{
	float tOne = 3*t*t*0.5f;
	float tTwo = 2*t*0.5f;
	float tThree = 0.5;

	output.Init();

	Vector a, b, c, d;

	// matrix row 1
	VectorScale( p1, -tOne, a );		// 0.5 t^3 * [ (-1*p1) + ( 3*p2) + (-3*p3) + p4 ]
	VectorScale( p2, tOne*3, b );
	VectorScale( p3, tOne*-3, c );
	VectorScale( p4, tOne, d );

	VectorAdd( a, output, output );
	VectorAdd( b, output, output );
	VectorAdd( c, output, output );
	VectorAdd( d, output, output );

	// matrix row 2
	VectorScale( p1, tTwo*2,  a );		// 0.5 t^2 * [ ( 2*p1) + (-5*p2) + ( 4*p3) - p4 ]
	VectorScale( p2, tTwo*-5, b );
	VectorScale( p3, tTwo*4,  c );
	VectorScale( p4, -tTwo,    d );

	VectorAdd( a, output, output );
	VectorAdd( b, output, output );
	VectorAdd( c, output, output );
	VectorAdd( d, output, output );

	// matrix row 3
	VectorScale( p1, -tThree, a );			// 0.5 t * [ (-1*p1) + p3 ]
	VectorScale( p3, tThree,  b );

	VectorAdd( a, output, output );
	VectorAdd( b, output, output );
}
// END FUNCTION

// FUNCTION: 0x1010af20 size=0x16a
#include "Vector.h"

void sub_1010a980(const Vector &p1, const Vector &p2, const Vector &p3, const Vector &p4, float t, Vector &output);

void sub_1010af20(const Vector &p1, const Vector &p2, const Vector &p3, const Vector &p4, float t, Vector &output)
{
	float dt = p3.x - p2.x;
	Vector p1n = p1;
	Vector p4n = p4;
	if (dt != 0.0)
	{
		if (p1.x != p2.x)
			p1n = p2 - (p2 - p1) * (dt / (p2.x - p1.x));
		if (p4.x != p3.x)
			p4n = p3 + (p4 - p3) * (dt / (p4.x - p3.x));
	}
	sub_1010a980(p1n, p2, p3, p4n, t, output);
}
// END FUNCTION

// FUNCTION: 0x1010b090 size=0xa2
#include "Vector.h"
void sub_10108fd0(const Vector &start, float scale, const Vector &direction, Vector &dest);

// TARGET: sub_1010b090
void sub_1010b090(const Vector &p1, const Vector &p2, const Vector &d1, const Vector &d2, float t, Vector &output)
{
	float tSqr = t * t;
	float tCube = t * tSqr;
	float b1 = 2.0f * tCube - 3.0f * tSqr + 1.0f;
	float b2 = -2.0f * tCube + 3.0f * tSqr;
	float b3 = tCube - 2 * tSqr + t;
	float b4 = tCube - tSqr;
	VectorScale(p1, b1, output);
	sub_10108fd0(output, b2, p2, output);
	sub_10108fd0(output, b3, d1, output);
	sub_10108fd0(output, b4, d2, output);
}
// END FUNCTION

// FUNCTION: 0x1010b140 size=0x53
float sub_1010b140(float p1, float p2, float d1, float d2, float t)
{
    float t2 = t * t;
    float t3 = t * t2;
    float r = (2.0f * t3 - 3.0f * t2 + 1.0f) * p1 + (3.0f * t2 - 2.0f * t3) * p2;
    r += (t3 - 2.0f * t2 + t) * d1;
    r += (t3 - t2) * d2;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1010b1a0 size=0x2a
void sub_1010b090(int a, int b, void *pOut, void *pOut2, int c, int d);

// TARGET: sub_1010b1a0
void sub_1010b1a0(int a, int b, int c, int d, int e)
{
    char buf[12];
    sub_1010b090(b, c, buf, buf, d, e);
}
// END FUNCTION

// FUNCTION: 0x1010b1d0 size=0x32
// TARGET: sub_1010b1d0
void __cdecl sub_1010b140(float a, float b, float c, float d, int e);

void __cdecl sub_1010b1d0(float p1, float p2, float p3, int p4)
{
    sub_1010b140(p2, p3, p2 - p1, p3 - p2, p4);
}
// END FUNCTION

// FUNCTION: 0x1010b9d0 size=0xab
#include "Vector.h"
// TARGET: sub_1010b9d0
float sub_1010b9d0(const Vector &mins, const Vector &maxs, const Vector &point)
{
    float flDelta;
    float flDistSqr = 0.0f;
    if (point.x < mins.x) {
        flDelta = mins.x - point.x;
        flDistSqr += flDelta * flDelta;
    } else if (point.x > maxs.x) {
        flDelta = point.x - maxs.x;
        flDistSqr += flDelta * flDelta;
    }
    if (point.y < mins.y) {
        flDelta = mins.y - point.y;
        flDistSqr += flDelta * flDelta;
    } else if (point.y > maxs.y) {
        flDelta = point.y - maxs.y;
        flDistSqr += flDelta * flDelta;
    }
    if (point.z < mins.z) {
        flDelta = mins.z - point.z;
        flDistSqr += flDelta * flDelta;
    } else if (point.z > maxs.z) {
        flDelta = point.z - maxs.z;
        flDistSqr += flDelta * flDelta;
    }
    return flDistSqr;
}
// END FUNCTION

// FUNCTION: 0x1010ba80 size=0x56
#include "Vector.h"
void sub_1010ba80(const Vector &a, const Vector &v, const Vector &c, Vector &out)
{
	for (int i = 0; i < 3; i++) {
		if (c[i] < a[i])
			out[i] = a[i];
		else if (c[i] > v[i])
			out[i] = v[i];
		else
			out[i] = c[i];
	}
}
// END FUNCTION

// FUNCTION: 0x1010bae0 size=0x88
#include "Vector.h"
// TARGET: sub_1010bae0
float sub_1010bae0(const Vector &P, const Vector &vLineA, const Vector &vLineB, Vector &vDir)
{
    VectorSubtract(vLineB, vLineA, vDir);
    float div = DotProduct(vDir, vDir);
    if (div < 0.00001f)
        return 0;
    return (DotProduct(vDir, P) - DotProduct(vDir, vLineA)) / div;
}
// END FUNCTION

// FUNCTION: 0x1010bb70 size=0x57
#include "Vector.h"
float sub_1010bae0(const Vector &a, const Vector &b, const Vector &c, Vector &out);

void sub_1010bb70(const Vector &a, const Vector &b, const Vector &c, Vector &out, float *pT)
{
	Vector dir;
	float t = sub_1010bae0(a, b, c, dir);
	if (pT)
		*pT = t;
	VectorMA(b, t, dir, out);
}
// END FUNCTION

// FUNCTION: 0x1010bc90 size=0x85
#include "Vector.h"
float sub_1010bae0(const Vector &a, const Vector &b, const Vector &c, Vector &out);
void sub_1010bc90(const Vector &a, const Vector &b, const Vector &c, Vector &out, float *pT)
{
	Vector d;
	float t = sub_1010bae0(a, b, c, d);
	if (t > 1.0f)
		t = 1.0f;
	else if (t < 0.0f)
		t = 0.0f;
	if (pT)
		*pT = t;
	out.x = d.x * t + b.x;
	out.y = d.y * t + b.y;
	out.z = d.z * t + b.z;
}
// END FUNCTION

// FUNCTION: 0x1010bde0 size=0x62
float sub_1010bde0(float *p, float *a, float *b, float *d)
{
	d[0] = b[0] - a[0];
	d[1] = b[1] - a[1];
	float len2 = d[1] * d[1] + d[0] * d[0];
	if (len2 < 1e-5f)
		return 0.0f;
	return ((p[0] * d[0] + d[1] * p[1]) - (d[1] * a[1] + a[0] * d[0])) / len2;
}
// END FUNCTION

// FUNCTION: 0x1010be50 size=0x4b
float sub_1010bde0(float *, float *, float *, float *);

void sub_1010be50(float *a, float *b, float *c, float *out, float *pT)
{
	float d[2];
	float t = sub_1010bde0(a, b, c, d);
	if (pT)
		*pT = t;
	out[0] = d[0] * t + b[0];
	out[1] = d[1] * t + b[1];
}
// END FUNCTION

// FUNCTION: 0x1010bf60 size=0x79
float sub_1010bde0(const float *a, const float *b, const float *c, float *dir);

void sub_1010bf60(const float *a, const float *b, const float *c, float *out, float *pT)
{
	float dir[2];
	float t = sub_1010bde0(a, b, c, dir);
	if (t > 1.0f)
		t = 1.0f;
	else if (t < 0.0f)
		t = 0.0f;
	if (pT)
		*pT = t;
	out[0] = dir[0] * t + b[0];
	out[1] = dir[1] * t + b[1];
}
// END FUNCTION

// FUNCTION: 0x1010c230 size=0x4b
// mathlib's _SSE_RSqrtAccurate (Intel / Kipps SSE RSqrt), verbatim
// TARGET: sub_1010c230
float __cdecl sub_1010c230(float a)
{
	float x;
	float half = 0.5f;
	float three = 3.f;

	__asm
	{
		movss   xmm3, a;
		movss   xmm1, half;
		movss   xmm2, three;
		rsqrtss xmm0, xmm3;

		mulss   xmm3, xmm0;
		mulss   xmm1, xmm0;
		mulss   xmm3, xmm0;
		subss   xmm2, xmm3;
		mulss   xmm1, xmm2;

		movss   x,    xmm1;
	}

	return x;
}
// END FUNCTION

// FUNCTION: 0x1010c2e0 size=0x3f
// TARGET: sub_1010c2e0
float sub_1010c2e0(float a, float b, float c)
{
    if (a - b > c) {
        return b + c;
    }
    if (a - b < -c) {
        return b - c;
    }
    return a;
}
// END FUNCTION

// FUNCTION: 0x1010c320 size=0xe1
extern float g_101e34fc;
extern float g_101e34f8;

static inline float anglemod(float a)
{
    a = g_101e34f8 * ((int)(a * g_101e34fc) & 65535);
    return a;
}

// TARGET: sub_1010c320
float sub_1010c320(float target, float value, float speed)
{
    target = anglemod(target);
    value = anglemod(value);
    float delta = target - value;
    if (speed < 0)
        speed = -speed;
    if (delta <= -180) {
        while (delta <= -180)
            delta += 360;
    } else {
        while (delta > 180)
            delta -= 360;
    }
    if (delta > speed)
        value += speed;
    else if (delta < -speed)
        value -= speed;
    else
        value = target;
    return value;
}
// END FUNCTION

// FUNCTION: 0x1010c410 size=0x5f
float sub_1010c410(float a, float b)
{
    float d = a - b;
    if (a > b) {
        while (d > 180.0f)
            d -= 360.0f;
    } else {
        while (d <= -180.0f)
            d += 360.0f;
    }
    return d;
}
// END FUNCTION

// FUNCTION: 0x1010c470 size=0x32
float __cdecl sub_1010c470(float a, float b)
{
    float d = a - b;
    if (d <= -180.0f) {
        return d + 360.0f;
    }
    if (d > 180.0f) {
        d = d - 360.0f;
    }
    return d;
}
// END FUNCTION

// FUNCTION: 0x1010c4b0 size=0x49
float sub_1010c4b0(float angle)
{
	while (angle > 180.0f)
		angle -= 360.0f;
	while (angle <= -180.0f)
		angle += 360.0f;
	return angle;
}
// END FUNCTION

// FUNCTION: 0x1010c500 size=0xa8
#include "Vector.h"
extern float g_101e34f0;

namespace block_1013d6c0 {
float sub_1010c410(float dest, float src)
{
	float delta = dest - src;
	if (dest > src)
	{
		while (delta > 180.0f)
			delta -= 360.0f;
	}
	else
	{
		while (delta <= -180.0f)
			delta += 360.0f;
	}
	return delta;
}
}
using namespace block_1013d6c0;

// TARGET: sub_1010c500
void sub_1010c500(const Vector &p1, const Vector &p2, float t, Vector &out)
{
	if (t > g_101e34f0 && t < 1.0f)
	{
		out.x = sub_1010c410(p2[0], p1[0]) * t + p1[0];
		out.y = sub_1010c410(p2[1], p1[1]) * t + p1[1];
		out.z = sub_1010c410(p2[2], p1[2]) * t + p1[2];
	}
	else
	{
		VectorCopy(t > g_101e34f0 ? p2 : p1, out);
	}
}
// END FUNCTION

// FUNCTION: 0x1010c5b0 size=0x6d
#include "Quaternion.h"

void sub_1010a650(const float *angles, Quaternion &q);
void sub_1010a320(const float *p, float t, float *qt);
void sub_1010a450(const Quaternion &p, const Quaternion &q, Quaternion &qt);
float sub_1010a2b0(Quaternion &q);
void sub_1010a6c0(const Quaternion &q, float *a, float *b);

// TARGET: sub_1010c5b0
void sub_1010c5b0(const float *angles1, const float *angles2, float *pOut1, float *pOut2)
{
	Quaternion q1, q2, qScaled, qResult;
	sub_1010a650(angles1, q1);
	sub_1010a650(angles2, q2);
	sub_1010a320(&q1.x, -1.0f, &qScaled.x);
	sub_1010a450(qScaled, q2, qResult);
	sub_1010a2b0(qResult);
	sub_1010a6c0(qResult, pOut1, pOut2);
}
// END FUNCTION

// FUNCTION: 0x1010df00 size=0x1f
struct CUnk10247770
{
    char m_pad0000[8];
    __int64 m_n08;
    __int64 m_n10;
    void sub_1010df00();
};
void CUnk10247770::sub_1010df00()
{
    if (m_n10 < m_n08)
        m_n10 = m_n08;
}
// END FUNCTION

// FUNCTION: 0x1010df40 size=0x4
struct CUnknown1010df40 { int sub_1010df40(); };
int CUnknown1010df40::sub_1010df40()
{
    return *(int *)((char *)this + 0x20);
}
// END FUNCTION

// FUNCTION: 0x1010df50 size=0x4
struct CUnknown1010df50 { char * sub_1010df50(); };
char * CUnknown1010df50::sub_1010df50()
{
    return (char *)this + 0x18;
}
// END FUNCTION

// FUNCTION: 0x1010df60 size=0x4
struct CUnknown1010df60 { char * sub_1010df60(); };
char * CUnknown1010df60::sub_1010df60()
{
    return (char *)this + 8;
}
// END FUNCTION

// FUNCTION: 0x1010df70 size=0x4
struct CUnknown1010df70 { char * sub_1010df70(); };
char * CUnknown1010df70::sub_1010df70()
{
    return (char *)this + 0x10;
}
// END FUNCTION

// FUNCTION: 0x1010df80 size=0x33
struct CAccum64View {
    char pad0[8];
    __int64 m_qwA;
    char pad1[8];
    __int64 m_qwB;
    void sub_1010df80(const __int64 *pValue);
};

// TARGET: CAccum64View::sub_1010df80
void CAccum64View::sub_1010df80(const __int64 *pValue)
{
    m_qwA += *pValue;
    m_qwB += *pValue;
}
// END FUNCTION

// FUNCTION: 0x1010dfc0 size=0x4
struct CUnknown1010dfc0 { int sub_1010dfc0(); };
int CUnknown1010dfc0::sub_1010dfc0()
{
    return *(int *)((char *)this + 0x24);
}
// END FUNCTION

// FUNCTION: 0x1010dfe0 size=0x84
#include <string.h>
#include <stdlib.h>

extern int g_104df700;

namespace block_102478f0 {
#pragma auto_inline(off)
struct CMeasureSection2 {
	char m_pad[0x24];
	CMeasureSection2 *m_pNext;
	CMeasureSection2 *sub_1010dfc0();
};
extern CMeasureSection2 *g_104df6fc;
CMeasureSection2 *CMeasureSection2::sub_1010dfc0()
{
	return m_pNext;
}
CMeasureSection2 *sub_1010dfd0()
{
	return g_104df6fc;
}
#pragma auto_inline(on)
}
using namespace block_102478f0;
int __cdecl sub_1010e070(const void *a, const void *b);

void sub_1010dfe0()
{
	if (g_104df700 <= 1)
		return;

	CMeasureSection2 *sortarray[128];
	CMeasureSection2 *ms;
	memset(sortarray, 512, (size_t)0.0);

	ms = sub_1010dfd0();
	int c = 0;
	while (ms) {
		sortarray[c++] = ms;
		ms = ms->sub_1010dfc0();
	}

	qsort(sortarray, c, sizeof(CMeasureSection2 *), sub_1010e070);

	int i;
	for (i = 0; i < c - 1; i++)
		sortarray[i]->m_pNext = sortarray[i + 1];
	sortarray[i]->m_pNext = 0;

	g_104df6fc = sortarray[0];
}
// END FUNCTION

// FUNCTION: 0x1010e070 size=0x38
namespace block_102479b0 {
#pragma auto_inline(off)
struct CUnknown10247800
{
	char m_pad0000[0x18];
	__int64 m_key;
	__int64 *sub_1010df50();
};
__int64 *CUnknown10247800::sub_1010df50() { return &m_key; }
#pragma auto_inline(on)
}
using namespace block_102479b0;

// TARGET: sub_1010e070
int sub_1010e070(CUnknown10247800 **pA, CUnknown10247800 **pB)
{
	__int64 *a = (*pA)->sub_1010df50();
	__int64 *b = (*pB)->sub_1010df50();
	if (*a < *b)
		return 1;
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1010e1d0 size=0x1
void sub_1010e1d0()
{
}
// END FUNCTION

// FUNCTION: 0x1010e1e0 size=0x91
#include <string.h>

char *sub_1010e1e0(const char *buf, int end, int *pos, char *out, int outSize)
{
	int start = *pos;
	if (buf != 0 && out != 0 && start < end) {
		int i = start;
		int stop = end;
		if (end - start > outSize - 1)
			stop = start + outSize - 1;
		int found = 0;
		if (start < stop) {
			do {
				if (found)
					break;
				if (buf[i] == '\n')
					found = 1;
				i++;
			} while (i < stop);
			if (i != start) {
				int len = i - start;
				memcpy(out, buf + start, len);
				if (len < outSize)
					out[len] = 0;
				*pos = i;
				return out;
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1010e290 size=0x3c
#include "Pool.h"
// TARGET: Pool::sub_1010e290
Pool *Pool::sub_1010e290(unsigned int cbItem, unsigned int nItemsPerBlock, unsigned int nMode)
{
	if (cbItem < 4)
		cbItem = 4;
	m_cbItem = cbItem;
	m_nItemsPerBlock = nItemsPerBlock;
	m_nMode = nMode;
	m_nPeak = 0;
	sub_1010e2f0();
	sub_1010e360(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1010e340 size=0x18
extern void (__cdecl *g_104df710)(const char *, int);

struct CUnk1013db80 {
    char pad[0x20];
    int m_20;
    void sub_1010e340();
};

void CUnk1013db80::sub_1010e340()
{
    if (g_104df710)
        g_104df710("Memory leak: mempool blocks left in memory: %d\n", m_20);
}
// END FUNCTION

// FUNCTION: 0x1010e3e0 size=0x53
struct Pool {
    unsigned int m_size;
    int m_f4;
    int m_mode;
    int m_f0c[4];
    void *m_pFree;
    int m_nUsed;
    int m_nPeak;
    unsigned int pad;
    unsigned int *sub_1010e3e0(unsigned int n);
};
void __fastcall sub_1010e360(Pool *p);
// TARGET: Pool::sub_1010e3e0
unsigned int *Pool::sub_1010e3e0(unsigned int n)
{
    if (n > m_size)
        return 0;
    unsigned int *p = (unsigned int *)m_pFree;
    if (!p) {
        if (!m_mode)
            return 0;
        sub_1010e360(this);
        p = (unsigned int *)m_pFree;
        if (!p)
            return 0;
    }
    m_nUsed++;
    m_nPeak = m_nPeak > m_nUsed ? m_nPeak : m_nUsed;
    m_pFree = (void *)*p;
    return p;
}
// END FUNCTION

// FUNCTION: 0x1010e440 size=0x1a
struct CUnk1013dce0
{
	char m_pad0000[0x1c];
	int *m_pHead1c;
	int m_n20;

	void sub_1010e440(int *p);
};

// TARGET: sub_1010e440
void CUnk1013dce0::sub_1010e440(int *p)
{
	if (p != 0) {
		m_n20--;
		*p = (int)m_pHead1c;
		m_pHead1c = p;
	}
}
// END FUNCTION

// FUNCTION: 0x1010e460 size=0x5
char __stdcall sub_1010e460(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1010f250 size=0x5
int __stdcall sub_1010f250(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1010f390 size=0x4b
struct SCopy {
    int a, b, c, d;
    char e, f;
    char g[2];
    SCopy &sub_1010f390(const SCopy &o);
};
SCopy &SCopy::sub_1010f390(const SCopy &o)
{
    a = o.a; b = o.b; c = o.c; d = o.d;
    e = o.e; f = o.f;
    for (unsigned i = 0; i < 2; i++)
        g[i] = o.g[i];
    return *this;
}
// END FUNCTION

// FUNCTION: 0x1010f870 size=0x42
#include "CUtlVector96.h"
extern "C" void *memmove(void *, const void *, unsigned int);

void CUtlVector96::sub_1010f870(int elem, int num)
{
    int numToMove = m_size - elem - num;
    if (numToMove > 0 && num > 0)
        memmove(&m_pMemory[elem + num], &m_pMemory[elem], numToMove * sizeof(UtlElem96));
}
// END FUNCTION

// FUNCTION: 0x1010f8c0 size=0x6a
extern void *(*g_101e3104)(void *, int);
extern void *(*g_101e3100)(int);
struct S1011d6a0 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_1010f8c0(int num);
};
// TARGET: S1011d6a0::sub_1010f8c0
void S1011d6a0::sub_1010f8c0(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 1;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_101e3104(m_pMemory, m_nAllocationCount * 0x60);
    else
        m_pMemory = g_101e3100(m_nAllocationCount * 0x60);
}
// END FUNCTION

// FUNCTION: 0x101104a0 size=0x3
struct CUnknown101104a0 { int sub_101104a0(); };
int CUnknown101104a0::sub_101104a0()
{
    return *(int *)this;
}
// END FUNCTION

// FUNCTION: 0x10112250 size=0x19
struct E101b6b60 { unsigned short a; unsigned short pad; int b; };

// TARGET: sub_10112250
void sub_10112250(E101b6b60 *dst, const E101b6b60 *src)
{
	if (dst) {
		dst->a = src->a;
		dst->b = src->b;
	}
}
// END FUNCTION

// FUNCTION: 0x10112270 size=0x116
#include "utlmemory.h"
#include "utlrbtree.h"
#include "CUtlRBTreeOf.h"
struct CUnknown10249fc0_Entry { int m_n0; int m_nKey; };
#include "CUtlRBTree16.h"
extern void *(*g_101e3104)(void *, unsigned int);
extern void *(*g_101e3100)(unsigned int);
struct Mem16 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void Grow(int num)
    {
        if (m_nGrowSize == -1)
            return;
        int a = *(int *)&m_nAllocationCount;
        int nAllocationRequested = a + num;
        if (a < nAllocationRequested) {
            do {
                if (a != 0) {
                    if (m_nGrowSize != 0)
                        a += m_nGrowSize;
                    else
                        a += a;
                } else
                    a = 2;
            } while (a < nAllocationRequested);
            m_nAllocationCount = a;
        }
        if (m_pMemory)
            m_pMemory = g_101e3104(m_pMemory, m_nAllocationCount << 4);
        else
            m_pMemory = g_101e3100(m_nAllocationCount << 4);
    }
};
unsigned short CUtlRBTree16::sub_10112270()
{
    const CUtlRBTree16Of<CUnknown10249fc0_Entry> *tree = (const CUtlRBTree16Of<CUnknown10249fc0_Entry> *)this;
    unsigned short elem;
    if (m_FirstFree == InvalidIndex()) {
        if (m_unk8 == m_TotalElements)
            ((Mem16 *)&m_pElements)->Grow(1);
        elem = m_TotalElements++;
    } else {
        elem = m_FirstFree;
        m_FirstFree = tree->Links(m_FirstFree).m_Right;
    }
    unsigned short *p = (unsigned short *)&m_pElements[elem].m_Data;
    if (p)
        *p = 0xffff;
    return elem;
}
// END FUNCTION

// FUNCTION: 0x10115dd0 size=0x5
int __stdcall sub_10115dd0(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10115de0 size=0x3
char sub_10115de0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10115df0 size=0x3
char sub_10115df0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10115e00 size=0x5
int __stdcall sub_10115e00(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10115f90 size=0x3
char sub_10115f90()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10115fa0 size=0x3
char sub_10115fa0()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10117ba0 size=0x8d
#include "CUtlLinkedList8.h"

void CUtlLinkedList8::sub_10117ba0(unsigned short elem)
{
	if (elem < m_NumAlloced && m_pMemory[elem].m_Previous != elem) {
		CUtlLinkedList8Node *pList = m_pMemory;
		CUtlLinkedList8Node *pElem = &pList[elem];
		if (pElem->m_Previous != 0xffff)
			pList[pElem->m_Previous].m_Next = pElem->m_Next;
		else
			m_Head = pElem->m_Next;
		if (pElem->m_Next != 0xffff)
			pList[pElem->m_Next].m_Previous = pElem->m_Previous;
		else
			m_Tail = pElem->m_Previous;
		pElem->m_Previous = pElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x10117c70 size=0x8d
#include "CUtlLinkedList8.h"

void CUtlLinkedList8::sub_10117c70(unsigned short elem)
{
	if (elem < m_NumAlloced && m_pMemory[elem].m_Previous != elem) {
		CUtlLinkedList8Node *pList = m_pMemory;
		CUtlLinkedList8Node *pElem = &pList[elem];
		if (pElem->m_Previous != 0xffff)
			pList[pElem->m_Previous].m_Next = pElem->m_Next;
		else
			m_Head = pElem->m_Next;
		if (pElem->m_Next != 0xffff)
			pList[pElem->m_Next].m_Previous = pElem->m_Previous;
		else
			m_Tail = pElem->m_Previous;
		pElem->m_Previous = pElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x10117d00 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_10117d00
	void sub_10117d00(int num);
};

void CMem8b_t::sub_10117d00(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x10117d70 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_10117d70
	void sub_10117d70(int num);
};

void CMem8b_t::sub_10117d70(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x101194a0 size=0x5
char __stdcall sub_101194a0(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101194b0 size=0x5
int __stdcall sub_101194b0(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10119d90 size=0x6b
#include "matrix3x4_t.h"
#include <math.h>

void sub_10108510(const matrix3x4_t &mat, int iCol, Vector &out);

int sub_10119d90(const matrix3x4_t &mat, const Vector &dir)
{
	int iBest = 0;
	float flBest = -1.0f;
	for (int i = 0; i < 3; i++) {
		Vector axis;
		sub_10108510(mat, i, axis);
		float flDot = fabs(DotProduct(axis, dir));
		if (flDot > flBest) {
			flBest = flDot;
			iBest = i;
		}
	}
	return iBest;
}
// END FUNCTION

// FUNCTION: 0x10119f70 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_10119f70
	void sub_10119f70(int num);
};

void CMem8b_t::sub_10119f70(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x10119fe0 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10119fe0(int num);
};

void CUtlMemory12::sub_10119fe0(int num)
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
				n = 3;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 12);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x1011a2c0 size=0xfb
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct SImpactRec {
    int m_a;
    int m_b;
    int m_c;
    int m_d;
    float m_f;
    unsigned short m_key;
    unsigned short m_s;
};

struct S10032fb0 {
    SImpactRec *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    int m_Size;
    SImpactRec *m_pElements;
    void sub_1011a3c0(int num);

    SImpactRec &Element(int i) { return m_pMemory[i]; }
    void GrowVector(int num)
    {
        if (m_Size + num > m_nAllocationCount)
            sub_1011a3c0(m_Size + num - m_nAllocationCount);
        m_Size += num;
        m_pElements = m_pMemory;
    }
    void ShiftElementsRight(int elem, int num)
    {
        int numToMove = m_Size - elem - num;
        if (numToMove > 0)
            memmove(&Element(elem + num), &Element(elem), numToMove * sizeof(SImpactRec));
    }
    int InsertBefore(int elem)
    {
        GrowVector(1);
        ShiftElementsRight(elem, 1);
        return elem;
    }
};

void sub_1011a2c0(S10032fb0 *pVec, int a, int b, int c, int d, unsigned int key, unsigned short s, float f)
{
    for (int i = pVec->m_Size - 1; i >= 0; i--) {
        SImpactRec &rec = pVec->Element(i);
        if (key == rec.m_key) {
            if (f > rec.m_f) {
                rec.m_d = d;
                rec.m_a = a;
                rec.m_b = b;
                rec.m_c = c;
                rec.m_s = s;
            }
            rec.m_f += f;
            return;
        }
    }
    int idx = pVec->InsertBefore(pVec->m_Size);
    SImpactRec &rec = pVec->Element(idx);
    rec.m_a = a;
    rec.m_b = b;
    rec.m_c = c;
    rec.m_d = d;
    rec.m_key = (unsigned short)key;
    rec.m_s = s;
    rec.m_f = f;
}
// END FUNCTION

// FUNCTION: 0x1011a3c0 size=0x6a
extern void *(*g_101e3104)(void *, int);
extern void *(*g_101e3100)(int);
struct S10032fb0 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_1011a3c0(int num);
};
// TARGET: S10032fb0::sub_1011a3c0
void S10032fb0::sub_1011a3c0(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 2;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_101e3104(m_pMemory, m_nAllocationCount * 0x18);
    else
        m_pMemory = g_101e3100(m_nAllocationCount * 0x18);
}
// END FUNCTION

// FUNCTION: 0x1011b1d0 size=0x77
#include "CDataObjectAccessSystem.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

void CDataObjectAccessSystem::sub_1011b1d0(int index, void *pData)
{
    g_101e3124[*g_101e3128].name = "CDataObjectAccessSystem::AddDataAccessor";
    g_101e3124[*g_101e3128].ent = g_102de300;
    g_101e3124[*g_101e3128].extra = g_102de300;
    ++*g_101e3128;
    if (index >= 0 && index < 32 && m_data[index] == 0)
        m_data[index] = pData;
    --*g_101e3128;
}
// END FUNCTION

// FUNCTION: 0x1011c140 size=0x6d
struct TraceEnt { const char *a; void *b; void *c; };
struct trace21 { int d[21]; };
extern int *g_101e3128;
extern TraceEnt *g_101e3124;
extern char g_102c156c[];
extern char g_102de300[];
extern trace21 g_104e0b20;
trace21 *sub_1011c140(trace21 *out)
{
    g_101e3124[*g_101e3128].a = g_102c156c;
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    ++*g_101e3128;
    *out = g_104e0b20;
    --*g_101e3128;
    return out;
}
// END FUNCTION

// FUNCTION: 0x1011d590 size=0x1
void sub_1011d590()
{
}
// END FUNCTION

// FUNCTION: 0x1011d5a0 size=0x1
void sub_1011d5a0()
{
}
// END FUNCTION

// FUNCTION: 0x1011ecd0 size=0xb0
#include "UtlVec8.h"

extern void *(__cdecl *g_101e3100)(unsigned int);
extern void *(__cdecl *g_101e3104)(void *, unsigned int);

inline void UtlVec8::GrowVector(int num)
{
	if (m_Size + num > m_allocationCount && m_growSize != -1) {
		if (m_allocationCount < m_Size + num) {
			do {
				m_allocationCount = m_allocationCount ? (m_growSize ? m_allocationCount + m_growSize : m_allocationCount + m_allocationCount) : 4;
			} while (m_allocationCount < m_Size + num);
		}
		if (m_pMemory)
			m_pMemory = (char *)g_101e3104(m_pMemory, m_allocationCount * 8);
		else
			m_pMemory = (char *)g_101e3100(m_allocationCount * 8);
	}
	m_Size += num;
	m_pElements = (UtlVec8Elem *)m_pMemory;
}

int UtlVec8::sub_1011ecd0(int elem, const UtlVec8Elem *src)
{
	GrowVector(1);
	int toMove = m_Size - elem - 1;
	if (toMove > 0)
		sub_101d0f30((UtlVec8Elem *)m_pMemory + elem + 1, (UtlVec8Elem *)m_pMemory + elem, toMove * 8);
	UtlVec8Elem *dst = (UtlVec8Elem *)m_pMemory + elem;
	if (dst)
		*dst = *src;
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011ed80 size=0xb0
#include "UtlVec8.h"

extern void *(__cdecl *g_101e3100)(unsigned int);
extern void *(__cdecl *g_101e3104)(void *, unsigned int);

inline void UtlVec8::GrowVector(int num)
{
	if (m_Size + num > m_allocationCount && m_growSize != -1) {
		if (m_allocationCount < m_Size + num) {
			do {
				m_allocationCount = m_allocationCount ? (m_growSize ? m_allocationCount + m_growSize : m_allocationCount + m_allocationCount) : 4;
			} while (m_allocationCount < m_Size + num);
		}
		if (m_pMemory)
			m_pMemory = (char *)g_101e3104(m_pMemory, m_allocationCount * 8);
		else
			m_pMemory = (char *)g_101e3100(m_allocationCount * 8);
	}
	m_Size += num;
	m_pElements = (UtlVec8Elem *)m_pMemory;
}

int UtlVec8::sub_1011ed80(int elem, const UtlVec8Elem *src)
{
	GrowVector(1);
	int toMove = m_Size - elem - 1;
	if (toMove > 0)
		sub_101d0f30((UtlVec8Elem *)m_pMemory + elem + 1, (UtlVec8Elem *)m_pMemory + elem, toMove * 8);
	UtlVec8Elem *dst = (UtlVec8Elem *)m_pMemory + elem;
	if (dst)
		*dst = *src;
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011ee30 size=0xb0
#include "UtlVec8.h"

extern void *(__cdecl *g_101e3100)(unsigned int);
extern void *(__cdecl *g_101e3104)(void *, unsigned int);

inline void UtlVec8::GrowVector(int num)
{
	if (m_Size + num > m_allocationCount && m_growSize != -1) {
		if (m_allocationCount < m_Size + num) {
			do {
				m_allocationCount = m_allocationCount ? (m_growSize ? m_allocationCount + m_growSize : m_allocationCount + m_allocationCount) : 4;
			} while (m_allocationCount < m_Size + num);
		}
		if (m_pMemory)
			m_pMemory = (char *)g_101e3104(m_pMemory, m_allocationCount * 8);
		else
			m_pMemory = (char *)g_101e3100(m_allocationCount * 8);
	}
	m_Size += num;
	m_pElements = (UtlVec8Elem *)m_pMemory;
}

int UtlVec8::sub_1011ee30(int elem, const UtlVec8Elem *src)
{
	GrowVector(1);
	int toMove = m_Size - elem - 1;
	if (toMove > 0)
		sub_101d0f30((UtlVec8Elem *)m_pMemory + elem + 1, (UtlVec8Elem *)m_pMemory + elem, toMove * 8);
	UtlVec8Elem *dst = (UtlVec8Elem *)m_pMemory + elem;
	if (dst)
		*dst = *src;
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011eee0 size=0xb0
#include "UtlVec8.h"

extern void *(__cdecl *g_101e3100)(unsigned int);
extern void *(__cdecl *g_101e3104)(void *, unsigned int);

inline void UtlVec8::GrowVector(int num)
{
	if (m_Size + num > m_allocationCount && m_growSize != -1) {
		if (m_allocationCount < m_Size + num) {
			do {
				m_allocationCount = m_allocationCount ? (m_growSize ? m_allocationCount + m_growSize : m_allocationCount + m_allocationCount) : 4;
			} while (m_allocationCount < m_Size + num);
		}
		if (m_pMemory)
			m_pMemory = (char *)g_101e3104(m_pMemory, m_allocationCount * 8);
		else
			m_pMemory = (char *)g_101e3100(m_allocationCount * 8);
	}
	m_Size += num;
	m_pElements = (UtlVec8Elem *)m_pMemory;
}

int UtlVec8::sub_1011eee0(int elem, const UtlVec8Elem *src)
{
	GrowVector(1);
	int toMove = m_Size - elem - 1;
	if (toMove > 0)
		sub_101d0f30((UtlVec8Elem *)m_pMemory + elem + 1, (UtlVec8Elem *)m_pMemory + elem, toMove * 8);
	UtlVec8Elem *dst = (UtlVec8Elem *)m_pMemory + elem;
	if (dst)
		*dst = *src;
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011f020 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1011f020()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1011f050 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1011f050()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1011f110 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1011f110()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1011f140 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1011f140()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1011f200 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1011f200()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1011f230 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1011f230()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1011f2f0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1011f2f0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1011f320 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1011f320()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1011f350 size=0x132
#include "CUtlVector20.h"
#include "CUtlMemory20.h"

extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

struct E8;
struct E8x
{
	int a;
	int b;
};

struct CMem8c_t
{
	E8x *m_p;
	int m_alloc;
	int m_grow;
	int m_size;
	int m_pad;
	int sub_1011f490(int elem, int num, const E8 *pToCopy);
};

int CUtlVector20::sub_1011f350(int elem, int num, const void *pToCopy)
{
	if (num == 0)
		return elem;
	if (m_size + num > m_allocationCount)
		((CUtlMemory20 *)this)->sub_1011fd10(m_size + num - m_allocationCount);
	m_size += num;
	m_pElements = m_pMemory;
	int toMove = m_size - elem - num;
	if (toMove > 0 && num > 0)
		sub_101d0f30(m_pMemory + (elem + num) * 20, m_pMemory + elem * 20, toMove * 20);
	if (num > 0) {
		int off = elem * 20;
		for (int i = num; i > 0; i--) {
			int *p = (int *)(m_pMemory + off);
			if (p) {
				p[0] = 0;
				p[1] = 0;
				p[2] = 0;
				p[3] = 0;
				p[4] = 0;
			}
			off += 20;
		}
	}
	if (pToCopy != 0 && num > 0) {
		const CMem8c_t *src = (const CMem8c_t *)pToCopy;
		for (int i = 0; i < num; i++) {
			const CMem8c_t *s = src + i;
			CMem8c_t *dst = (CMem8c_t *)m_pMemory + elem + i;
			int n = s->m_size;
			const E8x *se = s->m_p;
			dst->m_size = 0;
			dst->sub_1011f490(0, n, 0);
			for (int j = 0; j < n; j++) {
				E8x *d = dst->m_p;
				d[j].a = se[j].a;
				d[j].b = se[j].b;
			}
		}
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011f490 size=0xba
extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

struct E8 { int a, b; };

struct CMem8c_t {
	E8 *m_pMemory; int m_nAllocationCount; int m_nGrowSize; int m_Size; E8 *m_pElements;
	void sub_1011f550(int num);
	// TARGET: CMem8c_t::sub_1011f490
	int sub_1011f490(int elem, int num, const E8 *src);
};

int CMem8c_t::sub_1011f490(int elem, int num, const E8 *src)
{
	if (num == 0)
		return elem;
	if (m_Size + num > m_nAllocationCount)
		sub_1011f550(m_Size - m_nAllocationCount + num);
	m_Size += num;
	m_pElements = m_pMemory;
	int toMove = m_Size - elem - num;
	if (toMove > 0) {
		if (num > 0)
			sub_101d0f30(&m_pMemory[elem + num], &m_pMemory[elem], toMove * 8);
	}
	for (int i = 0; i < num; i++) {
		E8 *p = &m_pMemory[elem + i];
		if (p) { p->a = 0; p->b = 0; }
	}
	if (src) {
		for (int i = 0; i < num; i++)
			m_pMemory[elem + i] = src[i];
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011f550 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_1011f550
	void sub_1011f550(int num);
};

void CMem8b_t::sub_1011f550(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x1011f5c0 size=0x132
#include "CUtlVector20.h"
#include "CUtlMemory20.h"

extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

struct E8;
struct E8x
{
	int a;
	int b;
};

struct CMem8c_t
{
	E8x *m_p;
	int m_alloc;
	int m_grow;
	int m_size;
	int m_pad;
	int sub_1011f700(int elem, int num, const E8 *pToCopy);
};

int CUtlVector20::sub_1011f5c0(int elem, int num, const void *pToCopy)
{
	if (num == 0)
		return elem;
	if (m_size + num > m_allocationCount)
		((CUtlMemory20 *)this)->sub_1011fd80(m_size + num - m_allocationCount);
	m_size += num;
	m_pElements = m_pMemory;
	int toMove = m_size - elem - num;
	if (toMove > 0 && num > 0)
		sub_101d0f30(m_pMemory + (elem + num) * 20, m_pMemory + elem * 20, toMove * 20);
	if (num > 0) {
		int off = elem * 20;
		for (int i = num; i > 0; i--) {
			int *p = (int *)(m_pMemory + off);
			if (p) {
				p[0] = 0;
				p[1] = 0;
				p[2] = 0;
				p[3] = 0;
				p[4] = 0;
			}
			off += 20;
		}
	}
	if (pToCopy != 0 && num > 0) {
		const CMem8c_t *src = (const CMem8c_t *)pToCopy;
		for (int i = 0; i < num; i++) {
			const CMem8c_t *s = src + i;
			CMem8c_t *dst = (CMem8c_t *)m_pMemory + elem + i;
			int n = s->m_size;
			const E8x *se = s->m_p;
			dst->m_size = 0;
			dst->sub_1011f700(0, n, 0);
			for (int j = 0; j < n; j++) {
				E8x *d = dst->m_p;
				d[j].a = se[j].a;
				d[j].b = se[j].b;
			}
		}
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011f700 size=0xba
extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

struct E8 { int a, b; };

struct CMem8c_t {
	E8 *m_pMemory; int m_nAllocationCount; int m_nGrowSize; int m_Size; E8 *m_pElements;
	void sub_1011f7c0(int num);
	// TARGET: CMem8c_t::sub_1011f700
	int sub_1011f700(int elem, int num, const E8 *src);
};

int CMem8c_t::sub_1011f700(int elem, int num, const E8 *src)
{
	if (num == 0)
		return elem;
	if (m_Size + num > m_nAllocationCount)
		sub_1011f7c0(m_Size - m_nAllocationCount + num);
	m_Size += num;
	m_pElements = m_pMemory;
	int toMove = m_Size - elem - num;
	if (toMove > 0) {
		if (num > 0)
			sub_101d0f30(&m_pMemory[elem + num], &m_pMemory[elem], toMove * 8);
	}
	for (int i = 0; i < num; i++) {
		E8 *p = &m_pMemory[elem + i];
		if (p) { p->a = 0; p->b = 0; }
	}
	if (src) {
		for (int i = 0; i < num; i++)
			m_pMemory[elem + i] = src[i];
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011f7c0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_1011f7c0
	void sub_1011f7c0(int num);
};

void CMem8b_t::sub_1011f7c0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x1011f830 size=0x132
#include "CUtlVector20.h"
#include "CUtlMemory20.h"

extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

struct E8;
struct E8x
{
	int a;
	int b;
};

struct CMem8c_t
{
	E8x *m_p;
	int m_alloc;
	int m_grow;
	int m_size;
	int m_pad;
	int sub_1011f970(int elem, int num, const E8 *pToCopy);
};

int CUtlVector20::sub_1011f830(int elem, int num, const void *pToCopy)
{
	if (num == 0)
		return elem;
	if (m_size + num > m_allocationCount)
		((CUtlMemory20 *)this)->sub_1011fdf0(m_size + num - m_allocationCount);
	m_size += num;
	m_pElements = m_pMemory;
	int toMove = m_size - elem - num;
	if (toMove > 0 && num > 0)
		sub_101d0f30(m_pMemory + (elem + num) * 20, m_pMemory + elem * 20, toMove * 20);
	if (num > 0) {
		int off = elem * 20;
		for (int i = num; i > 0; i--) {
			int *p = (int *)(m_pMemory + off);
			if (p) {
				p[0] = 0;
				p[1] = 0;
				p[2] = 0;
				p[3] = 0;
				p[4] = 0;
			}
			off += 20;
		}
	}
	if (pToCopy != 0 && num > 0) {
		const CMem8c_t *src = (const CMem8c_t *)pToCopy;
		for (int i = 0; i < num; i++) {
			const CMem8c_t *s = src + i;
			CMem8c_t *dst = (CMem8c_t *)m_pMemory + elem + i;
			int n = s->m_size;
			const E8x *se = s->m_p;
			dst->m_size = 0;
			dst->sub_1011f970(0, n, 0);
			for (int j = 0; j < n; j++) {
				E8x *d = dst->m_p;
				d[j].a = se[j].a;
				d[j].b = se[j].b;
			}
		}
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011f970 size=0xba
extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

struct E8 { int a, b; };

struct CMem8c_t {
	E8 *m_pMemory; int m_nAllocationCount; int m_nGrowSize; int m_Size; E8 *m_pElements;
	void sub_1011fa30(int num);
	// TARGET: CMem8c_t::sub_1011f970
	int sub_1011f970(int elem, int num, const E8 *src);
};

int CMem8c_t::sub_1011f970(int elem, int num, const E8 *src)
{
	if (num == 0)
		return elem;
	if (m_Size + num > m_nAllocationCount)
		sub_1011fa30(m_Size - m_nAllocationCount + num);
	m_Size += num;
	m_pElements = m_pMemory;
	int toMove = m_Size - elem - num;
	if (toMove > 0) {
		if (num > 0)
			sub_101d0f30(&m_pMemory[elem + num], &m_pMemory[elem], toMove * 8);
	}
	for (int i = 0; i < num; i++) {
		E8 *p = &m_pMemory[elem + i];
		if (p) { p->a = 0; p->b = 0; }
	}
	if (src) {
		for (int i = 0; i < num; i++)
			m_pMemory[elem + i] = src[i];
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011fa30 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_1011fa30
	void sub_1011fa30(int num);
};

void CMem8b_t::sub_1011fa30(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x1011faa0 size=0x132
#include "CUtlVector20.h"
#include "CUtlMemory20.h"

extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

struct E8;
struct E8x
{
	int a;
	int b;
};

struct CMem8c_t
{
	E8x *m_p;
	int m_alloc;
	int m_grow;
	int m_size;
	int m_pad;
	int sub_1011fbe0(int elem, int num, const E8 *pToCopy);
};

int CUtlVector20::sub_1011faa0(int elem, int num, const void *pToCopy)
{
	if (num == 0)
		return elem;
	if (m_size + num > m_allocationCount)
		((CUtlMemory20 *)this)->sub_1011fe60(m_size + num - m_allocationCount);
	m_size += num;
	m_pElements = m_pMemory;
	int toMove = m_size - elem - num;
	if (toMove > 0 && num > 0)
		sub_101d0f30(m_pMemory + (elem + num) * 20, m_pMemory + elem * 20, toMove * 20);
	if (num > 0) {
		int off = elem * 20;
		for (int i = num; i > 0; i--) {
			int *p = (int *)(m_pMemory + off);
			if (p) {
				p[0] = 0;
				p[1] = 0;
				p[2] = 0;
				p[3] = 0;
				p[4] = 0;
			}
			off += 20;
		}
	}
	if (pToCopy != 0 && num > 0) {
		const CMem8c_t *src = (const CMem8c_t *)pToCopy;
		for (int i = 0; i < num; i++) {
			const CMem8c_t *s = src + i;
			CMem8c_t *dst = (CMem8c_t *)m_pMemory + elem + i;
			int n = s->m_size;
			const E8x *se = s->m_p;
			dst->m_size = 0;
			dst->sub_1011fbe0(0, n, 0);
			for (int j = 0; j < n; j++) {
				E8x *d = dst->m_p;
				d[j].a = se[j].a;
				d[j].b = se[j].b;
			}
		}
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011fbe0 size=0xba
extern "C" void *__cdecl sub_101d0f30(void *, const void *, unsigned int);

struct E8 { int a, b; };

struct CMem8c_t {
	E8 *m_pMemory; int m_nAllocationCount; int m_nGrowSize; int m_Size; E8 *m_pElements;
	void sub_1011fca0(int num);
	// TARGET: CMem8c_t::sub_1011fbe0
	int sub_1011fbe0(int elem, int num, const E8 *src);
};

int CMem8c_t::sub_1011fbe0(int elem, int num, const E8 *src)
{
	if (num == 0)
		return elem;
	if (m_Size + num > m_nAllocationCount)
		sub_1011fca0(m_Size - m_nAllocationCount + num);
	m_Size += num;
	m_pElements = m_pMemory;
	int toMove = m_Size - elem - num;
	if (toMove > 0) {
		if (num > 0)
			sub_101d0f30(&m_pMemory[elem + num], &m_pMemory[elem], toMove * 8);
	}
	for (int i = 0; i < num; i++) {
		E8 *p = &m_pMemory[elem + i];
		if (p) { p->a = 0; p->b = 0; }
	}
	if (src) {
		for (int i = 0; i < num; i++)
			m_pMemory[elem + i] = src[i];
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1011fca0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_1011fca0
	void sub_1011fca0(int num);
};

void CMem8b_t::sub_1011fca0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x1011fd10 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory20 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1011fd10(int num);
};

void CUtlMemory20::sub_1011fd10(int num)
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
				n = 2;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 20);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 20);
}
// END FUNCTION

// FUNCTION: 0x1011fd80 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory20 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1011fd80(int num);
};

void CUtlMemory20::sub_1011fd80(int num)
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
				n = 2;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 20);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 20);
}
// END FUNCTION

// FUNCTION: 0x1011fdf0 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory20 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1011fdf0(int num);
};

void CUtlMemory20::sub_1011fdf0(int num)
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
				n = 2;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 20);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 20);
}
// END FUNCTION

// FUNCTION: 0x1011fe60 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory20 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1011fe60(int num);
};

void CUtlMemory20::sub_1011fe60(int num)
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
				n = 2;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 20);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 20);
}
// END FUNCTION

// FUNCTION: 0x10120140 size=0x46
#include <string.h>
struct CBlock { int d[12]; };
struct CObj {
	char pad[0x404];
	char m_szName[0x20c];
	CBlock m_Block;	// 0x610
};
extern CBlock g_10235b5c;
// TARGET: sub_10120140
void sub_10120140(CObj *p)
{
	p->m_Block = g_10235b5c;
	p->m_Block.d[1] = 0x42aa0000;
	p->m_Block.d[2] = 0x6753c21c;
	strcpy(p->m_szName, "default");
}
// END FUNCTION

// FUNCTION: 0x101201b0 size=0x1
void sub_101201b0()
{
}
// END FUNCTION

// FUNCTION: 0x101201c0 size=0x6a
#include <malloc.h>

struct IRestoreSrc {
    virtual int StartBlock(int a, const char *name, int c);
    virtual void EndBlock(int h);
    virtual void ReadBytes(char *buf, int size, int h);
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual int BlockSize(int h);
};
struct IFieldSink {
    virtual void v0();
    virtual void SetString(int a, const char *s);
};
extern char g_102b6618[];

void sub_101201c0(int a, IFieldSink *sink, IRestoreSrc *src)
{
    int h = src->StartBlock(a, g_102b6618, 0);
    if (h) {
        int size = src->BlockSize(h);
        char *buf = (char *)_alloca(size + 1);
        src->ReadBytes(buf, size, h);
        src->EndBlock(h);
        buf[size] = 0;
        sink->SetString(a, buf);
    }
}
// END FUNCTION

// FUNCTION: 0x101205d0 size=0x39
struct CUnknown10158b40Obj {
    virtual void vfunc0();
    virtual void vfunc1(int nA, int nB);
};

extern CUnknown10158b40Obj *g_104e0c98;
void sub_10120560(void *pA, void *pB);

typedef int (__fastcall *CUnknownHandleFn)(void *pThis);

// TARGET: sub_101205d0
void sub_101205d0(void *pA, void *pB)
{
    g_104e0c98->vfunc1(((CUnknownHandleFn)((void **)*(void **)pA)[6])(pA), ((CUnknownHandleFn)((void **)*(void **)pB)[6])(pB));
    sub_10120560(pA, pB);
}
// END FUNCTION

// FUNCTION: 0x10120630 size=0x24
class IPlaceholder10158bc0
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(int a, int b);
};
extern IPlaceholder10158bc0 *g_104e0c98;
void sub_10120560(int a, int b);

// TARGET: sub_10120630
void sub_10120630(int a, int b)
{
    g_104e0c98->vfunc2(a, b);
    sub_10120560(a, b);
}
// END FUNCTION

// FUNCTION: 0x10120660 size=0x24
class IPlaceholder10158c00
{
public:
	virtual void vfunc0();
	virtual void vfunc1(int a, int b);
};
extern IPlaceholder10158c00 *g_104e0c98;
void sub_10120560(int a, int b);

// TARGET: sub_10120660
void sub_10120660(int a, int b)
{
    g_104e0c98->vfunc1(a, b);
    sub_10120560(a, b);
}
// END FUNCTION

// FUNCTION: 0x101206d0 size=0x5
namespace lifted {
int sub_100cd9a0();
}
int sub_101206d0()
{
    return lifted::sub_100cd9a0();
}
// END FUNCTION

// FUNCTION: 0x10120730 size=0x25
struct CUnknown109ef590
{
    int m_a;
    int m_b;
    int m_c[0x200];
};

extern CUnknown109ef590 g_104e0ca0;

// TARGET: sub_10120730
void sub_10120730()
{
    g_104e0ca0.m_a = -1;
    g_104e0ca0.m_b = 0;
    for (int i = 0; i < 0x200; i++)
        g_104e0ca0.m_c[i] = 0;
}
// END FUNCTION

// FUNCTION: 0x101207b0 size=0x18
struct CBits1042d740
{
	unsigned int m_bits;

	void sub_101207b0(int v);
};

// TARGET: sub_101207b0
void CBits1042d740::sub_101207b0(int v)
{
	m_bits = ((v << 6) ^ m_bits) & 0xffc0 ^ m_bits;
}
// END FUNCTION

// FUNCTION: 0x101207d0 size=0xd8
#include "CUnknown1042d770.h"
extern "C" void *__cdecl memset(void *, int, unsigned int);
unsigned long sub_101208b0(const char *a, const char *b, int n);

struct IdRecord { unsigned int id; int n; };
struct IdTable
{
	int key;
	int count;
	IdRecord rec[256];
};
extern IdTable g_104e0ca0;

namespace block_1042d770 {
struct CUnknown1042d6d0
{
	unsigned int m_bit0 : 1;
	unsigned int m_a : 5;
	unsigned int m_rest : 26;
	void sub_10120770(int v);
};
void CUnknown1042d6d0::sub_10120770(int v)
{
	m_a = v;
}
struct CBits1042d740
{
	unsigned int m_bits0 : 6;
	unsigned int m_b : 10;
	unsigned int m_rest : 16;
	void sub_101207b0(int v);
};
void CBits1042d740::sub_101207b0(int v)
{
	m_b = v;
}
}
using namespace block_1042d770;

static inline IdRecord *FindId(IdTable &t, int key, unsigned int id)
{
	if (key != t.key) {
		t.key = key;
		t.count = 0;
		memset(t.rec, 0, sizeof(t.rec));
	}
	IdRecord *p = 0;
	int i = 0;
	if (i < t.count) {
		IdRecord *q = t.rec;
		do {
			if (q->id == id) {
				p = q;
				break;
			}
			i++;
			q++;
		} while (i < t.count);
	}
	if (!p) {
		if (t.count >= 256)
			return 0;
		i = t.count + 1; p = &t.rec[i - 1]; t.count = i; p->id = id; p->n = 0;
	}
	return p;
}

static inline int NextSerial(IdTable &t, int key, unsigned int id)
{
	IdRecord *p = FindId(t, key, id);
	if (!p)
		return 0;
	return ++p->n - 1;
}

void CUnknown1042d770::sub_101207d0(int a, int b, const char *pszName1, const char *pszName2, int n)
{
	((CUnknown1042d6d0 *)this)->sub_10120770(a);
	((CBits1042d740 *)this)->sub_101207b0(b);
	m_id = sub_101208b0(pszName1, pszName2, n);
	sub_10120990(NextSerial(g_104e0ca0, b, m_id));
}
// END FUNCTION

// FUNCTION: 0x10120990 size=0x18
struct CBits1042d9c0
{
	unsigned int m_bits;

	void sub_10120990(int v);
};

// TARGET: sub_10120990
void CBits1042d9c0::sub_10120990(int v)
{
	unsigned int s = v << 28;
	m_bits = ((m_bits ^ s) & 0xfffffff) ^ s;
}
// END FUNCTION

// FUNCTION: 0x101209c0 size=0x1b
// TARGET: sub_101209c0
struct CUnk1042da10 {
    unsigned int m_flags;
    void sub_101209c0(char bSet);
};
void CUnk1042da10::sub_101209c0(char bSet)
{
    m_flags = ((((bSet != 0) ^ m_flags) & 1) ^ m_flags);
}
// END FUNCTION

// FUNCTION: 0x101209f0 size=0x3
struct CUnknown101209f0 { int sub_101209f0(); };
int CUnknown101209f0::sub_101209f0()
{
    return *(int *)this;
}
// END FUNCTION

// FUNCTION: 0x10120a10 size=0x7e
#include "CUnknown1042d9a0.h"

// sub_1042d700, sub_1042d720, sub_1042d9a0, sub_10011e4b (0x1042d9f0): the game compiled them before this function, in the same unit, so VC6 knows which registers they keep;
// the block's own copy, in a namespace of its own: no second definition of the game's name.
namespace block_1042daa0 {
unsigned __fastcall sub_10120790(unsigned *p) { return *p >> 1 & 0x1f; }
unsigned __fastcall sub_101207a0(unsigned *p) { return *p >> 6 & 0x3ff; }
unsigned __fastcall sub_10120980(unsigned *p) { return ((unsigned short *)p)[1] & 0xfff; }
unsigned __fastcall sub_101209b0(unsigned *p) { return *p >> 28; }
}
using namespace block_1042daa0;

// TARGET: CUnknown1042d9a0::sub_10120a10
char CUnknown1042d9a0::sub_10120a10(CUnknown1042d9a0 *other)
{
    if (this == other)
        return 1;
    if (sub_10120790((unsigned *)this) != sub_10120790((unsigned *)other))
        return 0;
    if (sub_101207a0((unsigned *)this) != sub_101207a0((unsigned *)other))
        return 0;
    if (block_1042daa0::sub_10120980((unsigned *)this) != block_1042daa0::sub_10120980((unsigned *)other))
        return 0;
    return sub_101209b0((unsigned *)this) == sub_101209b0((unsigned *)other);
}
// END FUNCTION

// FUNCTION: 0x10125790 size=0x5
namespace lifted {
int sub_10094890();
}
int sub_10125790()
{
    return lifted::sub_10094890();
}
// END FUNCTION

// FUNCTION: 0x10125dc0 size=0x5
int __stdcall sub_10125dc0(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10126a30 size=0x39
void sub_10120660(int a, int b);

struct CUnknown1019bf80Entry {
    int m_a;
    int m_b;
    int m_nIndex;
    int m_c;
    int m_d;
    int m_e;
};

struct CUnknown1019bf80List {
    int m_nCount;
    int m_pad0004[4];
    CUnknown1019bf80Entry m_entries[1];
};

// TARGET: sub_10126a30
void sub_10126a30(CUnknown1019bf80List *pList)
{
    int i = 0;
    if (pList->m_nCount > 0) {
        CUnknown1019bf80Entry *pEntry = pList->m_entries;
        do {
            if (pEntry->m_nIndex >= 0) {
                sub_10120660(pEntry->m_a, pList->m_entries[pEntry->m_nIndex].m_a);
            }
            i++;
            pEntry++;
        } while (i < pList->m_nCount);
    }
}
// END FUNCTION

// FUNCTION: 0x10126a70 size=0x3b
struct Elem
{
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual void vfunc5();
    virtual void vfunc6();
    virtual void vfunc7();
    virtual void vfunc8();
    virtual void vfunc9();
    virtual void vfunc10();
    virtual void vfunc11();
    virtual void vfunc12();
    virtual void vfunc13();
    virtual void vfunc14();
    virtual void vfunc15();
    virtual void vfunc16();
    virtual void vfunc17();
    virtual void vfunc18();
    virtual void vfunc19();
    virtual void vfunc20();
    virtual void vfunc21(int a);
};

struct Ent
{
    Elem *p;
    int m_a[5];
};

struct Holder
{
    int count;
    Elem *tail;
    int m_pad[3];
    Ent ents[1];
};

// TARGET: sub_10126a70
void sub_10126a70(Holder *h)
{
    for (int i = 0; i < h->count; i++) {
        h->ents[i].p->vfunc21(1);
        h->ents[i].p->vfunc2();
    }
    if (h->tail)
        h->tail->vfunc1();
}
// END FUNCTION

// FUNCTION: 0x10127000 size=0xdf
struct V3 { float x, y, z; };

struct CPhysConstraintLike
{
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4();
    virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
    virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14();
    virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
    virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24();
    virtual void s25(); virtual void s26(); virtual void s27();
    virtual void SetA(V3 *pA, V3 *pB);
    virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33();
    virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38();
    virtual void s39(); virtual void s40();
    virtual void SetB(V3 *pA, V3 *pB);
};

struct CRagdollEntry
{
    CPhysConstraintLike *m_pConstraint;
    char m_pad[0x14];
};

struct CRagdollBones
{
    int m_nBones;
    char m_pad04[0x10];
    CRagdollEntry m_entries[1];
};

struct CBoneSetBase
{
    int m_pad;
    char *m_pBones;
};

void sub_1008a3b0(V3 *pOut1, V3 *pOut2, char *pBoneA, char *pBoneB, int a);
void sub_101082f0(V3 *pIn, char *pBone, V3 *pOut);

void sub_10127000(CRagdollBones *pRagdoll, CBoneSetBase *pSetA, CBoneSetBase *pSetB, int a)
{
    V3 v28, v1c, v24, v30;
    int i = 0;
    if (pRagdoll->m_nBones > 0) {
        do {
            int off = *(int *)((char *)pRagdoll + 0x2d8 + i * 4) * 0x30;
            sub_1008a3b0(&v24, &v30, pSetA->m_pBones + off, pSetB->m_pBones + off, a);
            sub_101082f0(&v24, pSetB->m_pBones + off, &v1c);
            sub_101082f0(&v30, pSetB->m_pBones + off, &v28);
            pRagdoll->m_entries[i].m_pConstraint->SetA(&v24, &v1c);
            pRagdoll->m_entries[i].m_pConstraint->SetA(&v30, &v28);
            pRagdoll->m_entries[i].m_pConstraint->SetB(&v24, &v30);
            i++;
        } while (i < pRagdoll->m_nBones);
    }
}
// END FUNCTION

// FUNCTION: 0x101270e0 size=0xf3
#include "Vector.h"
#include "IPhysicsObject.h"

struct CBoneSetBase { int m_n0; char *m_pMatrices; };
struct CRagdollBones { int m_nCount; char m_pad[0x10]; struct { IPhysicsObject *m_pObject; char m_pad[0x14]; } m_Elements[1]; };
struct V3 { float x, y, z; };
struct V4 { float x, y, z, w; };

void sub_10108450(const void *pIn, void *pOut);
void sub_10107e40(const void *pMatrix, void *pQuat, void *pAngles);
void sub_1010a6c0(const void *pQuat, void *pAxis, float *pAngle);

void sub_101270e0(CRagdollBones *pBones, CBoneSetBase *pSet)
{
	for (int i = 0; i < pBones->m_nCount; i++) {
		char matrix[0x30];
		V4 quat;
		V3 velA;
		V3 velB;
		V3 ang2copy;
		V3 ang2;
		V3 axis;
		float angle;
		sub_10108450(pSet->m_pMatrices + i * 0x30, matrix);
		sub_10107e40(matrix, &quat, &ang2);
		sub_1010a6c0(&quat, &axis, &angle);
		axis.x = axis.x * angle;
		ang2copy = ang2;
		axis.y = axis.y * angle;
		axis.z = axis.z * angle;
		pBones->m_Elements[i].m_pObject->vfunc28(&velA, &ang2copy);
		pBones->m_Elements[i].m_pObject->vfunc28(&velB, &axis);
		pBones->m_Elements[i].m_pObject->vfunc41((const Vector *)&velA, (const Vector *)&velB);
	}
}
// END FUNCTION

// FUNCTION: 0x101271e0 size=0x7d
struct IApi {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(void *p);
    virtual void v21(); virtual void v22();
    virtual void v23(void *p);
    virtual void v24(void *p);
};
extern IApi *g_104e0c90;
struct Item24 { int a; int b; int c; int d; int e; int f; };
struct Block {
    int count;
    void *m_p;
    int pad[2];
    int m_u14;
    Item24 items[1];
};
void sub_101271e0(int *s)
{
    int *b = s;
    if (*b != 0) {
        int i = 0;
        int *p;
        if (0 < *b) {
            p = b + 6;
            do {
                g_104e0c90->v23((void *)*p);
                *p = 0;
                i++;
                p += 6;
            } while (i < *b);
        }
        i = 0;
        if (0 < *b) {
            p = b + 5;
            do {
                g_104e0c90->v20((void *)*p);
                *p = 0;
                i++;
                p += 6;
            } while (i < *b);
        }
        g_104e0c90->v24((void *)b[1]);
        b[1] = 0;
        *b = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x10127320 size=0x87
#include "Vector.h"
struct CRagdollBoneMatrix { float m_f[12]; };
struct CRagdollPhysObject
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37();
	virtual void vfunc38(const CRagdollBoneMatrix *pMatrix);
};
struct CRagdollElement
{
	char m_pad0000[0xc];
	CRagdollPhysObject *m_pObject;	// 0x0c
	char m_pad0010[4];
	int m_iParent;	// 0x14
};
struct CRagdollLayout
{
	char m_pad0000[8];
	CRagdollElement m_elements[1];	// 0x08, 0x18 bytes each
};
struct CRagdollStudio { char m_pad0000[4]; CRagdollBoneMatrix *m_pBones; };
void sub_10107f80(CRagdollElement *pElem, const CRagdollBoneMatrix *pParent, Vector *pOut);
void sub_10108540(Vector *pIn, int axes, CRagdollBoneMatrix *pMatrix);
bool sub_10127320(CRagdollLayout *pRagdoll, CRagdollStudio *pStudio, int index)
{
	int bone = ((int *)((char *)pRagdoll + 0x2d8))[index];
	if (bone < 0)
		return false;
	CRagdollElement *pElem = &pRagdoll->m_elements[index];
	pElem->m_pObject->vfunc38(&pStudio->m_pBones[bone]);
	if (pElem->m_iParent >= 0) {
		Vector v;
		int parentBone = ((int *)((char *)pRagdoll + 0x2d8))[pElem->m_iParent];
		sub_10107f80(pElem, &pStudio->m_pBones[parentBone], &v);
		sub_10108540(&v, 3, &pStudio->m_pBones[bone]);
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x101273b0 size=0x116
#include "QAngle.h"
#include "Vector.h"
struct CPhysCollide;
struct SBoundsObj {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36();
	virtual void GetPosition(Vector *pos, QAngle *ang);
	virtual void v38(); virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42();
	virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
	virtual void v48();
	virtual const CPhysCollide *GetCollide();
};
struct SBoundsEntry {
	SBoundsObj *m_pObj;
	int m_unk4; int m_unk8; int m_unkc; int m_unk10; int m_unk14;
};
struct SBoundsList {
	int m_nCount;
	int m_unk4; int m_unk8; int m_unkc; int m_unk10;
	SBoundsEntry m_Entries[1];
};
struct SBoundsCollision {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17();
	virtual void CollideGetAABB(Vector &mins, Vector &maxs, const CPhysCollide *pCollide, const Vector &origin, const QAngle &angles);
};
extern SBoundsCollision *g_104e0c8c;

void sub_101273b0(SBoundsList *pList, const Vector &origin, Vector &mins, Vector &maxs)
{
	mins = origin;
	maxs = origin;
	for (int i = 0; i < pList->m_nCount; i++) {
		SBoundsObj *pObj = pList->m_Entries[i].m_pObj;
		Vector pos;
		QAngle ang;
		pObj->GetPosition(&pos, &ang);
		Vector lo, hi;
		g_104e0c8c->CollideGetAABB(lo, hi, pObj->GetCollide(), pos, ang);
		for (int k = 0; k < 3; k++) {
			if (lo[k] < mins[k]) mins[k] = lo[k];
			if (hi[k] > maxs[k]) maxs[k] = hi[k];
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101274d0 size=0x33
struct CBoolVirtView {
    virtual int f0();
    virtual int f1();
    virtual int f2();
    virtual int f3();
    virtual bool f4();
};

struct CBoolItemView {
    CBoolVirtView *m_p;
    char pad0[0x14];
};

struct CBoolListView {
    int m_count;
    char pad0[0x10];
    CBoolItemView m_items[1];
};

// TARGET: sub_101274d0
bool sub_101274d0(CBoolListView *p)
{
    int i = 0;
    if (p->m_count > 0) {
        do {
            if (!p->m_items[i].m_p->f4())
                return false;
            i++;
        } while (i < p->m_count);
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x101277a0 size=0x5
namespace lifted {
int sub_10127720();
}
int sub_101277a0()
{
    return lifted::sub_10127720();
}
// END FUNCTION

// FUNCTION: 0x10127830 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem16_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem16_t::sub_10127830
	void sub_10127830(int num);
};

void CMem16_t::sub_10127830(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 2;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 4);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 4);
}
// END FUNCTION

// FUNCTION: 0x101278c0 size=0x2a
void __stdcall sub_101279a0(int a);

struct CUnk10247bd0
{
    int m_first;
    void sub_101288c0(int b, int c);
    CUnk10247bd0 *sub_101278c0(int a, int b, int c);
};

// TARGET: sub_101278c0
CUnk10247bd0 *CUnk10247bd0::sub_101278c0(int a, int b, int c)
{
    m_first = 0;
    ::sub_101279a0(a);
    sub_101288c0(b, c);
    return this;
}
// END FUNCTION

// FUNCTION: 0x101278f0 size=0x2a
void __stdcall sub_101279a0(int a);

struct CUnk10247bd0
{
    int m_first;
    void sub_10128920(int b, int c);
    CUnk10247bd0 *sub_101278f0(int a, int b, int c);
};

// TARGET: sub_101278f0
CUnk10247bd0 *CUnk10247bd0::sub_101278f0(int a, int b, int c)
{
    m_first = 0;
    ::sub_101279a0(a);
    sub_10128920(b, c);
    return this;
}
// END FUNCTION

// FUNCTION: 0x10127920 size=0x3b
struct CUnk10247c50
{
    int m_n0000;

    void sub_101279a0(int a);
    void sub_101288c0(int a, int b);
    CUnk10247c50 *sub_10127920(int a, int b, int c, int d, int e);
};

// TARGET: CUnk10247c50::sub_10127920
CUnk10247c50 *CUnk10247c50::sub_10127920(int a, int b, int c, int d, int e)
{
    m_n0000 = 0;
    sub_101279a0(a);
    sub_101288c0(b, c);
    sub_101288c0(d, e);
    return this;
}
// END FUNCTION

// FUNCTION: 0x10127960 size=0x3b
struct CUnk10247c50
{
    int m_n0000;

    void sub_101279a0(int a);
    void sub_10128920(int a, int b);
    CUnk10247c50 *sub_10127960(int a, int b, int c, int d, int e);
};

// TARGET: CUnk10247c50::sub_10127960
CUnk10247c50 *CUnk10247c50::sub_10127960(int a, int b, int c, int d, int e)
{
    m_n0000 = 0;
    sub_101279a0(a);
    sub_10128920(b, c);
    sub_10128920(d, e);
    return this;
}
// END FUNCTION

// FUNCTION: 0x101279a0 size=0x51
#include "CUnknown10248a50.h"
#include <string.h>
extern char g_104e23f8;
void CUnknown10248a50::sub_101279a0(const char *pszName)
{
    if (pszName) {
        m_pszName = new char[strlen(pszName) + 1];
        strcpy(m_pszName, pszName);
    } else {
        m_pszName = 0;
    }
    m_pSub = 0;
    m_pPeer = 0;
    m_pszString = 0;
    *(int *)&m_pad0018 = 0;
    g_104e23f8 = 0;
}
// END FUNCTION

// FUNCTION: 0x10127a80 size=0x5
struct CUnknown10127a80 { void * sub_10127a80(int); };
void * CUnknown10127a80::sub_10127a80(int a0)
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x10127c70 size=0x3
struct CUnknown10127c70 { int sub_10127c70(); };
int CUnknown10127c70::sub_10127c70()
{
    return *(int *)this;
}
// END FUNCTION

// FUNCTION: 0x10127c80 size=0x4
struct CUnknown10127c80 { int sub_10127c80(); };
int CUnknown10127c80::sub_10127c80()
{
    return *(int *)((char *)this + 0xc);
}
// END FUNCTION

// FUNCTION: 0x10127df0 size=0x23
extern int g_104e3438;
int sub_100e3130(int a, void *b, int c);

// TARGET: sub_10127df0
void *sub_10127df0(int *p, int value)
{
    *p = sub_100e3130(*p, &g_104e3438, value);
    return &g_104e3438;
}
// END FUNCTION

// FUNCTION: 0x10127e20 size=0xf6
extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strlen)

class IFileSys
{
public:
	virtual int vfunc0(const char *pszName, const char *pszMode, int nPath);	// opens a file, 0 when it is missing
	virtual void vfunc1(int hFile);	// closes it
	virtual int vfunc2(void *pBuffer, int nBytes, int hFile);	// reads from it
	virtual void vfunc3(); virtual void vfunc4(); virtual void vfunc5();
	virtual int vfunc6(int hFile);	// the size of the file
};

void sub_100cdb40(int *pCRC);	// CRC32 init
void sub_100cdb50(unsigned int *pCRC);	// CRC32 final
void sub_100cdb90(unsigned int *pCRC, const char *pBuffer, int nLength);	// CRC32 process (stub 0x100143b7)

extern int g_105e5438;	// the number of cached files (the cache memory ends right before it)
extern unsigned int g_104e1bf8[];	// their name hashes
extern char *g_104e2c38[];	// their contents
extern int g_102c3330;	// bytes left in the cache memory
extern char g_102b6618[];	// the file open mode

char *sub_10127e20(const char *pszName, IFileSys *pFileSys)
{
	unsigned int nHash;
	sub_100cdb40((int *)&nHash);
	sub_100cdb90(&nHash, pszName, strlen(pszName));
	sub_100cdb50(&nHash);
	for (int i = 0; i < g_105e5438; i++) {
		if (nHash == g_104e1bf8[i])
			return g_104e2c38[i];
	}
	int hFile = pFileSys->vfunc0(pszName, g_102b6618, 0);
	if (hFile) {
		int nSize = pFileSys->vfunc6(hFile) + 1;
		if (nSize < g_102c3330) {
			char *pDest = (char *)&g_105e5438 - g_102c3330;
			pFileSys->vfunc2(pDest, nSize - 1, hFile);
			pFileSys->vfunc1(hFile);
			pDest[nSize - 1] = 0;
			g_104e1bf8[g_105e5438] = nHash;
			g_104e2c38[g_105e5438] = pDest;
			g_102c3330 -= nSize;
			g_105e5438++;
			return pDest;
		}
		pFileSys->vfunc1(hFile);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10128270 size=0x70
struct CLinkNode1c {
    char m_pad[0x10];
    CLinkNode1c *m_pNext;
    char m_pad14[8];
    CLinkNode1c *sub_101278a0(int a);
    CLinkNode1c *sub_101283b0();
    void sub_101283c0(CLinkNode1c *pNext);
};
struct CLinkList {
    char m_pad[0x14];
    CLinkNode1c *m_pHead;
    CLinkNode1c *sub_10128270(int a);
};

CLinkNode1c *CLinkList::sub_10128270(int a)
{
    void *mem = operator new(0x1c);
    CLinkNode1c *pNode = mem ? ((CLinkNode1c *)mem)->sub_101278a0(a) : 0;
    CLinkNode1c *p = m_pHead;
    if (!p) {
        m_pHead = pNode;
        pNode->m_pNext = p;
        return pNode;
    }
    while (p->sub_101283b0())
        p = p->sub_101283b0();
    p->sub_101283c0(pNode);
    pNode->m_pNext = 0;
    return pNode;
}
// END FUNCTION

// FUNCTION: 0x101283a0 size=0x4
struct CUnknown101283a0 { int sub_101283a0(); };
int CUnknown101283a0::sub_101283a0()
{
    return *(int *)((char *)this + 0x14);
}
// END FUNCTION

// FUNCTION: 0x101283b0 size=0x4
struct CUnknown101283b0 { int sub_101283b0(); };
int CUnknown101283b0::sub_101283b0()
{
    return *(int *)((char *)this + 0x10);
}
// END FUNCTION

// FUNCTION: 0x101283d0 size=0x2c
extern int g_105e543c;
extern char g_104e2438[32][64];
extern char g_104e23f8[];

// TARGET: sub_101283d0
void sub_101283d0(void)
{
	char *pDst;
	char *pSrc;
	char c;

	if (g_105e543c < 0x20)
	{
		pSrc = g_104e23f8;
		pDst = g_104e2438[g_105e543c];
		g_105e543c = g_105e543c + 1;
		do
		{
			c = *pSrc;
			pSrc++;
			*pDst = c;
			pDst++;
		} while (c != 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10128400 size=0x2a
#include <string.h>
extern int g_105e543c;
extern char g_104e2438[][64];
extern char g_104e23f8[];

void sub_10128400()
{
    if (g_105e543c > 0) {
        g_105e543c--;
        strcpy(g_104e23f8, g_104e2438[g_105e543c]);
    }
}
// END FUNCTION

// FUNCTION: 0x101284c0 size=0x4a
#include "CKeyValuesX.h"
extern "C" int __cdecl atoi(const char *);
int CKeyValuesX::sub_101284c0(const char *pszKey, int nDefault)
{
	CKeyValuesX *pKey = this;
	if (pszKey)
		pKey = sub_101282e0(pszKey, 0);
	if (pKey) {
		switch (pKey->m_iDataType) {
		case 0:
			return atoi(pKey->m_sValue);
		case 2:
			return (int)pKey->m_flValue;
		default:
			return pKey->m_nValue;
		}
	}
	return nDefault;
}
// END FUNCTION

// FUNCTION: 0x10128510 size=0x2e
#include "CKeyValuesX.h"

// TARGET: CKeyValuesX::sub_10128510
int CKeyValuesX::sub_10128510(const char *pszKey, int nDefault)
{
	CKeyValuesX *pKey = this;
	if (pszKey != 0) {
		pKey = sub_101282e0(pszKey, 0);
	}
	if (pKey != 0) {
		if (((int *)pKey)[3] != 3) {
			return 0;
		}
		return ((int *)pKey)[2];
	}
	return nDefault;
}
// END FUNCTION

// FUNCTION: 0x10128540 size=0x4f
#include "CKeyValuesX.h"
extern "C" double __cdecl atof(const char *);
float CKeyValuesX::sub_10128540(const char *pszKey, float flDefault)
{
	CKeyValuesX *pKey = this;
	if (pszKey)
		pKey = sub_101282e0(pszKey, 0);
	if (pKey) {
		switch (pKey->m_iDataType) {
		case 0:
			return (float)atof(pKey->m_sValue);
		case 1:
			return (float)pKey->m_nValue;
		case 2:
			return pKey->m_flValue;
		default:
			return 0.0f;
		}
	}
	return flDefault;
}
// END FUNCTION

// FUNCTION: 0x10128590 size=0x8b
extern int (*g_101e3190)(char *buffer, int count, const char *format, ...);

struct CKeyValuesX {
	int m_n00;
	const char *m_sValue;	// 0x04
	union {
		int m_iValue;
		float m_flValue;
	};	// 0x08
	int m_iDataType;	// 0x0c

	CKeyValuesX *sub_101282e0(const char *keyName, int bCreate);	// FindKey (stub 0x1000b58c)
	void sub_101288c0(const char *keyName, const char *value);	// SetString (stub 0x10015258)
	const char *sub_10128590(const char *keyName, const char *defaultValue);
};

const char *CKeyValuesX::sub_10128590(const char *keyName, const char *defaultValue)
{
	CKeyValuesX *dat = this;
	if (keyName)
		dat = sub_101282e0(keyName, 0);
	if (dat) {
		char buf[64];
		switch (dat->m_iDataType) {
		case 1:
		case 3:
			g_101e3190(buf, 64, "%d", dat->m_iValue);
			sub_101288c0(keyName, buf);
			break;
		case 2:
			g_101e3190(buf, 64, "%f", (double)dat->m_flValue);
			sub_101288c0(keyName, buf);
			break;
		}
		return dat->m_sValue;
	}
	return defaultValue;
}
// END FUNCTION

// FUNCTION: 0x101287e0 size=0xdc
extern char g_102de300[];

struct CKeyValuesX
{
	const char *sub_10128590(const char *key, const char *def);
	int sub_101284c0(const char *key, int def);
};

extern CKeyValuesX * __stdcall sub_10128350(void *pSrc, int a);
extern int sub_101d159d(char *, const char *, ...);

struct CKVLoader10248fc0
{
	bool sub_101287e0(void *pSrc, int maxCount, const char *pszFormat, int **ppItems, int *pnCount);
};

bool CKVLoader10248fc0::sub_101287e0(void *pSrc, int maxCount, const char *pszFormat, int **ppItems, int *pnCount)
{
	char key[32];
	if (pnCount) {
		*pnCount = 0;
		CKeyValuesX *kv = sub_10128350(pSrc, 0);
		if (kv) {
			int n = 0;
			for (int i = 0; i < maxCount; i++) {
				sub_101d159d(key, pszFormat, i);
				if (!*kv->sub_10128590(key, g_102de300))
					break;
				n++;
			}
			if (n > 0) {
				*pnCount = n;
				*ppItems = new int[n];
				for (i = 0; i < n; i++) {
					sub_101d159d(key, pszFormat, i);
					(*ppItems)[i] = kv->sub_101284c0(key, 0);
				}
				return true;
			}
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x101288c0 size=0x5e
#include "CKeyValuesX.h"
#include <string.h>

// TARGET: CKeyValuesX::sub_101288c0
void CKeyValuesX::sub_101288c0(const char *pszName, const char *pszValue)
{
	CKeyValuesX *pKey = sub_101282e0(pszName, 1);
	if (pKey)
	{
		delete [] (char *)pKey->m_sValue;
		int len = strlen(pszValue);
		pKey->m_sValue = new char[len + 1];
		memcpy((char *)pKey->m_sValue, pszValue, len + 1);
		pKey->m_iDataType = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10128920 size=0x25
struct CUnknown10249160 {
    char m_pad0000[0xc];
    int m_0c;
    int *sub_101282e0(int a, int b);
    void sub_10128920(int a, int b);
};

// TARGET: CUnknown10249160::sub_10128920
void CUnknown10249160::sub_10128920(int a, int b)
{
    int *p = sub_101282e0(a, 1);
    if (p != 0) {
        p[2] = b;
        m_0c = 1;
    }
}
// END FUNCTION

// FUNCTION: 0x10128950 size=0x25
struct CUnknown102491a0 {
    char m_pad0000[0xc];
    int m_0c;
    int *sub_101282e0(int a, int b);
    void sub_10128950(int a, int b);
};

// TARGET: CUnknown102491a0::sub_10128950
void CUnknown102491a0::sub_10128950(int a, int b)
{
    int *p = sub_101282e0(a, 1);
    if (p != 0) {
        p[2] = b;
        m_0c = 2;
    }
}
// END FUNCTION

// FUNCTION: 0x10128980 size=0x25
struct CUnknown102491e0 {
    char m_pad0000[0xc];
    int m_0c;
    int *sub_101282e0(int a, int b);
    void sub_10128980(int a, int b);
};

// TARGET: CUnknown102491e0::sub_10128980
void CUnknown102491e0::sub_10128980(int a, int b)
{
    int *p = sub_101282e0(a, 1);
    if (p != 0) {
        p[2] = b;
        m_0c = 3;
    }
}
// END FUNCTION

// FUNCTION: 0x101289b0 size=0x5b
extern int (__cdecl *g_101e3190)(char *, int, const char *, ...);
extern "C" int atoi(const char *);
struct SNode { char pad[0x10]; SNode *m_pNext; const char *sub_10127c70(); };
struct SList { char pad[0x14]; SNode *m_pHead; void sub_10128270(const char *); void sub_101289b0(); };

// TARGET: SList::sub_101289b0
void SList::sub_101289b0()
{
    int n = 1;
    for (SNode *p = m_pHead; p; p = p->m_pNext) {
        int v = atoi(p->sub_10127c70());
        if (n <= v)
            n = v + 1;
    }
    char buf[12];
    g_101e3190(buf, sizeof(buf), "%d", n);
    sub_10128270(buf);
}
// END FUNCTION

// FUNCTION: 0x10128b20 size=0x4
struct CUnknown10128b20 { float sub_10128b20(); };
float CUnknown10128b20::sub_10128b20()
{
    return *(float *)((char *)this + 0x14);
}
// END FUNCTION

// FUNCTION: 0x10128b60 size=0x1f
namespace lifted {
extern int g_102c3368;
struct C100086a7 { int sub_1012c770(int, int, int, int, int); };
}
struct CUnknown10249470 { int sub_10128b60(int); };
int CUnknown10249470::sub_10128b60(int a0)
{
    return ((lifted::C100086a7 *)(this + 0x20))->sub_1012c770(*(int *)((char *)this + 8), *(int *)((char *)this + 0xc), (int)this, a0, lifted::g_102c3368);
}
// END FUNCTION

// FUNCTION: 0x10128d80 size=0x4d
struct SFuncField {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    void *pSaveRestoreOps;
    int inputFunc;
    void *td;
    int fieldSizeInBytes;
    int unk;
};
struct SFuncMap {
    SFuncField *dataDesc;
    int dataNumFields;
    const char *dataClassName;
    SFuncMap *baseMap;
};
const char *sub_10128d80(SFuncMap *pMap, int pFunc)
{
    for (; pMap; pMap = pMap->baseMap) {
        for (int i = 0; i < pMap->dataNumFields; i++) {
            if ((pMap->dataDesc[i].flags & 0x20) && pMap->dataDesc[i].inputFunc == pFunc)
                return pMap->dataDesc[i].fieldName;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10129250 size=0xf7
#include "datamap.h"
#include "CSave.h"

struct SaveRestoreFieldInfoX {
	void *pField;
	void *pOwner;
	typedescription_t *pTypeDesc;
};

struct ISaveRestoreOpsX {
	virtual void v0();
	virtual void v1();
	virtual bool IsEmpty(const SaveRestoreFieldInfoX &fieldInfo);
};

extern int g_102c34b8[];

bool CSave::sub_10129250(void *pData, typedescription_t *pField)
{
	int type;
	if ((pField->flags & 2) && (type = pField->fieldType) != 0) {
		if (type == 9) {
			void *pEmbedded = !(pField->flags & 0x40) ? pData : *(void **)pData;
			typedescription_t *pTest = pField->td->dataDesc;
			typedescription_t *pLimit = pTest + pField->td->dataNumFields;
			if (pTest < pLimit) {
				bool r;
				do {
					r = sub_10129250((char *)pEmbedded + pTest->fieldOffset[0], pTest);
					if (r)
						goto yes;
					pTest++;
				} while (pTest < pLimit);
				return r;
			}
		} else if (type == 10) {
			SaveRestoreFieldInfoX fieldInfo = { pData, (char *)pData - pField->fieldOffset[0], pField };
			if (!((ISaveRestoreOpsX *)pField->pSaveRestoreOps)->IsEmpty(fieldInfo))
				goto yes;
		} else if (type == 12) {
			if (!sub_10129800(pData, (short)pField->fieldSize * 4))
				goto yes;
		} else {
			if (sub_10129800(pData, g_102c34b8[type] * (short)pField->fieldSize))
				return false;
			goto yes;
		}
	}
	return false;
yes:
	return true;
}
// END FUNCTION

// FUNCTION: 0x10129560 size=0x4c
#include "CSave.h"

class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	unsigned short fieldSize;
	short flags;
	const char *externalName;
	ISaveRestoreOps *pSaveRestoreOps;
	void *inputFunc;
	datamap_t *td;
	int fieldSizeInBytes;
	int unk;
};

int CSave::sub_10129560(const void *pBaseData, typedescription_t *pFields, int nFields)
{
	int nNonEmpty = 0;
	for (int i = 0; i < nFields; i++) {
		if (sub_10129250((char *)pBaseData + pFields[i].fieldOffset[0], &pFields[i]))
			nNonEmpty++;
	}
	return nNonEmpty;
}
// END FUNCTION

// FUNCTION: 0x10129640 size=0x47
#include "CSave.h"
struct CSaveDesc { int m_n0, m_n4, m_n8; CSaveDesc *m_pParent; };
int CSave::sub_10129640(int a, int b, CSaveDesc *p)
{
    if (p->m_pParent) {
        if (!sub_10129640(a, b, p->m_pParent))
            return 0;
    }
    return vfunc3(p->m_n8, a, b, p->m_n0, p->m_n4);
}
// END FUNCTION

// FUNCTION: 0x101297d0 size=0x2d
struct CUnk101a0530 {
    void sub_101299c0(int a, int b);
    void sub_101297d0(int a, int b);
};

// TARGET: sub_101297d0
void CUnk101a0530::sub_101297d0(int a, int b)
{
    unsigned int local;
    *((unsigned char *)&local + 3) = 0;
    sub_101299c0(a, b);
    sub_101299c0((int)((unsigned char *)&local + 3), 1);
}
// END FUNCTION

// FUNCTION: 0x10129800 size=0x26
// TARGET: sub_10129800
int __stdcall sub_10129800(const char *pBytes, int nBytes)
{
	for (int i = 0; i < nBytes; i++) {
		if (pBytes[i] != 0)
			return 0;
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10129830 size=0x25
#include "CSave.h"

// TARGET: sub_10129830
void CSave::sub_10129830(int a, int bytes, int b)
{
    sub_10129860((const void *)a, bytes);
    sub_101299c0((const void *)b, bytes);
}
// END FUNCTION

// FUNCTION: 0x10129860 size=0x153
#include "CSave.h"
#include <string.h>
#include <stdlib.h>
#pragma intrinsic(_rotr)

extern void (*g_101e3114)(const char *fmt, ...);	// Warning

struct CSaveTokenData
{
	char m_pad[0x10];
	int m_nTokenCount;
	const char **m_pTokens;
};

struct CSaveBuf
{
	char m_pad[0x18];
	CSaveTokenData *m_pdata;

	int TokenHash(const char *pszToken)
	{
		CSaveTokenData *pdata = m_pdata;
		unsigned int hash = 0;
		for (const char *q = pszToken; *q; q++)
			hash = _rotr(hash, 4) ^ (int)*q;

		unsigned short start = (unsigned short)(hash % pdata->m_nTokenCount);
		for (int i = 0; i < pdata->m_nTokenCount; i++)
		{
			int index = start + i;
			if (index >= pdata->m_nTokenCount)
				index -= pdata->m_nTokenCount;
			if (!pdata->m_pTokens[index] || strcmp(pszToken, pdata->m_pTokens[index]) == 0)
			{
				pdata->m_pTokens[index] = pszToken;
				return index;
			}
		}
		g_101e3114("CSaveRestoreBuffer::TokenHash() is COMPLETELY FULL!");
		return 0;
	}
};

// TARGET: CSave::sub_10129860
void CSave::sub_10129860(const void *p, int a)
{
	int size = a;
	int token = ((CSaveBuf *)this)->TokenHash((const char *)p);
	if (a > 0x7fff || a < 0)
		g_101e3114("CSave::WriteHeader() size parameter exceeds 'short'!");
	sub_101299c0(&size, 2);
	sub_101299c0(&token, 2);
}
// END FUNCTION

// FUNCTION: 0x1012a060 size=0x110
#include "CSave.h"

struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    void *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern void (*g_101e3114)(const char *, ...);

bool CSave::sub_1012a060(int a, void *pData, void *pBase, typedescription_t *pField)
{
    switch (pField->fieldType) {
    case 0xb:
        vfunc33(pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    case 0xd:
        vfunc35(pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    case 0xc:
        vfunc37(pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    case 0xe:
        vfunc29(pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    case 0xf:
        vfunc26(pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    case 0x10:
    case 0x11:
        vfunc17(pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    case 0x13:
        vfunc31(pBase, pField->fieldName, pData, (short)pField->fieldSize);
        return true;
    default:
        g_101e3114("Bad field type\n");
        return false;
    }
}
// END FUNCTION

// FUNCTION: 0x1012a350 size=0x1bc
#include "datamap.h"
#include "CSave.h"
#include "SaveRestoreFieldInfo_t.h"

extern void (__cdecl *g_101e3114)(const char *pMsg, ...);

struct SaveFieldDesc101a1520
{
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	short fieldSize;
	short flags;
	const char *externalName;
	struct SaveOps101a1520 *pSaveRestoreOps;
	void *inputFunc;
	void *td;
};

struct SaveOps101a1520
{
	virtual void v0();
	virtual void Save(SaveRestoreFieldInfo_t *pInfo, ISave *pSave);
};

#define SAVE_SLOT(n) virtual void s##n();
struct SaveWriteSlots101a1520
{
	virtual int vfunc0();
	virtual void vfunc1(int pos);
	virtual void vfunc2(void *pData, void *pMap);
	SAVE_SLOT(3) SAVE_SLOT(4) SAVE_SLOT(5) SAVE_SLOT(6) SAVE_SLOT(7) SAVE_SLOT(8) SAVE_SLOT(9) SAVE_SLOT(10) SAVE_SLOT(11)
	virtual void vfunc12(void *pData, int count, int token);
	SAVE_SLOT(13) SAVE_SLOT(14)
	virtual void vfunc15(void *pData, int count, int token);
	SAVE_SLOT(16)
	virtual void vfunc17(void *pData, int count, int token);
	virtual void vfunc18(void *pData, int count, int token);
	virtual void vfunc19(void *pData, int count, int token);
	virtual void vfunc20(void *pData, int count, int token);
	SAVE_SLOT(21)
	virtual void vfunc22(void *pData, int count, int token);
};

void CSave::sub_1012a350(const unsigned short *pToken, void *pData, void *pRootMap, typedescription_t *pDesc)
{
	SaveFieldDesc101a1520 *pField = (SaveFieldDesc101a1520 *)pDesc;
	SaveWriteSlots101a1520 *pSlots = (SaveWriteSlots101a1520 *)this;
	switch (pField->fieldType) {
	case 1:
		pSlots->vfunc18(pData, pField->fieldSize, *pToken);
		return;
	case 2:
		pSlots->vfunc20(pData, pField->fieldSize, *pToken);
		return;
	case 3:
		pSlots->vfunc22(pData, pField->fieldSize, *pToken);
		return;
	case 5:
		pSlots->vfunc17(pData, pField->fieldSize, *pToken);
		return;
	case 6:
		pSlots->vfunc12(pData, pField->fieldSize, *pToken);
		return;
	case 7:
		pSlots->vfunc19(pData, pField->fieldSize, *pToken);
		return;
	case 4:
	case 8:
		pSlots->vfunc15(pData, pField->fieldSize, *pToken);
		return;
	case 9:
		if (pField->flags & 0x40)
			pData = *(void **)pData;
		pSlots->vfunc2(pData, pField->td);
		return;
	case 10: {
		int nEnd = pSlots->vfunc0() + *pToken;
		SaveRestoreFieldInfo_t info = { pData, (char *)pData - pField->fieldOffset[0], pDesc };
		pField->pSaveRestoreOps->Save(&info, this);
		pSlots->vfunc1(nEnd);
		return;
	}
	default:
		g_101e3114("Bad field type\n");
		return;
	}
}
// END FUNCTION

// FUNCTION: 0x1012a530 size=0x26
struct CUnknown101a1780Arg {
    char m_pad0000[0x12];
    unsigned short m_wFlags12;	// 0x12
};

struct CUnknown101a1780View {
    char m_pad0000[0x20];
    int m_n20;	// 0x20
    bool sub_1012a530(CUnknown101a1780Arg *p);
};

// TARGET: CUnknown101a1780View::sub_1012a530
bool CUnknown101a1780View::sub_1012a530(CUnknown101a1780Arg *p)
{
    unsigned short f = p->m_wFlags12;
    if ((f & 2) == 0) {
        return false;
    }
    if (m_n20 != 0 && (f & 1) != 0) {
        return false;
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x1012a5e0 size=0x26
struct CUnknown101a1780Arg {
    char m_pad0000[0x12];
    unsigned short m_wFlags12;	// 0x12
};

struct CUnknown101a1780View {
    char m_pad0000[0x20];
    int m_n20;	// 0x20
    bool sub_1012a5e0(CUnknown101a1780Arg *p);
};

// TARGET: CUnknown101a1780View::sub_1012a5e0
bool CUnknown101a1780View::sub_1012a5e0(CUnknown101a1780Arg *p)
{
    unsigned short f = p->m_wFlags12;
    if ((f & 2) == 0) {
        return false;
    }
    if (m_n20 != 0 && (f & 1) != 0) {
        return false;
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x1012ab00 size=0x47
#include "CSave.h"
struct CSaveDesc { int m_n0, m_n4, m_n8; CSaveDesc *m_pParent; };
int CSave::sub_1012ab00(int a, int b, CSaveDesc *p)
{
    if (p->m_pParent) {
        if (!sub_1012ab00(a, b, p->m_pParent))
            return 0;
    }
    return vfunc3(p->m_n8, a, b, p->m_n0, p->m_n4);
}
// END FUNCTION

// FUNCTION: 0x1012aec0 size=0x34
#include "CRestore.h"
struct CRestoreSaveRecord30 { int m_nId; char m_pad04[0x2c]; };
struct CRestoreSaveTable { char m_pad0000[0x1318]; int m_nRecords; CRestoreSaveRecord30 *m_pRecords; };
CRestoreSaveEnt *CRestore::sub_1012aec0(int index)
{
	CRestoreSaveTable *pTable = (CRestoreSaveTable *)m_pData2;
	if (pTable && index >= 0) {
		int i = 0;
		if (pTable->m_nRecords > 0) {
			CRestoreSaveRecord30 *pRec = pTable->m_pRecords;
			do {
				if (pRec->m_nId == index)
					return (CRestoreSaveEnt *)pRec;
				i++;
				pRec++;
			} while (i < pTable->m_nRecords);
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1012b3d0 size=0x1a
namespace lifted {
extern int g_102c3508;
extern int g_102c350c;
extern char g_102c354c;
}
int sub_1012b3d0()
{
    lifted::g_102c350c = 9;
    lifted::g_102c3508 = (int)&lifted::g_102c354c;
    return (int)&lifted::g_102c3508;
}
// END FUNCTION

// FUNCTION: 0x1012b940 size=0x1a
namespace lifted {
extern int g_102c36d8;
extern int g_102c36dc;
extern char g_102c371c;
}
int sub_1012b940()
{
    lifted::g_102c36dc = 3;
    lifted::g_102c36d8 = (int)&lifted::g_102c371c;
    return (int)&lifted::g_102c36d8;
}
// END FUNCTION

// FUNCTION: 0x1012c3d0 size=0xa4
#include "CUtlVector40.h"
#include "CUnknown101a59f0.h"
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
struct E40 { int d[10]; };

int CUtlVector40::sub_1012c3d0(int num, const void *pToCopy)
{
	int elem = m_size;
	if (num != 0) {
		if (m_size + num > m_allocationCount)
			((CUnknown101a59f0 *)this)->sub_1012c640(m_size - m_allocationCount + num);
		m_size += num;
		m_pElements = m_pMemory;
		int toMove = m_size - elem - num;
		if (toMove > 0 && num > 0)
			memmove(m_pMemory + (elem + num) * 40, m_pMemory + elem * 40, toMove * 40);
		if (pToCopy != 0 && num > 0) {
			int off = elem * 40;
			for (int i = num; i > 0; i--) {
				*(E40 *)(m_pMemory + off) = *(const E40 *)pToCopy;
				pToCopy = (const E40 *)pToCopy + 1;
				off += 40;
			}
		}
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1012c480 size=0x33
#include "CUtlMemory40.h"
extern void *(*g_101e3100)(int);

CUtlMemory40 *CUtlMemory40::sub_1012c480(int growSize, int allocationCount)
{
    m_pMemory = 0;
    m_allocationCount = allocationCount;
    m_growSize = growSize;
    if (allocationCount)
        m_pMemory = (char *)g_101e3100(allocationCount * 40);
    return this;
}
// END FUNCTION

// FUNCTION: 0x1012c4c0 size=0xae
#include "CUnknown101a5800.h"
#include "CUnknown101a59f0.h"

int CUnknown101a5800::sub_1012c4c0(int elem, int num, const CVecElem40_t *pToCopy)
{
	if (num == 0)
		return elem;
	if (m_size + num > m_allocationCount)
		((CUnknown101a59f0 *)this)->sub_1012c640(m_size + num - m_allocationCount);
	m_size += num;
	m_pElements = m_pMemory;
	int toMove = m_size - elem - num;
	if (toMove > 0 && num > 0)
		memmove(m_pMemory + (elem + num) * 40, m_pMemory + elem * 40, toMove * 40);
	if (pToCopy != 0 && num > 0) {
		int off = elem * 40;
		for (int i = num; i > 0; i--) {
			*(CVecElem40_t *)(m_pMemory + off) = *pToCopy;
			pToCopy++;
			off += 40;
		}
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1012c570 size=0x8f
#include "CUtlVector40.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *, unsigned int);

void CUtlVector40::sub_1012c570(int num)
{
	if (num + m_size > m_allocationCount && m_growSize != -1) {
		int newSize = m_allocationCount + (num + m_size - m_allocationCount);
		while (m_allocationCount < newSize) {
			if (m_allocationCount != 0) {
				if (m_growSize != 0)
					m_allocationCount += m_growSize;
				else
					m_allocationCount += m_allocationCount;
			} else {
				m_allocationCount = 1;
			}
		}
		if (m_pMemory)
			m_pMemory = (char *)Plat_Realloc(m_pMemory, m_allocationCount * 40);
		else
			m_pMemory = (char *)Plat_Alloc(m_allocationCount * 40);
	}
	m_size += num;
	m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x1012c600 size=0x3e
#include "UtlVec40.h"

void UtlVec40::sub_1012c600(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0) {
		sub_101d0f30(m_pMemory + (elem + num) * 40, m_pMemory + elem * 40, numToMove * 40);
	}
}
// END FUNCTION

// FUNCTION: 0x1012c640 size=0x6a
#include "CUnknown101a59f0.h"

extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUnknown101a59f0::sub_1012c640(int num)
{
    if (m_nGrowSize == -1)
        return;
    int requested = m_nAllocationCount + num;
    int alloc = m_nAllocationCount;
    if (alloc < requested) {
        while (alloc < requested) {
            if (alloc) {
                if (m_nGrowSize)
                    alloc += m_nGrowSize;
                else
                    alloc += alloc;
            } else
                alloc = 1;
        }
        m_nAllocationCount = alloc;
    }
    if (m_pMemory)
        m_pMemory = g_101e3104(m_pMemory, m_nAllocationCount * 40);
    else
        m_pMemory = g_101e3100(m_nAllocationCount * 40);
}
// END FUNCTION

// FUNCTION: 0x1012c740 size=0x25
struct CUnknown102496d0 {
    int m_0;
    int m_4;
    int m_8;
    int m_c;
    float m_10;
    void sub_1012c740(float flValue);
};

// TARGET: CUnknown102496d0::sub_1012c740
void CUnknown102496d0::sub_1012c740(float flValue)
{
    m_0 = 0;
    m_4 = 0;
    m_8 = 0;
    *(float *)&m_c = flValue;
    m_10 = flValue * flValue * 0.5f;
}
// END FUNCTION

// FUNCTION: 0x1012c770 size=0x1bf
#include "CBaseRopePhysics.h"

extern "C" double __cdecl ceil(double);

void CUnknown102496a0::sub_1012c770(CRopeNode *pNodes, int nNodes, CBaseRopePhysics *pHelper, float dt, float flDamp)
{
	m_flPredictedTime += dt;
	int iEnd = (int)ceil(m_flPredictedTime / m_flTimeStep);
	int nTicks = iEnd - m_iCurTimeStep;
	for (int iTick = 0; iTick < nTicks; iTick++) {
		for (int i = 0; i < nNodes; i++) {
			CRopeNode *pNode = &pNodes[i];
			Vector vAccel;
			pHelper->vfunc0(pNodes, i, &vAccel);
			Vector vPrev = pNode->m_vPos;
			pNode->m_vPos = pNode->m_vPos + (pNode->m_vPos - pNode->m_vPrevPos) * flDamp + vAccel * m_flTimeStepSq;
			pNode->m_vPrevPos = vPrev;
		}
		pHelper->vfunc1(pNodes, nNodes);
	}
	m_iCurTimeStep = iEnd;
	float flInterp = (m_flPredictedTime - (iEnd * m_flTimeStep - m_flTimeStep)) / m_flTimeStep;
	for (int i = 0; i < nNodes; i++) {
		CRopeNode *pNode = &pNodes[i];
		VectorLerp(pNode->m_vPrevPos, pNode->m_vPos, flInterp, pNode->m_vPredicted);
	}
}
// END FUNCTION

// FUNCTION: 0x1012d3f0 size=0x10b
struct SndInfo {
    int a;
    float b;
    int c, d, e, f;
    char g;
    int h;
    char name[128];
};
struct IA { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(int, int, const char *); };
struct CSndMgr { void **vt; bool sub_1012e6d0(const char *, SndInfo *); };
extern IA *g_104a5818;
extern CSndMgr g_105e5540;
extern char *(*g_101e31ac)(const char *, const char *);
extern char g_102c4004[], g_102c3ffc[], g_102c400c[], g_102c3fa4[];

void sub_1012d3f0(int a, int b, const char *name)
{
    if (name) {
        char *(*f)(const char *, const char *) = g_101e31ac;
        if (f(name, g_102c4004) || f(name, g_102c3ffc) || *name == '!') {
            g_104a5818->v7(a, b, name);
            ((void (__cdecl *)(void *, const char *, ...))g_105e5540.vt[3])(&g_105e5540, g_102c400c, name, a);
            return;
        }
    }
    SndInfo si;
    si.a = 0; si.b = 1.0f; si.c = 100; si.d = 100; si.e = 100; si.f = 0x4b;
    si.name[0] = 0; si.g = 0; si.h = 0;
    if (g_105e5540.sub_1012e6d0(name, &si) && si.name[0]) {
        g_104a5818->v7(a, si.a, si.name);
        ((void (__cdecl *)(void *, const char *, ...))g_105e5540.vt[3])(&g_105e5540, g_102c3fa4, name, si.name, a);
    }
}
// END FUNCTION

// FUNCTION: 0x1012d7a0 size=0x42
struct SSoundCache { char *sub_1012f090(char *name, int a); };
extern SSoundCache g_105e5540;
__declspec(dllimport) const char *Q_stristr(const char *, const char *);
char *sub_1012d7a0(char *name, int a)
{
    if (Q_stristr(name, ".wav") || Q_stristr(name, ".mp3"))
        return name;
    return g_105e5540.sub_1012f090(name, a);
}
// END FUNCTION

// FUNCTION: 0x1012d810 size=0x1
void sub_1012d810()
{
}
// END FUNCTION

// FUNCTION: 0x1012d820 size=0x1
void sub_1012d820()
{
}
// END FUNCTION

// FUNCTION: 0x1012d830 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_1012d830()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1012d970 size=0x46
struct Entry { float value; const char *text; };
extern Entry g_102c4260[1];
extern char g_105e5648[];
extern int (__cdecl *g_101e3190)(char *, int, const char *, ...);

const char *sub_1012d970(float value)
{
	for (int p = (int)g_102c4260; p < (int)(g_102c4260 + 1); p += sizeof(Entry)) {
		if (((Entry *)p)->value == value)
			return ((Entry *)p)->text;
	}
	g_101e3190(g_105e5648, 0x20, "%.3f", (double)value);
	return g_105e5648;
}
// END FUNCTION

// FUNCTION: 0x1012d9d0 size=0x37
struct NameEntry { int m_key; const char *m_pName; };
extern NameEntry g_102c4228[7];
extern char g_105e5730[];
extern int (__cdecl *g_101e3190)(char *, int, const char *, ...);
const char *sub_1012d9d0(int key)
{
	NameEntry *p = g_102c4228;
	do {
		if (p->m_key == key)
			return p->m_pName;
		p++;
	} while ((int)p < (int)(g_102c4228 + 7));
	g_101e3190(g_105e5730, 32, "%i", key);
	return g_105e5730;
}
// END FUNCTION

// FUNCTION: 0x1012dd00 size=0x6b
#include "CUnknown101b2570.h"
extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strlen)
extern int (__cdecl *g_101e31dc)(const char *, const char *, int);
extern void (__cdecl *g_101e3188)(char *, const char *, int);
int sub_1012f7e0(const char *name);
SFloatPair sub_10107010(const char *str);

void CUnknown101b2570::sub_1012dd00(const char *soundlevel)
{
    if (g_101e31dc(soundlevel, "SNDLVL_", strlen("SNDLVL_")) == 0) {
        m_soundlevel.a = (float)sub_1012f7e0(soundlevel);
        m_soundlevel.b = 0;
    } else {
        m_soundlevel = sub_10107010(soundlevel);
    }
    g_101e3188(m_szSoundLevel, soundlevel, 0x20);
}
// END FUNCTION

// FUNCTION: 0x1012dd70 size=0x93
#include "CSoundEmitterSystemBase.h"

extern char vt_10236680[];
bool sub_10130bf0(int const &, int const &);
bool sub_10130c10(int const &, int const &);

struct SoundEmitterBody
{
	void *m_vtbl;
	CSoundEmitterDict m_a;
	CSoundEmitterDict m_b;
	int m_v[5];
	CUnknown1024b2d0 m_t;

	SoundEmitterBody() : m_a(sub_10130bf0), m_b(sub_10130c10)
	{
		m_v[0] = 0;
		m_v[1] = 0;
		m_v[2] = 0;
		m_v[3] = 0;
		m_v[4] = 0;
		m_t.sub_1013d2b0(0, 0x20, 0);
		m_vtbl = vt_10236680;
	}
};

CSoundEmitterSystemBase *CSoundEmitterSystemBase::sub_1012dd70()
{
	((SoundEmitterBody *)this)->SoundEmitterBody::SoundEmitterBody();
	return this;
}
// END FUNCTION

// FUNCTION: 0x1012de10 size=0xaf
#include "utlrbtree.h"
#include "CUtlRBTreeOf.h"
struct CSoundEmitterRecord { char m_Data[216]; };
#include "CUnknown101b2790.h"
#include "CUtlRBTree232.h"

void CUnknown101b2790::sub_1012de10()
{
	const CUtlRBTree232Of<CSoundEmitterRecord> *tree = (const CUtlRBTree232Of<CSoundEmitterRecord> *)((char *)this + 0x50);
	int i = tree->m_Root;
	while (tree->Links(i).m_Left != -1)
		i = tree->Links(i).m_Left;
}
// END FUNCTION

// FUNCTION: 0x1012e0d0 size=0x4
int sub_1012e0d0()
{
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1012e0e0 size=0xe8
#include "utlvector.h"
#include "CSoundEmitterSystemBase.h"
#include "UtlMem2.h"
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern void (__cdecl *g_101e3140)(const char *fmt, ...);

struct CUtlVecOpsX : public UtlMem2 {
	void GrowVector(int num = 1)
	{
		if (m_size + num > m_allocationCount)
			sub_100be200(m_size - m_allocationCount + num);
		m_size += num;
		m_pElements = m_pMemory;
	}
	void ShiftElementsRight(int elem, int num = 1)
	{
		int numToMove = m_size - elem - num;
		if (numToMove > 0)
			memmove(&m_pMemory[elem + num], &m_pMemory[elem], numToMove * sizeof(int));
	}
	int InsertBefore(int elem, const int &src)
	{
		GrowVector();
		ShiftElementsRight(elem);
		int *p = &m_pMemory[elem];
		if (p)
			*p = src;
		return elem;
	}
	int AddToTail(const int &src) { return InsertBefore(m_size, src); }
};

void CSoundEmitterSystemBase::sub_1012e0e0(const char *pszScript, UtlMem2 *pOut)
{
	pOut->m_size = 0;
	int iScript = sub_1012f9e0(pszScript);
	if (iScript == -1) {
		g_101e3140("Can't PrecacheSoundScript( '%s' ), file not in manifest '%s'\n", pszScript, "scripts/game_sounds_manifest.txt");
		return;
	}
	int nSounds = sub_1012e570();
	if (nSounds > 0) {
		int i = 0;
		int off = 0;
		do {
			if (*(int *)(off + (int)m_i54 + 0x18) == iScript)
				((CUtlVecOpsX *)pOut)->AddToTail(i);
			i++;
			off += 0xe8;
		} while (i < nSounds);
	}
}
// END FUNCTION

// FUNCTION: 0x1012e530 size=0x38
#include "CSoundEmitterSystemBase.h"

extern char g_102de300[];

struct CSoundNameView
{
	CUnknown1024b2d0Id *sub_10130c30(int index);
	char m_pad0000[0x20];
	CUnknown1024b2d0 m_names;	// 0x20
};

namespace block_101b31d0 {
	struct CSoundEmitterUnit : CSoundEmitterSystemBase
	{
		char sub_1012e510(int index);
	};

	char CSoundEmitterUnit::sub_1012e510(int index)
	{
		return index >= 0 && index < m_i64;
	}
}
using namespace block_101b31d0;

// TARGET: CSoundEmitterSystemBase::sub_1012e530
const char *CSoundEmitterSystemBase::sub_1012e530(int index)
{
	if (!((CSoundEmitterUnit *)this)->sub_1012e510(index))
		return g_102de300;
	CSoundNameView *pView = (CSoundNameView *)((char *)this + 0x50);
	return pView->m_names.sub_1013d6f0(*pView->sub_10130c30(index));
}
// END FUNCTION

// FUNCTION: 0x1012e570 size=0x4
struct CUnknown1012e570 { int sub_1012e570(); };
int CUnknown1012e570::sub_1012e570()
{
    return *(int *)((char *)this + 0x64);
}
// END FUNCTION

// FUNCTION: 0x1012e940 size=0x28
#include "CUnknown101b3730.h"
// TARGET: CUnknown101b3730::sub_1012e940
void *CUnknown101b3730::sub_1012e940(int index)
{
    if (index >= 0 && index < m_nRecords)
        return m_pRecords + 0x1c + index * 0xe8;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1012e970 size=0x82
#include "utlvector.h"
#include "CSoundEmitterSystemBase.h"
#include "CUnknown1024b370.h"
#include "CMem8_t.h"
#include <string.h>

inline void *operator new(unsigned int, void *p) { return p; }

struct SymbolRecord_t
{
	CUnknown1024b370Symbol symbol;
	int gender;
};

struct SymbolVec_t
{
	CMem8_t m_Memory;	// 0x00
	int m_Size;	// 0x0c
	SymbolRecord_t *m_pElements;	// 0x10

	SymbolRecord_t &Element(int i) { return ((SymbolRecord_t *)m_Memory.m_pMemory)[i]; }

	void InsertBefore(int elem, const SymbolRecord_t &src)
	{
		if (m_Size + 1 > m_Memory.m_nAllocationCount)
			m_Memory.sub_101315b0(m_Size + 1 - m_Memory.m_nAllocationCount);
		m_Size += 1;
		m_pElements = (SymbolRecord_t *)m_Memory.m_pMemory;
		int numToMove = m_Size - elem - 1;
		if (numToMove > 0)
			memmove(&Element(elem + 1), &Element(elem), numToMove * sizeof(SymbolRecord_t));
		new (&Element(elem)) SymbolRecord_t(src);
	}
	void AddToTail(const SymbolRecord_t &src) { InsertBefore(m_Size, src); }
};

struct SymbolTable_t
{
	char m_pad0000[0x20];
	SymbolVec_t m_Vec;	// 0x20
};

// TARGET: CSoundEmitterSystemBase::sub_1012e970
void CSoundEmitterSystemBase::sub_1012e970(void *pTable, const char *pszName, int value)
{
	CUnknown1024b370Symbol sym = ((CUnknown1024b370 *)&m_listb0)->sub_1013d520(pszName);
	SymbolRecord_t e;
	e.symbol = sym;
	e.gender = value;
	((SymbolTable_t *)pTable)->m_Vec.AddToTail(e);
}
// END FUNCTION

// FUNCTION: 0x1012eb10 size=0x58
void sub_1012eb10(char *pSrc, int split, int skip, char *dst, int max, char *dst2, int max2)
{
	char *src = pSrc;
	char *out = dst;
	int limit = max;
	int i = 0;
	int n = 0;
	while (*src)
	{
		if (i == split)
		{
			while (--skip >= 0)
				src++;
			limit = max2;
			*out = 0;
			out = dst2;
			i++;
		}
		else if (n >= limit)
		{
			src++;
			i++;
		}
		else
		{
			*out++ = *src;
			src++;
			n++;
			i++;
		}
	}
	*out = 0;
}
// END FUNCTION

// FUNCTION: 0x1012ec80 size=0x1
void sub_1012ec80()
{
}
// END FUNCTION

// FUNCTION: 0x1012ec90 size=0x5
int __stdcall sub_1012ec90(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1012f090 size=0x99
struct S101b40a0 {
    int a;
    float b;
    int c, d, e;
    int f;
    char g;
    int h;
    char name[128];
};
extern char g_105e57a0[];
char __stdcall sub_1012e6d0(const char *p, S101b40a0 *s);
extern char *(__cdecl *g_101e3188)(char *, const char *, int);

char * __stdcall sub_1012f090(char *p, int unused)
{
    S101b40a0 s;
    s.c = 100;
    s.d = 100;
    s.e = 100;
    s.a = 0;
    s.b = 1.0f;
    s.f = 75;
    s.name[0] = 0;
    s.g = 0;
    s.h = 0;
    if (!sub_1012e6d0(p, &s))
        return p;
    if (!s.name[0])
        return p;
    g_101e3188(g_105e57a0, s.name, 512);
    return g_105e57a0;
}
// END FUNCTION

// FUNCTION: 0x1012f130 size=0x61
#include "CSoundEmitterSystemBase.h"

int CSoundEmitterSystemBase::sub_1012f130(const char *pszName)
{
	CSoundParameters params;
	if (!sub_1012e6d0(pszName, params))
		return 75;
	return params.soundlevel;
}
// END FUNCTION

// FUNCTION: 0x1012f1a0 size=0x27
#include "CSoundEmitterSystemBase.h"

// the callee compiled before its caller in the same unit: a copy in the block's own namespace (one name, one
// definition: the real sub_101b31a0 is its own block)
namespace block_101b4200 {
struct CSoundEmitterSystemBaseUnit : CSoundEmitterSystemBase
{
	char sub_1012e510(int index);
};

char CSoundEmitterSystemBaseUnit::sub_1012e510(int index)
{
	if (index >= 0 && index < m_i64)
	{
		return 1;
	}
	return 0;
}
}
using namespace block_101b4200;

// TARGET: CSoundEmitterSystemBase::sub_1012f1a0
char CSoundEmitterSystemBase::sub_1012f1a0(int index)
{
	char bValid = ((CSoundEmitterSystemBaseUnit *)this)->sub_1012e510(index);
	if (!bValid)
		return bValid;
	return *(char *)(*(char **)((char *)this + 0x54) + index * 0xe8 + 0x15);
}
// END FUNCTION

// FUNCTION: 0x1012f8c0 size=0x4a
struct Entry { float value; const char *text; };
extern Entry g_102c4260[1];
extern char g_105e577c[];
extern int (__cdecl *g_101e3190)(char *, int, const char *, ...);

const char * __stdcall sub_1012f8c0(float value)
{
	for (int p = (int)g_102c4260; p < (int)(g_102c4260 + 1); p += sizeof(Entry)) {
		if (((Entry *)p)->value == value)
			return ((Entry *)p)->text;
	}
	g_101e3190(g_105e577c, 0x20, "%.3f", (double)value);
	return g_105e577c;
}
// END FUNCTION

// FUNCTION: 0x1012f9c0 size=0x1b
#include "CUnknown1024b2d0.h"

struct CUnk101b4c90 {
    char pad[0xb0];
    void sub_1012f9c0(unsigned short *p);
};

void CUnk101b4c90::sub_1012f9c0(unsigned short *p)
{
    CUnknown1024b2d0Id id;
    id.m_id = *p;
    ((CUnknown1024b2d0 *)((char *)this + 0xb0))->sub_1013d6f0(id);
}
// END FUNCTION

// FUNCTION: 0x1012fd30 size=0x70
#include "CSoundEmitterSystemBase.h"

extern void (*g_101e3140)(const char *fmt, ...);

namespace block_101b31a0 {
struct CSoundEmitterUnit : CSoundEmitterSystemBase {
	char sub_1012e510(int index);
};
char CSoundEmitterUnit::sub_1012e510(int index)
{
	if (index >= 0 && index < m_i64)
		return 1;
	return 0;
}
}
using namespace block_101b31a0;

// TARGET: CSoundEmitterSystemBase::sub_1012fd30
void CSoundEmitterSystemBase::sub_1012fd30(const char *pszName)
{
	int index = sub_1012e3f0(pszName);
	if (!((CSoundEmitterUnit *)this)->sub_1012e510(index)) {
		g_101e3140("Can't remove %s, no such sound!\n", pszName);
		return;
	}
	*((char *)m_i54 + index * 0xe8 + 0x14) = 1;
	int script = *(int *)((char *)m_i54 + index * 0xe8 + 0x18);
	if (script >= 0 && script < m_ia8)
		*((char *)m_i9c + script * 0x82) = 1;
}
// END FUNCTION

// FUNCTION: 0x1012fda0 size=0xbb
#include "CSoundEmitterSystemBase.h"

extern void (__cdecl *g_101e3140)(const char *fmt, ...);	// DevWarning

struct CSoundRecordX	// 0xe8 byte sound record
{
	char m_pad0000[0x18];
	int m_nScript;	// 0x18: the script file's index
	char m_pad001c[0xe8 - 0x1c];
};

struct CScriptFlagX	// 0x82 byte script file record
{
	char m_bChanged;
	char m_pad0001[0x81];
};

namespace block_101b5180 {
struct CSoundEmitterUnit : CSoundEmitterSystemBase
{
	char sub_1012e510(int index);
};

char CSoundEmitterUnit::sub_1012e510(int index)
{
	if (index >= 0 && index < m_i64)
		return 1;
	return 0;
}
}
using namespace block_101b5180;

// TARGET: CSoundEmitterSystemBase::sub_1012fda0
void CSoundEmitterSystemBase::sub_1012fda0(const char *pszSound, const char *pszScript)
{
	int iSound = sub_1012e3f0(pszSound);
	if (!((CSoundEmitterUnit *)this)->sub_1012e510(iSound)) {
		g_101e3140("Can't move '%s', no such sound!\n", pszSound);
		return;
	}
	int iOld = ((CSoundRecordX *)m_i54)[iSound].m_nScript;
	if (iOld >= 0 && iOld < m_ia8) {
		int iNew = sub_1012f9e0(pszScript);
		if (iNew == -1) {
			g_101e3140("CSoundEmitterSystemBase::MoveSound( '%s', '%s' ), script file not list in manifest '%s'\n", pszSound, pszScript, "scripts/game_sounds_manifest.txt");
			return;
		}
		if (iOld != iNew) {
			((CSoundRecordX *)m_i54)[iSound].m_nScript = iNew;
			((CScriptFlagX *)m_i9c)[iOld].m_bChanged = 1;
			((CScriptFlagX *)m_i9c)[iNew].m_bChanged = 1;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1012fe70 size=0x29
struct CUnit101b5290 {
    char *sub_1012fe70(int index);
};

char *CUnit101b5290::sub_1012fe70(int index)
{
    if (index >= 0 && index < *(int *)((char *)this + 0xa8)) {
        char *pBase = *(char **)((char *)this + 0x9c);
        return pBase + 2 + index * 0x82;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1012fea0 size=0x28
struct CUnknown101b52d0 {
    char pad_0000[0x9c];
    unsigned char *m_pData;
    int pad_00a0[2];
    int m_nCount;
    unsigned char sub_1012fea0(int i);
};

// TARGET: CUnknown101b52d0::sub_1012fea0
unsigned char CUnknown101b52d0::sub_1012fea0(int i)
{
    if (i >= 0 && i < m_nCount)
        return m_pData[i * 0x82];
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101307e0 size=0x5
namespace lifted {
int sub_1012d9d0();
}
int sub_101307e0()
{
    return lifted::sub_1012d9d0();
}
// END FUNCTION

// FUNCTION: 0x10130800 size=0x59
struct CUnknown101a5290 {
    void *m_pMemory;
    int m_allocationCount;
    int m_growSize;
    int m_size;
    void *m_pElements;
    void sub_10130800();
};

extern void (__cdecl *g_101e30fc)(void *);

// TARGET: sub_10130800
void CUnknown101a5290::sub_10130800()
{
    void (__cdecl *pFree)(void *) = g_101e30fc;
    m_size = 0;
    if (m_growSize != -1) {
        if (m_pMemory) {
            pFree(m_pMemory);
            m_pMemory = 0;
        }
        m_allocationCount = 0;
    }
    m_pElements = m_pMemory;
    if (m_growSize != -1) {
        if (m_pMemory) {
            pFree(m_pMemory);
            m_pMemory = 0;
        }
        m_allocationCount = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x10130860 size=0x6b
#include "CUnknown101b61a0.h"

CUnknown101b61a0 &CUnknown101b61a0::sub_10130860(const CUnknown101b61a0 &other)
{
    int n = other.m_Size;
    CUnknown101b61a0Elem *src = (CUnknown101b61a0Elem *)other.m_pMemory;
    int i = 0;
    m_Size = 0;
    if (n != 0) {
        sub_10130f00(n);
        sub_10130f90(0, n);
        for (i = 0; i < n; i++) {
            CUnknown101b61a0Elem *e = &((CUnknown101b61a0Elem *)m_pMemory)[i];
            if (e)
                e->sub_10133290();
        }
    }
    for (i = 0; i < n; i++) {
        CUnknown101b61a0Elem *dst = &((CUnknown101b61a0Elem *)m_pMemory)[i];
        dst->m_a = src[i].m_a;
        dst->m_b = src[i].m_b;
    }
    return *this;
}
// END FUNCTION

// FUNCTION: 0x10130970 size=0x1bd
#include "CUnknown101b6320.h"

CUnknown101b6320 &CUnknown101b6320::sub_10130970(const CUnknown101b6320 &other)
{
	m_bField00 = other.m_bField00;
	m_bField01 = other.m_bField01;
	m_nField04 = other.m_nField04;

	CUnknown101b6320Params *p = &m_params;
	const CUnknown101b6320Params *o = &other.m_params;
	p->m_nField00 = o->m_nField00;
	p->m_nField04 = o->m_nField04;
	p->m_nField08 = o->m_nField08;
	p->m_nField0c = o->m_nField0c;
	p->m_nField10 = o->m_nField10;
	p->m_nField14 = o->m_nField14;
	p->m_nField18 = o->m_nField18;
	p->m_bField1c = o->m_bField1c;
	p->m_bField1d = o->m_bField1d;

	CUnknown101b9140 *v = &p->m_vecA;
	int nA = o->m_vecA.m_Size;
	const CUnknown101b9140Elem *pA = (const CUnknown101b9140Elem *)o->m_vecA.m_pMemory;
	int i;
	for (i = v->m_Size; --i >= 0; )
		v->sub_10130be0();
	v->m_Size = 0;
	v->sub_10131e60(nA, 0);
	for (i = 0; i < nA; i++)
		((CUnknown101b9140Elem *)v->m_pMemory)[i] = pA[i];

	v = &p->m_vecB;
	int nB = o->m_vecB.m_Size;
	const CUnknown101b9140Elem *pB = (const CUnknown101b9140Elem *)o->m_vecB.m_pMemory;
	for (i = v->m_Size; --i >= 0; )
		v->sub_10130be0();
	v->m_Size = 0;
	v->sub_10132db0(0, nB, 0);
	for (i = 0; i < nB; i++)
		((CUnknown101b9140Elem *)v->m_pMemory)[i] = pB[i];

	p->m_bField48 = o->m_bField48;
	unsigned int u;
	for (u = 0; u < 0x20; u++)
		p->m_szVolume[u] = o->m_szVolume[u];
	for (u = 0; u < 0x20; u++)
		p->m_szChannel[u] = o->m_szChannel[u];
	for (u = 0; u < 0x20; u++)
		p->m_szSoundLevel[u] = o->m_szSoundLevel[u];
	for (u = 0; u < 0x20; u++)
		p->m_szPitch[u] = o->m_szPitch[u];
	return *this;
}
// END FUNCTION

// FUNCTION: 0x10130b30 size=0x6d
#include "UtlVec8.h"

struct SElem8 {
	short a;
	int b;
	void sub_10133290();
};

void UtlVec8::sub_10130b30(const SElem8 *src, int num)
{
	m_Size = 0;
	if (num) {
		sub_10130f00(num);
		sub_10130f90(0, num);
		for (int i = 0; i < num; i++) {
			SElem8 *p = (SElem8 *)m_pMemory + i;
			if (p)
				p->sub_10133290();
		}
	}
	for (int i = 0; i < num; i++) {
		SElem8 *d = (SElem8 *)m_pMemory + i;
		d->a = src[i].a;
		d->b = src[i].b;
	}
}
// END FUNCTION

// FUNCTION: 0x10130ba0 size=0x3d
#include "CUtlVector16.h"

extern void (__cdecl *g_101e30fc)(void *);

void CUtlVector16::sub_10130ba0()
{
	m_size = 0;
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
	m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x10130be0 size=0x3
struct CUnknown10130be0 { int sub_10130be0(); };
int CUnknown10130be0::sub_10130be0()
{
    return *(int *)this;
}
// END FUNCTION

// FUNCTION: 0x10130c30 size=0x1a
struct CUnk101b66b0
{
	int m_pad0000;
	char *m_p4;

	char *sub_10130c30(int index);
};

// TARGET: sub_10130c30
char *CUnk101b66b0::sub_10130c30(int index)
{
	return m_p4 + 0x10 + index * 0xe8;
}
// END FUNCTION

// FUNCTION: 0x10130df0 size=0xf3
#include "utlrbtree.h"
#include "CUtlRBTreeOf.h"
struct CSoundEmitterRecord { char m_Data[216]; };
#include "CUtlRBTreeFind232.h"

int CUtlRBTreeFind232::sub_10130df0(const void *search)
{
	const CUtlRBTree232Of<CSoundEmitterRecord> *tree = (const CUtlRBTree232Of<CSoundEmitterRecord> *)this;
	int current = m_Root;
	while (current != InvalidIndex())
	{
		if (m_LessFunc(search, m_pElements[current].m_Data))
			current = tree->Links(current).m_Left;
		else if (m_LessFunc(m_pElements[current].m_Data, search))
			current = tree->Links(current).m_Right;
		else
			break;
	}
	return current;
}
// END FUNCTION

// FUNCTION: 0x10130f00 size=0x8c
#include "UtlVec8.h"
extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void UtlVec8::sub_10130f00(int num)
{
    if (m_Size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_Size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 4;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (char *)g_101e3104(m_pMemory, m_allocationCount << 3);
        else
            m_pMemory = (char *)g_101e3100(m_allocationCount << 3);
    }
    m_Size += num;
    m_pElements = (UtlVec8Elem *)m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x10130f90 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_10130f90(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 8], &m_pMemory[elem * 8], numToMove * 8);
}
// END FUNCTION

// FUNCTION: 0x10130fd0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_10130fd0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10131140 size=0xf9
#include "utlrbtree.h"
#include "CUtlRBTreeOf.h"
struct CSoundEmitterRecord { char m_Data[216]; };
#include "CUtlRBTree232.h"

void CUtlRBTree232::sub_10131140(const void *pInsert, int *pParent, bool *pLeftChild)
{
    const CUtlRBTree232Of<CSoundEmitterRecord> *tree = (const CUtlRBTree232Of<CSoundEmitterRecord> *)this;
    int current = m_Root;
    *pParent = InvalidIndex();
    *pLeftChild = false;
    while (current != InvalidIndex()) {
        *pParent = current;
        if (m_LessFunc(pInsert, ElementAt(current).m_Data)) {
            *pLeftChild = true;
            current = tree->Links(current).m_Left;
        } else {
            *pLeftChild = false;
            current = tree->Links(current).m_Right;
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10131240 size=0x1fe
#include "utlvector.h"
#include "Vector.h"
#include "utlmemory.h"
#include "UtlVec8.h"
#include "UtlMem.h"
#include "CMem8_t.h"
#include "CUnknown101b6630.h"

struct E101b6b60 { short w; int d; };
void sub_10131480(E101b6b60 *pDest, const E101b6b60 *pSrc);

struct CB6EA0Blk { char d[32]; };

struct CB6EA0Vec : UtlVec8
{
	void Init()
	{
		((UtlMem *)this)->sub_10131440(0, 0);
		m_Size = 0;
		m_pElements = (UtlVec8Elem *)m_pMemory;
	}
	E101b6b60 *Base() { return (E101b6b60 *)((CUnknown101b6630 *)this)->sub_10130be0(); }
	int GrowVector(int num)
	{
		if (m_Size + num > m_allocationCount)
			((CMem8_t *)this)->sub_101315b0(m_Size + num - m_allocationCount);
		int size = m_Size += num;
		m_pElements = (UtlVec8Elem *)Base();
		return size;
	}
	void ShiftElementsRight(int size, int elem, int num)
	{
		int numToMove = size - elem - num;
		if (numToMove > 0 && num > 0)
			memmove((E101b6b60 *)((CUnknown101b6630 *)this)->sub_10130be0() + (elem + num),
				(E101b6b60 *)((CUnknown101b6630 *)this)->sub_10130be0() + elem,
				numToMove * sizeof(E101b6b60));
	}
	void InsertBefore(int elem, const E101b6b60 &src)
	{
		int size = GrowVector(1);
		ShiftElementsRight(size, elem, 1);
		sub_10131480((E101b6b60 *)m_pMemory + elem, &src);
	}
};

struct CB6EA0Obj
{
	short w0;
	short m_unk02;
	char b4;
	char b5;
	int i8;
	int ic, i10, i14, i18, i1c, i20, i24;
	char b28;
	char b29;
	CB6EA0Vec vecA;	// 0x2c
	CB6EA0Vec vecB;	// 0x40
	char b54;
	CB6EA0Blk k55;
	CB6EA0Blk k75;
	CB6EA0Blk k95;
	CB6EA0Blk kb5;
};

void sub_10131240(CB6EA0Obj *dst, const CB6EA0Obj *src)
{
	if (dst) {
		CB6EA0Vec *va = &dst->vecA;
		int i, c;
		dst->w0 = src->w0;
		dst->b4 = src->b4;
		dst->b5 = src->b5;
		dst->i8 = src->i8;
		va->Init();
		CB6EA0Vec *vb = &dst->vecB;
		vb->Init();
		dst->ic = src->ic;
		dst->i10 = src->i10;
		dst->i14 = src->i14;
		dst->i18 = src->i18;
		dst->i1c = src->i1c;
		dst->i20 = src->i20;
		dst->i24 = src->i24;
		dst->b28 = src->b28;
		c = src->vecA.m_Size;
		for (i = 0; i < c; i++) {
			const E101b6b60 *s = (const E101b6b60 *)src->vecA.m_pMemory;
			int n = va->m_Size;
			va->sub_10130f00(1);
			va->sub_10130f90(n, 1);
			sub_10131480((E101b6b60 *)va->m_pMemory + n, s + i);
		}
		c = src->vecB.m_Size;
		for (i = 0; i < c; i++) {
			const E101b6b60 *s = (const E101b6b60 *)src->vecB.m_pMemory;
			vb->InsertBefore(vb->m_Size, s[i]);
		}
		dst->b29 = src->b29;
		dst->b54 = src->b54;
		dst->k75 = src->k75;
		dst->k55 = src->k55;
		dst->kb5 = src->kb5;
		dst->k95 = src->k95;
	}
}
// END FUNCTION

// FUNCTION: 0x10131440 size=0x34
#include "UtlMem.h"
extern void *(__cdecl *g_101e3100)(int);

UtlMem *UtlMem::sub_10131440(int growSize, int allocationCount)
{
	m_pMemory = 0;
	m_allocationCount = allocationCount;
	m_growSize = growSize;
	if (allocationCount) {
		m_pMemory = (int *)g_101e3100(allocationCount * 8);
	}
	return this;
}
// END FUNCTION

// FUNCTION: 0x10131480 size=0x19
struct E101b6b60 { unsigned short a; unsigned short pad; int b; };

// TARGET: sub_10131480
void sub_10131480(E101b6b60 *dst, const E101b6b60 *src)
{
	if (dst) {
		dst->a = src->a;
		dst->b = src->b;
	}
}
// END FUNCTION

// FUNCTION: 0x101314a0 size=0x95
#include "CUtlVector130.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *, unsigned int);

void CUtlVector130::sub_101314a0(int num)
{
	if (num + m_size > m_allocationCount && m_growSize != -1) {
		int newSize = m_allocationCount + (num + m_size - m_allocationCount);
		while (m_allocationCount < newSize) {
			if (m_allocationCount != 0) {
				if (m_growSize != 0)
					m_allocationCount += m_growSize;
				else
					m_allocationCount += m_allocationCount;
			} else {
				m_allocationCount = 1;
			}
		}
		if (m_pMemory)
			m_pMemory = (char *)Plat_Realloc(m_pMemory, m_allocationCount * 130);
		else
			m_pMemory = (char *)Plat_Alloc(m_allocationCount * 130);
	}
	m_size += num;
	m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x10131540 size=0x4b
#include "CUtlVector130.h"

extern "C" void *memmove(void *, const void *, unsigned int);

// TARGET: CUtlVector130::sub_10131540
void CUtlVector130::sub_10131540(int elem, int num)
{
	int numToMove = m_size - elem - num;
	if ((numToMove > 0) && (num > 0))
		memmove(m_pMemory + (elem + num) * 130, m_pMemory + elem * 130, numToMove * 130);
}
// END FUNCTION

// FUNCTION: 0x10131590 size=0x1a
#include <string.h>

// TARGET: sub_10131590
void sub_10131590(void *pDest, void *pSrc)
{
	if (pDest != 0) {
		memcpy(pDest, pSrc, 0x82);
	}
}
// END FUNCTION

// FUNCTION: 0x101315b0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_101315b0
	void sub_101315b0(int num);
};

void CMem8b_t::sub_101315b0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x10131620 size=0x87
#include "CUnknown101b7370.h"

void CUnknown101b7370::sub_10131620(int index)
{
    CUnknown101b7370Node *base = m_pNodes;
    CUnknown101b7370Payload *p = &base[index].m_payload;
    CUnknown101b7370Vec *v = &p->m_vecB;
    sub_10130ef0((int *)v);
    v->sub_10130fd0();
    v->m_pElements = v->sub_101316b0();
    v->sub_10130fd0();
    v = &p->m_vecA;
    sub_10130ef0((int *)v);
    v->sub_10130fd0();
    v->m_pElements = v->sub_101316b0();
    v->sub_10130fd0();
    m_pNodes[index].m_nIndex = index;
    m_pNodes[index].m_nNext = m_nFirstFree;
    m_nFirstFree = index;
}
// END FUNCTION

// FUNCTION: 0x101316b0 size=0x3
struct CUnknown101316b0 { int sub_101316b0(); };
int CUnknown101316b0::sub_101316b0()
{
    return *(int *)this;
}
// END FUNCTION

// FUNCTION: 0x10131e60 size=0xcf
#include "CUnknown101b9140.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

static inline int InsertMultipleBefore(CUnknown101b9140 *v, int elem, int num, const CUnknown101b9140Elem *pToCopy)
{
	if (num == 0)
		return elem;
	if (v->m_Size + num > v->m_nAllocationCount)
		v->sub_101315b0(v->m_Size - v->m_nAllocationCount + num);
	v->m_Size += num;
	v->m_pElements = (CUnknown101b9140Elem *)v->m_pMemory;
	int numToMove = v->m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		memmove(&v->m_pElements[elem + num], &v->m_pElements[elem], numToMove * 8);
	for (int i = 0; i < num; i++) {
		CUnknown101b9140Elem *p = &((CUnknown101b9140Elem *)v->m_pMemory)[elem + i];
		if (p) {
			p->m_w = 0xffff;
			p->m_d = 0;
		}
	}
	if (pToCopy) {
		for (int i = 0; i < num; i++) {
			CUnknown101b9140Elem *p = &((CUnknown101b9140Elem *)v->m_pMemory)[elem + i];
			p->m_w = pToCopy[i].m_w;
			p->m_d = pToCopy[i].m_d;
		}
	}
	return elem;
}

int CUnknown101b9140::sub_10131e60(int num, const CUnknown101b9140Elem *pToCopy)
{
	return InsertMultipleBefore(this, m_Size, num, pToCopy);
}
// END FUNCTION

// FUNCTION: 0x10132d30 size=0x7c
#include "CUnknown101b90a0.h"

extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUnknown101b90a0::sub_10132d30(int num)
{
    if (m_growSize == -1)
        return;
    int newAlloc = m_allocationCount;
    int target = num + newAlloc;
    if (newAlloc < target) {
        do {
            if (newAlloc != 0) {
                if (m_growSize != 0)
                    newAlloc += m_growSize;
                else
                    newAlloc += newAlloc;
            } else
                newAlloc = 1;
        } while (newAlloc < target);
        m_allocationCount = newAlloc;
    }
    if (m_pMemory)
        m_pMemory = (char *)g_101e3104(m_pMemory, m_allocationCount * 0xe8);
    else
        m_pMemory = (char *)g_101e3100(m_allocationCount * 0xe8);
}
// END FUNCTION

// FUNCTION: 0x10132db0 size=0xc6
#include "CUnknown101b9140.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

int CUnknown101b9140::sub_10132db0(int elem, int num, const CUnknown101b9140Elem *pToCopy)
{
	if (num == 0)
		return elem;
	if (m_Size + num > m_nAllocationCount)
		sub_101315b0(m_Size - m_nAllocationCount + num);
	m_Size += num;
	m_pElements = (CUnknown101b9140Elem *)m_pMemory;
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		memmove(&m_pElements[elem + num], &m_pElements[elem], numToMove * 8);
	for (int i = 0; i < num; i++) {
		CUnknown101b9140Elem *p = &((CUnknown101b9140Elem *)m_pMemory)[elem + i];
		if (p) {
			p->m_w = 0xffff;
			p->m_d = 0;
		}
	}
	if (pToCopy) {
		for (int i = 0; i < num; i++) {
			CUnknown101b9140Elem *p = &((CUnknown101b9140Elem *)m_pMemory)[elem + i];
			p->m_w = pToCopy[i].m_w;
			p->m_d = pToCopy[i].m_d;
		}
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x10133340 size=0x1d1
#include "Vector.h"
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CUnknown101b6320.h"
#include "UtlVec8.h"
#include "CMem8_t.h"
#include <string.h>

void sub_10131480(void *pDest, const void *pSrc);

struct CUnknown101b5b70VecB : UtlVec8
{
	CUnknown101b9140Elem &Element(int i) { return ((CUnknown101b9140Elem *)m_pMemory)[i]; }
	void Grow1(int num)
	{
		if (m_Size + num > m_allocationCount)
			((CMem8_t *)this)->sub_101315b0(m_Size + num - m_allocationCount);
		m_Size += num;
		m_pElements = (UtlVec8Elem *)m_pMemory;
	}
	void ShiftRight(int elem, int num)
	{
		int numToMove = m_Size - elem - num;
		if (numToMove > 0 && num > 0)
			memmove(&Element(elem + num), &Element(elem), numToMove * sizeof(CUnknown101b9140Elem));
	}
	int InsertBefore(int elem, const CUnknown101b9140Elem &src)
	{
		Grow1(1);
		ShiftRight(elem, 1);
		CUnknown101b9140Elem *p = &Element(elem);
		if (p) {
			p->m_w = src.m_w;
			p->m_d = src.m_d;
		}
		return elem;
	}
	int AddToTail(const CUnknown101b9140Elem &src) { return InsertBefore(m_Size, src); }
	void Init()
	{
		m_pMemory = 0;
		m_allocationCount = 0;
		m_growSize = 0;
		m_Size = 0;
		m_pElements = 0;
	}
};

CUnknown101b6320Params *CUnknown101b6320Params::sub_10133340(const CUnknown101b6320Params &other)
{
	UtlVec8 *pA = (UtlVec8 *)&m_vecA;
	const UtlVec8 *pOtherA = (const UtlVec8 *)&other.m_vecA;
	int i = 0;
	CUnknown101b5b70VecB *pB = (CUnknown101b5b70VecB *)&m_vecB;
	CUnknown101b5b70VecB *pOtherB = (CUnknown101b5b70VecB *)&other.m_vecB;
	int n;
	((CUnknown101b5b70VecB *)pA)->Init();
	pB->Init();
	int t0 = other.m_nField00; m_nField00 = t0;
	m_nField04 = other.m_nField04;
	m_nField08 = other.m_nField08;
	m_nField0c = other.m_nField0c;
	m_nField10 = other.m_nField10;
	m_nField14 = other.m_nField14;
	m_nField18 = other.m_nField18;
	m_bField1c = other.m_bField1c;
	n = pOtherA->m_Size;
	for (; i < n; i++) {
		char *pSrcBase = pOtherA->m_pMemory;
		int idx; idx = pA->m_Size;
		if (idx + 1 > pA->m_allocationCount)
			((CMem8_t *)pA)->sub_101315b0(idx - pA->m_allocationCount + 1);
		pA->m_Size++;
		pA->m_pElements = (UtlVec8Elem *)pA->m_pMemory;
		pA->sub_10130f90(idx, 1);
		sub_10131480(pA->m_pMemory + idx * 8, (8 * i) + pSrcBase);
	}
	n = pOtherB->m_Size;
	i = 0;
	for (; i < n; i++)
		pB->AddToTail(pOtherB->Element(i));
	m_bField1d = other.m_bField1d;
	m_bField48 = other.m_bField48;
	memcpy(m_szChannel, other.m_szChannel, sizeof(m_szChannel));
	memcpy(m_szVolume, other.m_szVolume, sizeof(m_szVolume));
	memcpy(m_szPitch, other.m_szPitch, sizeof(m_szPitch));
	memcpy(m_szSoundLevel, other.m_szSoundLevel, sizeof(m_szSoundLevel));
	return this;
}
// END FUNCTION

// FUNCTION: 0x10133540 size=0x1a
namespace lifted {
extern int g_102c4f40;
extern int g_102c4f44;
extern char g_102c4f84;
}
int sub_10133540()
{
    lifted::g_102c4f44 = 4;
    lifted::g_102c4f40 = (int)&lifted::g_102c4f84;
    return (int)&lifted::g_102c4f40;
}
// END FUNCTION

// FUNCTION: 0x10133560 size=0x75
extern "C" double fabs(double);
extern float g_101e34f0;
extern double g_10224050;
void __stdcall sub_101335e0(float);
struct CFloatUnit {
    float a, b, c;
    char d;
    void sub_10133560(float x, float y);
};
// TARGET: CFloatUnit::sub_10133560
void CFloatUnit::sub_10133560(float x, float y)
{
    float diff = x - a;
    if (diff != g_101e34f0 && y > g_101e34f0) {
        b = x;
        double r = fabs(diff / y);
        c = (g_10224050 > r) ? g_10224050 : r;
        return;
    }
    if (x != a)
        d = 1;
    sub_101335e0(x);
}
// END FUNCTION

// FUNCTION: 0x101335e0 size=0x27
#include "CFloatUnit.h"

// TARGET: CFloatUnit::sub_101335e0
void CFloatUnit::sub_101335e0(float flValue)
{
	if (m_flPrev != flValue)
		m_bChanged = 1;
	m_flRate = 0.0f;
	m_flPrev = flValue;
	m_flValue = flValue;
}
// END FUNCTION

// FUNCTION: 0x10133630 size=0x23
float __cdecl sub_1010c2e0(float a, float b, float c);

// TARGET: sub_10133630
void __fastcall sub_10133630(void *pSelf, int unused, float scale)
{
    float *p = (float *)pSelf;
    p[0] = sub_1010c2e0(p[1], p[0], scale * p[2]);
}
// END FUNCTION

// FUNCTION: 0x10133780 size=0x1a
namespace lifted {
extern int g_102c50d4;
extern int g_102c50d8;
extern char g_102c511c;
}
int sub_10133780()
{
    lifted::g_102c50d8 = 0xc;
    lifted::g_102c50d4 = (int)&lifted::g_102c511c;
    return (int)&lifted::g_102c50d4;
}
// END FUNCTION

// FUNCTION: 0x10133960 size=0x1d
#include "CFloatUnit.h"

struct CUnknown101bbbf0 {
	char m_pad0000[0x38];
	unsigned int m_n0038;
	void sub_10133960(float flValue, float flTime);
};

// TARGET: CUnknown101bbbf0::sub_10133960
void CUnknown101bbbf0::sub_10133960(float flValue, float flTime)
{
	m_n0038 |= 2;
	((CFloatUnit *)this)->sub_10133560(flValue, flTime);
}
// END FUNCTION

// FUNCTION: 0x10133980 size=0x3b
#include "CUnknown101bc140.h"
#include "CFloatUnit.h"
// TARGET: CUnknown101bc140::sub_10133980
void CUnknown101bc140::sub_10133980(float flTarget, float flTime)
{
	m_n38 |= 1;
	if (flTarget > 1.0)
		flTarget = 1.0f;
	((CFloatUnit *)&m_flPitchScale)->sub_10133560(flTarget, flTime);
}
// END FUNCTION

// FUNCTION: 0x101339c0 size=0x25
#include "UTIL_BloodStream.h"
#include "CUnknown101bc140.h"

// TARGET: CUnknown101bc140::sub_101339c0
void CUnknown101bc140::sub_101339c0(float flValue)
{
	sub_10133980(0, flValue);
	m_fl24 = g_102ba388->vfunc9() + flValue;
}
// END FUNCTION

// FUNCTION: 0x101339f0 size=0x3
struct CUnknown101339f0 { float sub_101339f0(); };
float CUnknown101339f0::sub_101339f0()
{
    return *(float *)this;
}
// END FUNCTION

// FUNCTION: 0x10133a00 size=0x4
struct CUnknown10133a00 { float sub_10133a00(); };
float CUnknown10133a00::sub_10133a00()
{
    return *(float *)((char *)this + 0x10);
}
// END FUNCTION

// FUNCTION: 0x10134010 size=0x1a
namespace lifted {
extern int g_102c532c;
extern int g_102c5330;
extern char g_102c5374;
}
int sub_10134010()
{
    lifted::g_102c5330 = 4;
    lifted::g_102c532c = (int)&lifted::g_102c5374;
    return (int)&lifted::g_102c532c;
}
// END FUNCTION

// FUNCTION: 0x10134030 size=0x24
// TARGET: sub_10134030
int sub_10134030(char **pa, char **pb)
{
    return *(float *)(*pa + 4) > *(float *)(*pb + 4);
}
// END FUNCTION

// FUNCTION: 0x10134060 size=0x40
#include "CUnknown101bbd10.h"

struct CUnknown101bc540Obj
{
	void sub_10133980(int a, int b);
	void sub_10133960(int a, int b);
};

struct CUnknown101bc540Rec
{
	void *m_pObj;	// +0
	int m_n04;
	int m_n08;	// +0x8
	int m_nMode;	// +0xc
	int m_n10;	// +0x10
};

// TARGET: sub_10134060
void __stdcall sub_10134060(CUnknown101bc540Rec *p)
{
	switch (p->m_nMode) {
	case 2:
		((CUnknown101bbd10 *)p->m_pObj)->sub_10133a20();
		break;
	case 1:
		((CUnknown101bc540Obj *)p->m_pObj)->sub_10133960(p->m_n10, p->m_n08);
		break;
	case 0:
		((CUnknown101bc540Obj *)p->m_pObj)->sub_10133980(p->m_n10, p->m_n08);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x10134200 size=0x7e
#include "CUnknown101bc750.h"
struct Mem4;
void __fastcall sub_10135430(Mem4 *, int, int);
void CUnknown101bc750::sub_10134200(int value)
{
    PQHeap101bc750 *h = &m_heap;
    int idx = h->m_Size;
    if (idx + 1 > h->m_allocationCount)
        sub_10135430((Mem4 *)h, idx - h->m_allocationCount + 1, idx - h->m_allocationCount + 1);
    h->m_Size++;
    h->m_pElements = (UtlVec8Elem *)h->m_pMemory;
    h->sub_101353f0(idx, 1);
    ((int *)h->m_pMemory)[idx] = value;
    while (idx != 0) {
        int parent = (idx + 1) / 2 - 1;
        int *mem = (int *)h->m_pMemory;
        if (h->m_pLessFunc(&mem[idx], &mem[parent]))
            break;
        mem = (int *)h->m_pMemory;
        int t = mem[parent];
        mem[parent] = mem[idx];
        ((int *)h->m_pMemory)[idx] = t;
        idx = parent;
    }
}
// END FUNCTION

// FUNCTION: 0x101345d0 size=0xa3
#include "CUnknown101bcc40.h"
struct ISaveSlots {
	virtual void v0();
	virtual void v1();
	virtual void Write(const void *p, const char *name);
	virtual void v3();
	virtual void StartBlock();
	virtual void v5();
	virtual void EndBlock();
	virtual void v7();
	virtual void v8();
	virtual void v9();
	virtual void WriteInts(int *p, int n);
};
extern char g_102c50d4[], g_102c532c[];

void CUnknown101bcc40::sub_101345d0(int id, void *pSave)
{
	ISaveSlots *save = (ISaveSlots *)pSave;
	save->StartBlock();
	save->Write((void *)id, g_102c50d4);
	save->EndBlock();
	int count = 0;
	int i = m_count;
	while (--i >= 0) {
		if (*m_items[i] == id)
			count++;
	}
	save->StartBlock();
	save->WriteInts(&count, 1);
	for (i = m_count - 1; i >= 0; i--) {
		int *rec = m_items[i];
		if (*rec == id) {
			save->StartBlock();
			save->Write(rec, g_102c532c);
			save->EndBlock();
		}
	}
	save->EndBlock();
}
// END FUNCTION

// FUNCTION: 0x101347f0 size=0x2a
namespace lifted {
extern char g_102366ac;
}
struct CUnknown101bcef0 { void * sub_101347f0(); };
void * CUnknown101bcef0::sub_101347f0()
{
    *(int *)((char *)this + 4) = 0;
    *(int *)((char *)this + 8) = 0;
    *(int *)((char *)this + 0xc) = 0;
    *(int *)((char *)this + 0x10) = 0;
    *(int *)((char *)this + 0x14) = 0;
    *(int *)((char *)this + 0x18) = 0;
    *(int *)this = (int)&lifted::g_102366ac;
    *(char *)((char *)this + 0x1c) = 0;
    *(int *)((char *)this + 0x20) = -1;
    *(char *)((char *)this + 0x24) = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10134fa0 size=0x9e
#include "CDirtySpatialPartitionEntityList.h"
#include "utlvector.h"
#include "UtlMem.h"

void __cdecl sub_101d1296(void *p);

class CPrimaryBase { public: virtual void pv(); };

class CMyComplete : public CPrimaryBase, public CAutoGameSystem { };

void *CAutoGameSystem::sub_10134fa0(unsigned int flags)
{
	int *v2 = (int *)((char *)this + 0x1c);
	v2[3] = 0;
	((UtlMem *)v2)->sub_10135350();
	v2[4] = v2[0];
	if (v2[2] != -1) {
		if (v2[0] != 0) { Plat_Free((void *)v2[0]); v2[0] = 0; }
		v2[1] = 0;
	}

	((CUtlVector<int> *)((char *)this + 8))->~CUtlVector<int>();

	CAutoGameSystem *base = ((char *)this - 4) ? this : 0;
	base->sub_100f3f80();

	if (flags & 1)
		sub_101d1296((char *)this - 4);
	return (char *)this - 4;
}
// END FUNCTION

// FUNCTION: 0x101352e0 size=0x21
// TARGET: CUtlVector4::sub_101352e0
#include "CUtlVector4.h"
void CUtlVector4::sub_101352e0(int a, int b)
{
    int tmp = m_pMemory[a];
    m_pMemory[a] = m_pMemory[b];
    m_pMemory[b] = tmp;
}
// END FUNCTION

// FUNCTION: 0x10135310 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_10135310(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
}
// END FUNCTION

// FUNCTION: 0x10135350 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_10135350()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10135380 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10135380(int num);
};

// TARGET: UtlMem::sub_10135380
void UtlMem::sub_10135380(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x101353f0 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_101353f0(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
}
// END FUNCTION

// FUNCTION: 0x10135430 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10135430(int num);
};

// TARGET: UtlMem::sub_10135430
void UtlMem::sub_10135430(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x10135580 size=0x1
void sub_10135580()
{
}
// END FUNCTION

// FUNCTION: 0x10136d90 size=0x1
void sub_10136d90()
{
}
// END FUNCTION

// FUNCTION: 0x10136fc0 size=0x4
struct CUnknown10136fc0 { int sub_10136fc0(); };
int CUnknown10136fc0::sub_10136fc0()
{
    return *(int *)((char *)this + 0x18);
}
// END FUNCTION

// FUNCTION: 0x10137ce0 size=0x51
#include <string.h>
#pragma intrinsic(strcmp)
bool sub_10137ce0(const char **a, const char **b)
{
    return strcmp(*a, *b) < 0;
}
// END FUNCTION

// FUNCTION: 0x10137d90 size=0x2f
#include "utlrbtree.h"
#include "utlvector.h"
#include "CGameStringPool.h"
#include "utlmemory.h"

// TARGET: CStringPool::sub_10137d90
void CStringPool::sub_10137d90()
{
	sub_10138140();
	((CUtlMemory<int> *)((char *)this + 4))->Purge();
}
// END FUNCTION

// FUNCTION: 0x10137dd0 size=0x15b
#include "CUtlRBTree12.h"
#include "utlrbtree.h"
struct CRBTree12Entry_101c03c0 { char data[4]; };	// the tree of sentinel 0x1072c7dc (RotateLeft 0x101c03c0)

// TARGET: CUtlRBTree12::sub_10137dd0
int CUtlRBTree12::sub_10137dd0(int key)
{
	const CUtlRBTree<CRBTree12Entry_101c03c0, unsigned short> *tree = (const CUtlRBTree<CRBTree12Entry_101c03c0, unsigned short> *)this;
	unsigned short cur = m_Root;
	while (cur != InvalidIndex())
	{
		if (m_LessFunc(&key, m_pElements[cur].m_Data))
			cur = tree->Links(cur).m_Left;
		else if (m_LessFunc(m_pElements[cur].m_Data, &key))
			cur = tree->Links(cur).m_Right;
		else
			break;
	}
	if (tree->Links(cur).m_Left != cur)
		return *(int *)m_pElements[cur].m_Data;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10138700 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10138700(int num);
};

void CUtlMemory12::sub_10138700(int num)
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
				n = 3;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 12);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x10138770 size=0xbd
#include "CUtlRBTree12.h"
#include "utlrbtree.h"
struct CRBTree12Entry_10194f30 { char data[4]; };	// the tree of its sentinel (one T per game instance)

bool CUtlRBTree12::sub_10138770(unsigned short i) const
{
	const CUtlRBTree<CRBTree12Entry_10194f30, unsigned short> *tree = (const CUtlRBTree<CRBTree12Entry_10194f30, unsigned short> *)this;
	unsigned short parent = tree->Links(i).m_Parent;
	return tree->Links(parent).m_Left == i;
}
// END FUNCTION

// FUNCTION: 0x10138bb0 size=0x1
void sub_10138bb0()
{
}
// END FUNCTION

// FUNCTION: 0x10138bd0 size=0xdb
#include "CUtlRBTree16.h"

inline void *operator new(unsigned int, void *p) { return p; }

struct SymConv {
	unsigned short *sub_1013d520(unsigned int *pKey, unsigned int key);
};

struct SymElem {
	unsigned short key;
	int value;
	SymElem() : key(0xffff) {}
	SymElem(const SymElem &o) : key(o.key), value(o.value) {}
};

struct SymTree : CUtlRBTree16 {
	SymConv m_Conv;	// 0x18
	unsigned short *sub_101397f0(unsigned short i);
	void sub_10139460(unsigned short node, unsigned short parent, bool left);
};

struct SymMap {
	SymTree *m_pTree;
	// TARGET
	unsigned short sub_10138bd0(unsigned int key, int value);
};

unsigned short SymMap::sub_10138bd0(unsigned int key, int value)
{
	SymTree *t = m_pTree;
	SymElem el;
	unsigned short *pSym = t->m_Conv.sub_1013d520(&key, key);
	unsigned short cur = t->m_Root;
	el.key = *pSym;
	unsigned short parent = 0xffff;
	bool left = false;
	while (cur != 0xffff) {
		parent = cur;
		if (t->m_LessFunc(&el, (char *)t->m_pElements + cur * 16 + 8)) {
			left = true;
			cur = *t->sub_101397f0(cur);
		} else {
			left = false;
			cur = t->sub_101397f0(cur)[1];
		}
	}
	unsigned short n = t->sub_10139340();
	t->sub_10139460(n, parent, left);
	t->m_NumElements++;
	SymElem *e = (SymElem *)((char *)t->m_pElements + n * 16 + 8);
	if (e) {
		new (e) SymElem(el);
	}
	*(int *)((char *)t->m_pElements + n * 16 + 12) = value;
	return n;
}
// END FUNCTION

// FUNCTION: 0x101390c0 size=0x89
#include "utlrbtree.h"
#include "CUnknown10249fc0.h"
int CUnknown10249fc0::sub_101390c0(unsigned short i)
{
	if (m_pTree->Links(i).m_Left == i)
		return 0;
	CUnknown10249fc0_Tree *t = m_pTree;
	return t->m_sub.sub_1013d6f0(*t->sub_10139320(i));
}
// END FUNCTION

// FUNCTION: 0x10139150 size=0x7e
struct Node16 {
    unsigned short m_Left, m_Right, m_Parent, m_Tag;
    int m_pad8;
    int m_Elem;
};
struct Hdr { int m_pad0; Node16 *m_pNodes; };
extern unsigned char g_10680e8d;
extern Node16 g_105e5d8c;
struct NodeHolder {
    Hdr *m_pHdr;
    int sub_10139150(unsigned short idx);
};
int NodeHolder::sub_10139150(unsigned short idx)
{
    Hdr *h = m_pHdr;
    if (!(g_10680e8d & 1)) {
        g_10680e8d |= 1;
        g_105e5d8c.m_Left = 0xffff;
        g_105e5d8c.m_Right = 0xffff;
        g_105e5d8c.m_Parent = 0xffff;
        g_105e5d8c.m_Tag = 1;
    }
    Node16 *n;
    if (idx != 0xffff)
        n = &h->m_pNodes[idx];
    else
        n = &g_105e5d8c;
    if (n->m_Left == idx)
        return 0;
    return m_pHdr->m_pNodes[idx].m_Elem;
}
// END FUNCTION

// FUNCTION: 0x101391d0 size=0x85
#include "utlrbtree.h"
#include "CUtlRBTreeOf.h"
struct CUnknown10249fc0_Entry { int m_n0; int m_nKey; };
#include "CUtlRBTree16.h"

struct CTreeHolder1024a120
{
	CUtlRBTree16Of<CUnknown10249fc0_Entry> *m_pTree;
};

void __fastcall sub_101391d0(CTreeHolder1024a120 *p)
{
	CUtlRBTree16Of<CUnknown10249fc0_Entry> *t = p->m_pTree;
	unsigned short prev = 0xffff;
	for (int i = (int)t->m_TotalElements; --i >= 0; ) {
		unsigned short idx = (unsigned short)i;
		if (t->Links(idx).m_Left != idx) {
		}
		t->m_pElements[idx].m_Links.m_Right = prev;
		t->m_pElements[idx].m_Links.m_Left = idx;
		prev = idx;
	}
	t->m_FirstFree = t->m_TotalElements ? (unsigned short)0 : (unsigned short)0xffff;
	t->m_Root = 0xffff;
	t->m_NumElements = 0;
}
// END FUNCTION

// FUNCTION: 0x101392a0 size=0x54
#include "CUnknown1024a230.h"
#include "CUnknown1024b2d0.h"
#include "utlrbtree.h"

struct CUnknown1024a230_Entry
{
	unsigned short m_id;
	int m_data;
};

bool sub_10139300(const CUnknown1024a230_Entry &a, const CUnknown1024a230_Entry &b);

struct CUnknown1024a230ObjX
{
	CUtlRBTree<CUnknown1024a230_Entry, unsigned short> m_Tree;
	CUnknown1024b2d0 m_Strings;

	CUnknown1024a230ObjX() : m_Tree(0, 0, sub_10139300)
	{
		m_Strings.sub_1013d2b0(0, 0, 1);
	}
};

CUnknown1024a230 *CUnknown1024a230::sub_101392a0()
{
	m_pObj = (CUnknown1024a230Obj *)new CUnknown1024a230ObjX;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10139340 size=0x116
#include "utlmemory.h"
#include "utlrbtree.h"
#include "CUtlRBTreeOf.h"
struct CUnknown10249fc0_Entry { int m_n0; int m_nKey; };
#include "CUtlRBTree16.h"
extern void *(*g_101e3104)(void *, unsigned int);
extern void *(*g_101e3100)(unsigned int);
struct Mem16 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void Grow(int num)
    {
        if (m_nGrowSize == -1)
            return;
        int a = *(int *)&m_nAllocationCount;
        int nAllocationRequested = a + num;
        if (a < nAllocationRequested) {
            do {
                if (a != 0) {
                    if (m_nGrowSize != 0)
                        a += m_nGrowSize;
                    else
                        a += a;
                } else
                    a = 2;
            } while (a < nAllocationRequested);
            m_nAllocationCount = a;
        }
        if (m_pMemory)
            m_pMemory = g_101e3104(m_pMemory, m_nAllocationCount << 4);
        else
            m_pMemory = g_101e3100(m_nAllocationCount << 4);
    }
};
unsigned short CUtlRBTree16::sub_10139340()
{
    const CUtlRBTree16Of<CUnknown10249fc0_Entry> *tree = (const CUtlRBTree16Of<CUnknown10249fc0_Entry> *)this;
    unsigned short elem;
    if (m_FirstFree == InvalidIndex()) {
        if (m_unk8 == m_TotalElements)
            ((Mem16 *)&m_pElements)->Grow(1);
        elem = m_TotalElements++;
    } else {
        elem = m_FirstFree;
        m_FirstFree = tree->Links(m_FirstFree).m_Right;
    }
    unsigned short *p = (unsigned short *)&m_pElements[elem].m_Data;
    if (p)
        *p = 0xffff;
    return elem;
}
// END FUNCTION

// FUNCTION: 0x1013a7d0 size=0x1
void sub_1013a7d0()
{
}
// END FUNCTION

// FUNCTION: 0x1013c790 size=0x19
#include "Vector.h"
Vector &Vector::sub_1013c790(const Vector &v)
{
	x = v.x;
	y = v.y;
	z = v.z;
	return *this;
}
// END FUNCTION

// FUNCTION: 0x1013c7b0 size=0x1a
struct CUnk1011d310
{
	int m_n0;
	int m_n4;
	int m_nLimit8;
	int m_nCurrentC;
	char m_bFlag10;

	char sub_1013c7b0(int a);
};

// TARGET: sub_1013c7b0
char CUnk1011d310::sub_1013c7b0(int a)
{
	int sum = m_nCurrentC + a;
	if (sum > m_nLimit8) {
		m_bFlag10 = 1;
	}
	return m_bFlag10;
}
// END FUNCTION

// FUNCTION: 0x1013c8a0 size=0x33
struct CInitView {
    int m_n0;
    int m_n4;
    int m_n8;
    int m_nc;
    int m_n10;
    unsigned char m_b14;
    unsigned char m_b15;
    CInitView *sub_1013c8a0(int a, int b, unsigned char bFlag);
};

// TARGET: CInitView::sub_1013c8a0
CInitView *CInitView::sub_1013c8a0(int a, int b, unsigned char bFlag)
{
    m_n0 = a;
    m_n4 = b;
    m_n8 = -1;
    m_b14 = 0;
    m_nc = 0;
    m_n10 = 0;
    m_b15 = 0;
    if (bFlag != 0)
        m_b15 = 1;
    return this;
}
// END FUNCTION

// FUNCTION: 0x1013c8e0 size=0x4f
#include "CUtlBuffer.h"
void CUtlBuffer::sub_1013c8e0(char *pBuffer, int nSize, bool bText)
{
	if (m_nGrow != -1) {
		if (m_pBuffer) {
			Plat_Free(m_pBuffer);
			m_pBuffer = 0;
		}
		m_nSize = 0;
	}
	m_pBuffer = pBuffer;
	m_nSize = nSize;
	m_nGrow = -1;
	m_nGet = 0;
	m_nPut = 0;
	m_nFlags = 0;
	if (bText)
		m_nFlags = 1;
}
// END FUNCTION

// FUNCTION: 0x1013c930 size=0x3b
extern void *(*g_101e3104)(void *, int);
extern void *(*g_101e3100)(int);

struct CUtlMemUnit1006be50
{
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;

    void sub_1013c930(int num);
};

// TARGET: sub_1013c930
void CUtlMemUnit1006be50::sub_1013c930(int num)
{
    if (m_nAllocationCount < num && m_nGrowSize != -1)
    {
        m_nAllocationCount = num;
        if (m_pMemory)
        {
            m_pMemory = g_101e3104(m_pMemory, num);
            return;
        }
        m_pMemory = g_101e3100(num);
    }
}
// END FUNCTION

// FUNCTION: 0x1013c970 size=0x7c
#include "CUnknown1006bea0.h"

extern "C" void *memcpy(void *, const void *, unsigned);
extern "C" void *memset(void *, int, unsigned);

void CUnknown1006bea0::sub_1013c970(void *dest, int count)
{
    int avail = m_size - m_pos;
    if (avail < count) {
        memcpy(dest, m_pData + m_pos, avail);
        memset(dest, 0, count - avail);
        m_pos += avail;
        m_flags |= 2;
    } else {
        memcpy(dest, m_pData + m_pos, count);
        m_pos += count;
    }
}
// END FUNCTION

// FUNCTION: 0x1013c9f0 size=0x41
#include "CUnknown1006bea0.h"
#include <ctype.h>

void CUnknown1006bea0::sub_1013c9f0()
{
    if ((m_flags15 & 1) && !m_flags) {
        int size = m_size;
        while (m_pos < size && isspace(m_pData[m_pos]))
            m_pos++;
    }
}
// END FUNCTION

// FUNCTION: 0x1013ca40 size=0xb1
#include "CUtlBuffer.h"
#include <ctype.h>

void CUtlBuffer::sub_1013ca40(char *pString)
{
	if (m_nError) {
		*pString = 0;
		return;
	}
	if (!(m_nFlags & 1)) {
		int nLeft = m_nSize - m_nGet;
		int i = 0;
		while (i < nLeft) {
			int c = m_pBuffer[m_nGet + i];
			pString[i] = c;
			i++;
			if (c == 0)
				goto done;
		}
		pString[i] = 0;
		m_nError |= 2;
done:
		m_nGet += i;
		return;
	}
	sub_1013c9f0();
	int nSize = m_nSize;
	while (m_nGet < nSize) {
		char c = m_pBuffer[m_nGet];
		if (isspace(c) || c == 0)
			break;
		*pString++ = c;
		m_nGet++;
	}
	*pString = 0;
}
// END FUNCTION

// FUNCTION: 0x1013cb00 size=0xa1
#include "CUnknown1006bea0.h"

void CUnknown1006bea0::sub_1013cb00(char *pString)
{
	if (m_flags) {
		*pString = 0;
		return;
	}
	if (!(m_flags15 & 1)) {
		int nAvail = m_size - m_pos;
		int i = 0;
		while (i < nAvail) {
			int c = m_pData[m_pos + i];
			pString[i] = c;
			i++;
			if (!c)
				goto done;
		}
		pString[i] = 0;
		m_flags |= 2;
done:
		m_pos += i;
		return;
	}
	sub_1013c9f0();
	int size = m_size;
	while (m_pos < size) {
		char c = m_pData[m_pos];
		if (c == '\n' || c == 0)
			break;
		*pString++ = c;
		m_pos++;
	}
	*pString = 0;
}
// END FUNCTION

// FUNCTION: 0x1013cbb0 size=0x25
// TARGET: CUnknown1006c180::sub_1013cbb0
#include "CUnknown1006c180.h"

bool CUnknown1006c180::sub_1013cbb0(int nAdd)
{
	if (m_b14 == 0)
	{
		int nSum = m_nC + nAdd;
		if (m_n4 >= nSum)
			return true;
		m_b14 = 2;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1013cbe0 size=0x37
struct CUnknown1006c1c0
{
	char m_pad0000[4];
	int m_i04;
	char m_pad0008[4];
	int m_i0c;

	void sub_1013cbe0(int op, int value);
};

// TARGET: CUnknown1006c1c0::sub_1013cbe0
void CUnknown1006c1c0::sub_1013cbe0(int op, int value)
{
	switch (op)
	{
	case 0:
		m_i0c = value;
		break;
	case 1:
		m_i0c += value;
		break;
	case 2:
		m_i0c = m_i04 - value;
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x1013cc20 size=0x1d2
#include "CUtlBuffer.h"
#include <stdlib.h>
#include <stdarg.h>

int CUtlBuffer::sub_1013cc20(const char *pFmt, char *list)
{
	if (m_nError || !(m_nFlags & 1))
		return 0;

	int numScanned = 0;
	char c;
	char *pEnd;
	while ((c = *pFmt++) != 0) {
		if (m_nGet >= m_nSize) {
			m_nError |= 2;
			break;
		}

		switch (c) {
		case ' ':
			sub_1013c9f0();
			break;

		case '%': {
			char type = *pFmt++;
			if (type == 0)
				return numScanned;

			switch (type) {
			case 'c': {
				char *ch = va_arg(list, char *);
				*ch = m_pBuffer[m_nGet];
				++m_nGet;
			} break;

			case 'i':
			case 'd': {
				int *i = va_arg(list, int *);
				*i = strtol(m_pBuffer + m_nGet, &pEnd, 10);
				if (pEnd == m_pBuffer + m_nGet)
					return numScanned;
				m_nGet = (int)pEnd - (int)m_pBuffer;
			} break;

			case 'x': {
				int *i = va_arg(list, int *);
				*i = strtol(m_pBuffer + m_nGet, &pEnd, 16);
				if (pEnd == m_pBuffer + m_nGet)
					return numScanned;
				m_nGet = (int)pEnd - (int)m_pBuffer;
			} break;

			case 'u': {
				unsigned int *u = va_arg(list, unsigned int *);
				*u = strtoul(m_pBuffer + m_nGet, &pEnd, 10);
				if (pEnd == m_pBuffer + m_nGet)
					return numScanned;
				m_nGet = (int)pEnd - (int)m_pBuffer;
			} break;

			case 'f': {
				float *f = va_arg(list, float *);
				*f = (float)strtod(m_pBuffer + m_nGet, &pEnd);
				if (pEnd == m_pBuffer + m_nGet)
					return numScanned;
				m_nGet = (int)pEnd - (int)m_pBuffer;
			} break;

			case 's': {
				char *s = va_arg(list, char *);
				sub_1013ca40(s);
			} break;

			default:
				return numScanned;
			}

			++numScanned;
		} break;

		default:
			if (c != (unsigned char)m_pBuffer[m_nGet])
				return numScanned;
			++m_nGet;
		}
	}
	return numScanned;
}
// END FUNCTION

// FUNCTION: 0x1013ce60 size=0x2a
#include "CUtlBuffer.h"
#include <string.h>

struct CUnit1006c4f0 : CUtlBuffer {
    void sub_1013ce60(const char *pString);
};

void CUnit1006c4f0::sub_1013ce60(const char *pString)
{
    int nSize = strlen(pString);
    if ((m_nFlags & 1) == 0) {
        nSize++;
    }
    sub_1013ce20(pString, nSize);
}
// END FUNCTION

// FUNCTION: 0x1013ce90 size=0x43
#include "CUtlBuffer.h"
extern "C" int __cdecl vsprintf(char *, const char *, char *);
void CUtlBuffer::sub_1013ce90(const char *pFmt, char *list)
{
	char temp[2048];
	int len = vsprintf(temp, pFmt, list);
	if (!(m_nFlags & 1))
		len++;
	sub_1013ce20(temp, len);
}
// END FUNCTION

// FUNCTION: 0x1013cfe0 size=0x43
#include "CUnknown1024b2d0.h"
extern CUnknown1024b2d0 *g_105e74d8;
extern char g_105e74dc;
void sub_1013cfe0()
{
	if (!g_105e74dc) {
		CUnknown1024b2d0 *p = (CUnknown1024b2d0 *)operator new(0x2c);
		g_105e74d8 = p ? p->sub_1013d2b0(0, 0x20, 0) : 0;
		g_105e74dc = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x1013d0a0 size=0x25
struct CUnknown1024b000_Ref
{
    unsigned short *sub_1013d520();
};

CUnknown1024b000_Ref *__stdcall sub_1013d090(int *pValue, int value);

struct CUnknown1024b000
{
    unsigned short m_nValue;

    CUnknown1024b000 *sub_1013d0a0(int value);
};

// TARGET: CUnknown1024b000::sub_1013d0a0
CUnknown1024b000 *CUnknown1024b000::sub_1013d0a0(int value)
{
    unsigned short *p = sub_1013d090(&value, value)->sub_1013d520();
    m_nValue = *p;
    return this;
}
// END FUNCTION

// FUNCTION: 0x1013d100 size=0x5e
#include <string.h>
struct CVNameId
{
	unsigned short m_nId;
	const char *sub_1013d0d0();
	bool sub_1013d100(const char *pszName);
};

// TARGET: CVNameId::sub_1013d100
bool CVNameId::sub_1013d100(const char *pszName)
{
	if (m_nId == 0xffff)
		return false;
	return strcmp(sub_1013d0d0(), pszName) == 0;
}
// END FUNCTION

// FUNCTION: 0x1013d180 size=0xae
extern "C" int strcmp(const char *, const char *);
struct Pool { char pad[0x18]; char **blocks; };
extern char *g_105e74d0;
extern Pool *g_105e74d4;
struct Sym {
    unsigned short blk, off;
    const char *Str() const {
        if (blk == 0xffff && off == 0xffff)
            return g_105e74d0;
        return g_105e74d4->blocks[blk] + 8 + off;
    }
};
bool sub_1013d180(const Sym *a, const Sym *b)
{
    const char *s1 = a->Str();
    const char *s2 = b->Str();
    return strcmp(s1, s2) < 0;
}
// END FUNCTION

// FUNCTION: 0x1013d230 size=0x7d
struct StrRef { unsigned short blk; unsigned short off; };
struct StrTable { char pad[0x18]; char **blocks; };
extern char *g_105e74d0;
extern StrTable *g_105e74d4;
int sub_101e28e0(const char *, const char *);

static inline const char *StrOf(const StrRef *r)
{
    if (r->blk == 0xffff && r->off == 0xffff)
        return g_105e74d0;
    return g_105e74d4->blocks[r->blk] + 8 + r->off;
}

bool sub_1013d230(const StrRef *a, const StrRef *b)
{
    const char *s1 = StrOf(a);
    const char *s2 = StrOf(b);
    return sub_101e28e0(s1, s2) < 0;
}
// END FUNCTION

// FUNCTION: 0x1013d2b0 size=0x71
#include "CUnknown1024b2d0.h"

void sub_1013d230();
void sub_1013d180();
extern void *(*g_101e3100)(int);

CUnknown1024b2d0 *CUnknown1024b2d0::sub_1013d2b0(int arg, int count, char flag)
{
    m_pfn = flag ? (void *)sub_1013d230 : (void *)sub_1013d180;
    m_pData = 0;
    m_count = count;
    m_arg = arg;
    if (count != 0)
        m_pData = g_101e3100(count * 12);
    m_w12 = 0;
    m_w10 = 0xffff;
    m_w14 = 0xffff;
    m_w16 = 0;
    m_i18 = 0;
    m_i1c = 0;
    m_i20 = 8;
    m_i24 = 0;
    m_i28 = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x1013d330 size=0x6b
#include "CUnknown1024b370.h"
extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *p);

inline void Purge(CUnknown1024b370Mem &m)
{
    if (m.m_growSize != -1) {
        if (m.m_pMemory) {
            Plat_Free(m.m_pMemory);
            m.m_pMemory = 0;
        }
        m.m_allocationCount = 0;
    }
}

void CUnknown1024b370::sub_1013d330()
{
    sub_1013d730();
    int g = m_mem1.m_growSize;
    m_n24 = 0;
    if (g != -1) {
        if (m_mem1.m_pMemory) {
            Plat_Free(m_mem1.m_pMemory);
            m_mem1.m_pMemory = 0;
        }
        m_mem1.m_allocationCount = 0;
    }
    int g2 = m_mem1.m_growSize;
    void *p = m_mem1.m_pMemory;
    m_p28 = p;
    if (g2 != -1) {
        if (p) {
            Plat_Free(p);
            m_mem1.m_pMemory = 0;
        }
        m_mem1.m_allocationCount = 0;
    }
    Purge(m_mem0);
}
// END FUNCTION

// FUNCTION: 0x1013d3a0 size=0x139
#include "CUnknown1024b370.h"
#include "utlrbtree.h"
#include "CUtlRBTreeOf.h"
struct CRBTree12Entry_1024c1d0 { char data[4]; };
#include "utlsortvector.h"
#include "utlvector.h"
#include "CUtlRBTree12.h"

struct CStringPoolIndex
{
	CStringPoolIndex() {}
	CStringPoolIndex(unsigned short iPool, unsigned short iOffset) : m_iPool(iPool), m_iOffset(iOffset) {}
	unsigned short m_iPool;
	unsigned short m_iOffset;
};

struct CUtlSymbolLessCtx
{
	const char *m_pUserString;
	CUnknown1024b370 *m_pTable;
};
extern CUtlSymbolLessCtx g_105e74d0;

typedef CUtlRBTree12Of<CRBTree12Entry_1024c1d0> SymTree_t;

struct SymLookup_t : SymTree_t
{
	unsigned short Find(const CStringPoolIndex &search) const
	{
		unsigned short current = m_Root;
		while (current != InvalidIndex()) {
			if (m_LessFunc(&search, m_pElements[current].m_Data))
				current = Links(current).m_Left;
			else if (m_LessFunc(m_pElements[current].m_Data, &search))
				current = Links(current).m_Right;
			else
				break;
		}
		return current;
	}
};

CUnknown1024b370Symbol CUnknown1024b370::sub_1013d3a0(const char *pString)
{
	CUnknown1024b370Symbol sym;
	if (!pString) {
		sym.m_Id = 0xffff;
		return sym;
	}
	g_105e74d0.m_pUserString = pString;
	g_105e74d0.m_pTable = this;
	sym.m_Id = ((const SymLookup_t *)this)->Find(CStringPoolIndex(0xffff, 0xffff));
	return sym;
}
// END FUNCTION

// FUNCTION: 0x1013d4e0 size=0x33
// TARGET: sub_1013d4e0
struct CFindItem_1024b590 {
    int a;
    int b;
};
struct CFindList_1024b590 {
    char pad[0x18];
    CFindItem_1024b590 **items;
    char pad2[8];
    int count;
    int sub_1013d4e0(int v);
};
int CFindList_1024b590::sub_1013d4e0(int v)
{
    int i;
    for (i = 0; i < count; i++) {
        if (items[i]->a - items[i]->b >= v) {
            return i;
        }
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1013d6f0 size=0x3c
#include "CUnknown1024b2d0.h"
extern char g_102de300[];

// TARGET: CUnknown1024b2d0::sub_1013d6f0
const char *CUnknown1024b2d0::sub_1013d6f0(CUnknown1024b2d0Id id)
{
    if (id.m_id == 0xffff) return g_102de300;
    unsigned short *pIdx = (unsigned short *)((char *)m_pData + id.m_id * 12 + 8);
    return (const char *)(((int *)m_i18)[pIdx[0]] + pIdx[1] + 8);
}
// END FUNCTION

// FUNCTION: 0x1013d7c0 size=0x56
#include "CUnknown1024b370.h"

extern void (__cdecl *g_101e311c)(const char *fmt, ...);

struct S1024b940Index { unsigned short m_iPool; unsigned short m_iOffset; };
struct S1024b940Node { char links[8]; S1024b940Index m_Index; };

// TARGET: CUnknown1024b370::sub_1013d7c0
void CUnknown1024b370::sub_1013d7c0()
{
	int n = sub_1013d820();
	for (int i = 0; i < n; i++) {
		const S1024b940Index *pIdx = &((S1024b940Node *)m_mem0.m_pMemory)[(unsigned short)i].m_Index;
		g_101e311c("%4d - %s\n", i, (char *)((int *)m_mem1.m_pMemory)[pIdx->m_iPool] + 8 + pIdx->m_iOffset);
	}
}
// END FUNCTION

// FUNCTION: 0x1013dd10 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_1013dd10(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
}
// END FUNCTION

// FUNCTION: 0x1013dd50 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1013dd50(int num);
};

// TARGET: UtlMem::sub_1013dd50
void UtlMem::sub_1013dd50(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x1013ddc0 size=0xbd
#include "CUtlRBTree12.h"
#include "utlrbtree.h"
struct CRBTree12Entry_10194f30 { char data[4]; };	// the tree of its sentinel (one T per game instance)

bool CUtlRBTree12::sub_1013ddc0(unsigned short i) const
{
	const CUtlRBTree<CRBTree12Entry_10194f30, unsigned short> *tree = (const CUtlRBTree<CRBTree12Entry_10194f30, unsigned short> *)this;
	unsigned short parent = tree->Links(i).m_Parent;
	return tree->Links(parent).m_Left == i;
}
// END FUNCTION

// FUNCTION: 0x1013e3a0 size=0x18b
#include "CUnknown101d3a10.h"
#include "CVStatInfoList_t.h"

extern CVStatInfoList_t g_105f9220;
extern CVStatInfoList_t g_105f90b8;
extern CVStatInfoList_t g_105f8c60;
extern int g_105e7500;

void CUnknown101d3a10::sub_1013e3a0()
{
	int i;
	int n = g_105f9220.m_nStats;
	if (n > 0) {
		if (m_pArray0d0)
			delete m_pArray0d0;
		m_pArray0d0 = new int[n];
		for (i = 0; i < n; i++)
			m_pArray0d0[i] = g_105f9220.sub_1015cfe0(i)->DefaultValue();
	}
	n = g_105f90b8.m_nStats;
	if (n > 0) {
		if (m_pArray0d4)
			delete m_pArray0d4;
		m_pArray0d4 = new int[n];
		for (i = 0; i < n; i++)
			m_pArray0d4[i] = g_105f90b8.sub_1015cfe0(i)->DefaultValue();
	}
	n = g_105f8c60.m_nStats;
	if (n > 0) {
		if (m_pArray0d8)
			delete m_pArray0d8;
		m_pArray0d8 = new int[n];
		for (i = 0; i < n; i++)
			m_pArray0d8[i] = -1;
		for (i = 0; i < n; i++)
			m_pArray0d8[i] = g_105f8c60.sub_1015cfe0(i)->DefaultValue();
	}
	if (m_pArray0dc)
		delete m_pArray0dc;
	n = g_105e7500;
	m_pArray0dc = new int[n];
	for (i = 0; i < g_105e7500; i++)
		m_pArray0dc[i] = 0;
}
// END FUNCTION

// FUNCTION: 0x1013e530 size=0x25c
#include "StatDefault3.h"

extern int g_105f9224;
extern int g_105f90bc;
extern int g_105f8c64;
extern int g_105e7500;

void StatDefault3::sub_1013e530(StatDefault3 *pParent)
{
	int i, n;
	if (m_pszDisplayName == 0)
		m_pszDisplayName = pParent->m_pszDisplayName;
	if (m_14 == 0)
		m_14 = pParent->m_14;
	if (m_18 == 0)
		m_18 = pParent->m_18;
	if (m_1c == 0)
		m_1c = pParent->m_1c;
	if (m_20 == 0)
		m_20 = pParent->m_20;
	if (m_78 == 0)
		m_78 = pParent->m_78;
	if (m_7c == 0)
		m_7c = pParent->m_7c;
	n = g_105f9224;
	for (i = 0; i < n; i++)
		m_d0[0][i] = pParent->m_d0[0][i];
	n = g_105f90bc;
	for (i = 0; i < n; i++)
		m_d0[1][i] = pParent->m_d0[1][i];
	n = g_105f8c64;
	for (i = 0; i < n; i++)
		m_pd8[i] = pParent->m_pd8[i];
	n = g_105e7500;
	for (i = 0; i < n; i++)
		m_dc[i] = pParent->m_dc[i];
	m_8c[0] = pParent->m_8c[0];
	m_8c[1] = pParent->m_8c[1];
	m_8c[2] = pParent->m_8c[2];
	m_8c[3] = pParent->m_8c[3];
	m_8c[4] = pParent->m_8c[4];
	m_8c[5] = pParent->m_8c[5];
	m_8c[6] = pParent->m_8c[6];
	m_8c[7] = pParent->m_8c[7];
	m_8c[8] = pParent->m_8c[8];
	m_8c[9] = pParent->m_8c[9];
	m_8c[10] = pParent->m_8c[10];
	m_8c[11] = pParent->m_8c[11];
	m_ac = pParent->m_ac;
	m_98[0] = pParent->m_98[0];
	m_98[1] = pParent->m_98[1];
	m_98[2] = pParent->m_98[2];
	m_98[3] = pParent->m_98[3];
	m_98[4] = pParent->m_98[4];
	m_98[5] = pParent->m_98[5];
	m_98[6] = pParent->m_98[6];
	m_98[7] = pParent->m_98[7];
	m_98[8] = pParent->m_98[8];
	m_98[9] = pParent->m_98[9];
	m_a4 = pParent->m_a4;
	m_a8 = pParent->m_a8;
	m_a9 = pParent->m_a9;
	m_bc[0] = pParent->m_bc[0];
	m_bc[1] = pParent->m_bc[1];
	m_bc[2] = pParent->m_bc[2];
	m_cc = pParent->m_cc;
}
// END FUNCTION

// FUNCTION: 0x1013f290 size=0x3
char sub_1013f290()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1013f2a0 size=0x45
struct CIndexTables {
	char m_pad[0xd0];
	int *m_pTable0;
	int *m_pTable1;
	int *m_pTable2;
	int sub_1013f2a0(int type, int index);
};
int CIndexTables::sub_1013f2a0(int type, int index)
{
	switch (type) {
	case 0:
		return m_pTable0[index];
	case 1:
		return m_pTable1[index];
	case 2:
		return m_pTable2[index];
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1013f320 size=0x42
#include <stdio.h>
#include <string.h>

extern char g_105e76d8[];
extern char g_102de300[];

inline const char *STRINGR(const char *const &s) { return s ? s : g_102de300; }

struct CClanInfoView
{
	int m_n0;
	int m_n4;
	const char *m_psz8;
	int m_nC;
	int m_n10;
	int m_n14;
	int m_n18;
	const char *m_pszIcon;	// 0x1c
	char *sub_1013f320();
};

char *CClanInfoView::sub_1013f320()
{
	if (m_pszIcon) {
		sprintf(g_105e76d8, "Interface/CharacterMaintenance/%s", STRINGR(m_pszIcon));
		return g_105e76d8;
	}
	strcpy(g_105e76d8, "Interface/CharacterMaintenance/cm_clan_symbol_mercenary");
	return g_105e76d8;
}
// END FUNCTION

// FUNCTION: 0x1013f440 size=0x47
#include "StatDefault3.h"
int StatDefault3::sub_1013f440(int n)
{
    int *p = m_pd8;
    int count = 0;
    if (p[2] > 0) {
        count = 1;
        if (n == 0)
            return 2;
    }
    for (int i = 0; i < 17; i++, p++) {
        if (i != 2 && *p > 0) {
            if (count == n)
                return i;
            count++;
        }
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1013f8b0 size=0x5
namespace lifted {
int sub_1013f9b0();
}
int sub_1013f8b0()
{
    return lifted::sub_1013f9b0();
}
// END FUNCTION

// FUNCTION: 0x1013fc80 size=0x22
extern char g_102c6c3c[];
extern char g_102c6c30[];

struct CClanDocLoader
{
    void sub_1013f9b0();
    void sub_1013fb80(const char *pszName);
    void sub_1013fc80();
};

void CClanDocLoader::sub_1013fc80()
{
    sub_1013f9b0();
    sub_1013fb80(g_102c6c3c);
    sub_1013fb80(g_102c6c30);
}
// END FUNCTION

// FUNCTION: 0x1013fdc0 size=0x2f
#include "CStatDefault3List.h"
// TARGET: sub_1013fdc0

void CStatDefault3List::sub_1013fdc0()
{
    int a = 0;
    sub_1013fcb0("ClanDoc", (int)&a);
    sub_1013fcb0("NPCTemplate", (int)&a);
}
// END FUNCTION

// FUNCTION: 0x1013fdf0 size=0x4d
extern "C" int __cdecl sub_101e28e0(const char *, const char *);
struct CNamePtr {
	const char *m_p;
	const char *Get() { return m_p ? m_p : ""; }
};
struct CNamedEntryX {
	int m_unk0;
	int m_unk4;
	CNamePtr m_Name;
};
struct CNamedListX {
	int m_unk0;
	int m_count;
	CNamedEntryX **m_pData;
	int sub_1013fdf0(const char *name);
};
// TARGET: CNamedListX::sub_1013fdf0
int CNamedListX::sub_1013fdf0(const char *name)
{
	for (int i = 0; i < m_count; i++) {
		if (sub_101e28e0(m_pData[i]->m_Name.Get(), name) == 0)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1013fe40 size=0xa8
extern "C" char *sub_101d23bd(char *);
extern "C" char *sub_101d1300(const char *, const char *);
extern char g_102de300[];
struct Sub {
	const char *name;
	const char *Get() { return name ? name : g_102de300; }
};
struct Entry {
	int a, b;
	Sub sub;
};
struct List {
	int pad;
	int m_count;
	Entry **m_items;
	int sub_1013fe40(const char *name);
};
static inline void Cpy(char *d, const char *s)
{
	while ((*d++ = *s++))
		;
}
int List::sub_1013fe40(const char *name)
{
	char lowName[128];
	char lowEntry[128];
	Cpy(lowName, name);
	sub_101d23bd(lowName);
	for (int i = 0; i < m_count; i++) {
		const char *n = m_items[i]->sub.Get();
		Cpy(lowEntry, n);
		sub_101d23bd(lowEntry);
		if (sub_101d1300(lowEntry, lowName) == lowEntry)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1013fef0 size=0xb0
#include "CUnknown101d5bd0.h"
extern "C" char *__cdecl sub_101d23bd(char *);
extern "C" char *__cdecl sub_101d1300(const char *, const char *);
extern char g_102de300[];
static inline void StrCopy(char *dst, const char *src)
{
	while ((*dst++ = *src++))
		;
}
int CUnknown101d5bd0::sub_1013fef0(const char *name, int start)
{
	char needle[128];
	char hay[128];
	StrCopy(needle, name);
	sub_101d23bd(needle);
	for (int i = start + 1; i < m_count; i++) {
		const char *const *pp = &m_pData[i]->m_p;
		const char *s = *pp ? *pp : g_102de300;
		StrCopy(hay, s);
		sub_101d23bd(hay);
		if (sub_101d1300(hay, needle) == hay)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1013ffa0 size=0x29
struct string_t_v { const char *pszValue; };
inline const char *STRING_V(const string_t_v *s) { return s->pszValue ? s->pszValue : ""; }
struct CEntry101d5e00 { char pad[0xc]; string_t_v m_str; };

struct CUnit101d5e00 {
    int m_4_dummy_unused;
    int m_nCount;
    CEntry101d5e00 **m_ppItems;
    const char *sub_1013ffa0(int index);
};

// TARGET: CUnit101d5e00::sub_1013ffa0
const char *CUnit101d5e00::sub_1013ffa0(int index)
{
    if (index < 0 || index >= m_nCount)
        return 0;
    return STRING_V(&m_ppItems[index]->m_str);
}
// END FUNCTION

// FUNCTION: 0x1013ffd0 size=0x29
extern char g_102de300[];

struct CUnit101d5e40 {
    char *sub_1013ffd0(int index);
};

char *CUnit101d5e40::sub_1013ffd0(int index)
{
    if (index < 0 || index >= *(int *)((char *)this + 4)) {
        return 0;
    }
    char **ppItems = *(char ***)((char *)this + 8);
    char **ppField = (char **)(ppItems[index] + 8);
    if (*ppField == 0) {
        return g_102de300;
    }
    return *ppField;
}
// END FUNCTION

// FUNCTION: 0x101400d0 size=0x23
void __fastcall sub_1013f490(void *pObj);

// TARGET: sub_101400d0
void __fastcall sub_101400d0(void *pSelf)
{
    int i = 0;
    if (0 < *(int *)((char *)pSelf + 4)) {
        do {
            sub_1013f490(*(void **)(*(int *)((char *)pSelf + 8) + i * 4));
            i++;
        } while (i < *(int *)((char *)pSelf + 4));
    }
}
// END FUNCTION

// FUNCTION: 0x10140150 size=0x1
void sub_10140150()
{
}
// END FUNCTION

// FUNCTION: 0x101401e0 size=0x29
#include "Vector.h"
struct CUnknown101d61e0_Sub10 {
	int m_n0;
	int m_n4;
	void Init() { m_n0 = 1; m_n4 = 0; }
};
struct CUnknown101d61e0 {
	int m_p0000;
	int m_n0004;
	int m_n0008;
	int m_n000c;
	CUnknown101d61e0_Sub10 m_sub10;
	int m_n0018;
	int m_n001c;
	int m_n0020;
	int m_n0024;
	int m_n0028;
	CUnknown101d61e0 *sub_101401e0(int p);
};

// TARGET: CUnknown101d61e0::sub_101401e0
CUnknown101d61e0 *CUnknown101d61e0::sub_101401e0(int p)
{
	m_sub10.Init();
	m_n0020 = 0;
	m_n0024 = 0;
	m_n0028 = 0;
	m_n000c = 0;
	m_n0004 = 0;
	m_n0008 = 0;
	m_p0000 = p;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10140280 size=0x1
void sub_10140280()
{
}
// END FUNCTION

// FUNCTION: 0x10140290 size=0xec
#include "CUnknown101d62d0.h"

CUnknown101d62d0Record *CUnknown101d62d0::sub_10140290()
{
	if (m_nAllocated == m_nCount) {
		m_nAllocated++;
		if (m_ppRecords) {
			CUnknown101d62d0Record **p = new CUnknown101d62d0Record *[m_nAllocated];
			int i = 0;
			if (m_nCount > 0) {
				do {
					p[i] = m_ppRecords[i];
					i++;
				} while (i < m_nCount);
			}
			for (; i < m_nAllocated; i++)
				p[i] = 0;
			delete m_ppRecords;
			m_ppRecords = p;
		} else {
			m_ppRecords = new CUnknown101d62d0Record *[m_nAllocated];
			for (int i = 0; i < m_nAllocated; i++)
				m_ppRecords[i] = 0;
		}
		m_nCount++;
	} else {
		m_nCount++;
	}
	if (m_ppRecords[m_nCount - 1] == 0) {
		CUnknown101d62d0Record *p = new CUnknown101d62d0Record;
		m_ppRecords[m_nCount - 1] = p ? p->sub_10140140() : 0;
	}
	return m_ppRecords[m_nCount - 1];
}
// END FUNCTION

// FUNCTION: 0x10140380 size=0x50
struct CPtrList101d6400 {
	int m_n0;
	int m_n4;
	int m_nCount;	// 0x8
	int **m_ppData;	// 0xc: array of owned pointers

	void sub_10140380();
};

// TARGET: CPtrList101d6400::sub_10140380
void CPtrList101d6400::sub_10140380()
{
	if (m_ppData) {
		for (int i = 0; i < m_nCount; i++) {
			if (m_ppData[i])
				delete m_ppData[i];
			m_ppData[i] = 0;
		}
		delete m_ppData;
		m_ppData = 0;
	}
	m_nCount = 0;
	m_n4 = 0;
}
// END FUNCTION

// FUNCTION: 0x10140440 size=0x5
char __stdcall sub_10140440(int a0, int a1)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101405a0 size=0x1
void sub_101405a0()
{
}
// END FUNCTION

// FUNCTION: 0x101405b0 size=0xf1
#include "CUnknown101d6750.h"

struct S101d61e0 {
	S101d61e0 *sub_101401e0(int);
	int m_data[11];
};

S101d61e0 *CUnknown101d6750::sub_101405b0()
{
	if (m_allocCount == m_count) {
		m_allocCount++;
		if (m_pItems) {
			S101d61e0 **p = new S101d61e0 *[m_allocCount];
			int i = 0;
			if (m_count > 0) {
				do {
					p[i] = m_pItems[i];
					i++;
				} while (i < m_count);
			}
			for (; i < m_allocCount; i++)
				p[i] = 0;
			delete m_pItems;
			m_pItems = p;
		} else {
			m_pItems = new S101d61e0 *[m_allocCount];
			for (int i = 0; i < m_allocCount; i++)
				m_pItems[i] = 0;
		}
		m_count++;
	} else {
		m_count++;
	}
	if (m_pItems[m_count - 1] == 0) {
		S101d61e0 *p = new S101d61e0;
		m_pItems[m_count - 1] = p ? p->sub_101401e0(m_count - 1) : 0;
	}
	return m_pItems[m_count - 1];
}
// END FUNCTION

// FUNCTION: 0x101406b0 size=0x59
struct CPartListUnit2 {
    void sub_10140210();
};
struct CPartListUnit3 {
    char m_pad0000[4];
    int m_n4;	// 0x4
    int m_nItems;	// 0x8
    CPartListUnit2 **m_ppItems;	// 0xc
    void sub_101406b0();
};

// TARGET: CPartListUnit3::sub_101406b0
void CPartListUnit3::sub_101406b0()
{
    if (m_ppItems) {
        for (int i = 0; i < m_nItems; i++) {
            CPartListUnit2 *p = m_ppItems[i];
            if (p) {
                p->sub_10140210();
                delete p;
            }
            m_ppItems[i] = 0;
        }
        delete m_ppItems;
        m_ppItems = 0;
    }
    m_nItems = 0;
    m_n4 = 0;
}
// END FUNCTION

// FUNCTION: 0x101407f0 size=0x5
char __stdcall sub_101407f0(int a0, int a1)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10140900 size=0x5
namespace lifted {
int sub_10140a00();
}
int sub_10140900()
{
    return lifted::sub_10140a00();
}
// END FUNCTION

// FUNCTION: 0x10140a00 size=0x66
struct Elem1006cd00 { void sub_10140530(); };
struct S1006cd00 {
    int m0;
    int m4;
    Elem1006cd00 **m8;
    void sub_10140a00();
};
// TARGET: S1006cd00::sub_10140a00
void S1006cd00::sub_10140a00()
{
    if (m8) {
        for (int i = 0; i < m4; i++) {
            Elem1006cd00 *e = m8[i];
            if (e) {
                e->sub_10140530();
                delete e;
            }
            m8[i] = 0;
        }
        delete m8;
        m8 = 0;
    }
    m4 = 0;
    m0 = 0;
}
// END FUNCTION

// FUNCTION: 0x10140a70 size=0xc5
#include "CUnknown101d5bd0.h"
struct S101d6d50 { void sub_10140a00(); };
struct Loader { bool sub_10140c10(const char *path); };

struct CFileFinder
{
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21();
    virtual int FindFirst(const char *pattern, int *pHandle);
    virtual int FindNext(int handle);
    virtual void v24();
    virtual void FindClose(int handle);
};

extern CFileFinder *g_104a580c;
extern const char g_102c6c24[];
extern const char g_10286400[];
extern const char g_102c6d50[];
extern const char g_102c6d40[];
extern const char g_102c6d0c[];
extern void (*g_101e3108)(const char *, ...);
extern "C" int sub_101d159d(char *, const char *, ...);

// TARGET: CUnknown101d5bd0::sub_10140a70
void CUnknown101d5bd0::sub_10140a70()
{
    char path[260];
    int handle;

    ((S101d6d50 *)this)->sub_10140a00();
    int count = 0;
    sub_101d159d(path, g_102c6c24, g_10286400, g_102c6d50);
    if (g_104a580c->FindFirst(path, &handle)) {
        do {
            count++;
        } while (g_104a580c->FindNext(handle));
        g_104a580c->FindClose(handle);
        if (count > 0) {
            for (int i = 0; i < count; i++) {
                sub_101d159d(path, g_102c6d40, g_10286400, g_102c6d50, i);
                if (!((Loader *)this)->sub_10140c10(path))
                    g_101e3108(g_102c6d0c, path);
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10140cb0 size=0x9b
#include "CUnknown101d7380.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
struct DFNode {
	virtual void n0();
	virtual void n1();
	virtual void n2();
	virtual DFNode *Next();
};
struct DFBase {
	virtual void b0();
	virtual void Close();
};
struct DFFile : virtual DFBase {
	virtual void f0();
	virtual void f1();
	virtual DFNode *Find(const char *name);
};
extern int g_104a580c;
DFFile *sub_101545c0(const char *name, int arg);
extern void (*g_101e3108)(const char *fmt, ...);

// TARGET: CUnknown101d7380::sub_10140cb0
bool CUnknown101d7380::sub_10140cb0(const char *name, int *pIndex)
{
	DFFile *file = sub_101545c0(name, g_104a580c);
	if (!file) {
		g_101e3108("Unable to open data file for: %s\n", name);
		return false;
	}
	DFNode *node = file->Find("LevelingTemplate");
	while (node) {
		CUnknown101d7380Entry *item = m_pData[(*pIndex)++];
		if (!item) {
			g_101e3108("Unable to parse data file for: %s.  Memory allocation ERROR!\n", name);
			return false;
		}
		node = node->Next();
	}
	file->Close();
	return true;
}
// END FUNCTION

// FUNCTION: 0x10140e00 size=0xa8
extern "C" char *_strlwr(char *);
extern "C" char *strstr(const char *, const char *);
extern char g_102de300[];
struct Sub {
	const char *name;
	const char *Get() { return name ? name : g_102de300; }
};
struct Entry {
	int a, b, c, d, e;
	Sub sub;
};
struct List {
	int pad;
	int m_count;
	Entry **m_items;
	int sub_10140e00(const char *name);
};
static inline void Cpy(char *d, const char *s)
{
	while ((*d++ = *s++))
		;
}
int List::sub_10140e00(const char *name)
{
	char lowName[128];
	char lowEntry[128];
	Cpy(lowName, name);
	_strlwr(lowName);
	for (int i = 0; i < m_count; i++) {
		const char *n = m_items[i]->sub.Get();
		Cpy(lowEntry, n);
		_strlwr(lowEntry);
		if (strstr(lowEntry, lowName) == lowEntry)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10141350 size=0x4
struct CUnknown10141350 { int sub_10141350(); };
int CUnknown10141350::sub_10141350()
{
    return *(int *)((char *)this + 8);
}
// END FUNCTION

// FUNCTION: 0x10141360 size=0x4
struct CUnknown10141360 { int sub_10141360(); };
int CUnknown10141360::sub_10141360()
{
    return *(int *)((char *)this + 0xc);
}
// END FUNCTION

// FUNCTION: 0x101413a0 size=0x59
struct CPartListUnit2 {
    void sub_10141240();
};
struct CPartListUnit3 {
    char m_pad0000[4];
    int m_n4;	// 0x4
    int m_nItems;	// 0x8
    CPartListUnit2 **m_ppItems;	// 0xc
    void sub_101413a0();
};

// TARGET: CPartListUnit3::sub_101413a0
void CPartListUnit3::sub_101413a0()
{
    if (m_ppItems) {
        for (int i = 0; i < m_nItems; i++) {
            CPartListUnit2 *p = m_ppItems[i];
            if (p) {
                p->sub_10141240();
                delete p;
            }
            m_ppItems[i] = 0;
        }
        delete m_ppItems;
        m_ppItems = 0;
    }
    m_nItems = 0;
    m_n4 = 0;
}
// END FUNCTION

// FUNCTION: 0x10141b00 size=0x4
struct CUnknown10141b00 { int sub_10141b00(); };
int CUnknown10141b00::sub_10141b00()
{
    return *(int *)((char *)this + 4);
}
// END FUNCTION

// FUNCTION: 0x10141bb0 size=0x5
int sub_10141bb0(int a0)
{
    return a0;
}
// END FUNCTION

// FUNCTION: 0x10141bc0 size=0x4
struct CUnknown10141bc0 { char * sub_10141bc0(); };
char * CUnknown10141bc0::sub_10141bc0()
{
    return (char *)this + 0x38;
}
// END FUNCTION

// FUNCTION: 0x10141bd0 size=0x4
struct CUnknown10141bd0 { int sub_10141bd0(); };
int CUnknown10141bd0::sub_10141bd0()
{
    return *(int *)((char *)this + 0xc);
}
// END FUNCTION

// FUNCTION: 0x10142000 size=0x50
struct CPtrList101d6400 {
	int m_n0;
	int m_n4;
	int m_nCount;	// 0x8
	int **m_ppData;	// 0xc: array of owned pointers

	void sub_10142000();
};

// TARGET: CPtrList101d6400::sub_10142000
void CPtrList101d6400::sub_10142000()
{
	if (m_ppData) {
		for (int i = 0; i < m_nCount; i++) {
			if (m_ppData[i])
				delete m_ppData[i];
			m_ppData[i] = 0;
		}
		delete m_ppData;
		m_ppData = 0;
	}
	m_nCount = 0;
	m_n4 = 0;
}
// END FUNCTION

// FUNCTION: 0x101427f0 size=0x59
struct CPartListUnit2 {
    void sub_101423a0();
};
struct CPartListUnit3 {
    char m_pad0000[4];
    int m_n4;	// 0x4
    int m_nItems;	// 0x8
    CPartListUnit2 **m_ppItems;	// 0xc
    void sub_101427f0();
};

// TARGET: CPartListUnit3::sub_101427f0
void CPartListUnit3::sub_101427f0()
{
    if (m_ppItems) {
        for (int i = 0; i < m_nItems; i++) {
            CPartListUnit2 *p = m_ppItems[i];
            if (p) {
                p->sub_101423a0();
                delete p;
            }
            m_ppItems[i] = 0;
        }
        delete m_ppItems;
        m_ppItems = 0;
    }
    m_nItems = 0;
    m_n4 = 0;
}
// END FUNCTION

// FUNCTION: 0x101431a0 size=0x59
struct CPartListUnit2 {
    void sub_10142e70();
};
struct CPartListUnit3 {
    char m_pad0000[4];
    int m_n4;	// 0x4
    int m_nItems;	// 0x8
    CPartListUnit2 **m_ppItems;	// 0xc
    void sub_101431a0();
};

// TARGET: CPartListUnit3::sub_101431a0
void CPartListUnit3::sub_101431a0()
{
    if (m_ppItems) {
        for (int i = 0; i < m_nItems; i++) {
            CPartListUnit2 *p = m_ppItems[i];
            if (p) {
                p->sub_10142e70();
                delete p;
            }
            m_ppItems[i] = 0;
        }
        delete m_ppItems;
        m_ppItems = 0;
    }
    m_nItems = 0;
    m_n4 = 0;
}
// END FUNCTION

// FUNCTION: 0x101433b0 size=0x1
void sub_101433b0()
{
}
// END FUNCTION

// FUNCTION: 0x101437d0 size=0x59
struct CPartListUnit2 {
    void sub_10143500();
};
struct CPartListUnit3 {
    char m_pad0000[4];
    int m_n4;	// 0x4
    int m_nItems;	// 0x8
    CPartListUnit2 **m_ppItems;	// 0xc
    void sub_101437d0();
};

// TARGET: CPartListUnit3::sub_101437d0
void CPartListUnit3::sub_101437d0()
{
    if (m_ppItems) {
        for (int i = 0; i < m_nItems; i++) {
            CPartListUnit2 *p = m_ppItems[i];
            if (p) {
                p->sub_10143500();
                delete p;
            }
            m_ppItems[i] = 0;
        }
        delete m_ppItems;
        m_ppItems = 0;
    }
    m_nItems = 0;
    m_n4 = 0;
}
// END FUNCTION

// FUNCTION: 0x10143a10 size=0x1
void sub_10143a10()
{
}
// END FUNCTION

// FUNCTION: 0x10143a90 size=0x50
struct CPtrList101d6400 {
	int m_n0;
	int m_n4;
	int m_nCount;	// 0x8
	int **m_ppData;	// 0xc: array of owned pointers

	void sub_10143a90();
};

// TARGET: CPtrList101d6400::sub_10143a90
void CPtrList101d6400::sub_10143a90()
{
	if (m_ppData) {
		for (int i = 0; i < m_nCount; i++) {
			if (m_ppData[i])
				delete m_ppData[i];
			m_ppData[i] = 0;
		}
		delete m_ppData;
		m_ppData = 0;
	}
	m_nCount = 0;
	m_n4 = 0;
}
// END FUNCTION

// FUNCTION: 0x101444b0 size=0x1
void sub_101444b0()
{
}
// END FUNCTION

// FUNCTION: 0x10144770 size=0x50
struct CPtrList101d6400 {
	int m_n0;
	int m_n4;
	int m_nCount;	// 0x8
	int **m_ppData;	// 0xc: array of owned pointers

	void sub_10144770();
};

// TARGET: CPtrList101d6400::sub_10144770
void CPtrList101d6400::sub_10144770()
{
	if (m_ppData) {
		for (int i = 0; i < m_nCount; i++) {
			if (m_ppData[i])
				delete m_ppData[i];
			m_ppData[i] = 0;
		}
		delete m_ppData;
		m_ppData = 0;
	}
	m_nCount = 0;
	m_n4 = 0;
}
// END FUNCTION

// FUNCTION: 0x10144d30 size=0x1
void sub_10144d30()
{
}
// END FUNCTION

// FUNCTION: 0x10144d60 size=0x25
// TARGET: sub_10144d60
void __fastcall sub_10144d60(int *pThis)
{
    if (pThis[1] != 0) {
        operator delete((void *)(pThis[1] - 4));
        pThis[1] = 0;
    }
    pThis[0] = 0;
}
// END FUNCTION

// FUNCTION: 0x10144d90 size=0x21
struct CUnkDelete101d7c90
{
    void *sub_10144d90(unsigned char flags);
};

// TARGET: sub_10144d90
void *CUnkDelete101d7c90::sub_10144d90(unsigned char flags)
{
    char *p = (char *)this;
    if (flags & 2) {
        p = p - 4;
    }
    if (flags & 1) {
        operator delete(p);
    }
    return p;
}
// END FUNCTION

// FUNCTION: 0x10145090 size=0x61
#include "CUnknown101d7ec0.h"

CUnknown101d7ec0_Entry *CUnknown101d7ec0::sub_10145090(int iKey)
{
	for (int i = 0; i < m_n0; i++) {
		if (m_pEntries[i].m_n0 == iKey)
			return &m_pEntries[i];
	}
	static CUnknown101d7ec0_DefaultEntry s_default;
	return &s_default;
}
// END FUNCTION

// FUNCTION: 0x10145130 size=0x1
void sub_10145130()
{
}
// END FUNCTION

// FUNCTION: 0x10145140 size=0x7c
#include <stdio.h>
#include "CUnknown101d82d0.h"
struct CNameRecord { int m_unk0; const char *m_pszText; int m_kind; };
struct CNameRecords { CNameRecord *sub_10145090(int index); };
struct CNameTable { const char *sub_1013ffa0(int index); };
extern CNameRecords g_105e7910;
extern CNameTable g_105e74fc;
extern char g_105e7890[];
extern char g_102de300[];
const char *CUnknown101d82d0_Elem::sub_10145140()
{
	const char **ppsz;
	switch (g_105e7910.sub_10145090(m_a)->m_kind) {
	case 0:
		if (m_b > -1) {
			if (!(m_c & 1))
				return g_105e74fc.sub_1013ffa0(m_b);
			sprintf(g_105e7890, "!%s", g_105e74fc.sub_1013ffa0(m_b));
			return g_105e7890;
		}
		break;
	case 2:
		ppsz = &g_105e7910.sub_10145090(m_a)->m_pszText;
		if (*ppsz)
			return *ppsz;
		break;
	case 1:
		ppsz = &g_105e7910.sub_10145090(m_a)->m_pszText;
		if (*ppsz)
			return *ppsz;
		break;
	}
	return g_102de300;
}
// END FUNCTION

// FUNCTION: 0x101451d0 size=0x25
// TARGET: sub_101451d0
void __fastcall sub_101451d0(int *pThis)
{
    if (pThis[1] != 0) {
        operator delete((void *)(pThis[1] - 4));
        pThis[1] = 0;
    }
    pThis[0] = 0;
}
// END FUNCTION

// FUNCTION: 0x10145200 size=0x21
struct CUnkDelete101d7c90
{
    void *sub_10145200(unsigned char flags);
};

// TARGET: sub_10145200
void *CUnkDelete101d7c90::sub_10145200(unsigned char flags)
{
    char *p = (char *)this;
    if (flags & 2) {
        p = p - 4;
    }
    if (flags & 1) {
        operator delete(p);
    }
    return p;
}
// END FUNCTION

// FUNCTION: 0x101452d0 size=0x9b
#include "CUnknown101d82d0.h"
#include "CUnknown101d7ec0.h"

extern "C" char *__cdecl _strlwr(char *);
extern "C" char *__cdecl strtok(char *, const char *);

// TARGET: CUnknown101d82d0::sub_101452d0
void CUnknown101d82d0::sub_101452d0(const char *pszList)
{
	char szBuf[256];
	int i = 0;
	do
	{
		*(szBuf + i) = pszList[i];
	} while (pszList[i++]);
	_strlwr(szBuf);
	char *pszToken = strtok(szBuf, " ,()");
	while (pszToken)
	{
		int bNegated = 0;
		if (*pszToken == '!')
		{
			bNegated = 1;
			pszToken++;
		}
		int nSub;
		unsigned int nId; nId = g_105e7910.sub_10144f40(pszToken, &nSub);
		if ((int)nId != -1)
		{
			CUnknown101d82d0_Elem *pElem = sub_10145230();
			if (pElem)
			{
				pElem->m_b = nSub;
				pElem->m_a = nId;
				pElem->m_c = bNegated;
			}
		}
		pszToken = strtok(0, " ,()");
	}
}
// END FUNCTION

// FUNCTION: 0x101453c0 size=0x77
#include <stdio.h>
#include <string.h>

struct CUnk101d84e0Elem {
    char pad[12];
    const char *sub_10145140();
};
struct CUnk101d84e0 {
    int m_nCount;
    CUnk101d84e0Elem *m_pElems;
    char *sub_101453c0();
};
extern char g_105e7808[];

char *CUnk101d84e0::sub_101453c0()
{
    int len = 0;
    for (int i = 0; i < m_nCount; i++) {
        if (i < m_nCount - 1) {
            sprintf(g_105e7808 + len, "%s ", m_pElems[i].sub_10145140());
            len = strlen(g_105e7808);
        } else {
            sprintf(g_105e7808 + len, "%s", m_pElems[i].sub_10145140());
        }
    }
    return g_105e7808;
}
// END FUNCTION

// FUNCTION: 0x101454a0 size=0x1a
namespace lifted {
extern int g_102c77c8;
extern int g_102c77cc;
extern char g_102c780c;
}
int sub_101454a0()
{
    lifted::g_102c77cc = 1;
    lifted::g_102c77c8 = (int)&lifted::g_102c780c;
    return (int)&lifted::g_102c77c8;
}
// END FUNCTION

// FUNCTION: 0x101457a0 size=0x95
#include "CUnknown101d8a70.h"
#include "ConVar.h"

class CvarInterface
{
public:
	virtual void v0();
	virtual void v1();
	virtual ConVar *FindVar(const char *name);
};
extern CvarInterface *g_104a57e0;

void *CUnknown101d8a70::sub_101457a0(void *pValue)
{
	static ConVar *s_pVar = g_104a57e0->FindVar("v_printrolls");
	if (s_pVar)
		sub_10145840(pValue, s_pVar->GetBool());
	else
		sub_10145840(pValue, false);
	return pValue;
}
// END FUNCTION

// FUNCTION: 0x10145ca0 size=0x92
#include "CUnknown101d90c0.h"
extern char g_102de300[];
int *sub_1015fc40(int *pOut, const char *str);
extern "C" int __cdecl sprintf(char *, const char *, ...);

// TARGET: CUnknown101d90c0::sub_10145ca0
bool CUnknown101d90c0::sub_10145ca0(CUnknown101d90c0_Section *pSection)
{
    if (pSection) {
        char buf[0x20];
        int tmp;
        const char *name = m_pszName;
        if (name == 0)
            name = g_102de300;
        CUnknown101d90c0_Section *sec = pSection->vfunc2(name);
        if (sec) {
            m_nName = *sub_1015fc40(&tmp, sec->vfunc13("Name", g_102de300));
            for (int i = 0; i < 100; i++) {
                sprintf(buf, "%d", i);
                m_values[i] = sec->vfunc10(buf, 1);
            }
            return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10145d40 size=0x1c
struct CUnk101d9190 {
	int m_00[3];
	int m_0c[100];
	int sub_10145d40(int index);
};

// TARGET: CUnk101d9190::sub_10145d40
int CUnk101d9190::sub_10145d40(int index)
{
	if (index >= 0 && index < 100) {
		return m_0c[index];
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10145d60 size=0x1c
struct CUnknown101d91c0 { void * sub_10145d60(); };
void * CUnknown101d91c0::sub_10145d60()
{
    *(int *)this = 0;
    *(int *)((char *)this + 0xc) = 0;
    *(int *)((char *)this + 0x10) = -1;
    *(int *)((char *)this + 0x14) = -1;
    *(int *)((char *)this + 0x18) = -1;
    *(int *)((char *)this + 0x1c) = 0;
    *(int *)((char *)this + 0x20) = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10145d80 size=0x5
namespace lifted {
int sub_10145d90();
}
int sub_10145d80()
{
    return lifted::sub_10145d90();
}
// END FUNCTION

// FUNCTION: 0x10146220 size=0x27
#include "CUnknown10739194.h"

// TARGET: CUnknown10739194::sub_10146220
int CUnknown10739194::sub_10146220(int index)
{
	if (index >= 0) {
		if (index < m_nCount)
			return m_pElements[index];
		return m_pElements[m_nCount - 1];
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10146270 size=0x2c
#include "CUnknown101d9840.h"

namespace block_101d9870 {
	struct CUnit101d9840 : CUnknown101d9840 {
		char sub_10146250(int index);
	};
	char CUnit101d9840::sub_10146250(int index)
	{
		return index >= 0 && index < m_count;
	}
}
using namespace block_101d9870;

// TARGET: CUnknown101d9840::sub_10146270
char *CUnknown101d9840::sub_10146270(int index)
{
	if (((CUnit101d9840 *)this)->sub_10146250(index))
		return (char *)m_pItems + index * 0x19c;
	return g_105e7958;
}
// END FUNCTION

// FUNCTION: 0x101465b0 size=0x19
struct CUnknown101da880 { void * sub_101465b0(); };
void * CUnknown101da880::sub_101465b0()
{
    *(int *)this = 0;
    *(int *)((char *)this + 4) = -1;
    *(int *)((char *)this + 8) = -1;
    *(int *)((char *)this + 0xc) = 0x64;
    return this;
}
// END FUNCTION

// FUNCTION: 0x101465d0 size=0x1
void sub_101465d0()
{
}
// END FUNCTION

// FUNCTION: 0x101465e0 size=0x67
#include <string.h>
extern const char *g_102c7bc0[15];
const char *sub_1015fb60(int);
int __stdcall sub_101465e0(int a)
{
    const char *s = sub_1015fb60(a);
    for (int i = 0; i < 15; i++) {
        if (strcmp(g_102c7bc0[i], s) == 0)
            return i;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101466a0 size=0x18
struct CUnknown101da9e0 { void * sub_101466a0(int); };
void * CUnknown101da9e0::sub_101466a0(int a0)
{
    *(int *)this = (*(int *)this) & (~(1 << a0));
    return this;
}
// END FUNCTION

// FUNCTION: 0x101467f0 size=0x1
void sub_101467f0()
{
}
// END FUNCTION

// FUNCTION: 0x10146a90 size=0xf1
#include "CUnknown101db210.h"

struct S6 {
	S6 *sub_101467d0(int);
	int m_data[6];
};

S6 *CUnknown101db210::sub_10146a90()
{
	if (m_allocCount == m_count) {
		m_allocCount++;
		if (m_pItems) {
			S6 **p = new S6 *[m_allocCount];
			int i = 0;
			if (m_count > 0) {
				do {
					p[i] = m_pItems[i];
					i++;
				} while (i < m_count);
			}
			for (; i < m_allocCount; i++)
				p[i] = 0;
			delete m_pItems;
			m_pItems = p;
		} else {
			m_pItems = new S6 *[m_allocCount];
			for (int i = 0; i < m_allocCount; i++)
				m_pItems[i] = 0;
		}
		m_count++;
	} else {
		m_count++;
	}
	if (m_pItems[m_count - 1] == 0) {
		S6 *p = new S6;
		m_pItems[m_count - 1] = p ? p->sub_101467d0(m_count - 1) : 0;
	}
	return m_pItems[m_count - 1];
}
// END FUNCTION

// FUNCTION: 0x10146c20 size=0x6a
#include "CUnknown101db210.h"
extern int (__cdecl *g_101e3190)(char *, int, const char *, ...);
extern void (__cdecl *g_101e3108)(const char *, ...);

void CUnknown101db210::sub_10146c20()
{
	char buf[512];
	g_101e3190(buf, 512, "[Affects_Table -- %d]:\n", m_id);
	g_101e3108("%s", buf);
	Filter()->sub_10146750();
	m_first.sub_10146890();
	for (int i = 0; i < m_count; i++)
		((CUnknown101daf60 *)m_pItems[i])->sub_10146890();
}
// END FUNCTION

// FUNCTION: 0x10146cb0 size=0x55
#include "CStatDefault60List.h"

class IKVNodeView
{
public:
	virtual void v0();
	virtual void v1();
	virtual IKVNodeView *vfunc2(const char *pszName);
	virtual IKVNodeView *vfunc3();
};

// TARGET: CStatDefault60List::sub_10146cb0
char CStatDefault60List::sub_10146cb0(IKVNodeView *pKV, void *pFilter)
{
	sub_10146e00();
	if (pKV) {
		IKVNodeView *pNode = pKV->vfunc2("Affects_Table");
		while (pNode) {
			StatDefault60 *pItem = sub_10146d10();
			if (pItem) {
				pItem->sub_10146990(pNode, pFilter);
				pNode = pNode->vfunc3();
			}
		}
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10146e00 size=0x66
struct Elem1006cd00 { void sub_10146980(); };
struct S1006cd00 {
    int m0;
    int m4;
    Elem1006cd00 **m8;
    void sub_10146e00();
};
// TARGET: S1006cd00::sub_10146e00
void S1006cd00::sub_10146e00()
{
    if (m8) {
        for (int i = 0; i < m4; i++) {
            Elem1006cd00 *e = m8[i];
            if (e) {
                e->sub_10146980();
                delete e;
            }
            m8[i] = 0;
        }
        delete m8;
        m8 = 0;
    }
    m4 = 0;
    m0 = 0;
}
// END FUNCTION

// FUNCTION: 0x10146e70 size=0x57
#include "CUnknown101dbc60.h"
#include "CUnknown101db210.h"

extern int (*g_101e3190)(char *pDest, int maxLen, const char *pFormat, ...);
extern void (*g_101e3108)(const char *pMsg, ...);

void CUnknown101dbc60Tail::sub_10146e70()
{
	char buf[512];
	g_101e3190(buf, 512, "[[Affects_Table_List]]:\n");
	g_101e3108("%s", buf);
	for (int i = 0; i < m_nCount; i++)
		m_ppTables[i]->sub_10146c20();
}
// END FUNCTION

// FUNCTION: 0x10146ed0 size=0x25
namespace block_101db960 {
struct CUnitA { int m_0, m_4, m_8, m_c; void *sub_101465b0(); };
void *CUnitA::sub_101465b0()
{
	m_0 = 0;
	m_4 = -1;
	m_8 = -1;
	m_c = 100;
	return this;
}
struct CUnitB { int m_0, m_4, m_8; CUnitB *sub_10146c90(); };
CUnitB *CUnitB::sub_10146c90()
{
	m_8 = 0;
	m_0 = 0;
	m_4 = 0;
	return this;
}
}
using namespace block_101db960;

struct CUnk101db960 {
	int m_0, m_4, m_8, m_c, m_10;
	CUnitA m_a;
	CUnitB m_b;
	CUnk101db960 *sub_10146ed0();
};

// TARGET: CUnk101db960::sub_10146ed0
CUnk101db960 *CUnk101db960::sub_10146ed0()
{
	m_a.sub_101465b0();
	m_b.sub_10146c90();
	m_0 = 0;
	m_4 = 0;
	m_8 = 0;
	m_c = 0;
	m_10 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10146f10 size=0x63
#include <string.h>
extern const char *g_102c7bfc[2];
const char *sub_1015fb60(int);

// TARGET: sub_10146f10
int sub_10146f10(int a)
{
    const char *s = sub_1015fb60(a);
    for (int i = 0; i < 2; i++) {
        if (strcmp(g_102c7bfc[i], s) == 0)
            return i;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10146f90 size=0x63
#include <string.h>
extern const char *g_102c7c04[4];
const char *sub_1015fb60(int);

// TARGET: sub_10146f90
int sub_10146f90(int a)
{
    const char *s = sub_1015fb60(a);
    for (int i = 0; i < 4; i++) {
        if (strcmp(g_102c7c04[i], s) == 0)
            return i;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10147200 size=0x1
void sub_10147200()
{
}
// END FUNCTION

// FUNCTION: 0x101475e0 size=0x14f
#include "CUnknown101dc5a0.h"

extern void (*g_101e3108)(const char *pFormat, ...);
extern char g_102c7fcc[];
extern char g_102c7f88[];

struct SoundListUnit : CUnknown101dc5a0
{
	inline CUnknown101dbe30 *Alloc()
	{
		if (m_allocationCount == m_count)
		{
			m_allocationCount += m_growBy;
			if (m_pItems)
			{
				CUnknown101dbe30 **pNew = new CUnknown101dbe30 *[m_allocationCount];
				int i;
				for (i = 0; i < m_count; i++)
					pNew[i] = m_pItems[i];
				for (; i < m_allocationCount; i++)
					pNew[i] = 0;
				delete m_pItems;
				m_pItems = pNew;
				m_count++;
			}
			else
			{
				m_pItems = new CUnknown101dbe30 *[m_allocationCount];
				for (int i = 0; i < m_allocationCount; i++)
					m_pItems[i] = 0;
				m_count++;
			}
		}
		else
		{
			m_count++;
		}
		if (!m_pItems[m_count - 1])
		{
			void *p = ::operator new(0xc);
			m_pItems[m_count - 1] = p ? ((CUnknown101dbe30 *)p)->sub_101471e0(m_count - 1) : 0;
		}
		return m_pItems[m_count - 1];
	}
};

// TARGET: CUnknown101dc5a0::sub_101475e0
bool CUnknown101dc5a0::sub_101475e0(CUnknown101dc5a0Keys *pKeys)
{
	if (pKeys) {
		CUnknown101dc5a0Keys *pSub = pKeys->vfunc2(g_102c7fcc);
		while (pSub) {
			CUnknown101dbe30 *pItem = ((SoundListUnit *)this)->Alloc();
			if (!pItem) {
				g_101e3108(g_102c7f88);
				return false;
			}
			pItem->sub_10147220(pSub);
			pSub = pSub->vfunc3();
		}
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10147730 size=0x2f
#include "CUnknown101e0f00.h"
#include "CUnknown101dbe30.h"

namespace block_101dc750 {
struct CUnit : CUnknown101dbe30 {
	bool sub_10147210();
};
#pragma auto_inline(off)
bool CUnit::sub_10147210()
{
	return m_field0000 ? true : false;
}
#pragma auto_inline(on)
}
using namespace block_101dc750;

struct CSrcSubView_101dc750
{
	char m_pad0000[8];
	int m_nCount;
	CUnit **m_ppItems;
};

// TARGET: CUnknown101e0f00SrcSub::sub_10147730
char CUnknown101e0f00SrcSub::sub_10147730()
{
	CSrcSubView_101dc750 *v = (CSrcSubView_101dc750 *)this;
	if (v->m_nCount > 0) {
		for (int i = 0; i < v->m_nCount; i++) {
			if (!v->m_ppItems[i]->sub_10147210())
				return 0;
		}
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10147760 size=0x19
struct CUnk101dc850Sub
{
	void sub_100e1450();
};

struct CUnk101dc850
{
	int m_n0000;	// 0x00
	char m_pad0004;
	char m_b0005;	// 0x05
	char m_pad0006[2];
	CUnk101dc850Sub m_sub0008;	// 0x08

	CUnk101dc850 *sub_10147760();
};

// TARGET: sub_10147760
CUnk101dc850 *CUnk101dc850::sub_10147760()
{
	m_n0000 = 0;
	m_b0005 = 1;
	m_sub0008.sub_100e1450();
	return this;
}
// END FUNCTION

// FUNCTION: 0x10147780 size=0x1
void sub_10147780()
{
}
// END FUNCTION

// FUNCTION: 0x101479d0 size=0x64
struct CItemVec {
    int m_growBy;
    int m_allocationCount;
    int m_count;
    void **m_pItems;
    void sub_101474a0(const CItemVec *pOther);
};
namespace block_101dc1c0 {
    struct CItemVecInit : CItemVec { CItemVecInit *sub_101472e0(); };
    CItemVecInit *CItemVecInit::sub_101472e0()
    {
        m_growBy = 1;
        m_allocationCount = 0;
        m_count = 0;
        m_pItems = 0;
        return this;
    }
}
using namespace block_101dc1c0;
struct CRecX {
    int d[11];
};
struct CRecListUnit {
    int m_pad0;
    int m_count;	// 0x04
    CRecX **m_pItems;	// 0x08
    CItemVec m_names;	// 0x0c
    CRecX *sub_10147a90();
    CRecListUnit *sub_101479d0(const CRecListUnit *pOther);
};

// TARGET: CRecListUnit::sub_101479d0
CRecListUnit *CRecListUnit::sub_101479d0(const CRecListUnit *pOther)
{
    ((CItemVecInit *)&m_names)->sub_101472e0();
    m_names.sub_101474a0(&pOther->m_names);
    for (int i = 0; i < pOther->m_count; i++)
        *sub_10147a90() = *pOther->m_pItems[i];
    return this;
}
// END FUNCTION

// FUNCTION: 0x10147a40 size=0x4e
#include "CUnknown101dcc80.h"
struct CItemVec {
	int m_nGrow;
	int m_nAlloc;
	int m_nCount;
	void **m_pData;
	void sub_101474a0(const CItemVec *pOther);
};
struct CRecListUnit : CUnknown101dcc80 {
	CItemVec m_Items;	// 0x0c
	void sub_10147a40(const CRecListUnit *pOther);
};
void CRecListUnit::sub_10147a40(const CRecListUnit *pOther)
{
	m_Items.sub_101474a0(&pOther->m_Items);
	for (int i = 0; i < pOther->m_nCount; i++)
		*sub_10147a90() = *pOther->m_ppRecords[i];
}
// END FUNCTION

// FUNCTION: 0x10147a90 size=0xe6
#include "CUnknown101dcc80.h"

CUnknown101dcc80Record *CUnknown101dcc80::sub_10147a90()
{
	if (m_nAllocated == m_nCount) {
		m_nAllocated++;
		if (m_ppRecords) {
			CUnknown101dcc80Record **p = new CUnknown101dcc80Record *[m_nAllocated];
			int i = 0;
			if (m_nCount > 0) {
				do {
					p[i] = m_ppRecords[i];
					i++;
				} while (i < m_nCount);
			}
			for (; i < m_nAllocated; i++)
				p[i] = 0;
			delete m_ppRecords;
			m_ppRecords = p;
		} else {
			m_ppRecords = new CUnknown101dcc80Record *[m_nAllocated];
			for (int i = 0; i < m_nAllocated; i++)
				m_ppRecords[i] = 0;
		}
		m_nCount++;
	} else {
		m_nCount++;
	}
	if (m_ppRecords[m_nCount - 1] == 0) {
		CUnknown101dcc80Record *p = new CUnknown101dcc80Record;
		m_ppRecords[m_nCount - 1] = p ? p->sub_10147760() : 0;
	}
	return m_ppRecords[m_nCount - 1];
}
// END FUNCTION

// FUNCTION: 0x10147b80 size=0x5d
#include "CUnknown101dcdb0.h"

void CUnknown101dcdb0::sub_10147b80()
{
	if (m_ppItems) {
		for (int i = 0; i < m_nCount; i++) {
			if (m_ppItems[i])
				delete m_ppItems[i];
			m_ppItems[i] = 0;
		}
		delete m_ppItems;
		m_ppItems = 0;
	}
	m_nCount = 0;
	m_nGrow = 0;
}
// END FUNCTION

// FUNCTION: 0x10147be0 size=0xac
#include "CUnknown101dce30.h"

bool CUnknown101dce30::sub_10147be0(CUnknown101dc5a0Keys *pKeys, const char *pszName)
{
	if (pKeys) {
		CUnknown101dc5a0Keys *pBlock = pKeys->vfunc2(pszName);
		if (pBlock) {
			CUnknown101dc5a0Keys *p;
			for (p = pBlock->vfunc2("Particle_ThirdPerson"); p; p = p->vfunc3()) {
				CUnknown101dcc80Record *pRecord = m_particles.sub_10147a90();
				pRecord->m_nSlot = 0;
				if (!sub_10147c90(p, pRecord))
					return false;
			}
			for (p = pBlock->vfunc2("Particle_FirstPerson"); p; p = p->vfunc3()) {
				CUnknown101dcc80Record *pRecord = m_particles.sub_10147a90();
				pRecord->m_nSlot = 1;
				if (!sub_10147c90(p, pRecord))
					return false;
			}
			m_sounds.sub_101475e0(pBlock);
		}
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10147e30 size=0x2b
#include "CUnknown101dd480.h"

struct CUnknown101dd480Sub
{
    void sub_101472e0();
    void sub_10147990();
};

// TARGET: CUnknown101dd480::sub_10147e30
CUnknown101dd480 *CUnknown101dd480::sub_10147e30()
{
    ((CUnknown101dd480Sub *)((char *)this + 0x10))->sub_101472e0();
    ((CUnknown101dd480Sub *)((char *)this + 0x20))->sub_10147990();
    m_nHead = -1;
    m_n04 = 0;
    m_n08 = 0;
    m_b0c = 0;
    m_b0d = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10148040 size=0x52
#include <stdlib.h>
#include <string.h>
struct SRange {
	int m_nMin;
	int m_nMax;

	void sub_10148040(const char *psz);
};

void SRange::sub_10148040(const char *psz)
{
	if (psz && *psz) {
		m_nMin = atoi(psz);
		if (m_nMin == -1)
			m_nMin = 99999;
		const char *pDash = strchr(psz, '-');
		if (pDash)
			m_nMax = atoi(pDash + 1);
		else
			m_nMax = m_nMin;
	}
}
// END FUNCTION

// FUNCTION: 0x101480a0 size=0x78
extern int (*g_101e3190)(char *, int, const char *, ...);
extern void (*g_101e3108)(const char *, ...);
struct Range {
    int m_Min;
    int m_Max;
    void sub_101480a0(const char *name);
};

void Range::sub_101480a0(const char *name)
{
    char buf[512];
    if (m_Min == m_Max) {
        if (m_Max == 0)
            return;
    }
    if (m_Min != m_Max)
        g_101e3190(buf, 512, "[%s]: %d - %d\n", name, m_Min, m_Max);
    else
        g_101e3190(buf, 512, "[%s]: %d\n", name, m_Min);
    g_101e3108("%s", buf);
}
// END FUNCTION

// FUNCTION: 0x10148140 size=0x1
void sub_10148140()
{
}
// END FUNCTION

// FUNCTION: 0x10148150 size=0x74
#include "CUnknown101ddc30.h"

extern char g_102de300[];
void sub_1015f830(CUnknown101ddc30Kv **ppOut, CUnknown101ddc30Kv *pKV, const char *pszName);
int sub_10146f10(const char *psz);
int sub_10146f90(const char *psz);

bool CUnknown101ddc30::sub_10148150(CUnknown101ddc30Kv *pKV)
{
	if (pKV) {
		CUnknown101ddc30Kv *pSub;
		sub_1015f830(&pSub, pKV, "DisciplineFX");
		if (pSub)
			m_pKv = pSub;
		const char *psz = pKV->vfunc13("Source", g_102de300);
		if (*psz)
			m_nSource = sub_10146f10(psz);
		psz = pKV->vfunc13("Affects", g_102de300);
		if (*psz)
			m_nAffects = sub_10146f90(psz);
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x101482a0 size=0x8a
#include "S101df260.h"

S101ddec0 *S101ddec0::sub_101482a0()
{
	m_o04.sub_10148020();
	m_o0c.sub_10148020();
	m_o14.sub_10148020();
	m_o20.sub_10148020();
	m_o28.sub_10148020();
	m_o50.sub_10148120();
	m_o5c.sub_10147990();
	m_o78.sub_10147990();
	m_o94.sub_101472e0();
	m_b00 = 0;
	m_pszSchedule34 = 0;
	m_n38 = -1;
	m_n3c = -1;
	m_n40 = 0;
	m_b1d = 0;
	m_b1c = 0;
	m_b1e = 0;
	m_n44 = 0;
	m_n48 = 0;
	m_n4c = 0;
	m_na4 = 0;
	m_na8 = 0;
	m_n30 = 0x32;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10148330 size=0x1f
struct CUnk101ddf80Sub94
{
    void sub_10147300();
};
struct CUnk101ddf80Sub78
{
    void sub_101479b0();
};
struct CUnk101ddf80
{
    char pad[0x5c];
    CUnk101ddf80Sub78 m_5c;
    void sub_10148330();
};
void CUnk101ddf80::sub_10148330()
{
    ((CUnk101ddf80Sub94 *)((char *)this + 0x94))->sub_10147300();
    ((CUnk101ddf80Sub78 *)((char *)this + 0x78))->sub_101479b0();
    ((CUnk101ddf80Sub78 *)((char *)this + 0x5c))->sub_101479b0();
}
// END FUNCTION

// FUNCTION: 0x10148790 size=0x66
#include "S101df260.h"

S101df260 *S101df260::sub_10148790(int a)
{
	m_items[0].sub_101482a0();
	m_items[1].sub_101482a0();
	m_items[2].sub_101482a0();
	m_items[3].sub_101482a0();
	m_items[4].sub_101482a0();
	m_obj364.sub_10148020();
	m_n36c = -1;
	m_n00 = a;
	m_b371 = m_b370 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10148800 size=0x38
// TARGET: CUnknown101df2f0::sub_10148800
struct CUnknownDtorMember101df2f0
{
	char m_pad[0xac];
	void sub_10148330();
};

struct CUnknown101df2f0
{
	char m_pad0000[8];
	CUnknownDtorMember101df2f0 m_m8;
	CUnknownDtorMember101df2f0 m_mb4;
	CUnknownDtorMember101df2f0 m_m160;
	CUnknownDtorMember101df2f0 m_m20c;
	CUnknownDtorMember101df2f0 m_m2b8;
	void sub_10148800();
};

void CUnknown101df2f0::sub_10148800()
{
	m_m2b8.sub_10148330();
	m_m20c.sub_10148330();
	m_m160.sub_10148330();
	m_mb4.sub_10148330();
	m_m8.sub_10148330();
}
// END FUNCTION

// FUNCTION: 0x10148cb0 size=0xe9
struct Vec3X { int x, y, z; };
struct ItemVecX {
	char d[0x10];
	void sub_101474a0(const ItemVecX *pOther);
};
struct RecVecX {
	char d[0x1c];
	void sub_10147a40(const RecVecX *pOther);
};
struct SoundRecX {
	char b0;
	int i4, i8, ic, i10, i14, i18;
	char b1c, b1d, b1e;
	int i20, i24, i28, i2c, i30, i34, i38, i3c, i40, i44, i48, i4c;
	Vec3X v50;
	RecVecX va5c;
	RecVecX va78;
	ItemVecX v94;
	int ia4, ia8;

	SoundRecX *sub_10148cb0(const SoundRecX *o);
};

SoundRecX *SoundRecX::sub_10148cb0(const SoundRecX *o)
{
	b0 = o->b0;
	i4 = o->i4;
	i8 = o->i8;
	ic = o->ic;
	i10 = o->i10;
	i14 = o->i14;
	i18 = o->i18;
	b1c = o->b1c;
	b1d = o->b1d;
	b1e = o->b1e;
	i20 = o->i20;
	i24 = o->i24;
	i28 = o->i28;
	i2c = o->i2c;
	i30 = o->i30;
	i34 = o->i34;
	i38 = o->i38;
	i3c = o->i3c;
	i40 = o->i40;
	i44 = o->i44;
	i48 = o->i48;
	i4c = o->i4c;
	v50 = o->v50;
	va5c.sub_10147a40(&o->va5c);
	va78.sub_10147a40(&o->va78);
	v94.sub_101474a0(&o->v94);
	ia4 = o->ia4;
	ia8 = o->ia8;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10149100 size=0xee
#include "CUnknown101e01e0.h"

struct S101df260 {
	S101df260 *sub_10148790(int);
	int m_data[221];
};

S101df260 *CUnknown101e01e0::sub_10149100()
{
	if (m_allocCount == m_count) {
		m_allocCount++;
		if (m_pItems) {
			S101df260 **p = new S101df260 *[m_allocCount];
			int i = 0;
			if (m_count > 0) {
				do {
					p[i] = m_pItems[i];
					i++;
				} while (i < m_count);
			}
			for (; i < m_allocCount; i++)
				p[i] = 0;
			delete m_pItems;
			m_pItems = p;
		} else {
			m_pItems = new S101df260 *[m_allocCount];
			for (int i = 0; i < m_allocCount; i++)
				m_pItems[i] = 0;
		}
		m_count++;
	} else {
		m_count++;
	}
	if (m_pItems[m_count - 1] == 0) {
		S101df260 *p = new S101df260;
		m_pItems[m_count - 1] = p ? p->sub_10148790(m_count - 1) : 0;
	}
	return m_pItems[m_count - 1];
}
// END FUNCTION

// FUNCTION: 0x101491f0 size=0x66
struct Elem1006cd00 { void sub_10148800(); };
struct S1006cd00 {
    int m0;
    int m4;
    Elem1006cd00 **m8;
    void sub_101491f0();
};
// TARGET: S1006cd00::sub_101491f0
void S1006cd00::sub_101491f0()
{
    if (m8) {
        for (int i = 0; i < m4; i++) {
            Elem1006cd00 *e = m8[i];
            if (e) {
                e->sub_10148800();
                delete e;
            }
            m8[i] = 0;
        }
        delete m8;
        m8 = 0;
    }
    m4 = 0;
    m0 = 0;
}
// END FUNCTION

// FUNCTION: 0x10149260 size=0x4d
extern "C" int __cdecl sub_101e28e0(const char *, const char *);
struct CNamePtr {
	const char *m_p;
	const char *Get() { return m_p ? m_p : ""; }
};
struct CNamedEntry9fd0 {
	int m_unk0;
	CNamePtr m_Name;
};
struct CNamedList9fd0 {
	int m_unk0;
	int m_count;
	CNamedEntry9fd0 **m_pData;
	int sub_10149260(const char *name);
};
// TARGET: CNamedList9fd0::sub_10149260
int CNamedList9fd0::sub_10149260(const char *name)
{
	for (int i = 0; i < m_count; i++) {
		if (sub_101e28e0(m_pData[i]->m_Name.Get(), name) == 0)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10149400 size=0x35
// TARGET: CUnknown101e05e0::sub_10149400
struct CUnknown101e05e0_A { void sub_10148fe0(); };
struct CUnknown101e05e0_B { void sub_101479b0(); };
struct CUnknown101e05e0_C { void sub_10147e60(); };
struct CUnknown101e05e0_E { void sub_10146f00(); };

struct CUnknown101e05e0
{
	char m_pad0000[0x38];
	CUnknown101e05e0_E m_m38;
	char m_pad39[0x68 - 0x39];
	CUnknown101e05e0_C m_m68;
	char m_pad69[0xa4 - 0x69];
	CUnknown101e05e0_B m_ma4;
	char m_padA5[0xc0 - 0xa5];
	CUnknown101e05e0_B m_mc0;
	char m_padC1[0xdc - 0xc1];
	CUnknown101e05e0_A m_mdc;

	void sub_10149400();
};

void CUnknown101e05e0::sub_10149400()
{
	m_mdc.sub_10148fe0();
	m_mc0.sub_101479b0();
	m_ma4.sub_101479b0();
	m_m68.sub_10147e60();
	m_m38.sub_10146f00();
}
// END FUNCTION

// FUNCTION: 0x10149440 size=0x1
void sub_10149440()
{
}
// END FUNCTION

// FUNCTION: 0x10149600 size=0x4c
#include "CUnknown101e0f00.h"
#include "S101df260.h"
struct TailList101e08d0 {
	int m_n0;
	int m_nCount;
	S101df260 **m_pp;
	S101df260 *sub_101492b0(int i);
};
struct EntryView101e08d0 {
	char m_pad[0x34];
	char m_b34;
	char m_pad35[0xdc - 0x35];
	TailList101e08d0 m_tail;
	char sub_10149600(int a, int b);
};
// TARGET: EntryView101e08d0::sub_10149600
char EntryView101e08d0::sub_10149600(int a, int b)
{
	char *p;
	for (int i = 0; i < m_tail.m_nCount; i++) {
		p = &m_tail.sub_101492b0(i)->m_items[4].m_b00;
		if (*p) {
			m_b34 = 1;
			return 1;
		}
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10149650 size=0x53
#include "CUnknown101e0940.h"
extern IKVNodeView *g_105e80f8;
extern int g_105e8100;
int CUnknown101e0940::sub_10149650(const char *name)
{
    int idx = m_Table.sub_10149260(name);
    if (idx == -1) {
        if (g_105e80f8) {
            g_105e8100 = 0;
            if (m_Table.sub_10148ff0(g_105e80f8, name, &idx))
                return idx;
        }
        idx = -1;
    }
    return idx;
}
// END FUNCTION

// FUNCTION: 0x101496b0 size=0x21
extern char g_102de300[];

struct CUnkSub101e09c0
{
    char *sub_101492b0(void *p);
};

struct CUnk101e09c0
{
    char *sub_101496b0(void *p);
};

// TARGET: sub_101496b0
char *CUnk101e09c0::sub_101496b0(void *p)
{
    CUnkSub101e09c0 *pSub = (CUnkSub101e09c0 *)((char *)this + 0xdc);
    char *pObj = pSub->sub_101492b0(p);
    char *&pValue = *(char **)(pObj + 4);
    if (pValue == 0) {
        return g_102de300;
    }
    return pValue;
}
// END FUNCTION

// FUNCTION: 0x10149880 size=0x5
namespace lifted {
int sub_10149980();
}
int sub_10149880()
{
    return lifted::sub_10149980();
}
// END FUNCTION

// FUNCTION: 0x10149890 size=0xee
#include "CUnknown101e0c30.h"

struct S101e0520 {
	S101e0520 *sub_10149370(int);
	int m_data[58];
};

S101e0520 *CUnknown101e0c30::sub_10149890()
{
	if (m_allocCount == m_count) {
		m_allocCount++;
		if (m_pItems) {
			S101e0520 **p = new S101e0520 *[m_allocCount];
			int i = 0;
			if (m_count > 0) {
				do {
					p[i] = m_pItems[i];
					i++;
				} while (i < m_count);
			}
			for (; i < m_allocCount; i++)
				p[i] = 0;
			delete m_pItems;
			m_pItems = p;
		} else {
			m_pItems = new S101e0520 *[m_allocCount];
			for (int i = 0; i < m_allocCount; i++)
				m_pItems[i] = 0;
		}
		m_count++;
	} else {
		m_count++;
	}
	if (m_pItems[m_count - 1] == 0) {
		S101e0520 *p = new S101e0520;
		m_pItems[m_count - 1] = p ? p->sub_10149370(m_count - 1) : 0;
	}
	return m_pItems[m_count - 1];
}
// END FUNCTION

// FUNCTION: 0x10149980 size=0x6a
#include "CUnknown101d5bd0.h"

extern "C++" void __cdecl operator delete(void *);

// TARGET: CUnknown101d5bd0::sub_10149980
void CUnknown101d5bd0::sub_10149980()
{
    if (m_pData) {
        for (int i = 0; i < m_count; i++) {
            CUnknown101d5bd0Entry *p = m_pData[i];
            if (p) {
                p->sub_10149400();
                operator delete(p);
            }
            m_pData[i] = 0;
        }
        operator delete(m_pData);
        m_pData = 0;
    }
    m_count = 0;
    m_unk0 = 0;
    m_bFlag18 = 1;
}
// END FUNCTION

// FUNCTION: 0x101499f0 size=0xc5
#include "CUnknown101d5bd0.h"
struct S101d6d50 { void sub_10149980(); };
struct Loader { bool sub_10149b90(const char *path); };

struct CFileFinder
{
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21();
    virtual int FindFirst(const char *pattern, int *pHandle);
    virtual int FindNext(int handle);
    virtual void v24();
    virtual void FindClose(int handle);
};

extern CFileFinder *g_104a580c;
extern const char g_102c6c24[];
extern const char g_10286400[];
extern const char g_102c8800[];
extern const char g_102c6d40[];
extern const char g_102c87cc[];
extern void (*g_101e3108)(const char *, ...);
extern "C" int sub_101d159d(char *, const char *, ...);

// TARGET: CUnknown101d5bd0::sub_101499f0
void CUnknown101d5bd0::sub_101499f0()
{
    char path[260];
    int handle;

    ((S101d6d50 *)this)->sub_10149980();
    int count = 0;
    sub_101d159d(path, g_102c6c24, g_10286400, g_102c8800);
    if (g_104a580c->FindFirst(path, &handle)) {
        do {
            count++;
        } while (g_104a580c->FindNext(handle));
        g_104a580c->FindClose(handle);
        if (count > 0) {
            for (int i = 0; i < count; i++) {
                sub_101d159d(path, g_102c6d40, g_10286400, g_102c8800, i);
                if (!((Loader *)this)->sub_10149b90(path))
                    g_101e3108(g_102c87cc, path);
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10149c30 size=0xa7
#include "CUnknown101e0f00.h"
#include "IFileSystemFind.h"

extern IFileSystemFind *g_104a580c;
extern void (__cdecl *g_101e3108)(const char *fmt, const char *arg);

struct CDataVBaseX
{
	virtual void v0();
	virtual void v1();
};
struct CDataNodeX
{
	virtual void v0();
	virtual void v1();
	virtual CDataNodeX *vfunc2(const char *name);
	virtual CDataNodeX *vfunc3();
};
struct CDataFileX
{
	virtual void v0();
	virtual void v1();
	virtual CDataNodeX *vfunc2(const char *name);
	int *m_pVBTable;
};

CDataFileX *__cdecl sub_101545c0(const char *name, IFileSystemFind *pFileSystem);
void __stdcall sub_10149600(CDataNodeX *pNode, CUnknown101e0f00 *pOwner);

// TARGET: CUnknown101e0f00::sub_10149c30
bool CUnknown101e0f00::sub_10149c30(const char *name, int *pIndex)
{
	CDataFileX *pFile = sub_101545c0(name, g_104a580c);
	if (!pFile) {
		g_101e3108("Unable to open data file for: %s\n", name);
		return false;
	}
	CDataNodeX *pNode = pFile->vfunc2("DisciplineTgt");
	while (pNode) {
		void *pEntry = m_ppEntries[(*pIndex)++];
		if (!pEntry) {
			g_101e3108("Unable to parse data file for: %s.  Memory allocation ERROR!\n", name);
			return false;
		}
		sub_10149600(pNode, this);
		pNode = pNode->vfunc3();
	}
	((CDataVBaseX *)((char *)pFile + 4 + pFile->m_pVBTable[1]))->v1();
	return true;
}
// END FUNCTION

// FUNCTION: 0x10149d40 size=0x3b
#include "CUnknown101e0f00.h"

int CUnknown101e0f00::sub_10149d40(int key, int offset)
{
    int count = *(int *)((char *)this + 4);
    int i = 0;
    if (count > 0) {
        int **pp = *(int ***)((char *)this + 8);
        do {
            if (*(int *)((char *)*pp + 0x10) == key) {
                int idx = i + offset;
                if (idx < count) {
                    return idx;
                }
                break;
            }
            i++;
            pp++;
        } while (i < count);
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x10149d80 size=0x33
struct CFindElemView {
    int m_unk0;
    int m_unk4;
    int m_unk8;
    unsigned int m_id;
};

struct CFindListView {
    int m_unk0;
    int m_count;
    CFindElemView **m_pElems;
    unsigned int sub_1014a130(unsigned int id);
    int sub_10149d80(unsigned int id);
};

// TARGET: CFindListView::sub_10149d80
int CFindListView::sub_10149d80(unsigned int id)
{
    unsigned int key = sub_1014a130(id);
    for (int i = 0; i < m_count; i++)
        if (m_pElems[i]->m_id == key)
            return i;
    return -1;
}
// END FUNCTION

// FUNCTION: 0x10149dc0 size=0x4d
extern "C" int __cdecl sub_101e28e0(const char *, const char *);
struct CNamePtr {
	const char *m_p;
	const char *Get() { return m_p ? m_p : ""; }
};
struct CNamedEntryX {
	int m_unk0;
	int m_unk4;
	CNamePtr m_Name;
};
struct CNamedListX {
	int m_unk0;
	int m_count;
	CNamedEntryX **m_pData;
	int sub_10149dc0(const char *name);
};
// TARGET: CNamedListX::sub_10149dc0
int CNamedListX::sub_10149dc0(const char *name)
{
	for (int i = 0; i < m_count; i++) {
		if (sub_101e28e0(m_pData[i]->m_Name.Get(), name) == 0)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10149e10 size=0xa8
extern "C" char *sub_101d23bd(char *);
extern "C" char *sub_101d1300(const char *, const char *);
extern char g_102de300[];
struct Sub {
	const char *name;
	const char *Get() { return name ? name : g_102de300; }
};
struct Entry {
	int a, b;
	Sub sub;
};
struct List {
	int pad;
	int m_count;
	Entry **m_items;
	int sub_10149e10(const char *name);
};
static inline void Cpy(char *d, const char *s)
{
	while ((*d++ = *s++))
		;
}
int List::sub_10149e10(const char *name)
{
	char lowName[128];
	char lowEntry[128];
	Cpy(lowName, name);
	sub_101d23bd(lowName);
	for (int i = 0; i < m_count; i++) {
		const char *n = m_items[i]->sub.Get();
		Cpy(lowEntry, n);
		sub_101d23bd(lowEntry);
		if (sub_101d1300(lowEntry, lowName) == lowEntry)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10149ec0 size=0xb0
#include "CUnknown101d5bd0.h"
extern "C" char *__cdecl sub_101d23bd(char *);
extern "C" char *__cdecl sub_101d1300(const char *, const char *);
extern char g_102de300[];
static inline void StrCopy(char *dst, const char *src)
{
	while ((*dst++ = *src++))
		;
}
int CUnknown101d5bd0::sub_10149ec0(const char *name, int start)
{
	char needle[128];
	char hay[128];
	StrCopy(needle, name);
	sub_101d23bd(needle);
	for (int i = start + 1; i < m_count; i++) {
		const char *const *pp = &m_pData[i]->m_p;
		const char *s = *pp ? *pp : g_102de300;
		StrCopy(hay, s);
		sub_101d23bd(hay);
		if (sub_101d1300(hay, needle) == hay)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10149f70 size=0x42
#include "CStatusFlagList.h"
unsigned int CStatusFlagList::sub_10149f70(int nKey, int nSkip)
{
	for (int i = 0; i < m_nCount; i++)
	{
		if (m_ppEntries[i]->m_nKey == nKey)
		{
			if (i + nSkip < m_nCount)
				return m_ppEntries[i + nSkip]->m_nFlags;
			return 0;
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1014a020 size=0x27
// TARGET: CStatusFlagList::sub_1014a020
#include "CStatusFlagList.h"

unsigned int CStatusFlagList::sub_1014a020(int nKey)
{
	unsigned int nFlags = 0;
	for (int i = 0; i < m_nCount; i++)
	{
		if (m_ppEntries[i]->m_nKey == nKey)
			nFlags |= m_ppEntries[i]->m_nFlags;
	}
	return nFlags;
}
// END FUNCTION

// FUNCTION: 0x1014a050 size=0x33
// TARGET: sub_1014a050
extern int (__cdecl *g_101e311c)(const char *, ...);
extern const char g_102c8820[];

struct CDiscEntry_101e1720 {
    char pad[0x10];
    int m_value;
};
struct CDiscTable_101e1720 {
    char pad[8];
    CDiscEntry_101e1720 **items;
    int sub_10149d80(int key);
    int sub_1014a050(int key);
};
int CDiscTable_101e1720::sub_1014a050(int key)
{
    int idx = sub_10149d80(key);
    if (idx != -1) {
        return items[idx]->m_value;
    }
    g_101e311c(g_102c8820);
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1014a0e0 size=0x5
int __stdcall sub_1014a0e0(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1014a0f0 size=0x33
// TARGET: sub_1014a0f0
extern int (__cdecl *g_101e311c)(const char *, ...);
extern const char g_102c8820[];

struct CDiscEntry_101e1800 {
    char pad[0x14];
    int m_value;
};
struct CDiscTable_101e1800 {
    char pad[8];
    CDiscEntry_101e1800 **items;
    int sub_10149d80(int key);
    int sub_1014a0f0(int key);
};
int CDiscTable_101e1800::sub_1014a0f0(int key)
{
    int idx = sub_10149d80(key);
    if (idx != -1) {
        return items[idx]->m_value;
    }
    g_101e311c(g_102c8820);
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1014a190 size=0x5
int __stdcall sub_1014a190(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1014a1a0 size=0x5
char __stdcall sub_1014a1a0(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1014a1e0 size=0x5
int __stdcall sub_1014a1e0(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1014a1f0 size=0x5
int __stdcall sub_1014a1f0(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1014a200 size=0x3e
struct CEntry101e19b0
{
	int m_n0000;
	const char *m_pszText;
};

struct CUnknown101e19b0
{
	char m_pad0000[0x8];
	CEntry101e19b0 **m_ppEntries;

	int sub_10149d80(const char *pszName);
	const char *sub_1014a200(const char *pszName);
};

extern char g_102de300[];
extern char g_102c8820[];
typedef void (*FnDevMsg)(const char *pszFormat, ...);
extern FnDevMsg g_101e311c;

// TARGET: CUnknown101e19b0::sub_1014a200
const char *CUnknown101e19b0::sub_1014a200(const char *pszName)
{
	int nIndex = sub_10149d80(pszName);
	if (nIndex != -1)
	{
		const char **ppText = &m_ppEntries[nIndex]->m_pszText;
		if (*ppText)
			return *ppText;
		return g_102de300;
	}
	g_101e311c(g_102c8820);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1014a240 size=0x5
namespace lifted {
int sub_10149dc0();
}
int sub_1014a240()
{
    return lifted::sub_10149dc0();
}
// END FUNCTION

// FUNCTION: 0x1014a250 size=0x5
int __stdcall sub_1014a250(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1014a260 size=0x5
int __stdcall sub_1014a260(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1014a9e0 size=0x5c
#include "CUnknown101e0f00.h"

extern CUnknown101e0f00 g_105e80d0;

// TARGET: CUnknown101e0f00::sub_1014a9e0
void *CUnknown101e0f00::sub_1014a9e0(int a, int b, int c)
{
	int index = g_105e80d0.sub_10149d40(b, c);
	if (index != -1)
	{
		void *pTarget = sub_1014a9c0((void *)a);
		if (pTarget)
		{
			if (sub_1014a270((CUnknown101e0f00Entry *)m_ppEntries[index], (void *)a, (void *)a, pTarget, 1))
				return pTarget;
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1014b580 size=0x5
int __stdcall sub_1014b580(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1014cfd0 size=0x41
struct CGravityVar101e7dd0 { virtual void v0(); virtual bool IsZero(); char pad[0x28 - 4]; float m_flValue; };
extern CGravityVar101e7dd0 *g_104dfce4;
struct CRules101e7dd0 { char pad[0x3e0]; float m_f3e0; float m_f3e4; float sub_1014cfd0(float a); };
float CRules101e7dd0::sub_1014cfd0(float a)
{
    float g;
    if (g_104dfce4->IsZero())
        g = 0.0f;
    else
        g = g_104dfce4->m_flValue;
    return (a * a / (g + g) - m_f3e0) / m_f3e4;
}
// END FUNCTION

// FUNCTION: 0x1014d120 size=0x2e
struct CWorker101e80c0
{
	int sub_1014b3b0(int a);
};

struct CInner101e80c0
{
	char m_pad0000[0x8];
	CWorker101e80c0 *m_pWorker;
};

struct COwner101e80c0
{
	char m_pad0000[0x1c];
	CInner101e80c0 *m_pInner;

	int *sub_1014d120(int *pResult, int a, int unused, int limit);
};

// TARGET: COwner101e80c0::sub_1014d120
int *COwner101e80c0::sub_1014d120(int *pResult, int a, int unused, int limit)
{
	int v = m_pInner->m_pWorker->sub_1014b3b0(a);
	if (v >= limit)
	{
		*pResult = 3;
		return pResult;
	}
	*pResult = 1;
	return pResult;
}
// END FUNCTION

// FUNCTION: 0x1014d160 size=0x2b
struct CUnk101e8210Inner {
    int sub_1014b3b0(int a);
};

struct R101e8210 { int v; R101e8210(int x) { v = x; } };

struct CUnit101e8210 {
    char pad[0x1c];
    struct CMid { char pad[0x10]; CUnk101e8210Inner *p; } *m_pMid;
    R101e8210 sub_1014d160(int a, int b);
};

R101e8210 CUnit101e8210::sub_1014d160(int a, int b)
{
    if (m_pMid->p->sub_1014b3b0(a) >= 2)
        return R101e8210(3);
    return R101e8210(1);
}
// END FUNCTION

// FUNCTION: 0x1014d1a0 size=0x2e
struct CWorker101e8270
{
	int sub_1014b3b0(int a);
};

struct CInner101e8270
{
	char m_pad0000[0x18];
	CWorker101e8270 *m_pWorker;
};

struct COwner101e8270
{
	char m_pad0000[0x1c];
	CInner101e8270 *m_pInner;

	int *sub_1014d1a0(int *pResult, int a, int unused, int limit);
};

// TARGET: COwner101e8270::sub_1014d1a0
int *COwner101e8270::sub_1014d1a0(int *pResult, int a, int unused, int limit)
{
	int v = m_pInner->m_pWorker->sub_1014b3b0(a);
	if (v >= limit)
	{
		*pResult = 3;
		return pResult;
	}
	*pResult = 1;
	return pResult;
}
// END FUNCTION

// FUNCTION: 0x1014d1d0 size=0x2e
struct CWorker101e82b0
{
	int sub_1014b3b0(int a);
};

struct CInner101e82b0
{
	char m_pad0000[0x1c];
	CWorker101e82b0 *m_pWorker;
};

struct COwner101e82b0
{
	char m_pad0000[0x1c];
	CInner101e82b0 *m_pInner;

	int *sub_1014d1d0(int *pResult, int a, int limit);
};

// TARGET: COwner101e82b0::sub_1014d1d0
int *COwner101e82b0::sub_1014d1d0(int *pResult, int a, int limit)
{
	int v = m_pInner->m_pWorker->sub_1014b3b0(a);
	if (v >= limit)
	{
		*pResult = 3;
		return pResult;
	}
	*pResult = 1;
	return pResult;
}
// END FUNCTION

// FUNCTION: 0x1014d200 size=0x2e
struct CWorker101e82f0
{
	int sub_1014b3b0(int a);
};

struct CInner101e82f0
{
	char m_pad0000[0x20];
	CWorker101e82f0 *m_pWorker;
};

struct COwner101e82f0
{
	char m_pad0000[0x1c];
	CInner101e82f0 *m_pInner;

	int *sub_1014d200(int *pResult, int a, int limit);
};

// TARGET: COwner101e82f0::sub_1014d200
int *COwner101e82f0::sub_1014d200(int *pResult, int a, int limit)
{
	int v = m_pInner->m_pWorker->sub_1014b3b0(a);
	if (v >= limit)
	{
		*pResult = 3;
		return pResult;
	}
	*pResult = 1;
	return pResult;
}
// END FUNCTION

// FUNCTION: 0x1014d270 size=0x34
extern int g_102c89f0[];

struct CCharView {
    bool sub_1008eb70();
};

// TARGET: sub_1014d270
int __stdcall sub_1014d270(CCharView *p, int idx, unsigned char flags)
{
    int v = 0xd;
    if (p->sub_1008eb70())
        v = 0x11;
    v += g_102c89f0[idx];
    if (flags & 0x20)
        v++;
    return v;
}
// END FUNCTION

// FUNCTION: 0x1014d860 size=0xc4
#include "CUnknown101e8080.h"
extern int (*g_101e311c)(const char *, ...);
extern const char g_102c9788[];
extern const char g_102c97d4[];
int sub_101e28e0(const char *, const char *);

// TARGET: CUnknown101e8080::sub_1014d860
bool CUnknown101e8080::sub_1014d860(const char *type, int *a, int *b, int *c)
{
    const char *name;
    if (type) {
        int n = m_nFollowers;
        for (int i = 0; i < n; i++) {
            CFollowerInfo *p = (CFollowerInfo *)((char *)m_pFollowers + i * 0x2c);
            if (sub_101e28e0(p->m_name, type) == 0) {
                *a = p->m_a;
                *b = p->m_b;
                *c = p->m_c;
                return true;
            }
        }
        name = type;
    } else {
        name = g_102c97d4;
    }
    g_101e311c(g_102c9788, name, m_pFollowers);
    *a = m_pFollowers->m_a;
    *b = m_pFollowers->m_b;
    *c = m_pFollowers->m_c;
    return false;
}
// END FUNCTION

// FUNCTION: 0x1014dae0 size=0x43
struct CDiscValues_101e9080 {
    char pad[0x3a0];
    int m_a, m_b, m_c, m_d;
    void sub_1014dae0(int *pA, int *pB, int *pC, int *pD);
};
void CDiscValues_101e9080::sub_1014dae0(int *pA, int *pB, int *pC, int *pD)
{
    if (pA) *pA = m_a;
    if (pB) *pB = m_b;
    if (pC) *pC = m_c;
    if (pD) *pD = m_d;
}
// END FUNCTION

// FUNCTION: 0x1014ddf0 size=0x23
char __fastcall sub_1008eb70(void *pOther);

// TARGET: sub_1014ddf0
int __fastcall sub_1014ddf0(void *pSelf, int unused, void *pOther)
{
    if (sub_1008eb70(pOther)) {
        return *(int *)((char *)pSelf + 0x3bc);
    }
    return 100;
}
// END FUNCTION

// FUNCTION: 0x1014de30 size=0x3
void __stdcall sub_1014de30(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1014de80 size=0x1e
struct CUnk101d8230 {
	void sub_101451c0();
};

struct CUnk101e9570 {
	int m_00;
	char m_pad04[0x1c];
	int m_20;
	int m_24;
	CUnk101e9570 *sub_1014de80(int a);
};

// TARGET: CUnk101e9570::sub_1014de80
CUnk101e9570 *CUnk101e9570::sub_1014de80(int a)
{
	((CUnk101d8230 *)((char *)this + 0x1c))->sub_101451c0();
	m_24 = 0;
	m_00 = a;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1014dea0 size=0x75
struct CKVString { int m_pStr; CKVString() {} };

struct CKVNode {
	virtual void v0();
	virtual void v1();
	virtual CKVNode *v2(const char *name);
};

CKVString sub_1015f810(CKVNode *pNode);
CKVString sub_1015f830(CKVNode *pNode, const char *name);

struct CHistoryItem {
	char m_pad0000[8];
	int m_nText;	// 0x08
	int m_nDescription;	// 0x0c
	int m_nShortDescription;	// 0x10
	int m_nShortPenaltyDescription;	// 0x14

	bool sub_1014dea0(CKVNode *pKeys);
	void Load(CKVNode *p)
	{
		m_nText = sub_1015f810(p).m_pStr;
		m_nDescription = sub_1015f830(p, "Description").m_pStr;
		m_nShortDescription = sub_1015f830(p, "ShortDescription").m_pStr;
		m_nShortPenaltyDescription = sub_1015f830(p, "ShortPenaltyDescription").m_pStr;
	}
};

// TARGET: CHistoryItem::sub_1014dea0
bool CHistoryItem::sub_1014dea0(CKVNode *pKeys)
{
	if (!pKeys)
		return true;
	CKVNode *p = pKeys->v2("Text");
	if (p)
		Load(p);
	return true;
}
// END FUNCTION

// FUNCTION: 0x1014df20 size=0x96
#include "CUnknown101e98c0.h"

extern CEffectTable g_105f8b98;
int *sub_1015f7e0(int *pOut, CDataNode *pNode, const char *pszName);
void sub_1014dfc0(void *pGenders, const char *pszList);

// TARGET: CUnknown101e98c0Item::sub_1014df20
bool CUnknown101e98c0Item::sub_1014df20(CDataNode *pNode)
{
	if (pNode == 0)
		return true;
	CDataNode *pGeneral = pNode->v2("General");
	if (pGeneral) {
		int tmp;
		m_nInternalName = *sub_1015f7e0(&tmp, pGeneral, "InternalName");
		m_sub.sub_101452d0(pGeneral->v13("CritterScope", ""));
		sub_1014dfc0(m_genders, pGeneral->v13("Genders_Disallowed", ""));
		m_nEffect = g_105f8b98.sub_10157b80(pGeneral->v13("Effect", ""));
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x1014e080 size=0x5
namespace lifted {
int sub_1014e090();
}
int sub_1014e080()
{
    return lifted::sub_1014e090();
}
// END FUNCTION

// FUNCTION: 0x1014e090 size=0x67
#include "CUnknown101e98c0.h"

// TARGET: CUnknown101e98c0::sub_1014e090
void CUnknown101e98c0::sub_1014e090()
{
	if (m_ppItems)
	{
		for (int i = 0; i < m_count; i++)
		{
			CUnknown101e98c0Item *p = m_ppItems[i];
			if (p)
			{
				p->m_sub.sub_101451d0();
				delete p;
			}
			m_ppItems[i] = 0;
		}
		operator delete(m_ppItems);
		m_ppItems = 0;
	}
	m_count = 0;
	m_field00 = 0;
}
// END FUNCTION

// FUNCTION: 0x1014e1f0 size=0xac
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
struct HNode { virtual void v0(); virtual void v1(); virtual HNode* Find(const char*); virtual HNode* Next(); };
struct HStream { virtual void v0(); virtual void Close(); };
struct HFile { virtual void v0(); virtual void v1(); virtual HNode* Find(const char*); int* vb; };
struct HItem { void sub_1014dea0(HNode*); };
struct HOwner { HItem* sub_1014e100(); char sub_1014e1f0(const char*); };
extern void* g_104a580c;
HFile* sub_101545c0(const char*, void*);
extern void (*g_101e3108)(const char*, ...);
extern char g_102c99a4[];
extern char g_102c9998[];
extern char g_102c9950[];
// TARGET: HOwner::sub_1014e1f0
char HOwner::sub_1014e1f0(const char* name)
{
	HFile* f = sub_101545c0(name, g_104a580c);
	if (!f) {
		g_101e3108(g_102c99a4, name);
		return 0;
	}
	HNode* n = f->Find(g_102c9998);
	while (n) {
		HItem* it = sub_1014e100();
		if (!it) {
			g_101e3108(g_102c9950, name);
			((HStream*)((char*)f + f->vb[1] + 4))->Close();
			return 0;
		}
		it->sub_1014dea0(n);
		n = n->Next();
	}
	((HStream*)((char*)f + f->vb[1] + 4))->Close();
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1014e2a0 size=0xb3
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CHistoryList.h"

struct CKVBase
{
	virtual void a0();
	virtual void Release();
};
struct CKVNode
{
	virtual void a0(); virtual void a1();
	virtual CKVNode *Find(const char *name);
	virtual CKVNode *Next();
};
struct CKVRoot : virtual CKVBase
{
	virtual void r0(); virtual void r1();
	virtual CKVNode *Find(const char *name);
};
struct CHistEntry
{
	void sub_1014df20(CKVNode *pNode);
};

extern void *g_104a580c;
extern CKVRoot *sub_101545c0(const char *, void *);
extern void (*g_101e3108)(const char *, ...);

bool CHistoryList::sub_1014e2a0(const char *pszFile)
{
	CKVRoot *pRoot = sub_101545c0(pszFile, g_104a580c);
	if (!pRoot) {
		g_101e3108("Unable to open history data file for: %s\n", pszFile);
		return false;
	}
	CKVNode *pNode = pRoot->Find("HistoryData");
	if (pNode) {
		int i = 0;
		do {
			CHistEntry *pEntry = (*(CHistEntry ***)((char *)this + 8))[i++];
			if (!pEntry) {
				g_101e3108("Unable to parse history data file for: %s.  Memory allocation ERROR!\n", pszFile);
				pRoot->Release();
				return false;
			}
			pEntry->sub_1014df20(pNode);
			pNode = pNode->Next();
		} while (pNode);
	}
	pRoot->Release();
	return true;
}
// END FUNCTION

// FUNCTION: 0x1014e590 size=0x18
struct CUnknown101e9f10
{
    char pad[4];
    int m_nCount;

    char sub_1014e590(int index);
};

char CUnknown101e9f10::sub_1014e590(int index)
{
    if (index > -1 && index < m_nCount)
    {
        return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1014e630 size=0x4d
extern "C" int __cdecl sub_101e28e0(const char *, const char *);
struct CNamePtr {
	const char *m_p;
	const char *Get() { return m_p ? m_p : ""; }
};
struct CNamedEntry9fd0 {
	int m_unk0;
	CNamePtr m_Name;
};
struct CNamedList9fd0 {
	int m_unk0;
	int m_count;
	CNamedEntry9fd0 **m_pData;
	int sub_1014e630(const char *name);
};
// TARGET: CNamedList9fd0::sub_1014e630
int CNamedList9fd0::sub_1014e630(const char *name)
{
	for (int i = 0; i < m_count; i++) {
		if (sub_101e28e0(m_pData[i]->m_Name.Get(), name) == 0)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1014e680 size=0x4d
extern "C" int __cdecl sub_101e28e0(const char *, const char *);
struct CNamePtr {
	const char *m_p;
	const char *Get() { return m_p ? m_p : ""; }
};
struct CNamedEntry9fd0 {
	int m_unk0;
	CNamePtr m_Name;
};
struct CNamedList9fd0 {
	int m_unk0;
	int m_count;
	CNamedEntry9fd0 **m_pData;
	int sub_1014e680(const char *name);
};
// TARGET: CNamedList9fd0::sub_1014e680
int CNamedList9fd0::sub_1014e680(const char *name)
{
	for (int i = 0; i < m_count; i++) {
		if (sub_101e28e0(m_pData[i]->m_Name.Get(), name) == 0)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1014ee70 size=0x1
void sub_1014ee70()
{
}
// END FUNCTION

// FUNCTION: 0x1014ee80 size=0x5c
#include "CEntryY.h"

struct IObj102038e0;
struct DataNodeY
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual int GetInt(const char *pszName, int nDefault);
};
int sub_1015f7e0(int, IObj102038e0 *, int);
int *sub_1015f810(int *pOut, DataNodeY *pNode);

bool CEntryY::sub_1014ee80(void *pData)
{
	DataNodeY *pNode = (DataNodeY *)pData;
	int tmp;
	if (pNode) {
		m_pad = *(int *)sub_1015f7e0((int)&tmp, (IObj102038e0 *)pNode, (int)"InternalName");
		m_name = (const char *)*sub_1015f810(&tmp, pNode);
		if (pNode->GetInt("IsDisplayed", 0))
			m_unk0c |= 1;
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1014eee0 size=0xa3
#include "CUnknown101eac50.h"
extern "C" int sprintf(char *, const char *, ...);
extern "C" char *strcat(char *, const char *);
extern char g_102de300[];
void sub_1015fbb0(const char *);

void CUnknown101eac50::sub_1014eee0()
{
    char buf[128];
    sprintf(buf, "(%d): %s\n", m_index, m_name ? m_name : g_102de300);
    sub_1015fbb0(buf);
    buf[0] = 0;
    if (m_flags & 1) {
        strcat(buf, "\tIsDisplayed");
        if (buf[0]) {
            strcat(buf, "\n");
            sub_1015fbb0(buf);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1014f1f0 size=0x1
void sub_1014f1f0()
{
}
// END FUNCTION

// FUNCTION: 0x1014f300 size=0x2a
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
extern int g_105e8588;
extern int **g_105e858c;

struct CKey101eb190 {
    char pad[0x10];
    int m_key;
    int Find() const
    {
        for (int i = 0; i < g_105e8588; i++) {
            if (*g_105e858c[i] == m_key)
                return i;
        }
        return -1;
    }
    int sub_1014f300();
};

// TARGET: CKey101eb190::sub_1014f300
int CKey101eb190::sub_1014f300()
{
    return Find() - 1;
}
// END FUNCTION

// FUNCTION: 0x1014f820 size=0x166
#include <string.h>
#include <stdio.h>
#include "CUnknown101eb820.h"

void sub_1015fbb0(const char *);

// TARGET: CUnknown101eb820::sub_1014f820
void CUnknown101eb820::sub_1014f820()
{
    char buf[128];
    sprintf(buf, "(%d): %s\n", m_nIndex, m_pszName ? m_pszName : "");
    sub_1015fbb0(buf);
    sprintf(buf, "\t\t");
    int len = 2;
    if (m_Dmg.m_nValue != -1) {
        sprintf(buf + 2, "Dmg%s", m_Dmg.sub_10159260());
        len = strlen(buf);
    }
    if (m_nAmmoLost == -1) {
        strcpy(buf + len, "\tAmmoLost: Clip");
        len = strlen(buf);
    } else if (m_nAmmoLost > 0) {
        sprintf(buf + len, "\tAmmoLost: %d", m_nAmmoLost);
        len = strlen(buf);
    }
    unsigned int f = m_nFlags;
    if (f & 1) {
        strcpy(buf + len, "\tForceReload");
        len = strlen(buf);
    }
    if (f & 2) {
        strcpy(buf + len, "\tItemBreaks");
        len = strlen(buf);
    }
    if (f & 4) {
        strcpy(buf + len, "\tFallToGround");
        len = strlen(buf);
    }
    strcpy(buf + len, "\n");
    sub_1015fbb0(buf);
}
// END FUNCTION

// FUNCTION: 0x1014fc00 size=0x1
void sub_1014fc00()
{
}
// END FUNCTION

// FUNCTION: 0x101501b0 size=0x1c
struct CUnk101ec450 {
	void sub_101501b0(int a, int b);
};
extern void (__cdecl *g_105e863c)(void *, int, int);

// TARGET: CUnk101ec450::sub_101501b0
void CUnk101ec450::sub_101501b0(int a, int b)
{
	if (g_105e863c) {
		g_105e863c(this, a, b);
	}
}
// END FUNCTION

// FUNCTION: 0x101501d0 size=0x1f
extern char *(__cdecl *g_105e8640)(int, int);
extern char g_102de300[];

struct CUnk101ec480
{
    char *sub_101501d0(int b);
};
char *CUnk101ec480::sub_101501d0(int b)
{
    if (g_105e8640)
    {
        return g_105e8640((int)this, b);
    }
    return g_102de300;
}
// END FUNCTION

// FUNCTION: 0x101501f0 size=0x24
typedef const char *(__cdecl *Fn1073a398)(void *pThis, int a, int b);

extern Fn1073a398 g_105e8644;
extern const char g_102de300;

// TARGET: sub_101501f0
const char *__fastcall sub_101501f0(void *pThis, int dummy, int a, int b)
{
	if (g_105e8644)
		return g_105e8644(pThis, a, b);
	return &g_102de300;
}
// END FUNCTION

// FUNCTION: 0x101503a0 size=0x9c
#include "CUnknown101ec6f0.h"

extern "C" int sprintf(char *, const char *, ...);
void sub_1015fbb0(char *text);
extern char g_102de300[];

void CUnknown101ec6f0::sub_101503a0()
{
	char buf[128];
	sprintf(buf, "(%d): %s\n", m_index, m_name ? m_name : g_102de300);
	sub_1015fbb0(buf);
	sprintf(buf, "\t\tMoney: %d\n", m_money);
	sub_1015fbb0(buf);
	for (int i = 0; i < m_itemCount; i++)
	{
		const char **p = &m_items[i];
		sprintf(buf, "\t\t(%d): %s\n", i, *p ? *p : g_102de300);
		sub_1015fbb0(buf);
	}
}
// END FUNCTION

// FUNCTION: 0x10150720 size=0x1
void sub_10150720()
{
}
// END FUNCTION

// FUNCTION: 0x10150820 size=0xcb
#include "CUnknown101eccd0.h"
extern char g_102de300[];
extern "C" int __cdecl sprintf(char *, const char *, ...);
void sub_1015fbb0(const char *text);
int sub_101a5bf0();
const char *sub_101a5c00(unsigned int mask);

void CUnknown101eccd0::sub_10150820()
{
	char text[128];
	sprintf(text, "(%d): %s\n", m_index, m_name ? m_name : g_102de300);
	sub_1015fbb0(text);
	for (int i = 0; i < sub_101a5bf0(); i++) {
		unsigned int bit = 1 << i;
		if (m_excludedMask & bit) {
			sprintf(text, "\t\t   (Excluded): %s\n", sub_101a5c00(bit));
			sub_1015fbb0(text);
		}
	}
	for (int j = 0; j < sub_101a5bf0(); j++) {
		unsigned int bit = 1 << j;
		if (m_requiredMask & bit) {
			sprintf(text, "\t\t   (Required): %s\n", sub_101a5c00(bit));
			sub_1015fbb0(text);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10150b60 size=0x21
extern bool (*g_105e865c)(void *, int, int);

struct CUnk101ed0f0
{
    bool sub_10150b60(int a, int b);
};

// TARGET: sub_10150b60
bool CUnk101ed0f0::sub_10150b60(int a, int b)
{
    if (g_105e865c != 0) {
        return g_105e865c(this, a, b);
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10150bc0 size=0x7b
#include "CUnknown101ed170.h"

void CUnknown101ed170::sub_10150bc0()
{
    if (m_p10 != 0) {
        delete m_p10;
        m_p10 = 0;
    }
    if (m_p14 != 0) {
        delete m_p14;
        m_p14 = 0;
    }
    if (m_p18 != 0) {
        delete m_p18;
        m_p18 = 0;
    }
    if (m_p20 != 0) {
        delete m_p20;
        m_p20 = 0;
    }
    if (m_p24 != 0) {
        delete m_p24;
        m_p24 = 0;
    }
    if (m_p28 != 0) {
        delete m_p28;
        m_p28 = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x10151280 size=0x1
void sub_10151280()
{
}
// END FUNCTION

// FUNCTION: 0x10151290 size=0x42
#include "CUnknown101ed9e0.h"
struct IObj102038e0;
int sub_1015f7e0(int, IObj102038e0 *, int);
int *sub_1015f810(int *, IObj102038e0 *);
bool CUnknown101ed9e0::sub_10151290(void *pNode)
{
	IObj102038e0 *p = (IObj102038e0 *)pNode;
	if (p)
	{
		int tmp;
		m_unk4 = *(int *)sub_1015f7e0((int)&tmp, p, (int)"InternalName");
		m_unk8 = *sub_1015f810(&tmp, p);
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10151620 size=0x1
void sub_10151620()
{
}
// END FUNCTION

// FUNCTION: 0x10151840 size=0x50
struct CPtrList101d6400 {
	int m_n0;
	int m_n4;
	int m_nCount;	// 0x8
	int **m_ppData;	// 0xc: array of owned pointers

	void sub_10151840();
};

// TARGET: CPtrList101d6400::sub_10151840
void CPtrList101d6400::sub_10151840()
{
	if (m_ppData) {
		for (int i = 0; i < m_nCount; i++) {
			if (m_ppData[i])
				delete m_ppData[i];
			m_ppData[i] = 0;
		}
		delete m_ppData;
		m_ppData = 0;
	}
	m_nCount = 0;
	m_n4 = 0;
}
// END FUNCTION

// FUNCTION: 0x10151890 size=0x50
struct CPtrList101d6400 {
	int m_n0;
	int m_n4;
	int m_nCount;	// 0x8
	int **m_ppData;	// 0xc: array of owned pointers

	void sub_10151890();
};

// TARGET: CPtrList101d6400::sub_10151890
void CPtrList101d6400::sub_10151890()
{
	if (m_ppData) {
		for (int i = 0; i < m_nCount; i++) {
			if (m_ppData[i])
				delete m_ppData[i];
			m_ppData[i] = 0;
		}
		delete m_ppData;
		m_ppData = 0;
	}
	m_nCount = 0;
	m_n4 = 0;
}
// END FUNCTION

// FUNCTION: 0x101520c0 size=0x5
namespace lifted {
int sub_100a2930();
}
int sub_101520c0()
{
    return lifted::sub_100a2930();
}
// END FUNCTION

// FUNCTION: 0x101522b0 size=0x5
namespace lifted {
int sub_10095f30();
}
int sub_101522b0()
{
    return lifted::sub_10095f30();
}
// END FUNCTION

// FUNCTION: 0x10152520 size=0x1
void sub_10152520()
{
}
// END FUNCTION

// FUNCTION: 0x10152530 size=0x5a
extern char g_102de300[];
int *sub_1015fc40(void *pTemp, const char *psz);
struct CNamed101f02b0 {
    virtual const char *vfunc0();
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual const char *vfunc13(int a, const char *b);
};
struct CSource101f02b0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual CNamed101f02b0 *vfunc4();
};
struct CHolder101f02b0 {
    int m_n0; int m_n4; int m_n8;
    bool sub_10152530(CSource101f02b0 *pSource);
};
bool CHolder101f02b0::sub_10152530(CSource101f02b0 *pSource)
{
    if (pSource) {
        CNamed101f02b0 *p = pSource->vfunc4();
        int tmp;
        m_n4 = *sub_1015fc40(&tmp, p->vfunc0());
        m_n8 = *sub_1015fc40(&tmp, p->vfunc13(0, g_102de300));
        return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10152590 size=0xca
#include "CUnknown101f0330.h"

extern "C" char *__cdecl strcat(char *, const char *);
extern "C" char *__cdecl strcpy(char *, const char *);
extern "C" char *__cdecl strncat(char *, const char *, unsigned int);
extern "C" int __cdecl sprintf(char *, const char *, ...);
#pragma intrinsic(strcat, strcpy)
extern char *(__cdecl *g_101e3188)(char *, const char *, int);	// Q_strncpy
void sub_1015fbb0(const char *msg);

void CUnknown101f0330::sub_10152590()
{
	char buf[256];
	g_101e3188(buf, m_pszText ? m_pszText : "", 254);
	strcat(buf, "\n");
	sub_1015fbb0(buf);
	sprintf(buf, "\t-%s\n\n", m_pszName ? m_pszName : "");
	strcpy(buf, "\t-");
	strncat(buf, m_pszName ? m_pszName : "", 250);
	strcat(buf, "\n\n");
	sub_1015fbb0(buf);
}
// END FUNCTION

// FUNCTION: 0x10152660 size=0x3e
extern char g_105e88d0[];
extern const char g_102ca308[];
extern char g_102de300[];
int sub_101d159d(char *, const char *, ...);

struct CFoo {
    char *sub_10152660(int i);
};

char *CFoo::sub_10152660(int i)
{
    int *pItem;
    char *pA;
    char *pB;

    pItem = ((int **)*(int *)((char *)this + 0x18))[i];
    pA = (char *)pItem[2];
    if (pA == 0) {
        pA = g_102de300;
    }
    pB = (char *)pItem[1];
    if (pB == 0) {
        pB = g_102de300;
    }
    sub_101d159d(g_105e88d0, g_102ca308, pB, pA);
    return g_105e88d0;
}
// END FUNCTION

// FUNCTION: 0x101528c0 size=0xac
extern char g_102de300[];
int sub_101d159d(char *, const char *, ...);
int sub_101e28e0(const char *, const char *);
void sub_1015fbb0(char *);
struct Str { const char *p; const char *Get() const { return p ? p : g_102de300; } };
struct Item { int a; Str s; void sub_10152590(); };
struct Holder {
    int a, b, c;
    const char *name;
    int d;
    int count;
    Item **items;
};
void __fastcall sub_101528c0(Holder *self, int, const char *filter)
{
    char buf[128];
    sub_101d159d(buf, "\n   %s:\n\n", self->name ? self->name : g_102de300);
    sub_1015fbb0(buf);
    if (filter == 0) {
        for (int i = 0; i < self->count; i++)
            self->items[i]->sub_10152590();
    } else {
        for (int i = 0; i < self->count; i++) {
            if (sub_101e28e0(self->items[i]->s.Get(), filter) == 0)
                self->items[i]->sub_10152590();
        }
    }
}
// END FUNCTION

// FUNCTION: 0x101529b0 size=0x4f
struct CUnknown101f08a0 {
    int m_0, m_4, m_8, m_c, m_10, m_14, m_18, m_1c, m_20, m_24, m_28, m_2c, m_30;
    CUnknown101f08a0 *sub_101529b0(int a, int b, int c);
};

CUnknown101f08a0 *CUnknown101f08a0::sub_101529b0(int a, int b, int c)
{
    m_4 = a;
    m_8 = b;
    m_0 = c;
    m_c = 0;
    m_10 = 1;
    m_14 = -1;
    m_18 = 1;
    m_1c = -1;
    m_20 = 32000;
    m_24 = -1;
    m_28 = -32000;
    m_2c = -1;
    m_30 = 100;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10152a00 size=0x40
struct CUnknownStat101f0910 {
    int m0;
    int m4;
    int m8;
    int m0c;
    int m10;
    int m14;
    int m18;
    int m1c;
    int m20;
    int m24;
    int m28;
    int m2c;
    int m30;
};

// TARGET: sub_10152a00
int __fastcall sub_10152a00(CUnknownStat101f0910 *p)
{
    int iVar1 = ((p->m0c + p->m0) * p->m10) / p->m18;
    if (p->m30 != 100) {
        iVar1 = (p->m30 * iVar1) / 100;
    }
    int iVar2 = p->m20;
    if (iVar1 <= p->m20 && (iVar2 = p->m28, iVar1 >= p->m28)) {
        iVar2 = iVar1;
    }
    return iVar2;
}
// END FUNCTION

// FUNCTION: 0x10152b00 size=0x51
#include "CUnknown101f0960.h"
extern char g_102de300[];
struct KVView {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12();
	virtual const char *GetString(const char *name, const char *def);
};
void CUnknown101f0960::sub_10152b00(void *pKeyValues)
{
	KVView *kv = (KVView *)pKeyValues;
	m_sub08.sub_101452d0(kv->GetString("Targets", g_102de300));
	kv->GetString("WhoModifies", g_102de300);
	sub_10152a60(kv->GetString("Modifier", g_102de300));
}
// END FUNCTION

// FUNCTION: 0x10152b60 size=0x48
#include <stdio.h>

struct CUnk101d84e0
{
	char *sub_101453c0();
};
struct CUnknown101f0ae0
{
	int m_nType;
	int m_nValue;
	CUnk101d84e0 m_Sub;
	void sub_10152b60();
};
extern const char *g_105e8a74[];
void sub_1015fbb0(const char *psz);

inline const char *STRINGR(const char *const &s) { return s ? s : ""; }

// TARGET: CUnknown101f0ae0::sub_10152b60
void CUnknown101f0ae0::sub_10152b60()
{
	char szBuf[128];
	sprintf(szBuf, "\t\t\t( (%s) %s  %d )", m_Sub.sub_101453c0(), STRINGR(g_105e8a74[m_nType]), m_nValue);
	sub_1015fbb0(szBuf);
}
// END FUNCTION

// FUNCTION: 0x10152bb0 size=0x1a
struct CUnknown101f0b50 { void * sub_10152bb0(int); };
void * CUnknown101f0b50::sub_10152bb0(int a0)
{
    *(int *)this = a0;
    *(int *)((char *)this + 0xc) = 0;
    *(int *)((char *)this + 0x10) = 0;
    *(int *)((char *)this + 8) = -1;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10152bd0 size=0x2a
#include "CUnknown101f0b80.h"

int *sub_1015f7e0(int *pValue, int a, const char *pszName);
extern const char g_102863d0[];

// TARGET: CUnknown101f0b80::sub_10152bd0
void CUnknown101f0b80::sub_10152bd0(int a, int b)
{
    m_n08 = b;
    m_n04 = *sub_1015f7e0(&b, a, g_102863d0);
}
// END FUNCTION

// FUNCTION: 0x10152cc0 size=0x66
void __fastcall sub_101451d0(int *pThis);
void operator delete(void *);

struct CMem101d8250
{
	int m_n0;
	int m_p4;
	~CMem101d8250() { sub_101451d0((int *)this); }
};

// A 16-byte class with a virtual destructor; 0x101f0cb0 is its vector deleting destructor (??_E), written out by hand
struct CUnknown101f0cb0
{
	void *m_vt;
	int m_n4;
	CMem101d8250 m_mem8;
	void *sub_10152cc0(unsigned int flags);
};

void *CUnknown101f0cb0::sub_10152cc0(unsigned int flags)
{
	if (flags & 2)
	{
		int *pBlock = (int *)this - 1;
		int n = *pBlock;
		CUnknown101f0cb0 *p = this + n;
		while (--n >= 0)
		{
			p--;
			p->m_mem8.~CMem101d8250();
		}
		if (flags & 1)
			operator delete(pBlock);
		return pBlock;
	}
	m_mem8.~CMem101d8250();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10152e20 size=0x5
namespace lifted {
int sub_10152f20();
}
int sub_10152e20()
{
    return lifted::sub_10152f20();
}
// END FUNCTION

// FUNCTION: 0x10152e30 size=0xeb
#include "CUnknown101f0ea0.h"

struct S101f0b50 {
	S101f0b50 *sub_10152bb0(int);
	int m_data[5];
};

S101f0b50 *CUnknown101f0ea0::sub_10152e30()
{
	if (m_allocCount == m_count) {
		m_allocCount++;
		if (m_pItems) {
			S101f0b50 **p = new S101f0b50 *[m_allocCount];
			int i = 0;
			if (m_count > 0) {
				do {
					p[i] = m_pItems[i];
					i++;
				} while (i < m_count);
			}
			for (; i < m_allocCount; i++)
				p[i] = 0;
			delete m_pItems;
			m_pItems = p;
		} else {
			m_pItems = new S101f0b50 *[m_allocCount];
			for (int i = 0; i < m_allocCount; i++)
				m_pItems[i] = 0;
		}
		m_count++;
	} else {
		m_count++;
	}
	if (m_pItems[m_count - 1] == 0) {
		S101f0b50 *p = new S101f0b50;
		m_pItems[m_count - 1] = p ? p->sub_10152bb0(m_count - 1) : 0;
	}
	return m_pItems[m_count - 1];
}
// END FUNCTION

// FUNCTION: 0x10152f20 size=0x60
#include "CReactionData.h"

void CReactionData::sub_10152f20()
{
	if (m_ppEntries) {
		for (int i = 0; i < m_nEntries; i++) {
			delete m_ppEntries[i];
			m_ppEntries[i] = 0;
		}
		delete m_ppEntries;
		m_ppEntries = 0;
	}
	m_nEntries = 0;
	m_n00 = 0;
	if (m_p18) {
		delete m_p18;
		m_p18 = 0;
	}
	m_n14 = 0;
}
// END FUNCTION

// FUNCTION: 0x10152f80 size=0x6b
#include "CUnknown101f1050.h"

extern void (*g_101e3108)(const char *, ...);

int *CUnknown101f1050::sub_10152f80()
{
    int *p = (int *)operator new(m_nCount * 4 + 4);
    if (p) {
        int i = 0;
        if (m_nCount > 0) {
            do {
                i++;
                p[i - 1] = m_pData[i - 1];
            } while (i < m_nCount);
        }
        delete m_pData;
        int n = m_nCount + 1;
        m_pData = p;
        m_nCount = n;
        int *q = &m_pData[m_nCount - 1];
        return q;
    }
    g_101e3108("Unable to allocate memory for strings in ReactionInfoList!.\n");
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10152ff0 size=0xd0
#include "CUnknown101f10e0.h"

struct CReactionKV
{
	virtual void v0(); virtual void v1();
	virtual CReactionKV *FindKey(const char *name);	// slot 2
	virtual CReactionKV *GetNextKey();	// slot 3
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12();
	virtual const char *GetString(const char *name, const char *def);	// slot 13
};

struct CReactionItem { void sub_10152bd0(CReactionKV *pGroup, int id); };
struct CReactionNames { int sub_10153720(const char *name); };

extern CReactionNames g_105e8a58;
extern void (__cdecl *g_101e3108)(const char *fmt, ...);
extern char g_102de300[];
int *sub_1015f7e0(int *pOut, CReactionKV *pData, const char *name);

bool CUnknown101f10e0::sub_10152ff0(void *pData)
{
	CReactionKV *pKV = (CReactionKV *)pData;
	if (pKV) {
		const char *pszName = pKV->GetString("InternalName", g_102de300);
		int id = g_105e8a58.sub_10153720(pszName);
		if (id == -1) {
			int *pSlot = sub_10152f80();
			if (pSlot) {
				int tmp;
				*pSlot = *sub_1015f7e0(&tmp, pKV, "InternalName");
			}
			id = g_105e8a58.sub_10153720(pszName);
		}
		CReactionKV *pGroup = pKV->FindKey("ReactionGroup");
		while (pGroup) {
			CReactionItem *pItem = (CReactionItem *)sub_10152e30();
			if (!pItem) {
				g_101e3108("Unable to parse data file ReactionInfoList.  Memory allocation ERROR!\n");
				return false;
			}
			pItem->sub_10152bd0(pGroup, id);
			pGroup = pGroup->GetNextKey();
		}
		return true;
	}
	g_101e3108("Unable to parse data file for ReactionInfoList.\n");
	return false;
}
// END FUNCTION

// FUNCTION: 0x10153610 size=0x29
extern char g_102ca648[];
extern char g_102de300[];

struct CUnknown101f18b0 {
    char pad_0000[0x14];
    int m_nCount;
    char **m_ppElements;
    char *sub_10153610(int i);
};

// TARGET: CUnknown101f18b0::sub_10153610
char *CUnknown101f18b0::sub_10153610(int i)
{
    if (i < 0 || i >= m_nCount)
        return g_102ca648;
    char **pp = &m_ppElements[i];
    if (*pp == 0)
        return g_102de300;
    return *pp;
}
// END FUNCTION

// FUNCTION: 0x10153640 size=0x18
#include "CUnknown101f0e50.h"

bool CUnknown101f0e50::sub_10153640(int index)
{
	if (index != -1 && index < m_f04)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10153660 size=0x18
struct CUnk101f1920 {
    char pad[0x14];
    int m_14;
    bool sub_10153660(int index);
};

bool CUnk101f1920::sub_10153660(int index)
{
    if (index != -1 && index < m_14)
        return true;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10153680 size=0x4d
extern "C" int __cdecl sub_101e28e0(const char *, const char *);
struct CNamePtr {
	const char *m_p;
	const char *Get() { return m_p ? m_p : ""; }
};
struct CNamedEntry9fd0 {
	int m_unk0;
	CNamePtr m_Name;
};
struct CNamedList9fd0 {
	int m_unk0;
	int m_count;
	CNamedEntry9fd0 **m_pData;
	int sub_10153680(const char *name);
};
// TARGET: CNamedList9fd0::sub_10153680
int CNamedList9fd0::sub_10153680(const char *name)
{
	for (int i = 0; i < m_count; i++) {
		if (sub_101e28e0(m_pData[i]->m_Name.Get(), name) == 0)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x101536d0 size=0x4d
extern "C" int __cdecl sub_101e28e0(const char *, const char *);
struct CNamePtr {
	const char *m_p;
	const char *Get() { return m_p ? m_p : ""; }
};
struct CNamedEntry9fd0 {
	int m_unk0;
	CNamePtr m_Name;
};
struct CNamedList9fd0 {
	int m_unk0;
	int m_count;
	CNamedEntry9fd0 **m_pData;
	int sub_101536d0(const char *name);
};
// TARGET: CNamedList9fd0::sub_101536d0
int CNamedList9fd0::sub_101536d0(const char *name)
{
	for (int i = 0; i < m_count; i++) {
		if (sub_101e28e0(m_pData[i]->m_Name.Get(), name) == 0)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10153720 size=0x41
extern "C" int sub_101e28e0(const char *a, const char *b);

struct CUnknown101f1a30 {
    char m_pad0000[0x14];
    int m_nCount;
    const char *sub_10153610(int index);
    int sub_10153720(const char *name);
};

// TARGET: sub_10153720
int CUnknown101f1a30::sub_10153720(const char *name)
{
    int i = 0;
    if (m_nCount > 0) {
        do {
            if (sub_101e28e0(sub_10153610(i), name) == 0) {
                return i;
            }
            i++;
        } while (i < m_nCount);
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x101537d0 size=0x3
void __stdcall sub_101537d0(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x101537e0 size=0x3
void __stdcall sub_101537e0(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x10153810 size=0x1c
struct CUnk101f1bb0 {
	void *m_00;
	void *m_04;
	void sub_10153810();
};

// TARGET: CUnk101f1bb0::sub_10153810
void CUnk101f1bb0::sub_10153810()
{
	if (m_00) {
		operator delete(m_04);
		m_00 = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10153830 size=0x6c
#include "CUnknown10227c90.h"
#include "CUnknown101f0e50.h"

extern CUnknown101f0e50 g_105e8a58;

void CUnknown10227c90::sub_10153830(int value)
{
	if (g_105e8a58.sub_10153640(value)) {
		int *pNew = new int[m_nCount + 1];
		if (m_pData) {
			for (int i = 0; i < m_nCount; i++)
				pNew[i] = m_pData[i];
			delete m_pData;
		}
		m_pData = pNew;
		pNew[m_nCount] = value;
		m_nCount++;
	}
}
// END FUNCTION

// FUNCTION: 0x101538a0 size=0x65
#include "CUnknown101f1c70.h"
#include "CUnknown101f0e50.h"

extern CUnknown101f0e50 g_105e8a58;

void CUnknown101f1c70::sub_101538a0(int value)
{
	if (g_105e8a58.sub_10153640(value)) {
		int n = m_count;
		int i = 0;
		if (0 < n) {
			int *p = m_pData;
			int *q = p;
			do {
				if (*q == value) {
					if (i < n - 1)
						p[i] = p[n - 1];
					if (m_count <= 1) {
						delete (void *)m_pData;
						m_pData = 0;
					}
					m_count--;
					return;
				}
				i++;
				q++;
			} while (i < n);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10153910 size=0x52
struct SEntry {
	int m_n0;
	int m_n4;
	int m_nKey;
};
struct SManager {
	bool sub_10153660(int key);
	SEntry *sub_10153770(int id);
};
extern SManager g_105e8a58;

struct SIdList {
	int m_nCount;
	int *m_pIds;

	int sub_10153910(int key);
};

int SIdList::sub_10153910(int key)
{
	if (g_105e8a58.sub_10153660(key)) {
		for (int i = 0; i < m_nCount; i++) {
			if (g_105e8a58.sub_10153770(m_pIds[i])->m_nKey == key)
				return m_pIds[i];
		}
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10153970 size=0x5
int __stdcall sub_10153970(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101539e0 size=0x67
extern "C" int __cdecl sprintf(char *, const char *, ...);
void __cdecl sub_1015fbb0(const char *msg);

struct ItemObjX { void sub_10152d40(); };
struct ItemMgrX { ItemObjX *sub_10153770(int key); };
extern ItemMgrX g_105e8a58;

struct CUnknown101f1e20 {
	int m_nCount;
	int *m_pItems;
	void sub_101539e0();
};

void CUnknown101f1e20::sub_101539e0()
{
	char buf[0x80];
	sprintf(buf, "\n");
	sub_1015fbb0(buf);
	if (m_nCount > 0) {
		for (int i = 0; i < m_nCount; i++)
			g_105e8a58.sub_10153770(m_pItems[i])->sub_10152d40();
	}
	sub_1015fbb0("\n");
}
// END FUNCTION

// FUNCTION: 0x10153ba0 size=0x2d
#include "VKeyValues.h"
char *sub_101546c0(const char *pszSrc);
extern char g_105e8ac8;
void VKeyValues::sub_10153ba0(const char *pszName)
{
	m_pszName14 = sub_101546c0(pszName);
	m_pszValue0c = 0;
	m_nType10 = 0;
	m_pChild1c = 0;
	m_pNext18 = 0;
	m_pParent20 = 0;
	g_105e8ac8 = 0;
}
// END FUNCTION

// FUNCTION: 0x10153c20 size=0x23
struct VB101f2140 { virtual void f0(); virtual void f1(); virtual ~VB101f2140(); };
struct D101f2140 : virtual VB101f2140 { int m_ref; char pad[0x28 - 8]; D101f2140(); };
struct E101f2140 { char pad[4]; void sub_10153c20(); };

// TARGET: E101f2140::sub_10153c20
void E101f2140::sub_10153c20()
{
	D101f2140 *d = (D101f2140 *)((char *)this - 0x28);
	int *pRef = (int *)((char *)this - 0x24);
	if (--*pRef <= 0)
		delete d;
}
// END FUNCTION

// FUNCTION: 0x10153ee0 size=0x4
struct CUnknown10153ee0 { int sub_10153ee0(); };
int CUnknown10153ee0::sub_10153ee0()
{
    return *(int *)((char *)this + -32);
}
// END FUNCTION

// FUNCTION: 0x10153ef0 size=0x4
struct CUnknown10153ef0 { int sub_10153ef0(); };
int CUnknown10153ef0::sub_10153ef0()
{
    return *(int *)((char *)this + -28);
}
// END FUNCTION

// FUNCTION: 0x10153f10 size=0x20
struct CVBaseA { int a; };
struct CVBaseB { int b; };
struct CVDerived : virtual CVBaseA, virtual CVBaseB { int d; };
struct CUnk101f2520
{
    CVDerived *sub_10154540(void *a);
    CVBaseB *sub_10153f10(void *a);
};
CVBaseB *CUnk101f2520::sub_10153f10(void *a)
{
    return ((CUnk101f2520 *)((char *)this - 0x30))->sub_10154540(a);
}
// END FUNCTION

// FUNCTION: 0x10153fb0 size=0x2c
extern int g_105eb338;
extern char g_105eab08[32][64];
extern char g_105e8ac8[];

// TARGET: sub_10153fb0
void sub_10153fb0(void)
{
	char *pDst;
	char *pSrc;
	char c;

	if (g_105eb338 < 0x20)
	{
		pSrc = g_105e8ac8;
		pDst = g_105eab08[g_105eb338];
		g_105eb338 = g_105eb338 + 1;
		do
		{
			c = *pSrc;
			pSrc++;
			*pDst = c;
			pDst++;
		} while (c != 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10153fe0 size=0x2a
#include <string.h>
extern int g_105eb338;
extern char g_105eab08[][64];
extern char g_105e8ac8[];

void sub_10153fe0()
{
    if (g_105eb338 > 0) {
        g_105eb338--;
        strcpy(g_105e8ac8, g_105eab08[g_105eb338]);
    }
}
// END FUNCTION

// FUNCTION: 0x101540a0 size=0x49
#include "VKeyValues.h"
#include <stdlib.h>

int VKeyValuesInterface::sub_101540a0(const char *pszName, int nDefault)
{
	VKeyValues *p = (VKeyValues *)((char *)this - 0x30);
	if (pszName)
		p = p->sub_10154540(pszName);
	if (p) {
		switch (p->m_nType10) {
		case 1:
			return atoi(p->m_pszValue0c);
		case 3:
			return (int)*(float *)&p->m_nValue08;
		default:
			return p->m_nValue08;
		}
	}
	return nDefault;
}
// END FUNCTION

// FUNCTION: 0x101540f0 size=0x29
struct CVBaseView101f27b0 {
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual void vfunc5();
    virtual void vfunc6();
    virtual void vfunc7();
    virtual void vfunc8();
    virtual void vfunc9();
    virtual int vfunc10(int a, int b);
};

struct CUnknown101f27b0 {
    bool sub_101540f0(int a, bool b);
};

// TARGET: CUnknown101f27b0::sub_101540f0
bool CUnknown101f27b0::sub_101540f0(int a, bool b)
{
    char *self = (char *)this;
    int off = *(int *)(*(char **)(self - 0x30) + 8);
    CVBaseView101f27b0 *base = (CVBaseView101f27b0 *)(self + off - 0x30);
    return (bool)base->vfunc10(a, (unsigned char)b);
}
// END FUNCTION

// FUNCTION: 0x10154120 size=0x2f
#include "VKeyValues.h"
void *VKeyValuesInterface::sub_10154120(const char *pszName, void *pDefault)
{
	VKeyValues *pKey = (VKeyValues *)((char *)this - 0x30);
	if (pszName)
		pKey = pKey->sub_10154540(pszName);
	if (pKey) {
		if (pKey->m_nType10 != 4)
			return 0;
		return (void *)pKey->m_nValue08;
	}
	return pDefault;
}
// END FUNCTION

// FUNCTION: 0x10154150 size=0x4e
#include <stdlib.h>
#include "VKeyValues.h"
// TARGET: VKeyValuesInterface::sub_10154150
float VKeyValuesInterface::sub_10154150(const char *pszName, float flDefault)
{
	VKeyValues *pKey = (VKeyValues *)((char *)this - 0x30);
	if (pszName)
		pKey = pKey->sub_10154540(pszName);
	if (pKey) {
		switch (pKey->m_nType10) {
		case 1:
			return (float)atof(pKey->m_pszValue0c);
		case 2:
			return (float)pKey->m_nValue08;
		case 3:
			return *(float *)&pKey->m_nValue08;
		}
		return 0.0f;
	}
	return flDefault;
}
// END FUNCTION

// FUNCTION: 0x101541a0 size=0x24
struct CUnk101f28a0Owner {
	char pad0000[0xc];
	int m_0c;
	CUnk101f28a0Owner *sub_10154540(int a);
};

struct CUnk101f28a0 {
	int sub_101541a0(int a, int b);
};

// TARGET: CUnk101f28a0::sub_101541a0
int CUnk101f28a0::sub_101541a0(int a, int b)
{
	CUnk101f28a0Owner *p = (CUnk101f28a0Owner *)((char *)this - 0x30);
	if (a)
		p = p->sub_10154540(a);
	if (p)
		return p->m_0c;
	return b;
}
// END FUNCTION

// FUNCTION: 0x101541d0 size=0x58
#include "VKeyValues.h"
extern "C" int __cdecl sub_101e28e0(const char *, const char *);
int VKeyValuesInterface::sub_101541d0(const char *pszName, const char **ppszChoices, int nChoices, int nDefault)
{
    VKeyValues *pKey = (VKeyValues *)((char *)this - 0x30);
    if (pszName)
        pKey = pKey->sub_10154540(pszName);
    if (pKey) {
        for (int i = 0; i < nChoices; i++) {
            if (!sub_101e28e0(pKey->m_pszValue0c, ppszChoices[i]))
                return i;
        }
    }
    return nDefault;
}
// END FUNCTION

// FUNCTION: 0x10154230 size=0x121
#include "VKeyValues.h"
extern "C" int sprintf(char *, const char *, ...);
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);
extern char g_102ca678[];
extern char g_102ca694[];
extern const char g_102de300[];
void *sub_10154720(int n);
// TARGET: VKeyValuesInterface::sub_10154230
char VKeyValuesInterface::sub_10154230(const char *pszName, int nMax, const char *pszFormat, const char **ppszFirstName, const char ***pppszValues, int *pnCount)
{
	char buf[32];
	if (pnCount)
	{
		*pnCount = 0;
		VKeyValues *pThis = (VKeyValues *)((char *)this - 0x30);
		VKeyValues *pKv = (VKeyValues *)__RTDynamicCast(pThis->NameOf()->vfunc2(pszName), 0, g_102ca678, g_102ca694, 0);
		if (pKv)
		{
			*ppszFirstName = pKv->NameOf()->vfunc13("Name", g_102de300);
			int n = 0;
			for (int i = 0; i < nMax; i++)
			{
				sprintf(buf, pszFormat, i);
				if (!*pKv->NameOf()->vfunc13(buf, g_102de300))
					break;
				n++;
			}
			if (n > 0)
			{
				*pnCount = n;
				*pppszValues = (const char **)sub_10154720(n);
				for (int j = 0; j < n; j++)
				{
					sprintf(buf, pszFormat, j);
					(*pppszValues)[j] = pKv->NameOf()->vfunc13(buf, g_102de300);
				}
				return 1;
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10154370 size=0x10b
#include "VKeyValues.h"
#include <stdio.h>
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);
extern int g_102ca678;
extern int g_102ca694;
extern char g_102de300[];

// TARGET: VKeyValuesInterface::sub_10154370
char VKeyValuesInterface::sub_10154370(const char *pszName, int nMax, const char *pszFormat, int **ppValues, int *pnCount)
{
	char buf[32];
	if (pnCount) {
		*pnCount = 0;
		VKeyValues *pKV = (VKeyValues *)__RTDynamicCast(((VKeyValues *)((char *)this - 0x30))->NameOf()->vfunc2(pszName), 0, &g_102ca678, &g_102ca694, 0);
		if (pKV) {
			int n = 0;
			int i = 0;
			if (nMax > 0) {
				do {
					sprintf(buf, pszFormat, i);
					if (!*pKV->NameOf()->vfunc13(buf, g_102de300))
						break;
					n++;
					i++;
				} while (i < nMax);
			}
			if (n > 0) {
				*pnCount = n;
				*ppValues = (int *)operator new(n * 4);
				for (i = 0; i < n; i++) {
					sprintf(buf, pszFormat, i);
					(*ppValues)[i] = pKV->NameOf()->vfunc10(buf, 0);
				}
				return 1;
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10154480 size=0x50
struct VB { virtual void f0(); virtual void f1(); };
struct VNode : virtual VB { int a; };
struct CKV {
	int pad0[3];
	char *m_pName;
	int m_n10;
	char *m_pStr;
	VNode *m_pNext;
	VNode *m_pChild;
	int m_n20;
	void sub_10154480();
};
void sub_10154700(void *);
extern char g_105e8ac8;
void CKV::sub_10154480()
{
	VNode *p = m_pChild;
	while (p) {
		VNode *n = *(VNode **)((char *)p + 0x18);
		p->f1();
		p = n;
	}
	m_pChild = 0;
	sub_10154700(m_pStr);
	sub_10154700(m_pName);
	m_n10 = 0;
	g_105e8ac8 = 0;
	m_pNext = 0;
	m_n20 = 0;
}
// END FUNCTION

// FUNCTION: 0x10154590 size=0x25
extern int g_102ca678[];
extern int g_102ca694[];

// TARGET: sub_10154590
void __fastcall sub_10154590(void *pThis, int dummy, void *pKV)
{
	*(void **)((char *)pThis - 0x10) = __RTDynamicCast(pKV, 0, g_102ca678, g_102ca694, 0);
}
// END FUNCTION

// FUNCTION: 0x10154670 size=0x1d
typedef void (*PFN_109f383c)(int, void *);
extern PFN_109f383c g_101e31d4;

// TARGET: sub_10154670
void __cdecl sub_10154670(int a, char *p)
{
	char *q;
	if (p == 0)
		q = 0;
	else
		q = p + ((int *)*(int *)p)[1];
	g_101e31d4(a, q);
}
// END FUNCTION

// FUNCTION: 0x10154690 size=0x23
extern int g_105e8b08;
int sub_100e3130(int a, void *b, int c);

// TARGET: sub_10154690
void *sub_10154690(int *p, int unused, int value)
{
    *p = sub_100e3130(*p, &g_105e8b08, value);
    return &g_105e8b08;
}
// END FUNCTION

// FUNCTION: 0x101546c0 size=0x3f
#include <string.h>
#include <stdlib.h>

// TARGET: sub_101546c0
char *sub_101546c0(const char *pszSrc)
{
    char *pszDst = 0;
    if (pszSrc != 0) {
        int nLen = strlen(pszSrc);
        char *p = (char *)malloc(nLen + 1);
        memcpy(p, pszSrc, nLen);
        p[nLen] = 0;
        pszDst = p;
    }
    return pszDst;
}
// END FUNCTION

// FUNCTION: 0x10154b40 size=0x21
// TARGET: sub_10154b40
void __fastcall sub_10154b40(int *p)
{
    p[0] = -1;
    p[1] = 0;
    p[2] = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 0;
    p[3] = 0;
    p[4] = 0;
}
// END FUNCTION

// FUNCTION: 0x10154c90 size=0x156
#include "CUnknown101f3d80.h"
#include "IFileSystemFind.h"
#include <stdio.h>
#include <string.h>

extern IFileSystemFind *g_104a580c;

// TARGET: CUnknown101f3d80::sub_10154c90
bool CUnknown101f3d80::sub_10154c90()
{
	int hFind = -1;
	char szPath[260];
	char szPattern[260];
	sprintf(szPattern, "sound\\%s\\*.*", m_pszDir);
	const char *pFound = g_104a580c->vfunc22(szPattern, &hFind);
	while (pFound) {
		if (!g_104a580c->vfunc24(hFind)) {
			sprintf(szPath, "%s\\%s", m_pszDir, pFound);
			sub_10155070((int)szPath, (int)pFound);
		}
		pFound = g_104a580c->vfunc23(hFind);
	}
	g_104a580c->vfunc25(hFind);
	pFound = g_104a580c->vfunc22(szPattern, &hFind);
	while (pFound) {
		if (g_104a580c->vfunc24(hFind) && strcmp(pFound, ".") && strcmp(pFound, "..")) {
			sprintf(szPath, "%s\\%s", m_pszDir, pFound);
			sub_101550d0((int)szPath, (int)pFound);
		}
		pFound = g_104a580c->vfunc23(hFind);
	}
	g_104a580c->vfunc25(hFind);
	return true;
}
// END FUNCTION

// FUNCTION: 0x10154f60 size=0x102
#include "CVSoundFileFolder_t.h"
#include <string.h>
typedef void (__cdecl *FnDevWarning)(int level, const char *fmt, ...);
extern FnDevWarning g_101e3120;

// TARGET: CVSoundFileFolder_t::sub_10154f60
void CVSoundFileFolder_t::sub_10154f60(int a, int b, int c)
{
	int newSize = m_pOwner->sub_101554f0();
	int src = ((CUnit101f4530 *)m_pOwner)->sub_101556a0(a, c);
	int dst = ((CUnit101f4530 *)m_pOwner)->sub_101556a0(a, b);
	unsigned char *pNew = new unsigned char[newSize];
	if (dst > newSize)
		g_101e3120(1, "CVSoundFileFolder_t::AddRange IDX SHOULD NOT BE GREATER THAN SIZE?  HUH??? %d %d\n", dst, newSize);
	m_nSize = newSize;
	int i;
	for (i = 0; i <= src; i++)
		pNew[i] = m_pFlags[i];
	for (i = src + 1; i <= dst; i++)
		pNew[i] = 0;
	int delta = dst - src;
	for (i = dst + 1; i < newSize; i++)
		pNew[i] = m_pFlags[i - delta];
	delete m_pFlags;
	m_pFlags = pNew;
	for (i = 0; i < m_nChildren; i++)
		m_pChildren[i]->sub_10154f60(a, b, c);
}
// END FUNCTION

// FUNCTION: 0x10155070 size=0x54
#include "CUnknown101f3d80.h"
#include "CUnknown101f4370.h"

struct CUnit101f4530 { int sub_101556a0(int a, int b); };
struct CUnk101f4330 { void sub_10155510(int a, int b); };

void CUnknown101f3d80::sub_10155070(int a, int b)
{
	int idx;
	((CUnknown101f4370 *)m_n04)->sub_10155540((const char *)b, &idx, &b);
	if (idx != -1)
	{
		int n = ((CUnit101f4530 *)m_n04)->sub_101556a0(idx, b);
		((CUnk101f4330 *)m_n04)->sub_10155510(idx, b);
		*((char *)*(int *)((char *)this + 0x14) + n) = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x101550d0 size=0x93
#include "CUnknown101f3d80.h"
void CUnknown101f3d80::sub_101550d0(int a, int b)
{
    CUnknown101f35c0 **pNew = (CUnknown101f35c0 **)operator new(m_nCount * 4 + 4);
    if (m_nCount > 0) {
        for (int i = 0; i < m_nCount; i++)
            pNew[i] = m_pItems[i];
        operator delete(m_pItems);
    }
    m_pItems = pNew;
    CUnknown101f35c0 *p = (CUnknown101f35c0 *)operator new(0x24);
    p = p ? p->sub_10154ae0() : 0;
    m_pItems[m_nCount] = p;
    m_pItems[m_nCount]->sub_10154b70(m_n04, this, a, b);
    m_nCount++;
}
// END FUNCTION

// FUNCTION: 0x101553d0 size=0x25
#include "CUnknown101f40f0.h"
#include "CUnknown101f5150.h"

int *sub_1015fc40(void *pOwnerRef, const char *pszName);

// TARGET: CUnknown101f40f0::sub_101553d0
void CUnknown101f40f0::sub_101553d0(CUnknown101f5150 *pOwner, const char *pszName)
{
    m_pParent = (CUnknown101f40f0_Parent *)pOwner;
    m_pszName = (const char *)*sub_1015fc40(&pOwner, pszName);
}
// END FUNCTION

// FUNCTION: 0x10155400 size=0x9b
#include "CUnknown101f40f0.h"
#include <stdio.h>
extern char g_102de300[];

void CUnknown101f40f0::sub_10155400()
{
    char szBuf[260];
    int n = m_pParent->m_nCount;
    m_pInts = (int *)operator new(n * 4);
    for (int i = 0; i < n; i++)
        m_pInts[i] = 1;
    const char *pszName = m_pszName ? m_pszName : g_102de300;
    const char *const *ppParentName = &m_pParent->m_pszName;
    const char *pszParent = *ppParentName ? *ppParentName : g_102de300;
    sprintf(szBuf, "%s\\%s", pszParent, pszName);
    m_Inner.sub_10154b70((int)this, 0, (int)szBuf, (int)(m_pszName ? m_pszName : g_102de300));
    m_Inner.sub_10154c40();
}
// END FUNCTION

// FUNCTION: 0x101554b0 size=0x1b
// TARGET: sub_101554b0
struct CUnk101f42a0Inner {
    int m_first;
    int sub_10154df0(int a);
};
struct CUnk101f42a0 {
    char pad[0x10];
    CUnk101f42a0Inner m_inner;
    int sub_101554b0(int a);
};
int CUnk101f42a0::sub_101554b0(int a)
{
    CUnk101f42a0Inner *p = &m_inner;
    int r = p->sub_10154df0(a);
    if (r == -1) {
        r = p->m_first;
    }
    return r;
}
// END FUNCTION

// FUNCTION: 0x101554d0 size=0x1a
struct CUnk101f3b00
{
	int sub_10154ee0(int a, int b, int c);
};

struct CUnk101f42d0
{
	int sub_101554d0(int a, int b, int c);
};

// TARGET: sub_101554d0
int CUnk101f42d0::sub_101554d0(int a, int b, int c)
{
	if (a != -1) {
		return ((CUnk101f3b00 *)((char *)this + 0x10))->sub_10154ee0(a, b, c);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10155510 size=0x2c
struct CUnkSub101f4330
{
	void sub_10154f60(int a, int b, int c);
};

struct CUnk101f4330
{
	char m_pad00[0xc];
	int *m_pArr;	// 0x0c
	CUnkSub101f4330 m_sub;	// 0x10

	void sub_10155510(int a, int b);
};

// TARGET: CUnk101f4330::sub_10155510
void CUnk101f4330::sub_10155510(int a, int b)
{
	int nNew = b + 1;
	int cur = m_pArr[a];
	if (cur < nNew)
	{
		m_pArr[a] = nNew;
		m_sub.sub_10154f60(a, nNew - 1, cur - 1);
	}
}
// END FUNCTION

// FUNCTION: 0x101556a0 size=0x2b
struct CUnit101f4530 {
    int sub_101556a0(int n, int b);
};

int CUnit101f4530::sub_101556a0(int n, int b)
{
    int sum = 0;
    if (n > 0) {
        int *p = *(int **)((char *)this + 0xc);
        do {
            sum += *p;
            p++;
            n--;
        } while (n != 0);
    }
    return sum + b;
}
// END FUNCTION

// FUNCTION: 0x101556d0 size=0x68
struct TInner {
	char pad[0x14];
	int count;
};

struct TSeg {
	char pad[8];
	TInner *inner;
	int *sizes;
	void sub_101556d0(int target, int *outIndex, int *outOffset);
};

void TSeg::sub_101556d0(int target, int *outIndex, int *outOffset)
{
	int n = inner->count;
	int sum = 0;
	int i = 0;
	if (0 < n) {
		int *p = sizes;
		do {
			int next = *p + sum;
			if (next > target) {
				if (outIndex)
					*outIndex = i;
				if (outOffset)
					*outOffset = target - sum;
				return;
			}
			i++;
			p++;
			sum = next;
		} while (i < n);
	}
	if (outIndex)
		*outIndex = 0;
	if (outOffset)
		*outOffset = 0;
}
// END FUNCTION

// FUNCTION: 0x10155b40 size=0x1d
struct S9 {
	int a, b, c, d, e, f, g, h, i;
	S9 *sub_10155b40();
};
S9 *S9::sub_10155b40()
{
	a = 1;
	b = 0;
	e = 0;
	f = 0;
	g = 0;
	h = 0;
	i = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10155ca0 size=0x1e
int *sub_1015fc40(int *pArg, int value);

struct CUnk101f5120 {
	char m_pad0000[0x24];
	int m_24;
	void sub_10155ca0(int a);
};

// TARGET: CUnk101f5120::sub_10155ca0
void CUnk101f5120::sub_10155ca0(int a)
{
	m_24 = *sub_1015fc40(&a, a);
}
// END FUNCTION

// FUNCTION: 0x10155cc0 size=0x8c
#include "CUnknown101f5150.h"
bool CUnknown101f5150::sub_10155cc0(const char *pszName)
{
    CUnknown101f40f0 **pNew = (CUnknown101f40f0 **)operator new(m_nCount * 4 + 4);
    if (m_nCount > 0) {
        for (int i = 0; i < m_nCount; i++)
            pNew[i] = m_pItems[i];
        operator delete(m_pItems);
    }
    m_pItems = pNew;
    CUnknown101f40f0 *p = (CUnknown101f40f0 *)operator new(0x34);
    p = p ? p->sub_10155380() : 0;
    m_pItems[m_nCount] = p;
    m_pItems[m_nCount]->sub_101553d0(this, pszName);
    m_nCount++;
    return true;
}
// END FUNCTION

// FUNCTION: 0x10156030 size=0x3
void __stdcall sub_10156030(int a0, int a1, int a2, int a3, int a4)
{
}
// END FUNCTION

// FUNCTION: 0x10156040 size=0x3
void __stdcall sub_10156040(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x101560f0 size=0x27
void __fastcall sub_101560f0(void **pThis)
{
	void **pp = (void **)((char *)pThis + 8);
	for (int i = 0x118d; i != 0; i--)
	{
		operator delete(pp[-1]);
		operator delete(pp[0]);
		pp += 3;
	}
}
// END FUNCTION

// FUNCTION: 0x10156120 size=0x33
// TARGET: sub_10156120
struct CEntryPair_101f5e80 {
    int a;
    void *b;
    void *c;
};
struct CEntryTable_101f5e80 {
    CEntryPair_101f5e80 e[0x118d];
    void sub_10156120();
};
void CEntryTable_101f5e80::sub_10156120()
{
    int i;
    for (i = 0; i < 0x118d; i++) {
        delete e[i].b;
        delete e[i].c;
        e[i].a = 0;
        e[i].b = 0;
        e[i].c = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x10156160 size=0x19
struct CUnk101f5ed0
{
	char m_pad0000[8];

	void sub_10156160();
};

// TARGET: sub_10156160
void CUnk101f5ed0::sub_10156160()
{
	int *p = (int *)(m_pad0000 + 8);
	for (int i = 0x118d; i != 0; i--) {
		p[-2] = 0;
		p[-1] = 0;
		p[0] = 0;
		p += 3;
	}
}
// END FUNCTION

// FUNCTION: 0x10156180 size=0xc2
#include "CUnknown101f5f00.h"

void CUnknown101f5f00::sub_10156180(int first, int key, int second)
{
	if (key != -1) {
		CUnknown101f5f00Rec *rec = &m_aRecs[key];
		if (rec->m_nCount == 0) {
			rec->m_pFirst = (int *)operator new(4);
			rec->m_pSecond = (int *)operator new(4);
		} else {
			int *pNewFirst = (int *)operator new(rec->m_nCount * 4 + 4);
			int *pNewSecond = (int *)operator new(rec->m_nCount * 4 + 4);
			for (int i = 0; i < rec->m_nCount; i++) {
				pNewFirst[i] = rec->m_pFirst[i];
				pNewSecond[i] = rec->m_pSecond[i];
			}
			operator delete(rec->m_pFirst);
			operator delete(rec->m_pSecond);
			rec->m_pSecond = pNewSecond;
			rec->m_pFirst = pNewFirst;
		}
		rec->m_pFirst[rec->m_nCount] = first;
		rec->m_pSecond[rec->m_nCount] = second;
		rec->m_nCount++;
	}
}
// END FUNCTION

// FUNCTION: 0x10156250 size=0x3
void __stdcall sub_10156250(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x10156260 size=0x3
void __stdcall sub_10156260(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x101563d0 size=0x3
struct CUnknown101563d0 { void * sub_101563d0(); };
void * CUnknown101563d0::sub_101563d0()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x101563e0 size=0x1
void sub_101563e0()
{
}
// END FUNCTION

// FUNCTION: 0x101563f0 size=0x121
#include "FileSystemViews.h"

extern IFileSystemView *g_104a580c;
extern IUniformRandomView *g_104a5738;
extern char g_105f8868[];
extern "C" int __cdecl sprintf(char *, const char *, ...);

const char *__stdcall sub_101563f0(const char *szName)
{
    char path[260];
    int handle;
    int count = 0;
    int pick, i;
    const char *file;
    sprintf(path, "sound\\whispers\\%s\\*.wav", szName);
    file = g_104a580c->FindFirst(path, &handle);
    while (file) {
        if (!g_104a580c->FindIsDirectory(handle))
            count++;
        file = g_104a580c->FindNext(handle);
    }
    g_104a580c->FindClose(handle);
    if (count != 0) {
        count--;
        pick = g_104a5738->RandomInt(0, count);
        i = 0;
        file = g_104a580c->FindFirst(path, &handle);
        while (file) {
            if (!g_104a580c->FindIsDirectory(handle)) {
                if (pick == i)
                    break;
                i++;
            }
            file = g_104a580c->FindNext(handle);
        }
        sprintf(g_105f8868, "whispers\\%s\\%s", szName, file);
        g_104a580c->FindClose(handle);
        return g_105f8868;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10156770 size=0x40
struct CUnknownStat101f69a0 {
    int m0;
    int m4;
    int m8;
    int m0c;
    int m10;
    int m14;
    int m18;
    int m1c;
    int m20;
    int m24;
    int m28;
    int m2c;
    int m30;
    int m34;
    int m38;
};

// TARGET: sub_10156770
int __fastcall sub_10156770(CUnknownStat101f69a0 *p)
{
    int iVar1 = ((p->m14 + p->m0) * p->m18) / p->m20;
    if (p->m38 != 100) {
        iVar1 = (p->m38 * iVar1) / 100;
    }
    int iVar2 = p->m28;
    if (iVar1 <= p->m28 && (iVar2 = p->m30, iVar1 >= p->m30)) {
        iVar2 = iVar1;
    }
    return iVar2;
}
// END FUNCTION

// FUNCTION: 0x10156f40 size=0x2a
#include "CUnknown101f73b0.h"

int *sub_1015f7e0(int *pValue, int a, const char *pszName);
extern const char g_102863d0[];

// TARGET: CUnknown101f73b0::sub_10156f40
void CUnknown101f73b0::sub_10156f40(int a, int b)
{
    m_n0c = b;
    m_n08 = *sub_1015f7e0(&b, a, g_102863d0);
}
// END FUNCTION

// FUNCTION: 0x101570b0 size=0x38
// TARGET: CVTraitEffectGroup_t::sub_101570b0
#include "CVTraitEffectGroup_t.h"
#include "CUnknown101f6c50.h"

void CVTraitEffectGroup_t::sub_101570b0(CTraitStatBlock *pBlock)
{
    pBlock->m_ref = m_nId;
    for (int i = 0; i < m_nEffects; i++) {
        ((CUnknown101f6c50 *)&m_pEffects[i])->sub_10156980(pBlock);
    }
}
// END FUNCTION

// FUNCTION: 0x101570f0 size=0x3a
#include "CUnknown101f6c50.h"

struct CUnk101f75f0
{
    char m_pad0000[0xc];
    int m_n0c;    // 0xc
    int m_n10;    // 0x10
    char *m_p14;    // 0x14: an array of 0x44 byte elements
    void sub_101570f0(CTraitStatBlock *pOut);
};

// TARGET: CUnk101f75f0::sub_101570f0
void CUnk101f75f0::sub_101570f0(CTraitStatBlock *pOut)
{
    if (m_n0c == 0) {
        int i = 0;
        *(int *)((char *)pOut + 0x40) = 0;
        if (m_n10 > 0) {
            do {
                ((CUnknown101f6c50 *)(m_p14 + i * 0x44))->sub_10156980(pOut);
                i++;
            } while (i < m_n10);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10157130 size=0x37
#include "CVTraitEffectGroup_t.h"
#include "CVModInfo_t.h"

// TARGET: CVTraitEffectGroup_t::sub_10157130
void CVTraitEffectGroup_t::sub_10157130(CVModInfo_t *pInfo, void *pResult)
{
    for (int i = 0; i < m_nEffects; i++) {
        m_pEffects[i].sub_10156af0(pInfo, (int *)pResult);
    }
}
// END FUNCTION

// FUNCTION: 0x10157170 size=0x3c
struct CUnk101f7690Elem {
    void sub_10156b30(int a, int b, int c);
};

struct CUnk101f7690 {
    char m_pad0000[0x10];
    int m_nCount;
    char *m_pBase;

    void sub_10157170(int a, int b, int c);
};

void CUnk101f7690::sub_10157170(int a, int b, int c)
{
    int i;
    int off;

    i = 0;
    if (m_nCount > 0) {
        off = 0;
        do {
            ((CUnk101f7690Elem *)(m_pBase + off))->sub_10156b30(a, b, c);
            i++;
            off += 0x44;
        } while (i < m_nCount);
    }
}
// END FUNCTION

// FUNCTION: 0x101571b0 size=0xc3
extern "C" int sprintf(char *, const char *, ...);
extern void (__cdecl *g_101e3118)(int level, const char *fmt, ...);
extern char g_102de300[];
extern char g_1027feac[];

struct CDebugListElem
{
	char m_pad0000[0x44];
	void sub_10156b60();
};

struct CDebugNameList
{
	const char *sub_10157ac0(int id);
};
extern CDebugNameList g_105f8b98;

struct CDebugListEntry
{
	char m_pad0000[8];
	const char *m_pszName;
	int m_id;
	int m_nElems;
	CDebugListElem *m_pElems;
	void sub_101571b0();
};

void CDebugListEntry::sub_101571b0()
{
	char szLine[128];
	sprintf(szLine, "[%s]\t\t\t{%s}\t", g_105f8b98.sub_10157ac0(m_id), m_pszName ? m_pszName : g_102de300);
	void (__cdecl *pDevMsg)(int, const char *, ...) = g_101e3118;
	pDevMsg(1, szLine);
	if (m_id != -1)
	{
		if (m_nElems > 0)
		{
			for (int i = 0; i < m_nElems; i++)
				m_pElems[i].sub_10156b60();
		}
		else
			pDevMsg(1, "\t\t\t( <ERROR> )");
		pDevMsg(1, g_1027feac);
	}
	else
		pDevMsg(1, "\t\t\t( <ERROR> )");
}
// END FUNCTION

// FUNCTION: 0x10157280 size=0xdd
#include "CVTraitEffectGroup_t.h"

extern "C" int sprintf(char *, const char *, ...);
extern char g_102de300[];
void sub_1015fbc0(void *pOut, const char *pszText);

struct CVTraitIdList {
	const char *sub_10157ac0(int id);	// stub 0x1000ecdc
};
extern CVTraitIdList g_105f8b98;

void CVTraitEffectGroup_t::sub_10157280(void *pOut)
{
	char szLine[128];
	if (pOut) {
		const char *pszName = m_pszName;
		if (!pszName)
			pszName = g_102de300;
		sprintf(szLine, "[%s]\t\t\t{%s}\t", g_105f8b98.sub_10157ac0(m_nId), pszName);
		sub_1015fbc0(pOut, szLine);
		if (m_nId != -1) {
			if (m_nEffects > 0) {
				for (int i = 0; i < m_nEffects; i++)
					m_pEffects[i].sub_10156c60(pOut);
			} else {
				sub_1015fbc0(pOut, "\t\t\t( <ERROR> )");
			}
			sub_1015fbc0(pOut, "\n");
		} else {
			sub_1015fbc0(pOut, "\t\t\t( <ERROR> )");
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10157380 size=0x5
namespace lifted {
int sub_10157480();
}
int sub_10157380()
{
    return lifted::sub_10157480();
}
// END FUNCTION

// FUNCTION: 0x10157390 size=0xeb
#include "CUnknown101f7960.h"

struct S101f7310 {
	S101f7310 *sub_10156ed0(int);
	int m_data[6];
};

S101f7310 *CUnknown101f7960::sub_10157390()
{
	if (m_allocCount == m_count) {
		m_allocCount++;
		if (m_pItems) {
			S101f7310 **p = new S101f7310 *[m_allocCount];
			int i = 0;
			if (m_count > 0) {
				do {
					p[i] = m_pItems[i];
					i++;
				} while (i < m_count);
			}
			for (; i < m_allocCount; i++)
				p[i] = 0;
			delete m_pItems;
			m_pItems = p;
		} else {
			m_pItems = new S101f7310 *[m_allocCount];
			for (int i = 0; i < m_allocCount; i++)
				m_pItems[i] = 0;
		}
		m_count++;
	} else {
		m_count++;
	}
	if (m_pItems[m_count - 1] == 0) {
		S101f7310 *p = new S101f7310;
		m_pItems[m_count - 1] = p ? p->sub_10156ed0(m_count - 1) : 0;
	}
	return m_pItems[m_count - 1];
}
// END FUNCTION

// FUNCTION: 0x10157480 size=0x62
#include "CUnknown101f7bb0.h"
void CUnknown101f7bb0::sub_10157480()
{
	if (m_ppItems) {
		for (int i = 0; i < m_nItems; i++) {
			delete m_ppItems[i];
			m_ppItems[i] = 0;
		}
		operator delete(m_ppItems);
		m_ppItems = 0;
	}
	m_nItems = 0;
	m_n0000 = 0;
	if (m_p0018) {
		operator delete(m_p0018);
		m_p0018 = 0;
	}
	m_n0014 = 0;
}
// END FUNCTION

// FUNCTION: 0x10157a20 size=0x9f
#include <stdio.h>
#include "FileSystemViews.h"
#include "CUnknown101d5bd0.h"
extern IFileSystemView *g_104a580c;
extern void (__cdecl *g_101e3108)(const char *fmt, ...);

void CUnknown101d5bd0::sub_10157a20()
{
    int count = 0;
    int handle;
    char szFile[260];
    if (g_104a580c->FindFirst("vdata\\system\\TraitEffects*.txt", &handle)) {
        do {
            count++;
        } while (g_104a580c->FindNext(handle));
        g_104a580c->FindClose(handle);
        if (count > 0) {
            for (int i = 0; i < count; i++) {
                sprintf(szFile, "%sTraitEffects%03d.txt", "vdata\\system\\", i);
                if (!sub_101577a0(szFile))
                    g_101e3108("Unable to open Trait Effect List data file for: %s\n", szFile);
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10157ac0 size=0x29
extern char g_102ca648[];
extern char g_102de300[];

struct CUnknown101f18b0 {
    char pad_0000[0x14];
    int m_nCount;
    char **m_ppElements;
    char *sub_10157ac0(int i);
};

// TARGET: CUnknown101f18b0::sub_10157ac0
char *CUnknown101f18b0::sub_10157ac0(int i)
{
    if (i < 0 || i >= m_nCount)
        return g_102ca648;
    char **pp = &m_ppElements[i];
    if (*pp == 0)
        return g_102de300;
    return *pp;
}
// END FUNCTION

// FUNCTION: 0x10157af0 size=0x18
#include "CUnknown101f0e50.h"

bool CUnknown101f0e50::sub_10157af0(int index)
{
	if (index != -1 && index < m_f04)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10157b10 size=0x18
struct CUnk101f1920 {
    char pad[0x14];
    int m_14;
    bool sub_10157b10(int index);
};

bool CUnk101f1920::sub_10157b10(int index)
{
    if (index != -1 && index < m_14)
        return true;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10157b30 size=0x4d
extern "C" int __cdecl sub_101e28e0(const char *, const char *);
struct CNamePtr {
	const char *m_p;
	const char *Get() { return m_p ? m_p : ""; }
};
struct CNamedEntryX {
	int m_unk0;
	int m_unk4;
	CNamePtr m_Name;
};
struct CNamedListX {
	int m_unk0;
	int m_count;
	CNamedEntryX **m_pData;
	int sub_10157b30(const char *name);
};
// TARGET: CNamedListX::sub_10157b30
int CNamedListX::sub_10157b30(const char *name)
{
	for (int i = 0; i < m_count; i++) {
		if (sub_101e28e0(m_pData[i]->m_Name.Get(), name) == 0)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10157b80 size=0x4d
extern "C" int __cdecl sub_101e28e0(const char *, const char *);
struct CNamePtr {
	const char *m_p;
	const char *Get() { return m_p ? m_p : ""; }
};
struct CNamedEntryX {
	int m_unk0;
	int m_unk4;
	CNamePtr m_Name;
};
struct CNamedListX {
	int m_unk0;
	int m_count;
	CNamedEntryX **m_pData;
	int sub_10157b80(const char *name);
};
// TARGET: CNamedListX::sub_10157b80
int CNamedListX::sub_10157b80(const char *name)
{
	for (int i = 0; i < m_count; i++) {
		if (sub_101e28e0(m_pData[i]->m_Name.Get(), name) == 0)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10157bd0 size=0x41
extern "C" int sub_101e28e0(const char *a, const char *b);

struct CUnknown101f1a30 {
    char m_pad0000[0x14];
    int m_nCount;
    const char *sub_10157ac0(int index);
    int sub_10157bd0(const char *name);
};

// TARGET: sub_10157bd0
int CUnknown101f1a30::sub_10157bd0(const char *name)
{
    int i = 0;
    if (m_nCount > 0) {
        do {
            if (sub_101e28e0(sub_10157ac0(i), name) == 0) {
                return i;
            }
            i++;
        } while (i < m_nCount);
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x10158060 size=0x55
#include "CUnknown101f9b70.h"
#include "CUnknown101f0e50.h"
#include "CVTraitEffectGroup_t.h"
extern CUnknown101f0e50 g_105f8b98;

// TARGET: CUnknown101f9b70::sub_10158060
int CUnknown101f9b70::sub_10158060(int index)
{
	if (g_105f8b98.sub_10157b10(index)) {
		for (int i = 0; i < m_count; i++) {
			if (g_105f8b98.sub_10157c20(m_ids[i])->m_nId == index)
				return m_ids[i];
		}
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10158790 size=0x56
struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_101e3124;
extern int *g_101e3128;

// TARGET: sub_10158790
void sub_10158790()
{
	g_101e3124[*g_101e3128].m_pszFunc = "CVDmg_t::~CVDmg_t";
	g_101e3124[*g_101e3128].m_pszName = "";
	g_101e3124[*g_101e3128].m_pszExtra = "";
	(*g_101e3128)++;
	(*g_101e3128)--;
}
// END FUNCTION

// FUNCTION: 0x101587f0 size=0xc1
#include "CVDmg_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];

void CVDmg_t::sub_101587f0(CVDmg_t *pOther)
{
    g_101e3124[*g_101e3128].a = "CVDmg_t::Copy";
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    (*g_101e3128)++;
    int *d = (int *)this;
    int *s = (int *)pOther;
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
    d[4] = s[4];
    *(CVDmgBlock16_t *)(d + 5) = *(CVDmgBlock16_t *)(s + 5);
    *(CVDmgBlock16_t *)(d + 9) = *(CVDmgBlock16_t *)(s + 9);
    d[13] = s[13];
    d[16] = s[16];
    (*g_101e3128)--;
}
// END FUNCTION

// FUNCTION: 0x101588c0 size=0x83
#include "CVDmg_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];

void CVDmg_t::sub_101588c0()
{
	g_101e3124[*g_101e3128].a = "CVDmg_t::Null";
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	(*g_101e3128)++;
	int *p = (int *)this;
	p[0] = -1;
	p[4] = 0;
	p[1] = 0;
	p[3] = 0;
	((CVDmgBlock16_t *)(p + 5))->sub_10160670();
	((CVDmgBlock16_t *)(p + 9))->sub_10160670();
	p[0xd] = 0;
	p[0x10] = 0;
	(*g_101e3128)--;
}
// END FUNCTION

// FUNCTION: 0x10158950 size=0x6e
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
struct CVDmg_t { int f0; int f4; int f8; int fc; int f10; };

void __fastcall sub_10158950(CVDmg_t *self, int, int a, int b, int c)
{
    g_101e3124[*g_101e3128].a = "CVDmg_t::Set";
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    (*g_101e3128)++;
    self->f0 = a;
    self->f10 = b;
    self->f4 = c;
    (*g_101e3128)--;
}
// END FUNCTION

// FUNCTION: 0x10158a80 size=0x7b
#include "CVDmg_t.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern TraceEnt *g_101e3124;
extern char g_102cb38c[];
extern char g_102de300[];
int CVDmg_t::sub_10158a80()
{
    g_101e3124[*g_101e3128].a = g_102cb38c;
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    ++*g_101e3128;
    if (m_field08 > 0) {
        int v = m_field08;
        --*g_101e3128;
        return v;
    }
    if (m_field08 == 0) {
        int v = m_field04;
        --*g_101e3128;
        return v;
    }
    --*g_101e3128;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10159020 size=0x5f
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];
extern int g_105f938c;

void sub_10159020(int callback)
{
	g_101e3124[*g_101e3128].a = "CVDmg_t::SetDmgApplyCallback";
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	(*g_101e3128)++;
	g_105f938c = callback;
	(*g_101e3128)--;
}
// END FUNCTION

// FUNCTION: 0x10159080 size=0x83
#include "CVDmg_t.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];
extern int (*g_105f938c)(CVDmg_t *, int, int);

int CVDmg_t::sub_10159080(int a, int b)
{
    g_101e3124[*g_101e3128].name = "CVDmg_t::Apply";
    g_101e3124[*g_101e3128].ent = g_102de300;
    g_101e3124[*g_101e3128].extra = g_102de300;
    ++*g_101e3128;
    if (g_105f938c) {
        int r = g_105f938c(this, a, b);
        --*g_101e3128;
        return r;
    }
    --*g_101e3128;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10159170 size=0x7e
#include "CVDmg_t.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];
extern bool (*g_105f9390)(CVDmg_t *, int);

bool CVDmg_t::sub_10159170(int target)
{
    g_101e3124[*g_101e3128].name = "CVDmg_t::EvadeCheck";
    g_101e3124[*g_101e3128].ent = g_102de300;
    g_101e3124[*g_101e3128].extra = g_102de300;
    ++*g_101e3128;
    if (g_105f9390) {
        bool r = g_105f9390(this, target);
        --*g_101e3128;
        return r;
    }
    --*g_101e3128;
    return false;
}
// END FUNCTION

// FUNCTION: 0x101591f0 size=0x66
struct ScopeTrace_t { const char *name; const char *a; const char *b; };
extern ScopeTrace_t *g_101e3124;
extern int *g_101e3128;
extern const char g_102de300[];
extern const char g_102cb550[];

struct CVDmg_t {
	char pad[0x40]; unsigned int m_nFlags;
	// TARGET: CVDmg_t::sub_101591f0
	void sub_101591f0(unsigned int flags);
};

void CVDmg_t::sub_101591f0(unsigned int flags)
{
	g_101e3124[*g_101e3128].name = g_102cb550;
	g_101e3124[*g_101e3128].a = g_102de300;
	g_101e3124[*g_101e3128].b = g_102de300;
	++*g_101e3128;
	m_nFlags |= flags;
	--*g_101e3128;
}
// END FUNCTION

// FUNCTION: 0x101594e0 size=0x6d
#include "CVStatCost_t.h"

struct ScopeEntry {
	const char *fn;
	const char *name;
	const char *extra;
};
extern ScopeEntry *g_101e3124;
extern int *g_101e3128;

CVStatSubCost_t *CVStatSubCost_t::sub_101594e0()
{
	g_101e3124[*g_101e3128].fn = "CVStatSubCost_t::CVStatSubCost_t";
	g_101e3124[*g_101e3128].name = "";
	g_101e3124[*g_101e3128].extra = "";
	(*g_101e3128)++;
	*(int *)&m_data[0x10] = 0;
	sub_10159550();
	(*g_101e3128)--;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10159550 size=0x8b
#include "CVStatCost_t.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

void CVStatSubCost_t::sub_10159550()
{
	int *f = (int *)m_data;
	g_101e3124[*g_101e3128].m_pszFunc = "CVStatSubCost_t::Null";
	g_101e3124[*g_101e3128].m_pszName = g_102de300;
	g_101e3124[*g_101e3128].m_pszExtra = g_102de300;
	(*g_101e3128)++;
	f[0] = 10000;
	f[1] = 1;
	f[2] = 0;
	f[3] = 0;
	delete (char *)f[4];
	f[4] = 0;
	(*g_101e3128)--;
}
// END FUNCTION

// FUNCTION: 0x101595e0 size=0x6c
struct TraceEnt { const char *a; void *b; void *c; };
extern int *g_101e3128;
extern TraceEnt *g_101e3124;
extern char g_102cb5d8[];
extern char g_102de300[];
struct CVStatSubCost_t { int v; bool sub_101595e0(); };
bool CVStatSubCost_t::sub_101595e0()
{
    g_101e3124[*g_101e3128].a = g_102cb5d8;
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    ++*g_101e3128;
    if (v != 10000) {
        --*g_101e3128;
        return false;
    }
    --*g_101e3128;
    return true;
}
// END FUNCTION

// FUNCTION: 0x10159650 size=0x17e
#include "CVStatCost_t.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_101e3128;
extern TraceEntry *g_101e3124;
extern char g_102de300[];
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_101e3124[*g_101e3128].a = a;
        g_101e3124[*g_101e3128].b = b;
        g_101e3124[*g_101e3128].c = c;
        ++*g_101e3128;
    }
    ~ScopeTrace() { --*g_101e3128; }
};
extern "C" char *strstr(const char *, const char *);
extern "C" char *strchr(const char *, int);
extern "C" int isdigit(int);
extern "C" int atoi(const char *);
void *__cdecl operator new(unsigned int);

struct SubCostView {
    int m_type;
    int m_value;
    int m_pad8;
    int m_nCount;
    int *m_pTable;
};

void CVStatSubCost_t::sub_10159650(const char *str)
{
    ScopeTrace trace("CVStatSubCost_t::Parse", g_102de300, g_102de300);
    SubCostView *self = (SubCostView *)this;
    if (*str) {
        char *p = strstr(str, "Current_Rating");
        if (p) {
            p += 14;
            int d = isdigit(*p);
            while (d == 0) {
                p++;
                if (*p == 0)
                    break;
                d = isdigit(*p);
            }
            self->m_type = 9999;
            self->m_value = atoi(p);
            return;
        }
        p = strstr(str, "Table:");
        if (p) {
            char *q = p + 7;
            self->m_type = 0x270e;
            self->m_nCount = 1;
            for (char *c = strchr(q, ','); c; c = strchr(c + 1, ','))
                self->m_nCount++;
            self->m_pTable = (int *)operator new(self->m_nCount << 2);
            int i = 0;
            if (self->m_nCount > 0) {
                do {
                    while (*q == ' ')
                        q++;
                    self->m_pTable[i] = atoi(q);
                    q = strchr(q, ',') + 1;
                    i++;
                } while (i < self->m_nCount);
                return;
            }
        } else {
            self->m_type = atoi(str);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x101597d0 size=0xa3
#include "CVStatCost_t.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];

int CVStatSubCost_t::sub_101597d0(int level)
{
	g_101e3124[*g_101e3128].a = "CVStatSubCost_t::GetCostToBuy";
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	(*g_101e3128)++;
	int *p = (int *)m_data;
	int cost = p[0];
	switch (cost) {
	case 9998:
		cost = ((int *)p[4])[level];
		break;
	case 9999: {
		int r = p[1] * level + p[2];
		(*g_101e3128)--;
		return r;
	}
	case 10000:
		(*g_101e3128)--;
		return 10000;
	}
	(*g_101e3128)--;
	return cost;
}
// END FUNCTION

// FUNCTION: 0x10159880 size=0xbd
#include "CVStatCost_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];

int CVStatSubCost_t::sub_10159880(int level, bool bForce)
{
    int *d = (int *)m_data;
    g_101e3124[*g_101e3128].a = "CVStatSubCost_t::GetCostToSell";
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    (*g_101e3128)++;
    if (!bForce && level <= 1) {
        (*g_101e3128)--;
        return 0;
    }
    int cost = d[0];
    switch (cost) {
    case 9998:
        cost = ((int *)d[4])[level - 1];
        break;
    case 9999: {
        int r = (level - 1) * d[1] + d[2];
        (*g_101e3128)--;
        return r;
    }
    case 10000:
        (*g_101e3128)--;
        return 0;
    }
    (*g_101e3128)--;
    return cost;
}
// END FUNCTION

// FUNCTION: 0x10159b10 size=0x2a
#include "CUnknown101fbf80.h"

// TARGET: CUnknown101fbf80::sub_10159b10
bool CUnknown101fbf80::sub_10159b10(int a, int b, int c, int d, int e)
{
    if (a == m_x && b == m_y && c == m_z)
        return true;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10159b40 size=0x2a
struct CUnit101fbfc0 {
    int m_v[3];
    bool sub_10159b40(int a, int b, int c, int d, int e);
};

bool CUnit101fbfc0::sub_10159b40(int a, int b, int c, int d, int e)
{
    if (a == m_v[0] && b == m_v[1] && c == m_v[2]) {
        return false;
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x10159b70 size=0x9f
#include <stdio.h>
#include "CVStatCost_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
extern void (__cdecl *g_101e3118)(int level, const char *fmt, ...);

void CVStatSubCost_t::sub_10159b70(const char *pszLabel)
{
    char buf[128];
    g_101e3124[*g_101e3128].a = "CVStatSubCost_t::Debug_Display";
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    (*g_101e3128)++;
    if (!sub_101595e0()) {
        sprintf(buf, "\t\t\t( %s: '%s' )\t", pszLabel, sub_10159940());
        g_101e3118(1, buf);
    }
    (*g_101e3128)--;
}
// END FUNCTION

// FUNCTION: 0x10159c10 size=0x66
#include "CVStatCost_t.h"
extern int *g_101e3128;
extern int **g_101e3124;
extern int g_102de300;

void CVStatCost_t::sub_10159c10()
{
	g_101e3124[*g_101e3128 * 3] = (int *)"CVStatCost_t::Null";
	g_101e3124[*g_101e3128 * 3 + 1] = (int *)&g_102de300;
	g_101e3124[*g_101e3128 * 3 + 2] = (int *)&g_102de300;
	++*g_101e3128;
	m_first.sub_10159550();
	m_second.sub_10159550();
	--*g_101e3128;
}
// END FUNCTION

// FUNCTION: 0x10159d10 size=0xeb
#include "CVStatCost_t.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

#define KV_SLOTS(p) virtual void p##0(); virtual void p##1();

struct CVStatKV
{
	virtual void v0();
	virtual void v1();
	virtual CVStatKV *FindKey(const char *name);	// slot 2
	virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
	virtual const char *GetString(const char *name, const char *def);	// slot 13
};

extern ScopeTraceEntry_t *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

bool CVStatCost_t::sub_10159d10(CVStatKV *pKV)
{
	g_101e3124[*g_101e3128].m_pszFunc = "CVStatCost_t::Load";
	g_101e3124[*g_101e3128].m_pszName = g_102de300;
	g_101e3124[*g_101e3128].m_pszExtra = g_102de300;
	(*g_101e3128)++;
	if (pKV) {
		CVStatKV *pCosts = pKV->FindKey("Costs");
		if (pCosts) {
			m_first.sub_10159650(pCosts->GetString("New", g_102de300));
			m_second.sub_10159650(pCosts->GetString("Raise", g_102de300));
			if (m_first.sub_101595e0())
				m_first = m_second;
			else if (m_second.sub_101595e0())
				m_second = m_first;
			(*g_101e3128)--;
			return true;
		}
	}
	(*g_101e3128)--;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10159e00 size=0x85
#include "CVStatCost_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_101e3124;
extern int *g_101e3128;
extern char g_102cb744[];
extern char g_102de300[];
int CVStatCost_t::sub_10159e00(int level, bool bFirst)
{
    g_101e3124[*g_101e3128].a = g_102cb744;
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    ++*g_101e3128;
    int r;
    if (bFirst)
        r = m_first.sub_101597d0(level);
    else
        r = m_second.sub_101597d0(level);
    --*g_101e3128;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10159e90 size=0x89
#include "CVStatCost_t.h"

extern int *g_101e3128;
extern int *g_101e3124;
extern char g_102de300[];

int CVStatCost_t::sub_10159e90(int level, bool bFirst)
{
    g_101e3124[*g_101e3128 * 3] = (int)"CVStatCost_t::GetCostToSell";
    g_101e3124[*g_101e3128 * 3 + 1] = (int)g_102de300;
    g_101e3124[*g_101e3128 * 3 + 2] = (int)g_102de300;
    ++*g_101e3128;
    if (bFirst) {
        int r = m_first.sub_10159880(level, true);
        --*g_101e3128;
        return r;
    }
    int r = m_second.sub_10159880(level, false);
    --*g_101e3128;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10159f20 size=0x4c
struct S5_101fc4d0 { int v[5]; };
struct T_101fc4d0 : S5_101fc4d0 {
	char sub_10159b10(S5_101fc4d0 s);
};
struct C101fc4d0 {
	S5_101fc4d0 m_a;
	S5_101fc4d0 m_b;
	char sub_10159f20(T_101fc4d0 a, T_101fc4d0 b);
};
// TARGET: C101fc4d0::sub_10159f20
char C101fc4d0::sub_10159f20(T_101fc4d0 a, T_101fc4d0 b)
{
	return a.sub_10159b10(m_a) && b.sub_10159b10(m_b);
}
// END FUNCTION

// FUNCTION: 0x10159f70 size=0x4c
struct S5_101fc540 { int v[5]; };
struct T_101fc540 : S5_101fc540 {
	char sub_10159b10(S5_101fc540 s);
};
struct C101fc540 {
	S5_101fc540 m_a;
	S5_101fc540 m_b;
	char sub_10159f70(T_101fc540 a, T_101fc540 b);
};
// TARGET: C101fc540::sub_10159f70
char C101fc540::sub_10159f70(T_101fc540 a, T_101fc540 b)
{
	return !(a.sub_10159b10(m_a) && b.sub_10159b10(m_b));
}
// END FUNCTION

// FUNCTION: 0x10159fc0 size=0xb3
#include "CVStatCost_t.h"
#include <stdio.h>
#include <string.h>

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
extern char g_105f8cb8[];

const char *CVStatCost_t::sub_10159fc0()
{
	g_101e3124[*g_101e3128].a = "CVStatCost_t::ToStr";
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	(*g_101e3128)++;
	sprintf(g_105f8cb8, "%s: '%s'", "New", m_first.sub_10159940());
	int nLen = strlen(g_105f8cb8);
	sprintf(g_105f8cb8 + nLen, ", %s: '%s'", "Raise", m_second.sub_10159940());
	(*g_101e3128)--;
	return g_105f8cb8;
}
// END FUNCTION

// FUNCTION: 0x1015a080 size=0x85
#include "CVStatCost_t.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];
extern void (__cdecl *g_101e3118)(int level, const char *msg);

void CVStatCost_t::sub_1015a080()
{
	g_101e3124[*g_101e3128].m_pszFunc = "CVStatCost_t::Debug_Display";
	g_101e3124[*g_101e3128].m_pszName = g_102de300;
	g_101e3124[*g_101e3128].m_pszExtra = g_102de300;
	(*g_101e3128)++;
	if (!sub_10159c80()) {
		void (__cdecl *devMsg)(int, const char *) = g_101e3118;
		devMsg(1, "\tCost:");
		devMsg(1, sub_10159fc0());
	}
	(*g_101e3128)--;
}
// END FUNCTION

// FUNCTION: 0x1015a290 size=0x68
struct TScope {
	const char *name;
	void *a;
	void *b;
};
extern int *g_101e3128;
extern TScope *g_101e3124;
extern char g_102cb824[];
extern char g_102de300[];

struct TStat {
	char pad0[4];
	int f4;
	char pad8[0x34];
	int f3c;
	void sub_1015a290(int a, int b);
};

void TStat::sub_1015a290(int a, int b)
{
	g_101e3124[*g_101e3128].name = g_102cb824;
	g_101e3124[*g_101e3128].a = g_102de300;
	g_101e3124[*g_101e3128].b = g_102de300;
	(*g_101e3128)++;
	f4 = a;
	f3c = b;
	(*g_101e3128)--;
}
// END FUNCTION

// FUNCTION: 0x1015ab20 size=0x69
struct TScope {
	const char *name;
	void *a;
	void *b;
};
extern int *g_101e3128;
extern TScope *g_101e3124;
extern char g_102cb9e0[];
extern char g_102de300[];

struct TList {
	int a, b, c;
	TList *sub_1015ab20();
};

TList *TList::sub_1015ab20()
{
	g_101e3124[*g_101e3128].name = g_102cb9e0;
	g_101e3124[*g_101e3128].a = g_102de300;
	g_101e3124[*g_101e3128].b = g_102de300;
	(*g_101e3128)++;
	a = 0;
	b = 0;
	c = 0;
	(*g_101e3128)--;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1015b050 size=0xf5
#include "CVStatInfo_t.h"
#include "CVStatCost_t.h"

struct CUnknown102056d0
{
    int m_value;
    char m_pad[0x10];
    CUnknown102056d0 *sub_10161410();
};
struct TList
{
    int m_a, m_b, m_c;
    TList *sub_1015ab20();
};

struct ScopeEntry_t { const char *m_pszName; const char *m_pszEnt; const char *m_pszExtra; };
extern ScopeEntry_t *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

CVStatInfo_t *CVStatInfo_t::sub_1015b050()
{
    ((CUnknown102056d0 *)((char *)this + 0x4c))->sub_10161410();
    ((CUnknown102056d0 *)((char *)this + 0x60))->sub_10161410();
    ((CUnknown102056d0 *)((char *)this + 0x74))->sub_10161410();
    ((CUnknown102056d0 *)((char *)this + 0x88))->sub_10161410();
    ((CUnknown102056d0 *)((char *)this + 0x9c))->sub_10161410();
    CVStatSubCost_t *pCost = (CVStatSubCost_t *)((char *)this + 0xb0);
    pCost->sub_101594e0();
    (pCost + 1)->sub_101594e0();
    ((TList *)((char *)this + 0x10c))->sub_1015ab20();
    m_field0120 = 1;
    m_field0124 = 0;
    m_field0130 = 0;
    m_field0134 = 0;
    m_field0138 = 0;
    g_101e3124[*g_101e3128].m_pszName = "CVStatInfo_t::CVStatInfo_t";
    g_101e3124[*g_101e3128].m_pszEnt = g_102de300;
    g_101e3124[*g_101e3128].m_pszExtra = g_102de300;
    (*g_101e3128)++;
    m_field0000 = 0;
    m_field0004 = 0;
    m_field0008 = -1;
    m_flags = 0;
    m_bField0108 = 0;
    m_pLevels = 0;
    (*g_101e3128)--;
    return this;
}
// END FUNCTION

// FUNCTION: 0x1015b3b0 size=0x69
struct TScope {
	const char *name;
	void *a;
	void *b;
};
extern int *g_101e3128;
extern TScope *g_101e3124;
extern char g_102cbb68[];
extern char g_102de300[];

struct TInfo {
	void *p;
	bool sub_1015b3b0();
};

bool TInfo::sub_1015b3b0()
{
	g_101e3124[*g_101e3128].name = g_102cbb68;
	g_101e3124[*g_101e3128].a = g_102de300;
	g_101e3124[*g_101e3128].b = g_102de300;
	(*g_101e3128)++;
	if (p) {
		(*g_101e3128)--;
		return true;
	}
	(*g_101e3128)--;
	return false;
}
// END FUNCTION

// FUNCTION: 0x1015bcc0 size=0x93
#include "CVStatInfo_t.h"

struct ScopeEntry {
	const char *fn;
	const char *name;
	const char *extra;
};
extern ScopeEntry *g_101e3124;
extern int *g_101e3128;

struct StatMgr {
	virtual void v0();
	virtual bool v1();
	char m_pad04[0x28];
	int m_field2c;
};
extern StatMgr *g_105f9284;

bool CVStatInfo_t::sub_1015bcc0()
{
	g_101e3124[*g_101e3128].fn = "CVStatInfo_t::IsPassive";
	g_101e3124[*g_101e3128].name = "";
	g_101e3124[*g_101e3128].extra = "";
	(*g_101e3128)++;
	if (!g_105f9284->v1() && g_105f9284->m_field2c) {
		bool r = (m_flags >> 2) & 1;
		(*g_101e3128)--;
		return r;
	}
	(*g_101e3128)--;
	return false;
}
// END FUNCTION

// FUNCTION: 0x1015be50 size=0x6d
struct TraceEnt { const char *a; void *b; void *c; };
extern int *g_101e3128;
extern TraceEnt *g_101e3124;
extern char g_102cbe74[];
extern char g_102de300[];
struct CVStatInfo_t { char pad[0xfc]; int m_hidden; bool sub_1015be50(); };
bool CVStatInfo_t::sub_1015be50()
{
    g_101e3124[*g_101e3128].a = g_102cbe74;
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    ++*g_101e3128;
    if (m_hidden == 0) {
        --*g_101e3128;
        return false;
    }
    --*g_101e3128;
    return true;
}
// END FUNCTION

// FUNCTION: 0x1015bf50 size=0x86
#include "CVStatInfo_t.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];

int CVStatInfo_t::sub_1015bf50(int level)
{
	g_101e3124[*g_101e3128].a = "CVStatInfo_t::Get_Duration_Add";
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	++*g_101e3128;
	if (level > 5)
		level = 5;
	if (m_pLevels) {
		int r = m_pLevels[level - 1].m_durationAdd;
		--*g_101e3128;
		return r;
	}
	--*g_101e3128;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1015c280 size=0x6b
#include "CVStatInfo_t.h"
#include "CVStatValue_t.h"

struct ScopeTraceEntry {
    const char *m_pszName;
    const char *m_pszEntity;
    const char *m_pszExtra;
};
extern "C" __declspec(dllimport) ScopeTraceEntry g_ScopeTraceStack[];
extern "C" __declspec(dllimport) int g_ScopeTraceStackDepth;
extern const char g_102de300[];

struct ScopeTrace {
    ScopeTrace(const char *name, const char *entity)
    {
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszName = name;
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszEntity = entity;
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszExtra = g_102de300;
        g_ScopeTraceStackDepth++;
    }
    ~ScopeTrace() { g_ScopeTraceStackDepth--; }
};

// TARGET: CVStatInfo_t::sub_1015c280
int CVStatInfo_t::sub_1015c280(int arg)
{
    ScopeTrace trace("CVStatInfo_t::Default", g_102de300);
    return ((CVStatValue_t *)((char *)this + 0x9c))->sub_10161440(arg);
}
// END FUNCTION

// FUNCTION: 0x1015c8f0 size=0xb8
#include "CVStatInfoList_t.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
extern "C" int __cdecl sub_101e28e0(const char *, const char *);

struct StrWrap
{
	const char *p;
	const char *Get() const { return p ? p : g_102de300; }
};

int CVStatInfoList_t::sub_1015c8f0(const char *name)
{
	g_101e3124[*g_101e3128].a = "CVStatInfoList_t::Lookup( char *name )";
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	++*g_101e3128;
	for (int i = 0; i < m_nStats; i++) {
		if (sub_101e28e0(((StrWrap *)&m_pStats[i].m_pszName)->Get(), name) == 0) {
			--*g_101e3128;
			return i;
		}
	}
	--*g_101e3128;
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1015ca70 size=0x11b
#include "CVStatInfoList_t.h"

extern "C" char *sub_101d23bd(char *);
extern "C" char *sub_101d1300(const char *, const char *);
struct ScopeEntry_t { const char *m_pszName; const char *m_pszEnt; const char *m_pszExtra; };
extern ScopeEntry_t *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

struct StatName_t
{
    const char *m_psz;
    const char *Get() { return m_psz ? m_psz : g_102de300; }
};

int CVStatInfoList_t::sub_1015ca70(const char *name)
{
    g_101e3124[*g_101e3128].m_pszName = "CVStatInfoList_t::LookupPartial( char *name )";
    g_101e3124[*g_101e3128].m_pszEnt = g_102de300;
    g_101e3124[*g_101e3128].m_pszExtra = g_102de300;
    (*g_101e3128)++;
    char szQuery[128];
    char szName[128];
    const char *s = name;
    char *d = szQuery;
    char c;
    do {
        c = *s;
        *d = c;
        s++;
        d++;
    } while (c);
    sub_101d23bd(szQuery);
    int i = 0;
    if (m_nStats > 0) {
        int off = 0;
        do {
            char *s2 = (char *)((StatName_t *)(off + (int)m_pStats + 0x18))->Get();
            int diff = szName - s2;
            char c2;
            do {
                c2 = *s2;
                s2[diff] = c2;
                s2++;
            } while (c2);
            sub_101d23bd(szName);
            if (sub_101d1300(szName, szQuery) == szName) {
                (*g_101e3128)--;
                return i;
            }
            i++;
            off += 0x13c;
        } while (i < m_nStats);
    }
    (*g_101e3128)--;
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1015d350 size=0x87
#include "CVStatList_t.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

void CVStatList_t::sub_1015d350(int a, int *pSource, int c)
{
	g_101e3124[*g_101e3128].m_pszFunc = "CVStatList_t::Bind";
	g_101e3124[*g_101e3128].m_pszName = g_102de300;
	g_101e3124[*g_101e3128].m_pszExtra = g_102de300;
	(*g_101e3128)++;
	if (m_field04 != 0)
		m_field04 = 0;
	m_pad0000 = a;
	m_field0c = (int)pSource;
	m_field04 = pSource[1];
	m_field08 = c;
	sub_1015d2c0();
	(*g_101e3128)--;
}
// END FUNCTION

// FUNCTION: 0x1015d6e0 size=0x83
#include "CVStatList_t.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

// CVStatList_t::sub_102008b0: the game compiled it before this function, in the same unit, so VC6 knows which registers it keeps;
// the block's own copy, in a namespace of its own: no second definition of the game's name.
namespace block_10200ca0 {
struct CVStatListUnit : CVStatList_t
{
	char sub_1015d3e0(int stat);
};

char CVStatListUnit::sub_1015d3e0(int stat)
{
	if (stat >= 0 && stat < m_field04)
		return 1;
	return 0;
}
}
using namespace block_10200ca0;

// TARGET: CVStatList_t::sub_1015d6e0
int CVStatList_t::sub_1015d6e0(int stat)
{
	g_101e3124[*g_101e3128].m_pszFunc = "CVStatList_t::GetBase";
	g_101e3124[*g_101e3128].m_pszName = g_102de300;
	g_101e3124[*g_101e3128].m_pszExtra = g_102de300;
	(*g_101e3128)++;
	if (((CVStatListUnit *)this)->sub_1015d3e0(stat)) {
		int value = (**(int ***)&m_field08)[stat];
		(*g_101e3128)--;
		return value;
	}
	(*g_101e3128)--;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1015da50 size=0x6c
#include "CVStatList_t.h"

struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern TraceEnt *g_101e3124;
extern char g_102de300[];

// TARGET: CVStatList_t::sub_1015da50
char CVStatList_t::sub_1015da50(int stat, int amount)
{
	g_101e3124[*g_101e3128].a = "CVStatList_t::SubBase";
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	++*g_101e3128;
	char r = sub_1015d950(stat, -amount);
	--*g_101e3128;
	return r;
}
// END FUNCTION

// FUNCTION: 0x1015ddc0 size=0x3a
#include "CVStatList_t.h"
// TARGET: CVStatList_t::sub_1015ddc0
char CVStatList_t::sub_1015ddc0()
{
    char bChanged = 0;
    int i = 0;
    if (m_field04 > 0) {
        do {
            int value = sub_1015dbd0(i);
            int *pValue = &((int *)((int *)m_field08)[1])[i];
            if (*pValue != value) {
                bChanged = 1;
            }
            *pValue = value;
            i++;
        } while (i < m_field04);
    }
    return bChanged;
}
// END FUNCTION

// FUNCTION: 0x1015dfa0 size=0x89
#include "CVStatList_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];

bool CVStatList_t::sub_1015dfa0(int a, int b)
{
	g_101e3124[*g_101e3128].a = "CVStatList_t::IsEqual";
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	(*g_101e3128)++;
	int x = sub_1015dbd0(a);
	int y = sub_1015dbd0(b);
	if (x == y) {
		(*g_101e3128)--;
		return true;
	}
	(*g_101e3128)--;
	return false;
}
// END FUNCTION

// FUNCTION: 0x1015e100 size=0x8c
#include "CVStatList_t.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

int CVStatList_t::sub_1015e100()
{
	int bestIndex = -1;
	int best = -1;
	int i = 0;
	g_101e3124[*g_101e3128].a = "CVStatList_t::GetHighestValueIndex";
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	(*g_101e3128)++;
	if (m_field04 > 0) {
		do {
			int v = sub_1015dbd0(i);
			if (v > best) {
				best = v;
				bestIndex = i;
			}
			i++;
		} while (i < m_field04);
	}
	(*g_101e3128)--;
	return bestIndex;
}
// END FUNCTION

// FUNCTION: 0x1015e490 size=0xf0
#include "CVStatListManager_t.h"

struct ScopeEntry { const char *name; const void *file; const void *line; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
extern int g_105f9220[];
extern int g_105f90b8[];
extern int g_105f8c60[];
extern int g_105f91c8[];

// TARGET: CVStatListManager_t::sub_1015e490
void CVStatListManager_t::sub_1015e490(int which, int c)
{
	g_101e3124[*g_101e3128].name = "CVStatListManager_t::BindStatList";
	g_101e3124[*g_101e3128].file = g_102de300;
	g_101e3124[*g_101e3128].line = g_102de300;
	(*g_101e3128)++;
	switch (which)
	{
	case 0:
		m_pLists[0]->sub_1015d350((int)this, g_105f9220, c);
		break;
	case 1:
		m_pLists[1]->sub_1015d350((int)this, g_105f90b8, c);
		break;
	case 2:
		m_pLists[2]->sub_1015d350((int)this, g_105f8c60, c);
		break;
	case 3:
		m_pLists[3]->sub_1015d350((int)this, g_105f91c8, c);
		break;
	}
	(*g_101e3128)--;
}
// END FUNCTION

// FUNCTION: 0x1015e580 size=0x90
#include "CVStatListManager_t.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

// TARGET: CVStatListManager_t::sub_1015e580
char CVStatListManager_t::sub_1015e580(int time)
{
    char changed = 0;
    int i = 0;
    g_101e3124[*g_101e3128].a = "CVStatListManager_t::Update";
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    ++*g_101e3128;
    m_nTime = time;
    if (m_nLists > 0) {
        do {
            if (m_pLists[i]->sub_1015ddc0())
                changed = 1;
            i++;
        } while (i < m_nLists);
    }
    --*g_101e3128;
    return changed;
}
// END FUNCTION

// FUNCTION: 0x1015ebd0 size=0x8c
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
extern const char *g_102cb140[];
extern void (*g_101e3120)(int level, const char *fmt, ...);

const char *sub_1015ebd0(int type)
{
	g_101e3124[*g_101e3128].a = "GetParticleAttachTypeName";
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	(*g_101e3128)++;
	if (type >= 0 && type < 0x13) {
		const char *name = g_102cb140[type];
		(*g_101e3128)--;
		return name;
	}
	g_101e3120(1, "Invalid particle attach type '%d'\n", type);
	(*g_101e3128)--;
	return "Invalid attach type";
}
// END FUNCTION

// FUNCTION: 0x1015ecd0 size=0x2b
#include "CUnknown10202ba0.h"
#include "CUnknown10202ac0.h"

extern char g_102de300[];

// TARGET: CUnknown10202ba0::sub_1015ecd0
const char *CUnknown10202ba0::sub_1015ecd0(int index)
{
    const char **ppEntry = 0;
    if (((CUnknown10202ac0 *)this)->sub_1015ed50(&index)) {
        ppEntry = (const char **)*(char **)((char *)this + 0x10) + index;
        if (*ppEntry != 0) {
            return *ppEntry;
        }
    }
    return g_102de300;
}
// END FUNCTION

// FUNCTION: 0x1015ed90 size=0x66
#include "CUnknown10202b10.h"
extern char g_102de300[];
inline const char *STRINGR(const char *const &s) { return s ? s : g_102de300; }
extern void (__cdecl *g_101e3108)(const char *, ...);
bool sub_1015f720(int a, const char *name, int len, int b, int *p1, int *p2, int *p3);

bool CUnknown10202b10::sub_1015ed90(int a, int b)
{
    if (m_pszName) {
        if (!sub_1015f720(a, STRINGR(m_pszName), 0x80, b, &m_n08, &m_n10, &m_n0c)) {
            g_101e3108("Unable to read VStringTable data for %s: %s\n", STRINGR(m_pszName), b);
        } else {
            return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x1015ee00 size=0x73
#include "CUnknown10202ba0.h"

extern char g_102de300[];
extern "C" int __cdecl sprintf(char *, const char *, ...);
void sub_1015fbb0(const char *text);

void CUnknown10202ba0::sub_1015ee00()
{
	char buf[128];
	sprintf(buf, "\n\t%s:\n", m_pszName ? m_pszName : g_102de300);
	sub_1015fbb0(buf);
	for (int i = 0; i < m_nEntries; i++) {
		sprintf(buf, "(%d):\t\t%s\n", i, sub_1015ecd0(i));
		sub_1015fbb0(buf);
	}
}
// END FUNCTION

// FUNCTION: 0x1015f010 size=0x48
#include "CUnknown10202d10.h"
#include "CUnknown10202b10.h"

const char **sub_1015fc40(const char **ppDest, const char *pszSrc);

// TARGET: CUnknown10202d10::sub_1015f010
int CUnknown10202d10::sub_1015f010(int a, const char *pszName, int c, char d)
{
	CUnknown102029c0 *pRecord = sub_1015ef10();
	if (pRecord)
	{
		*(const char **)((char *)pRecord + 4) = *sub_1015fc40(&pszName, pszName);
		((CUnknown10202b10 *)pRecord)->sub_1015ed90(a, c);
		*((char *)pRecord + 0x14) = d;
		return pRecord->m_id;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1015f060 size=0x1c
namespace lifted {
extern char g_102cc654;
struct C10009d95 { int sub_1015f010(int, int, int, int); };
}
struct CUnknown10202ec0 { int sub_1015f060(int, int, int); };
int CUnknown10202ec0::sub_1015f060(int a0, int a1, int a2)
{
    return ((lifted::C10009d95 *)this)->sub_1015f010(a0, a1, (int)&lifted::g_102cc654, a2);
}
// END FUNCTION

// FUNCTION: 0x1015f120 size=0x3f
struct CSlotIter
{
	virtual int slot0(const char *pszName, int a);
	virtual int slot1();
	virtual int slot2();
	virtual int slot3();
	virtual CSlotIter *slot4();
	virtual CSlotIter *slot5();
};

extern char g_102cc654[];

struct CUnknown10202fd0
{
	void sub_1015f010(CSlotIter *pObj, int nValue);	// stub 0x10009d95, called directly
	void sub_1015f120(CSlotIter *pObj);
};

// TARGET: CUnknown10202fd0::sub_1015f120
void CUnknown10202fd0::sub_1015f120(CSlotIter *pObj)
{
	for (CSlotIter *p = pObj->slot4(); p; p = p->slot5()) {
		int nValue = p->slot0(g_102cc654, 1);
		sub_1015f010(pObj, nValue);
	}
}
// END FUNCTION

// FUNCTION: 0x1015f1c0 size=0x41
#include "CUnknown10202ba0.h"
extern char g_102de300[];
struct CTableList {
	int m_pad0;
	int m_pad4;
	int m_nCount;
	CUnknown10202ba0 **m_ppTables;
	const char *sub_1015f1c0(int key, int index);
};
const char *CTableList::sub_1015f1c0(int key, int index)
{
	for (int i = 0; i < m_nCount; i++)
		if (m_ppTables[i]->m_pad0000 == key)
			return m_ppTables[i]->sub_1015ecd0(index);
	return g_102de300;
}
// END FUNCTION

// FUNCTION: 0x1015f210 size=0x28
struct CUnknown10203110 {
    char pad_0000[8];
    int m_nCount;
    int **m_ppElements;
    int sub_1015f210(int value);
};

// TARGET: CUnknown10203110::sub_1015f210
int CUnknown10203110::sub_1015f210(int value)
{
    for (int i = 0; i < m_nCount; i++) {
        if (*m_ppElements[i] == value)
            return i;
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1015f240 size=0x2e
// TARGET: sub_1015f240

struct CUnknown10203150
{
    char m_pad0000[8];
    int m_count;
    int **m_ppItems;
    bool sub_1015f240(int value);
};

bool CUnknown10203150::sub_1015f240(int value)
{
    int i = 0;
    if (m_count > 0)
    {
        do
        {
            if (*m_ppItems[i] == value)
            {
                return true;
            }
            i++;
        } while (i < m_count);
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x1015f720 size=0xb8
#include "string_t.h"
#include "CBCCSlotViews.h"

string_t sub_1015fc40(const char *psz);

char sub_1015f720(CFileParserSlotView *pParser, const char *pszName, int a3, const char *pszErr, string_t *pOut5, string_t **pOut6, int *pCount)
{
	void *pList = 0;
	char *pKey;
	if (pParser->vfunc15(pszName, a3, pszErr, (void **)&pKey, &pList, pCount) == 1) {
		if (*pKey)
			*pOut5 = sub_1015fc40(pKey);
		else
			*pOut5 = sub_1015fc40(pszName);
		*pOut6 = new string_t[*pCount];
		for (int i = 0; i < *pCount; i++) {
			(*pOut6)[i] = sub_1015fc40(((char **)pList)[i]);
		}
		pParser->vfunc18(pList);
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1015f7e0 size=0x2c
struct IObj102038e0 {
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual void vfunc5();
    virtual void vfunc6();
    virtual void vfunc7();
    virtual void vfunc8();
    virtual void vfunc9();
    virtual void vfunc10();
    virtual void vfunc11();
    virtual void vfunc12();
    virtual int vfunc13(int a, void *b);
};

extern int g_102de300;
int sub_1015fb60(int a);
void sub_1015fc40(int a, int b);
int sub_1015fb60(int a);

// TARGET: sub_1015f7e0
int sub_1015f7e0(int a, IObj102038e0 *obj, int b)
{
    int r = obj->vfunc13(b, &g_102de300);
    r = sub_1015fb60(r);
    sub_1015fc40(a, r);
    return a;
}
// END FUNCTION

// FUNCTION: 0x1015f810 size=0x1c
void __cdecl sub_1015f830(int a, int b, const char *name);

// TARGET: sub_1015f810
int __cdecl sub_1015f810(int a, int b)
{
	sub_1015f830(a, b, "Name");
	return a;
}
// END FUNCTION

// FUNCTION: 0x1015f830 size=0x26
#include "string_t.h"

struct CObj10203950 {
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual const char *vfunc13(int arg, const char *pszDefault);
};

extern char g_102de300[];
string_t sub_1015fc40(const char *psz);

// TARGET: sub_1015f830
string_t sub_1015f830(CObj10203950 *pObj, int arg)
{
	return sub_1015fc40(pObj->vfunc13(arg, g_102de300));
}
// END FUNCTION

// FUNCTION: 0x1015fa10 size=0x31
// TARGET: sub_1015fa10
void __cdecl sub_1015fa50(const char *a, const char *b);
extern const char g_102cc7ec[];
extern const char g_102cc7e4[];
extern const char g_102cc7d0[];
extern const char g_102cc7c4[];
extern const char g_102cc7b4[];

void __cdecl sub_1015fa10()
{
    sub_1015fa50(g_102cc7e4, g_102cc7ec);
    sub_1015fa50(g_102cc7d0, g_102cc7ec);
    sub_1015fa50(g_102cc7b4, g_102cc7c4);
}
// END FUNCTION

// FUNCTION: 0x1015fbc0 size=0x2f
#include "FileSystemViews.h"
#include <string.h>
// TARGET: sub_1015fbc0

extern IFileSystemView *g_104a580c;

void sub_1015fbc0(int arg, const char *pszFile)
{
    if (arg != 0)
    {
        g_104a580c->vfunc3(pszFile, strlen(pszFile), arg);
    }
}
// END FUNCTION

// FUNCTION: 0x1015fc40 size=0x2e
#include "CGameStringPool.h"
#include "string_t.h"

extern CStringPool g_105f93f0;

// TARGET: sub_1015fc40
string_t sub_1015fc40(const char *psz)
{
	if (*psz)
	{
		char *p = g_105f93f0.sub_10137f30(psz);
		return string_t(*p ? p : 0);
	}
	return string_t(0);
}
// END FUNCTION

// FUNCTION: 0x1015fec0 size=0x5
int sub_1015fec0(int a0, int a1)
{
    return a1;
}
// END FUNCTION

// FUNCTION: 0x1015ff70 size=0x23
struct CUnknown1006c7d0 {
	void sub_1015ff70();
};

// TARGET: CUnknown1006c7d0::sub_1015ff70
void CUnknown1006c7d0::sub_1015ff70()
{
	if (*(void **)((char *)this + 0x14) != 0) {
		delete *(void **)((char *)this + 0x14);
		*(int *)((char *)this + 0x14) = 0;
	}
	*(int *)((char *)this + 0x10) = 0;
}
// END FUNCTION

// FUNCTION: 0x10160100 size=0x53
struct CFloatTable1006c9d0 {
	char m_pad[0xc];
	unsigned char m_flags;	// 0xc: bit 0 = clamp to the ends
	char m_pad0d[3];
	int m_count;	// 0x10
	float *m_pData;	// 0x14

	int sub_10160100(int index);
};

int CFloatTable1006c9d0::sub_10160100(int index)
{
	if (m_flags & 1)
	{
		if (index < 0)
			index = 0;
		else if (index >= m_count)
			index = m_count - 1;
		return (int)m_pData[index];
	}
	if (index >= 0 && index < m_count)
		return (int)m_pData[index];
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10160160 size=0x31
#include "CUnknown10204e90.h"
#include "CUnknown10204c60.h"

struct CUnk_1006ca50
{
    char pad_0000[0x18];
    void sub_10160100(int a);
    void sub_10160160(int a);
};

void CUnk_1006ca50::sub_10160160(int a)
{
    int v;
    if (a != 0) {
        v = ((CUnknown10204e90 *)((char *)this + 0x18))->sub_10160b40((void *)a);
    } else {
        v = ((CUnknown10204c60 *)((char *)this + 0x18))->sub_10160de0();
    }
    this->sub_10160100(v);
}
// END FUNCTION

// FUNCTION: 0x101601a0 size=0x47
struct SCurve6caa0 {
    int pad[3];
    unsigned char flags;
    int count;
    float *data;
    float sub_101601a0(int i);
};
// TARGET: SCurve6caa0::sub_101601a0
float SCurve6caa0::sub_101601a0(int i)
{
    if (flags & 1) {
        if (i < 0)
            i = 0;
        else if (i >= count)
            i = count - 1;
        return data[i];
    }
    if (i >= 0 && i < count)
        return data[i];
    return 3.4028235e38f;
}
// END FUNCTION

// FUNCTION: 0x101601f0 size=0x31
#include "CUnknown10204e90.h"
#include "CUnknown10204c60.h"

struct CUnk_1006ca50
{
    char pad_0000[0x18];
    void sub_101601a0(int a);
    void sub_101601f0(int a);
};

void CUnk_1006ca50::sub_101601f0(int a)
{
    int v;
    if (a != 0) {
        v = ((CUnknown10204e90 *)((char *)this + 0x18))->sub_10160b40((void *)a);
    } else {
        v = ((CUnknown10204c60 *)((char *)this + 0x18))->sub_10160de0();
    }
    this->sub_101601a0(v);
}
// END FUNCTION

// FUNCTION: 0x10160250 size=0x30
#include "StatDefault.h"
int StatDefault::sub_10160250(int arg)
{
	int n = a[4];
	int i = 0;
	if (n > 0) {
		const float *p = (const float *)a[5];
		do {
			if (arg <= (int)*p)
				return i;
			i++;
			p++;
		} while (i < n);
	}
	return i;
}
// END FUNCTION

// FUNCTION: 0x10160280 size=0x28
struct CUnk1006cbe0
{
    char pad0000[0x10];
    int m_nCount;
    float *m_pValues;

    int sub_10160280(float x);
};

// TARGET: CUnk1006cbe0::sub_10160280
int CUnk1006cbe0::sub_10160280(float x)
{
    int i = 0;
    if (m_nCount > 0)
    {
        float *p = m_pValues;
        do
        {
            if (x <= *p)
                return i;
            i++;
            p++;
        } while (i < m_nCount);
    }
    return i;
}
// END FUNCTION

// FUNCTION: 0x101602b0 size=0x79
int sub_101d159d(char *, const char *, ...);
void sub_1015fbb0(char *);
extern char g_102de300[];
struct Dump {
    char pad[8];
    const char *m_pName;
    char pad2[0x10 - 0xc];
    int m_nCount;
    float *m_pValues;
    void sub_101602b0();
};

void Dump::sub_101602b0()
{
    char buf[128];
    sub_101d159d(buf, "\n\t%s:\n", m_pName ? m_pName : g_102de300);
    sub_1015fbb0(buf);
    for (int i = 0; i < m_nCount; i++) {
        sub_101d159d(buf, "(%d):\t\t%8.3f\n", i, m_pValues[i]);
        sub_1015fbb0(buf);
    }
}
// END FUNCTION

// FUNCTION: 0x10160350 size=0x66
struct Elem1006cd00 { void sub_1015ff60(); };
struct S1006cd00 {
    int m0;
    int m4;
    Elem1006cd00 **m8;
    void sub_10160350();
};
// TARGET: S1006cd00::sub_10160350
void S1006cd00::sub_10160350()
{
    if (m8) {
        for (int i = 0; i < m4; i++) {
            Elem1006cd00 *e = m8[i];
            if (e) {
                e->sub_1015ff60();
                delete e;
            }
            m8[i] = 0;
        }
        delete m8;
        m8 = 0;
    }
    m4 = 0;
    m0 = 0;
}
// END FUNCTION

// FUNCTION: 0x10160560 size=0x2e
// TARGET: sub_10160560

struct CUnknown1006cfb0
{
    int m_pad0000;
    int m_count;
    int **m_ppItems;
    bool sub_10160560(int value);
};

bool CUnknown1006cfb0::sub_10160560(int value)
{
    int i = 0;
    if (m_count > 0)
    {
        do
        {
            if (*m_ppItems[i] == value)
            {
                return true;
            }
            i++;
        } while (i < m_count);
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10160610 size=0x50
extern "C" int sprintf(char *, const char *, ...);
void sub_1015fbb0(const char *);

struct Dump { void sub_101602b0(); };
struct CDumpTable1006d0a0 {
	int m_n0;
	int m_nCount;	// 0x4
	Dump **m_ppItems;	// 0x8
};

void __fastcall sub_10160610(CDumpTable1006d0a0 *pTable)
{
	char buf[128];
	sprintf(buf, "\n   %s:\n\n", "Tables");
	sub_1015fbb0(buf);
	for (int i = 0; i < pTable->m_nCount; i++)
		pTable->m_ppItems[i]->sub_101602b0();
}
// END FUNCTION

// FUNCTION: 0x101606f0 size=0x19
struct CUnknown10204330 { void * sub_101606f0(int); };
void * CUnknown10204330::sub_101606f0(int a0)
{
    *(int *)this = *(int *)((char *)a0);
    *(int *)((char *)this + 4) = *(int *)((char *)a0 + 4);
    *(int *)((char *)this + 0xc) = *(int *)((char *)a0 + 0xc);
    return this;
}
// END FUNCTION

// FUNCTION: 0x10160710 size=0x30
#include "CVDmg_t.h"

bool CVDmgBlock16_t::sub_10160710(const CVDmgBlock16_t *pOther)
{
	if (m_a != pOther->m_a)
		return false;
	if (m_b != pOther->m_b)
		return false;
	bool bSame = (m_d == pOther->m_d);
	return bSame;
}
// END FUNCTION

// FUNCTION: 0x10160d50 size=0x3d
#include "CVStatInfoList_t.h"
extern CVStatInfoList_t g_105f8c60;
extern CVStatInfoList_t g_105f90b8;
extern CVStatInfoList_t g_105f9220;

CVStatInfo_t *__fastcall sub_10160d50(int *p)
{
    switch (p[0]) {
    case 0:
        return g_105f9220.sub_1015cfe0(p[1]);
    case 1:
        return g_105f90b8.sub_1015cfe0(p[1]);
    case 2:
        return g_105f8c60.sub_1015cfe0(p[1]);
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10160d90 size=0x18
extern char g_102de300;
void *sub_10160d50(void);

struct CUnk10204bf0 {
    char *sub_1015b270(int a);
};

char *__stdcall sub_10160d90(int a)
{
    void *p = sub_10160d50();
    if (p)
        return ((CUnk10204bf0 *)p)->sub_1015b270(a);
    return &g_102de300;
}
// END FUNCTION

// FUNCTION: 0x10160db0 size=0x29
struct CUnk10204c20
{
    char pad0000[0xc];
    int m_nScale;
    int sub_10160db0(int a);
};

// TARGET: CUnk10204c20::sub_10160db0
int CUnk10204c20::sub_10160db0(int a)
{
    int n = m_nScale;
    int r;
    if (n == 1)
        r = a;
    else if (n < 0)
        r = -(a / n);
    else
        r = n * a;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10160de0 size=0x9c
#include "CUnknown10204c60.h"
#include "CUnknown10205ba0.h"
#include "CVStatInfoList_t.h"

struct CVStatInfoViewX {
    char m_pad[0x9c];
    CUnknown10205ba0 m_value;
};

extern CVStatInfoList_t g_105f9220;
extern CVStatInfoList_t g_105f90b8;
extern CVStatInfoList_t g_105f8c60;
extern CVStatInfoList_t g_105f91c8;

static inline int EvalIn(CVStatInfoList_t &list, int idx)
{
    CVStatInfoViewX *pInfo = (CVStatInfoViewX *)list.sub_1015cfe0(idx);
    return pInfo->m_value.sub_10161510();
}

int CUnknown10204c60::sub_10160de0()
{
    if (m_index == -1)
        return 0;
    switch (m_type) {
    case 0:
        return EvalIn(g_105f9220, m_index);
    case 1:
        return EvalIn(g_105f90b8, m_index);
    case 2:
        return EvalIn(g_105f8c60, m_index);
    case 3:
        return EvalIn(g_105f91c8, m_index);
    case 4:
        return 0;
    case 5:
        return 0;
    case 6:
        return 0;
    case 7:
        return 0;
    case 8:
        return 0;
    case 9:
        return 0;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101613e0 size=0x30
#include "CVDmg_t.h"

bool CVDmgBlock16_t::sub_101613e0(const CVDmgBlock16_t *pOther)
{
	if (m_a != pOther->m_a)
		return false;
	if (m_b != pOther->m_b)
		return false;
	bool bSame = (m_d == pOther->m_d);
	return bSame;
}
// END FUNCTION

// FUNCTION: 0x10161420 size=0x1
void sub_10161420()
{
}
// END FUNCTION

// FUNCTION: 0x101615d0 size=0x2b
#include "CParsedValue.h"

// TARGET: CParsedValue::sub_101615d0
void CParsedValue::sub_101615d0(CVStatKV *pKV, const char *pszKey)
{
	sub_10161600(sub_1015fb60(pKV->vfunc13(pszKey, "")));
}
// END FUNCTION

// FUNCTION: 0x10161800 size=0x1c
#include "CVTraitDependencyValue_t.h"

extern int vt_10248470[];

// TARGET: CVTraitDependencyValue_t::sub_10161800
CVTraitDependencyValue_t *CVTraitDependencyValue_t::sub_10161800()
{
	m_18.sub_10161410();
	m_vptr = vt_10248470;
	sub_10161840();
	return this;
}
// END FUNCTION

// FUNCTION: 0x10161820 size=0x1e
#include "CVTraitDependencyValue_t.h"

extern int vt_10248470[];

// TARGET: CVTraitDependencyValue_t::sub_10161820
CVTraitDependencyValue_t *CVTraitDependencyValue_t::sub_10161820(int a)
{
	m_18.sub_10161410();
	m_vptr = vt_10248470;
	sub_10161840();
	return this;
}
// END FUNCTION

// FUNCTION: 0x10161bb0 size=0x3a
#include "CUnknown101d7520.h"
#include "CUnknown10205e60.h"

// TARGET: CUnknown101d7520Sub::sub_10161bb0
char CUnknown101d7520Sub::sub_10161bb0(void *pArg)
{
	int i = 0;
	if (m_nCount > 0) {
		do {
			if (!m_ppItems[i]->sub_10161970(pArg))
				return 0;
			i++;
		} while (i < m_nCount);
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10161bf0 size=0x36
#include "CUnknown10205dc0.h"

extern void *g_101e3108;
typedef void (*PfnMsg)(const char *fmt, ...);

struct CUnknown10206190
{
	char m_pad0000[0x14];
	int m_nCount;	// 0x14
	CUnknown10205dc0 **m_ppItems;	// 0x18

	void sub_10161bf0();
};

// TARGET: CUnknown10206190::sub_10161bf0
void CUnknown10206190::sub_10161bf0()
{
	int i = 0;
	if (m_nCount > 0)
	{
		PfnMsg pfnMsg = (PfnMsg)g_101e3108;
		do
		{
			pfnMsg("%s", m_ppItems[i]->sub_101618f0());
			i++;
		} while (i < m_nCount);
	}
}
// END FUNCTION

// FUNCTION: 0x10161d10 size=0x1
void sub_10161d10()
{
}
// END FUNCTION

// FUNCTION: 0x10161d20 size=0x71
#include "CUnknown10206340.h"

struct KeysV {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual int v10(const char *name, int def);
	virtual void v11(); virtual void v12();
	virtual const char *v13(const char *name, const char *def);
};

int *sub_1015fc40(int *out, const char *name);

bool CUnknown10206340::sub_10161d20(void *pKeys)
{
	KeysV *k = (KeysV *)pKeys;
	if (k) {
		int tmp;
		m_field0004 = *sub_1015fc40(&tmp, k->v13("Name", ""));
		m_field0008 = k->v10("AmmoOnly", 0);
		m_field000c = k->v10("MinStage", 0);
		m_field0010 = k->v10("MinVendorState", 0);
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10161da0 size=0x1
void sub_10161da0()
{
}
// END FUNCTION

// FUNCTION: 0x10161db0 size=0x20
struct CUnknown10206400 { void * sub_10161db0(int); };
void * CUnknown10206400::sub_10161db0(int a0)
{
    *(int *)this = 1;
    *(int *)((char *)this + 0x18) = 0;
    *(int *)((char *)this + 0x1c) = a0;
    *(int *)((char *)this + 4) = 0;
    *(int *)((char *)this + 0x14) = 0;
    *(int *)((char *)this + 0x10) = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10161dd0 size=0x53
struct CPtrArray10206430 {
	int m_00;
	int m_04;
	int m_08;
	int m_0c;
	int m_10;
	int m_nCount;	// 0x14
	void **m_ppItems;	// 0x18

	void sub_10161dd0();
};

void CPtrArray10206430::sub_10161dd0()
{
	if (m_ppItems) {
		for (int i = 0; i < m_nCount; i++) {
			if (m_ppItems[i])
				delete m_ppItems[i];
			m_ppItems[i] = 0;
		}
		delete m_ppItems;
		m_ppItems = 0;
	}
	m_04 = 0;
	m_nCount = 0;
	m_10 = 0;
}
// END FUNCTION

// FUNCTION: 0x10161fc0 size=0x1
void sub_10161fc0()
{
}
// END FUNCTION

// FUNCTION: 0x101624d0 size=0x83
#include "QuestJournal.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

struct CScopeGuard {
    CScopeGuard(const char *name)
    {
        g_101e3124[*g_101e3128].name = name;
        g_101e3124[*g_101e3128].ent = g_102de300;
        g_101e3124[*g_101e3128].extra = g_102de300;
        ++*g_101e3128;
    }
    ~CScopeGuard() { --*g_101e3128; }
};

QuestJournal *QuestJournal::sub_101624d0()
{
    m_field[0] = 0;
    m_field[1] = 0;
    m_field[2] = 0;
    m_field[3] = 0;
    m_field[4] = 0;
    m_field[5] = 0;
    m_field[6] = 0;
    m_field[7] = 0;
    m_field[8] = 0;
    m_field[9] = 0;
    CScopeGuard guard("QuestJournal::QuestJournal");
    m_flag28 = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10162650 size=0xb1
#include "QuestJournal.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];
extern char g_102cd04c[];
extern int (__cdecl *g_101e3190)(char *, int, const char *, ...);
extern const char *g_102ccf58[];

void QuestJournal::sub_10162650()
{
	g_101e3124[*g_101e3128].a = g_102cd04c;
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	++*g_101e3128;
	if (!m_flag28) {
		int (__cdecl *pfnSnprintf)(char *, int, const char *, ...) = g_101e3190;
		for (int i = 0; i < 4; i++) {
			char szFile[128];
			pfnSnprintf(szFile, 128, "%s%s.txt", "vdata\\system\\", g_102ccf58[i]);
			sub_10162870(szFile, i);
		}
		m_flag28 = 1;
	}
	--*g_101e3128;
}
// END FUNCTION

// FUNCTION: 0x10162710 size=0x123
#include "QuestJournal.h"

struct ScopeEntry_t { const char *m_pszName; const char *m_pszEnt; const char *m_pszExtra; };
extern ScopeEntry_t *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];
extern void (*g_101e30fc)(void *);

struct Completion_t
{
    int m_a0;
    void *m_p4;
    int m_a8;
    int m_ac;
    void *m_p10;
    void *m_p14;
};

void QuestJournal::sub_10162710()
{
    g_101e3124[*g_101e3128].m_pszName = "QuestJournal::PurgeQuestData";
    g_101e3124[*g_101e3128].m_pszEnt = g_102de300;
    g_101e3124[*g_101e3128].m_pszExtra = g_102de300;
    (*g_101e3128)++;
    int i = 0;
    m_flag28 = 0;
    for (i = 0; i < m_field[3]; i++) {
        operator delete(((Completion_t *)m_field[0])[i].m_p4);
        operator delete(((Completion_t *)m_field[0])[i].m_p10);
        operator delete(((Completion_t *)m_field[0])[i].m_p14);
    }
    i = 0;
    if (m_field[8] > 0) {
        int off = 0;
        do {
            operator delete(*(void **)(m_field[5] + off));
            operator delete(*(void **)(m_field[5] + off + 4));
            i++;
            off += 0x68;
        } while (i < m_field[8]);
    }
    void (*pfnFree)(void *) = g_101e30fc;
    m_field[3] = 0;
    if (m_field[2] != -1) {
        if (m_field[0]) {
            pfnFree((void *)m_field[0]);
            m_field[0] = 0;
        }
        m_field[1] = 0;
    }
    m_field[4] = m_field[0];
    {
        int *pB = &m_field[5];
        pB[3] = 0;
        if (pB[2] != -1) {
            if (pB[0]) {
                pfnFree((void *)pB[0]);
                pB[0] = 0;
            }
            pB[1] = 0;
        }
        m_field[9] = pB[0];
    }
    (*g_101e3128)--;
}
// END FUNCTION

// FUNCTION: 0x10162840 size=0x2f
#include "QuestJournal.h"

// TARGET: QuestJournal::sub_10162840
void QuestJournal::sub_10162840()
{
	int i = 0;
	if (m_field[8] > 0)
	{
		int offset = 0;
		do
		{
			*(int *)(m_field[5] + offset + 0x10) = -1;
			i++;
			*(int *)(offset + m_field[5] + 0xc) = 0;
			offset += 0x68;
		} while ((int)i < m_field[8]);
	}
}
// END FUNCTION

// FUNCTION: 0x10162f00 size=0x9e
#include "QuestJournal.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
extern void (*g_101e3140)(const char *fmt, ...);

char *QuestJournal::sub_10162f00(int index)
{
	g_101e3124[*g_101e3128].a = "QuestJournal::GetQuest";
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	++*g_101e3128;
	if (sub_10162fa0(index))
	{
		char *base = (char *)m_field[5];
		--*g_101e3128;
		return base + index * 0x68;
	}
	g_101e3140("Could not find quest!\n");
	char *base = (char *)m_field[5];
	--*g_101e3128;
	return base;
}
// END FUNCTION

// FUNCTION: 0x10162fa0 size=0x85
#include "QuestJournal.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

struct CScopeGuard {
    CScopeGuard(const char *name)
    {
        g_101e3124[*g_101e3128].name = name;
        g_101e3124[*g_101e3128].ent = g_102de300;
        g_101e3124[*g_101e3128].extra = g_102de300;
        ++*g_101e3128;
    }
    ~CScopeGuard() { --*g_101e3128; }
};

char QuestJournal::sub_10162fa0(int index)
{
    CScopeGuard guard("QuestJournal::IsQuestIndexValid");
    if (index < 0)
        return 0;
    if (index >= m_field[8])
        return 0;
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10163030 size=0x85
#include "QuestJournal.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_101e3124;
extern int *g_101e3128;
extern char g_102de300[];

struct CScopeGuard {
    CScopeGuard(const char *name)
    {
        g_101e3124[*g_101e3128].name = name;
        g_101e3124[*g_101e3128].ent = g_102de300;
        g_101e3124[*g_101e3128].extra = g_102de300;
        ++*g_101e3128;
    }
    ~CScopeGuard() { --*g_101e3128; }
};

char QuestJournal::sub_10163030(int index)
{
    CScopeGuard guard("QuestJournal::IsCompletionIndexValid");
    if (index < 0)
        return 0;
    if (index >= m_field[3])
        return 0;
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101630c0 size=0xb4
#include "QuestJournal.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
extern void (*g_101e3140)(const char *fmt, ...);

char *QuestJournal::sub_101630c0(int quest, int index)
{
    g_101e3124[*g_101e3128].a = "QuestJournal::GetCompletionStateForQuest";
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    (*g_101e3128)++;
    if (sub_10162fa0(quest) && index >= 0 && index < 20) {
        int state = ((int *)m_field[5])[index + quest * 0x1a + 5];
        char *r = sub_10163180(state);
        (*g_101e3128)--;
        return r;
    }
    g_101e3140("Could not find quest!\n");
    char *r = (char *)m_field[0];
    (*g_101e3128)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10163180 size=0x99
#include "QuestJournal.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_101e3128;
extern ScopeEntry *g_101e3124;
extern char g_102de300[];
extern void (*g_101e3140)(const char *, ...);

char *QuestJournal::sub_10163180(int index)
{
	g_101e3124[*g_101e3128].a = "QuestJournal::GetCompletionState";
	g_101e3124[*g_101e3128].b = g_102de300;
	g_101e3124[*g_101e3128].c = g_102de300;
	(*g_101e3128)++;
	if (sub_10163030(index)) {
		char *base = (char *)m_field[0];
		(*g_101e3128)--;
		return base + index * 0x18;
	}
	g_101e3140("Could not find quest completion state!\n");
	char *base = (char *)m_field[0];
	(*g_101e3128)--;
	return base;
}
// END FUNCTION

// FUNCTION: 0x10163260 size=0x2d
namespace lifted {
extern char g_102cd29c;
extern int g_105f9a0c;
extern int g_105f9a10;
extern int g_105f9a14;
}
struct CUnknown102221d0 { void * sub_10163260(); };
void * CUnknown102221d0::sub_10163260()
{
    *(int *)this = 0;
    *(int *)((char *)this + 4) = 0;
    *(int *)((char *)this + 8) = 0;
    *(int *)((char *)this + 0xc) = 0;
    *(int *)((char *)this + 0x10) = 0;
    *(char *)((char *)this + 0x14) = 0;
    lifted::g_105f9a0c = (int)&lifted::g_102cd29c;
    lifted::g_105f9a10 = (int)&lifted::g_102cd29c;
    lifted::g_105f9a14 = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10163290 size=0xb5
#include "CExperienceTable.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_101e3124;
extern int *g_101e3128;
extern char g_102cd2a4[];
extern char g_102de300[];
extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);
void CExperienceTable::sub_10163290()
{
    g_101e3124[*g_101e3128].a = g_102cd2a4;
    g_101e3124[*g_101e3128].b = g_102de300;
    g_101e3124[*g_101e3128].c = g_102de300;
    ++*g_101e3128;
    sub_10163410();
    --*g_101e3128;
    m_Size = 0;
    if (m_growSize != -1) {
        if (m_pMemory) {
            Plat_Free(m_pMemory);
            m_pMemory = 0;
        }
        m_allocationCount = 0;
    }
    m_pElements = m_pMemory;
    if (m_growSize != -1) {
        if (m_pMemory) {
            Plat_Free(m_pMemory);
            m_pMemory = 0;
        }
        m_allocationCount = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x10163410 size=0xc3
#include "CExperienceTable.h"
extern int *g_101e3128;
extern const char **g_101e3124;
extern const char g_102de300[];
extern const char g_102cd334[];
extern void (*g_101e30fc)(void *);

// TARGET: CExperienceTable::sub_10163410
void CExperienceTable::sub_10163410()
{
    g_101e3124[*g_101e3128 * 3] = g_102cd334;
    g_101e3124[*g_101e3128 * 3 + 1] = g_102de300;
    g_101e3124[*g_101e3128 * 3 + 2] = g_102de300;
    ++*g_101e3128;
    m_flag14 = 0;
    for (int i = 0; i < m_Size; i++) {
        delete (void *)m_pMemory[i].m_a;
        delete (void *)m_pMemory[i].m_b;
    }
    m_Size = 0;
    if (m_growSize != -1) {
        if (m_pMemory) {
            g_101e30fc(m_pMemory);
            m_pMemory = 0;
        }
        m_allocationCount = 0;
    }
    m_pElements = m_pMemory;
    --*g_101e3128;
}
// END FUNCTION

// FUNCTION: 0x10163600 size=0x95
#include "CExperienceTable.h"

struct ScopeEntry {
	const char *fn;
	const char *name;
	const char *extra;
};
extern ScopeEntry *g_101e3124;
extern int *g_101e3128;
extern void (*g_101e3140)(const char *, ...);
extern CExperienceAward g_105f9a0c;

CExperienceAward *CExperienceTable::sub_10163600(int index)
{
	g_101e3124[*g_101e3128].fn = "ExperienceTable::GetAward";
	g_101e3124[*g_101e3128].name = "";
	g_101e3124[*g_101e3128].extra = "";
	(*g_101e3128)++;
	if (index >= 0 && index < m_Size) {
		CExperienceAward *base = m_pMemory;
		(*g_101e3128)--;
		return &base[index];
	}
	g_101e3140("Invalid index for experience table: %d\n", index);
	(*g_101e3128)--;
	return &g_105f9a0c;
}
// END FUNCTION

// FUNCTION: 0x10163970 size=0x6a
extern void *(*g_101e3104)(void *, int);
extern void *(*g_101e3100)(int);
struct S10032fb0 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_10163970(int num);
};
// TARGET: S10032fb0::sub_10163970
void S10032fb0::sub_10163970(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 2;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_101e3104(m_pMemory, m_nAllocationCount * 0x18);
    else
        m_pMemory = g_101e3100(m_nAllocationCount * 0x18);
}
// END FUNCTION

// FUNCTION: 0x101639e0 size=0x70
struct Elem { char data[0x68]; };
struct Mem {
    Elem *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
};
extern void *(*g_101e3104)(void *, int);
extern void *(*g_101e3100)(int);

void __fastcall sub_101639e0(Mem *self, int, int num)
{
    if (self->m_nGrowSize == -1)
        return;
    int nAllocationRequested = self->m_nAllocationCount + num;
    if (self->m_nAllocationCount < nAllocationRequested) {
        int count = self->m_nAllocationCount;
        do {
            if (count != 0) {
                if (self->m_nGrowSize != 0)
                    count += self->m_nGrowSize;
                else
                    count += count;
            } else
                count = 1;
        } while (count < nAllocationRequested);
        self->m_nAllocationCount = count;
    }
    if (self->m_pMemory)
        self->m_pMemory = (Elem *)g_101e3104(self->m_pMemory, self->m_nAllocationCount * sizeof(Elem));
    else
        self->m_pMemory = (Elem *)g_101e3100(self->m_nAllocationCount * sizeof(Elem));
}
// END FUNCTION

// FUNCTION: 0x10163a50 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10163a50(int num);
};

void CUtlMemory12::sub_10163a50(int num)
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
				n = 3;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 12);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x101642d0 size=0x5
char __stdcall sub_101642d0(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101646a0 size=0x4
struct CUnknown101646a0 { int sub_101646a0(); };
int CUnknown101646a0::sub_101646a0()
{
    return *(int *)((char *)this + 0x34);
}
// END FUNCTION

// FUNCTION: 0x101666c0 size=0x1
void sub_101666c0()
{
}
// END FUNCTION

// FUNCTION: 0x101667f0 size=0x21
struct CUnkDelete101d7c90
{
    void *sub_101667f0(unsigned char flags);
};

// TARGET: sub_101667f0
void *CUnkDelete101d7c90::sub_101667f0(unsigned char flags)
{
    char *p = (char *)this;
    if (flags & 2) {
        p = p - 4;
    }
    if (flags & 1) {
        operator delete(p);
    }
    return p;
}
// END FUNCTION

// FUNCTION: 0x101668c0 size=0x4
struct CUnknown101668c0 { int sub_101668c0(); };
int CUnknown101668c0::sub_101668c0()
{
    return *(int *)((char *)this + 0x64);
}
// END FUNCTION

// FUNCTION: 0x101668d0 size=0x4
struct CUnknown101668d0 { int sub_101668d0(); };
int CUnknown101668d0::sub_101668d0()
{
    return *(int *)((char *)this + 0x68);
}
// END FUNCTION

// FUNCTION: 0x10168260 size=0x5
namespace lifted {
int sub_10168270();
}
int sub_10168260()
{
    return lifted::sub_10168270();
}
// END FUNCTION

// FUNCTION: 0x1016a690 size=0x1
void sub_1016a690()
{
}
// END FUNCTION

// FUNCTION: 0x1016a6a0 size=0x1
void sub_1016a6a0()
{
}
// END FUNCTION

// FUNCTION: 0x10170c20 size=0x1
void sub_10170c20()
{
}
// END FUNCTION

// FUNCTION: 0x10172ac0 size=0x3
char sub_10172ac0()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10174c40 size=0x1
void sub_10174c40()
{
}
// END FUNCTION

// FUNCTION: 0x101779a0 size=0x3
void __stdcall sub_101779a0(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10177a10 size=0x1
void sub_10177a10()
{
}
// END FUNCTION

// FUNCTION: 0x10177ea0 size=0x1
void sub_10177ea0()
{
}
// END FUNCTION

// FUNCTION: 0x1017a7c0 size=0x3
void __stdcall sub_1017a7c0(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1017a7e0 size=0x1
void sub_1017a7e0()
{
}
// END FUNCTION

// FUNCTION: 0x1017ac30 size=0x1
void sub_1017ac30()
{
}
// END FUNCTION

// FUNCTION: 0x1017c540 size=0x3
void __stdcall sub_1017c540(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1017c550 size=0x3
void __stdcall sub_1017c550(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1017c570 size=0x1
void sub_1017c570()
{
}
// END FUNCTION

// FUNCTION: 0x1017c650 size=0x1
void sub_1017c650()
{
}
// END FUNCTION

// FUNCTION: 0x10181b70 size=0x1
void sub_10181b70()
{
}
// END FUNCTION

// FUNCTION: 0x10182450 size=0x1
void sub_10182450()
{
}
// END FUNCTION

// FUNCTION: 0x10184500 size=0x5
namespace lifted {
int sub_10184360();
}
int sub_10184500()
{
    return lifted::sub_10184360();
}
// END FUNCTION

// FUNCTION: 0x101869b0 size=0x1
void sub_101869b0()
{
}
// END FUNCTION

// FUNCTION: 0x10186bc0 size=0x3
void __stdcall sub_10186bc0(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10187d90 size=0x3
void __stdcall sub_10187d90(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10187fc0 size=0x5
namespace lifted {
int sub_10187da0();
}
int sub_10187fc0()
{
    return lifted::sub_10187da0();
}
// END FUNCTION

// FUNCTION: 0x10189130 size=0x1
void sub_10189130()
{
}
// END FUNCTION

// FUNCTION: 0x101895d0 size=0x3
void __stdcall sub_101895d0(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101895f0 size=0x1
void sub_101895f0()
{
}
// END FUNCTION

// FUNCTION: 0x10189a20 size=0x1
void sub_10189a20()
{
}
// END FUNCTION

// FUNCTION: 0x10189be0 size=0x4
struct CUnknown10189be0 { char * sub_10189be0(); };
char * CUnknown10189be0::sub_10189be0()
{
    return (char *)this + 0x10;
}
// END FUNCTION

// FUNCTION: 0x10189bf0 size=0x4
struct CUnknown10189bf0 { char * sub_10189bf0(); };
char * CUnknown10189bf0::sub_10189bf0()
{
    return (char *)this + 0x1c;
}
// END FUNCTION

// FUNCTION: 0x10189c00 size=0x3
char sub_10189c00()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10189c10 size=0x3
char sub_10189c10()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10189c20 size=0x4
struct CUnknown10189c20 { int sub_10189c20(); };
int CUnknown10189c20::sub_10189c20()
{
    return *(int *)((char *)this + 0x28);
}
// END FUNCTION

// FUNCTION: 0x1018bcc0 size=0x5
struct CUnknown1018bcc0 { void sub_1018bcc0(); };
void CUnknown1018bcc0::sub_1018bcc0()
{
    *(char *)((char *)this + 0x5c) = 0;
}
// END FUNCTION

// FUNCTION: 0x1018c710 size=0x1
void sub_1018c710()
{
}
// END FUNCTION

// FUNCTION: 0x1018c840 size=0x3
char sub_1018c840()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1018dd90 size=0x5
namespace lifted {
int sub_101a9f00();
}
int sub_1018dd90()
{
    return lifted::sub_101a9f00();
}
// END FUNCTION

// FUNCTION: 0x1018e330 size=0x28
#include <stdarg.h>

extern "C" int __cdecl _vsnprintf(char *buffer, size_t count, const char *format, va_list argptr);

// TARGET: sub_1018e330
char *sub_1018e330(char *pBuffer, const char *pszFormat, ...)
{
    va_list args;
    va_start(args, pszFormat);
    _vsnprintf(pBuffer, 0xff, pszFormat, args);
    pBuffer[0xff] = 0;
    return pBuffer;
}
// END FUNCTION

// FUNCTION: 0x10193270 size=0x3
char sub_10193270()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10193280 size=0x3
char sub_10193280()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10197a20 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10197a20(int num);
};

// TARGET: UtlMem::sub_10197a20
void UtlMem::sub_10197a20(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x1019c230 size=0x1f
struct CUnk102a9640Obj
{
    virtual void vfunc0();
    virtual char vfunc1();
    char pad[0x28 - 4];
    float m_28;
};
struct CUnk102a9640
{
    char pad[4];
    CUnk102a9640Obj *m_4;
    float sub_1019c230();
};
float CUnk102a9640::sub_1019c230()
{
    if (m_4->vfunc1())
    {
        return 0.0f;
    }
    return m_4->m_28;
}
// END FUNCTION

// FUNCTION: 0x101a0e90 size=0x8c
#include "CUtlVector4.h"
extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUtlVector4::sub_101a0e90(int num)
{
    if (m_size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 8;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (int *)g_101e3104(m_pMemory, m_allocationCount << 2);
        else
            m_pMemory = (int *)g_101e3100(m_allocationCount << 2);
    }
    m_size += num;
    m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x101a0f20 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_101a0f20(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
}
// END FUNCTION

// FUNCTION: 0x101a0f80 size=0x3b
void sub_101a0f80(float *m)
{
    m[0] = 1.0f;
    m[1] = 0.0f;
    m[2] = 0.0f;
    m[3] = 0.0f;
    m[4] = 0.0f;
    m[5] = 1.0f;
    m[6] = 0.0f;
    m[7] = 0.0f;
    m[8] = 0.0f;
    m[9] = 0.0f;
    m[10] = 1.0f;
    m[11] = 0.0f;
    m[12] = 0.0f;
    m[13] = 0.0f;
    m[14] = 0.0f;
    m[15] = 1.0f;
}
// END FUNCTION

// FUNCTION: 0x101a0fc0 size=0x47
#include "VMatrix.h"
void sub_101a0fc0(VMatrix &dst, const Vector &t)
{
    dst.Init(1.0f, 0.0f, 0.0f, t.x,
             0.0f, 1.0f, 0.0f, t.y,
             0.0f, 0.0f, 1.0f, t.z,
             0.0f, 0.0f, 0.0f, 1.0f);
}
// END FUNCTION

// FUNCTION: 0x101a1010 size=0x46
#include "VMatrix.h"
void sub_101a1010(VMatrix &dst, const Vector &scale)
{
	dst.Init(scale.x, 0.0f, 0.0f, 0.0f,
		0.0f, scale.y, 0.0f, 0.0f,
		0.0f, 0.0f, scale.z, 0.0f,
		0.0f, 0.0f, 0.0f, 1.0f);
}
// END FUNCTION

// FUNCTION: 0x101a1210 size=0xe7
#include "VMatrix.h"

struct VPlane
{
	Vector m_Normal;
	vec_t m_Dist;
};

// TARGET: sub_101a1210
VMatrix sub_101a1210(const Vector &vOrigin, const VPlane &thePlane)
{
	vec_t dot;
	VMatrix mRet;

	#define PN thePlane.m_Normal
	#define PD thePlane.m_Dist;

		dot = PN[0]*vOrigin.x + PN[1]*vOrigin.y + PN[2]*vOrigin.z - PD;

		mRet.m[0][0] = dot - vOrigin.x * PN[0];
		mRet.m[0][1] = -vOrigin.x * PN[1];
		mRet.m[0][2] = -vOrigin.x * PN[2];
		mRet.m[0][3] = -vOrigin.x * -PD;

		mRet.m[1][0] = -vOrigin.y * PN[0];
		mRet.m[1][1] = dot - vOrigin.y * PN[1];
		mRet.m[1][2] = -vOrigin.y * PN[2];
		mRet.m[1][3] = -vOrigin.y * -PD;

		mRet.m[2][0] = -vOrigin.z * PN[0];
		mRet.m[2][1] = -vOrigin.z * PN[1];
		mRet.m[2][2] = dot - vOrigin.z * PN[2];
		mRet.m[2][3] = -vOrigin.z * -PD;

		mRet.m[3][0] = -PN[0];
		mRet.m[3][1] = -PN[1];
		mRet.m[3][2] = -PN[2];
		mRet.m[3][3] = dot + PD;

	#undef PN
	#undef PD

	return mRet;
}
// END FUNCTION

// FUNCTION: 0x101a1410 size=0x2e
#include "VMatrix.h"
// TARGET: sub_101a1410
void sub_101a2430(int a, VMatrix *pOut);

VMatrix sub_101a1410(int a)
{
    VMatrix m;
    sub_101a2430(a, &m);
    return m;
}
// END FUNCTION

// FUNCTION: 0x101a1470 size=0xd3
#include "Vector.h"

struct SPlane
{
	Vector m_Normal;
	float m_Dist;
};

struct SVMatrix
{
	float m[4][4];

	void Init(float m00, float m01, float m02, float m03,
		float m10, float m11, float m12, float m13,
		float m20, float m21, float m22, float m23,
		float m30, float m31, float m32, float m33)
	{
		m[0][0] = m00; m[0][1] = m01; m[0][2] = m02; m[0][3] = m03;
		m[1][0] = m10; m[1][1] = m11; m[1][2] = m12; m[1][3] = m13;
		m[2][0] = m20; m[2][1] = m21; m[2][2] = m22; m[2][3] = m23;
		m[3][0] = m30; m[3][1] = m31; m[3][2] = m32; m[3][3] = m33;
	}

	bool sub_101a1950(SVMatrix &dst);
	Vector GetTranslation() const { return Vector(m[0][3], m[1][3], m[2][3]); }
};

bool sub_101a1470(const SPlane &vp1, const SPlane &vp2, const SPlane &vp3, Vector &vOut)
{
	SVMatrix mMat, mInverse;
	mMat.Init(
		vp1.m_Normal.x, vp1.m_Normal.y, vp1.m_Normal.z, -vp1.m_Dist,
		vp2.m_Normal.x, vp2.m_Normal.y, vp2.m_Normal.z, -vp2.m_Dist,
		vp3.m_Normal.x, vp3.m_Normal.y, vp3.m_Normal.z, -vp3.m_Dist,
		0.0f, 0.0f, 0.0f, 1.0f);
	if (mMat.sub_101a1950(mInverse)) {
		vOut = Vector(mInverse.m[0][3], mInverse.m[1][3], mInverse.m[2][3]);
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x101a1550 size=0xfa
// TARGET: VMatrix::sub_101a1550
#include "VMatrix.h"

struct VPlane
{
	Vector m_Normal;
	float m_Dist;
};

inline Vector VMatrixApplyRotation(const VMatrix &mat, const Vector &vVec)
{
	return Vector(
		mat.m[0][0] * vVec.x + mat.m[0][1] * vVec.y + mat.m[0][2] * vVec.z,
		mat.m[1][0] * vVec.x + mat.m[1][1] * vVec.y + mat.m[1][2] * vVec.z,
		mat.m[2][0] * vVec.x + mat.m[2][1] * vVec.y + mat.m[2][2] * vVec.z);
}

inline Vector VMatrixMulVector(const VMatrix &mat, const Vector &vVec)
{
	return Vector(
		mat.m[0][0] * vVec.x + mat.m[0][1] * vVec.y + mat.m[0][2] * vVec.z + mat.m[0][3],
		mat.m[1][0] * vVec.x + mat.m[1][1] * vVec.y + mat.m[1][2] * vVec.z + mat.m[1][3],
		mat.m[2][0] * vVec.x + mat.m[2][1] * vVec.y + mat.m[2][2] * vVec.z + mat.m[2][3]);
}

inline float PlaneDot(const Vector &a, const Vector &b)
{
	return a.y * b.y + (a.x * b.x + a.z * b.z);
}

inline void TransformPlane(const VMatrix &mat, const VPlane &inPlane, VPlane &outPlane)
{
	outPlane.m_Normal = VMatrixApplyRotation(mat, inPlane.m_Normal);
	outPlane.m_Dist = PlaneDot(outPlane.m_Normal, VMatrixMulVector(mat, inPlane.m_Normal * inPlane.m_Dist));
}

VPlane VMatrix::sub_101a1550(const VPlane &thePlane) const
{
	VPlane ret;
	TransformPlane(*this, thePlane, ret);
	return ret;
}
// END FUNCTION

// FUNCTION: 0x101a1650 size=0x67
struct CBlock64_t {
	int d[16];
	// TARGET: CBlock64_t::sub_101a1650
	CBlock64_t *sub_101a1650(const CBlock64_t *o);
};

CBlock64_t *CBlock64_t::sub_101a1650(const CBlock64_t *o)
{
	d[0] = o->d[0]; d[1] = o->d[1]; d[2] = o->d[2]; d[3] = o->d[3];
	d[4] = o->d[4]; d[5] = o->d[5]; d[6] = o->d[6]; d[7] = o->d[7];
	d[8] = o->d[8]; d[9] = o->d[9]; d[10] = o->d[10]; d[11] = o->d[11];
	d[12] = o->d[12]; d[13] = o->d[13]; d[14] = o->d[14]; d[15] = o->d[15];
	return this;
}
// END FUNCTION

// FUNCTION: 0x101a1b20 size=0xbe
#include "VMatrix.h"

struct VMatrixInv : VMatrix
{
	Vector GetTranslation() const { return Vector(m[0][3], m[1][3], m[2][3]); }
	void SetTranslation(const Vector &vTrans) { m[0][3] = vTrans.x; m[1][3] = vTrans.y; m[2][3] = vTrans.z; }
	Vector VMul3x3(const Vector &vVec) const
	{
		return Vector(
			m[0][0]*vVec.x + m[0][1]*vVec.y + m[0][2]*vVec.z,
			m[1][0]*vVec.x + m[1][1]*vVec.y + m[1][2]*vVec.z,
			m[2][0]*vVec.x + (m[2][1]*vVec.y + m[2][2]*vVec.z));
	}
};

void VMatrix::sub_101a1b20(VMatrix &ret) const
{
	ret.m[0][0] = m[0][0];  ret.m[0][1] = m[1][0]; ret.m[0][2] = m[2][0];
	ret.m[1][0] = m[0][1];  ret.m[1][1] = m[1][1]; ret.m[1][2] = m[2][1];
	ret.m[2][0] = m[0][2];  ret.m[2][1] = m[1][2]; ret.m[2][2] = m[2][2];

	((VMatrixInv &)ret).SetTranslation(-((VMatrixInv &)ret).VMul3x3(((const VMatrixInv *)this)->GetTranslation()));

	ret.m[3][0] = ret.m[3][1] = ret.m[3][2] = 0.0f;
	ret.m[3][3] = 1.0f;
}
// END FUNCTION

// FUNCTION: 0x101a1be0 size=0x28
#include "VMatrix.h"

VMatrix VMatrix::sub_101a1be0() const
{
    VMatrix ret;
    sub_101a1b20(ret);
    return ret;
}
// END FUNCTION

// FUNCTION: 0x101a1c10 size=0x2b
#include "VMatrix.h"
struct CBlock64_t { char b[64]; CBlock64_t *sub_101a1650(const CBlock64_t *); };
struct VMatrixUnit : VMatrix { void sub_101a1950(VMatrix *q); };
void __cdecl sub_101a1c10(VMatrix *src, VMatrix *dst)
{
	((VMatrixUnit *)src)->sub_101a1950(dst);
	VMatrix tmp;
	((CBlock64_t *)dst)->sub_101a1650((CBlock64_t *)dst->sub_101a1f60(tmp));
}
// END FUNCTION

// FUNCTION: 0x101a1d40 size=0x18
struct CUnk1024d7b0 {
    char pad4[4];
    float m_4;
    char pad8[0x14 - 8];
    float m_14;
    char pad18[0x24 - 0x18];
    float m_24;
    float *sub_101a1d40(float *out);
};

float *CUnk1024d7b0::sub_101a1d40(float *out)
{
    float z = m_24;
    float y = m_14;
    float x = m_4;
    out[0] = x;
    out[1] = y;
    out[2] = z;
    return out;
}
// END FUNCTION

// FUNCTION: 0x101a1d60 size=0x18
struct CUnk1024d7e0 {
    char pad4[8];
    float m_8;
    char pad8[0x18 - 0xc];
    float m_18;
    char pad18[0x28 - 0x1c];
    float m_28;
    float *sub_101a1d60(float *out);
};

float *CUnk1024d7e0::sub_101a1d60(float *out)
{
    float z = m_28;
    float y = m_18;
    float x = m_8;
    out[0] = x;
    out[1] = y;
    out[2] = z;
    return out;
}
// END FUNCTION

// FUNCTION: 0x101a2290 size=0x157
#include "QAngle.h"
#include "VMatrix.h"
#include "Vector.h"

#define M_PI		3.14159265358979323846
#define M_PI_F		((float)(M_PI))
#define DEG2RAD( x  )  ( (float)(x) * (float)(M_PI_F / 180.f) )
#define PITCH 0
#define YAW 1
#define ROLL 2

void inline SinCos( float radians, float *sine, float *cosine )
{
	_asm
	{
		fld		DWORD PTR [radians]
		fsincos

		mov edx, DWORD PTR [cosine]
		mov eax, DWORD PTR [sine]

		fstp DWORD PTR [edx]
		fstp DWORD PTR [eax]
	}
}

void VMatrix::sub_101a2290( const Vector &origin, const QAngle &vAngles )
{
	float		sr, sp, sy, cr, cp, cy;

	SinCos( DEG2RAD( vAngles[YAW] ), &sy, &cy );
	SinCos( DEG2RAD( vAngles[PITCH] ), &sp, &cp );
	SinCos( DEG2RAD( vAngles[ROLL] ), &sr, &cr );

	// matrix = (YAW * PITCH) * ROLL
	m[0][0] = cp*cy;
	m[1][0] = cp*sy;
	m[2][0] = -sp;
	m[0][1] = sr*sp*cy+cr*-sy;
	m[1][1] = sr*sp*sy+cr*cy;
	m[2][1] = sr*cp;
	m[0][2] = (cr*sp*cy+-sr*-sy);
	m[1][2] = (cr*sp*sy+-sr*cy);
	m[2][2] = cr*cp;
	m[0][3] = 0.f;
	m[1][3] = 0.f;
	m[2][3] = 0.f;
	
	// Add translation
	m[0][3] = origin.x;
	m[1][3] = origin.y;
	m[2][3] = origin.z;
	m[3][0] = 0.0f;
	m[3][1] = 0.0f;
	m[3][2] = 0.0f;
	m[3][3] = 1.0f;
}
// END FUNCTION

// FUNCTION: 0x101a23f0 size=0x3b
void sub_101a23f0(float *m)
{
    m[0] = 1.0f;
    m[1] = 0.0f;
    m[2] = 0.0f;
    m[3] = 0.0f;
    m[4] = 0.0f;
    m[5] = 1.0f;
    m[6] = 0.0f;
    m[7] = 0.0f;
    m[8] = 0.0f;
    m[9] = 0.0f;
    m[10] = 1.0f;
    m[11] = 0.0f;
    m[12] = 0.0f;
    m[13] = 0.0f;
    m[14] = 0.0f;
    m[15] = 1.0f;
}
// END FUNCTION

// FUNCTION: 0x101a2450 size=0xc4
#include <math.h>
struct mat34_1024e030 { float m[3][4]; float *operator[](int i) { return m[i]; } const float *operator[](int i) const { return m[i]; } };
struct ang_1024e030 { float x, y, z; float &operator[](int i) { return ((float *)this)[i]; } };

#define M_PI_F_1024e030 ((float)(3.14159265358979323846))
#define RAD2DEG_1024e030(x) ((float)(x) * (float)(180.f / M_PI_F_1024e030))

void sub_101a2450(const mat34_1024e030 &matrix, ang_1024e030 &angles)
{
	float forward[3];
	float left[3];
	float up[3];

	forward[0] = matrix[0][0];
	forward[1] = matrix[1][0];
	forward[2] = matrix[2][0];
	left[0] = matrix[0][1];
	left[1] = matrix[1][1];
	left[2] = matrix[2][1];
	up[2] = matrix[2][2];

	float xyDist = (float)sqrt(forward[0] * forward[0] + forward[1] * forward[1]);
	if (xyDist > 0.001f)
	{
		angles[1] = RAD2DEG_1024e030((float)atan2(forward[1], forward[0]));
		angles[0] = RAD2DEG_1024e030((float)atan2(-forward[2], xyDist));
		angles[2] = RAD2DEG_1024e030((float)atan2(left[2], up[2]));
	}
	else
	{
		angles[1] = RAD2DEG_1024e030((float)atan2(-left[0], left[1]));
		angles[0] = RAD2DEG_1024e030((float)atan2(-forward[2], xyDist));
		angles[2] = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x101a2520 size=0xb4
struct S1024e140Matrix
{
	float m[4][4];
};

static inline void SwapFloat(float &a, float &b)
{
	float tmp = a;
	a = b;
	b = tmp;
}

void sub_101a2520(const S1024e140Matrix &src, S1024e140Matrix &dst)
{
	if (&src == &dst) {
		SwapFloat(dst.m[0][1], dst.m[1][0]);
		SwapFloat(dst.m[0][2], dst.m[2][0]);
		SwapFloat(dst.m[0][3], dst.m[3][0]);
		SwapFloat(dst.m[1][2], dst.m[2][1]);
		SwapFloat(dst.m[1][3], dst.m[3][1]);
		SwapFloat(dst.m[2][3], dst.m[3][2]);
	} else {
		dst.m[0][0] = src.m[0][0];
		dst.m[0][1] = src.m[1][0];
		dst.m[0][2] = src.m[2][0];
		dst.m[0][3] = src.m[3][0];
		dst.m[1][0] = src.m[0][1];
		dst.m[1][1] = src.m[1][1];
		dst.m[1][2] = src.m[2][1];
		dst.m[1][3] = src.m[3][1];
		dst.m[2][0] = src.m[0][2];
		dst.m[2][1] = src.m[1][2];
		dst.m[2][2] = src.m[2][2];
		dst.m[2][3] = src.m[3][2];
		dst.m[3][0] = src.m[0][3];
		dst.m[3][1] = src.m[1][3];
		dst.m[3][2] = src.m[2][3];
		dst.m[3][3] = src.m[3][3];
	}
}
// END FUNCTION

// FUNCTION: 0x101a25e0 size=0x18
#include <string.h>

void sub_101a25e0(void *src, void *dst)
{
    if (src != dst)
    {
        memcpy(dst, src, 64);
    }
}
// END FUNCTION

// FUNCTION: 0x101a2600 size=0x264
#include "Vector.h"
#include <string.h>

class VM
{
public:
	VM();
	float* operator[](int i) { return m[i]; }
	float const* operator[](int i) const { return m[i]; }
	float m[4][4];
};
inline VM::VM()
{
}

#pragma auto_inline(off)
namespace block_1024e260 {
void sub_101a25e0( const VM& src, VM& dst )
{
	if (&src != &dst)
	{
		memcpy( dst.m, src.m, 16 * sizeof(float) );
	}
}
}
using namespace block_1024e260;

void sub_101a2600( const VM& src1, const VM& src2, VM& dst )
{
	// Make sure it works if src1 == dst or src2 == dst
	VM tmp1, tmp2;
	const VM& s1 = (&src1 == &dst) ? tmp1 : src1;
	const VM& s2 = (&src2 == &dst) ? tmp2 : src2;

	if (&src1 == &dst)
	{
		sub_101a25e0( src1, tmp1 );
	}
	if (&src2 == &dst)
	{
		sub_101a25e0( src2, tmp2 );
	}

	dst[0][0] = s1[0][0] * s2[0][0] + s1[0][1] * s2[1][0] + s1[0][2] * s2[2][0] + s1[0][3] * s2[3][0];
	dst[0][1] = s1[0][0] * s2[0][1] + s1[0][1] * s2[1][1] + s1[0][2] * s2[2][1] + s1[0][3] * s2[3][1];
	dst[0][2] = s1[0][0] * s2[0][2] + s1[0][1] * s2[1][2] + s1[0][2] * s2[2][2] + s1[0][3] * s2[3][2];
	dst[0][3] = s1[0][0] * s2[0][3] + s1[0][1] * s2[1][3] + s1[0][2] * s2[2][3] + s1[0][3] * s2[3][3];

	dst[1][0] = s1[1][0] * s2[0][0] + s1[1][1] * s2[1][0] + s1[1][2] * s2[2][0] + s1[1][3] * s2[3][0];
	dst[1][1] = s1[1][0] * s2[0][1] + s1[1][1] * s2[1][1] + s1[1][2] * s2[2][1] + s1[1][3] * s2[3][1];
	dst[1][2] = s1[1][0] * s2[0][2] + s1[1][1] * s2[1][2] + s1[1][2] * s2[2][2] + s1[1][3] * s2[3][2];
	dst[1][3] = s1[1][0] * s2[0][3] + s1[1][1] * s2[1][3] + s1[1][2] * s2[2][3] + s1[1][3] * s2[3][3];

	dst[2][0] = s1[2][0] * s2[0][0] + s1[2][1] * s2[1][0] + s1[2][2] * s2[2][0] + s1[2][3] * s2[3][0];
	dst[2][1] = s1[2][0] * s2[0][1] + s1[2][1] * s2[1][1] + s1[2][2] * s2[2][1] + s1[2][3] * s2[3][1];
	dst[2][2] = s1[2][0] * s2[0][2] + s1[2][1] * s2[1][2] + s1[2][2] * s2[2][2] + s1[2][3] * s2[3][2];
	dst[2][3] = s1[2][0] * s2[0][3] + s1[2][1] * s2[1][3] + s1[2][2] * s2[2][3] + s1[2][3] * s2[3][3];

	dst[3][0] = s1[3][0] * s2[0][0] + s1[3][1] * s2[1][0] + s1[3][2] * s2[2][0] + s1[3][3] * s2[3][0];
	dst[3][1] = s1[3][0] * s2[0][1] + s1[3][1] * s2[1][1] + s1[3][2] * s2[2][1] + s1[3][3] * s2[3][1];
	dst[3][2] = s1[3][0] * s2[0][2] + s1[3][1] * s2[1][2] + s1[3][2] * s2[2][2] + s1[3][3] * s2[3][2];
	dst[3][3] = s1[3][0] * s2[0][3] + s1[3][1] * s2[1][3] + s1[3][2] * s2[2][3] + s1[3][3] * s2[3][3];
}
// END FUNCTION

// FUNCTION: 0x101a2870 size=0xba
struct S1024e570Vec4
{
	float x, y, z, w;
	S1024e570Vec4() {}
	float operator[](int i) const { return (&x)[i]; }
	float &operator[](int i) { return (&x)[i]; }
};

struct S1024e570Matrix
{
	float m[4][4];
	inline float *operator[](int i) { return m[i]; }
	inline const float *operator[](int i) const { return m[i]; }
};

void sub_101a2870(const S1024e570Matrix &src1, const S1024e570Vec4 &src2, S1024e570Vec4 &dst)
{
	S1024e570Vec4 tmp;
	const S1024e570Vec4 &v = (&src2 == &dst) ? tmp : src2;

	if (&src2 == &dst)
	{
		tmp = src2;
	}

	dst[0] = src1[0][0] * v[0] + src1[0][1] * v[1] + src1[0][2] * v[2] + src1[0][3] * v[3];
	dst[1] = src1[1][0] * v[0] + src1[1][1] * v[1] + src1[1][2] * v[2] + src1[1][3] * v[3];
	dst[2] = src1[2][0] * v[0] + src1[2][1] * v[1] + src1[2][2] * v[2] + src1[2][3] * v[3];
	dst[3] = src1[3][0] * v[0] + src1[3][1] * v[1] + src1[3][2] * v[2] + src1[3][3] * v[3];
}
// END FUNCTION

// FUNCTION: 0x101a2930 size=0x7b
#include "Vector.h"
#include "VMatrix.h"

void sub_101a2930(const VMatrix &src1, const Vector &src2, Vector &dst)
{
	// Make sure it works if src2 == dst
	Vector tmp;
	const Vector &v = (&src2 == &dst) ? tmp : src2;

	if( &src2 == &dst )
	{
		VectorCopy( src2, tmp );
	}

	dst[0] = src1[0][0] * v[0] + src1[0][1] * v[1] + src1[0][2] * v[2];
	dst[1] = src1[1][0] * v[0] + src1[1][1] * v[1] + src1[1][2] * v[2];
	dst[2] = src1[2][0] * v[0] + src1[2][1] * v[1] + src1[2][2] * v[2];
}
// END FUNCTION

// FUNCTION: 0x101a29b0 size=0xc6
#include "VMatrix.h"

class Vector4D
{
public:
	float x, y, z, w;
	float &operator[](int i) { return ((float *)this)[i]; }
	float operator[](int i) const { return ((float *)this)[i]; }
};

inline void Vector4DCopy(const Vector4D &src, Vector4D &dst)
{
	dst.x = src.x;
	dst.y = src.y;
	dst.z = src.z;
	dst.w = src.w;
}

void sub_101a29b0(const VMatrix &src1, const Vector4D &src2, Vector4D &dst)
{
	bool srcEqualsDst = (&src2 == &dst);

	Vector4D tmp;
	const Vector4D &v = srcEqualsDst ? tmp : src2;

	if (srcEqualsDst)
	{
		Vector4DCopy(src2, tmp);
	}

	dst[0] = src1[0][0] * v[0] + (src1[1][0] * v[1] + src1[3][0] * v[3] + src1[2][0] * v[2]);
	dst[1] = src1[0][1] * v[0] + (src1[1][1] * v[1] + src1[3][1] * v[3] + src1[2][1] * v[2]);
	dst[2] = src1[0][2] * v[0] + (src1[1][2] * v[1] + src1[3][2] * v[3] + src1[2][2] * v[2]);
	dst[3] = src1[0][3] * v[0] + (src1[1][3] * v[1] + src1[3][3] * v[3] + src1[2][3] * v[2]);
}
// END FUNCTION

// FUNCTION: 0x101a2a80 size=0x80
#include "Vector.h"
#include "VMatrix.h"

void sub_101a2a80(const VMatrix &src1, const Vector &src2, Vector &dst)
{
	// Make sure it works if src2 == dst
	bool srcEqualsDst = (&src2 == &dst);

	Vector tmp;
	const Vector &v = srcEqualsDst ? tmp : src2;

	if (srcEqualsDst)
	{
		VectorCopy(src2, tmp);
	}

	dst[0] = src1[0][0] * v[0] + src1[1][0] * v[1] + src1[2][0] * v[2];
	dst[1] = src1[0][1] * v[0] + src1[1][1] * v[1] + src1[2][1] * v[2];
	dst[2] = src1[0][2] * v[0] + src1[1][2] * v[1] + src1[2][2] * v[2];
}
// END FUNCTION

// FUNCTION: 0x101a2b00 size=0x25
void sub_101a23f0(void *p);

// TARGET: sub_101a2b00
void sub_101a2b00(int *p, int a, int b, int c)
{
    sub_101a23f0(p);
    p[3] = a;
    p[7] = b;
    p[11] = c;
}
// END FUNCTION

// FUNCTION: 0x101a2b60 size=0x112
#include <math.h>
#include "Vector.h"
#include "VMatrix.h"

void sub_101a2b60(VMatrix &dst, const Vector &v, float angleDegrees)
{
	float radians = angleDegrees * (3.14159265358979323846 / 180.0);
	float fSin = (float)sin(radians);
	float fCos = (float)cos(radians);
	float axisXSquared = v[0] * v[0];
	float axisYSquared = v[1] * v[1];
	float axisZSquared = v[2] * v[2];

	dst[0][0] = axisXSquared + (1 - axisXSquared) * fCos;
	dst[1][0] = v[0] * v[1] * (1 - fCos) + v[2] * fSin;
	dst[2][0] = v[2] * v[0] * (1 - fCos) - v[1] * fSin;
	dst[3][0] = 0;

	dst[0][1] = v[0] * v[1] * (1 - fCos) - v[2] * fSin;
	dst[1][1] = axisYSquared + (1 - axisYSquared) * fCos;
	dst[2][1] = v[1] * v[2] * (1 - fCos) + v[0] * fSin;
	dst[3][1] = 0;

	dst[0][2] = v[2] * v[0] * (1 - fCos) + v[1] * fSin;
	dst[1][2] = v[1] * v[2] * (1 - fCos) - v[0] * fSin;
	dst[2][2] = axisZSquared + (1 - axisZSquared) * fCos;
	dst[3][2] = 0;

	dst[0][3] = 0;
	dst[1][3] = 0;
	dst[2][3] = 0;
	dst[3][3] = 1;
}
// END FUNCTION

// FUNCTION: 0x101a2e30 size=0x59
#include "VMatrix.h"
#include <math.h>
void sub_101a2e30(VMatrix &dst, float angle)
{
	angle = angle * 0.017453292519943295;
	float sinA = sin(angle);
	float cosA = cos(angle);
	dst[0][0] = cosA;
	dst[0][1] = -sinA;
	dst[0][2] = 0;
	dst[0][3] = 0;
	dst[1][0] = sinA;
	dst[1][1] = cosA;
	dst[1][2] = 0;
	dst[1][3] = 0;
	dst[2][0] = 0;
	dst[2][1] = 0;
	dst[2][2] = 1;
	dst[2][3] = 0;
	dst[3][0] = 0;
	dst[3][1] = 0;
	dst[3][2] = 0;
	dst[3][3] = 1;
}
// END FUNCTION

// FUNCTION: 0x101a2e90 size=0x46
#include "VMatrix.h"
void sub_101a2e90(VMatrix &dst, float x, float y, float z)
{
	dst[0][0] = x; dst[0][1] = 0.0f; dst[0][2] = 0.0f; dst[0][3] = 0.0f;
	dst[1][1] = y; dst[1][0] = 0.0f; dst[1][2] = 0.0f; dst[1][3] = 0.0f;
	dst[2][0] = 0.0f; dst[2][1] = 0.0f; dst[2][2] = z; dst[2][3] = 0.0f;
	dst[3][0] = 0.0f; dst[3][1] = 0.0f; dst[3][2] = 0.0f; dst[3][3] = 1.0f;
}
// END FUNCTION

// FUNCTION: 0x101a2ee0 size=0x1d
void sub_101a2e90(void *m, float a, float b, float c);

// TARGET: sub_101a2ee0
void __cdecl sub_101a2ee0(void *m, const float *v)
{
	sub_101a2e90(m, v[0], v[1], v[2]);
}
// END FUNCTION

// FUNCTION: 0x101a2f30 size=0x5
namespace lifted {
int sub_101a3000();
}
int sub_101a2f30()
{
    return lifted::sub_101a3000();
}
// END FUNCTION

// FUNCTION: 0x101a3900 size=0xe7
#include "CUnknown10258b00.h"

void sub_101a3900(CUnknown10258b00 *p)
{
	int i;
	int j;
	for (i = 0; i < 2; i++) {
		CUnknown10258b00_A *a = &p->m_A[i];
		a->m_b14 = 0;
		a->m_b118 = 0;
		a->m_b198 = 0;
		a->m_n114 = -1;
		a->m_n00 = -1;
		a->m_n08 = 0;
		a->m_n0c = 0;
		a->m_f10 = 1.0f;
	}
	for (i = 0; i < 3; i++) {
		CUnknown10258b00_B *b = &p->m_B[i];
		b->m_nIndex = i;
		b->m_b04 = 0;
		b->m_n104 = -1;
		b->m_n108 = -1;
		b->m_n25c = -1;
		b->m_n10c = -1;
		for (j = 0; j < 2; j++) {
			CUnknown10258b00_C *c = &b->m_C[j];
			c->m_n00 = 0;
			c->m_b04 = 0;
			c->m_n84 = 0;
		}
		b->m_n3c0 = 0;
	}
	p->m_n24d0 = -1;
	p->m_n25e0 = -1;
	p->m_n2664 = -1;
	p->m_n2554 = -2;
	for (i = 0; i < 5; i++)
		p->m_aTail[i] = 0;
	p->m_n4fe84 = 0;
}
// END FUNCTION

// FUNCTION: 0x101a3de0 size=0xcc
struct SKeyValues
{
    virtual const char *GetName();
    virtual void v1(); virtual void v2(); virtual void v3();
    virtual SKeyValues *GetFirstSubKey();
    virtual void v5();
    virtual SKeyValues *FindKey(const char *name);
    virtual SKeyValues *GetNextKey();
    virtual void Begin();
    virtual void End();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual const char *GetString(const char *key, const char *def);
};

extern const char *g_102d68f8[4];
extern const char g_102de300[];
int sub_101e28e0(const char *, const char *);

// TARGET: sub_101a3de0
bool sub_101a3de0(SKeyValues *kv, char *out, const char *name)
{
    if (kv) {
        kv->Begin();
        SKeyValues *sub = kv->FindKey(name);
        if (sub) {
            int *entry = (int *)out;
            int i = 0;
            do {
                if (i >= 2) {
                    kv->End();
                    return false;
                }
                SKeyValues *child = sub->GetFirstSubKey();
                if (child) {
                    for (int j = 0; j < 4; j++) {
                        if (sub_101e28e0(child->GetName(), g_102d68f8[j]) == 0) {
                            entry[0] = j;
                            break;
                        }
                    }
                    const char *s = child->GetString(0, g_102de300);
                    char *d = (char *)entry + 4;
                    char c;
                    do {
                        c = *s++;
                        *d++ = c;
                    } while (c);
                }
                sub = sub->GetNextKey();
                i++;
                entry += 0x22;
            } while (sub);
        }
        kv->End();
        return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x101a4770 size=0x26
extern char g_10619980[];
extern char *g_1061993c;

// TARGET: sub_101a4770
void *sub_101a4770(unsigned short index)
{
	if (index == 0xffff)
		return g_10619980;
	return g_1061993c + index * 0x5f324 + 0xc;
}
// END FUNCTION

// FUNCTION: 0x101a5a50 size=0x24
extern int g_1061993c;

// TARGET: sub_101a5a50
int sub_101a5a50(unsigned int index)
{
    if (index == 0xffff)
        return 0;
    return (index & 0xffff) * 0x5f324 + g_1061993c + 0xc;
}
// END FUNCTION

// FUNCTION: 0x101a5a80 size=0x1
void sub_101a5a80()
{
}
// END FUNCTION

// FUNCTION: 0x101a6780 size=0x10b
#include "utlrbtree.h"
#include "CUtlRBTreeBig.h"

unsigned short CUtlRBTreeBig::sub_101a6780(const void *search)
{
    unsigned short current = m_Root;
    while (current != InvalidIndex()) {
        if (m_LessFunc(search, m_pElements[current].m_Data))
            current = Links(current).m_Left;
        else if (m_LessFunc(m_pElements[current].m_Data, search))
            current = Links(current).m_Right;
        else
            break;
    }
    return current;
}
// END FUNCTION

// FUNCTION: 0x101a6a00 size=0x10e
#include "utlrbtree.h"
#include "CUtlRBTreeBig.h"

void CUtlRBTreeBig::sub_101a6a00(const void *insert, unsigned short &parent, bool &leftchild)
{
    unsigned short current = m_Root;
    parent = InvalidIndex();
    leftchild = false;
    while (current != InvalidIndex()) {
        parent = current;
        if (m_LessFunc(insert, m_pElements[current].m_Data)) {
            leftchild = true;
            current = Links(current).m_Left;
        } else {
            leftchild = false;
            current = Links(current).m_Right;
        }
    }
}
// END FUNCTION

// FUNCTION: 0x101a6b10 size=0x24
#include <string.h>
// TARGET: sub_101a6b10
void sub_101a6b10(unsigned short *dst, unsigned short *src)
{
    if (dst) {
        *dst = *src;
        memcpy((char *)dst + 4, (char *)src + 4, 0x17cc6 * 4);
    }
}
// END FUNCTION

// FUNCTION: 0x101a6ba0 size=0x559
#include "utlrbtree.h"
#include "CUtlRBTreeBig.h"

// TARGET: CUtlRBTreeBig::sub_101a6ba0
void CUtlRBTreeBig::sub_101a6ba0(unsigned short elem)
{
	while (elem != m_Root && Color(Parent(elem)) == 0) {
		unsigned short parent = Parent(elem);
		unsigned short grandparent = Parent(parent);

		if (LeftChild(Parent(parent)) == parent) {
			unsigned short uncle = RightChild(grandparent);
			if (Color(uncle) == 0) {
				SetColor(parent, 1);
				SetColor(uncle, 1);
				SetColor(grandparent, 0);
				elem = grandparent;
			} else {
				if (RightChild(Parent(elem)) == elem) {
					elem = parent;
					RotLeft(elem);
					parent = Parent(elem);
					grandparent = Parent(parent);
				}
				SetColor(parent, 1);
				SetColor(grandparent, 0);
				RotRight(grandparent);
			}
		} else {
			unsigned short uncle = LeftChild(grandparent);
			if (Color(uncle) == 0) {
				SetColor(parent, 1);
				SetColor(uncle, 1);
				SetColor(grandparent, 0);
				elem = grandparent;
			} else {
				if (LeftChild(Parent(elem)) == elem) {
					elem = parent;
					RotRight(parent);
					parent = Parent(elem);
					grandparent = Parent(parent);
				}
				SetColor(parent, 1);
				SetColor(grandparent, 0);
				sub_101a7290(grandparent);
			}
		}
	}
	SetColor(m_Root, 1);
}
// END FUNCTION

// FUNCTION: 0x101a7100 size=0xbf
#include "utlrbtree.h"
#include "CUtlRBTreeBig.h"

bool CUtlRBTreeBig::sub_101a7100(unsigned short i) const
{
    return Links(Links(i).m_Parent).m_Left == i;
}
// END FUNCTION

// FUNCTION: 0x101a71c0 size=0xc1
#include "utlrbtree.h"
#include "CUtlRBTreeBig.h"

bool CUtlRBTreeBig::sub_101a71c0(unsigned short i) const
{
    return Links(Links(i).m_Parent).m_Right == i;
}
// END FUNCTION

// FUNCTION: 0x101a7290 size=0x1c7
#include "utlrbtree.h"
#include "CUtlRBTreeBig.h"
void CUtlRBTreeBig::sub_101a7290(unsigned short elem)
{
	unsigned short rightchild = sub_101a6b40(elem).m_Right;
	unsigned short left = sub_101a6b40(rightchild).m_Left;
	m_pElements[elem].m_Links.m_Right = left;
	if (sub_101a6b40(rightchild).m_Left != InvalidIndex())
		SetParent(sub_101a6b40(rightchild).m_Left, elem);

	if (rightchild != InvalidIndex())
		m_pElements[rightchild].m_Links.m_Parent = sub_101a6b40(elem).m_Parent;
	if (elem != m_Root) {
		if (Links(sub_101a6b40(elem).m_Parent).m_Left == elem)
			m_pElements[Links(elem).m_Parent].m_Links.m_Left = rightchild;
		else
			m_pElements[Links(elem).m_Parent].m_Links.m_Right = rightchild;
	} else
		m_Root = rightchild;

	m_pElements[rightchild].m_Links.m_Left = elem;
	if (elem != InvalidIndex())
		m_pElements[elem].m_Links.m_Parent = rightchild;
}
// END FUNCTION

// FUNCTION: 0x101a8c90 size=0x1
void sub_101a8c90()
{
}
// END FUNCTION

// FUNCTION: 0x101aa220 size=0x4
struct CUnknown101aa220 { int sub_101aa220(); };
int CUnknown101aa220::sub_101aa220()
{
    return *(int *)((char *)this + 8);
}
// END FUNCTION

// FUNCTION: 0x101ab460 size=0x4
struct CUnknown101ab460 { int sub_101ab460(); };
int CUnknown101ab460::sub_101ab460()
{
    return *(int *)((char *)this + 0x44);
}
// END FUNCTION

// FUNCTION: 0x101ab480 size=0x4
struct CUnknown101ab480 { int sub_101ab480(); };
int CUnknown101ab480::sub_101ab480()
{
    return *(int *)((char *)this + 0x48);
}
// END FUNCTION

// FUNCTION: 0x101b16e0 size=0x4
struct CUnknown101b16e0 { int sub_101b16e0(); };
int CUnknown101b16e0::sub_101b16e0()
{
    return *(int *)((char *)this + 0x64);
}
// END FUNCTION

// FUNCTION: 0x101b1e60 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_101b1e60()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x101b3480 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_101b3480(int num);
};

// TARGET: UtlMem::sub_101b3480
void UtlMem::sub_101b3480(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x101b6c70 size=0x1
void sub_101b6c70()
{
}
// END FUNCTION

// FUNCTION: 0x101bc8b0 size=0x4
struct CUnknown101bc8b0 { int sub_101bc8b0(); };
int CUnknown101bc8b0::sub_101bc8b0()
{
    return *(int *)((char *)this + 0x60);
}
// END FUNCTION

// FUNCTION: 0x101be160 size=0xaa
#include "CUtlVector4.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *, unsigned int);

int CUtlVector4::sub_101be160(int elem, const int *src)
{
	if (1 + m_size > m_allocationCount && m_growSize != -1) {
		int newSize = m_allocationCount + (1 + m_size - m_allocationCount);
		while (m_allocationCount < newSize) {
			if (m_allocationCount != 0) {
				if (m_growSize != 0)
					m_allocationCount += m_growSize;
				else
					m_allocationCount += m_allocationCount;
			} else {
				m_allocationCount = 8;
			}
		}
		if (m_pMemory)
			m_pMemory = (int *)Plat_Realloc(m_pMemory, m_allocationCount * 4);
		else
			m_pMemory = (int *)Plat_Alloc(m_allocationCount * 4);
	}
	m_size += 1;
	m_pElements = m_pMemory;
	int numToMove = m_size - elem - 1;
	if (numToMove > 0)
		sub_101d0f30(m_pMemory + elem + 1, m_pMemory + elem, numToMove * 4);
	int *p = m_pMemory + elem;
	if (p)
		*p = *src;
	return elem;
}
// END FUNCTION

// FUNCTION: 0x101be210 size=0x8c
#include "CUtlVector4.h"
extern void *(*g_101e3100)(int);
extern void *(*g_101e3104)(void *, int);

void CUtlVector4::sub_101be210(int num)
{
    if (m_size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 8;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (int *)g_101e3104(m_pMemory, m_allocationCount << 2);
        else
            m_pMemory = (int *)g_101e3100(m_allocationCount << 2);
    }
    m_size += num;
    m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x101be2a0 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_101be2a0(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		sub_101d0f30(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
}
// END FUNCTION

// FUNCTION: 0x101be2e0 size=0x34
#include "UtlMem.h"
extern void *(__cdecl *g_101e3100)(int);

UtlMem *UtlMem::sub_101be2e0(int growSize, int allocationCount)
{
	m_pMemory = 0;
	m_allocationCount = allocationCount;
	m_growSize = growSize;
	if (allocationCount) {
		m_pMemory = (int *)g_101e3100(allocationCount * 4);
	}
	return this;
}
// END FUNCTION

// FUNCTION: 0x101c0cb0 size=0x4
struct CUnknown101c0cb0 { int sub_101c0cb0(); };
int CUnknown101c0cb0::sub_101c0cb0()
{
    return *(int *)((char *)this + 0x5c);
}
// END FUNCTION

// FUNCTION: 0x101c2b20 size=0x4
struct CUnknown101c2b20 { char * sub_101c2b20(); };
char * CUnknown101c2b20::sub_101c2b20()
{
    return (char *)this + 0x40;
}
// END FUNCTION

// FUNCTION: 0x101c2bd0 size=0x34
#include "UtlMem.h"
extern void *(__cdecl *g_101e3100)(int);

UtlMem *UtlMem::sub_101c2bd0(int growSize, int allocationCount)
{
	m_pMemory = 0;
	m_allocationCount = allocationCount;
	m_growSize = growSize;
	if (allocationCount) {
		m_pMemory = (int *)g_101e3100(allocationCount * 4);
	}
	return this;
}
// END FUNCTION

// FUNCTION: 0x101c2c80 size=0x34
#include "UtlMem.h"
extern void *(__cdecl *g_101e3100)(int);

UtlMem *UtlMem::sub_101c2c80(int growSize, int allocationCount)
{
	m_pMemory = 0;
	m_allocationCount = allocationCount;
	m_growSize = growSize;
	if (allocationCount) {
		m_pMemory = (int *)g_101e3100(allocationCount * 4);
	}
	return this;
}
// END FUNCTION

// FUNCTION: 0x101c2cc0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_101e30fc)(void *);

void UtlMem::sub_101c2cc0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_101e30fc(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x101c2cf0 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_101c2cf0(int num);
};

// TARGET: UtlMem::sub_101c2cf0
void UtlMem::sub_101c2cf0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x101c9da0 size=0x4
struct CUnknown101c9da0 { int sub_101c9da0(); };
int CUnknown101c9da0::sub_101c9da0()
{
    return *(int *)((char *)this + 0xc);
}
// END FUNCTION

// FUNCTION: 0x101cb000 size=0x4
struct CUnknown101cb000 { int sub_101cb000(); };
int CUnknown101cb000::sub_101cb000()
{
    return *(int *)((char *)this + 0x74);
}
// END FUNCTION

// FUNCTION: 0x101cb010 size=0x4
struct CUnknown101cb010 { int sub_101cb010(); };
int CUnknown101cb010::sub_101cb010()
{
    return *(int *)((char *)this + 0x64);
}
// END FUNCTION

// FUNCTION: 0x101d0d28 size=0x18
// TARGET: sub_101d0d28
void sub_101d0d40();
int sub_101d3581();
void sub_101d3531();
extern int g_10680710;

void sub_101d0d28()
{
    sub_101d0d40();
    g_10680710 = sub_101d3581();
    sub_101d3531();
    __asm {
        fnclex
        ret
    }
}
// END FUNCTION
