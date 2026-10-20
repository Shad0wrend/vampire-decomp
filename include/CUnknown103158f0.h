// CUnknown103158f0: a squad (the "squad member" list: entity handles at +0x1c, count at +0x5c); real name not yet known
// (probably CAI_Squad).
#pragma once

class CBaseEntity;

class CUnknown103158f0
{
public:
	char m_pad0000[0x1c];
	unsigned int m_aMembers[16];	// 0x1c: entity handles of the squad members
	int m_nMembers;	// 0x5c

	void sub_103158f0(CBaseEntity *pMember);	// "RemoveFromSquad": removes the member (warning "ERROR: Attempting to remove non-existing squad membmer!" when it is not in the list), closes the gap and tells the remaining members through slot 578(pMember)
	int sub_10316760(CBaseEntity *pMember);	// index of the member in the list, -1 when it is not there
};
