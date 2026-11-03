// COrnamentProp: prop that follows a parent entity (RTTI .?AVCOrnamentProp@@, via CDynamicProp / CBreakableProp / CBaseProp /
// CBaseAnimating / CBaseToggle). Bases are not modelled; it derives from CBaseEntity directly and declares placeholder
// slots up to the ones the recovered code calls (slot 202).
#pragma once

#include "CBaseEntity.h"
#include "ScopeTrace.h"

#define COP_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class COrnamentProp : public CBaseEntity
{
public:
	// Placeholder slots 134..201 (the base declares slots up to 133).
	COP_SLOTS10(a13) COP_SLOTS10(a14) COP_SLOTS10(a15) COP_SLOTS10(a16) COP_SLOTS10(a17) COP_SLOTS10(a18)
	virtual void b00(); virtual void b01(); virtual void b02(); virtual void b03(); virtual void b04();
	virtual void b05(); virtual void b06(); virtual void b07();
	virtual void vfunc202(CBaseEntity *pOwner);	// SetOwnerEntity

	virtual void vfunc103();	// "COrnamentProp::Spawn": stores the parent name (slot 9) in the buffer at +0x7e0, CDynamicProp::vfunc103, classname "prop_dynamic_ornament", then sub_10190fa0
	virtual void vfunc113();	// slot 113: attaches the prop to the entity named by the field at +0x7dc
	void sub_10190fa0();	// detaches the prop: clears the aim entity, the owner and the parent, adds solid flag 4 (inlined AddSolidFlags with scope trace), then slot 93(0, 0), slot 66() and sub_100b3b00()
	void sub_10191130(const char *szName, CBaseEntity *pSearching);	// finds the entity by name (CGlobalEntityList::FindEntityByName from the list at 0x106eb5d8, no start entity, no activator) and attaches the prop to it (sub_10191170)
	void sub_10191170(CBaseEntity *pParent);	// attaches the prop to the entity pParent (stub 0x10004fbb), called by the creation helper: slot 67(), SetAimEnt, SetParent, SetOwnerEntity, slot 93(0xb, 0), sub_100b3b00(); without a parent warns "%s could not find entity to attach to, deleting..." and removes itself
	void sub_100a0670(CBaseEntity *pParent, int iAttachment);	// "CBaseEntity::SetParent" (stub 0x10005650)
public:
	char m_pad03e0[0x7dc - 0x3e0];
	struct COrnamentName
	{
		const char *m_p;
		bool IsSet() const { return m_p != 0; }
		const char *String() const { return m_p ? m_p : g_106b8540; }
	};
	COrnamentName m_name7dc;	// 0x7dc: the parent name to attach to
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual int vfunc80();
};
