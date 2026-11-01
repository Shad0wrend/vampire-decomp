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

	CFlameCluster() : CBaseEntity(0)
	{
		for (int i = 0; i < 5; i++) m_aList450[i] = 0;
		m_hOwner = -1;
		m_b488 = 0;
		for (int j = 0; j < 7; j++) m_aBurn464[j] = 0;
	}

	CFlameCluster *sub_103e1e20();
	void sub_103e2000(CBaseEntity *pEntity, int index);	// burns pEntity: a CVDmg_t record and a damage info (type 8, 1.0f) from the owner, applied to pEntity
	virtual void vfunc123();	// slot 123: debug overlay, one box and text line per flame record of the list at +0x450 (count +0x45c, 0x1c byte records, the flame strength float at +0x18)
	void vfunc103();	// as in CPhysConstraint (transplant)
	void vfunc104();	// as in CPhysConstraint (transplant)
	CFlameCluster *vfunc5(unsigned int flags);	// as in CNPC_VMingXiao (transplant)
	void sub_1009df20();	// as in CNPC_VMingXiao (transplant)
};
