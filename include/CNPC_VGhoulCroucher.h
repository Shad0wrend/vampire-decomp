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
	int vfunc390(void *pInfo);	// slot 390 "CNPC_VGhoulCroucher::OnTakeDamage_Alive": scope trace (entity name), sub_1037b6e0(the dword at +0x2c of pInfo), sets the byte at +0x6667, then CNPC_VHuman::vfunc390
	void sub_1037b6e0(int a);	// called through the stub at 0x1000a2e5
	int sub_10001b45(void *pInfo);	// CNPC_VHuman::vfunc390 (stub 0x10001b45), called directly
};
