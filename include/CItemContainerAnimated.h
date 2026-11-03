// CItemContainerAnimated: declared by pcdecomp transplant for 0x10209d70 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CItemContainerAnimated : public CBaseEntity
{
public:
	CItemContainerAnimated *vfunc5(unsigned int flags);
	void sub_10005718();
	CItemContainerAnimated *sub_10209d40();	// as in CKeepUpright (transplant)
	void sub_10209e30(const char *pszLabel);	// plays the animation named pszLabel: looks the sequence up (sub_1008f7b0), tells the global sound object (0x1074b308) about the entity when the sound group (+0xb4) is set, and with a valid sequence stores it at +0x6f0, runs sub_10090950 and ResetClientsideFrame and removes flag 0x40000; else DevMsg "%s no sequence named:%s" and the sequence is 0
	int sub_1008f7b0(const char *pszLabel);	// CBaseAnimating::LookupSequence (stub 0x1000e057), called directly
	void sub_10090950();	// stub 0x100117b1, called directly
	void sub_100963d0();	// CBaseAnimating::ResetClientsideFrame (stub 0x100024b9), called directly
	void vfunc406();	// slot 406: plays the "open" animation
	void vfunc407();	// slot 407: plays the "close" animation
};
