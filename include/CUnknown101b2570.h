// CUnknown101b2570: a sound-script parameter record (volume / pitch pairs with the source strings); real name not yet known.
#pragma once

struct SFloatPair
{
	float a;
	float b;
};

class CUnknown101b2570
{
public:
	char m_pad0000[0xc];
	SFloatPair m_pitch;	// 0x000c
	char m_pad0014[0xa9 - 0x14];
	char m_szPitch[0x20];	// 0x00a9

	void sub_101b2570(const char *pitch);	// parses "PITCH_NORM" / "PITCH_LOW" / "PITCH_HIGH" or a number pair, and keeps the text
};
