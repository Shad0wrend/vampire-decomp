// CBCCSlotViews: vtable views for calling slots of a combat character / weapon / entity that the class headers do not model
// as virtuals. Cast the object to the view and call the slot; the placeholders keep the slot numbers right.
#pragma once

#define VIEW_SLOT(n) virtual void s##n();
#define VIEW_SLOT10(p) VIEW_SLOT(p##0) VIEW_SLOT(p##1) VIEW_SLOT(p##2) VIEW_SLOT(p##3) VIEW_SLOT(p##4) VIEW_SLOT(p##5) VIEW_SLOT(p##6) VIEW_SLOT(p##7) VIEW_SLOT(p##8) VIEW_SLOT(p##9)
#define VIEW_SLOT100(p) VIEW_SLOT10(p##0) VIEW_SLOT10(p##1) VIEW_SLOT10(p##2) VIEW_SLOT10(p##3) VIEW_SLOT10(p##4) VIEW_SLOT10(p##5) VIEW_SLOT10(p##6) VIEW_SLOT10(p##7) VIEW_SLOT10(p##8) VIEW_SLOT10(p##9)

class CCombatCharSlotView	// slot 298: the number of weapons the character has of a weapon slot type
{
public:
	VIEW_SLOT100(0) VIEW_SLOT100(1)
	VIEW_SLOT10(20) VIEW_SLOT10(21) VIEW_SLOT10(22) VIEW_SLOT10(23) VIEW_SLOT10(24) VIEW_SLOT10(25) VIEW_SLOT10(26) VIEW_SLOT10(27) VIEW_SLOT10(28)
	VIEW_SLOT(290) VIEW_SLOT(291) VIEW_SLOT(292) VIEW_SLOT(293) VIEW_SLOT(294) VIEW_SLOT(295) VIEW_SLOT(296) VIEW_SLOT(297)
	virtual int vfunc298(int slotType);
};

class CWeaponSlotView	// slot 360: the weapon's flag bits
{
public:
	VIEW_SLOT100(0) VIEW_SLOT100(1) VIEW_SLOT100(2)
	VIEW_SLOT10(30) VIEW_SLOT10(31) VIEW_SLOT10(32) VIEW_SLOT10(33) VIEW_SLOT10(34) VIEW_SLOT10(35)
	virtual unsigned int vfunc360();
};

class CEntityOriginSlotView	// slot 217: CBaseEntity::GetAbsOrigin (pointer to three floats)
{
public:
	VIEW_SLOT100(0) VIEW_SLOT100(1)
	VIEW_SLOT10(20)
	VIEW_SLOT(210) VIEW_SLOT(211) VIEW_SLOT(212) VIEW_SLOT(213) VIEW_SLOT(214) VIEW_SLOT(215) VIEW_SLOT(216)
	virtual float *vfunc217();
};

class CEntityOrigin220SlotView	// slot 220: CBaseEntity::GetOrigin (pointer to three floats)
{
public:
	VIEW_SLOT100(0) VIEW_SLOT100(1)
	VIEW_SLOT10(20)
	VIEW_SLOT(210) VIEW_SLOT(211) VIEW_SLOT(212) VIEW_SLOT(213) VIEW_SLOT(214) VIEW_SLOT(215) VIEW_SLOT(216) VIEW_SLOT(217) VIEW_SLOT(218) VIEW_SLOT(219)
	virtual float *vfunc220();
};

class CEntityGroundSlotView	// slot 208: CBaseEntity::SetGroundEntity(CBaseEntity *pEnt)
{
public:
	VIEW_SLOT100(0) VIEW_SLOT100(1)
	VIEW_SLOT(200) VIEW_SLOT(201) VIEW_SLOT(202) VIEW_SLOT(203) VIEW_SLOT(204) VIEW_SLOT(205) VIEW_SLOT(206) VIEW_SLOT(207)
	virtual void vfunc208(void *pEnt);
};

class CServerUnknownSlotView	// slot 4: IServerUnknown::GetBaseEntity
{
public:
	VIEW_SLOT(0) VIEW_SLOT(1) VIEW_SLOT(2) VIEW_SLOT(3)
	virtual void *vfunc4();
};

class CCombatCharGibSlotView	// slots 394..397 of a combat character: Event_Gibbed's follow-ups and the gib convar tests
{
public:
	VIEW_SLOT100(0) VIEW_SLOT100(1) VIEW_SLOT100(2)
	VIEW_SLOT10(30) VIEW_SLOT10(31) VIEW_SLOT10(32) VIEW_SLOT10(33) VIEW_SLOT10(34) VIEW_SLOT10(35) VIEW_SLOT10(36) VIEW_SLOT10(37) VIEW_SLOT10(38)
	VIEW_SLOT(390) VIEW_SLOT(391) VIEW_SLOT(392) VIEW_SLOT(393)
	virtual char vfunc394();	// the follow-up Event_Gibbed runs when nothing gibs
	virtual void vfunc395();	// CorpseFade
	virtual char vfunc396();	// gibs allowed for humans
	virtual char vfunc397();	// gibs allowed for aliens
};
