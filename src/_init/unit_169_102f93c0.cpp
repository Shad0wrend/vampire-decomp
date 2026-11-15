// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102f93c0 size=0x5
inline int pcd_initial_10934100() { return 0x450; }
int g_10934100 = pcd_initial_10934100();
// END FUNCTION

// FUNCTION: 0x102fb3e0 size=0xa
#include "ConCommand.h"
void sub_102fb470(void);
ConCommand g_10934104("ai_debug_node_connect", sub_102fb470, "Debug the attempted connection between two nodes", 0, 0);
// END FUNCTION
