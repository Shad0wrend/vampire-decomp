// CUnknown101dce30: the effects of a targeted discipline loaded from its data block (name provisional): the list of
// particle records at +0x0 (lazily created, see CUnknown101dcc80) followed by the list of sound descriptions at +0xc.
#pragma once

#include "CUnknown101dcc80.h"
#include "CUnknown101dc5a0.h"

class CUnknown101dce30
{
public:
	CUnknown101dcc80 m_particles;	// 0x00
	CUnknown101dc5a0 m_sounds;	// 0x0c

	bool sub_10147c90(CUnknown101dc5a0Keys *pKeys, CUnknown101dcc80Record *pRecord);	// reads one particle block into the record (stub 0x10003508)
	bool sub_10147be0(CUnknown101dc5a0Keys *pKeys, const char *pszName);	// loads the "Particle_ThirdPerson" blocks (slot 0), then the "Particle_FirstPerson" blocks (slot 1) of the sub block pszName into new particle records, then its sound list; false when a particle block cannot be read or pKeys is null
};
