// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e3ff0 size=0x5
#include "Vector.h"
Vector g_10942370(-16.0f, -16.0f, -16.0f);
// END FUNCTION

// FUNCTION: 0x103e4040 size=0x5
#include "Vector.h"
Vector g_10940db0(16.0f, 16.0f, 16.0f);
// END FUNCTION

// FUNCTION: 0x103e4090 size=0xa
#include "ConVar.h"
ConVar g_10940d68("debug_melee_frenzy_speed_scale", "1.25", 0);
// END FUNCTION

// FUNCTION: 0x103e4120 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10941664;
extern char g_10666898[];
ServerClassReg g_10941d04("CWeaponMelee_BaseballBat", &g_10941664, g_10666898);
// END FUNCTION

// FUNCTION: 0x103e41d0 size=0xa
#include "SendTable.h"
SendTable g_10941664;
// END FUNCTION

// FUNCTION: 0x103e4250 size=0x5
int sub_103e4290(void);
int g_10941660 = ((int (*)(int))sub_103e4290)(0);
// END FUNCTION

// FUNCTION: 0x103e4480 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_109424f0(&CPrecacheRegister::PrecacheFn_Other, "item_w_baseball_bat");
// END FUNCTION

// FUNCTION: 0x103e44d0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10940dc4;
extern char g_10667844[];
ServerClassReg g_109424fc("CWeaponMelee_BushHook", &g_10940dc4, g_10667844);
// END FUNCTION

// FUNCTION: 0x103e4580 size=0xa
#include "SendTable.h"
SendTable g_10940dc4;
// END FUNCTION

// FUNCTION: 0x103e4600 size=0x5
int sub_103e4640(void);
int g_10940dc0 = ((int (*)(int))sub_103e4640)(0);
// END FUNCTION

// FUNCTION: 0x103e47f0 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_10940d58(&CPrecacheRegister::PrecacheFn_Other, "item_w_bush_hook");
// END FUNCTION

// FUNCTION: 0x103e4840 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10941f04;
extern char g_106687f4[];
ServerClassReg g_109421e8("CWeaponMelee_Claws", &g_10941f04, g_106687f4);
// END FUNCTION

// FUNCTION: 0x103e48f0 size=0xa
#include "SendTable.h"
SendTable g_10941f04;
// END FUNCTION

// FUNCTION: 0x103e4970 size=0x5
int sub_103e49b0(void);
int g_10941f00 = ((int (*)(int))sub_103e49b0)(0);
// END FUNCTION

// FUNCTION: 0x103e4b50 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_10941fe0(&CPrecacheRegister::PrecacheFn_Other, "item_w_claws");
// END FUNCTION

// FUNCTION: 0x103e4ba0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10941ecc;
extern char g_10669288[];
ServerClassReg g_109417e8("CWeaponMelee_Claws_Ghoul", &g_10941ecc, g_10669288);
// END FUNCTION

// FUNCTION: 0x103e4c50 size=0xa
#include "SendTable.h"
SendTable g_10941ecc;
// END FUNCTION

// FUNCTION: 0x103e4cd0 size=0x5
int sub_103e4d10(void);
int g_10941ec8 = ((int (*)(int))sub_103e4d10)(0);
// END FUNCTION

// FUNCTION: 0x103e4eb0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10940e28;
extern char g_10669d18[];
ServerClassReg g_10942560("CWeaponMelee_Claws_Protean4", &g_10940e28, g_10669d18);
// END FUNCTION

// FUNCTION: 0x103e4f60 size=0xa
#include "SendTable.h"
SendTable g_10940e28;
// END FUNCTION

// FUNCTION: 0x103e4fe0 size=0x5
int sub_103e5020(void);
int g_10940e24 = ((int (*)(int))sub_103e5020)(0);
// END FUNCTION

// FUNCTION: 0x103e51c0 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_10940f88(&CPrecacheRegister::PrecacheFn_Other, "item_w_claws_protean4");
// END FUNCTION

// FUNCTION: 0x103e5210 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10940e08;
extern char g_1066a7a8[];
ServerClassReg g_10940fc8("CWeaponMelee_Claws_Protean5", &g_10940e08, g_1066a7a8);
// END FUNCTION

// FUNCTION: 0x103e52c0 size=0xa
#include "SendTable.h"
SendTable g_10940e08;
// END FUNCTION

// FUNCTION: 0x103e5340 size=0x5
int sub_103e5380(void);
int g_10940e04 = ((int (*)(int))sub_103e5380)(0);
// END FUNCTION

// FUNCTION: 0x103e5520 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_10940f7c(&CPrecacheRegister::PrecacheFn_Other, "item_w_claws_protean5");
// END FUNCTION

// FUNCTION: 0x103e5570 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_109414f0;
extern char g_1066b238[];
ServerClassReg g_10941f20("CWeaponMelee_Fists", &g_109414f0, g_1066b238);
// END FUNCTION

// FUNCTION: 0x103e5620 size=0xa
#include "SendTable.h"
SendTable g_109414f0;
// END FUNCTION

// FUNCTION: 0x103e56a0 size=0x5
int sub_103e56e0(void);
int g_109414ec = ((int (*)(int))sub_103e56e0)(0);
// END FUNCTION

// FUNCTION: 0x103e58b0 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_1094246c(&CPrecacheRegister::PrecacheFn_Other, "item_w_fists");
// END FUNCTION

// FUNCTION: 0x103e5900 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_109425b0;
extern char g_1066bcd4[];
ServerClassReg g_10941ee8("CWeaponMelee_ZombieFists", &g_109425b0, g_1066bcd4);
// END FUNCTION

// FUNCTION: 0x103e59b0 size=0xa
#include "SendTable.h"
SendTable g_109425b0;
// END FUNCTION

// FUNCTION: 0x103e5a30 size=0x5
int sub_103e5a70(void);
int g_109425ac = ((int (*)(int))sub_103e5a70)(0);
// END FUNCTION

// FUNCTION: 0x103e5c40 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10941870;
extern char g_1066c774[];
ServerClassReg g_10941834("CWeaponMelee_FireAxe", &g_10941870, g_1066c774);
// END FUNCTION

// FUNCTION: 0x103e5cf0 size=0xa
#include "SendTable.h"
SendTable g_10941870;
// END FUNCTION

// FUNCTION: 0x103e5d70 size=0x5
int sub_103e5db0(void);
int g_1094186c = ((int (*)(int))sub_103e5db0)(0);
// END FUNCTION

// FUNCTION: 0x103e6000 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_1094242c(&CPrecacheRegister::PrecacheFn_Other, "item_w_fireaxe");
// END FUNCTION

// FUNCTION: 0x103e6050 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_109424d4;
extern char g_1066d724[];
ServerClassReg g_10941b0c("CWeaponMelee_Katana", &g_109424d4, g_1066d724);
// END FUNCTION

// FUNCTION: 0x103e6100 size=0xa
#include "SendTable.h"
SendTable g_109424d4;
// END FUNCTION

// FUNCTION: 0x103e6180 size=0x5
int sub_103e61c0(void);
int g_109424d0 = ((int (*)(int))sub_103e61c0)(0);
// END FUNCTION

// FUNCTION: 0x103e6340 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_10940fa4(&CPrecacheRegister::PrecacheFn_Other, "item_w_katana");
// END FUNCTION

// FUNCTION: 0x103e6390 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10942524;
extern char g_1066e6d4[];
ServerClassReg g_10941804("CWeaponMelee_Knife", &g_10942524, g_1066e6d4);
// END FUNCTION

// FUNCTION: 0x103e6440 size=0xa
#include "SendTable.h"
SendTable g_10942524;
// END FUNCTION

// FUNCTION: 0x103e64c0 size=0x5
int sub_103e6500(void);
int g_10942520 = ((int (*)(int))sub_103e6500)(0);
// END FUNCTION

// FUNCTION: 0x103e66a0 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_10941a50(&CPrecacheRegister::PrecacheFn_Other, "item_w_knife");
// END FUNCTION

// FUNCTION: 0x103e66f0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_109418cc;
extern char g_1066f150[];
ServerClassReg g_109418b0("CWeaponMelee_OccultBlade", &g_109418cc, g_1066f150);
// END FUNCTION

// FUNCTION: 0x103e67a0 size=0xa
#include "SendTable.h"
SendTable g_109418cc;
// END FUNCTION

// FUNCTION: 0x103e6820 size=0x5
int sub_103e6860(void);
int g_109418c8 = ((int (*)(int))sub_103e6860)(0);
// END FUNCTION

// FUNCTION: 0x103e69e0 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_109418a4(&CPrecacheRegister::PrecacheFn_Other, "item_w_occultblade");
// END FUNCTION

// FUNCTION: 0x103e6a30 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10941e8c;
extern char g_106700fc[];
ServerClassReg g_10940d20("CWeaponMelee_Sheriff_Sword", &g_10941e8c, g_106700fc);
// END FUNCTION

// FUNCTION: 0x103e6ae0 size=0xa
#include "SendTable.h"
SendTable g_10941e8c;
// END FUNCTION

// FUNCTION: 0x103e6b60 size=0x5
int sub_103e6ba0(void);
int g_10941e88 = ((int (*)(int))sub_103e6ba0)(0);
// END FUNCTION

// FUNCTION: 0x103e6d20 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10941c3c;
extern char g_10670644[];
ServerClassReg g_109424b4("CWeaponMelee_Sledgehammer", &g_10941c3c, g_10670644);
// END FUNCTION

// FUNCTION: 0x103e6dd0 size=0xa
#include "SendTable.h"
SendTable g_10941c3c;
// END FUNCTION

// FUNCTION: 0x103e6e50 size=0x5
int sub_103e6e90(void);
int g_10941c38 = ((int (*)(int))sub_103e6e90)(0);
// END FUNCTION

// FUNCTION: 0x103e7040 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_10941c14(&CPrecacheRegister::PrecacheFn_Other, "item_w_sledgehammer");
// END FUNCTION

// FUNCTION: 0x103e7090 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10941224;
extern char g_106715f4[];
ServerClassReg g_10942594("CWeaponMelee_Torch", &g_10941224, g_106715f4);
// END FUNCTION

// FUNCTION: 0x103e7140 size=0xa
#include "SendTable.h"
SendTable g_10941224;
// END FUNCTION

// FUNCTION: 0x103e71c0 size=0x5
int sub_103e7200(void);
int g_10941220 = ((int (*)(int))sub_103e7200)(0);
// END FUNCTION

// FUNCTION: 0x103e73c0 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_10942514(&CPrecacheRegister::PrecacheFn_Other, "item_w_torch");
// END FUNCTION

// FUNCTION: 0x103e7430 size=0x5
int sub_103e7470(void);
int g_10940de0 = ((int (*)(int))sub_103e7470)(0);
// END FUNCTION

// FUNCTION: 0x103e79a0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10940d00;
extern char g_1067210c[];
ServerClassReg g_10942438("CWeaponMelee_SeveredArm", &g_10940d00, g_1067210c);
// END FUNCTION

// FUNCTION: 0x103e7a50 size=0xa
#include "SendTable.h"
SendTable g_10940d00;
// END FUNCTION

// FUNCTION: 0x103e7ad0 size=0x5
int sub_103e7b10(void);
int g_10940cfc = ((int (*)(int))sub_103e7b10)(0);
// END FUNCTION

// FUNCTION: 0x103e7cc0 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_10942478(&CPrecacheRegister::PrecacheFn_Other, "item_w_severed_arm");
// END FUNCTION

// FUNCTION: 0x103e7d10 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10940d3c;
extern char g_106730bc[];
ServerClassReg g_10940f24("CWeaponMelee_TireIron", &g_10940d3c, g_106730bc);
// END FUNCTION

// FUNCTION: 0x103e7dc0 size=0xa
#include "SendTable.h"
SendTable g_10940d3c;
// END FUNCTION

// FUNCTION: 0x103e7e40 size=0x5
int sub_103e7e80(void);
int g_10940d38 = ((int (*)(int))sub_103e7e80)(0);
// END FUNCTION

// FUNCTION: 0x103e8050 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_10940f94(&CPrecacheRegister::PrecacheFn_Other, "item_w_tire_iron");
// END FUNCTION

// FUNCTION: 0x103e80a0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10942544;
extern char g_10673b38[];
ServerClassReg g_10940f08("CWeaponMelee_Baton", &g_10942544, g_10673b38);
// END FUNCTION

// FUNCTION: 0x103e8150 size=0xa
#include "SendTable.h"
SendTable g_10942544;
// END FUNCTION

// FUNCTION: 0x103e81d0 size=0x5
int sub_103e8210(void);
int g_10942540 = ((int (*)(int))sub_103e8210)(0);
// END FUNCTION

// FUNCTION: 0x103e83b0 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_109418f4(&CPrecacheRegister::PrecacheFn_Other, "item_w_baton");
// END FUNCTION

// FUNCTION: 0x103e8400 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10941eac;
extern char g_106745b0[];
ServerClassReg g_10941c20("CWeaponMelee_WerewolfAttacks", &g_10941eac, g_106745b0);
// END FUNCTION

// FUNCTION: 0x103e84b0 size=0xa
#include "SendTable.h"
SendTable g_10941eac;
// END FUNCTION

// FUNCTION: 0x103e8530 size=0x5
int sub_103e8570(void);
int g_10941ea8 = ((int (*)(int))sub_103e8570)(0);
// END FUNCTION

// FUNCTION: 0x103e8740 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10941304;
extern char g_10674b0c[];
ServerClassReg g_10941680("CWeaponMelee_TzimisceMelee", &g_10941304, g_10674b0c);
// END FUNCTION

// FUNCTION: 0x103e87f0 size=0xa
#include "SendTable.h"
SendTable g_10941304;
// END FUNCTION

// FUNCTION: 0x103e8870 size=0x5
int sub_103e88b0(void);
int g_10941300 = ((int (*)(int))sub_103e88b0)(0);
// END FUNCTION

// FUNCTION: 0x103e8dc0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10940f60;
extern char g_10674b40[];
ServerClassReg g_1094181c("CWeaponMelee_SabbatLeaderAttack", &g_10940f60, g_10674b40);
// END FUNCTION

// FUNCTION: 0x103e8e70 size=0xa
#include "SendTable.h"
SendTable g_10940f60;
// END FUNCTION

// FUNCTION: 0x103e8ef0 size=0x5
int sub_103e8f30(void);
int g_10940f5c = ((int (*)(int))sub_103e8f30)(0);
// END FUNCTION

// FUNCTION: 0x103e9100 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10941b28;
extern char g_10674b80[];
ServerClassReg g_109412e8("CWeaponMelee_ChangClaw", &g_10941b28, g_10674b80);
// END FUNCTION

// FUNCTION: 0x103e91b0 size=0xa
#include "SendTable.h"
SendTable g_10941b28;
// END FUNCTION

// FUNCTION: 0x103e9230 size=0x5
int sub_103e9270(void);
int g_10941b24 = ((int (*)(int))sub_103e9270)(0);
// END FUNCTION

// FUNCTION: 0x103e9440 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10941138;
extern char g_10675b2c[];
ServerClassReg g_10940fb0("CWeaponMelee_ChangBlade", &g_10941138, g_10675b2c);
// END FUNCTION

// FUNCTION: 0x103e94f0 size=0xa
#include "SendTable.h"
SendTable g_10941138;
// END FUNCTION

// FUNCTION: 0x103e9570 size=0x5
int sub_103e95b0(void);
int g_10941134 = ((int (*)(int))sub_103e95b0)(0);
// END FUNCTION

// FUNCTION: 0x103e9780 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10941850;
extern char g_10677010[];
ServerClassReg g_10942578("CWeaponMelee_AVampBlade", &g_10941850, g_10677010);
// END FUNCTION

// FUNCTION: 0x103e9830 size=0xa
#include "SendTable.h"
SendTable g_10941850;
// END FUNCTION

// FUNCTION: 0x103e98b0 size=0x5
int sub_103e98f0(void);
int g_1094184c = ((int (*)(int))sub_103e98f0)(0);
// END FUNCTION

// FUNCTION: 0x103eaf40 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10941b4c;
extern char g_10677fbc[];
ServerClassReg g_10942484("CWeaponMelee_GargoyleFist", &g_10941b4c, g_10677fbc);
// END FUNCTION

// FUNCTION: 0x103eaff0 size=0xa
#include "SendTable.h"
SendTable g_10941b4c;
// END FUNCTION

// FUNCTION: 0x103eb070 size=0x5
int sub_103eb0b0(void);
int g_10941b48 = ((int (*)(int))sub_103eb0b0)(0);
// END FUNCTION

// FUNCTION: 0x103eb250 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10942680;
extern char g_10677ff0[];
ServerClassReg g_1094188c("CWeaponMelee_Tzimisce2Claw", &g_10942680, g_10677ff0);
// END FUNCTION

// FUNCTION: 0x103eb300 size=0xa
#include "SendTable.h"
SendTable g_10942680;
// END FUNCTION

// FUNCTION: 0x103eb380 size=0x5
int sub_103eb3c0(void);
int g_1094267c = ((int (*)(int))sub_103eb3c0)(0);
// END FUNCTION

// FUNCTION: 0x103eb590 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10940f40;
extern char g_10678030[];
ServerClassReg g_10940e44("CWeaponMelee_Tzimisce3Claw", &g_10940f40, g_10678030);
// END FUNCTION

// FUNCTION: 0x103eb640 size=0xa
#include "SendTable.h"
SendTable g_10940f40;
// END FUNCTION

// FUNCTION: 0x103eb6c0 size=0x5
int sub_103eb700(void);
int g_10940f3c = ((int (*)(int))sub_103eb700)(0);
// END FUNCTION

// FUNCTION: 0x103eb950 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_109418e8(&CPrecacheRegister::PrecacheFn_Other, "item_w_tzimisce3_claw");
// END FUNCTION

// FUNCTION: 0x103eb9a0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10941324;
extern char g_10678070[];
ServerClassReg g_10940c38("CWeaponMelee_HengeyokaiFist", &g_10941324, g_10678070);
// END FUNCTION

// FUNCTION: 0x103eba50 size=0xa
#include "SendTable.h"
SendTable g_10941324;
// END FUNCTION

// FUNCTION: 0x103ebad0 size=0x5
int sub_103ebb10(void);
int g_10941320 = ((int (*)(int))sub_103ebb10)(0);
// END FUNCTION

// FUNCTION: 0x103ebcb0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10940de8;
extern char g_106780a4[];
ServerClassReg g_10942454("CWeaponMelee_ManBatClaw", &g_10940de8, g_106780a4);
// END FUNCTION

// FUNCTION: 0x103ebd60 size=0xa
#include "SendTable.h"
SendTable g_10940de8;
// END FUNCTION

// FUNCTION: 0x103ebde0 size=0x5
int sub_103ebe20(void);
int g_10940de4 = ((int (*)(int))sub_103ebe20)(0);
// END FUNCTION

// FUNCTION: 0x103ebfc0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_109422ac;
extern char g_106780d8[];
ServerClassReg g_10941e70("CWeaponMelee_MingXiaoMelee", &g_109422ac, g_106780d8);
// END FUNCTION

// FUNCTION: 0x103ec070 size=0xa
#include "SendTable.h"
SendTable g_109422ac;
// END FUNCTION

// FUNCTION: 0x103ec0f0 size=0x5
int sub_103ec130(void);
int g_109422a8 = ((int (*)(int))sub_103ec130)(0);
// END FUNCTION

// FUNCTION: 0x103ec580 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10941158;
extern char g_1067810c[];
ServerClassReg g_1094249c("CWeaponMelee_MingXiaoTentacle", &g_10941158, g_1067810c);
// END FUNCTION

// FUNCTION: 0x103ec630 size=0xa
#include "SendTable.h"
SendTable g_10941158;
// END FUNCTION

// FUNCTION: 0x103ec6b0 size=0x5
int sub_103ec6f0(void);
int g_10941154 = ((int (*)(int))sub_103ec6f0)(0);
// END FUNCTION
