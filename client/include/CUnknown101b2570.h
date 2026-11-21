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
	int m_nChannel;	// 0x0000: the channel id (sub_101b24d0 of the channel name)
	SFloatPair m_volume;	// 0x0004
	SFloatPair m_pitch;	// 0x000c
	SFloatPair m_soundlevel;	// 0x0014
	char m_bPlayToOwnerOnly;	// 0x1c: the "play_to_owner_only" key of the sound script block
	char m_bPrecache;	// 0x1d: the "precache" key of the sound script block
	char m_pad001e[0x49 - 0x1e];
	char m_szVolume[0x20];	// 0x0049: the volume text (VOL_NORM or a number pair)
	char m_szChannel[0x20];	// 0x0069: the channel name (copied with 32 bytes, see sub_101b2490)
	char m_szSoundLevel[0x20];	// 0x0089
	char m_szPitch[0x20];	// 0x00a9

	void sub_1012dbc0(const char *channel);	// "channel": m_nChannel = sub_101b24d0(channel) (the channel id), then the name is copied into m_szChannel (32 bytes)
	void sub_1012db70(const char *volume);	// parses \"VOL_NORM\" (1.0, 0) or a number pair into m_volume, and keeps the text
	void sub_1012dc70(const char *pitch);	// parses "PITCH_NORM" / "PITCH_LOW" / "PITCH_HIGH" or a number pair, and keeps the text
	void sub_1012dd00(const char *soundlevel);	// parses "SNDLVL_..." (through sub_101b49f0) or a number pair into m_soundlevel, and keeps the text
		// the pitch as text: the name of the constant for a pitch without a spread (PITCH_NORM ... through sub_101b23b0(float)), else "%i, %i" of (int)a and (int)(a + b) in a global buffer
};
