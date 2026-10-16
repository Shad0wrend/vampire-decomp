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

// FUNCTION: 0x100eb130 size=0x8
void __fastcall sub_100eb130(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x100eb400 size=0x8
void __fastcall sub_100eb400(int *p) { p[4] = 0; }
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

// FUNCTION: 0x101bc000 size=0x8
void __fastcall sub_101bc000(int *p)
{
	p[9] = 0;
}
// END FUNCTION

// FUNCTION: 0x1021e410 size=0x8
void __fastcall sub_1021e410(int *p)
{
	p[3] = 0;
}
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

// FUNCTION: 0x102d41f0 size=0x8
void __fastcall sub_102d41f0(int *p) { p[3] = 0; }
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

// FUNCTION: 0x10359ba0 size=0x8
void __fastcall sub_10359ba0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10373420 size=0x8
void __fastcall sub_10373420(int *p) { p[3] = 0; }
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
