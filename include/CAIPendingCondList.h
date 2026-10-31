// CAIPendingCondList: a small table of up to 8 (condition id, expiry time) pairs of an AI object, with the
// number of used pairs at +0x40. Placeholder class (the real name is not known yet); the helpers are
// called directly through their stubs.
#pragma once

class CAI_BaseNPCCondTarget
{
public:
	void sub_10269a20(int condition);	// CAI_BaseNPC::SetCondition-like (stub 0x100041b0): sets the condition bit
};

struct CAIPendingCond
{
	int m_nCondition;	// 0x00
	float m_flExpireTime;	// 0x04
};

class CAIPendingCondList
{
public:
	CAIPendingCond m_Entries[8];	// 0x00
	int m_nEntries;	// 0x40

	void sub_102cc6c0(int condition, float flDelay);	// stub 0x1000a3ee: adds a (condition, expiry time) pair
	void sub_102cc730(CAIPendingCond *pEntry);	// stub 0x1000e5ac: removes the pair (swaps the last into its place)
	void sub_102cc760(CAI_BaseNPCCondTarget *pNPC);	// every pair whose time has passed: sets its condition on pNPC and removes it
};
