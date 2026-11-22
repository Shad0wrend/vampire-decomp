// CUnknown101b6250: a sound-script parameter record (same defaults as CUnknown101b45b0, starting at a short at +0 and
// laid out 4 bytes later); real name not yet known.
#pragma once

class CUnknown101b6250
{
public:
	short m_nField00;	// 0x00
	char m_pad02[0xa];
	int m_nField0c;	// 0x0c
	float m_flChannelScale;	// 0x10
	int m_nField14;	// 0x14
	float m_flVolume;	// 0x18
	int m_nField1c;	// 0x1c
	float m_flPitch;	// 0x20
	int m_nField24;	// 0x24
	char m_bField28;	// 0x28
	char m_bField29;	// 0x29
	char m_pad2a[2];
	int m_nField2c;
	int m_nField30;
	int m_nField34;
	int m_nField38;
	int m_nField3c;
	int m_nField40;
	int m_nField44;
	int m_nField48;
	int m_nField4c;
	int m_nField50;	// 0x50
	char m_bField54;	// 0x54
	char m_szVolume[0x20];	// 0x55
	char m_szChannel[0x20];	// 0x75
	char m_szSoundLevel[0x20];	// 0x95
	char m_szPitch[0x20];	// 0xb5

	CUnknown101b6250 *sub_101308d0();	// resets the record to "CHAN_AUTO" / "VOL_NORM" / "PITCH_NORM" / "SNDLVL_NORM" defaults, returns this
};
