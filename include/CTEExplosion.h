// CTEExplosion: explosion temp entity. Declared flat (bases not recovered); only the vtable head and the
// fields that the free "create" function fills are modelled.
#pragma once

class CTEExplosion
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEExplosion *vfunc2(unsigned int flags);	// scalar deleting destructor

	char m_pad0004[8];
	float m_vecOrigin[3];	// 0x0c
	int m_nField18;	// 0x18
	int m_nField1c;	// 0x1c
	int m_nField20;	// 0x20
	int m_nField24;	// 0x24
	float m_vecNormal[3];	// 0x28 (0, 0, 1 when not given)
	char m_bField34;	// 0x34
	int m_nField38;	// 0x38
	int m_nField3c;	// 0x3c

	void sub_1000e90d();	// destructor body
	void vfunc4(void *pFilter, int delay);	// slot 4 "Create"-like worker (stub 0x100051a0), called directly
};
