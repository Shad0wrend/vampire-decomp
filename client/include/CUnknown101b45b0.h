// CUnknown101b45b0: a sound-script parameter record (same defaults as CUnknown101b30d0, but starting 8 bytes later in a larger object); real name not yet known.
// Hint for sub_101b45b0 (same shape as the matched CUnknown101b30d0::sub_101b30d0): zero the ten ints through two inline
// struct helpers `struct Five { int a,b,c,d,e; void Zero(){...} }` applied to &m_nField28 and &m_nField3c, then m_nField08 = 0 and the Q_strncpy calls.
#pragma once

class CUnknown101b45b0
{
public:
	char m_pad00[8];
	int m_nField08;	// 0x08
	float m_flChannelScale;	// 0x0c
	int m_nField10;	// 0x10
	float m_flVolume;	// 0x14
	int m_nField18;	// 0x18
	float m_flPitch;	// 0x1c
	int m_nField20;	// 0x20
	char m_bField24;	// 0x24
	char m_bField25;	// 0x25
	char m_pad26[2];
	int m_nField28;	// 0x28
	int m_nField2c;
	int m_nField30;
	int m_nField34;
	int m_nField38;
	int m_nField3c;
	int m_nField40;
	int m_nField44;
	int m_nField48;
	int m_nField4c;	// 0x4c
	char m_bField50;	// 0x50
	char m_szVolume[0x20];	// 0x51
	char m_szChannel[0x20];	// 0x71
	char m_szSoundLevel[0x20];	// 0x91
	char m_szPitch[0x20];	// 0xb1

	CUnknown101b45b0 *sub_1012f490();	// resets the record to "CHAN_AUTO" / "VOL_NORM" / "PITCH_NORM" / "SNDLVL_NORM" defaults, returns this
};
