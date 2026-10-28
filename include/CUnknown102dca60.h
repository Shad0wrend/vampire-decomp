// CUnknown102dca60: an entity that keeps a vector of target entity handles and picks a random enabled one to activate
// (real name not yet known).
#pragma once

#include "COutputEvent.h"

class CUnknown102dca60_Target	// a target entity: its enabled state is at +0x564 (1 = enabled), its mode at +0x590
{
public:
	void sub_102db3b0(int mode);	// the unit-local setter of the mode at +0x590 (stub 0x1000e3ae)

	char m_pad0000[0x564];
	int m_nState;	// 0x564
	char m_pad0568[0x590 - 0x568];
	int m_nMode;	// 0x590: 0, 1 or 2 (set by the unit-local setter sub_102db3b0)
};

class CUnknown102dca60
{
public:
	char m_pad0000[0x17c];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x2e0 - 0x180];
	int m_pEdict2e0;	// 0x2e0
	char m_pad02e4[0x454 - 0x2e4];
	const char *m_pszSample454;	// 0x454: the sample played when the flag is clear
	const char *m_pszSample458;	// 0x458: the sample played with the flag set
	char m_pad045c;
	char m_bField45d;	// 0x45d
	char m_pad045e[2];
	float m_flField460;	// 0x460: a time (0 = none)
	float m_flRadius464;	// 0x464: the distance within which the player triggers the entity
	float m_flLoudness468;	// 0x468: turned into the sound level
	char m_pad046c[0x484 - 0x46c];
	COutputEvent m_OnPick;	// 0x484
	char m_pad049c[0x4b4 - 0x49c];
	COutputEvent m_OutA;	// 0x4b4: fired with the player as activator when it comes close
	COutputEvent m_OutB;	// 0x4cc
	char m_pad04e4[0x500 - 0x4e4];
	int m_nPickRange;	// 0x500: the random pick is made in 0..this
	int m_iCurrent;	// 0x504: index of the current target
	float m_flNextTime;	// 0x508
	float m_flMinDelay;	// 0x50c
	float m_flMaxDelay;	// 0x510
	char m_pad0514;
	char m_bField515;	// 0x515: when clear the sample is played with flag 0x200
	char m_pad0516[2];
	unsigned int *m_pTargets;	// 0x518: the handle vector (memory)
	int m_nAlloc;	// 0x51c
	int m_nGrow;	// 0x520
	int m_nTargets;	// 0x524: its size

	void sub_102dca60();	// switches every target off (2), then picks a random enabled target other than the current one (retrying until one is found), switches it on (1), makes it current, fires the pick output and schedules the next pick
	void sub_102dc490();	// switches every target to mode 0, runs sub_102dc520, then fires the output at +0x49c (activator and caller this)
	void sub_102dc520();	// stub 0x1000d69d
	void sub_102dbfb0();	// the think function: without a player (slot 1 of the engine's player lookup) only reschedules; with the entity enabled (sub_102dc8f0) and the player within +0x464 fires +0x4b4 and ends (sub_102dc490, sub_102dc2c0, sub_102dc3e0), else fires +0x4cc when the time at +0x460 has passed, plays the sample again when +0x45d is set, picks the next target when due and schedules the next think; disabled it just switches everything off
	bool sub_102dc8f0();	// stub 0x1000e8a4
	void sub_102dc3e0();	// stub 0x10006604
	void sub_102dc6a0(char bFlag);	// stub 0x10015519: plays the sample (+0x454 / +0x458) of the entity and sets the time at +0x460
};
