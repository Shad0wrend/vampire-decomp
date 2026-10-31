// CEntityDebugView: the CBaseEntity virtual table as a plain list of slots up to slot 217, to call the slots the debug
// overlay code (DrawDebugGeometryOverlays) uses on an entity whose class only declares the head of its vtable.
#pragma once

#define EDV_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CEntityDebugView
{
public:
	EDV_SLOTS10(a00) EDV_SLOTS10(a01) EDV_SLOTS10(a02) EDV_SLOTS10(a03) EDV_SLOTS10(a04)
	EDV_SLOTS10(a05) EDV_SLOTS10(a06) EDV_SLOTS10(a07) EDV_SLOTS10(a08) EDV_SLOTS10(a09)
	EDV_SLOTS10(a10) EDV_SLOTS10(a11) EDV_SLOTS10(a12) EDV_SLOTS10(a13) EDV_SLOTS10(a14)
	EDV_SLOTS10(a15) EDV_SLOTS10(a16)
	virtual void a170(); virtual void a171();
	virtual CEntityDebugView *vfunc172();	// slot 172 (the entity the character is heading for)
	virtual void a173(); virtual void a174(); virtual void a175(); virtual void a176(); virtual void a177(); virtual void a178(); virtual void a179();
	EDV_SLOTS10(a18)
	virtual void a190(); virtual void a191(); virtual void a192();
	virtual float *vfunc193(float *pResult, int a, int b, int c, int d, int e);	// slot 193 (a position by value in a hidden result vector, five arguments)
	virtual void a194(); virtual void a195(); virtual void a196(); virtual void a197(); virtual void a198(); virtual void a199();
	EDV_SLOTS10(a20)
	virtual void a210(); virtual void a211(); virtual void a212(); virtual void a213(); virtual void a214(); virtual void a215(); virtual void a216();
	virtual float *vfunc217();	// slot 217: the absolute origin
};
