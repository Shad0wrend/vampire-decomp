// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003a780 size=0x33
#include "C_LocalTempEntity.h"
C_LocalTempEntity *pcd_emit_1003a780() { return new C_LocalTempEntity; }
// TARGET: ??_GC_LocalTempEntity@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1003a7c0 size=0x77
#include "C_LocalTempEntity.h"

class CUnknown1009fc10
{
public:
	void sub_1009fc10(int);
};

void C_LocalTempEntity::vfunc143(int a, float b)
{
	*(int *)((char *)this + 0x44) = -1;
	vfunc78();
	*(int *)((char *)this + 0x7ac) = 0;
	*(int *)((char *)this + 0x56c) = 0;
	*(float *)((char *)this + 0x7b0) = b + 0.75;
	*(int *)((char *)this + 0x570) = 0;
	((CUnknown1009fc10 *)this)->sub_1009fc10(a);
	*(int *)((char *)this + 0x48) = 0;
	*(int *)((char *)this + 0x4c) = 0;
	*(int *)((char *)this + 0x7c8) = 0;
	*(int *)((char *)this + 0x7f4) = 0;
	*(float *)((char *)this + 0x7c0) = 0.5f;
	*(short *)((char *)this + 0x7d0) = -1;
	*(float *)((char *)this + 0x7c4) = 1.0f;
}
// END FUNCTION

// FUNCTION: 0x1003aa00 size=0x86
#include "C_LocalTempEntity.h"
struct EngTime144
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
extern EngTime144 *g_104a57d4;
// TARGET: C_LocalTempEntity::vfunc144
bool C_LocalTempEntity::vfunc144()
{
	bool ret = true;
	float timeLeft = *(float *)((char *)this + 0x7b0) - g_104a57d4->Time(0);
	if (timeLeft < 0.0f)
	{
		if (*(unsigned char *)((char *)this + 0x7ac) & 0x80)
		{
			if (*(int *)((char *)this + 0x48) == 0)
				*(int *)((char *)this + 0x48) = 2;
			int alpha = (int)((timeLeft * *(float *)((char *)this + 0x7c0) + 1.0f) * *(int *)((char *)this + 0x7ec));
			if (alpha <= 0)
			{
				ret = false;
				alpha = 0;
			}
			*((unsigned char *)this + 0x53) = alpha;
		}
		else
			return false;
	}
	return ret;
}
// END FUNCTION
