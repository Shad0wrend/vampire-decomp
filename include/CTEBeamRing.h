// CTEBeamRing: beam ring temp entity. Declared flat (bases not recovered).
#pragma once

class CTEBeamRing
{
public:
	virtual ServerClass * vfunc0();
	virtual int vfunc1();
	virtual CTEBeamRing *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(int a, int b);	// resets the fields to their defaults (both arguments unused) and sends the effect to every player
	virtual void vfunc4(int a, int b);	// "CTEBeamRing::Create"-like: sends the effect described by the fields below

	CTEBeamRing *sub_1005c5f0(const char *name);	// constructor: CTEBaseBeam(name) first, then vptr = CTEBeamRing::vftable (0x1044dc88), m_nStartEnt = m_nEndEnt = 0
	void sub_10002667();	// destructor body

	int m_pad04[2];
	int m_nModelIndex;	// 0x0c
	int m_nHaloIndex;	// 0x10
	int m_nStartFrame;	// 0x14
	int m_nFrameRate;	// 0x18
	int m_nLife;	// 0x1c (raw copy)
	float m_fWidth;	// 0x20
	float m_fEndWidth;	// 0x24
	int m_nFadeLength;	// 0x28
	float m_fAmplitude;	// 0x2c
	int m_nR;	// 0x30
	int m_nG;	// 0x34
	int m_nB;	// 0x38
	int m_nA;	// 0x3c
	int m_nSpeed;	// 0x40
	int m_nStartEnt;	// 0x44
	int m_nEndEnt;	// 0x48
};
