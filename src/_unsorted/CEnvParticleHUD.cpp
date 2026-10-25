// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fc570 size=0x3e
#include "CEnvParticleHUD.h"

void *sub_1000ac8b(int a);	// cdecl (the caller pops the argument), ecx not used

struct CEnvParticleHUDView
{
	void sub_1000e728(int a);	// called directly (stub 0x1000e728)
	void sub_10008d2d();	// CEnvParticle::vfunc241 (stub 0x10008d2d), tail called
};

struct CUnknownParticleObj
{
	int sub_10013d09(int a);	// called directly (stub 0x10013d09)
};

// TARGET: CEnvParticleHUD::vfunc241
void CEnvParticleHUD::vfunc241()
{
	CUnknownParticleObj *pObj = (CUnknownParticleObj *)sub_1000ac8b(1);
	if (pObj) {
		if (pObj->sub_10013d09(0)) {
			((CEnvParticleHUDView *)this)->sub_1000e728(pObj->sub_10013d09(0));
			((CEnvParticleHUDView *)this)->sub_10008d2d();
			return;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100fd4d0 size=0x1e
#include "CEnvParticleHUD.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvParticleHUD::vfunc5
CEnvParticleHUD *CEnvParticleHUD::vfunc5(unsigned int flags)
{
	sub_10011ac7();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
