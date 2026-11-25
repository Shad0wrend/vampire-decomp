// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100054f0 size=0x1e
#include "CPlasmaSpray.h"

// VC6 writes CPlasmaSpray's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CPlasmaSpray *pcd_emit_100054f0(const CPlasmaSpray &other) { return new CPlasmaSpray(other); }

// TARGET: ??_GCPlasmaSpray@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10005510 size=0x4f
#include "CPlasmaSpray.h"
#include "Vector.h"

struct IEng
{
	virtual void a0();
	virtual void a1();
	virtual void a2();
	virtual void a3();
	virtual void a4();
	virtual void a5();
	virtual void a6();
	virtual void a7();
	virtual void a8();
	virtual void a9();
	virtual void a10();
	virtual void a11();
	virtual void a12();
	virtual void a13();
	virtual void a14();
	virtual void a15();
	virtual void a16();
	virtual void a17();
	virtual void a18();
	virtual void a19();
	virtual void a20();
	virtual void a21();
	virtual void a22();
	virtual void a23();
	virtual void a24();
	virtual void a25();
	virtual void a26();
	virtual void a27();
	virtual void a28();
	virtual void a29();
	virtual void a30();
	virtual void a31();
	virtual void a32();
	virtual void a33();
	virtual void a34();
	virtual void a35();
	virtual void a36();
	virtual void a37();
	virtual void a38();
	virtual void a39();
	virtual void a40();
	virtual float a41(int x);
};

extern int g_104a57d4;

void CPlasmaSpray::vfunc11(void *pVec, int arg1)
{
	float flScale = ((IEng *)(void *)g_104a57d4)->a41(0);
	Vector *pOrigin = (Vector *)((char *)pVec + 0x18);
	*pOrigin += Vector(0.0f, 0.0f, -1000.0f) * flScale;
}
// END FUNCTION
