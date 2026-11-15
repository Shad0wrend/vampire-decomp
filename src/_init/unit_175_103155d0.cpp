// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103155d0 size=0x5
int * sub_10315610(void);
int * g_10936c60 = ((int * (*)(int))sub_10315610)(0);
// END FUNCTION

// FUNCTION: 0x1031a1c0 size=0xa
#include "ConVar.h"
ConVar g_10936de0("debug_no_damage", "0", 0, "If this is true, no one takes damage.", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x1031a260 size=0xa
#include "ConVar.h"
ConVar g_10937030("debug_feed_trace", "0", 0, "Turn this on to trace feeding in detail.");
// END FUNCTION

// FUNCTION: 0x1031a2f0 size=0xa
#include "ConVar.h"
ConVar g_10936d10("debug_show_melee_attack_boxes", "0", 0, "Show some attack boxes.", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x1031a390 size=0xa
#include "ConVar.h"
ConVar g_10937c88("debug_show_melee_attack_boxes_obstructed", "0", 0, "Show some attack boxes.", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x1031a430 size=0xa
#include "ConVar.h"
ConVar g_10936e98("debug_show_melee_attack_boxes_missed", "0", 0, "Show some attack boxes.", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x1031a4d0 size=0xa
#include "ConVar.h"
ConVar g_10937a88("debug_viewcone_back_dist", "40", 0, "Change the distance we bump back the view cone.");
// END FUNCTION
