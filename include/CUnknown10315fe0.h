// CUnknown10315fe0: object with an entity handle at +0x1c; real name not yet known.
#pragma once

class CUnknown10315fe0
{
public:
	char m_pad0[0x1c];
	unsigned int m_hEntity;	// +0x1c

	void *sub_10315fe0();	// the entity of the handle, 0 when stale or when that entity's counter at +0x5bb0 is positive
};
