// CUnknown107250d4: the object behind the global pointer at 0x107250d4; class name unknown. Slot 1 answers a bool,
// the int at +0x2c is a count / index (negative when unset).
#pragma once

class CUnknown107250d4
{
public:
	virtual void vfunc0();
	virtual bool vfunc1();

	char m_pad0004[0x2c - 4];
	int m_n2c;	// 0x2c
};
