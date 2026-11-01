// CSpeaker: declared by pcdecomp transplant for 0x101af940 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

class CSpeaker
{
public:
	CSpeaker *vfunc5(unsigned int flags);
	void vfunc104();	// slot 104: unless the byte at +0x204 has bit 0 set, the time at +0x17c = the random float in [5, 15] (the global random stream, slot 1) + gpGlobals->curtime
	void sub_1000cb8a();

	char m_pad0000[0x17c];
	float m_flTime017c;	// 0x017c
	char m_pad0180[0x204 - 0x180];
	unsigned char m_b0204;	// 0x0204
	char m_pad0205[0x210 - 0x205];
	int m_iHealth210;	// 0x0210: the volume is a tenth of it
	char m_pad0214[0x2e0 - 0x214];
	int m_pEdict2e0;	// 0x02e0
	char m_pad02e4[0x450 - 0x2e4];
	const char *m_pszName450;	// 0x0450: the sentence (or sentence group) name
	char m_pad0454[4];
	int m_nSoundLevel458;	// 0x0458
	int m_nRule45c;	// 0x045c: 1..12 pick the fixed sentence group of that chapter, 0 uses the name
	float m_flDelayMin460;	// 0x0460
	float m_flDelayMax464;	// 0x0464

	void sub_101af650();	// "CSpeaker::SpeakerThink": waits for the talk monsters (global at 0x10936c40), then plays the sentence (a '!' name once, then stops thinking) or a random one of the sentence group and re-arms the think with a random delay
public:
	typedef int Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
	int vfunc117();
};
