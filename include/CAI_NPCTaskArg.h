// CAI_NPCTaskArg: the 4-byte by-value argument of CAI_BaseNPCTroika::vfunc609 (0x102b6b50).
// The three overrides (CNPC_VBach / CNPC_VBatSwarm / CNPC_VSheriffSwarm vfunc609) copy the argument
// object onto itself (mov eax,[esp+4]; mov [esp+4],eax) before the tail jmp, which is VC6's copy of a
// 4-byte struct parameter; the callee only tests its first byte (mov al,[esp+8]). Model it as this POD.
#pragma once

struct CAI_NPCTaskArg
{
	int m_nValue;
};
