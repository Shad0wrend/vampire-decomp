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
	char vfunc294(int a);	// slot 294 "CNPC_VGhoulCroucher::IsValidStealthKillTarget": scope trace (entity name), true when the free getter sub_1037bb20 (byte at +0x6666) is zero, else CAI_BaseNPCTroika::vfunc294(a)
	char sub_1000c081(int a);	// CAI_BaseNPCTroika::vfunc294 (stub 0x1000c081), called directly
	void vfunc444(void *pTask);	// slot 444 "CNPC_VGhoulCroucher::RunTask": scope trace (entity name); tasks 0x14a / 0x14b: when slot 251() holds (and for 0x14b setting the byte at +0x6667) calls sub_10273e80(0); other tasks go to CNPC_VHumanCombatant::vfunc444
	void sub_100080da(void *pTask);	// CNPC_VHumanCombatant::vfunc444 (stub 0x100080da), called directly
	void sub_10273e80(int a);	// called through the stub at 0x1000ac68
	int vfunc438();	// slot 438 "CNPC_VGhoulCroucher::SelectSchedule": scope trace (entity name), schedule 0x158 while the getter sub_1037bb20 is zero, 0x159 until the byte at +0x6667 is set (both record file / line at +0x1b30 / +0x1b34), else CNPC_VHumanCombatant::vfunc438
	virtual void vfunc78();	// slot 78 "CNPC_VGhoulCroucher::ScriptUnhide": scope trace (entity name), the Troika version, then slot 78 of the entity behind the handle at +0x6670 (when it is live)
	void sub_102c1ec0();	// CAI_BaseNPCTroika::vfunc78 (stub 0x10009ecb), called directly

	char m_pad03e0[0x1b30 - 0x3e0];
	const char *m_pszFile1b30;	// +0x1b30: source file of the last schedule selection
	int m_nLine1b34;	// +0x1b34: its line
	char m_pad1b38[0x6667 - 0x1b38];
	char m_b6667;	// +0x6667
	char m_pad6668[0x6670 - 0x6668];
	unsigned int m_h6670;	// +0x6670: entity handle
};
