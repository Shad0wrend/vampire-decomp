// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102cff90 size=0xbd
#include "utlrbtree.h"
#include "CUnknown102cff90.h"

CUnknown102cff90::~CUnknown102cff90()
{
    m_first.Purge();
    m_second.Purge();
}
// END FUNCTION
