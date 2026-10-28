// CUnknown101b6320: a sound-script parameter record with two vectors of 8-byte elements (same family as
// CUnknown101b6250); real name not yet known.
#pragma once

#include "CUnknown101b9140.h"

class CUnknown101b6320
{
public:
	char m_bField00;	// 0x00
	char m_bField01;	// 0x01
	char m_pad02[2];
	int m_nField04;	// 0x04
	int m_nField08;	// 0x08
	int m_nField0c;
	int m_nField10;
	int m_nField14;
	int m_nField18;
	int m_nField1c;
	int m_nField20;
	char m_bField24;	// 0x24
	char m_bField25;	// 0x25
	char m_pad26[2];
	CUnknown101b9140 m_vecA;	// 0x28
	CUnknown101b9140 m_vecB;	// 0x3c
	char m_bField50;	// 0x50
	char m_szVolume[0x20];	// 0x51
	char m_szChannel[0x20];	// 0x71
	char m_szSoundLevel[0x20];	// 0x91
	char m_szPitch[0x20];	// 0xb1

	CUnknown101b6320 &sub_101b6320(const CUnknown101b6320 &other);	// copy assignment: scalars, the two vectors element by element, the four strings
};
