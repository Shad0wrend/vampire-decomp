// CEffectsServer (RTTI .?AVCEffectsServer@@): bases IEffects and IPredictionSystem at +0x0 are not
// modelled; primary vtable 0x10455e18 has 11 slots.
#pragma once

class CBaseEntity;

class CEffectsServer
{
public:
	virtual CEffectsServer *vfunc0(unsigned int flags);
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8(const float *pOrigin, int a);	// slot 8 (ret 8): a temp entity style effect at the origin: sends it to the players that can see the origin (a CPVSFilter), without the prediction suppressed host when there is one
	virtual float vfunc9();
	virtual void vfunc10();
	void sub_1000168b();	// as in CDataObjectAccessSystem (transplant)

	char m_pad0004[8];
	CBaseEntity *m_pSuppressHost;	// 0x0c: IPredictionSystem's suppressed host (player), null for none
	int m_nSuppressDisabled;	// 0x10: the suppression is off while this is above zero
};
