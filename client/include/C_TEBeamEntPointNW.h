// C_TEBeamEntPointNW: the IClientNetworkable view (object +4) of C_TEBeamEntPoint; its secondary vtable slot 7
// (PostDataUpdate) is 0x10032af0. Offsets are relative to that sub-object.
#pragma once

class C_TEBeamEntPointNW
{
public:
	int m_unk00; int m_unk04; int m_unk08;
	int m_nModelIndex;	// +0x0c
	int m_nHaloIndex;	// +0x10
	int m_nStartFrame;	// +0x14
	int m_nFrameRate;	// +0x18 (tenths)
	float m_fLife;	// +0x1c
	float m_fWidth;	// +0x20
	float m_fEndWidth;	// +0x24
	int m_nFadeLength;	// +0x28
	float m_fAmplitude;	// +0x2c
	int m_nR;	// +0x30
	int m_nG;	// +0x34
	int m_nB;	// +0x38
	int m_nBrightness;	// +0x3c
	int m_nSpeed;	// +0x40 (tenths)
	int m_nStartEntity;	// +0x44
	int m_nEndEntity;	// +0x48
	float m_vecStart[3];	// +0x4c
	float m_vecEnd[3];	// +0x58

	void sub_10032af0(int updateType);
};
