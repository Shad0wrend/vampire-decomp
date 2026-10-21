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
	SFloatPair m_soundlevel;	// 0x0014
	char m_pad001c[0x89 - 0x1c];
	char m_szSoundLevel[0x20];	// 0x0089
	char m_szPitch[0x20];	// 0x00a9

	void sub_101b2570(const char *pitch);	// parses "PITCH_NORM" / "PITCH_LOW" / "PITCH_HIGH" or a number pair, and keeps the text
	void sub_101b2630(const char *soundlevel);	// parses "SNDLVL_..." (through sub_101b49f0) or a number pair into m_soundlevel, and keeps the text
	const char *sub_101b2320();	// the pitch as text: the name of the constant for a pitch without a spread (PITCH_NORM ... through sub_101b23b0(float)), else "%i, %i" of (int)a and (int)(a + b) in a global buffer
};
