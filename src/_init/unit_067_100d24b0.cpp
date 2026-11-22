// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100d4790 size=0xa
#include "ConCommand.h"
void sub_100d4240(void);
void sub_100d47f0(void);
ConCommand g_106e7a40("vstats", sub_100d4240, "Lists or changes the local player's Vampire Stats\n\tArguments:\t{Buy | Sell} {stat_name} / no arguments lists all stats.", 0, sub_100d47f0);
// END FUNCTION

// FUNCTION: 0x100d4dc0 size=0xa
#include "ConCommand.h"
void sub_100d4b40(void);
ConCommand g_106e7e18("ent_vstats_spew", sub_100d4b40, "Lists the target Entity's Vampire Stats\n\tArguments:\t{Buy | Sell} {stat_name} / no arguments lists all stats.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d4f70 size=0xa
#include "ConCommand.h"
void sub_100d4e50(void);
ConCommand g_106e74f8("ent_vfeats_spew", sub_100d4e50, "Lists the target Entity's Vampire Feats\n", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d5120 size=0xa
#include "ConCommand.h"
void sub_100d5000(void);
ConCommand g_106e7138("barterend", sub_100d5000, "Ends bartering/looting", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d52d0 size=0xa
#include "ConCommand.h"
void sub_100d51b0(void);
ConCommand g_106e7708("blood", sub_100d51b0, "Sets the local player's blood pool", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d5480 size=0xa
#include "ConCommand.h"
void sub_100d5360(void);
ConCommand g_106e79f0("faith", sub_100d5360, "Sets the local player's faith points", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d5620 size=0xa
#include "ConCommand.h"
void sub_100d5510(void);
ConCommand g_106e7520("vfeats", sub_100d5510, "Lists the local player's Vampire Feat Values", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d57d0 size=0xa
#include "ConCommand.h"
void sub_100d56b0(void);
ConCommand g_106e7824("ent_vfeats", sub_100d56b0, "Lists the Entity's Vampire Feat Values", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d5890 size=0xa
#include "ConCommand.h"
void sub_100d5860(void);
ConCommand g_106e71d8("quest_refresh", sub_100d5860, "Refreshes client quest info", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d5990 size=0xa
#include "ConCommand.h"
void sub_100d5920(void);
ConCommand g_106e7dc8("quest_log_close", sub_100d5920, "Called upon quest log closure", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d5a50 size=0xa
#include "ConCommand.h"
void sub_100d5a20(void);
ConCommand g_106e7874("inven_list", sub_100d5a20, "Lists the local player's Inventory", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d5b50 size=0xa
#include "ConCommand.h"
void sub_100d5ae0(void);
ConCommand g_106e7188("ent_inven_list", sub_100d5ae0, "Lists the local player's Inventory", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d5c80 size=0xa
#include "ConCommand.h"
void sub_100d5be0(void);
ConCommand g_106e763c("inven_wield", sub_100d5be0, "Wields an item from the local player's Inventory\n\tArguments:\t{inven_slot #}", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d5da0 size=0xa
#include "ConCommand.h"
void sub_100d5d10(void);
ConCommand g_106e7690("inven_drop", sub_100d5d10, "Drops an item from the local player's Inventory\n\tArguments:\t{inven_slot #}", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d5e80 size=0xa
#include "ConCommand.h"
void sub_100d5e30(void);
ConCommand g_106e7950("inven_drop_curr", sub_100d5e30, "Drops the currently equipted weapon.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d6030 size=0xa
#include "ConCommand.h"
void sub_100d5f10(void);
ConCommand g_106e7bd4("inven_holster", sub_100d5f10, "holsters the currently equipted weapon.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d6180 size=0xa
#include "ConCommand.h"
void sub_100d60c0(void);
ConCommand g_106e71b0("force_sniper_third_person", sub_100d60c0, "called when the sniper rifle is forced into third person.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d6500 size=0xa
#include "ConCommand.h"
void sub_100d6210(void);
void sub_100d6560(void);
ConCommand g_106e7250("vclan", sub_100d6210, "Lists or changes the local player's Vampire Clan\n\tArguments:\t{clan #} / {clan_name} / no arguments lists the current clan.", 0, sub_100d6560);
// END FUNCTION

// FUNCTION: 0x100d6790 size=0xa
#include "ConCommand.h"
void sub_100d6680(void);
ConCommand g_106e7d28("vclans", sub_100d6680, "Lists the available Vampire Clans", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d68a0 size=0xa
#include "ConCommand.h"
void sub_100d6820(void);
ConCommand g_106e7a18("dialogpick", sub_100d6820, "Activates (picks) a dialog line.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d69c0 size=0xa
#include "ConCommand.h"
void sub_100d6930(void);
ConCommand g_106e754c("vtrait_effects", sub_100d6930, "Lists the available Vampire Trait Effects", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d6cb0 size=0xa
#include "ConCommand.h"
void sub_100d6a50(void);
ConCommand g_106e7200("vhistories", sub_100d6a50, "Lists the available Vampire Histories", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d6fb0 size=0xa
#include "ConCommand.h"
void sub_100d6d40(void);
ConCommand g_106e79c8("vhistory", sub_100d6d40, "Lists or changes the local player's Vampire History\n\tArguments:\t{history #} / {history_name} / no arguments lists the current history", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d7180 size=0xa
#include "ConCommand.h"
void sub_100d7040(void);
ConCommand g_106e73b8("vroll", sub_100d7040, "Processes a Vampire Dice Roll\n\tArguments:\t{trait_name}{difficulty #} / no arguments rolls based on last settings (default Close-Combat Brawl vs. difficulty 6)", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d72b0 size=0xa
#include "ConCommand.h"
void sub_100d7210(void);
ConCommand g_106e7978("sethotkeys", sub_100d7210, "Sets hotkeys, argsx10 {type}{data}", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d7370 size=0xa
#include "ConCommand.h"
void sub_100d7340(void);
ConCommand g_106e72c8("init_hotkeys", sub_100d7340, "Sets hotkeys to initial state.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d7490 size=0xa
#include "ConCommand.h"
void sub_100d7400(void);
ConCommand g_106e7b30("vreactionlist", sub_100d7400, "Lists the available Vampire Reactions", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d7550 size=0xa
#include "ConCommand.h"
void sub_100d7520(void);
ConCommand g_106e7bac("vreactions", sub_100d7520, "Lists all Vampire Reactions being applied to the local player.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d7610 size=0xa
#include "ConCommand.h"
void sub_100d75e0(void);
ConCommand g_106e7668("vtables", sub_100d75e0, "Lists the available Vampire Tables used internally by Stats", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d76d0 size=0xa
#include "ConCommand.h"
void sub_100d76a0(void);
ConCommand g_106e759c("vstrings", sub_100d76a0, "Lists the available Vampire Strings used internally by the Game System", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d79e0 size=0xa
#include "ConCommand.h"
void sub_100d7760(void);
ConCommand g_106e7a90("viteminfo", sub_100d7760, "Lists the available Vampire Item Information", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d7aa0 size=0xa
#include "ConCommand.h"
void sub_100d7a70(void);
ConCommand g_106e7228("vitems", sub_100d7a70, "Lists the available Vampire Items", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d7ba0 size=0xa
#include "ConCommand.h"
void sub_100d7b30(void);
void sub_100d2c30(void);
ConCommand g_106e78d4("vitem", sub_100d7b30, "Lists descriptive info for a Vampire Item, accepts partial name matches", 0, sub_100d2c30);
// END FUNCTION

// FUNCTION: 0x100d7d70 size=0xa
#include "ConCommand.h"
void sub_100d7c40(void);
ConCommand g_106e72a0("vmpequip", sub_100d7c40, "Sets the starting equipment for a player in a multiplayer game.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d7e90 size=0xa
#include "ConCommand.h"
void sub_100d7e00(void);
ConCommand g_106e73e0("vbotchtypes", sub_100d7e00, "Lists the available Vampire Botch Types", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d7fb0 size=0xa
#include "ConCommand.h"
void sub_100d7f20(void);
ConCommand g_106e789c("vbotchtables", sub_100d7f20, "Lists the available Vampire Botch Tables", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d8090 size=0xa
#include "ConCommand.h"
void sub_100d8040(void);
ConCommand g_106e7df0("vstatinfo", sub_100d8040, "Lists the available Vampire System Stats & their sub-values", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d8190 size=0xa
#include "ConCommand.h"
void sub_100d8120(void);
ConCommand g_106e7368("vplayername", sub_100d8120, "Sets the player name", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d8400 size=0xa
#include "ConCommand.h"
void sub_100d8220(void);
ConCommand g_106e7278("vhotkey_int", sub_100d8220, "Activates a given hotkey\n\tArguments:\t{hotkey #}", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d87a0 size=0xa
#include "ConCommand.h"
void sub_100d8490(void);
ConCommand g_106e7a68("vdiscipline_int", sub_100d8490, "Activates a given Vampire Discipline or Kine Numina one level\n\tArguments:\t{trait_name}{difficulty #} / no arguments utilizes the last-activated discipline (defaults to the highest one available to the player)", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d9790 size=0xa
#include "ConCommand.h"
void sub_100d9750(void);
ConCommand g_106e79a0("vdiscipline_last", sub_100d9750, "Activates the last activated Vampire Discipline or Kine Numina one level\n\tArguments:\t{trait_name}{difficulty #} / no arguments utilizes the last-activated discipline", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d9950 size=0xa
#include "ConCommand.h"
void sub_100d9820(void);
ConCommand g_106e7574("vlastdiscipline_next", sub_100d9820, "Cycles to the next lastDiscipline", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d9af0 size=0xa
#include "ConCommand.h"
void sub_100d99e0(void);
ConCommand g_106e77ac("vlastdiscipline_prev", sub_100d99e0, "Cycles to the previous lastDiscipline", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d9bf0 size=0xa
#include "ConCommand.h"
void sub_100d9b80(void);
void sub_100d9c50(void);
ConCommand g_106e7924("vdiscipline_info", sub_100d9b80, "Lists information about the targeted disciplines.", 0, sub_100d9c50);
// END FUNCTION

// FUNCTION: 0x100d9d80 size=0xa
#include "ConCommand.h"
void sub_100d9d60(void);
ConCommand g_106e7730("vquotes", sub_100d9d60, "Lists quotes made by the development team during development\n\tArguments:\t{speaker name} / no arguments lists all quotes", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d9e30 size=0xa
#include "ConCommand.h"
void sub_100d9e10(void);
ConCommand g_106e7614("jump", sub_100d9e10, "Sets the jumping feat to given value by setting underlying stats.\n\tArguments:\t{value} / no arguments lists current feat value", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d9fb0 size=0xa
#include "ConCommand.h"
void sub_100d9ec0(void);
ConCommand g_106e7b58("vdmg", sub_100d9ec0, "Applies amount of damage to player.\n\tArguments:\t{dmg value}", 0, 0);
// END FUNCTION

// FUNCTION: 0x100da1a0 size=0xa
#include "ConCommand.h"
void sub_100da040(void);
ConCommand g_106e7da0("vgender_int", sub_100da040, "Changes the gender of a player.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100dab90 size=0xa
#include "ConCommand.h"
void sub_100da230(void);
ConCommand g_106e72f0("vbarter", sub_100da230, "Bartering", 0, 0);
// END FUNCTION

// FUNCTION: 0x100dacc0 size=0xa
#include "ConCommand.h"
void sub_100dac20(void);
ConCommand g_106e7340("hackcmd", sub_100dac20, "Command to current hacking console", 0, 0);
// END FUNCTION

// FUNCTION: 0x100dae30 size=0xa
#include "ConCommand.h"
void sub_100dad50(void);
ConCommand g_106e7d78("powerupability", sub_100dad50, "PoweringUp", 0, 0);
// END FUNCTION

// FUNCTION: 0x100daf10 size=0xa
#include "ConCommand.h"
void sub_100daec0(void);
ConCommand g_106e7b84("vsetmove", sub_100daec0, "Lock/Unlock player movement", 0, 0);
// END FUNCTION

// FUNCTION: 0x100db020 size=0xa
#include "ConCommand.h"
void sub_100dafa0(void);
ConCommand g_106e7d00("vsndinfo", sub_100dafa0, "Describes Sound Table Information", 0, 0);
// END FUNCTION

// FUNCTION: 0x100db1c0 size=0xa
#include "ConCommand.h"
void sub_100db0b0(void);
ConCommand g_106e77d4("vdebug_dumpanimseqlist", sub_100db0b0, "Dumps the animation sequence list for an entity's model", 0, 0);
// END FUNCTION

// FUNCTION: 0x100db290 size=0xa
#include "ConCommand.h"
void sub_100db250(void);
ConCommand g_106e7784("vdiscipline_endall", sub_100db250, "Turns off all active disciplines on the player.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100db360 size=0xa
#include "ConCommand.h"
void sub_100db320(void);
ConCommand g_106e7160("debug_stealth_toggle", sub_100db320, "Turns off all active disciplines on the player.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100db410 size=0xa
#include "ConCommand.h"
void sub_100db3f0(void);
ConCommand g_106e784c("vskip_intro", sub_100db3f0, "Skips the Intro Scene", 0, 0);
// END FUNCTION

// FUNCTION: 0x100db530 size=0xa
#include "ConCommand.h"
void sub_100db4a0(void);
ConCommand g_106e75c4("vhelp", sub_100db4a0, "Lists the available Vampire System console commands", 0, 0);
// END FUNCTION

// FUNCTION: 0x100db630 size=0xa
#include "ConCommand.h"
void sub_100db5c0(void);
ConCommand g_106e7408("unlockpcangles", sub_100db5c0, "unlock a player's angles after a grapple", 0, 0);
// END FUNCTION

// FUNCTION: 0x100db710 size=0xa
#include "ConCommand.h"
void sub_100db6c0(void);
ConCommand g_106e74a8("burnpeel", sub_100db6c0, "burn effect on the player", 0, 0);
// END FUNCTION

// FUNCTION: 0x100db890 size=0xa
#include "ConCommand.h"
void sub_100db7a0(void);
ConCommand g_106e7758("player_stopuse", sub_100db7a0, "kicks the player out from what they are using", 0, 0);
// END FUNCTION
