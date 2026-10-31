#pragma once
#include "CBeam.h"

class CBeamHead : public CBeam
{
public:
	CBeamHead();
	int m_hAttached[10];	// 0x468
	int m_hEnd;	// 0x490 placeholder
};
