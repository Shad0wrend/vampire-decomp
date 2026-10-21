// CUnknown101d6100: a stat reference with a target level (the auto-level template's entry); real name not yet known.
#pragma once

#include "CUnknown10204e90.h"

class CUnknown101d6100 : public CUnknown10204e90
{
public:
	char m_pad08[8];
	int m_nTarget;	// 0x10: the level the template wants the stat at

	bool sub_101d6100(void *pCharacter);	// buys the stat up to the target level through the character's VStatBuy; false when a purchase fails and the stat stays below its starting level (stub 0x1000... via 0x101d6550's caller)
};
