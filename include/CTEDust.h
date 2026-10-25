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

	char m_pad0008[4];
	int m_n000c;
	int m_n0010;
	int m_n0014;
	float m_fl0018;
	float m_fl001c;
	int m_n0020;
	int m_n0024;
	int m_n0028;
};
