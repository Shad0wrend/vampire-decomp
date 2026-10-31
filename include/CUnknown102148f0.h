// CUnknown102148f0: an animating entity (sequence helpers, think function) with a target entity handle at +0x7d0
// and an output at +0x804; real name not yet known.
#pragma once

#include "COutputEvent.h"

class CUnknown102148f0
{
public:
	char m_pad0000[0x17c];
	float m_flNextTime17c;	// 0x17c
	char m_pad0180[0x6f0 - 0x180];
	int m_iValue6f0;	// 0x6f0
	char m_pad06f4[0x6f8 - 0x6f4];
	float m_flValue6f8;	// 0x6f8
	char m_pad06fc[0x77c - 0x6fc];
	float m_flTime77c;	// 0x77c
	float m_flTime780;	// 0x780: curtime stamped when the sequence was started
	char m_pad0784[0x7d0 - 0x784];
	unsigned int m_hTarget;	// 0x7d0: entity handle, -1 when none
	char m_pad07d4[0x804 - 0x7d4];
	COutputEvent m_out804;	// 0x804

	void sub_102148f0();	// starts the "idle" sequence, sets the think function, fires the output at +0x804 with itself, stamps curtime at +0x780 and, when the target entity behind +0x7d0 is live, calls its slot 242, sets its next think time to 5.0f and clears the handle
	void sub_102143e0();
	void sub_102146d0();	// runs sub_102148f0, then sub_10214a20 (0x102146d0)
	void sub_10214a20();	// tail-called from sub_102143e0 (stub 0x1000ff38)
	unsigned int sub_10090ef0(int a);	// stub 0x10014ffb, returns a flag word
	int sub_1008f7b0(const char *label);	// CBaseAnimating::LookupSequence (stub 0x1000e057), called directly
	void sub_10260a50(int a);	// CAI_BaseNPC member (stub 0x1000d0b2), called directly with a sequence
	void sub_100ac4e0(void *pFunc, int a, int b);	// CBaseEntity::ThinkSet (stub 0x10007fe5), called directly
};
