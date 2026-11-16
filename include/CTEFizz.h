// CTEFizz: fizz temp entity. Declared flat (bases not recovered).
#pragma once

class CRecipientFilter;

class CTEFizz
{
public:
	CTEFizz(const char *name);	// function 0x10061f70
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEFizz();	// function 0x10061fe0: the vtable, then the base's destructor body
#endif

	virtual int vfunc0();
	virtual int vfunc1();
	virtual CTEFizz *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const float *pOrigin, const float *pAngles);	// "CTEFizz::Test": precaches the bubble sprite (+0x10), density 200 (+0x14), current 1 (+0xc), then Create to every player
	virtual void vfunc4(CRecipientFilter &filter, float delay);	// "CTEFizz::Create"

	void sub_100142b8();	// destructor body
	void vfunc5();	// as in CFireSmoke (transplant)
	CTEFizz *sub_10061f70(int a);	// constructor body: base constructor (0x10015334), vtable, fields; returns this

	char m_pad0004[8];
	int m_nCurrent;	// 0x0c
	int m_nModelIndex;	// 0x10
	int m_nDensity;	// 0x14
};
