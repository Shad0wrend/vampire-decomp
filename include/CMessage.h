// CMessage: env_message-style entity (RTTI CMessage : CPointEntity : CBaseEntity), vtable 0x104591ac, size 0x47c; only what matched code needs.
// Constructor: CPointEntity (CBaseEntity(0), vtable 0x1044b584), the output's COutputEvent constructor, own vftable.
#pragma once

#include "CPointEntity.h"
#include "COutputEvent.h"

struct inputdata_t;

class CMessage : public CPointEntity
{
public:
	void vfunc104();	// slot 104 override: the game's 0x10101ff0
	void vfunc103();	// slot 103: slot 104(), then the "CBaseEntity::SetSolid" scope trace around the collision property's SetSolid(0), SetMoveType(0, 0) (slot 93), then picks the float at +0x45c from the int at +0x458 (1: 1.25, 2: 0.8, 3: 0, else 60.0), clears it and scales the float at +0x454 by 0.1 (1.0 when not above 0)
	void sub_10102030(inputdata_t *inputdata);	// "CMessage::InputShowMessage": shows the message text to the activator (the local player when it has none), or to everyone with spawn flag 2, plays the sound from this entity's position and fires the output; removes the entity with spawn flag 1

	const char *m_pszMessage450;	// 0x450: the message text name
	float m_f454;	// 0x454: the sound volume
	int m_n458;	// 0x458
	float m_f45c;	// 0x45c: the sound attenuation
	const char *m_pszSound460;	// 0x460: the sound name
	COutputEvent m_OnShowMessage464;	// 0x464
public:
    virtual datamap_t * vfunc82();
    virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CNPC_VGargoyle (transplant)
};
