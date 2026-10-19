// CUnknown10315db0: a group holding up to 16 entity handles at +0x1c (count at +0x5c); real name not yet known.
#pragma once

class CUnknown10315db0
{
public:
	char m_pad0000[0x1c];
	unsigned int m_hMembers[16];	// 0x1c
	int m_nMembers;	// 0x5c

	int sub_10315db0(void *pEntity);	// counts the members (other than pEntity) whose entity pEntity accepts through slot 201(member, 0x2804091, 0, 0); 0 when pEntity is null or has the counter at +0x5bb0 > 0
};
