// SoundTracker_t.h: the sound tracker slots (an entity handle and an expiry time) with the constructor the global
// array 0x106b8698 is built by; the source that uses them defines its own copy.
#pragma once
#ifdef PCD_INITIALIZERS
struct SoundTracker_t
{
	SoundTracker_t() { m_hEntity = 0xffffffff; m_flExpire = 0; }
	unsigned int m_hEntity;
	float m_flExpire;
};
#endif
