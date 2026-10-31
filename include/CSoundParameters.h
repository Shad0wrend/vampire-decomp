// CSoundParameters: the resolved parameters of a sound script entry (public SDK soundemittersystem layout).
#pragma once

struct CSoundParameters
{
	int channel;	// 0x00
	float volume;	// 0x04
	int pitch;	// 0x08
	int pitchlow;	// 0x0c
	int pitchhigh;	// 0x10
	int soundlevel;	// 0x14
	bool play_to_owner_only;	// 0x18
	int count;	// 0x1c
	char soundname[128];	// 0x20

	CSoundParameters()
	{
		channel = 0;
		volume = 1.0f;
		pitch = 100;
		pitchlow = 100;
		pitchhigh = 100;
		soundlevel = 75;
		soundname[0] = 0;
		play_to_owner_only = false;
		count = 0;
	}
};
