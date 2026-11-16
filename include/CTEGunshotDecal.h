// CTEGunshotDecal: gunshot decal temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "Vector.h"
#include "CBaseTempEntity.h"

class CTEGunshotDecal : public CBaseTempEntityHead
{
public:
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEGunshotDecal();	// function 0x100640b0: the vtable, then the base's destructor body
#endif
	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CTEGunshotDecal *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &origin, const QAngle &angles);
	virtual void vfunc4(CRecipientFilter &filter, float delay);
	void vfunc4(int a, int b);	// slot 4 (jump stub 0x100022de): called directly on the global object

	CTEGunshotDecal(const char *name);	// 0x10064010

	void sub_1001520d();	// destructor body

	char m_pad0004[8];
	Vector m_vecOrigin;	// 0x0c
	Vector m_vecStart;	// 0x18
	int m_f24;
	int m_f28;
	int m_f2c;
	int m_f30;
	char m_f34;
	int m_f38;
	int m_f3c;
	int m_f40;
	int m_f44;
	int m_f48;
public:
	virtual void vfunc5();
};
