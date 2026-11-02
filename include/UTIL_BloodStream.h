// UTIL_BloodStream (0x101cfb30) and its helpers: the engine objects it reaches (names provisional).
#pragma once

#include "Vector.h"

class CRecipientFilter;

struct CEffectsServerBlood	// *g_10566258: the server effects object
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2();
	virtual void Sparks(const Vector &origin, int nMagnitude, int nTrailLength, const Vector *pvecDir);	// slot 3 (+0xc), called with (origin, 1, 1, 0)
};

struct CTempEntsBlood	// *g_10540528: the temp entity interface; slot 14 (+0x38) is BloodStream
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13();
	virtual void BloodStream(CRecipientFilter &filter, float delay, const Vector *org, const Vector *dir, int r, int g, int b, int a, int amount);	// slot 14 (+0x38)
};

struct CGameRulesBlood	// *g_1070ba0c: the game rules; slot 21 (+0x54) answers whether the violence setting is the gory one (amount x5, red blood)
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20();
	virtual bool vfunc21();
};

extern CEffectsServerBlood *g_10566258;
extern CTempEntsBlood *g_10540528;
extern CGameRulesBlood *g_1070ba0c;
extern int g_1070ba34;	// 1 when the blood colour 0xf7 must be remapped to 0
