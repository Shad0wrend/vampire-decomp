// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101aa750 size=0xd
struct TroikaField63f0 { char pad[0x63f0]; char m; };
void CAI_BaseNPCTroika::vfunc416(char value)
{
	((TroikaField63f0 *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x102ad110 size=0x20
#include "CAI_BaseNPCTroika.h"
struct CUnknownGlobals1070b228 { int m_pad[3]; float m_curtime; };
extern CUnknownGlobals1070b228 *g_1070b228;
void CAI_BaseNPCTroika::vfunc616()
{
	sub_10015839(0x30);
	m_f65bc = g_1070b228->m_curtime + 15.0f;
}
// END FUNCTION
