// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100bc3c0 size=0x5
#include "bf_read.h"
// bitbuf.cpp: the write masks, filled in by the constructor of a global helper object
unsigned long g_106d1990[32][33];	// g_BitWriteMasks
unsigned long g_106d1910[32];	// g_ExtraMasks

class CBitWriteMasksInit
{
public:
	CBitWriteMasksInit()
	{
		for (unsigned int startbit = 0; startbit < 32; startbit++)
		{
			for (unsigned int nBitsLeft = 0; nBitsLeft < 33; nBitsLeft++)
			{
				unsigned int endbit = startbit + nBitsLeft;
				g_106d1990[startbit][nBitsLeft] = (1 << startbit) - 1;
				if (endbit < 32)
					g_106d1990[startbit][nBitsLeft] |= ~((1 << endbit) - 1);
			}
		}
		for (unsigned int maskBit = 0; maskBit < 32; maskBit++)
			g_106d1910[maskBit] = (1 << maskBit) - 1;
	}
};
CBitWriteMasksInit g_BitWriteMasksInit;
// END FUNCTION

// FUNCTION: 0x100bf940 size=0x5
int sub_100bf980(void);
int g_106d2d7c = ((int (*)(int))sub_100bf980)(0);
// END FUNCTION

// FUNCTION: 0x100c4540 size=0x5
// an empty inline constructor: the game's construct is a bare `ret`, no code names the global
struct CEmpty100c4540
{
	CEmpty100c4540() {}
};
CEmpty100c4540 g_empty_100c4540;
// END FUNCTION
