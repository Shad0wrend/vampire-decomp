// CPropModelState: declared by pcdecomp transplant for 0x10215bd0 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

struct inputdata_t;

class CPropModelState : public CBaseEntity
{
public:
	CPropModelState *sub_10216360();
	void sub_102168a0(inputdata_t *pData);	// input handler: takes the input's integer (0 unless its type is 4) minus one, clamps it to [0, m_nStates - 1] and passes it with the activator to sub_10216aa0
	void sub_10216aa0(int index, void *pActivator);

	char m_pad03e0[0x73c - 0x3e0];
	int m_nStates;	// 0x73c
};
