// CLogicCase (RTTI .?AVCLogicCase@@, logic_case): compares the value of its InValue input with sixteen case values and
// fires the output of the matching one (OnDefault otherwise). Declared flat (the bases are not recovered), only the
// members the input handler needs.
#pragma once

#include "COutputEvent.h"
#include "inputdata_t.h"

class CLogicCase
{
public:
	char m_pad0000[0x450];
	const char *m_nCase[16];	// 0x450: the case values (Case01..Case16), null when unset
	COutputEvent m_OnCase[16];	// 0x490: one output per case
	COutputEvent m_OnDefault;	// 0x610: fired with the input's value when no case matches

	void sub_10134310(inputdata_t *pInput);	// "CLogicCase::InputInValue": the value as a string (the text of a string variant, "" when unset, else the variant converted to text) against the case values (case-insensitive); the first match fires its output (activator, this); no match fires OnDefault with the input's value
};
