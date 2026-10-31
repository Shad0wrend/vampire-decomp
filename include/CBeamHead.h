#pragma once
#include "CConstraintAnchor.h"

class CBeamHead : public CConstraintAnchorBase
{
public:
	CBeamHead();
	virtual void vfunc0();
	char m_pad0004[0x468 - 4];
	int m_hAttached[10];	// 0x468
	char m_pad0490[0x4e4 - 0x490];
	int m_hEnd;	// 0x4e4
};
