// CCharacter1015fbb0: the character object (at +0xa8 of a player entity) as far as its animation start goes.
// Placeholder class name of the function family around 0x1015fbb0; the real class is not known yet.
#pragma once

class CCharacter1015fbb0
{
public:
	void sub_1015fbb0(int nAnimation, bool bForce);	// starts the animation named by nAnimation (the sequence is looked up with SelectWeightedSequence) unless it is already running and bForce is not set; remembers it at +0x14b0, copies +0x1488 to +0x744 and takes the active weapon's slot 289 value into +0x14b4 (a weapon with more than one hand: slot 290 > 1 also runs sub_10099360 / sub_10099390)
	void sub_1015fd80(int a);
};
