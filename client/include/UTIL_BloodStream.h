// UTIL_BloodStream (0x101cfb30) and its helpers: the engine objects it reaches (names provisional).
#pragma once

#include "Vector.h"

class CRecipientFilter;
struct CGameTrace;

struct CEffectsServerBlood	// *g_10566258: the server effects object
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2();
	virtual void Sparks(const Vector &origin, int nMagnitude, int nTrailLength, const Vector *pvecDir);	// slot 3 (+0xc), called with (origin, 1, 1, 0)
	virtual void vfunc4(); virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8();
	virtual float vfunc9();	// slot 9 (+0x24): the current game time in seconds
};

struct CTempEntsBlood	// *g_10540528: the temp entity interface; slot 14 (+0x38) is BloodStream, slots 19 / 25 are the decal variants
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(CRecipientFilter &filter, int delay, const Vector *pOrigin, int a, const char *psz); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13();
	virtual void BloodStream(CRecipientFilter &filter, float delay, const Vector *org, const Vector *dir, int r, int g, int b, int a, int amount);	// slot 14 (+0x38)
	virtual void vfunc15(); virtual void vfunc16(CRecipientFilter &filter, float delay, const Vector *pOrigin, int entIndex, int nValue); virtual void vfunc17(); virtual void vfunc18();
	virtual void vfunc19(CRecipientFilter &filter, int delay, const Vector *pOrigin, const CGameTrace *pTrace, int entIndex, int hitbox, int decalId, bool bFlag = false);	// slot 19 (+0x4c): a decal temp entity (broadcast filter path)
	virtual void vfunc20(CRecipientFilter &filter, int delay, const Vector *pOrigin, int r, int g, int b, int size, float x, float y, float z); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23(); virtual void vfunc24();
	virtual void vfunc25(CRecipientFilter &filter, int a2, const Vector *pOrigin, const CGameTrace *pTrace, int entIndex, int hitbox, int a7, int a8, char a9, int a10, int a11, int a12, int a13);	// slot 25 (+0x64): a decal temp entity (PAS filter path)
	virtual void vfunc26(); virtual void vfunc27(); virtual void vfunc28(); virtual void vfunc29();
	virtual void vfunc30(); virtual void vfunc31(); virtual void vfunc32(); virtual void vfunc33();
	virtual void vfunc34(CRecipientFilter &filter, int delay, const Vector *org, int nModelIndex, float flScale, int nParam);	// slot 34 (+0x88)
};

struct CGameRulesBlood	// *g_1070ba0c: the game rules; slot 21 (+0x54) answers whether the violence setting is the gory one (amount x5, red blood)
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20();
	virtual bool vfunc21();
	virtual void vfunc22(); virtual void vfunc23(); virtual void vfunc24(); virtual void vfunc25(); virtual void vfunc26(); virtual void vfunc27();
	virtual void vfunc28(); virtual void vfunc29(); virtual void vfunc30(); virtual void vfunc31(); virtual void vfunc32();
	virtual void vfunc33(class CUnknown101c26d0 &info, const Vector *pOrigin, float flRadius, int nDamage, bool bFlag);
};

extern CEffectsServerBlood *g_102ba388;
	// 1 when the blood colour 0xf7 must be remapped to 0
