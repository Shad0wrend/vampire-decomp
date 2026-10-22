// CUnknown100d99e0: the player's skill / command slot selection (the +0x1b70 range group), as the "previous / next
// slot" console commands see it (a CBasePlayer); the members below are not yet declared in the player's own headers.
#pragma once

class CUnknown100d99e0
{
public:
	int sub_10182d70(int a);	// stub 0x1000b050: the number of selectable slots (calls sub_10203f10)
	int sub_10182da0(int slot, int a);	// stub 0x10010271: the position of the slot in the selectable list
	int sub_10182dd0(int position, int a);	// stub 0x1000c626: the slot at a position of the list, -1 for none
};
