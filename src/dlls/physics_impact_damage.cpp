// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

// FUNCTION: 0x10151b70 size=0x6b
#include "Vector.h"

extern const float g_104454c4;
extern "C" __declspec(dllimport) void Msg(const char *pMsg, ...);

float sub_10151b70(const float *pTable, int nEntries, float flValue, char bPrint)
{
    if (pTable) {
        int i = 0;
        if (nEntries > 0) {
            do {
                if (flValue < pTable[i * 2])
                    break;
                i++;
            } while (i < nEntries);
            if (i > 0) {
                i--;
                if (bPrint)
                    Msg("Damage %.0f, energy %.0f\n", (double)pTable[i * 2 + 1], (double)FastSqrt(flValue));
                return pTable[i * 2 + 1];
            }
        }
    }
    return g_104454c4;
}
// END FUNCTION
