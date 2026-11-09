// CEntitySoundOriginView: the CBaseEntity virtual table as a plain list of slots up to slot 222, to call
// GetSoundEmissionOrigin (slot 222, returns the origin by value) on an entity whose class only declares the head of its vtable.
#pragma once

#include "Vector.h"

#define ESO_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CEntitySoundOriginView
{
public:
	ESO_SLOTS10(a00) ESO_SLOTS10(a01) ESO_SLOTS10(a02) ESO_SLOTS10(a03) ESO_SLOTS10(a04)
	ESO_SLOTS10(a05) ESO_SLOTS10(a06) ESO_SLOTS10(a07) ESO_SLOTS10(a08) ESO_SLOTS10(a09)
	ESO_SLOTS10(a10) ESO_SLOTS10(a11) ESO_SLOTS10(a12) ESO_SLOTS10(a13) ESO_SLOTS10(a14)
	ESO_SLOTS10(a15) ESO_SLOTS10(a16) ESO_SLOTS10(a17) ESO_SLOTS10(a18)
	virtual void a190(); virtual void a191();
	virtual Vector WorldSpaceCenter();	// slot 192
	virtual void a193(); virtual void a194(); virtual void a195(); virtual void a196(); virtual void a197(); virtual void a198(); virtual void a199();
	ESO_SLOTS10(a20)
	virtual void a210(); virtual void a211(); virtual void a212(); virtual void a213(); virtual const Vector &a214(); virtual void a215(); virtual void a216();
	virtual const float *GetAbsOrigin();	// slot 217
	virtual void a218(); virtual void a219();
	virtual const float *GetOrigin();	// slot 220
	virtual void a221();
	virtual Vector GetSoundEmissionOrigin();	// slot 222
};
