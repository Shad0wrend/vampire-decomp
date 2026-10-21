// CFlameCluster: declared by pcdecomp transplant for 0x103e1d20 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CFlameCluster : public CBaseEntity
{
public:
	char m_pad_cluster[0x484 - sizeof(CBaseEntity)];
	unsigned int m_hOwner;	// 0x484

	CFlameCluster *sub_103e1e20();
	void sub_103e2000(CBaseEntity *pEntity, int index);	// burns pEntity: a CVDmg_t record and a damage info (type 8, 1.0f) from the owner, applied to pEntity
	void vfunc103();	// as in CPhysConstraint (transplant)
	void vfunc104();	// as in CPhysConstraint (transplant)
};
