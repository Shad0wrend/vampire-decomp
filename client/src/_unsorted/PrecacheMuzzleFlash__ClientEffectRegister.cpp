// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10044650 size=0x50
#include "CClientEffect.h"

struct MatV
{
	virtual void p0();
	virtual void p1();
	virtual void p2();
	virtual void p3();
	virtual void p4();
	virtual void p5();
	virtual void p6();
	virtual void p7();
	virtual void p8();
	virtual void p9();
	virtual void p10();
	virtual void p11();
	virtual void vfunc12(int a);
	virtual void vfunc13(int a);
};

struct MatSysV
{
	virtual void q0();
	virtual void q1();
	virtual void q2();
	virtual void q3();
	virtual void q4();
	virtual void q5();
	virtual void q6();
	virtual void q7();
	virtual void q8();
	virtual void q9();
	virtual void q10();
	virtual void q11();
	virtual void q12();
	virtual void q13();
	virtual void q14();
	virtual void q15();
	virtual void q16();
	virtual void q17();
	virtual void q18();
	virtual void q19();
	virtual void q20();
	virtual void q21();
	virtual void q22();
	virtual void q23();
	virtual void q24();
	virtual MatV *v25(const char *pName, bool *pFound, bool complain);
};

extern int g_104a57ec;
extern const char *g_10282ff0[4];

void PrecacheMuzzleFlash::ClientEffectRegister::vfunc0(bool bParam)
{
	for ( unsigned int i = 0; i < 4; i++ )
	{
		const char *pName = g_10282ff0[i];
		bool bFound;
		MatV *pMat = ((MatSysV *)(void *)g_104a57ec)->v25(pName, &bFound, true);
		if ( bFound && pMat )
		{
			if ( bParam )
				pMat->vfunc12(0);
			else
				pMat->vfunc13(0);
		}
	}
}
// END FUNCTION
