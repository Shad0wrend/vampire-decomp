// CTEBreakModel: break model temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEBreakModel
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBreakModel *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000f53d();	// destructor body
	void vfunc5();	// as in CFireSmoke (transplant)
	void vfunc4(void *pFilter, int delay);	// slot 4 "Create": sends the effect to the recipients of the filter (called directly by the TE_BreakModel wrapper)

	char m_pad0004[8];
	float m_vecOrigin[3];	// 0x0c
	float m_angRotation[3];	// 0x18
	float m_vecSize[3];	// 0x24
	int m_nField30;	// 0x30
	int m_nField34;	// 0x34
	int m_nField38;	// 0x38
	int m_nField3c;	// 0x3c
	int m_nField40;	// 0x40
};
