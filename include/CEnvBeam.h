// CEnvBeam: declared by pcdecomp transplant for 0x100fec10 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

class CEnvBeam : public CBaseEntity
{
public:
	CEnvBeam *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	CEnvBeam *sub_100febe0();	// as in CKeepUpright (transplant)
	void vfunc104();	// slot 104 "CEnvBeam::Precache": precaches the sprite named at +0x518 (index at +0x514) and the one named at +0x520 (path into +0x524, 0x80 bytes), then CBeam::vfunc104
	void sub_10015749();	// CBeam::vfunc104 (stub 0x10015749), called directly
};
