// CUnknown1028b190: a table of five 12 byte records (character handle, hit count, time) kept at the start of the
// object (it lives at +0x6028 of an entity); real name not yet known.
#pragma once

struct CUnknown1028b190Entry
{
	int m_id;
	int m_count;
	float m_time;
};

struct CUnknown1028b190Clock
{
	char pad0[0xc];
	float m_time;	// 0x0c
};

class CUnknown1028b190
{
public:
	CUnknown1028b190Entry m_entries[5];

	void sub_1028b190(void *pCharacter);	// "...RecordHit"-like: for a character with the object at +0xa8 and a resolving handle (+0x6f0) bumps its record's count and time, or replaces the record with the oldest time by (handle, lowest count, now)
};
