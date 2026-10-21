// CUnknown101f10e0: loader of the "ReactionInfoList" data file (real name not yet known); its list object keeps the
// reactions (sub_101f1050 reserves a slot of the id array, sub_101f0ea0 hands out the next item).
#pragma once

class CUnknown101f10e0
{
public:
	bool sub_101f10e0(void *pData);	// parses one reaction category of the data file: its InternalName (looked up in the global name table at 0x1073a9a0, registered on a miss) picks the id and every ReactionGroup key is handed to a fresh item (sub_101f0b80); false (with a Msg) for no data or when no item could be made
	int *sub_101f1050();	// reserves one more id slot (stub 0x10006032)
	void *sub_101f0ea0();	// the next item (stub 0x10012d64), 0 when none could be made
};
