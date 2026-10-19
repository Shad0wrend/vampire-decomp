// CUnknown1042e8c0: stand-in for CSprite (an entity; slot 104 is its Precache), derived from CBaseEntity so the base
// virtual calls can be written; the real CSprite header does not carry the base class yet.
#pragma once

#include "CBaseEntity.h"

class CUnknown1042e8c0 : public CBaseEntity
{
public:
	char m_pad03e0[0x450 - 0x3e0];
	unsigned int m_hAttachedTo;	// 0x450: handle of the entity the sprite follows
	int m_nAttachment;	// 0x454

	void sub_1042e8c0();	// "CSprite::Precache" (slot 104): precaches the model name when set, then re-resolves the aim entity (+0x37c): follows it (handle, attachment, SetAimEnt, slot 93(11, 0)) or clears the handle to -1
};
