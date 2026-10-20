// CUnknown10182420: entity-like object (same family as CUnknown10182810) holding an array of 0x40-byte quest
// entries at +0x1d68 with its count at +0x1d74; real name not yet known.
#pragma once

struct QuestEntry10182420
{
	char pad0[0x30];
	int m_key;
	int m_value;
	char pad38[8];
};

class CUnknown10182420
{
public:
	char pad0[0x1d68];
	QuestEntry10182420 *m_pEntries;
	char pad1d6c[8];
	int m_nEntries;

	char sub_10182420(int quest, int value);
};
