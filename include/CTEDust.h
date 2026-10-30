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

	char m_pad0004[8];
	int m_n000c;
	int m_n0010;
	int m_n0014;
	float m_fl0018;
	float m_fl001c;
	Vector m_vec0020;
public:
    virtual ServerClass * vfunc0();
    void vfunc4(int a, int b);	// as in CTEMetalSparks (transplant)
public:
	virtual void vfunc3(int, int);
public:
    virtual int vfunc1();
};
