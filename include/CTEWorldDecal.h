// CTEWorldDecal (RTTI .?AVCTEWorldDecal@@): the world decal temp entity (vtable 0x1044e1a8); base CBaseTempEntity.
#pragma once
#include "ServerClass.h"
#include "Vector.h"
#include "QAngle.h"
#include "CBaseTempEntity.h"

class CTEWorldDecal : public CBaseTempEntity
{
public:
	CTEWorldDecal(const char *name);	// function 0x1006af40
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEWorldDecal();	// function 0x1006afb0: the vtable, then the base's destructor body
#endif

	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CBaseTempEntity *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector &origin, const QAngle &angles);	// slot 3 (0x0c)
	virtual void vfunc4(CRecipientFilter &filter, float delay);	// slot 4 (+0x10): the temp entity's Send; vfunc3 calls it virtually

	void sub_1000e9df();	// destructor body
	CTEWorldDecal *sub_1006af40(int a);	// constructor body: base constructor (0x10015334), vtable, fields; returns this
	void sub_1000a097(int a, int b);	// CTEWorldDecal::vfunc4 (called directly): sends the decal with the position and normal in the globals set by the caller
	void vfunc4(int a, int b);	// slot 4's body (0x1006b280), as in CTEMetalSparks (transplant)

	char m_pad0008[0x0c - 0x08];	// 0x08 (Source's m_pNext)
	Vector m_vecPos;	// 0x0c: the decal position (vfunc3 adds 24.0f to z)
	int m_n18;	// 0x18: cleared by vfunc3 (the SDK's m_nIndex); the object is 0x1c bytes (0x106c7538 is the next global)
};
