// CUnknown101dbe30: sound description loaded from a KeyValues-like block (Sound, Channel, IsLooping); not identified yet.
#pragma once

class CBaseEntity;

class CUnknown101dbe30
{
public:
		// constructor body (stub 0x10003350): returns this
		// the sound is set (stub 0x10012a5d)
		// DevMsg's "   SoundFX: <name>" when the sound is set (stub 0x10006ece)
		// plays the sound from the entity to the players that hear it, logging it with DevMsg

		// stops the sound on the entity's channel

	int m_field0000;	// Sound
	int m_field0004;	// Channel
	char m_field0008;	// IsLooping
};
