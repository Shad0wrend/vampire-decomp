// CUnk10071840: an NPC-like entity (a CBaseAnimating based class whose real name is not known yet) with a target entity
// handle at +0x7f0 and an output at +0x810; sub_10071840 is its think function, sub_10071660 the "finish" step.
#pragma once

#include "COutputEvent.h"

class CUnk10071840
{
public:
	char m_pad0000[0x204];
	unsigned int m_flags204;	// 0x204
	char m_pad0208[0x268 - 0x208];
	unsigned int m_flags268;	// 0x268
	char m_pad026c[0x6f0 - 0x26c];
	int m_n6f0;	// 0x6f0
	char m_pad06f4[4];
	int m_n6f8;	// 0x6f8
	char m_pad06fc[0x7f0 - 0x6fc];
	unsigned int m_hTarget;	// 0x7f0: entity handle of the target, -1 when none
	const char *m_pszSequence7f4;	// 0x7f4: sequence name (null = default)
	char m_pad07f8[0x810 - 0x7f8];
	COutputEvent m_out810;	// 0x810

	void sub_10071660();	// fires the output at +0x810, removes the target entity, makes this entity dormant, adds flag 0x40000, clears +0x6f0 / +0x6f8 and tells the first player (when this entity has flag bit 0 of +0x204)
	void sub_100a8060();	// CBaseEntity::MakeDormant (stub 0x10011211), called directly
	void sub_100b3580(unsigned int flags);	// CBaseEntity::AddFlag (stub 0x10003620), called directly
	void sub_100b3640(unsigned int flags);	// CBaseEntity member (stub 0x1001457e), called directly
	void sub_10071490(struct inputdata_t *pInput);	// input handler: stores the input's text (empty -> null) as the sequence name at +0x7f4
	void sub_10071550(int unused);	// the start step: base cleanup, flag fixups, tells the first player about the sequence
	void sub_10090950();	// CBaseAnimating member (stub 0x100117b1), called directly
};
