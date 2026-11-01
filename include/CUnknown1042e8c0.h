// CUnknown1042e8c0: stand-in for CSprite (an entity; slot 104 is its Precache), derived from CBaseEntity so the base
// virtual calls can be written; the real CSprite header does not carry the base class yet.
#pragma once

#include "CBaseEntity.h"

class CUnknown1042e8c0 : public CBaseEntity
{
public:
	char m_pad03e0[0x450 - 0x3e0];
	EHANDLE m_hAttachedTo;	// 0x450: handle of the entity the sprite follows
	int m_nAttachment;	// 0x454
	char m_pad0458[4];
	float m_flFrame;	// 0x45c: the current animation frame
	float m_flDieTime;	// 0x460: the sprite removes itself (CBaseEntity::sub_100ae150) once curtime passes it (0x1042ecf0)
	char m_pad0464[0x478 - 0x464];
	float m_flMaxFrame;	// 0x478: the last frame

	void sub_1042e8c0();	// "CSprite::Precache" (slot 104): precaches the model name when set, then re-resolves the aim entity (+0x37c): follows it (handle, attachment, SetAimEnt, slot 93(11, 0)) or clears the handle to -1
	void sub_1042ee50(float frames);	// "CSprite::Animate": advances the frame; past the last frame the sprite turns off (spawn flag 2, sub_1042ef40) or wraps around with fmod when it has frames
	void sub_1042ef40();	// "CSprite::TurnOff" (stub 0x10010dde): next think 0, effect flag 0x40 (EF_NODRAW) at +0x19c
	void sub_1042eca0();	// stores the global time at +0x17c and +0x474 after animating by (time - the field at +0x474) * the field at +0x458
};
