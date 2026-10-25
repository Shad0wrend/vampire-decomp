// CSecCamera: declared by pcdecomp transplant for 0x1020b370 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "COutputEvent.h"

class CSecCamera : public CBaseEntity
{
public:
	CSecCamera *sub_1020bf00();
	void vfunc104();	// slot 104 (Precache): precaches the four model names at +0x7c4 / +0x7c8 / +0x7cc / +0x7d0 when set, then CBreakableProp::vfunc104
	void sub_1000978c();	// CBreakableProp::vfunc104, called directly (tail call)
	void sub_1020c890();	// when the sound pointer at +0x7d4 is set: has the engine sound object (global 0x1070b248, slot 11, EmitSound with 11 arguments) play to a broadcast recipient filter (every player) on this entity's engine index (IndexOfEdict, engine slot 35), then clears the pointer
	void sub_1020c3d0();	// the think function: once the time at +0x7a0 has passed advances the camera state machine (state at +0x79c): 0 -> 2, 1 -> 3, 2 -> fires the output at +0x7f4 then 1, 3 -> fires the output at +0x80c then 0, 4 -> 6 or 5 (sub_1020cd30), 5 -> 8, 8 -> 1, 6 / 7 nothing, else a DevMsg and the byte at +0x77c cleared
	void sub_1020c4f0(int nState);	// switches the camera to the given state (stub 0x10002973)
	char sub_1020cd30();	// stub 0x1000e089
	void sub_1020c2a0();	// the camera's think (next think 0.1 s later): while the byte at +0x77c is set runs the state machine (sub_1020c3d0), every 0.25 s asks sub_1020cd30 and goes to state 4 unless already in 4 or 6; in the states 4 / 5 sets the playback rate (+0x6f4 = 1 / the float at +0x7c0), advances the animation (slot 250) and, with the byte at +0x65c set, restarts "idle" (state 5) or "zoom_idle" (state 4)
	void sub_1020cbf0(const char *pszSequence);	// starts the named sequence (stub 0x1000aaab)
	void vfunc113();	// slot 113: CBreakableProp::vfunc113 (0x10004dbd), then the think (sub_1020c2a0) set +0.0 s later, the nothing-else timer at +0x7a0 (1020c250)

	char m_pad03e0[0x77c - 0x3e0];
	char m_b77c;	// 0x77c
	char m_pad77d[0x79c - 0x77d];
	int m_nState79c;	// 0x79c
	float m_flNextStateTime7a0;	// 0x7a0
	char m_pad07a4[0x7f4 - 0x7a4];
	COutputEvent m_Output7f4;	// 0x7f4
	COutputEvent m_Output80c;	// 0x80c
};
