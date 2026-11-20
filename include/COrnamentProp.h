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
	virtual void vfunc134(); virtual float vfunc135(float); virtual bool vfunc136(); virtual int vfunc137(); virtual int vfunc138();  	virtual void vfunc139(CBaseEntity *); virtual bool vfunc140(CBaseEntity *); virtual void vfunc141(class CVDmg_t *, const Vector *, struct CGameTrace *); virtual int vfunc142(struct CTakeDamageInfo *); virtual int vfunc143(float, int); virtual void vfunc144(void *); virtual int vfunc145(); virtual void vfunc146(void *, const Vector &, void *); virtual bool vfunc147(CBaseEntity *); virtual void vfunc148();  	virtual void vfunc149(int, int); virtual void vfunc150(); virtual void vfunc151(class CBaseCombatWeapon *); virtual float vfunc152(); virtual int vfunc153(); virtual int vfunc154(int, int); virtual void vfunc155(struct CGameTrace *, int, char, int, class CBasePlayer *, int, char); virtual void vfunc156(int); virtual bool vfunc157(int); virtual bool vfunc158();  	virtual void vfunc159(); virtual bool vfunc160(const char *); virtual bool vfunc161(const char *); virtual char vfunc162(); virtual void vfunc163(); virtual bool vfunc164(); virtual void vfunc165(void *); virtual bool vfunc166(CBaseEntity *); virtual CBaseEntity *vfunc167(); virtual CBaseEntity *vfunc168();  	virtual void vfunc169(const Vector *); virtual void vfunc170(const Vector *); virtual void vfunc171(); virtual void vfunc172(); virtual void vfunc173(CBaseEntity *, CBaseEntity *, int, int); virtual void vfunc174(CBaseEntity *); virtual void vfunc175(CBaseEntity *); virtual void vfunc176(CBaseEntity *); virtual void vfunc177(CBaseEntity *); virtual void vfunc178(CBaseEntity *);  	virtual void vfunc179(); virtual void vfunc180(); virtual void vfunc181(const float *, const float *, const float *); virtual void vfunc182(); virtual void vfunc183(); virtual void vfunc184(); virtual void vfunc185(struct CFireBulletsInfo *); virtual void vfunc186(); virtual CBaseEntity *vfunc187(); virtual void vfunc188();  	virtual void vfunc189(); virtual float vfunc190(); virtual void vfunc191(int); virtual Vector vfunc192(); virtual Vector vfunc193();
	virtual float *vfunc194(); virtual float *vfunc195(); virtual Vector vfunc196(); virtual Vector vfunc197(const Vector &, char, char); virtual float *vfunc198();
	virtual void vfunc199(float *, float *); virtual int vfunc200(); virtual bool vfunc201(CBaseEntity *, int, CBaseEntity **, int);
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
	char m_szOrnamentModel[260];	// 0x07e0
};
