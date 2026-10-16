// CUnknown10252450: NPC-like object with a float array at +0x730 (read from CAI_BaseNPCTroika::vfunc442 and others); real name not yet known.
#pragma once

class CUnknown10252450
{
public:
	char pad0[0x730];
	float m_unk730[1];

	float sub_10252450(int index);
};
