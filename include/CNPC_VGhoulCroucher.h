// CNPC_VGhoulCroucher: declared by pcdecomp transplant for 0x1037a950 from CNPC_Crow (0x10359240);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VGhoulCroucher : public CBaseEntity
{
public:
	int vfunc546(int arg);
	CNPC_VGhoulCroucher *vfunc5(unsigned int flags);	// as in CBaseCineCam (transplant)
	CNPC_VGhoulCroucher *sub_1037aea0();	// as in CKeepUpright (transplant)
	char vfunc615();	// slot 615 "CNPC_VGhoulCroucher::CanBeSetOnFire": scope trace (entity name), false when the byte at +0x6665 is set, else CAI_BaseNPCTroika::vfunc615
	char sub_1000c5db();	// CAI_BaseNPCTroika::vfunc615 (stub 0x1000c5db), called directly
};
