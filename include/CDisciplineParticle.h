// CDisciplineParticle: discipline particle entity. Declared flat (bases not recovered).
#pragma once

class CBaseEntity;

class CDisciplineParticle
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CDisciplineParticle *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_1000f10f();	// destructor body
	void sub_10051650(CBaseEntity *pUser);	// "CDisciplineParticle::AddToUser": scope trace, stores pUser's handle at +0x4b8 (-1 for null) and appends this entity's handle to the handle vector at +0x14c0 of the user

	char m_pad004[0x4b4];
	unsigned int m_hUser;	// 0x4b8
};
