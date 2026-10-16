// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100295d0 size=0xa
void CUnknown100295d0::sub_100295d0(int unused)
{
	m_bFlag = 1;
}
// END FUNCTION

// FUNCTION: 0x100295f0 size=0xa
void CUnknown100295d0::sub_100295f0(int unused)
{
	m_bFlag = 0;
}
// END FUNCTION

// FUNCTION: 0x1002cc60 size=0xa
struct CUnknown1002cc60 { int p[3]; int a; CUnknown1002cc60* sub_1002cc60(); };
// TARGET: CUnknown1002cc60::sub_1002cc60
CUnknown1002cc60* CUnknown1002cc60::sub_1002cc60() { a = -1; return this; }
// END FUNCTION

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

// FUNCTION: 0x100737b0 size=0x9
struct CUnknown100737b0 { int m_val; void sub_100737b0(int v); };
void CUnknown100737b0::sub_100737b0(int v) { m_val = v; }
// END FUNCTION

// FUNCTION: 0x10073f40 size=0xa
struct CUnknown10073f40 { char p[0x4c]; int a; void sub_10073f40(int v); };
// TARGET: CUnknown10073f40::sub_10073f40
void CUnknown10073f40::sub_10073f40(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x100740f0 size=0xa
struct CUnknown100740f0 { int p[2]; char a; void sub_100740f0(char v); };
// TARGET: CUnknown100740f0::sub_100740f0
void CUnknown100740f0::sub_100740f0(char v) { a = v; }
// END FUNCTION

// FUNCTION: 0x10074a30 size=0xa
void CUnknown10074a30::sub_10074a30(char value)
{
	m_bFlag = value;
}
// END FUNCTION

// FUNCTION: 0x10074a70 size=0xa
struct CUnknown10074a70 { int p[3]; int a; void sub_10074a70(int v); };
// TARGET: CUnknown10074a70::sub_10074a70
void CUnknown10074a70::sub_10074a70(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x10074a90 size=0xa
struct CUnknown10074a90 { int p[4]; int a; void sub_10074a90(int v); };
// TARGET: CUnknown10074a90::sub_10074a90
void CUnknown10074a90::sub_10074a90(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x10078860 size=0xb
void __fastcall sub_10078860(char *self)
{
	*(int *)(self + 0x1a8) = 0;
}
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

// FUNCTION: 0x100792c0 size=0xa
void CUnknown100792c0::sub_100792c0(int value)
{
	m_unk8 = value;
}
// END FUNCTION

// FUNCTION: 0x100792e0 size=0xa
void CUnknown100792c0::sub_100792e0(int value)
{
	m_unk4 = value;
}
// END FUNCTION

// FUNCTION: 0x1007dfc0 size=0xa
struct CUnknown1007dfc0 { char p[0x78]; int a; void sub_1007dfc0(int v); };
// TARGET: CUnknown1007dfc0::sub_1007dfc0
void CUnknown1007dfc0::sub_1007dfc0(int v) { a = v; }
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

// FUNCTION: 0x10080750 size=0xa
void CUnknown10080750::sub_10080750(int value)
{
	m_unk4 = value;
}
// END FUNCTION

// FUNCTION: 0x10081e50 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1) T(c2) T(c3)
	virtual void g0(); virtual void g1(); virtual void g2();
	virtual void target();
};

void __fastcall sub_10081e50(CSlots *self, int, int)
{
	self->target();
}
// END FUNCTION

// FUNCTION: 0x10081e70 size=0xb
void CUnknown10081e70::sub_10081e70(int unused)
{
	vfunc244();
}
// END FUNCTION

// FUNCTION: 0x10081e90 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1) T(c2) T(c3)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4();
	virtual void target();
};

void __fastcall sub_10081e90(CSlots *self, int, int)
{
	self->target();
}
// END FUNCTION

// FUNCTION: 0x10081eb0 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1) T(c2) T(c3)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5();
	virtual void target();
};

void __fastcall sub_10081eb0(CSlots *self, int, int)
{
	self->target();
}
// END FUNCTION

// FUNCTION: 0x10083960 size=0xa
struct CUnknown10083960 { int p; int a; void sub_10083960(int v); };
// TARGET: CUnknown10083960::sub_10083960
void CUnknown10083960::sub_10083960(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x10098810 size=0xb
CUnknown10098810 *CUnknown10098810::sub_10098810()
{
	m_unk14 = 0;
	m_unk4 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x100a8220 size=0xa
unsigned int CUnknown100a8220::sub_100a8220()
{
	return m_nFlags & 2;
}
// END FUNCTION

// FUNCTION: 0x100b47e0 size=0x8
void __fastcall sub_100b47e0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x100b4950 size=0x8
struct CUtlVectorBase { int a, b, c, m_Size; void sub_100b4950(); };
void CUtlVectorBase::sub_100b4950() { m_Size = 0; }
// END FUNCTION

// FUNCTION: 0x100b4e80 size=0xa
extern int g_106cff54;
// TARGET: sub_100b4e80
void sub_100b4e80(int v) { g_106cff54 = v; }
// END FUNCTION

// FUNCTION: 0x100b7c60 size=0xa
void CUnknown100b7c60::sub_100b7c60(int value)
{
	m_unkc = value;
}
// END FUNCTION

// FUNCTION: 0x100bc3a0 size=0xa
extern int g_106d2a10;

void sub_100bc3a0(int value)
{
	g_106d2a10 = value;
}
// END FUNCTION

// FUNCTION: 0x100bc560 size=0x9
struct CUnknown100bc560 { int p[3]; int a; char b; void sub_100bc560(); };
// TARGET: CUnknown100bc560::sub_100bc560
void CUnknown100bc560::sub_100bc560() { a = 0; b = 0; }
// END FUNCTION

// FUNCTION: 0x100bc580 size=0xa
void CUnknown100bc580::sub_100bc580(char value)
{
	m_unk11 = value;
}
// END FUNCTION

// FUNCTION: 0x100bc5e0 size=0xa
void __fastcall sub_100bc5e0(int *self, int, int value)
{
	self[3] = value;
}
// END FUNCTION

// FUNCTION: 0x100bdfe0 size=0x9
struct CUnknown100bdfe0 { int p[3]; int a; char b; void sub_100bdfe0(); };
// TARGET: CUnknown100bdfe0::sub_100bdfe0
void CUnknown100bdfe0::sub_100bdfe0() { a = 0; b = 0; }
// END FUNCTION

// FUNCTION: 0x100be000 size=0xa
void __fastcall sub_100be000(char *self, int, char value)
{
	self[0x11] = value;
}
// END FUNCTION

// FUNCTION: 0x100be040 size=0xa
void CUnknown100be040::sub_100be040(int value)
{
	m_unk14 = value;
}
// END FUNCTION

// FUNCTION: 0x100c89e0 size=0xa
void __fastcall sub_100c89e0(char *self, int, int)
{
	self[0x5c4] = 1;
}
// END FUNCTION

// FUNCTION: 0x100c8a00 size=0xa
void __fastcall sub_100c8a00(char *self, int, int)
{
	self[0x5c4] = 0;
}
// END FUNCTION

// FUNCTION: 0x100db3f0 size=0x8
extern char g_106e7e91;
void sub_100db3f0() { g_106e7e91 = 1; }
// END FUNCTION

// FUNCTION: 0x100de610 size=0x8
void sub_100055b5();
void __stdcall sub_100de610(int) { sub_100055b5(); }
// END FUNCTION

// FUNCTION: 0x100dea90 size=0x9
void CUnknown100dea90::sub_100dea90(int value)
{
	m_unk0 = value;
}
// END FUNCTION

// FUNCTION: 0x100deb10 size=0xa
void __fastcall sub_100deb10(char *self, int, char value)
{
	self[8] = value;
}
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

// FUNCTION: 0x100eb420 size=0x9
struct CUnknown100eb420 { int pad[4]; int m_p; bool sub_100eb420(); };
bool CUnknown100eb420::sub_100eb420() { if (m_p != 0) return true; return false; }
// END FUNCTION

// FUNCTION: 0x100f0300 size=0x8
void __fastcall sub_100f0300(char *p) { p[0x55c] = 1; }
// END FUNCTION

// FUNCTION: 0x100f0320 size=0x8
void __fastcall sub_100f0320(char *p) { p[0x55c] = 0; }
// END FUNCTION

// FUNCTION: 0x100f0e70 size=0xb
void __fastcall sub_100f0e70(char *self)
{
	*(int *)(self + 0x644) = 0;
}
// END FUNCTION

// FUNCTION: 0x100f0f30 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1) T(c2) T(c3)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3();
	virtual void target(int a);
};

void __fastcall sub_100f0f30(CSlots *self)
{
	self->target(1);
}
// END FUNCTION

// FUNCTION: 0x100f9790 size=0x8
struct CUtlVectorBase { int a, b, c, m_Size; void sub_100f9790(); };
void CUtlVectorBase::sub_100f9790() { m_Size = 0; }
// END FUNCTION

// FUNCTION: 0x100fa690 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1) T(c2) T(c3)
	virtual void g0();
	virtual void target();
};

void __fastcall sub_100fa690(CSlots *self, int, int)
{
	self->target();
}
// END FUNCTION

// FUNCTION: 0x100fa6b0 size=0xb
void CUnknown10081e70::sub_100fa6b0(int unused)
{
	vfunc242();
}
// END FUNCTION

// FUNCTION: 0x100fdcc0 size=0xa
void __fastcall sub_100fdcc0(char *self, int, int)
{
	self[0x458] = 1;
}
// END FUNCTION

// FUNCTION: 0x100fdce0 size=0xa
void CUnknown100fdce0::sub_100fdce0(int unused)
{
	m_unk458 = 0;
}
// END FUNCTION

// FUNCTION: 0x10104630 size=0x8
void sub_1000c586();
void __stdcall sub_10104630(int) { sub_1000c586(); }
// END FUNCTION

// FUNCTION: 0x10109da0 size=0xa
void __fastcall sub_10109da0(char *self, int, int)
{
	self[0x490] = 1;
}
// END FUNCTION

// FUNCTION: 0x1010f4e0 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_1010f4e0(void **p) { ((Fn *)*p)[241](p); }
// END FUNCTION

// FUNCTION: 0x101151a0 size=0xa
struct CUnknown101151a0 { char p[0x204]; unsigned int a; unsigned int sub_101151a0(); };
// TARGET: CUnknown101151a0::sub_101151a0
unsigned int CUnknown101151a0::sub_101151a0() { return a & 1; }
// END FUNCTION

// FUNCTION: 0x1011a430 size=0x8
extern char g_1070b264;
void sub_1011a430() { g_1070b264 = 1; }
// END FUNCTION

// FUNCTION: 0x101251e0 size=0xb
void __fastcall sub_101251e0(char *self)
{
	*(int *)(self + 0xac) = -9999;
}
// END FUNCTION

// FUNCTION: 0x1012cf10 size=0x9
CUnknown1012cf10 *CUnknown1012cf10::sub_1012cf10()
{
	m_unk0 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1012cf30 size=0x8
void sub_100027ac();
void __stdcall sub_1012cf30(int) { sub_100027ac(); }
// END FUNCTION

// FUNCTION: 0x1012cf90 size=0x8
void sub_10003a94();
void __stdcall sub_1012cf90(int) { sub_10003a94(); }
// END FUNCTION

// FUNCTION: 0x1012f850 size=0x9
// TARGET: sub_1012f850
float sub_1012f850(float x) { return x * x; }
// END FUNCTION

// FUNCTION: 0x10130100 size=0xb
extern void (*g_105751b8[])();
void sub_10130100(int i)
{
	g_105751b8[i]();
}
// END FUNCTION

// FUNCTION: 0x101318a0 size=0x8
void sub_10002441();
void __stdcall sub_101318a0(int) { sub_10002441(); }
// END FUNCTION

// FUNCTION: 0x10136450 size=0xa
void __fastcall sub_10136450(char *self, int, int)
{
	self[0x450] = 0;
}
// END FUNCTION

// FUNCTION: 0x10136470 size=0xa
void __fastcall sub_10136470(char *self, int, int)
{
	self[0x451] = 0;
}
// END FUNCTION

// FUNCTION: 0x10136490 size=0xa
void __fastcall sub_10136490(char *self, int, int)
{
	self[0x450] = 1;
}
// END FUNCTION

// FUNCTION: 0x1013da70 size=0xa
extern int g_1071a240;
void sub_1013da70(int value)
{
	g_1071a240 = value;
}
// END FUNCTION

// FUNCTION: 0x10146790 size=0x9
struct CUnknown10146790 { char a; char b; char c; void sub_10146790(); };
void CUnknown10146790::sub_10146790() { c = 0; b = 0; }
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

// FUNCTION: 0x1016b440 size=0xb
struct IUnk1070ba0c {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21();
};
extern IUnk1070ba0c *g_1070ba0c;

void sub_1016b440()
{
	g_1070ba0c->v21();
}
// END FUNCTION

// FUNCTION: 0x10181600 size=0xb
void __fastcall sub_10181600(char *self)
{
	*(int *)(self + 0x1d60) = 0;
}
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

// FUNCTION: 0x1018e9d0 size=0xa
extern int g_1058d1ac;
// TARGET: sub_1018e9d0
void sub_1018e9d0(int a, int b) { g_1058d1ac = b; }
// END FUNCTION

// FUNCTION: 0x1019d490 size=0xa
void CUnknown1019d490::sub_1019d490(char value)
{
	m_unk29 = value;
}
// END FUNCTION

// FUNCTION: 0x101ac2f0 size=0xa
unsigned int CAmbientGeneric::sub_101ac2f0()
{
	return m_spawnflags & 1;
}
// END FUNCTION

// FUNCTION: 0x101af9b0 size=0xa
char * __fastcall sub_101af9b0(char *self)
{
	self[0x100] = 0;
	return self;
}
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

// FUNCTION: 0x101bd940 size=0x9
struct S { virtual void v0(); virtual void v1(); };
// TARGET: sub_101bd940
void __fastcall sub_101bd940(char *t) { ((S *)(t - 4))->v1(); }
// END FUNCTION

// FUNCTION: 0x101bd960 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_101bd960(void **p) { void **q = p - 1; ((Fn *)*q)[0](q); }
// END FUNCTION

// FUNCTION: 0x101be1d0 size=0x9
float CStealthKillRules::sub_101be1d0(CBaseEntity *pEntity)
{
	return m_flRange;
}
// END FUNCTION

// FUNCTION: 0x101c2a10 size=0xa
struct CUnknown101c2a10 { char p[0x40]; int a; void sub_101c2a10(int v); };
// TARGET: CUnknown101c2a10::sub_101c2a10
void CUnknown101c2a10::sub_101c2a10(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x101c2a50 size=0xa
struct CUnknown101c2a50 { char p[0x44]; int a; void sub_101c2a50(int v); };
// TARGET: CUnknown101c2a50::sub_101c2a50
void CUnknown101c2a50::sub_101c2a50(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x101c2a90 size=0xa
void CUnknown101c2a90::sub_101c2a90(char value)
{
	m_bFlag = value;
}
// END FUNCTION

// FUNCTION: 0x101c2ad0 size=0xa
void CUnknown101c2a90::sub_101c2ad0(char value)
{
	m_bFlag2 = value;
}
// END FUNCTION

// FUNCTION: 0x101c2b10 size=0xa
struct CUnknown101c2b10 { char p[0x4a]; char a; void sub_101c2b10(char v); };
// TARGET: CUnknown101c2b10::sub_101c2b10
void CUnknown101c2b10::sub_101c2b10(char v) { a = v; }
// END FUNCTION

// FUNCTION: 0x101c4790 size=0xa
struct CUnknown101c4790 { CUnknown101c4790 *a; CUnknown101c4790 *b; CUnknown101c4790* sub_101c4790(int x); };
// TARGET: CUnknown101c4790::sub_101c4790
CUnknown101c4790* CUnknown101c4790::sub_101c4790(int x) { b = this; a = this; return this; }
// END FUNCTION

// FUNCTION: 0x101c4820 size=0x9
struct CUnknown101c4760 { int a; int b; int c; void sub_101c4760(); };
// TARGET: sub_101c4820
void sub_101c4820(CUnknown101c4760 *p) { p->sub_101c4760(); }
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

// FUNCTION: 0x101d8890 size=0xa
extern int g_1073938c;
// TARGET: sub_101d8890
void sub_101d8890(int v) { g_1073938c = v; }
// END FUNCTION

// FUNCTION: 0x101daf60 size=0x9
bool CUnknown101daf60::sub_101daf60()
{
	if (m_pData)
		return true;
	return false;
}
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

// FUNCTION: 0x101e8250 size=0xb
struct CInner { unsigned int sub_1000f03d(int a); };
struct CMid { char pad[0x14]; CInner *m_p14; };
struct COwner
{
	char pad[0x1c];
	CMid *m_p1c;
	unsigned int sub_101e8250(int a);
};

unsigned int COwner::sub_101e8250(int a)
{
	return m_p1c->m_p14->sub_1000f03d(a);
}
// END FUNCTION

// FUNCTION: 0x101e94b0 size=0xa
extern int g_1073a144;

void sub_101e94b0(int value)
{
	g_1073a144 = value;
}
// END FUNCTION

// FUNCTION: 0x101eaa40 size=0xa
extern int g_1073a38c;

void sub_101eaa40(int value)
{
	g_1073a38c = value;
}
// END FUNCTION

// FUNCTION: 0x101eaa60 size=0xa
extern int g_1073a390;

void sub_101eaa60(int value)
{
	g_1073a390 = value;
}
// END FUNCTION

// FUNCTION: 0x101eaa80 size=0xa
extern int g_1073a394;

void sub_101eaa80(int value)
{
	g_1073a394 = value;
}
// END FUNCTION

// FUNCTION: 0x101eaaa0 size=0xa
extern int g_1073a398;

void sub_101eaaa0(int value)
{
	g_1073a398 = value;
}
// END FUNCTION

// FUNCTION: 0x101eaac0 size=0xa
extern int g_1073a39c;

void sub_101eaac0(int value)
{
	g_1073a39c = value;
}
// END FUNCTION

// FUNCTION: 0x101eaae0 size=0xa
extern int g_1073a3a0;

void sub_101eaae0(int value)
{
	g_1073a3a0 = value;
}
// END FUNCTION

// FUNCTION: 0x101eab00 size=0xa
extern int g_1073a3a4;

void sub_101eab00(int value)
{
	g_1073a3a4 = value;
}
// END FUNCTION

// FUNCTION: 0x101eab20 size=0xa
extern int g_1073a3a8;

void sub_101eab20(int value)
{
	g_1073a3a8 = value;
}
// END FUNCTION

// FUNCTION: 0x101eab40 size=0xa
extern int g_1073a3ac;

void sub_101eab40(int value)
{
	g_1073a3ac = value;
}
// END FUNCTION

// FUNCTION: 0x101eab60 size=0xa
extern int g_1073a3b0;

void sub_101eab60(int value)
{
	g_1073a3b0 = value;
}
// END FUNCTION

// FUNCTION: 0x101ed9e0 size=0xb
CUnknown101ed9e0 *CUnknown101ed9e0::sub_101ed9e0(int value)
{
	m_unk0 = value;
	return this;
}
// END FUNCTION

// FUNCTION: 0x101eddb0 size=0xa
extern int g_1073a3b4;

void sub_101eddb0(int value)
{
	g_1073a3b4 = value;
}
// END FUNCTION

// FUNCTION: 0x101eddd0 size=0xa
extern int g_1073a3b8;

void sub_101eddd0(int value)
{
	g_1073a3b8 = value;
}
// END FUNCTION

// FUNCTION: 0x101f0270 size=0xb
int * __fastcall sub_101f0270(int *self, int, int value)
{
	*self = value;
	return self;
}
// END FUNCTION

// FUNCTION: 0x101f2500 size=0x9
struct CUnknown101f2500 { int a; char sub_101f2500(); };
// TARGET: CUnknown101f2500::sub_101f2500
char CUnknown101f2500::sub_101f2500() { int v = ((int *)this)[-5]; return v != 0; }
// END FUNCTION

// FUNCTION: 0x101f2cd0 size=0xa
struct CUnknown101f2cd0 { int p[6]; int a; void sub_101f2cd0(int v); };
// TARGET: CUnknown101f2cd0::sub_101f2cd0
void CUnknown101f2cd0::sub_101f2cd0(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x101f3060 size=0x8
void __fastcall sub_1000be01(char *p);
void __fastcall sub_101f3060(char *p) { sub_1000be01(p - *(int *)(p - 4)); }
// END FUNCTION

// FUNCTION: 0x101f3070 size=0x8
void __fastcall sub_10001807(char *p);
void __fastcall sub_101f3070(char *p) { sub_10001807(p - *(int *)(p - 4)); }
// END FUNCTION

// FUNCTION: 0x101f4280 size=0x8
int __fastcall sub_101f4280(int *p) { return (*p)++; }
// END FUNCTION

// FUNCTION: 0x101f6c30 size=0x9
bool CUnknown101f6c30::sub_101f6c30()
{
	if (m_nCount == 0)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x101f74e0 size=0x8
bool __fastcall sub_101f74e0(int *p) { bool r = p[3] != -1; return r; }
// END FUNCTION

// FUNCTION: 0x101f9550 size=0xa
extern int g_1074e008;
void sub_101f9550(int value)
{
	g_1074e008 = value;
}
// END FUNCTION

// FUNCTION: 0x101f9570 size=0xa
extern int g_1074e00c;
void sub_101f9570(int value)
{
	g_1074e00c = value;
}
// END FUNCTION

// FUNCTION: 0x101f9590 size=0xa
extern int g_1074e010;

void sub_101f9590(int value)
{
	g_1074e010 = value;
}
// END FUNCTION

// FUNCTION: 0x101f95b0 size=0xa
extern int g_1074e014;
void sub_101f95b0(int value)
{
	g_1074e014 = value;
}
// END FUNCTION

// FUNCTION: 0x101f95d0 size=0xa
extern int g_1074e018;
void sub_101f95d0(int value)
{
	g_1074e018 = value;
}
// END FUNCTION

// FUNCTION: 0x101f95f0 size=0xa
extern int g_1074e01c;
void sub_101f95f0(int value)
{
	g_1074e01c = value;
}
// END FUNCTION

// FUNCTION: 0x101f9610 size=0xa
extern int g_1074e020;
void sub_101f9610(int value)
{
	g_1074e020 = value;
}
// END FUNCTION

// FUNCTION: 0x101f9630 size=0xa
extern int g_1074e024;
void sub_101f9630(int value)
{
	g_1074e024 = value;
}
// END FUNCTION

// FUNCTION: 0x101f9650 size=0xa
extern int g_1074e028;
void sub_101f9650(int value)
{
	g_1074e028 = value;
}
// END FUNCTION

// FUNCTION: 0x101f9670 size=0x9
CUnknown101f9670 *CUnknown101f9670::sub_101f9670()
{
	m_unk0 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10203e30 size=0xa
extern int g_1074ede0;

void sub_10203e30(int value)
{
	g_1074ede0 = value;
}
// END FUNCTION

// FUNCTION: 0x10204550 size=0xa
extern int g_1074eec4;

void sub_10204550(int value)
{
	g_1074eec4 = value;
}
// END FUNCTION

// FUNCTION: 0x102056d0 size=0x9
struct CUnknown102056d0 { int m_val; CUnknown102056d0 *sub_102056d0(); };
CUnknown102056d0 *CUnknown102056d0::sub_102056d0() { m_val = -1; return this; }
// END FUNCTION

// FUNCTION: 0x10206300 size=0xb
int * __fastcall sub_10206300(int *self, int, int value)
{
	*self = value;
	return self;
}
// END FUNCTION

// FUNCTION: 0x1020b000 size=0x9
int CBaseVampireSkillEntity::sub_1020b000(CBaseEntity *pPlayer)
{
	return m_unk78c;
}
// END FUNCTION

// FUNCTION: 0x1020b020 size=0x9
struct CUnknown1020b020 { char p[0x790]; int a; int sub_1020b020(int x); };
// TARGET: CUnknown1020b020::sub_1020b020
int CUnknown1020b020::sub_1020b020(int x) { return a; }
// END FUNCTION

// FUNCTION: 0x1020e060 size=0xa
void CUnknown1020e060::sub_1020e060(int unused)
{
	m_bFlag = 1;
}
// END FUNCTION

// FUNCTION: 0x1020e080 size=0xa
void CUnknown1020e060::sub_1020e080(int unused)
{
	m_bFlag = 0;
}
// END FUNCTION

// FUNCTION: 0x1020f2c0 size=0xa
void __fastcall sub_1020f2c0(char *self, int, int)
{
	self[0x80c] = 1;
}
// END FUNCTION

// FUNCTION: 0x1020f2e0 size=0xa
void __fastcall sub_1020f2e0(char *self, int, int)
{
	self[0x80c] = 0;
}
// END FUNCTION

// FUNCTION: 0x102158f0 size=0xa
void __fastcall sub_102158f0(char *self, int, int)
{
	self[0x738] = 1;
}
// END FUNCTION

// FUNCTION: 0x10215910 size=0xa
void CUnknown10215910::sub_10215910(int unused)
{
	m_unk738 = 0;
}
// END FUNCTION

// FUNCTION: 0x10216830 size=0xa
void __fastcall sub_10216830(char *self, int, int)
{
	self[0x734] = 1;
}
// END FUNCTION

// FUNCTION: 0x10216850 size=0xa
void __fastcall sub_10216850(char *self, int, int)
{
	self[0x734] = 0;
}
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

// FUNCTION: 0x10218080 size=0xa
void __fastcall sub_10218080(char *self, int, int)
{
	self[0x80c] = 1;
}
// END FUNCTION

// FUNCTION: 0x102180a0 size=0xa
void __fastcall sub_102180a0(char *self, int, int)
{
	self[0x80c] = 0;
}
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

// FUNCTION: 0x10224150 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1) T(c2) T(c3) T(c4) T(c5) T(c6)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4();
	virtual void target();
};

void __fastcall sub_10224150(CSlots *self, int, int)
{
	self->target();
}
// END FUNCTION

// FUNCTION: 0x10224170 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1) T(c2) T(c3) T(c4) T(c5) T(c6)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
	virtual void target();
};

void __fastcall sub_10224170(CSlots *self, int, int)
{
	self->target();
}
// END FUNCTION

// FUNCTION: 0x10227210 size=0xa
void CUnknown10227210::sub_10227210(int unused)
{
	m_unk450 = 1;
}
// END FUNCTION

// FUNCTION: 0x10227230 size=0xa
void __fastcall sub_10227230(char *self, int, int)
{
	self[0x450] = 0;
}
// END FUNCTION

// FUNCTION: 0x10231e60 size=0xa
unsigned int __fastcall sub_10231e60(char *self)
{
	return *(unsigned int *)(self + 0x464) & 1;
}
// END FUNCTION

// FUNCTION: 0x10232520 size=0xa
void __fastcall sub_10232520(int *self, int, int value)
{
	self[4] = value;
}
// END FUNCTION

// FUNCTION: 0x1023f040 size=0xb
void sub_1023f040(int *p)
{
	*p = -1;
}
// END FUNCTION

// FUNCTION: 0x1023f060 size=0xb
void sub_1023f060(unsigned int *p)
{
	*p = ~*p;
}
// END FUNCTION

// FUNCTION: 0x102457d0 size=0xa
void CUnknown102457d0::sub_102457d0(int value)
{
	m_unk8 = value;
}
// END FUNCTION

// FUNCTION: 0x102464b0 size=0xb
void sub_102464b0(int a, int b, int *c)
{
	*c = b;
}
// END FUNCTION

// FUNCTION: 0x102477a0 size=0x9
struct CUnknown102477a0 { int a; int b; int c; int d; void sub_102477a0(); };
// TARGET: CUnknown102477a0::sub_102477a0
void CUnknown102477a0::sub_102477a0() { c = 0; d = 0; }
// END FUNCTION

// FUNCTION: 0x102477c0 size=0x9
struct CUnknown102477c0 { int p[6]; int a; int b; void sub_102477c0(); };
// TARGET: CUnknown102477c0::sub_102477c0
void CUnknown102477c0::sub_102477c0() { a = 0; b = 0; }
// END FUNCTION

// FUNCTION: 0x10248850 size=0xa
void CUnknown10248850::sub_10248850(int value)
{
	m_unk18 = value;
}
// END FUNCTION

// FUNCTION: 0x10248980 size=0x9
struct CUnknown10248980 { int p[5]; int a; char sub_10248980(); };
// TARGET: CUnknown10248980::sub_10248980
char CUnknown10248980::sub_10248980() { int v = a; return v != 0; }
// END FUNCTION

// FUNCTION: 0x10248a50 size=0xa
struct CUnknown10248a50 { int p[4]; int a; void sub_10248a50(int v); };
// TARGET: CUnknown10248a50::sub_10248a50
void CUnknown10248a50::sub_10248a50(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x10249450 size=0xa
void CUnknown10249450::sub_10249450(int value)
{
	m_unk4 = value;
}
// END FUNCTION

// FUNCTION: 0x10249960 size=0xb
unsigned int __fastcall sub_10249960(char **self)
{
	return *(unsigned short *)(*self + 0x12);
}
// END FUNCTION

// FUNCTION: 0x1024afe0 size=0xb
void sub_100139d5();
extern int g_1088ae3c;
int sub_1024afe0()
{
	sub_100139d5();
	return g_1088ae3c;
}
// END FUNCTION

// FUNCTION: 0x1024b070 size=0x8
extern char g_105c5338;
void sub_1024b070() { g_105c5338 = 0; }
// END FUNCTION

// FUNCTION: 0x102507b0 size=0x8
void CBaseCombatWeapon::sub_102507b0() { vfunc361(); }
// END FUNCTION

// FUNCTION: 0x10256200 size=0xb
unsigned char __fastcall sub_10256200(unsigned char *self)
{
	unsigned char v = self[0x778];
	v >>= 1;
	v &= 1;
	return v;
}
// END FUNCTION

// FUNCTION: 0x10258870 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown10258870 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8) V25(p9) V25(q0) V25(q1)
	V5(r0)
	virtual void slot305();
	void sub_10258870();
};
void CUnknown10258870::sub_10258870() { slot305(); }
// END FUNCTION

// FUNCTION: 0x10258af0 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown10258af0 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8) V25(p9)
	V25(q0) V25(q1) V25(q2) V25(q3) V25(q4) V25(q5)
	V5(r0) virtual void f0(); virtual void f1();
	virtual void slot407();
	void sub_10258af0();
};
void CUnknown10258af0::sub_10258af0() { slot407(); }
// END FUNCTION

// FUNCTION: 0x1025b5b0 size=0x9
extern unsigned short g_1089d7da;

int sub_1025b5b0()
{
	return g_1089d7da;
}
// END FUNCTION

// FUNCTION: 0x1025d820 size=0x9
struct CUnknown1025d820 { int a; CUnknown1025d820* sub_1025d820(); };
// TARGET: CUnknown1025d820::sub_1025d820
CUnknown1025d820* CUnknown1025d820::sub_1025d820() { a = -1; return this; }
// END FUNCTION

// FUNCTION: 0x1025db50 size=0xb
char __fastcall sub_1025db50(int *self)
{
	return self[4] < self[0];
}
// END FUNCTION

// FUNCTION: 0x10260750 size=0xb
void __fastcall sub_10260750(char *self)
{
	*(int *)(self + 0x5f9c) = 0;
}
// END FUNCTION

// FUNCTION: 0x10260980 size=0xa
struct CUnknown10260980 { int p; int a; CUnknown10260980* sub_10260980(); };
// TARGET: CUnknown10260980::sub_10260980
CUnknown10260980* CUnknown10260980::sub_10260980() { a = -1; return this; }
// END FUNCTION

// FUNCTION: 0x10264450 size=0xb
void CUnknown102e12c0::sub_10264450()
{
	m_pOuter->vfunc310();
}
// END FUNCTION

// FUNCTION: 0x10265800 size=0xa
extern unsigned char g_1092053c;

unsigned char sub_10265800()
{
	unsigned char v = ~g_1092053c;
	v &= 1;
	return v;
}
// END FUNCTION

// FUNCTION: 0x1026dc60 size=0xb
void CUnknown1026dc60::sub_1026dc60()
{
	m_unk5cec = 0;
}
// END FUNCTION

// FUNCTION: 0x1027d990 size=0xa
struct CUnknown1027d990Sub { int p[6]; int a; };
struct CUnknown1027d990 { char p[0x5d34]; CUnknown1027d990Sub *m; int sub_1027d990(); };
// TARGET: CUnknown1027d990::sub_1027d990
int CUnknown1027d990::sub_1027d990() { return m->a; }
// END FUNCTION

// FUNCTION: 0x1027d9b0 size=0xb
void __fastcall sub_102eeba0(void *);
void __fastcall sub_1027d9b0(char *self)
{
	sub_102eeba0(*(void **)(self + 0x5d34));
}
// END FUNCTION

// FUNCTION: 0x1027fbf0 size=0x9
struct CUnknown1027fbf0 { int a; CUnknown1027fbf0* sub_1027fbf0(); };
// TARGET: CUnknown1027fbf0::sub_1027fbf0
CUnknown1027fbf0* CUnknown1027fbf0::sub_1027fbf0() { a = -1; return this; }
// END FUNCTION

// FUNCTION: 0x1027fc40 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown1027fc40 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8) V25(p9)
	V25(q0) V25(q1) V25(q2) V25(q3) V25(q4) V25(q5) V25(q6)
	V5(r0) virtual void f0();
	virtual void slot431();
	void sub_1027fc40();
};
void CUnknown1027fc40::sub_1027fc40() { slot431(); }
// END FUNCTION

// FUNCTION: 0x10288540 size=0x9
struct CUnknown10288540 { int m_p; CUnknown10288540 *sub_10288540(); };
CUnknown10288540 *CUnknown10288540::sub_10288540() { m_p = 0; return this; }
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

// FUNCTION: 0x102886f0 size=0xa
struct CUnknown102886f0 { char p[0x40]; int a; void sub_102886f0(int v); };
// TARGET: CUnknown102886f0::sub_102886f0
void CUnknown102886f0::sub_102886f0(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x10289cc0 size=0xb
void CUnknown10289cc0::sub_10289cc0()
{
	m_unk5cf4.sub_102e8a40();
}
// END FUNCTION

// FUNCTION: 0x102a0eb0 size=0xb
void __fastcall sub_100037e2(void *);
void __fastcall sub_102a0eb0(char *self)
{
	sub_100037e2(*(void **)(self + 0x5d34));
}
// END FUNCTION

// FUNCTION: 0x102a95e0 size=0xa
struct CUnknown102a95e0 { int a[1]; int *sub_102a95e0(int i); };
// TARGET: CUnknown102a95e0::sub_102a95e0
int *CUnknown102a95e0::sub_102a95e0(int i) { return &a[i]; }
// END FUNCTION

// FUNCTION: 0x102a9600 size=0xa
struct CUnknown102a9600 { float a[1]; float sub_102a9600(int i); };
// TARGET: CUnknown102a9600::sub_102a9600
float CUnknown102a9600::sub_102a9600(int i) { return a[i]; }
// END FUNCTION

// FUNCTION: 0x102a9690 size=0xa
struct CUnknown102a9690 { int p[3]; int a; void sub_102a9690(int v); };
// TARGET: CUnknown102a9690::sub_102a9690
void CUnknown102a9690::sub_102a9690(int v) { a = v; }
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

// FUNCTION: 0x102a99c0 size=0xa
void CUnknown102a99c0::sub_102a99c0(char value)
{
	m_bFlag = value;
}
// END FUNCTION

// FUNCTION: 0x102a9ea0 size=0xa
struct CUnknown102a9ea0 { int a[1]; int sub_102a9ea0(int i); };
// TARGET: CUnknown102a9ea0::sub_102a9ea0
int CUnknown102a9ea0::sub_102a9ea0(int i) { return a[i]; }
// END FUNCTION

// FUNCTION: 0x102c6bd0 size=0x8
void __fastcall sub_102c6bd0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x102c6d80 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown102c6d80 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8) V25(p9)
	V25(q0) V25(q1) V25(q2) V25(q3) V25(q4) V25(q5) V25(q6) V25(q7) V25(q8)
	V5(r0) V5(r1) virtual void f0();
	virtual void slot486();
	void sub_102c6d80();
};
void CUnknown102c6d80::sub_102c6d80() { slot486(); }
// END FUNCTION

// FUNCTION: 0x102c6d90 size=0xb
struct CAI_BaseNPC_Ext : public CAI_BaseNPC {
	virtual void vfunc569(); virtual void vfunc570(); virtual void vfunc571(); virtual void vfunc572();
	virtual void vfunc573(); virtual void vfunc574(); virtual void vfunc575(); virtual void vfunc576();
	virtual void vfunc577(); virtual void vfunc578(); virtual void vfunc579(); virtual void vfunc580();
};

void CUnknown102e12c0::sub_102c6d90()
{
	((CAI_BaseNPC_Ext *)m_pOuter)->vfunc580();
}
// END FUNCTION

// FUNCTION: 0x102c7390 size=0xa
void CUnknown102c7390::sub_102c7390(char value)
{
	m_bFlag = value;
}
// END FUNCTION

// FUNCTION: 0x102c8ca0 size=0xa
extern char g_109203dc;
void __fastcall sub_1000c3c9(void *);
void sub_102c8ca0(void)
{
	sub_1000c3c9(&g_109203dc);
}
// END FUNCTION

// FUNCTION: 0x102ca760 size=0xb
void __fastcall sub_102ca760(char *self)
{
	*(int *)(self + 0xa04) = 0;
}
// END FUNCTION

// FUNCTION: 0x102cc520 size=0x9
CUnknown102cc520 *CUnknown102cc520::sub_102cc520()
{
	m_unk0 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x102cc7e0 size=0x8
void __fastcall sub_102cc7e0(int *p) { p[16] = 0; }
// END FUNCTION

// FUNCTION: 0x102d0080 size=0xa
void __fastcall sub_102d0080(int *self, int, int value)
{
	self[1] = value;
}
// END FUNCTION

// FUNCTION: 0x102d00c0 size=0xa
void __fastcall sub_102d00c0(int *self, int, int value)
{
	self[2] = value;
}
// END FUNCTION

// FUNCTION: 0x102d41f0 size=0x8
void __fastcall sub_102d41f0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x102d9150 size=0xa
CUnknown102d9150 *CUnknown102d9150::sub_102d9150()
{
	m_unk4 = -1;
	return this;
}
// END FUNCTION

// FUNCTION: 0x102db420 size=0xa
void CUnknown102db420::sub_102db420(int unused)
{
	m_bFlag = 1;
}
// END FUNCTION

// FUNCTION: 0x102db630 size=0xa
extern char g_1092719c;
void sub_102db630(char value)
{
	g_1092719c = value;
}
// END FUNCTION

// FUNCTION: 0x102dcd10 size=0xa
void CUnknown102dcd10::sub_102dcd10(int unused)
{
	m_unk45d = 1;
}
// END FUNCTION

// FUNCTION: 0x102dce10 size=0x8
void __fastcall sub_102dce10(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x102dd450 size=0x9
bool CUnknown102dd450::sub_102dd450()
{
	if (m_nCount > 0)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x102deea0 size=0x8
void __fastcall sub_102deea0(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x102e0a40 size=0xa
struct CUnknown102e0a40 { int p[6]; int a; void sub_102e0a40(int v); };
// TARGET: CUnknown102e0a40::sub_102e0a40
void CUnknown102e0a40::sub_102e0a40(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x102e0a60 size=0xa
struct CUnknown102e0a60 { int p[7]; int a; void sub_102e0a60(int v); };
// TARGET: CUnknown102e0a60::sub_102e0a60
void CUnknown102e0a60::sub_102e0a60(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x102e0b40 size=0x8
void __fastcall sub_102e0b40(float *p)
{
	p[11] = -1.0f;
}
// END FUNCTION

// FUNCTION: 0x102e12c0 size=0xb
void CUnknown102e12c0::sub_102e12c0()
{
	m_pOuter->vfunc248();
}
// END FUNCTION

// FUNCTION: 0x102e12e0 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1) T(c2) T(c3)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5(); virtual void g6(); virtual void g7(); virtual void g8();
	virtual void target();
};
struct COwner
{
	int pad;
	CSlots *m_pOuter;
};

void __fastcall sub_102e12e0(COwner *self)
{
	self->m_pOuter->target();
}
// END FUNCTION

// FUNCTION: 0x102e2610 size=0xa
int CAI_Motor::sub_102e2610()
{
	return *(int *)(m_pOuter + 0x5d34);
}
// END FUNCTION

// FUNCTION: 0x102e26f0 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) H(c) H(d) H(e) T(f0) T(f1)
	virtual void g0(); virtual void g1();
	virtual void target();
};
struct COwner
{
	int pad;
	CSlots *m_pOuter;
};

void __fastcall sub_102e26f0(COwner *self)
{
	self->m_pOuter->target();
}
// END FUNCTION

// FUNCTION: 0x102e2710 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) H(c) H(d) H(e) T(f0) T(f1)
	virtual void g0(); virtual void g1(); virtual void g2();
	virtual void target();
};
struct COwner
{
	int pad;
	CSlots *m_pOuter;
};

void __fastcall sub_102e2710(COwner *self)
{
	self->m_pOuter->target();
}
// END FUNCTION

// FUNCTION: 0x102e2750 size=0xb
void CUnknown102e12c0::sub_102e2750()
{
	m_pOuter->vfunc515();
}
// END FUNCTION

// FUNCTION: 0x102e27b0 size=0xa
float __fastcall sub_102e27b0(char *self)
{
	return *(float *)(*(char **)(self + 4) + 0x6f4);
}
// END FUNCTION

// FUNCTION: 0x102e2800 size=0x8
struct B { void sub_1000108c(int); };
struct A { int a; B *b; void sub_102e2800(int x); };
void A::sub_102e2800(int x) { b->sub_1000108c(x); }
// END FUNCTION

// FUNCTION: 0x102e2840 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CSlots
{
	T(a0) T(a1) T(a2) T(a3) T(a4) T(a5) T(a6) T(a7) T(a8)
	virtual void d0(); virtual void d1(); virtual void d2();
	virtual void target();
};
struct COwner
{
	int pad;
	CSlots *m_pOuter;
};

void __fastcall sub_102e2840(COwner *self)
{
	self->m_pOuter->target();
}
// END FUNCTION

// FUNCTION: 0x102e7e00 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) H(c) H(d) H(e) T(f0) T(f1)
	virtual void g0(); virtual void g1();
	virtual void target();
};
struct COwner
{
	int pad;
	CSlots *m_pOuter;
};

void __fastcall sub_102e7e00(COwner *self)
{
	self->m_pOuter->target();
}
// END FUNCTION

// FUNCTION: 0x102e7e20 size=0xb
void CUnknown102e12c0::sub_102e7e20()
{
	m_pOuter->vfunc523();
}
// END FUNCTION

// FUNCTION: 0x102e7e40 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) T(b0) T(b1) T(b2) T(b3) T(b4) T(b5)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5();
	virtual void target();
};
struct COwner
{
	int pad;
	CSlots *m_pOuter;
};

void __fastcall sub_102e7e40(COwner *self)
{
	self->m_pOuter->target();
}
// END FUNCTION

// FUNCTION: 0x102e7e60 size=0xb
void CUnknown102e12c0::sub_102e7e60()
{
	m_pOuter->vfunc521();
}
// END FUNCTION

// FUNCTION: 0x102e8250 size=0x8
void __fastcall sub_102e8250(float *p) { p[6] = 3.402823466e+38f; }
// END FUNCTION

// FUNCTION: 0x102e8a80 size=0xa
void __fastcall sub_102e8a80(int *self, int, int value)
{
	self[0xb] = value;
}
// END FUNCTION

// FUNCTION: 0x102ecc00 size=0xa
struct CUnknown102ecc00Outer { char p[0x5d3c]; int a; };
struct CUnknown102ecc00 { int v; CUnknown102ecc00Outer *o; int sub_102ecc00(); };
// TARGET: CUnknown102ecc00::sub_102ecc00
int CUnknown102ecc00::sub_102ecc00() { return o->a; }
// END FUNCTION

// FUNCTION: 0x102ecc20 size=0xa
int __fastcall sub_102ecc20(char *self)
{
	return *(int *)(*(char **)(self + 4) + 0x5d3c);
}
// END FUNCTION

// FUNCTION: 0x102ecce0 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) H(c) H(d) H(e) T(f0)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5();
	virtual void target();
};
struct COwner
{
	int pad;
	CSlots *m_pOuter;
};

void __fastcall sub_102ecce0(COwner *self)
{
	self->m_pOuter->target();
}
// END FUNCTION

// FUNCTION: 0x102ee4f0 size=0x8
struct CInner100016b3 { void sub_100016b3(); };
struct CUnknown102ee4f0 { char pad[0x30]; CInner100016b3 *m_pInner; void sub_102ee4f0(); };
void CUnknown102ee4f0::sub_102ee4f0() { m_pInner->sub_100016b3(); }
// END FUNCTION

// FUNCTION: 0x102ee590 size=0x8
struct B { void sub_10014ef2(int *); };
struct A { char pad[0x30]; B *b; void sub_102ee590(int *x); };
void A::sub_102ee590(int *x) { b->sub_10014ef2(x); }
// END FUNCTION

// FUNCTION: 0x102ee600 size=0x8
struct CInner1000a704 { int sub_1000a704(); };
struct CUnknown102ee600 { char pad[0x30]; CInner1000a704 *m_pInner; int sub_102ee600(); };
int CUnknown102ee600::sub_102ee600() { return m_pInner->sub_1000a704(); }
// END FUNCTION

// FUNCTION: 0x102eeba0 size=0xa
struct CUnknown102eeba0 { int p[6]; int a; void sub_102eeba0(int v); };
// TARGET: CUnknown102eeba0::sub_102eeba0
void CUnknown102eeba0::sub_102eeba0(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x102f8ef0 size=0x8
void __fastcall sub_102f8ef0(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x102f9990 size=0x8
extern char g_1093412c;
void sub_102f9990() { g_1093412c = 0; }
// END FUNCTION

// FUNCTION: 0x102f99b0 size=0x8
extern char g_1093412c;
void sub_102f99b0() { g_1093412c = 1; }
// END FUNCTION

// FUNCTION: 0x10307b40 size=0x9
struct CUnknown10307b40 { int a; void sub_10307b40(int v); };
// TARGET: CUnknown10307b40::sub_10307b40
void CUnknown10307b40::sub_10307b40(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x1030f660 size=0x8
extern char g_106b8540;
char * __stdcall sub_1030f660(int) { return &g_106b8540; }
// END FUNCTION

// FUNCTION: 0x10312320 size=0x8
struct CSub10002397 { void sub_10002397(); };
struct CUnknown10312320 { char pad[0x30]; CSub10002397 m_Sub; void sub_10312320(); };
void CUnknown10312320::sub_10312320() { m_Sub.sub_10002397(); }
// END FUNCTION

// FUNCTION: 0x10319fe0 size=0x9
struct CUnknown10319fe0 { int a; void sub_10319fe0(int v); };
// TARGET: CUnknown10319fe0::sub_10319fe0
void CUnknown10319fe0::sub_10319fe0(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x10321ec0 size=0xb
extern int g_10937ccc;
void sub_10321ec0(void)
{
	g_10937ccc = 0;
}
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

// FUNCTION: 0x1034a230 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown1034a230 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8) V25(p9)
	V25(q0) V25(q1) V25(q2)
	V5(r0) V5(r1) V5(r2) V5(r3)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();
	virtual void slot349();
	void sub_1034a230();
};
void CUnknown1034a230::sub_1034a230() { slot349(); }
// END FUNCTION

// FUNCTION: 0x1034a240 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown1034a240 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8) V25(p9)
	V25(q0) V25(q1) V25(q2)
	V5(r0) V5(r1) V5(r2) V5(r3)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();
	virtual void slot350();
	void sub_1034a240();
};
void CUnknown1034a240::sub_1034a240() { slot350(); }
// END FUNCTION

// FUNCTION: 0x1034b520 size=0x8
struct CUnknown1034b520 { void sub_1000d48b(); void sub_1034b520(int); };
void CUnknown1034b520::sub_1034b520(int) { sub_1000d48b(); }
// END FUNCTION

// FUNCTION: 0x1034b540 size=0x8
struct CUnknown1034b540 { void sub_1000efd9(); void sub_1034b540(int); };
void CUnknown1034b540::sub_1034b540(int) { sub_1000efd9(); }
// END FUNCTION

// FUNCTION: 0x1034b560 size=0x8
struct CUnknown1034b560 { void sub_10001375(); void sub_1034b560(int); };
void CUnknown1034b560::sub_1034b560(int) { sub_10001375(); }
// END FUNCTION

// FUNCTION: 0x1034d590 size=0x8
struct CUnknown1034d590 { void sub_1000a1b4(); void sub_1034d590(int); };
void CUnknown1034d590::sub_1034d590(int) { sub_1000a1b4(); }
// END FUNCTION

// FUNCTION: 0x10359ba0 size=0x8
void __fastcall sub_10359ba0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x1035b1c0 size=0x8
struct CUnknown1035b1c0 { int sub_1035b1c0(int, int, int, int); };
int CUnknown1035b1c0::sub_1035b1c0(int, int, int, int) { return 1; }
// END FUNCTION

// FUNCTION: 0x103661d0 size=0xa
void __fastcall sub_103661d0(char *self, int, int)
{
	self[0x66a8] = 1;
}
// END FUNCTION

// FUNCTION: 0x10373420 size=0x8
void __fastcall sub_10373420(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10390040 size=0x8
void __fastcall sub_10390040(char *p) { p[0x66b8] = 0; }
// END FUNCTION

// FUNCTION: 0x103c76b0 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
#define V100(n) V25(n##0) V25(n##1) V25(n##2) V25(n##3)
struct CUnknown103c76b0 {
	V100(p) V100(q) V100(r) V100(s) V100(t) V100(u)
	V5(w0) V5(w1) V5(w2)
	virtual void f0(); virtual void f1();
	virtual void slot617();
	void sub_103c76b0();
};
void CUnknown103c76b0::sub_103c76b0() { slot617(); }
// END FUNCTION

// FUNCTION: 0x103dc260 size=0x8
void __fastcall sub_103dc260(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x103eee60 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
#define V100(n) V25(n##0) V25(n##1) V25(n##2) V25(n##3)
struct CUnknown103eee60 {
	V100(p) V100(q) V100(r)
	V25(w0) V25(w1) V25(w2)
	virtual void slot375();
	void sub_103eee60();
};
void CUnknown103eee60::sub_103eee60() { slot375(); }
// END FUNCTION

// FUNCTION: 0x104121d0 size=0xb
extern int g_109d3080;
void sub_104121d0()
{
	g_109d3080 = 0;
}
// END FUNCTION

// FUNCTION: 0x1042d650 size=0x9
struct CUnknown1042d650 { int a; CUnknown1042d650* sub_1042d650(); };
// TARGET: CUnknown1042d650::sub_1042d650
CUnknown1042d650* CUnknown1042d650::sub_1042d650() { a = 0; return this; }
// END FUNCTION

// FUNCTION: 0x1042d700 size=0x8
unsigned int __fastcall sub_1042d700(unsigned int *p) { return (*p >> 1) & 0x1f; }
// END FUNCTION

// FUNCTION: 0x1042d9a0 size=0xa
unsigned short CUnknown1042d9a0::sub_1042d9a0()
{
	return m_unk2 & 0xfff;
}
// END FUNCTION

// FUNCTION: 0x1042da80 size=0x9
void CUnknown1042da80::sub_1042da80(int value)
{
	m_unk0 = value;
}
// END FUNCTION
