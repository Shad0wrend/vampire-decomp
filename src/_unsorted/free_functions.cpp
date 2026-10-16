// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10032a20 size=0x8
void __fastcall sub_10032a20(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10032a40 size=0x8
void __fastcall sub_10032a40(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x10032b00 size=0x8
void __fastcall sub_10032b00(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x1003c1c0 size=0x8
void __fastcall sub_1003c1c0(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x1003c450 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_1003c450(void **p) { ((Fn *)*p)[134](p); }
// END FUNCTION

// FUNCTION: 0x10078b10 size=0x8
void __fastcall sub_10078b10(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10078b70 size=0x8
void __fastcall sub_10078b70(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x10078bd0 size=0x8
void __fastcall sub_10078bd0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10078c30 size=0x8
void __fastcall sub_10078c30(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x1007e580 size=0x8
void __fastcall sub_1007e580(int *p) { p[0x5c / 4] = 0; }
// END FUNCTION

// FUNCTION: 0x1007ee00 size=0x8
void __fastcall sub_1007ee00(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x1007ee20 size=0x8
void __fastcall sub_1007ee20(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x1007ee40 size=0x8
void __fastcall sub_1007ee40(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x100b47e0 size=0x8
void __fastcall sub_100b47e0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x100b4950 size=0x8
struct CUtlVectorBase { int a, b, c, m_Size; void sub_100b4950(); };
void CUtlVectorBase::sub_100b4950() { m_Size = 0; }
// END FUNCTION

// FUNCTION: 0x100db3f0 size=0x8
extern char g_106e7e91;
void sub_100db3f0() { g_106e7e91 = 1; }
// END FUNCTION

// FUNCTION: 0x100de610 size=0x8
void sub_100055b5();
void __stdcall sub_100de610(int) { sub_100055b5(); }
// END FUNCTION

// FUNCTION: 0x100eb130 size=0x8
void __fastcall sub_100eb130(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x100eb3b0 size=0x8
void __fastcall sub_100eb3b0(int *p) { p[4] = 0; }
// END FUNCTION

// FUNCTION: 0x100eb400 size=0x8
void __fastcall sub_100eb400(int *p) { p[4] = 0; }
// END FUNCTION

// FUNCTION: 0x100f0300 size=0x8
void __fastcall sub_100f0300(char *p) { p[0x55c] = 1; }
// END FUNCTION

// FUNCTION: 0x100f0320 size=0x8
void __fastcall sub_100f0320(char *p) { p[0x55c] = 0; }
// END FUNCTION

// FUNCTION: 0x100f9790 size=0x8
struct CUtlVectorBase { int a, b, c, m_Size; void sub_100f9790(); };
void CUtlVectorBase::sub_100f9790() { m_Size = 0; }
// END FUNCTION

// FUNCTION: 0x10104630 size=0x8
void sub_1000c586();
void __stdcall sub_10104630(int) { sub_1000c586(); }
// END FUNCTION

// FUNCTION: 0x1010f4e0 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_1010f4e0(void **p) { ((Fn *)*p)[241](p); }
// END FUNCTION

// FUNCTION: 0x1011a430 size=0x8
extern char g_1070b264;
void sub_1011a430() { g_1070b264 = 1; }
// END FUNCTION

// FUNCTION: 0x1012cf30 size=0x8
void sub_100027ac();
void __stdcall sub_1012cf30(int) { sub_100027ac(); }
// END FUNCTION

// FUNCTION: 0x1012cf90 size=0x8
void sub_10003a94();
void __stdcall sub_1012cf90(int) { sub_10003a94(); }
// END FUNCTION

// FUNCTION: 0x101318a0 size=0x8
void sub_10002441();
void __stdcall sub_101318a0(int) { sub_10002441(); }
// END FUNCTION

// FUNCTION: 0x10156d30 size=0x8
void __fastcall sub_10156d30(char *p) { p[0x105c] = 1; }
// END FUNCTION

// FUNCTION: 0x10158d60 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_10158d60(void **p) { ((Fn *)*p)[243](p); }
// END FUNCTION

// FUNCTION: 0x10158d80 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown10158d80 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8)
	V5(q0) V5(q1) V5(q2)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();
	virtual void slot244();
	void sub_10158d80();
};
void CUnknown10158d80::sub_10158d80() { slot244(); }
// END FUNCTION

// FUNCTION: 0x10158da0 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_10158da0(void **p) { ((Fn *)*p)[245](p); }
// END FUNCTION

// FUNCTION: 0x1015eee0 size=0x8
void __fastcall sub_1015eee0(char *p) { p[0x19f5] = 0; }
// END FUNCTION

// FUNCTION: 0x1015ef00 size=0x8
struct CUnknown1015ef00 { char pad[0x19f5]; char m_Flag; void sub_1015ef00(); };
void CUnknown1015ef00::sub_1015ef00() { m_Flag = 1; }
// END FUNCTION

// FUNCTION: 0x1015ef40 size=0x8
void __fastcall sub_1015ef40(char *p)
{
	p[0x19f7] = 1;
}
// END FUNCTION

// FUNCTION: 0x1015ef60 size=0x8
void __fastcall sub_1015ef60(char *p) { p[0x19f7] = 0; }
// END FUNCTION

// FUNCTION: 0x10184360 size=0x8
void __fastcall sub_10184360(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x10184380 size=0x8
void __fastcall sub_10184380(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10184f70 size=0x8
void __fastcall sub_10184f70(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10185180 size=0x8
struct CUtlVectorBase { int a, b, c, m_Size; void sub_10185180(); };
void CUtlVectorBase::sub_10185180() { m_Size = 0; }
// END FUNCTION

// FUNCTION: 0x101852f0 size=0x8
void __fastcall sub_101852f0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10185490 size=0x8
struct CUtlVectorBase { int a, b, c, m_Size; void sub_10185490(); };
void CUtlVectorBase::sub_10185490() { m_Size = 0; }
// END FUNCTION

// FUNCTION: 0x10185600 size=0x8
void __fastcall sub_10185600(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10185790 size=0x8
void __fastcall sub_10185790(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x101afba0 size=0x8
struct CUnknown101afba0 { char pad[0x100]; char m_Flag; void sub_101afba0(); };
void CUnknown101afba0::sub_101afba0() { m_Flag = 0; }
// END FUNCTION

// FUNCTION: 0x101b6a30 size=0x8
void __fastcall sub_101b6a30(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x101bc000 size=0x8
void __fastcall sub_101bc000(int *p)
{
	p[9] = 0;
}
// END FUNCTION

// FUNCTION: 0x101bd960 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_101bd960(void **p) { void **q = p - 1; ((Fn *)*q)[0](q); }
// END FUNCTION

// FUNCTION: 0x101cc790 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_101cc790(void **p) { ((Fn *)*p)[247](p); }
// END FUNCTION

// FUNCTION: 0x101cc7a0 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown101cc7a0 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8)
	V5(q0) V5(q1) V5(q2)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();
	virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7();
	virtual void slot248();
	void sub_101cc7a0();
};
void CUnknown101cc7a0::sub_101cc7a0() { slot248(); }
// END FUNCTION

// FUNCTION: 0x101cc7b0 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_101cc7b0(void **p) { ((Fn *)*p)[249](p); }
// END FUNCTION

// FUNCTION: 0x101cc7c0 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_101cc7c0(void **p) { ((Fn *)*p)[242](p); }
// END FUNCTION

// FUNCTION: 0x101cc7d0 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown101cc7d0 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8)
	V5(q0) V5(q1) V5(q2)
	V5(r0) V5(r1)
	virtual void f0();
	virtual void slot251();
	void sub_101cc7d0();
};
void CUnknown101cc7d0::sub_101cc7d0() { slot251(); }
// END FUNCTION

// FUNCTION: 0x101cc7e0 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_101cc7e0(void **p) { ((Fn *)*p)[243](p); }
// END FUNCTION

// FUNCTION: 0x101cc7f0 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_101cc7f0(void **p) { ((Fn *)*p)[244](p); }
// END FUNCTION

// FUNCTION: 0x101cc800 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown101cc800 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8)
	V5(q0) V5(q1) V5(q2)
	V5(r0)
	virtual void slot245();
	void sub_101cc800();
};
void CUnknown101cc800::sub_101cc800() { slot245(); }
// END FUNCTION

// FUNCTION: 0x101cc810 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_101cc810(void **p) { ((Fn *)*p)[246](p); }
// END FUNCTION

// FUNCTION: 0x101db9a0 size=0x8
void __fastcall sub_100107d5(char *p);
void __fastcall sub_101db9a0(char *p) { sub_100107d5(p + 0x24); }
// END FUNCTION

// FUNCTION: 0x101e22b0 size=0x8
struct CUnknown101e22b0 { int pad[5]; int m_State; bool sub_101e22b0(); };
bool CUnknown101e22b0::sub_101e22b0() { if (m_State == 1) return true; return false; }
// END FUNCTION

// FUNCTION: 0x101e4a90 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown101e4a90 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8)
	V5(q0) V5(q1) V5(q2)
	V25(r0)
	virtual void f0();
	virtual void slot266();
	void sub_101e4a90();
};
void CUnknown101e4a90::sub_101e4a90() { slot266(); }
// END FUNCTION

// FUNCTION: 0x101e80a0 size=0x8
int __stdcall sub_101e80a0(int) { return 10; }
// END FUNCTION

// FUNCTION: 0x101f3060 size=0x8
void __fastcall sub_1000be01(char *p);
void __fastcall sub_101f3060(char *p) { sub_1000be01(p - *(int *)(p - 4)); }
// END FUNCTION

// FUNCTION: 0x101f4280 size=0x8
int __fastcall sub_101f4280(int *p) { return (*p)++; }
// END FUNCTION

// FUNCTION: 0x10217160 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown10217160 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8)
	V5(q0) V5(q1) V5(q2)
	V25(r0)
	virtual void slot265();
	void sub_10217160();
};
void CUnknown10217160::sub_10217160() { slot265(); }
// END FUNCTION

// FUNCTION: 0x1021e100 size=0x8
struct CUtlVectorBase { int a, b, c, m_Size; void sub_1021e100(); };
void CUtlVectorBase::sub_1021e100() { m_Size = 0; }
// END FUNCTION

// FUNCTION: 0x1021e160 size=0x8
void __fastcall sub_1021e160(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x1021e1c0 size=0x8
void __fastcall sub_1021e1c0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x1021e410 size=0x8
void __fastcall sub_1021e410(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x1024b070 size=0x8
extern char g_105c5338;
void sub_1024b070() { g_105c5338 = 0; }
// END FUNCTION

// FUNCTION: 0x102507b0 size=0x8
void CBaseCombatWeapon::sub_102507b0() { vfunc361(); }
// END FUNCTION

// FUNCTION: 0x102885d0 size=0x8
typedef void (__fastcall *Fn102885d0)(void *);

void __fastcall sub_102885d0(void *p)
{
	(*(Fn102885d0 *)((char *)*(void **)p + 0xf8))(p);
}
// END FUNCTION

// FUNCTION: 0x102885f0 size=0x8
struct NPCStub;
struct NPCStubVtbl { void (__fastcall *f[256])(NPCStub *); };
struct NPCStub { NPCStubVtbl *vt; };

void __fastcall sub_102885f0(NPCStub *o)
{
	o->vt->f[221](o);
}
// END FUNCTION

// FUNCTION: 0x102a96f0 size=0x8
struct TroikaStub;
struct TroikaStubVtbl { void (__fastcall *f[256])(TroikaStub *); };
struct TroikaStub { TroikaStubVtbl *vt; };

void __fastcall sub_102a96f0(TroikaStub *o)
{
	o->vt->f[220](o);
}
// END FUNCTION

// FUNCTION: 0x102c6bd0 size=0x8
void __fastcall sub_102c6bd0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x102cc7e0 size=0x8
void __fastcall sub_102cc7e0(int *p) { p[16] = 0; }
// END FUNCTION

// FUNCTION: 0x102d41f0 size=0x8
void __fastcall sub_102d41f0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x102dce10 size=0x8
void __fastcall sub_102dce10(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x102deea0 size=0x8
void __fastcall sub_102deea0(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x102e0b40 size=0x8
void __fastcall sub_102e0b40(float *p)
{
	p[11] = -1.0f;
}
// END FUNCTION

// FUNCTION: 0x102e8250 size=0x8
void __fastcall sub_102e8250(float *p) { p[6] = 3.402823466e+38f; }
// END FUNCTION

// FUNCTION: 0x102f8ef0 size=0x8
void __fastcall sub_102f8ef0(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x102f99b0 size=0x8
extern char g_1093412c;
void sub_102f99b0() { g_1093412c = 1; }
// END FUNCTION

// FUNCTION: 0x10323a70 size=0x8
short __fastcall sub_10323a70(char *p)
{
	return *(short *)(p + 0x10b0);
}
// END FUNCTION

// FUNCTION: 0x10349a00 size=0x8
void __fastcall sub_10349a00(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10349ea0 size=0x8
void __fastcall sub_10349ea0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x1034a010 size=0x8
void __fastcall sub_1034a010(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10359ba0 size=0x8
void __fastcall sub_10359ba0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10373420 size=0x8
void __fastcall sub_10373420(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10390040 size=0x8
void __fastcall sub_10390040(char *p) { p[0x66b8] = 0; }
// END FUNCTION

// FUNCTION: 0x103dc260 size=0x8
void __fastcall sub_103dc260(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x1042d700 size=0x8
unsigned int __fastcall sub_1042d700(unsigned int *p) { return (*p >> 1) & 0x1f; }
// END FUNCTION
