// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10164480 size=0x5
#include "vgui2__Image.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual int f11(); };
}
int vgui2::Image::vfunc7()
{
    return ((lifted::V *)this)->f11();
}
// END FUNCTION

// FUNCTION: 0x10164490 size=0xa
#include "vgui2__Image.h"
bool vgui2::Image::vfunc4(char a0)
{
    *(char *)((char *)this + 0x18) = a0;
    return *(bool *)&a0;
}
// END FUNCTION

// FUNCTION: 0x101b68e0 size=0x1e
#include "vgui2__Image.h"

// VC6 writes vgui2::Image's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::Image *pcd_emit_101b68e0() { return new vgui2::Image; }

// TARGET: ??_GImage@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101b6910 size=0x11
#include "vgui2__Image.h"
int vgui2::Image::vfunc1(int a0, int a1)
{
    *(int *)((char *)this + 4) = a0;
    *(int *)((char *)this + 8) = a1;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101b6930 size=0x15
#include "vgui2__Image.h"
int vgui2::Image::vfunc6(int a0, int a1)
{
    int t0 = *(int *)((char *)this + 4);
    *(int *)((char *)a0) = t0;
    int t1 = *(int *)((char *)this + 8);
    *(int *)((char *)a1) = t1;
    return t1;
}
// END FUNCTION

// FUNCTION: 0x101b6950 size=0x15
#include "vgui2__Image.h"
int vgui2::Image::vfunc2(int a0, int a1)
{
    int t0 = *(int *)((char *)this + 0xc);
    *(int *)((char *)a0) = t0;
    int t1 = *(int *)((char *)this + 0x10);
    *(int *)((char *)a1) = t1;
    return t1;
}
// END FUNCTION

// FUNCTION: 0x101b6990 size=0x11
#include "vgui2__Image.h"
int vgui2::Image::vfunc9(int a0, int a1)
{
    *(int *)((char *)this + 0xc) = a0;
    *(int *)((char *)this + 0x10) = a1;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101b69b0 size=0x3b
#include "vgui2__Image.h"
struct CSurface_101ac8d0 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(int, int, int, int);
};
CSurface_101ac8d0 *sub_101ac8d0();
void vgui2::Image::vfunc11(Color4b c)
{
    sub_101ac8d0()->v11(c.r, c.g, c.b, c.a);
}
// END FUNCTION

// FUNCTION: 0x101b69f0 size=0xc
#include "vgui2__Image.h"
namespace lifted {
int sub_101ac8d0();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual int f11(); };
}
int vgui2::Image::vfunc10()
{
    return ((lifted::V *)(lifted::sub_101ac8d0()))->f11();
}
// END FUNCTION

// FUNCTION: 0x101b6a00 size=0x39
#include "vgui2__Image.h"
struct SurfView12 {
 virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5();
 virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
 virtual void Slot12(int a, int b, int c, int d);
};
SurfView12 *sub_101ac8d0();
static inline void DrawIt(int a, int b, int c, int d)
{
    sub_101ac8d0()->Slot12(a, b, c, d);
}
// TARGET: vgui2::Image::vfunc12
void vgui2::Image::vfunc12(int a, int b, int c, int d)
{
    a += m_unk04;
    b += m_unk08;
    c += m_unk04;
    d += m_unk08;
    DrawIt(a, b, c, d);
}
// END FUNCTION

// FUNCTION: 0x101b6a40 size=0x39
#include "vgui2__Image.h"
struct ISurf13 {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
  virtual void v10(); virtual void v11(); virtual void v12();
  virtual int v13(int, int, int, int);
};
ISurf13 *sub_101ac8d0();
// TARGET: vgui2::Image::vfunc13
int vgui2::Image::vfunc13(int a, int b, int c, int d)
{
  a += m_unk04;
  b += m_unk08;
  c += m_unk04;
  d += m_unk08;
  return sub_101ac8d0()->v13(a, b, c, d);
}
// END FUNCTION

// FUNCTION: 0x101b6a80 size=0x39
#include "vgui2__Image.h"
struct ISurf15 {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
  virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
  virtual int v15(int, int, int, int);
};
ISurf15 *sub_101ac8d0();
// TARGET: vgui2::Image::vfunc14
int vgui2::Image::vfunc14(int a, int b, int c, int d)
{
  a += m_unk04;
  b += m_unk08;
  c += m_unk04;
  d += m_unk08;
  return sub_101ac8d0()->v15(a, b, c, d);
}
// END FUNCTION

// FUNCTION: 0x101b6b10 size=0xc
#include "vgui2__Image.h"
namespace lifted {
int sub_101ac8d0();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual int f17(); };
}
int vgui2::Image::vfunc16()
{
    return ((lifted::V *)(lifted::sub_101ac8d0()))->f17();
}
// END FUNCTION

// FUNCTION: 0x101b6b20 size=0x3b
#include "vgui2__Image.h"
struct CSurface_101ac8d0 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(int, int, int, int);
};
CSurface_101ac8d0 *sub_101ac8d0();
void vgui2::Image::vfunc18(Color4b c)
{
    sub_101ac8d0()->v19(c.r, c.g, c.b, c.a);
}
// END FUNCTION

// FUNCTION: 0x101b6b60 size=0xc
#include "vgui2__Image.h"
namespace lifted {
int sub_101ac8d0();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual int f19(); };
}
int vgui2::Image::vfunc17()
{
    return ((lifted::V *)(lifted::sub_101ac8d0()))->f19();
}
// END FUNCTION

// FUNCTION: 0x101b6ba0 size=0xc
#include "vgui2__Image.h"
namespace lifted {
int sub_101ac8d0();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual int f21(); };
}
int vgui2::Image::vfunc21()
{
    return ((lifted::V *)(lifted::sub_101ac8d0()))->f21();
}
// END FUNCTION

// FUNCTION: 0x101b6bf0 size=0x14
#include "vgui2__Image.h"
namespace lifted {
int sub_101ac8d0();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual int f22(float); };
}
int vgui2::Image::vfunc23(float a0)
{
    return ((lifted::V *)(lifted::sub_101ac8d0()))->f22(a0);
}
// END FUNCTION

// FUNCTION: 0x101b6c10 size=0x38
#include "vgui2__Image.h"
#define P8(n) virtual void n##a(); virtual void n##b(); virtual void n##c(); virtual void n##d(); virtual void n##e(); virtual void n##f(); virtual void n##g(); virtual void n##h();
struct ISurfaceView {
	P8(a) P8(b)
	virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
	virtual int Slot20(int x, int y);
	virtual void s21();
	virtual int Slot22(int a);
};
ISurfaceView *sub_101ac8d0();
// TARGET: vgui2::Image::vfunc22
int vgui2::Image::vfunc22(int x, int y, int c)
{
	x += m_unk04;
	y += m_unk08;
	sub_101ac8d0()->Slot20(x, y);
	return sub_101ac8d0()->Slot22(c);
}
// END FUNCTION

// FUNCTION: 0x101b6c50 size=0xc
#include "vgui2__Image.h"
namespace lifted {
int sub_101ac8d0();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual int f31(); };
}
int vgui2::Image::vfunc24()
{
    return ((lifted::V *)(lifted::sub_101ac8d0()))->f31();
}
// END FUNCTION

// FUNCTION: 0x101b6c60 size=0xf
#include "vgui2__Image.h"
namespace lifted {
int sub_101ac8d0();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual int f33(); };
}
int vgui2::Image::vfunc25()
{
    return ((lifted::V *)(lifted::sub_101ac8d0()))->f33();
}
// END FUNCTION

// FUNCTION: 0x101b6c90 size=0xc
#include "vgui2__Image.h"
int vgui2::Image::vfunc8(int a0)
{
    *(int *)((char *)a0) = *(int *)((char *)this + 0x14);
    return a0;
}
// END FUNCTION
