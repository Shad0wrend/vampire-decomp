// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1013c850 size=0x45
#include "CUtlBuffer.h"
extern "C" __declspec(dllimport) void *Plat_Alloc(int);
CUtlBuffer::CUtlBuffer(int nGrow, int nInitSize, int bText)
{
    m_pBuffer = 0;
    m_nSize = nInitSize;
    m_nGrow = nGrow;
    if (nInitSize)
        m_pBuffer = (char *)Plat_Alloc(nInitSize);
    m_nError = 0;
    m_nGet = 0;
    m_nPut = 0;
    m_nFlags = 0;
    if ((char)bText)
        m_nFlags = 1;
}
// END FUNCTION
