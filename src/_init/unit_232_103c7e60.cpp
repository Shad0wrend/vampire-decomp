// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103c7e60 size=0x5
inline int pcd_initial_1093d454() { return 0x450; }
int g_1093d454 = pcd_initial_1093d454();
// END FUNCTION

// FUNCTION: 0x103c7ea0 size=0x5
#include "Vector.h"
Vector g_1093d608[3] = { Vector(0.8164966f, 0.0f, 0.57735026f), Vector(-0.40824834f, 0.70710677f, 0.57735026f), Vector(-0.40824822f, -0.7071068f, 0.57735026f) };
// END FUNCTION

// FUNCTION: 0x103c7f40 size=0xa
#include "ConVar.h"
ConVar g_1093d690("werewolf_disregard_player_vision", "0", 0);
// END FUNCTION

// FUNCTION: 0x103c7fd0 size=0xa
#include "ConVar.h"
ConVar g_1093f810("werewolf_draw_nodes", "0", 0);
// END FUNCTION

// FUNCTION: 0x103c8060 size=0xa
#include "ConVar.h"
ConVar g_1093fa80("werewolf_draw_last_teleport", "0", 0);
// END FUNCTION

// FUNCTION: 0x103c80f0 size=0xa
#include "ConVar.h"
ConVar g_1093d4e0("werewolf_draw_last_move", "0", 0);
// END FUNCTION

// FUNCTION: 0x103c8180 size=0xa
#include "ConVar.h"
ConVar g_1093f7c8("werewolf_draw_nearest_hint", "0", 0);
// END FUNCTION

// FUNCTION: 0x103c8210 size=0xa
#include "ConVar.h"
ConVar g_1093d5b8("werewolf_print_haspath", "20", 0);
// END FUNCTION

// FUNCTION: 0x103c82a0 size=0xa
#include "ConVar.h"
ConVar g_1093f738("werewolf_show_debug", "0", 0);
// END FUNCTION

// FUNCTION: 0x103c8330 size=0xa
#include "ConVar.h"
ConVar g_1093f858("werewolf_fastbreak_chance", "40", 0);
// END FUNCTION

// FUNCTION: 0x103c83c0 size=0xa
#include "ConVar.h"
ConVar g_1093d410("werewolf_teleport_out_time", "4.0", 0);
// END FUNCTION

// FUNCTION: 0x103c8450 size=0xa
#include "ConVar.h"
ConVar g_1093d6f0("werewolf_teleport_in_time", "2.0", 0);
// END FUNCTION

// FUNCTION: 0x103c84e0 size=0xa
#include "ConVar.h"
ConVar g_1093d458("werewolf_force_teleport_in_time", "25.0", 0);
// END FUNCTION

// FUNCTION: 0x103c8570 size=0xa
#include "ConVar.h"
ConVar g_1093f9a0("werewolf_force_teleport", "0", 0);
// END FUNCTION

// FUNCTION: 0x103c8600 size=0xa
#include "ConVar.h"
ConVar g_1093d570("werewolf_pursuit_distance", "800", 0);
// END FUNCTION

// FUNCTION: 0x103c8690 size=0xa
#include "ConVar.h"
ConVar g_1093f8e8("werewolf_pursuit_unseen_time", "3.0", 0);
// END FUNCTION

// FUNCTION: 0x103c8720 size=0x5
#define PCD_INITIALIZERS
#include "CCycleCount.h"
CCycleCount g_1093d638;
// END FUNCTION

// FUNCTION: 0x103c87f0 size=0x5
int * sub_103c8830(void);
int * g_1093d630 = ((int * (*)(int))sub_103c8830)(0);
// END FUNCTION

// FUNCTION: 0x103c8da0 size=0x5
#include "CAI_ClassScheduleIdSpace.h"
CAI_ClassScheduleIdSpace g_1093f9e8(false);
// END FUNCTION

// FUNCTION: 0x103c8e90 size=0x5
#include "CAI_LocalIdSpace.h"
CAI_LocalIdSpace g_1093d6d4(false);
// END FUNCTION

// FUNCTION: 0x103cb420 size=0xa
#include "ConVar.h"
ConVar g_1093f958("werewolf_draw_hints", "0", 0);
// END FUNCTION

// FUNCTION: 0x103d3b00 size=0xa
#include "ConVar.h"
ConVar g_1093f780("werewolf_teleport_ignore_viewcone", "1", 0);
// END FUNCTION

// FUNCTION: 0x103d3b90 size=0xa
#include "ConVar.h"
ConVar g_1093fa38("werewolf_teleport_full_path_check", "1", 0);
// END FUNCTION

// FUNCTION: 0x103d8af0 size=0xa
#include "ConVar.h"
ConVar g_1093f8a0("werewolf_footstep_sounds", "0", 0);
// END FUNCTION

// FUNCTION: 0x103d8b80 size=0xa
#include "ConVar.h"
ConVar g_1093d648("werewolf_footstep_shakes", "0", 0);
// END FUNCTION

// FUNCTION: 0x103d9d70 size=0xa
#include "ConVar.h"
ConVar g_1093d528("werewolf_translated_enemy_position_tolerance", "0", 0);
// END FUNCTION

// FUNCTION: 0x103da3a0 size=0x5
inline int pcd_initial_1093f80c() { return 0xffffffff; }
int g_1093f80c = pcd_initial_1093f80c();
// END FUNCTION

// FUNCTION: 0x103da400 size=0x5
int sub_103da440(void);
int g_1093d640 = ((int (*)(int))sub_103da440)(0);
// END FUNCTION

// FUNCTION: 0x103dbde0 size=0xa
#include "ConCommand.h"
void sub_103dbd50(void);
ConCommand g_1093f92c("werewolf_dump_schedules", sub_103dbd50, "werewolf_dump_schedules", 0, 0);
// END FUNCTION
