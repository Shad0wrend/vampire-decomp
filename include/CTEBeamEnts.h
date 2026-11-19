// CTEBeamEnts: beam-between-entities temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "CTEBaseBeam.h"

class CRecipientFilter;

class CTEBeamEnts : public CTEBaseBeam
{
public:
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEBeamEnts();	// function 0x1005b3d0: the vtable, then the base's destructor body
#endif
	virtual ServerClass *vfunc0();	// GetServerClass
	virtual int vfunc1();
	virtual CBaseTempEntity *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &origin, const QAngle &angles);	// "Test": sets up default beam values, then sends it to everybody through slot 4
	virtual void vfunc4(CRecipientFilter &filter, float delay);	// sends the message

	void sub_1000dcfb();	// destructor body
	CTEBeamEnts(const char *name);	// 0x1005b360: the CTEBaseBeam constructor, then the vtable, then +0x44 / +0x48 cleared

	int m_n44;	// 0x44
	int m_n48;	// 0x48
};
