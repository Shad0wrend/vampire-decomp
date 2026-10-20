// CPropButton: declared by pcdecomp transplant for 0x10214d60 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

struct inputdata_t;

class CPropButton : public CBaseEntity
{
public:
	CPropButton *sub_102154f0();
	void sub_10215960(inputdata_t *pData);	// input handler: takes the input's integer (0 unless its type is 4) minus one, clamps it to [0, m_nPositions - 1] and passes it with the activator to sub_10215ad0
	void sub_10215ad0(int index, void *pActivator);	// sets the button position (stores the index at +0x670, plays the sound)

	char m_pad03e0[0x740 - 0x3e0];
	int m_nPositions;	// 0x740
};
