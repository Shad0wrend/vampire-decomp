// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103b6180 size=0x5
inline int pcd_initial_1093ca3c() { return 0x450; }
int g_1093ca3c = pcd_initial_1093ca3c();
// END FUNCTION

// FUNCTION: 0x103b61c0 size=0xa
#include "ConVar.h"
ConVar g_1093cc80("sk_vtzimisce_health", "10", 0);
// END FUNCTION

// FUNCTION: 0x103b6250 size=0xa
#include "ConVar.h"
ConVar g_1093cf48("tzimisce_pickup", "1", 0, "Set to 1 to allow Tzimisce creation to pickup and throw bodies.");
// END FUNCTION

// FUNCTION: 0x103b62e0 size=0xa
#include "ConVar.h"
ConVar g_1093cce0("tzimisce_pounce", "1", 0, "Set to 1 to allow Tzimisce creation to do pounce attack.");
// END FUNCTION

// FUNCTION: 0x103b6370 size=0xa
#include "ConVar.h"
ConVar g_1093cf00("tzimisce_act_override", "0", 0, "Set this var to override the activities with a set thingy stuff stuff.");
// END FUNCTION

// FUNCTION: 0x103b6400 size=0xa
#include "ConVar.h"
ConVar g_1093ca88("tzimisce_throw_power", ".007", 0, "Set this var to override the throw power.");
// END FUNCTION

// FUNCTION: 0x103b6490 size=0xa
#include "ConVar.h"
ConVar g_1093ca40("tzimisce_throw_hds", ".0008", 0, "Set this var to override the throw height to distance scalar.");
// END FUNCTION

// FUNCTION: 0x103b6520 size=0xa
#include "ConVar.h"
ConVar g_1093c9f8("tzimisce_turn_scalar", ".15", 0, "Set this var to override turn animation speed.");
// END FUNCTION

// FUNCTION: 0x103b65b0 size=0xa
#include "ConVar.h"
ConVar g_1093cad0("tzimisce_throw_pos_y", "-80", 0, "Set this var to override the throw position for LOS checks.");
// END FUNCTION

// FUNCTION: 0x103b6640 size=0xa
#include "ConVar.h"
ConVar g_1093cc38("tzimisce_claw_left_x", "0", 0, "Set this var to override the claw reach around attack pos.");
// END FUNCTION

// FUNCTION: 0x103b66d0 size=0xa
#include "ConVar.h"
ConVar g_1093cbf0("tzimisce_claw_left_y", "25", 0, "Set this var to override the claw reach around attack pos.");
// END FUNCTION

// FUNCTION: 0x103b6760 size=0xa
#include "ConVar.h"
ConVar g_1093cba8("tzimisce_claw_left_z", "40", 0, "Set this var to override the claw reach around attack pos.");
// END FUNCTION

// FUNCTION: 0x103b67f0 size=0xa
#include "ConVar.h"
ConVar g_1093cd28("tzimisce_obstruction_lookahead", "24", 0, "Set this var to override the lookahead for obstructing physics objects.");
// END FUNCTION

// FUNCTION: 0x103b6880 size=0xa
#include "ConVar.h"
ConVar g_1093cb60("tzimisce_obstruction_z", "75", 0, "Set this var to override the z push for obstructing physics objects.");
// END FUNCTION

// FUNCTION: 0x103b6910 size=0xa
#include "ConVar.h"
ConVar g_1093cb18("tzimisce_obstruction_scalar", "5", 0, "Set this var to override the forward push for obstructing physics objects.");
// END FUNCTION

// FUNCTION: 0x103b69a0 size=0xa
#include "ConVar.h"
ConVar g_1093ceb8("tzimisce_voice_volume", "1", 0, "Set this var to override the voice volume (1 = normal).", true, 0.0f, true, 1.0f);
// END FUNCTION

// FUNCTION: 0x103b6a40 size=0xa
#include "ConVar.h"
ConVar g_1093cfd8("tzimisce_voice_attn", "65", 0, "Set this var to override the voice attenuation (75 decibels = normal).");
// END FUNCTION

// FUNCTION: 0x103b6ad0 size=0xa
#include "ConVar.h"
ConVar g_1093cf90("tzimisce_voice_pitch", "100", 0, "Set this var to override the voice pitch (100 = normal, 120 = high).");
// END FUNCTION

// FUNCTION: 0x103b6b80 size=0x5
int sub_103b6bc0(void);
int g_1093cb5c = ((int (*)(int))sub_103b6bc0)(0);
// END FUNCTION

// FUNCTION: 0x103b6fc0 size=0x5
#include "CAI_ClassScheduleIdSpace.h"
CAI_ClassScheduleIdSpace g_1093ce70(false);
// END FUNCTION
