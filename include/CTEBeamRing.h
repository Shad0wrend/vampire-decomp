// CTEBeamRing: beam ring temp entity. Declared flat (bases not recovered).
#pragma once

#include "CTEBaseBeam.h"
#include "ServerClass.h"

class CTEBeamRing : public CTEBaseBeam
{
public:
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEBeamRing();	// function 0x1005c660: the vtable, then the base's destructor body
#endif
	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CBaseTempEntity *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &origin, const QAngle &angles);	// resets the fields to their defaults (both arguments unused) and sends the effect to every player
	virtual void vfunc4(CRecipientFilter &filter, float delay);	// "CTEBeamRing::Create"-like: sends the effect described by the fields below; TE_BeamRing (0x1005cae0) calls it directly on the global

	CTEBeamRing(const char *name);	// 0x1005c5f0: the CTEBaseBeam constructor, then the vtable, then +0x44 / +0x48 cleared
	void sub_10002667();	// destructor body

	int m_nStartEnt;	// 0x44
	int m_nEndEnt;	// 0x48
};
