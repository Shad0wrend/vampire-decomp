// CUnknown101dbe30: sound description loaded from a KeyValues-like block (Sound, Channel, IsLooping); not identified yet.
#pragma once

class CBaseEntity;

class CUnknown101dbe30
{
public:
	bool sub_101dbe30(void *pKeys);
	CUnknown101dbe30 *sub_101dbdc0(int index);	// constructor body (stub 0x10003350): returns this
	bool sub_101dbe10();	// the sound is set (stub 0x10012a5d)
	void sub_101dc150();	// DevMsg's "   SoundFX: <name>" when the sound is set (stub 0x10006ece)
	void sub_101dbed0(CBaseEntity *pEntity);	// plays the sound from the entity to the players that hear it, logging it with DevMsg

	void sub_101dc120(CBaseEntity *pEntity);
	void sub_101dc0b0(CBaseEntity *pEntity);	// stops the sound on the entity's channel

	int m_field0000;	// Sound
	int m_field0004;	// Channel
	char m_field0008;	// IsLooping
};
