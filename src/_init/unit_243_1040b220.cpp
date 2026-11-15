// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1040b220 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_1094a930(&CPrecacheRegister::PrecacheFn_Other, "item_i_written");
// END FUNCTION

// FUNCTION: 0x1040b580 size=0xa
#include "ConVar.h"
ConVar g_1094aac0("g_debug_physcannon", "0", 0);
// END FUNCTION

// FUNCTION: 0x1040b610 size=0xa
#include "ConVar.h"
ConVar g_1094aa18("physcannon_minforce", "700", 0);
// END FUNCTION

// FUNCTION: 0x1040b6a0 size=0xa
#include "ConVar.h"
ConVar g_1094a9d0("physcannon_maxforce", "1500", 0);
// END FUNCTION

// FUNCTION: 0x1040b730 size=0xa
#include "ConVar.h"
ConVar g_1094acc8("physcannon_maxmass", "250", 0);
// END FUNCTION

// FUNCTION: 0x1040b7c0 size=0xa
#include "ConVar.h"
ConVar g_1094ad10("physcannon_tracelength", "80", 0);
// END FUNCTION

// FUNCTION: 0x1040b850 size=0xa
#include "ConVar.h"
ConVar g_1094ac38("physcannon_mega_tracelength", "750", 0);
// END FUNCTION

// FUNCTION: 0x1040b8e0 size=0xa
#include "ConVar.h"
ConVar g_1094ab58("physcannon_chargetime", "2", 0);
// END FUNCTION

// FUNCTION: 0x1040b970 size=0xa
#include "ConVar.h"
ConVar g_1094ad60("physcannon_pullforce", "4000", 0);
// END FUNCTION

// FUNCTION: 0x1040ba00 size=0xa
#include "ConVar.h"
ConVar g_1094abf0("physcannon_mega_pullforce", "8000", 0);
// END FUNCTION

// FUNCTION: 0x1040ba90 size=0xa
#include "ConVar.h"
ConVar g_1094a988("physcannon_cone", "0.97", 0);
// END FUNCTION

// FUNCTION: 0x1040bb20 size=0xa
#include "ConVar.h"
ConVar g_1094ac80("physcannon_ball_cone", "0.997", 0);
// END FUNCTION

// FUNCTION: 0x1040bbb0 size=0xa
#include "ConVar.h"
ConVar g_1094aa78("physcannon_lob_maxweight", "5", 0);
// END FUNCTION

// FUNCTION: 0x1040bc40 size=0xa
#include "ConVar.h"
ConVar g_1094ab10("physcannon_lob_maxforce", "650", 0);
// END FUNCTION

// FUNCTION: 0x1040bcd0 size=0xa
#include "ConVar.h"
ConVar g_1094a940("physcannon_launch_multiplier", ".01", 0);
// END FUNCTION

// FUNCTION: 0x1040bd60 size=0xa
#include "ConVar.h"
ConVar g_1094aba8("player_throwforce", "1000", 0);
// END FUNCTION

// FUNCTION: 0x1040bdf0 size=0x5
int sub_1040be30(void);
int g_1094ab08 = ((int (*)(int))sub_1040be30)(0);
// END FUNCTION

// FUNCTION: 0x1040be60 size=0x5
int sub_1040bea0(void);
int g_1094ab04 = ((int (*)(int))sub_1040bea0)(0);
// END FUNCTION

// FUNCTION: 0x1040ceb0 size=0x5
int * sub_1040cef0(void);
int * g_1094ad0c = ((int * (*)(int))sub_1040cef0)(0);
// END FUNCTION

// FUNCTION: 0x1040d520 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_1094aea8;
extern char g_10683a68[];
ServerClassReg g_1094aa5c("CWeaponPhysCannon", &g_1094aea8, g_10683a68);
// END FUNCTION

// FUNCTION: 0x1040d5d0 size=0xa
#include "SendTable.h"
SendTable g_1094aea8;
// END FUNCTION

// FUNCTION: 0x1040d650 size=0x5
int sub_1040d690(void);
int g_1094aea4 = ((int (*)(int))sub_1040d690)(0);
// END FUNCTION

// FUNCTION: 0x1040d800 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_1094ad54(&CPrecacheRegister::PrecacheFn_Other, "weapon_physcannon");
// END FUNCTION
