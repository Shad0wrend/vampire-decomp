// CTEBaseBeam: base beam temp entity (CBaseTempEntity head at +0x0).
#pragma once

#include "CBaseTempEntity.h"

class CTEBaseBeam : public CBaseTempEntityHead
{
public:
	CTEBaseBeam(const char *name);	// 0x1005a710: base constructor, vtable, fields 0x0c..0x40 cleared
	virtual ServerClass *vfunc0();
	virtual int vfunc1();
	virtual CTEBaseBeam *vfunc2(unsigned int flags);	// scalar deleting destructor: VC6 has no covariant returns, so every derived beam returns this type

	void sub_1000d08f();	// destructor body

	char m_pad0004[8];
	// 0x0c..0x40: the beam fields every derived beam fills. Each offset carries its placeholder names and the
	// Source name (dlls/te_basebeam.h) the derived beams use; the constructor clears them all.
	union { int m_n0c; int m_nModelIndex; };	// 0x0c
	union { int m_n10; int m_nHaloIndex; };	// 0x10
	union { int m_n14; int m_nStartFrame; };	// 0x14
	union { int m_n18; int m_nFrameRate; };	// 0x18
	union { int m_n1c; float m_f1c; int m_nLife; };	// 0x1c
	union { int m_n20; float m_f20; float m_fWidth; };	// 0x20
	union { int m_n24; float m_f24; float m_fEndWidth; };	// 0x24
	union { int m_n28; int m_nFadeLength; };	// 0x28
	union { int m_n2c; float m_f2c; float m_fAmplitude; };	// 0x2c
	union { int m_n30; int m_nR; };	// 0x30
	union { int m_n34; int m_nG; };	// 0x34
	union { int m_n38; int m_nB; };	// 0x38
	union { int m_n3c; int m_nA; };	// 0x3c
	union { int m_n40; int m_nSpeed; };	// 0x40
};
