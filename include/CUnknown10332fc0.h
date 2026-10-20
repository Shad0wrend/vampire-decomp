// CUnknown10332fc0: stand-in for CBaseCombatCharacter (name pointer at +0x26c, a pointer array of dialog records at +0x1598);
// kept apart so the large CBaseCombatCharacter header is not touched for one small member.
#pragma once

struct CDialogReaction_t	// record pointed to by the array at +0x1598 of the character
{
	unsigned int m_hSpeaker;	// 0x00: entity handle
	char m_pad04[0x0c];
	int m_nModifier;	// 0x10
};

class CUnknown10332fc0
{
public:
	char m_pad0000[0x26c];
	const char *m_name26c;	// 0x26c
	char m_pad0270[0x1598 - 0x270];
	CDialogReaction_t **m_pRecords;	// 0x1598
	int m_nRecordsAlloc;	// 0x159c
	int m_nRecords;	// 0x15a0

	int sub_10332fc0(void *pSpeaker);	// "CBaseCombatCharacter::GetDialogReactionModifier": scope trace (entity name), the modifier (+0x10) of the first record whose speaker handle resolves to pSpeaker, else 0
	void sub_10332ef0(void *pSpeaker, int nDelta, int unused);	// slot 297 "CBaseCombatCharacter::AdjustDialogReaction": scope trace (entity name), sub_103330f0(pSpeaker, GetDialogReactionModifier(pSpeaker) + nDelta); takes a third, unused stack argument
	void sub_103330f0(void *pSpeaker, int nModifier);	// called through the stub at 0x1000fb9b
};
