// CUnknown101b30d0: a sound-script parameter record with default values (channel / volume / pitch / sound level and their source strings); real name not yet known.
#pragma once

class CUnknown101b30d0
{
public:
	int m_nField00;	// 0x00
	float m_flChannelScale;	// 0x04
	int m_nField08;	// 0x08
	float m_flVolume;	// 0x0c
	int m_nField10;	// 0x10
	float m_flPitch;	// 0x14
	int m_nField18;	// 0x18
	char m_bField1c;	// 0x1c
	char m_bField1d;	// 0x1d
	char m_pad1e[2];
	int m_nField20;	// 0x20
	int m_nField24;
	int m_nField28;
	int m_nField2c;
	int m_nField30;
	int m_nField34;
	int m_nField38;
	int m_nField3c;
	int m_nField40;
	int m_nField44;	// 0x44
	char m_bField48;	// 0x48
	char m_szVolume[0x20];	// 0x49
	char m_szChannel[0x20];	// 0x69
	char m_szSoundLevel[0x20];	// 0x89
	char m_szPitch[0x20];	// 0xa9

	CUnknown101b30d0 *sub_101332a0();	// resets the record to "CHAN_AUTO" / "VOL_NORM" / "PITCH_NORM" / "SNDLVL_NORM" defaults, returns this
};
