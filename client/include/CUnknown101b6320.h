// CUnknown101b6320: a sound-script parameter record with two vectors of 8-byte elements (same family as
// CUnknown101b6250); real name not yet known.
#pragma once

#include "CUnknown101b9140.h"

struct CUnknown101b6320Params
{
	int m_nField00;	// 0x00
	int m_nField04;
	int m_nField08;
	int m_nField0c;
	int m_nField10;
	int m_nField14;
	int m_nField18;
	char m_bField1c;	// 0x1c
	char m_bField1d;	// 0x1d
	char m_pad1e[2];
	CUnknown101b9140 m_vecA;	// 0x20
	CUnknown101b9140 m_vecB;	// 0x34
	char m_bField48;	// 0x48
	char m_szVolume[0x20];	// 0x49
	char m_szChannel[0x20];	// 0x69
	char m_szSoundLevel[0x20];	// 0x89
	char m_szPitch[0x20];	// 0xa9

	CUnknown101b6320Params *sub_10133340(const CUnknown101b6320Params &other);	// copy constructor: clears the two vectors, copies the scalars, then both vectors element by element and the four strings
};

class CUnknown101b6320
{
public:
	char m_bField00;	// 0x00
	char m_bField01;	// 0x01
	char m_pad02[2];
	int m_nField04;	// 0x04
	CUnknown101b6320Params m_params;	// 0x08

	CUnknown101b6320 &sub_10130970(const CUnknown101b6320 &other);	// copy assignment: scalars, the two vectors element by element, the four strings
};
