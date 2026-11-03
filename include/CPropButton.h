// CPropButton: declared by pcdecomp transplant for 0x10214d60 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "COutputEvent.h"

struct inputdata_t;

class CPropButton : public CBaseEntity
{
public:
	CPropButton *sub_102154f0();
	virtual void vfunc104();	// slot 104 "Precache": slot 71 (sound set lookup), CBaseProp::vfunc104, then sets the use function at +0x1f0 to the vcall thunk 0x1000f506 (slot 265)
	virtual void vfunc71();	// slot 71 (sound set lookup): clears +0xbc, looks up the sound set named by the string at +0xc0 (+0xb4), then caches the sound ids of "on" and "off" in two globals
	virtual void vfunc103();	// slot 103 "CPropButton::Spawn": CBaseProp::vfunc103, clamps the position count (+0x740) to 0..7 and the start position (+0x73c) to 0..count, stores the latter at +0x670, flag 0x40000, effects |= 0xa0, no sound occlusion; with a studio header SetSolid(3), the collision bounds of the header, collision group 1, the partition handle and sub_100b3b00()
	void sub_10215960(inputdata_t *pData);	// input handler: takes the input's integer (0 unless its type is 4) minus one, clamps it to [0, m_nPositions - 1] and passes it with the activator to sub_10215ad0
	void sub_10215ad0(int index, void *pActivator);	// sets the button position (stores the index at +0x670, plays the sound)
	void vfunc265(void *pActivator, void *pCaller, int useType, float value);	// slot 265 "CPropButton::Use" (plain member): locked (byte at +0x738): fires the locked output (+0x75c) and plays the locked sound; else fires the pressed output (+0x744) and steps to the next position (wrapping to 0 after the last)
	int vfunc35(int pActivator);	// slot 35: the position value to report for the activator: +0x734 while locked or when the activator's check (sub_100a7bd0) fails, else +0x730

	char m_pad03e0[0x670 - 0x3e0];
	int m_nCurrent670;	// 0x670: the current position index
	char m_pad0674[0x738 - 0x674];
	char m_bLocked;	// 0x738
	char m_pad0739[3];
	int m_nPosition;	// 0x73c
	int m_nPositions;	// 0x740
	COutputEvent m_OnPressed;	// 0x744
	COutputEvent m_OnLocked;	// 0x75c
	COutputEvent m_OnPosition[8];	// 0x774: one output per position
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc117();
};
