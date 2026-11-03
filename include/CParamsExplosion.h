// CParamsExplosion: declared by pcdecomp transplant for 0x10104370 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "datamap.h"

class CParamsExplosion : public CBaseEntity
{
public:
	CParamsExplosion *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	CParamsExplosion *sub_10104320();	// as in CKeepUpright (transplant)
	void vfunc104();	// slot 104 "CParamsExplosion::Precache": expands the model name (+0x454) and copies it to the 0x80 byte buffer at +0x491, the sound name (+0x458) to the buffer at +0x511, builds the flag word at +0x47c from the three bytes at +0x450..+0x452, copies the dword at +0x204 to +0x45c, then precaches the sound (sound system) and the model (engine slot 17) when their buffers are not empty
	int *sub_10104510();	// the explosion parameter block of the entity (&m_n45c; stub 0x100105f0)

	char m_pad03e0[0x450 - 0x3e0];
	char m_b450;	// 0x450
	char m_b451;	// 0x451
	char m_b452;	// 0x452
	char m_pad0453[1];
	const char *m_pszModel454;	// 0x454
	const char *m_pszSound458;	// 0x458
	int m_n45c;	// 0x45c
	char m_pad0460[0x47c - 0x460];
	int m_nFlags47c;	// 0x47c
	char m_pad0480[0x491 - 0x480];
	char m_szModel491[0x80];	// 0x491
	char m_szSound511[0x80];	// 0x511
public:
    virtual datamap_t * vfunc82();
    void vfunc103();	// as in CPhysConstraint (transplant)
};
