// CTriggerHurt: declared by pcdecomp transplant for 0x101c5c30 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseTrigger.h"

class CTriggerHurt : public CBaseTrigger
{
public:
	CTriggerHurt();	// 0x101c5ca0
	CTriggerHurt *sub_101c5ca0();

	char m_pad0598[0x5c0 - 0x598];
	int m_i5c0;
	COutputEvent m_out5c4;
	COutputEvent m_out5dc;
	int m_i5f4;
	int m_i5f8;
	int m_i5fc;
	int m_i600;
	int m_i604;
};
