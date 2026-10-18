// CTempEntsSystem: temp entity system (ITempEntsSystem / IPredictionSystem). Declared flat; only what decompiled code needs.
#pragma once
#include "CUnknown1019d130.h"

class CTempEntsSystem
{
public:
	char m_pad0000[0xc];
	CBaseEntity *m_pSuppressHost;	// 0x000c
	int m_nSuppressCount;			// 0x0010

	void sub_100584a0(CUnknown1019d130 *filter, int a, int b, int c);	// slot 5
};
