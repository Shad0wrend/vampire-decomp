#pragma once

// The class of 0x10258580 is not known yet: a weapon-like object whose owner (CWeaponRanged::sub_102517b0) has a count at
// +0x4fe9c and a second count at +0x2558.
class CUnknown10258580
{
public:
    bool sub_10258580();	// 0x10258580: false when the owner's count at +0x4fe9c is 0, else whether the owner's count at +0x2558 is above 0
};
