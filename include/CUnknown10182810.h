// CUnknown10182810: entity-like object holding an entity handle at +0x1cc0 and a result value at +0x1cc8;
// real name not yet known.
#pragma once

class CUnknown10182810
{
public:
	char pad0[0x1cc0];
	unsigned int m_hTarget;
	char pad1cc4[4];
	int m_result1cc8;

	int sub_10182810();
};
