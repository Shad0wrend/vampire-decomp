// CVFeatMgr: the global feat table at 0x10739d08 (a growable array of CVFeat pointers, count at 0x10739d20 and
// elements at 0x10739d24 as CVFeatSet reads them). Real name not yet known.
#pragma once

#include "CVFeat.h"

class CVFeatMgr
{
public:
	int m_n0000;
	int m_nGrow;	// 0x04: how many slots the array grows by
	int m_nNextId;	// 0x08: the id handed to the next feat
	int m_iInternalName;	// 0x0c: the \"InternalName\" string index of the \"Feats\" block
	int m_iName;	// 0x10: the \"Name\" string index of the \"Feats\" block
	int m_nAlloc;	// 0x14
	int m_nCount;	// 0x18
	CVFeat **m_ppFeats;	// 0x1c

	void sub_101e6040();	// loads \"vdata\\system\\feats.txt\": frees the old feats, then adds one feat per \"Feat\" key of the \"Feats\" block (Msg when the file cannot be opened); stub 0x10003de1
};
