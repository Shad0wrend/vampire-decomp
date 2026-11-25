// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100b54b0 size=0x33
#include "C_Sprite.h"
C_Sprite *pcd_emit_100b54b0() { return new C_Sprite; }
// TARGET: ??_GC_Sprite@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10135d70 size=0x6
extern int g_102c5b5c;

#include "C_Sprite.h"

// TARGET: C_Sprite::vfunc17
int C_Sprite::vfunc17()
{
	return (int)&g_102c5b5c;
}
// END FUNCTION

// FUNCTION: 0x10135d80 size=0x6
#include "C_Sprite.h"

// TARGET: C_Sprite::vfunc16
int C_Sprite::vfunc16()
{
	return (int)"C_Sprite";
}
// END FUNCTION

// FUNCTION: 0x10136660 size=0x86
#include "C_Sprite.h"
struct EngTime121
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38();
	virtual double Time(int a);
};
extern EngTime121 *g_104a57d4;
// TARGET: C_Sprite::vfunc121
float C_Sprite::vfunc121()
{
	float *f = (float *)this;
	if (f[0x448 / 4] != 0.0f)
	{
		double end = f[0x45c / 4] + f[0x448 / 4];
		if (!(g_104a57d4->Time(0) > end))
			return (g_104a57d4->Time(0) - f[0x45c / 4]) / f[0x448 / 4] * (f[0x458 / 4] - f[0x454 / 4]) + f[0x454 / 4];
	}
	return f[0x444 / 4];
}
// END FUNCTION
