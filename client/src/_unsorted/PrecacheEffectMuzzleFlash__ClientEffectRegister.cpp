// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003a620 size=0x50
#include "CClientEffect.h"

extern void *g_104a57ec;
extern const char *g_10280728[5];

struct IMaterialV
{
	virtual void m0();
	virtual void m1();
	virtual void m2();
	virtual void m3();
	virtual void m4();
	virtual void m5();
	virtual void m6();
	virtual void m7();
	virtual void m8();
	virtual void m9();
	virtual void m10();
	virtual void m11();
	virtual void vfunc12(int);
	virtual void vfunc13(int);
};

struct IMaterialSystemV
{
	virtual void m0();
	virtual void m1();
	virtual void m2();
	virtual void m3();
	virtual void m4();
	virtual void m5();
	virtual void m6();
	virtual void m7();
	virtual void m8();
	virtual void m9();
	virtual void m10();
	virtual void m11();
	virtual void m12();
	virtual void m13();
	virtual void m14();
	virtual void m15();
	virtual void m16();
	virtual void m17();
	virtual void m18();
	virtual void m19();
	virtual void m20();
	virtual void m21();
	virtual void m22();
	virtual void m23();
	virtual void m24();
	virtual IMaterialV *vfunc25(const char *name, bool *pFound, int arg);
};

void PrecacheEffectMuzzleFlash::ClientEffectRegister::vfunc0(bool bEnable)
{
	bool bOrig = bEnable;
	for (unsigned int i = 0; i < 0x14; i += 4)
	{
		const char *pName = *(const char **)((char *)g_10280728 + i);
		IMaterialV *p = ((IMaterialSystemV *)g_104a57ec)->vfunc25(pName, &bEnable, 1);
		if (bEnable && p)
		{
			if (bOrig)
				p->vfunc12(0);
			else
				p->vfunc13(0);
		}
	}
}
// END FUNCTION
