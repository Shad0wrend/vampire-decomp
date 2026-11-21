// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1007b650 size=0x27
#include "CWeaponOwner.h"
struct CWeaponOwner;
CWeaponOwner *sub_1007b160();

int __stdcall sub_1007b650(int nIndex)
{
	return *(int *)((char *)sub_1007b160() + 0x2668 + nIndex * 0x1093c);
}
// END FUNCTION
