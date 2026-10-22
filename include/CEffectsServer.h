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
	virtual void vfunc6(const float *pOrigin, int a);	// slot 6: builds a PVS filter for the origin, drops the suppressed host from it (unless it is an init message) and, when recipients remain, forwards (filter, 0, pOrigin, a) to slot 30 of the temp entity system (global 0x10540528)
	virtual void vfunc7(const float *pOrigin, int a, int b);	// slot 7: as slot 6 with two more values, forwarded to slot 31 of the temp entity system as (filter, 0, pOrigin, a, b)
	virtual void vfunc8();
	virtual float vfunc9();
	virtual void vfunc10();
	void sub_1000168b();	// as in CDataObjectAccessSystem (transplant)

	// IPredictionSystem's inline helpers
	bool DisableSuppress() { return m_nSuppressCount > 0; }
	CBaseEntity *GetSuppressHost() { if (DisableSuppress()) return 0; return m_pSuppressHost; }

	char m_pad0004[8];
	CBaseEntity *m_pSuppressHost;	// 0x0c: the prediction system's suppressed host
	int m_nSuppressCount;	// 0x10: while positive nothing is suppressed
};
