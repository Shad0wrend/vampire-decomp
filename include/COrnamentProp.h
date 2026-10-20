// COrnamentProp: prop that follows a parent entity (RTTI .?AVCOrnamentProp@@, via CDynamicProp / CBreakableProp / CBaseProp /
// CBaseAnimating / CBaseToggle). Bases are not modelled; it derives from CBaseEntity directly and declares placeholder
// slots up to the ones the recovered code calls (slot 202).
#pragma once

#include "CBaseEntity.h"

#define COP_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class COrnamentProp : public CBaseEntity
{
public:
	// Placeholder slots 134..201 (the base declares slots up to 133).
	COP_SLOTS10(a13) COP_SLOTS10(a14) COP_SLOTS10(a15) COP_SLOTS10(a16) COP_SLOTS10(a17) COP_SLOTS10(a18) COP_SLOTS10(a19)
	virtual void b00(); virtual void b01(); virtual void b02(); virtual void b03(); virtual void b04();
	virtual void b05(); virtual void b06(); virtual void b07();
	virtual void vfunc202(CBaseEntity *pOwner);	// SetOwnerEntity

	void sub_10190fa0();	// detaches the prop: clears the aim entity, the owner and the parent, adds solid flag 4 (inlined AddSolidFlags with scope trace), then slot 93(0, 0), slot 66() and sub_100b3b00()
};
