// CTEBubbles: bubbles temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once
#include "CBaseTempEntity.h"

#include "Vector.h"
#include "QAngle.h"

class CRecipientFilter;

class CTEBubbles : public CBaseTempEntity
{
public:
	CTEBubbles(const char *name);	// function 0x1005f5c0
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEBubbles();	// function 0x1005f640: the vtable, then the base's destructor body
#endif

	virtual ServerClass *vfunc0();
	virtual int vfunc1();
	virtual CBaseTempEntity *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &origin, const QAngle &angles);	// "CTEBubbles::Test": the box at the origin lifted 24 units and moved 100 units along the flat facing, 256 units wide, 50 bubbles, height 256, speed 2.0, sent to every player
	virtual void vfunc4(CRecipientFilter &filter, float delay);	// "Create"

	CTEBubbles *sub_1005f5c0(const char *name);	// constructor body (0x1005f5c0): the CBaseTempEntityHead constructor with the name, the vtable, the ten zeroed dwords; returns this
	void sub_1000e2c8();	// destructor body
	void sub_1005f7e0(int a, int b);	// "CTEBubbles::Create" (called through the stub at 0x10011897)

	char m_pad0008[0xc - 0x8];
	int m_mins[3];	// 0x000c
	int m_maxs[3];	// 0x0018
	int m_f24;
	int m_f28;
	int m_f2c;
	int m_f30;
};
