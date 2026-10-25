// CTEDust: declared by pcdecomp transplant for 0x10114050 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseTempEntity.h"

class CTEDust : public CBaseTempEntityHead
{
public:
	CTEDust(const char *name);
	CTEDust *vfunc2(unsigned int flags);
	void sub_100058d5();

	Vector m_vec000c;
	float m_fl0018;
	float m_fl001c;
	Vector m_vec0020;
};
