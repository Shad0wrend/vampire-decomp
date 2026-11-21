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

// FUNCTION: 0x100584a0 size=0xa
#include "ConCommand.h"
void sub_10058340(void);
ConCommand g_103eebcc("slot4", sub_10058340, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x100584f0 size=0xa
#include "ConCommand.h"
void sub_10058350(void);
ConCommand g_103eebf4("slot5", sub_10058350, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x10058540 size=0xa
#include "ConCommand.h"
void sub_10058360(void);
ConCommand g_103eec1c("slot6", sub_10058360, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x10058590 size=0xa
#include "ConCommand.h"
void sub_10058370(void);
ConCommand g_103eec44("slot7", sub_10058370, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x100585e0 size=0xa
#include "ConCommand.h"
void sub_10058380(void);
ConCommand g_103eec6c("slot8", sub_10058380, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x10058630 size=0xa
#include "ConCommand.h"
void sub_10058390(void);
ConCommand g_103eeae4("vdiscipline", sub_10058390, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x10058680 size=0xa
#include "ConCommand.h"
void sub_100583a0(void);
ConCommand g_103eea78("vhotkey", sub_100583a0, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x10058710 size=0xa
#include "ConVar.h"
ConVar g_103eeb10("cl_hud_bloodbar", "", 0);
// END FUNCTION

// FUNCTION: 0x10058760 size=0xa
#include "ConVar.h"
ConVar g_103eeaa0("cl_hud_health", "", 0);
// END FUNCTION

// FUNCTION: 0x10063730 size=0x5
inline int pcd_initial_103eef34() { return 0xffffffff; }
int g_103eef34 = pcd_initial_103eef34();
// END FUNCTION

// FUNCTION: 0x100646b0 size=0xa
#include "ConVar.h"
ConVar g_103eefa8("crosshair_rot", "0.0f", 0);
// END FUNCTION

// FUNCTION: 0x100654d0 size=0xa
#include "ConVar.h"
ConVar g_103eeff0("mm_verbose", "0", 0);
// END FUNCTION

// FUNCTION: 0x10065670 size=0xa
#include "ConCommand.h"
void sub_100656a0(void);
ConCommand g_103ef08c("mm_resetparticles", sub_100656a0, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x10067b30 size=0xa
#include "utlvector.h"
CUtlVector<int> g_104770f8;
// END FUNCTION

// FUNCTION: 0x10067c10 size=0xa
#include "utlvector.h"
CUtlVector<int> g_10477154;
// END FUNCTION

// FUNCTION: 0x10067cb0 size=0xa
#include "ConVar.h"
ConVar g_10477110("debug_dump_activity_list", "0", 8448, "Set this to true to get a full list of activities and sequences when you fail to find one.");
// END FUNCTION

// FUNCTION: 0x10067d50 size=0xa
#include "ConCommand.h"
void sub_10067d00(void);
ConCommand g_104770d0("activitydump", sub_10067d00, "Forces ActivityList Dump", 8448, 0);
// END FUNCTION

// FUNCTION: 0x1007a510 size=0xa
#include "ConVar.h"
ConVar g_10477190("debug_dump_anim_seq_list", "0", 8448, "Set this to true to allow a dump of animation seqences on errors.");
// END FUNCTION

// FUNCTION: 0x1007a950 size=0xa
#include "ConVar.h"
ConVar g_104772f0("vdebug_weapon_anims", "0", 8192, "Set this to true to get extra info.");
// END FUNCTION

// FUNCTION: 0x1007a9a0 size=0xa
#include "ConVar.h"
ConVar g_104772a8("debug_infinite_ammo", "0", 8192, "Set this to 1 to give player infinite ammo.  Set to 2 to never need to reload.");
// END FUNCTION

// FUNCTION: 0x10081370 size=0xa
#include "ConVar.h"
ConVar g_104870e0("r_DrawBeams", "1", 0);
// END FUNCTION

// FUNCTION: 0x1008ec30 size=0xa
#include "ConVar.h"
ConVar g_1049bee0("r_drawmrmmodels", "1", 0);
// END FUNCTION

// FUNCTION: 0x1008ec80 size=0xa
#include "ConVar.h"
ConVar g_1049bf28("cl_SetupAllBones", "0", 0);
// END FUNCTION

// FUNCTION: 0x10090f30 size=0xa
#include "ConVar.h"
ConVar g_1049c490("debug_npc_move_yaw_snap", "1", 0, "Enable this to force the move_yaw pose parameter to snap rather than blend for NPCs.");
// END FUNCTION

// FUNCTION: 0x10091970 size=0xa
#include "ConVar.h"
ConVar g_10499848("debug_show_bones", "0", 0, "Enable this to draw wireframe bones for characters.");
// END FUNCTION

// FUNCTION: 0x100922e0 size=0xa
#include "utlvector.h"
CUtlVector<int> g_1049bfcc;
// END FUNCTION

// FUNCTION: 0x100928d0 size=0xa
#include "ConVar.h"
ConVar g_1049c448("vcollide_wireframe", "0", 0);
// END FUNCTION

// FUNCTION: 0x10092920 size=0xa
#include "ConVar.h"
ConVar g_1049bf70("r_disable_highlight", "0", 0);
// END FUNCTION

// FUNCTION: 0x100987b0 size=0xa
#include "ConVar.h"
ConVar g_1049d5a8("npc_motiontrailscale", "4.0", 0);
// END FUNCTION

// FUNCTION: 0x1009a320 size=0xa
#include "ConVar.h"
ConVar g_1049d7b8("damage_floaters_dist_min", "64", 0, "Distance from camera to be considered the minimum for basis of scaling floater values.");
// END FUNCTION

// FUNCTION: 0x1009a370 size=0xa
#include "ConVar.h"
ConVar g_1049d758("damage_floaters_dist_max", "800", 0, "Distance from camera to be considered the maximum for basis of scaling floater values.");
// END FUNCTION

// FUNCTION: 0x1009a3c0 size=0xa
#include "ConVar.h"
ConVar g_1049d5f0("damage_floaters_duration_min", "0.7", 0, "Duration of floaters when at the minimum distance value.");
// END FUNCTION

// FUNCTION: 0x1009a410 size=0xa
#include "ConVar.h"
ConVar g_1049d638("damage_floaters_duration_max", "1.0", 0, "Duration of floaters when at the maximum distance value.");
// END FUNCTION

// FUNCTION: 0x1009a460 size=0xa
#include "ConVar.h"
ConVar g_1049d370("damage_floaters_speed_min", "50", 0, "Upward speed of floaters when at the minimum distance value.");
// END FUNCTION

// FUNCTION: 0x1009a4b0 size=0xa
#include "ConVar.h"
ConVar g_1049d3b8("damage_floaters_speed_max", "100", 0, "Upward speed of floaters when at the maximum distance value.");
// END FUNCTION

// FUNCTION: 0x1009a500 size=0xa
#include "ConVar.h"
ConVar g_1049d518("damage_floaters_scale_min", "0.3", 0, "Scaled size of floater art when at the minimum distance value.");
// END FUNCTION

// FUNCTION: 0x1009a550 size=0xa
#include "ConVar.h"
ConVar g_1049d560("damage_floaters_scale_max", "0.9", 0, "Scaled size of floater art when at the maximum distance value.");
// END FUNCTION

// FUNCTION: 0x1009a5a0 size=0xa
#include "ConVar.h"
ConVar g_1049d800("damage_floaters_spacing_min", "5", 0, "Spacing between floater art when at the minimum distance value.");
// END FUNCTION

// FUNCTION: 0x1009a5f0 size=0xa
#include "ConVar.h"
ConVar g_1049d8a8("damage_floaters_spacing_max", "8", 0, "Spacing between floater art when at the maximum distance value.");
// END FUNCTION

// FUNCTION: 0x1009a640 size=0xa
#include "ConVar.h"
ConVar g_1049d680("damage_floaters_color_max_r", "255", 0, "Red Color Component (0-255) of damage floaters when at full health.");
// END FUNCTION

// FUNCTION: 0x1009a690 size=0xa
#include "ConVar.h"
ConVar g_1049d710("damage_floaters_color_max_g", "200", 0, "Green Color Component (0-255) of damage floaters when at full health.");
// END FUNCTION

// FUNCTION: 0x1009a6e0 size=0xa
#include "ConVar.h"
ConVar g_1049d6c8("damage_floaters_color_max_b", "0", 0, "Blue Color Component (0-255) of damage floaters when at full health.");
// END FUNCTION

// FUNCTION: 0x1009a730 size=0xa
#include "ConVar.h"
ConVar g_1049d310("damage_floaters_color_min_r", "255", 0, "Red Color Component (0-255) of damage floaters when at zero health.");
// END FUNCTION

// FUNCTION: 0x1009a780 size=0xa
#include "ConVar.h"
ConVar g_1049d2c8("damage_floaters_color_min_g", "0", 0, "Green Color Component (0-255) of damage floaters when at zero health.");
// END FUNCTION

// FUNCTION: 0x1009a7d0 size=0xa
#include "ConVar.h"
ConVar g_1049d848("damage_floaters_color_min_b", "0", 0, "Blue Color Component (0-255) of damage floaters when at zero health.");
// END FUNCTION

// FUNCTION: 0x1009a820 size=0xa
#include "ConVar.h"
ConVar g_1049d4d0("damage_floaters_color_max_threshhold", "90", 0, "Value (0-100) at which above this percent health we always display the full health color.");
// END FUNCTION

// FUNCTION: 0x1009b030 size=0xa
#include "utlvector.h"
CUtlVector<int> g_1049d978;
// END FUNCTION

// FUNCTION: 0x1009b0d0 size=0xa
#include "utlvector.h"
CUtlVector<int> g_1049d8f8;
// END FUNCTION

// FUNCTION: 0x1009b170 size=0xa
#include "utlvector.h"
CUtlVector<int> g_1049d964;
// END FUNCTION

// FUNCTION: 0x1009c1b0 size=0xa
#include "ConVar.h"
ConVar g_1049d990("camera_prefs", "6", 128);
// END FUNCTION

// FUNCTION: 0x1009c200 size=0xa
#include "ConVar.h"
ConVar g_1049d910("camera_weaponswitch", "1", 128);
// END FUNCTION

// FUNCTION: 0x1009cf70 size=0x5
#include "Vector.h"
Vector g_1049da94[3] = { Vector(0.8164966f, 0.0f, 0.57735026f), Vector(-0.40824834f, 0.70710677f, 0.57735026f), Vector(-0.40824822f, -0.7071068f, 0.57735026f) };
// END FUNCTION

// FUNCTION: 0x1009cfe0 size=0xa
#include "ConVar.h"
ConVar g_1049e1a8("cl_interpolate", "1.0", 0, "Interpolate entities on the client.");
// END FUNCTION

// FUNCTION: 0x1009e280 size=0xa
#include "ConVar.h"
ConVar g_1049dbd8("cl_simpleshadows", "0", 0);
// END FUNCTION

// FUNCTION: 0x100a2ae0 size=0xa
#include "ConCommand.h"
void sub_100a2b30(void);
ConCommand g_1049e2fc("cl_sizeof", sub_100a2b30, "Determines the size of the specified client class.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100a32e0 size=0x5
int sub_100a3300(void);
int g_1049e188 = ((int (*)(int))sub_100a3300)(0);
// END FUNCTION

// FUNCTION: 0x100a3b60 size=0xa
#include "ConVar.h"
ConVar g_104a0b88("zoom_sensitivity_ratio", "1.0", 0, "Additional mouse sensitivity scale factor applied when FOV is zoomed in.");
// END FUNCTION

// FUNCTION: 0x100a3bb0 size=0xa
#include "ConVar.h"
ConVar g_1049e880("hud_fastswitch", "1", 128);
// END FUNCTION

// FUNCTION: 0x100a3c00 size=0xa
#include "ConVar.h"
ConVar g_104a0ca0("test_player_dsp", "-1", 0);
// END FUNCTION

// FUNCTION: 0x100a3c50 size=0xa
#include "ConVar.h"
ConVar g_1049fe08("test_room_dsp", "-1", 0);
// END FUNCTION

// FUNCTION: 0x100a7260 size=0xa
#include "ConVar.h"
ConVar g_1049e838("vamplight_enabled", "0", 0);
// END FUNCTION

// FUNCTION: 0x100a72b0 size=0xa
#include "ConVar.h"
ConVar g_1049fd68("vamplight_radius", "200", 0);
// END FUNCTION

// FUNCTION: 0x100a7300 size=0xa
#include "ConVar.h"
ConVar g_104a0ce8("vamplight_offset", "0", 0);
// END FUNCTION

// FUNCTION: 0x100a7350 size=0xa
#include "ConVar.h"
ConVar g_1049e7f0("vamplight_exponent", "0", 0);
// END FUNCTION

// FUNCTION: 0x100a7840 size=0xa
#include "ConVar.h"
ConVar g_104a0c58("camera_ignore", "0", 0);
// END FUNCTION

// FUNCTION: 0x100ac790 size=0xa
#include "ConVar.h"
ConVar g_104a0f30("money", "1", 0);
// END FUNCTION

// FUNCTION: 0x100ac7e0 size=0xa
#include "ConVar.h"
ConVar g_104a0dc8("bc_fade", "0.2", 0);
// END FUNCTION

// FUNCTION: 0x100ac830 size=0xa
#include "ConVar.h"
ConVar g_104a0e58("bc_ground", "1", 0);
// END FUNCTION

// FUNCTION: 0x100b3680 size=0xa
#include "ConCommand.h"
void sub_100b36b0(void);
ConCommand g_104a1bc0("particle", sub_100b36b0, "Displays a particle system.  particle <name|number> [distance]", 0, 0);
// END FUNCTION

// FUNCTION: 0x100b38b0 size=0xa
#include "ConCommand.h"
void sub_100b38e0(void);
ConCommand g_104a1724("decal", sub_100b38e0, "Displays a decal.  decal <name|number> [distance]", 0, 0);
// END FUNCTION

// FUNCTION: 0x100b4580 size=0xa
#include "ConVar.h"
ConVar g_104a1750("cl_show_client_particles", "0", 0);
// END FUNCTION

// FUNCTION: 0x100bb430 size=0xa
#include "ConVar.h"
ConVar g_104a2a30("lod_TransitionDist", "400", 0);
// END FUNCTION

// FUNCTION: 0x100bb480 size=0xa
#include "ConVar.h"
ConVar g_104a2b18("lod_Enable", "1", 0);
// END FUNCTION

// FUNCTION: 0x100be5e0 size=0xa
#include "ConVar.h"
ConVar g_104a3a58("rope_shake", "0", 0);
// END FUNCTION

// FUNCTION: 0x100be630 size=0xa
#include "ConVar.h"
ConVar g_104a3c98("rope_drawlines", "0", 0);
// END FUNCTION

// FUNCTION: 0x100be680 size=0xa
#include "ConVar.h"
ConVar g_104a3b48("rope_subdiv", "2", 0, "Rope subdivision amount", true, 0.0f, true, 8.0f);
// END FUNCTION

// FUNCTION: 0x100be6e0 size=0xa
#include "ConVar.h"
ConVar g_104a4118("rope_collide", "0", 0, "Collide rope with the world");
// END FUNCTION

// FUNCTION: 0x100be730 size=0xa
#include "ConVar.h"
ConVar g_104a3af0("mat_fullbright", "0", 0);
// END FUNCTION

// FUNCTION: 0x100be780 size=0xa
#include "ConVar.h"
ConVar g_104a3aa8("r_speeds", "0", 0);
// END FUNCTION

// FUNCTION: 0x100be7d0 size=0xa
#include "ConVar.h"
ConVar g_104a3ce0("r_drawropes", "1", 0);
// END FUNCTION

// FUNCTION: 0x100c0970 size=0xa
#include "ConVar.h"
ConVar g_104a4210("soundscape_fadetime", "3.0", 0, "Time to crossfade sound effects between soundscapes");
// END FUNCTION

// FUNCTION: 0x100c0e70 size=0xa
#include "ConCommand.h"
void sub_100c0ec0(void);
ConCommand g_104a41e8("soundscape_flush", sub_100c0ec0, "Flushes the client side soundscapes", 0, 0);
// END FUNCTION

// FUNCTION: 0x100c1fc0 size=0xa
#include "ConVar.h"
ConVar g_104a4330("r_traceglow", "0", 0);
// END FUNCTION

// FUNCTION: 0x100c2010 size=0xa
#include "ConVar.h"
ConVar g_104a43c0("r_occlusionglow", "1", 0);
// END FUNCTION

// FUNCTION: 0x100c2060 size=0xa
#include "ConVar.h"
ConVar g_104a42e8("r_drawsprites", "1", 0);
// END FUNCTION

// FUNCTION: 0x100c20b0 size=0xa
#include "ConVar.h"
ConVar g_104a42a0("r_traceglowfast", "1", 0);
// END FUNCTION

// FUNCTION: 0x100c2100 size=0xa
#include "ConVar.h"
ConVar g_104a4408("r_traceglowbackoff", "16", 0);
// END FUNCTION

// FUNCTION: 0x100c2150 size=0xa
#include "ConVar.h"
ConVar g_104a4378("r_glowfadein", "0.2", 0);
// END FUNCTION

// FUNCTION: 0x100c21a0 size=0xa
#include "ConVar.h"
ConVar g_104a4258("r_glowfadeout", "0.1", 0);
// END FUNCTION

// FUNCTION: 0x100c3a00 size=0xa
#include "ConVar.h"
ConVar g_104a4898("phoneme_delay", "0", 128);
// END FUNCTION

// FUNCTION: 0x100c3a50 size=0xa
#include "ConVar.h"
ConVar g_104a4d28("flex_rules", "1", 128);
// END FUNCTION

// FUNCTION: 0x100c3aa0 size=0xa
#include "ConVar.h"
ConVar g_104a48f8("print_flex_weights", "0", 128);
// END FUNCTION

// FUNCTION: 0x100c3af0 size=0xa
#include "ConVar.h"
ConVar g_104a4450("print_flex_rules", "0", 128);
// END FUNCTION

// FUNCTION: 0x100c3b40 size=0xa
#include "ConVar.h"
ConVar g_104a4c98("phonemefilter_min", "0.0", 128);
// END FUNCTION

// FUNCTION: 0x100c3b90 size=0xa
#include "ConVar.h"
ConVar g_104a4ce0("phonemefilter_max", "0.0", 128);
// END FUNCTION

// FUNCTION: 0x100c76d0 size=0xa
#include "ConVar.h"
ConVar g_104a5210("flood_terminal", "0", 0);
// END FUNCTION

// FUNCTION: 0x100cb430 size=0xa
#include "ConVar.h"
ConVar g_104a5758("showparticlecounts", "0", 0, "Display number of particles drawn per frame");
// END FUNCTION

// FUNCTION: 0x100d12b0 size=0xa
#include "ConVar.h"
ConVar g_104cef00("cl_drawleaf", "-1", 0);
// END FUNCTION

// FUNCTION: 0x100d1300 size=0xa
#include "ConVar.h"
ConVar g_104cef48("r_PortalTestEnts", "1", 0, "Clip entities against portal frustums.");
// END FUNCTION

// FUNCTION: 0x100d5210 size=0xa
#include "ConVar.h"
ConVar g_104cf060("r_shadows", "1", 0);
// END FUNCTION

// FUNCTION: 0x100d5690 size=0xa
#include "ConCommand.h"
void sub_100d56c0(void);
ConCommand g_104cf0a4("r_shadowdir", sub_100d56c0, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x100d5760 size=0xa
#include "ConCommand.h"
void sub_100d5790(void);
ConCommand g_104cef98("r_shadowcolor", sub_100d5790, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x100d60a0 size=0xa
#include "ConVar.h"
ConVar g_104cf010("cl_softshadows", "1", 0);
// END FUNCTION

// FUNCTION: 0x100d7e70 size=0xa
#include "ConVar.h"
ConVar g_104cefc0("r_worldlights", "2", 0);
// END FUNCTION

// FUNCTION: 0x100dfd60 size=0xa
#include "ConVar.h"
ConVar g_104cf3e0("mat_fullbright", "0", 0);
// END FUNCTION

// FUNCTION: 0x100e29e0 size=0x5
#include "Vector.h"
Vector g_104cf544(0.0f, 0.0f, 0.0f);
// END FUNCTION

// FUNCTION: 0x100e6c40 size=0xa
#include "ConVar.h"
ConVar g_104cf7c8("footstep_pc_vol", "0.5", 8576, "PC Step sound volume");
// END FUNCTION

// FUNCTION: 0x100e6c90 size=0xa
#include "ConVar.h"
ConVar g_104cfc00("force_unstick", "0", 8192);
// END FUNCTION

// FUNCTION: 0x100ecaf0 size=0xa
#include "ConVar.h"
ConVar g_104cfbb8("fall_threshold", "200", 8192);
// END FUNCTION

// FUNCTION: 0x100eec20 size=0xa
#include "ConVar.h"
ConVar g_104cfd78("cl_ShowSunVectors", "0", 0);
// END FUNCTION

// FUNCTION: 0x100f0470 size=0xa
#include "ConVar.h"
ConVar g_104cfdf0("cl_hudenable", "1", 0, "Enable/disable the HUD drawing for profiling.");
// END FUNCTION

// FUNCTION: 0x100f04c0 size=0xa
#include "ConVar.h"
ConVar g_104cfeb8("hidehud", "0", 0);
// END FUNCTION

// FUNCTION: 0x100f1350 size=0xa
#include "ConVar.h"
ConVar g_104cff00("hud_saytext_time", "12", 0);
// END FUNCTION

// FUNCTION: 0x100f2810 size=0xa
#include "ConVar.h"
void sub_100f2850(ConVar *, const char *);
ConVar g_104d0f70("_fov", "0", 0, "Automates fov command to server.", sub_100f2850);
// END FUNCTION

// FUNCTION: 0x100f35f0 size=0xa
#include "ConVar.h"
ConVar g_104d0fb8("crosshair", "1", 128);
// END FUNCTION

// FUNCTION: 0x100fae20 size=0xa
#include "ConVar.h"
ConVar g_104d2700("cam_command", "0", 0);
// END FUNCTION

// FUNCTION: 0x100fae70 size=0xa
#include "ConVar.h"
ConVar g_104d17f8("cam_snapto", "0", 0);
// END FUNCTION

// FUNCTION: 0x100faec0 size=0xa
#include "ConVar.h"
ConVar g_104d1d08("cam_idealyaw", "0", 0);
// END FUNCTION

// FUNCTION: 0x100faf10 size=0xa
#include "ConVar.h"
ConVar g_104d2690("cam_idealpitch", "0", 0);
// END FUNCTION

// FUNCTION: 0x100faf60 size=0xa
#include "ConVar.h"
ConVar g_104d2058("cam_idealdist", "85", 0);
// END FUNCTION
