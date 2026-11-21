// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10001bd0 size=0xa
#include "ConVar.h"
ConVar g_102de308("camera_fov", "-1", 0);
// END FUNCTION

// FUNCTION: 0x100270c0 size=0xa
#include "ConVar.h"
ConVar g_102e32e0("torchlight_minradius", "190", 0);
// END FUNCTION

// FUNCTION: 0x10027110 size=0xa
#include "ConVar.h"
ConVar g_102e0ed0("torchlight_maxradius", "240", 0);
// END FUNCTION

// FUNCTION: 0x10027160 size=0xa
#include "ConVar.h"
ConVar g_102e26c8("torchlight_enable", "0", 0);
// END FUNCTION

// FUNCTION: 0x100271b0 size=0xa
#include "ConVar.h"
ConVar g_102e71d8("torchlight_fast", "17", 0);
// END FUNCTION

// FUNCTION: 0x10027200 size=0xa
#include "ConVar.h"
ConVar g_102e7220("torchlight_slow", "7", 0);
// END FUNCTION

// FUNCTION: 0x10027250 size=0xa
#include "ConVar.h"
ConVar g_102e0048("torchlight_exponent", "1", 0);
// END FUNCTION

// FUNCTION: 0x100299b0 size=0xa
#include "ConVar.h"
ConVar g_102ea548("ft_link_velocity", "800", 8192, "The initial velocity of a flamethrower link");
// END FUNCTION

// FUNCTION: 0x10029a00 size=0xa
#include "ConVar.h"
ConVar g_102ea4b8("ft_link_drag", ".1", 8192, "The drag applied to a flamethrower link. The velocity is curved by this much each second. ");
// END FUNCTION

// FUNCTION: 0x10029a50 size=0xa
#include "ConVar.h"
ConVar g_102ea470("ft_link_gravity", "-100", 8192, "The amouunt of drop applied to a link, in inches per second.");
// END FUNCTION

// FUNCTION: 0x10029aa0 size=0xa
#include "ConVar.h"
ConVar g_102ea500("ft_link_lifetime", "1", 8192, "How long a link in the chain lives");
// END FUNCTION

// FUNCTION: 0x10029af0 size=0xa
#include "ConVar.h"
ConVar g_102ea590("ft_draw_chain", "0", 8192, "Set to 1 to draw the client chain, 2 to draw the server, 3 for both, 0 for none.");
// END FUNCTION

// FUNCTION: 0x10029b40 size=0xa
#include "ConVar.h"
ConVar g_102ea428("ft_spawn_particles", "1", 8192, "Set to 0 to stop spawning fire particles");
// END FUNCTION

// FUNCTION: 0x1002a130 size=0xa
#include "CGameMovement.h"
CGameMovement g_102ea5e8;
// END FUNCTION

// FUNCTION: 0x1002a250 size=0x5
inline int pcd_initial_102ea8ac() { return 0xffffffff; }
int g_102ea8ac = pcd_initial_102ea8ac();
// END FUNCTION

// FUNCTION: 0x1002c030 size=0xa
#include "ConCommand.h"
void sub_1002c020(void);
ConCommand g_102eacd0("ai_node_graph_built", sub_1002c020, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x1002d3e0 size=0xa
#include "ConCommand.h"
void sub_1002d2b0(void);
ConCommand g_102ead74("CreateHairball", sub_1002d2b0, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x1003a6b0 size=0xa
#include "ConVar.h"
ConVar g_102eec58("cl_ejectbrass", "1", 0);
// END FUNCTION

// FUNCTION: 0x1003aa90 size=0xa
#include "ConVar.h"
ConVar g_103eac38("clip_x", "0", 0);
// END FUNCTION

// FUNCTION: 0x1003aae0 size=0xa
#include "ConVar.h"
ConVar g_103eac80("clip_y", "0", 0);
// END FUNCTION

// FUNCTION: 0x1003ab30 size=0xa
#include "ConVar.h"
ConVar g_103eacc8("clip_z", "0", 0);
// END FUNCTION

// FUNCTION: 0x100446e0 size=0xa
#include "ConVar.h"
ConVar g_103ecd10("muzzleflash_light", "1", 128);
// END FUNCTION

// FUNCTION: 0x1004b1d0 size=0xa
#include "ConVar.h"
ConVar g_103edd98("r_visualizetraces", "0", 8192);
// END FUNCTION

// FUNCTION: 0x1004deb0 size=0xa
#include "ConVar.h"
ConVar g_103eddf8("credits_scrollrate", "30", 0);
// END FUNCTION

// FUNCTION: 0x10051b70 size=0xa
#include "ConVar.h"
ConVar g_103ee098("nosradar_min_strike_dist", "80", 0);
// END FUNCTION

// FUNCTION: 0x10051bc0 size=0xa
#include "ConVar.h"
ConVar g_103edf78("nosradar_max_strike_dist", "190", 0);
// END FUNCTION

// FUNCTION: 0x10051c10 size=0xa
#include "ConVar.h"
ConVar g_103edfc0("nosradar_flash_speed", "8", 0);
// END FUNCTION

// FUNCTION: 0x10052310 size=0xa
#include "ConVar.h"
ConVar g_103edee8("ic_arr_x", "950", 0);
// END FUNCTION

// FUNCTION: 0x10052360 size=0xa
#include "ConVar.h"
ConVar g_103edea0("ic_arr_y", "20", 0);
// END FUNCTION

// FUNCTION: 0x100523b0 size=0xa
#include "ConVar.h"
ConVar g_103ee050("ic_bg_x", "886", 0);
// END FUNCTION

// FUNCTION: 0x10052400 size=0xa
#include "ConVar.h"
ConVar g_103ee008("ic_bg_y", "20", 0);
// END FUNCTION

// FUNCTION: 0x10052450 size=0xa
#include "ConVar.h"
ConVar g_103edf30("ic_yaw", "0", 0);
// END FUNCTION

// FUNCTION: 0x10053030 size=0xa
#include "ConVar.h"
ConVar g_103ee0f0("v_hidedlg", "0", 1);
// END FUNCTION

// FUNCTION: 0x100583b0 size=0xa
#include "ConCommand.h"
void sub_10058310(void);
ConCommand g_103eeb54("slot1", sub_10058310, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x10058400 size=0xa
#include "ConCommand.h"
void sub_10058320(void);
ConCommand g_103eeb7c("slot2", sub_10058320, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x10058450 size=0xa
#include "ConCommand.h"
void sub_10058330(void);
ConCommand g_103eeba4("slot3", sub_10058330, 0, 0, 0);
// END FUNCTION
