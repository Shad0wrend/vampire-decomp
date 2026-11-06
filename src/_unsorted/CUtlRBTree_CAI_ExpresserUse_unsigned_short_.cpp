// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10313620 size=0x381
#include "vampire_all.h"
// TARGET: ?LinkToParent@?$CUtlRBTree@UCAI_ExpresserUse@@G@@QAEXGG_N@Z
#include "utlrbtree.h"
#include "CAI_Expresser.h"
static void (CUtlRBTree<CAI_ExpresserUse, unsigned short>::*s_LinkToParent)(unsigned short, unsigned short, bool) = &CUtlRBTree<CAI_ExpresserUse, unsigned short>::LinkToParent;
// END FUNCTION

// FUNCTION: 0x10313b20 size=0x366
#include "vampire_all.h"
// TARGET: ?RemoveNode@?$CUtlRBTree@UCAI_ExpresserUse@@G@@QAEXG@Z
#include "utlrbtree.h"
#include "CAI_Expresser.h"
static void (CUtlRBTree<CAI_ExpresserUse, unsigned short>::*s_RemoveNode)(unsigned short) = &CUtlRBTree<CAI_ExpresserUse, unsigned short>::RemoveNode;
// END FUNCTION

// FUNCTION: 0x103140f0 size=0x824
// TARGET: ?RemoveRebalance@?$CUtlRBTree@UCAI_ExpresserUse@@G@@QAEXG@Z
#include "utlrbtree.h"
struct CAI_ExpresserUse { char m_Data[8]; };
static void (CUtlRBTree<CAI_ExpresserUse, unsigned short>::*s_RemoveRebalance)(unsigned short) = &CUtlRBTree<CAI_ExpresserUse, unsigned short>::RemoveRebalance;
// END FUNCTION
