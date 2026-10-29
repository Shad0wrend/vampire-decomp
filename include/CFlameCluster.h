// CFlameCluster: declared by pcdecomp transplant for 0x103e1d20 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CFlameCluster : public CBaseEntity
{
public:
	char m_pad_cluster[0x450 - sizeof(CBaseEntity)];
	int m_aList450[5];	// 0x450: the burn list (a vector, zeroed)
	int m_aBurn464[7];	// 0x464
	int m_n480;	// 0x480
	unsigned int m_hOwner;	// 0x484
	char m_b488;	// 0x488

	CFlameCluster *sub_103e1e20();
	void sub_103e2000(CBaseEntity *pEntity, int index);	// burns pEntity: a CVDmg_t record and a damage info (type 8, 1.0f) from the owner, applied to pEntity
	void vfunc103();	// as in CPhysConstraint (transplant)
	void vfunc104();	// as in CPhysConstraint (transplant)
	CFlameCluster *vfunc5(unsigned int flags);	// as in CNPC_VMingXiao (transplant)
	void sub_1009df20();	// as in CNPC_VMingXiao (transplant)
};
