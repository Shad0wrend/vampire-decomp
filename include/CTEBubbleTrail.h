// CTEBubbleTrail: bubble trail temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once
#include "CBaseTempEntity.h"

#include "Vector.h"
#include "QAngle.h"

class CRecipientFilter;

class CTEBubbleTrail : public CBaseTempEntity
{
public:
	CTEBubbleTrail(const char *name);	// function 0x1005fca0
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEBubbleTrail();	// function 0x1005fd20: the vtable, then the base's destructor body
#endif

	virtual ServerClass *vfunc0();
	virtual int vfunc1();
	virtual CBaseTempEntity *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &origin, const QAngle &angles);	// "CTEBubbleTrail::Test": like CTEBubbles::Test with 20 bubbles, height 128 and speed 8.0
	virtual void vfunc4(CRecipientFilter &filter, float delay);	// "Create"

	CTEBubbleTrail *sub_1005fca0(const char *name);	// constructor body (0x1005fca0): the CBaseTempEntityHead constructor with the name, the vtable, the ten zeroed dwords; returns this
	void sub_100157ee();	// destructor body
	void sub_1005fec0(int a, int b);	// "CTEBubbleTrail::Create" (called through the stub at 0x10010992)

	char m_pad0008[0xc - 0x8];
	int m_mins[3];	// 0x000c
	int m_maxs[3];	// 0x0018
	int m_f24;
	int m_f28;
	int m_f2c;
	int m_f30;
};
