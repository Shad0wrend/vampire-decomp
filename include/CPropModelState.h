// CPropModelState: declared by pcdecomp transplant for 0x10215bd0 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "COutputEvent.h"

struct inputdata_t;

class CPropModelState : public CBaseEntity
{
public:
	CPropModelState *sub_10216360();
	void sub_102168a0(inputdata_t *pData);	// input handler: takes the input's integer (0 unless its type is 4) minus one, clamps it to [0, m_nStates - 1] and passes it with the activator to sub_10216aa0
	void sub_10216aa0(int index, void *pActivator);	// "CPropModelState::SetState": DevWarning "Unable to set %s to state %d" for an index outside 0..m_nStates; else fires the output of that state (+0x790 + index * 0x18) with the activator, sets the model of the state (slot 105), the size from the studio header hull, stores the state and plays one of two sounds (random)
	virtual void vfunc103();	// slot 103 "CPropModelState::Spawn": CBaseProp::vfunc103, clamps the state count (0..7) and the current state, sets the model of the current state (slot 105), flag 0x40000 and the +0x19c bits from bit 0 / bit 1 of +0x204, then with the studio header of sub_100952d0(-1): SetSolid(3) (inlined, scope trace), SetSize from the header hull (+0xb4 / +0xc0), SetCollisionGroup and the partition update
	void sub_1018df70();	// CBaseProp::vfunc103 (stub 0x10011793), called directly
	void sub_10260a50(int a);	// called through the stub at 0x1000d0b2
	char *sub_100952d0(int a);	// CBaseAnimating::sub_100952d0 (stub 0x10013d8b): the studio header of the model (null when there is none)
	void vfunc265(void *pActivator, void *pCaller, int useType, float value);	// slot 265 "CPropModelState::Use" (plain member): locked (byte at +0x734): fires the locked output (+0x778) and plays the locked sound; else fires the pressed output (+0x760) and steps to the next state (wrapping to 0 after the last)

	char m_pad03e0[0x734 - 0x3e0];
	char m_bLocked;	// 0x734
	char m_pad0735[3];
	int m_iState;	// 0x738: current state, clamped to the state count
	int m_nStates;	// 0x73c
	const char *m_pStateModels[8];	// 0x740: [0] is the entity's own model name (+0x388)
	COutputEvent m_OnPressed;	// 0x760
	COutputEvent m_OnLocked;	// 0x778
	COutputEvent m_OnState[8];	// 0x790: fired when the state is set
};
