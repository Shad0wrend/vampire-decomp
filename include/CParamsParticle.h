// CParamsParticle: declared by pcdecomp transplant for 0x100fd530 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "CPointEntity.h"

struct datamap_t;

class CParamsParticle : public CPointEntity
{
public:
	CParamsParticle *vfunc5(unsigned int flags);
	void vfunc103();	// slot 103 (plain member here): CPointEntity::sub_101c0820(this), then the virtual slot 104
	void vfunc104();	// slot 104 (plain member here): copies the particle name and precaches it with the engine
	void sub_1000cb8a();

	int m_nAttachType;	// 0x450: the attachment type handed to sub_100fafa0 and to the temp entity system
	const char *m_pszParticleName;	// 0x454: the particle file / effect name
	const char *m_pszAttachment;	// 0x458: the attachment name
public:
	datamap_t * vfunc82();
};
