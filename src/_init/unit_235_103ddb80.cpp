// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ddb80 size=0x5
inline int pcd_initial_10940390() { return 0x450; }
int g_10940390 = pcd_initial_10940390();
// END FUNCTION

// FUNCTION: 0x103ddbc0 size=0xa
#include "ConVar.h"
ConVar g_10940448("zombie_headshot_mod", "10.0", 0);
// END FUNCTION

// FUNCTION: 0x103ddc50 size=0xa
#include "ConVar.h"
ConVar g_10940400("zombie_melee_mod", "1.0", 0);
// END FUNCTION

// FUNCTION: 0x103ddce0 size=0xa
#include "ConVar.h"
ConVar g_10940498("zombie_gib_amt", "100", 0);
// END FUNCTION

// FUNCTION: 0x103dde00 size=0x5
int * sub_103dde40(void);
int * g_1094048c = ((int * (*)(int))sub_103dde40)(0);
// END FUNCTION
