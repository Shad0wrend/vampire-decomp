// CTEDust: declared by pcdecomp transplant for 0x10114050 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseTempEntity.h"

class CTEDust : public CBaseTempEntityHead
{
public:
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEDust();	// function 0x10114080: the vtable, then the base's destructor body
#endif
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
    virtual int vfunc1();
public:
	virtual void vfunc2_slot();
	virtual void vfunc3(int, int);
};
