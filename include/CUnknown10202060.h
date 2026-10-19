// CUnknown10202060: an object holding an entity index at +0x1c; real name not yet known.
#pragma once

class CUnknown10202060
{
public:
	char pad0[0x1c];
	int m_nEntIndex;	// 0x1c

	int sub_10202060();	// the field at +0x9c of the entity at m_nEntIndex (0 when there is none)
};
