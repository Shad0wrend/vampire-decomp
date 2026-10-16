// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10032b00 size=0x8
void __fastcall sub_10032b00(int *p)
{
	p[3] = 0;
}
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

// FUNCTION: 0x102e0b40 size=0x8
void __fastcall sub_102e0b40(float *p)
{
	p[11] = -1.0f;
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
