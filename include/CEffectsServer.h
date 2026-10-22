// CEffectsServer (RTTI .?AVCEffectsServer@@): bases IEffects and IPredictionSystem at +0x0 are not
// modelled; primary vtable 0x10455e18 has 11 slots.
#pragma once

class CBaseEntity;

class CEffectsServer
{
public:
	virtual CEffectsServer *vfunc0(unsigned int flags);
	virtual void vfunc1(int a, int b, int c, int d, unsigned char e, unsigned char f, int g, unsigned char h, unsigned char i, unsigned char j, unsigned char k, unsigned char l, unsigned char m, unsigned char n, unsigned char o, unsigned char p);	// slot 1: a 16 argument effect (the bytes h, i, k become floats) broadcast to every player through slot 8 of the temp entity system (global 0x10540528), unless the prediction system's suppressed host leaves nobody
	virtual void vfunc2(const float *pOrigin, int a, float b, float c);	// slot 2: like slot 7 with a scaled value: forwards (filter, 0, pOrigin, a, b * 0.1f, (int)c) to slot 34 of the temp entity system
	virtual void vfunc3(const float *pOrigin, int a, int b, int c);	// slot 3: PVS filter for the origin, suppressed host dropped, forwards (filter, 0, pOrigin, a, b, c) to slot 35 of the temp entity system
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6(const float *pOrigin, int a);	// slot 6: builds a PVS filter for the origin, drops the suppressed host from it (unless it is an init message) and, when recipients remain, forwards (filter, 0, pOrigin, a) to slot 30 of the temp entity system (global 0x10540528)
	virtual void vfunc7(const float *pOrigin, int a, int b);	// slot 7: as slot 6 with two more values, forwarded to slot 31 of the temp entity system as (filter, 0, pOrigin, a, b)
	virtual void vfunc8();
	virtual float vfunc9();
	virtual void vfunc10();
	void sub_1000168b();	// as in CDataObjectAccessSystem (transplant)

	char m_pad0004[8];
	CBaseEntity *m_pSuppressHost;	// 0x0c: the prediction system's suppressed host
	int m_nSuppressCount;	// 0x10: while positive nothing is suppressed
};
