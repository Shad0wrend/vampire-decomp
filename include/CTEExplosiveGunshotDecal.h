// CTEExplosiveGunshotDecal: explosive gunshot decal temp entity. Declared flat (bases not recovered); only the vtable head
// and the fields that the free "create" function (0x10064df0) fills are modelled.
#pragma once

class CTEExplosiveGunshotDecal
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEExplosiveGunshotDecal *vfunc2(unsigned int flags);	// scalar deleting destructor

	char m_pad0004[8];
	float m_vecA[3];	// 0x0c
	float m_vecB[3];	// 0x18
	int m_n24;
	int m_n28;
	int m_n2c;
	int m_n30;
	char m_b34;
	char m_pad35[7];
	int m_n3c;
	int m_n40;
	int m_n44;
	int m_n48;

	void sub_10010f0a();	// destructor body
	void vfunc4(void *pFilter, int delay);	// slot 4 "Create"-like worker (stub 0x10004197), called directly
};
