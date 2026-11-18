// Written by `pcdecomp bss`; do not edit it by hand, rerun the command instead.
// 1076 items, 2558029 bytes, in 0x106b9000-0x109f2a78.
// Each typed definition uses a name our objects use; neutral storage (`char g_<addr>[n]`) carries the names our objects use as aliases.

class CAI_BaseNPC;
class CAI_DynamicLink;
class CAI_Hint;
class CAI_InterestingPlace;
class CAI_Network;
class CBaseEntity;
class CDevFlagObj;
class CEntryX;
class CEntryY;
class CMakerGlob;
class CMeasureSection;
class CNPC_VTzimisceConVar;
class CObj1093cf4c;
class CSkyCamera;
class CSoundEnt;
class CSoundStateView;
class CUnknown10074f70_Global;
class CUnknown10206400;
class CUnknown102db470Node;
class CUnknown103e1680;
class CUnknown1070ada4;
class CUnknown1070b254;
class CUnknown107250d4;
class CUnknown10738964;
class CUnknown109241ac;
class CUnknown10924a1c;
class CUnknown10924cdc;
class CUnknown10936de4;
class CUnknown1093bb5c;
class CUnknown10940524;
class CVFeat_t;
class CWorld;
class CWorldEvents;
class ConVar;
class IFileSystemView;
class IPhysicsEnvironment;
class IPredictionSystem;
class InterfaceReg;
class Vector;
namespace EngineGlobals { class IEngineSound; }
namespace EngineGlobals { class IUniformRandomStream; }
namespace EngineGlobals { class IVEngineServer; }
namespace EngineGlobals { struct CGlobalVars; }
struct AINameNode;
struct AITaskTimings817;
struct ActName;
struct ActivityList;
struct AutoSys;
struct CAIDebugSink;
struct CAI_NamedThing;
struct CAI_NetworkOwner;
struct CAI_NodeV102337d0;
struct CAllocatorLike;
struct CAnimConVar;
struct CBodyQueView;
struct CBullseyeGlobals;
struct CChangBrosConVar;
struct CConCmdView;
struct CConVar109202cc;
struct CConVarF;
struct CConVarLike;
struct CConVarView10725cec;
struct CConVarViewAe34;
struct CCopTimerView;
struct CCorpseGlobal;
struct CCrowTimeView;
struct CDbgDoorAI;
struct CDbgStats;
struct CDebugConVarView;
struct CDebugCvar;
struct CDebugGate;
struct CDebugLog100e8980;
struct CDepConVarView;
struct CDevConVar;
struct CDevCvarView;
struct CDevFlagA;
struct CDevFlagB;
struct CDevFlagObjView;
struct CDevFlagView;
struct CDevInfo;
struct CDevMsgLevel;
struct CDevObj;
struct CDialogDebugVar;
struct CDialogGate;
struct CDialogHost106e861c;
struct CEdictView376;
struct CEnt5f44;
struct CEntA;
struct CEntB;
struct CEntListQ;
struct CFireConVar;
struct CFireScaleVar;
struct CGameChecker;
struct CGameRulesBlood;
struct CGameRulesView;
struct CGameSys1093a594;
struct CGameTimeScale;
struct CGargScale;
struct CGlob10936e54;
struct CGlobal1017dd80;
struct CGlobal1093d694;
struct CGlobal1094accc;
struct CHengScale;
struct CJumpSv28;
struct CJumpSv2c;
struct CKeypadNameRecord;
struct CMeleeGlobal;
struct CMeleeHook;
struct CMeleeRange;
struct CModelInfoBeam;
struct CMoveConVar;
struct CMoveProbeUnk10933e8c;
struct CMoveTuneView;
struct CNTConVar;
struct CNodeV3;
struct CNpcInitConVar;
struct CPartitionObj;
struct CPlayerConVarView;
struct CQueueOwner;
struct CRandomSpawnFactory;
struct CRateGlobal107083dc;
struct CRelVis;
struct CRules1072c72c;
struct CSabbatGlobal;
struct CSoundDebugVar;
struct CStepVar1011e940;
struct CTimer;
struct CTouchNotifier;
struct CTriggerBrushConVar;
struct CTroikaConVarView;
struct CTroikaGameState;
struct CTuning1093bb14;
struct CTuningConVar;
struct CUnk10071840Cvar;
struct CUnk1042d5a0;
struct CUnk10725de4;
struct CUnk10725fbc;
struct CUnk10752ddc;
struct CUnk109245e4;
struct CUnk1093b9b4;
struct CUnk1093c34c;
struct CUnkMgr;
struct CUnknown101e0f00Entry;
struct CUnknown10725e74;
struct CUnknown10750f2c;
struct CUnknown10751604;
struct CUnknownObj1024a1e0;
struct CVFeatKV;
struct CVH375Obj;
struct CVH461Obj;
struct CVarV;
struct CVoiceServer1070b230;
struct CWRTimeView;
struct CWWDevView2;
struct CWWDevView;
struct CWerewolfCfgView;
struct CWerewolfGate;
struct CWerewolfModeObj;
struct CWerewolfModeSrc;
struct CWorldCvarSystem;
struct CZombieGlobal;
struct ColHash;
struct ConVarA;
struct ConVarLike;
struct ConVarV;
struct ConVarView9d4;
struct DataObjL;
struct DebugCvarMB;
struct DeveloperVar;
struct EHandleRef;
struct GGVar;
struct GameL;
struct HintV;
struct IGameClientsX;
struct IGameRules;
struct IPhysTune2;
struct IPhysTune;
struct IPhysicsCollisionV;
struct LLNode;
struct NameEntry;
struct Node;
struct Pool;
struct PyHost;
struct PyMgr;
struct PyObj;
struct PyObject;
struct S1002cd50Props;
struct S10723934;
struct S10924edc;
struct S109ef04c;
struct SConVarView;
struct SConVarX;
struct SCvar;
struct SDifficulty;
struct SGlobal248f4;
struct SHost;
struct SNameEntry10259f80;
struct SNameEntry;
struct SNamedEntry10203540;
struct SNamedEntry10203660;
struct SPoolEntry100c;
struct SPoolItem;
struct SeqNode;
struct ServerClass;
struct ShutdownNode_t;
struct SndTimeView;
struct SoundRecord;
struct StatDefault2;
struct StatMgr;
struct TranslateGlobal;
struct V1092450c;
struct WWTimerCvar;

// 0x106baaa0 +4096
CBaseEntity *g_106baaa0[1024];
// 0x106bbaa4 +64; also ?g_106bbaa4@@3PAUCNavGlobalView@@A ?g_106bbaa4@@3PAUCVarV2@@A ?g_106bbaa4@@3PAUDevView@@A ?g_106bbaa4@@3PAVCDevFlagObj@@A
#pragma bss_seg(".bss$106bbaa40")
CDevFlagView *g_106bbaa4;
#pragma bss_seg(".bss$106bbaa41")
char pcd_fill_106bbaa4[60];
#pragma bss_seg()
// 0x106bbb14 +68
#pragma bss_seg(".bss$106bbb140")
CUnkMgr *g_106bbb14;
#pragma bss_seg(".bss$106bbb141")
char pcd_fill_106bbb14[64];
#pragma bss_seg()
// 0x106bbb58 +4096
CBaseEntity *g_106bbb58[1024];
// 0x106bcb58 +4
float g_106bcb58;
// 0x106bcb5c +3340
#pragma bss_seg(".bss$106bcb5c0")
int g_106bcb5c;
#pragma bss_seg(".bss$106bcb5c1")
char pcd_fill_106bcb5c[3336];
#pragma bss_seg()
// 0x106bd86c +68
#pragma bss_seg(".bss$106bd86c0")
ConVar *g_106bd86c;
#pragma bss_seg(".bss$106bd86c1")
char pcd_fill_106bd86c[64];
#pragma bss_seg()
// 0x106bd8b0 +84; also ?g_106bd8b0@@3UPhysEventX@@A ?g_106bd8b0@@3Utrace21@@A
char g_106bd8b0[84];
// 0x106bd938 +128; also ?g_106bd938@@3PAPAUDataObjAllocator@@A
DataObjL *g_106bd938[32];
// 0x106bd9b8 +72
#pragma bss_seg(".bss$106bd9b80")
int g_106bd9b8;
#pragma bss_seg(".bss$106bd9b81")
char pcd_fill_106bd9b8[68];
#pragma bss_seg()
// 0x106bda5c +4
#pragma bss_seg(".bss$106bda5c0")
unsigned char g_106bda5c;
#pragma bss_seg(".bss$106bda5c1")
char pcd_fill_106bda5c[3];
#pragma bss_seg()
// 0x106bda6c +24; also ?g_106bda6c@@3UPQ@@A
char g_106bda6c[24];
// 0x106bda84 +24; also ?g_106bda84@@3UCPhysTreeView@@A
char g_106bda84[24];
// 0x106bda9c +8
#pragma bss_seg(".bss$106bda9c0")
int g_106bda9c;
#pragma bss_seg(".bss$106bda9c1")
char pcd_fill_106bda9c[4];
#pragma bss_seg()
// 0x106bdaa4 +24; also ?g_106bdaa4@@3VCUtlRBTreeFind16@@A
char g_106bdaa4[24];
// 0x106bdabc +4
void *g_106bdabc;
// 0x106bdac0 +24; also ?g_106bdac0@@3VCUtlRBTreeFind16@@A
char g_106bdac0[24];
// 0x106bdad8 +4
void *g_106bdad8;
// 0x106bdadc +36; also ?g_106bdadc@@3VCUtlRBTree36@@A
char g_106bdadc[36];
// 0x106bdb50 +24; also ?g_106bdb50@@3ULinks_t@@A
char g_106bdb50[24];
// 0x106bdd34 +8; also ?g_106bdd34@@3PADA
#pragma bss_seg(".bss$106bdd340")
int g_106bdd34;
#pragma bss_seg(".bss$106bdd341")
char pcd_fill_106bdd34[4];
#pragma bss_seg()
// 0x106bdd3c +36; also ?g_106bdd3c@lifted@@3HA
#pragma bss_seg(".bss$106bdd3c0")
void *g_106bdd3c;
#pragma bss_seg(".bss$106bdd3c1")
char pcd_fill_106bdd3c[32];
#pragma bss_seg()
// 0x106bec64 +136
char g_106bec64[136];
// 0x106bf214 +280
char g_106bf214[280];
// 0x106bfb14 +524; also ?g_106bfb14@@3UBeamPointsData@@A
char g_106bfb14[524];
// 0x106c0464 +132
char g_106c0464[132];
// 0x106c08ac +1048
char g_106c08ac[1048];
// 0x106c1458 +4
namespace lifted { int g_106c1458; }
// 0x106c145c +4
namespace lifted { int g_106c145c; }
// 0x106c1460 +4
namespace lifted { int g_106c1460; }
// 0x106c1464 +4
namespace lifted { int g_106c1464; }
// 0x106c1468 +4
namespace lifted { int g_106c1468; }
// 0x106c2648 +112
char g_106c2648[112];
// 0x106c2dac +4
namespace lifted { int g_106c2dac; }
// 0x106c2db0 +4
namespace lifted { int g_106c2db0; }
// 0x106c2db4 +4
namespace lifted { int g_106c2db4; }
// 0x106c2db8 +4
namespace lifted { int g_106c2db8; }
// 0x106c2dbc +4
namespace lifted { int g_106c2dbc; }
// 0x106c2dc0 +4
namespace lifted { int g_106c2dc0; }
// 0x106c4380 +328
#pragma bss_seg(".bss$106c43800")
unsigned int g_106c4380;
#pragma bss_seg(".bss$106c43801")
char pcd_fill_106c4380[324];
#pragma bss_seg()
// 0x106c4834 +320
int g_106c4834[80];
// 0x106c49a0 +8
#pragma bss_seg(".bss$106c49a00")
namespace lifted { int g_106c49a0; }
#pragma bss_seg(".bss$106c49a01")
char pcd_fill_106c49a0[4];
#pragma bss_seg()
// 0x106c50e8 +4
namespace lifted { int g_106c50e8; }
// 0x106c50ec +4
namespace lifted { int g_106c50ec; }
// 0x106c50f0 +4
namespace lifted { int g_106c50f0; }
// 0x106c50f4 +4
namespace lifted { int g_106c50f4; }
// 0x106c50f8 +4
namespace lifted { int g_106c50f8; }
// 0x106c50fc +4
namespace lifted { int g_106c50fc; }
// 0x106c59f0 +4
int g_106c59f0;
// 0x106c59f4 +4
int g_106c59f4;
// 0x106c59f8 +4
int g_106c59f8;
// 0x106c59fc +4
int g_106c59fc;
// 0x106c5a00 +4
int g_106c5a00;
// 0x106c5a04 +4
int g_106c5a04;
// 0x106c5a08 +4
int g_106c5a08;
// 0x106c5a0c +4
int g_106c5a0c;
// 0x106c5a10 +4
int g_106c5a10;
// 0x106c5a14 +4
int g_106c5a14;
// 0x106c5a18 +184
#pragma bss_seg(".bss$106c5a180")
char g_106c5a18;
#pragma bss_seg(".bss$106c5a181")
char pcd_fill_106c5a18[183];
#pragma bss_seg()
// 0x106c5e8c +1792; also ?g_106c5e8c@@3UTextMessageData@@A
char g_106c5e8c[1792];
// 0x106c7528 +4
int g_106c7528;
// 0x106c752c +4
int g_106c752c;
// 0x106c7530 +4
int g_106c7530;
// 0x106c7534 +4
int g_106c7534;
// 0x106c7b2c +264
char g_106c7b2c[264];
// 0x106c7fa4 +68; also ?g_106c7fa4@@3PAVCUnknown10738964@@A
#pragma bss_seg(".bss$106c7fa40")
CUnk10071840Cvar *g_106c7fa4;
#pragma bss_seg(".bss$106c7fa41")
char pcd_fill_106c7fa4[64];
#pragma bss_seg()
// 0x106c8184 +276
char g_106c8184[276];
// 0x106c83f0 +12
float g_106c83f0[3];
// 0x106c83fc +12
int g_106c83fc[3];
// 0x106c8408 +16
int g_106c8408[4];
// 0x106c8418 +256
char g_106c8418[256];
// 0x106c851c +64
#pragma bss_seg(".bss$106c851c0")
CUnknown10074f70_Global *g_106c851c;
#pragma bss_seg(".bss$106c851c1")
char pcd_fill_106c851c[60];
#pragma bss_seg()
// 0x106c855c +88
float g_106c855c[22];
// 0x106c85d4 +64
#pragma bss_seg(".bss$106c85d40")
ConVar *g_106c85d4;
#pragma bss_seg(".bss$106c85d41")
char pcd_fill_106c85d4[60];
#pragma bss_seg()
// 0x106c8a2c +4
int g_106c8a2c;
// 0x106c8a30 +4
int g_106c8a30;
// 0x106c8a34 +4
int g_106c8a34;
// 0x106c8a38 +4
EHandleRef *g_106c8a38;
// 0x106c8a41 +231
#pragma bss_seg(".bss$106c8a410")
char g_106c8a41;
#pragma bss_seg(".bss$106c8a411")
char pcd_fill_106c8a41[230];
#pragma bss_seg()
// 0x106c9208 +256
char g_106c9208[256];
// 0x106c994c +4
int g_106c994c;
// 0x106caf64 +4268
#pragma bss_seg(".bss$106caf640")
CAnimConVar *g_106caf64;
#pragma bss_seg(".bss$106caf641")
char pcd_fill_106caf64[4264];
#pragma bss_seg()
// 0x106ccf0c +64
#pragma bss_seg(".bss$106ccf0c0")
DeveloperVar *g_106ccf0c;
#pragma bss_seg(".bss$106ccf0c1")
char pcd_fill_106ccf0c[60];
#pragma bss_seg()
// 0x106cec38 +1032
char g_106cec38[1032];
// 0x106cf040 +64
char g_106cf040[64];
// 0x106cfe54 +64
#pragma bss_seg(".bss$106cfe540")
CUnknown10738964 *g_106cfe54;
#pragma bss_seg(".bss$106cfe541")
char pcd_fill_106cfe54[60];
#pragma bss_seg()
// 0x106cff4c +4
int g_106cff4c;
// 0x106cff50 +1
char g_106cff50;
// 0x106cff51 +3; also ?g_106cff51@@3_NA
#pragma bss_seg(".bss$106cff510")
char g_106cff51;
#pragma bss_seg(".bss$106cff511")
char pcd_fill_106cff51[2];
#pragma bss_seg()
// 0x106cff54 +4; also ?g_106cff54@lifted@@3HA
int g_106cff54;
// 0x106cff58 +1552
char g_106cff58[1552];
// 0x106d056c +68
#pragma bss_seg(".bss$106d056c0")
IGameRules *g_106d056c;
#pragma bss_seg(".bss$106d056c1")
char pcd_fill_106d056c[64];
#pragma bss_seg()
// 0x106d070c +60; also ?g_106d070c@@3PADA
#pragma bss_seg(".bss$106d070c0")
int g_106d070c;
#pragma bss_seg(".bss$106d070c1")
char pcd_fill_106d070c[56];
#pragma bss_seg()
// 0x106d19b0 +32
unsigned int g_106d19b0[8];
// 0x106d19d0 +64
unsigned int g_106d19d0[16];
// 0x106d1a10 +4096
unsigned int g_106d1a10[1024];
// 0x106d2a10 +876; also ?g_106d2a10@@3P6AXXZA
#pragma bss_seg(".bss$106d2a100")
int g_106d2a10;
#pragma bss_seg(".bss$106d2a101")
char pcd_fill_106d2a10[872];
#pragma bss_seg()
// 0x106d3e10 +28668
#pragma bss_seg(".bss$106d3e100")
SPoolEntry100c *g_106d3e10;
#pragma bss_seg(".bss$106d3e101")
char pcd_fill_106d3e10[28664];
#pragma bss_seg()
// 0x106dae0c +4212
#pragma bss_seg(".bss$106dae0c0")
int g_106dae0c;
#pragma bss_seg(".bss$106dae0c1")
char pcd_fill_106dae0c[4208];
#pragma bss_seg()
// 0x106dbe80 +31548; also ?g_106dbe80@@3PAURec@@A
int g_106dbe80[7887];
// 0x106e39bc +4; also ?g_106e39bc@@3HA ?g_106e39bc@@3PAUCUnknownFreeNode100c4980@@A ?g_106e39bc@@3PAUSPoolEntry100c@@A
Node *g_106e39bc;
// 0x106e39c0 +4; also ?g_106e39c0@@3IA
int g_106e39c0;
// 0x106e39c4 +13736
#pragma bss_seg(".bss$106e39c40")
char g_106e39c4;
#pragma bss_seg(".bss$106e39c41")
char pcd_fill_106e39c4[13735];
#pragma bss_seg()
// 0x106e6f78 +4
int g_106e6f78;
// 0x106e6f7c +12
#pragma bss_seg(".bss$106e6f7c0")
int g_106e6f7c;
#pragma bss_seg(".bss$106e6f7c1")
char pcd_fill_106e6f7c[8];
#pragma bss_seg()
// 0x106e7000 +80
char g_106e7000[80];
// 0x106e70e4 +4; also ?g_106e70e4@@3HA
float g_106e70e4;
// 0x106e70e8 +4
int g_106e70e8;
// 0x106e70ec +76
#pragma bss_seg(".bss$106e70ec0")
float g_106e70ec;
#pragma bss_seg(".bss$106e70ec1")
char pcd_fill_106e70ec[72];
#pragma bss_seg()
// 0x106e794c +4
int g_106e794c;
// 0x106e7b80 +4
#pragma bss_seg(".bss$106e7b800")
unsigned char g_106e7b80;
#pragma bss_seg(".bss$106e7b801")
char pcd_fill_106e7b80[3];
#pragma bss_seg()
// 0x106e7c00 +256
char g_106e7c00[256];
// 0x106e7e90 +1
char g_106e7e90;
// 0x106e7e91 +687
#pragma bss_seg(".bss$106e7e910")
char g_106e7e91;
#pragma bss_seg(".bss$106e7e911")
char pcd_fill_106e7e91[686];
#pragma bss_seg()
// 0x106e853c +208
#pragma bss_seg(".bss$106e853c0")
int g_106e853c;
#pragma bss_seg(".bss$106e853c1")
char pcd_fill_106e853c[204];
#pragma bss_seg()
// 0x106e861c +100
#pragma bss_seg(".bss$106e861c0")
CDialogHost106e861c *g_106e861c;
#pragma bss_seg(".bss$106e861c1")
char pcd_fill_106e861c[96];
#pragma bss_seg()
// 0x106e8684 +68
#pragma bss_seg(".bss$106e86840")
CDialogGate *g_106e8684;
#pragma bss_seg(".bss$106e86841")
char pcd_fill_106e8684[64];
#pragma bss_seg()
// 0x106e86c8 +152
char g_106e86c8[152];
// 0x106e8764 +76
#pragma bss_seg(".bss$106e87640")
CDialogDebugVar *g_106e8764;
#pragma bss_seg(".bss$106e87641")
char pcd_fill_106e8764[72];
#pragma bss_seg()
// 0x106e87b0 +16
#pragma bss_seg(".bss$106e87b00")
int g_106e87b0;
#pragma bss_seg(".bss$106e87b01")
char pcd_fill_106e87b0[12];
#pragma bss_seg()
// 0x106e87e8 +264
char g_106e87e8[264];
// 0x106e88f0 +2064; also ?g_106e88f0@@3PAHA
unsigned char g_106e88f0[2064];
// 0x106e9100 +8
#pragma bss_seg(".bss$106e91000")
int g_106e9100;
#pragma bss_seg(".bss$106e91001")
char pcd_fill_106e9100[4];
#pragma bss_seg()
// 0x106e9108 +1032
char g_106e9108[1032];
// 0x106e9514 +68; also ?g_106e9514@@3PAUCDebugLog@@A
#pragma bss_seg(".bss$106e95140")
CDebugLog100e8980 *g_106e9514;
#pragma bss_seg(".bss$106e95141")
char pcd_fill_106e9514[64];
#pragma bss_seg()
// 0x106e9558 +4096
char g_106e9558[4096];
// 0x106ea558 +264
char g_106ea558[264];
// 0x106ea660 +260
char g_106ea660[260];
// 0x106ea764 +28
int g_106ea764[7];
// 0x106ea780 +4
void *g_106ea780;
// 0x106ea784 +4
void *g_106ea784;
// 0x106ea788 +1716
#pragma bss_seg(".bss$106ea7880")
char g_106ea788;
#pragma bss_seg(".bss$106ea7881")
char pcd_fill_106ea788[1715];
#pragma bss_seg()
// 0x106eae3c +4
char *g_106eae3c;
// 0x106eae40 +616; also ?g_106eae40@@3UCDispositionDefault@@A ?g_106eae40@@3UCDispositionEntry@@A
char g_106eae40[616];
// 0x106eb0a8 +512
char g_106eb0a8[512];
// 0x106eb3c8 +12
#pragma bss_seg(".bss$106eb3c80")
int g_106eb3c8;
#pragma bss_seg(".bss$106eb3c81")
char pcd_fill_106eb3c8[8];
#pragma bss_seg()
// 0x106eb3dc +4
int g_106eb3dc;
// 0x106eb3e0 +4
int g_106eb3e0;
// 0x106eb3e4 +4
int g_106eb3e4;
// 0x106eb3e8 +16
#pragma bss_seg(".bss$106eb3e80")
int g_106eb3e8;
#pragma bss_seg(".bss$106eb3e81")
char pcd_fill_106eb3e8[12];
#pragma bss_seg()
// 0x10703654 +12; also ?g_10703654@@3UEntPtrVec_t@@A ?g_10703654@@3V?$CUtlVector@PAVCBaseEntity@@V?$CUtlMemory@PAVCBaseEntity@@@@@@A
char g_10703654[12];
// 0x10703660 +8
#pragma bss_seg(".bss$107036600")
namespace lifted { int g_10703660; }
#pragma bss_seg(".bss$107036601")
char pcd_fill_10703660[4];
#pragma bss_seg()
// 0x10703674 +8
#pragma bss_seg(".bss$107036740")
int g_10703674;
#pragma bss_seg(".bss$107036741")
char pcd_fill_10703674[4];
#pragma bss_seg()
// 0x107036ac +4
#pragma bss_seg(".bss$107036ac0")
char g_107036ac;
#pragma bss_seg(".bss$107036ac1")
char pcd_fill_107036ac[3];
#pragma bss_seg()
// 0x107036b4 +19740; also ?g_107036b4@@3USEntVec@@A
char g_107036b4[19740];
// 0x107083dc +832
#pragma bss_seg(".bss$107083dc0")
CRateGlobal107083dc *g_107083dc;
#pragma bss_seg(".bss$107083dc1")
char pcd_fill_107083dc[828];
#pragma bss_seg()
// 0x10708e3c +4
int g_10708e3c;
// 0x10708e40 +4
int g_10708e40;
// 0x10708e44 +4
int g_10708e44;
// 0x10708e48 +540
#pragma bss_seg(".bss$10708e480")
int g_10708e48;
#pragma bss_seg(".bss$10708e481")
char pcd_fill_10708e48[536];
#pragma bss_seg()
// 0x1070908c +4; also ?g_1070908c@lifted@@3HA
float g_1070908c;
// 0x10709090 +8; also ?g_10709090@lifted@@3HA
#pragma bss_seg(".bss$107090900")
float g_10709090;
#pragma bss_seg(".bss$107090901")
char pcd_fill_10709090[4];
#pragma bss_seg()
// 0x1070917c +4
float g_1070917c;
// 0x10709180 +4
float g_10709180;
// 0x10709184 +4
float g_10709184;
// 0x10709188 +28
#pragma bss_seg(".bss$107091880")
float g_10709188;
#pragma bss_seg(".bss$107091881")
char pcd_fill_10709188[24];
#pragma bss_seg()
// 0x107091bc +68
#pragma bss_seg(".bss$107091bc0")
CDevFlagObjView *g_107091bc;
#pragma bss_seg(".bss$107091bc1")
char pcd_fill_107091bc[64];
#pragma bss_seg()
// 0x107092bc +68
#pragma bss_seg(".bss$107092bc0")
ConVar *g_107092bc;
#pragma bss_seg(".bss$107092bc1")
char pcd_fill_107092bc[64];
#pragma bss_seg()
// 0x10709304 +68
#pragma bss_seg(".bss$107093040")
ConVar *g_10709304;
#pragma bss_seg(".bss$107093041")
char pcd_fill_10709304[64];
#pragma bss_seg()
// 0x1070934c +64
#pragma bss_seg(".bss$1070934c0")
ConVar *g_1070934c;
#pragma bss_seg(".bss$1070934c1")
char pcd_fill_1070934c[60];
#pragma bss_seg()
// 0x10709394 +64
#pragma bss_seg(".bss$107093940")
CFireScaleVar *g_10709394;
#pragma bss_seg(".bss$107093941")
char pcd_fill_10709394[60];
#pragma bss_seg()
// 0x107093e4 +68
#pragma bss_seg(".bss$107093e40")
ConVar *g_107093e4;
#pragma bss_seg(".bss$107093e41")
char pcd_fill_107093e4[64];
#pragma bss_seg()
// 0x1070942c +68
#pragma bss_seg(".bss$1070942c0")
CFireConVar *g_1070942c;
#pragma bss_seg(".bss$1070942c1")
char pcd_fill_1070942c[64];
#pragma bss_seg()
// 0x10709474 +68
#pragma bss_seg(".bss$107094740")
ConVar *g_10709474;
#pragma bss_seg(".bss$107094741")
char pcd_fill_10709474[64];
#pragma bss_seg()
// 0x107094bc +68
#pragma bss_seg(".bss$107094bc0")
CFireConVar *g_107094bc;
#pragma bss_seg(".bss$107094bc1")
char pcd_fill_107094bc[64];
#pragma bss_seg()
// 0x10709504 +68
#pragma bss_seg(".bss$107095040")
CUnknown10738964 *g_10709504;
#pragma bss_seg(".bss$107095041")
char pcd_fill_10709504[64];
#pragma bss_seg()
// 0x1070954c +68
#pragma bss_seg(".bss$1070954c0")
ConVar *g_1070954c;
#pragma bss_seg(".bss$1070954c1")
char pcd_fill_1070954c[64];
#pragma bss_seg()
// 0x1070959c +224
#pragma bss_seg(".bss$1070959c0")
ConVar *g_1070959c;
#pragma bss_seg(".bss$1070959c1")
char pcd_fill_1070959c[220];
#pragma bss_seg()
// 0x1070a53c +404
char g_1070a53c[404];
// 0x1070a87c +264
#pragma bss_seg(".bss$1070a87c0")
int g_1070a87c;
#pragma bss_seg(".bss$1070a87c1")
char pcd_fill_1070a87c[260];
#pragma bss_seg()
// 0x1070a9fc +68
#pragma bss_seg(".bss$1070a9fc0")
CPlayerConVarView *g_1070a9fc;
#pragma bss_seg(".bss$1070a9fc1")
char pcd_fill_1070a9fc[64];
#pragma bss_seg()
// 0x1070aa8c +68
#pragma bss_seg(".bss$1070aa8c0")
ConVar *g_1070aa8c;
#pragma bss_seg(".bss$1070aa8c1")
char pcd_fill_1070aa8c[64];
#pragma bss_seg()
// 0x1070ac3c +68
#pragma bss_seg(".bss$1070ac3c0")
SHost *g_1070ac3c;
#pragma bss_seg(".bss$1070ac3c1")
char pcd_fill_1070ac3c[64];
#pragma bss_seg()
// 0x1070ac84 +68
#pragma bss_seg(".bss$1070ac840")
SndTimeView *g_1070ac84;
#pragma bss_seg(".bss$1070ac841")
char pcd_fill_1070ac84[64];
#pragma bss_seg()
// 0x1070accc +68
#pragma bss_seg(".bss$1070accc0")
CGameRulesView *g_1070accc;
#pragma bss_seg(".bss$1070accc1")
char pcd_fill_1070accc[64];
#pragma bss_seg()
// 0x1070ada4 +68
#pragma bss_seg(".bss$1070ada40")
CUnknown1070ada4 *g_1070ada4;
#pragma bss_seg(".bss$1070ada41")
char pcd_fill_1070ada4[64];
#pragma bss_seg()
// 0x1070adec +68
#pragma bss_seg(".bss$1070adec0")
ConVar *g_1070adec;
#pragma bss_seg(".bss$1070adec1")
char pcd_fill_1070adec[64];
#pragma bss_seg()
// 0x1070ae34 +68
#pragma bss_seg(".bss$1070ae340")
CConVarViewAe34 *g_1070ae34;
#pragma bss_seg(".bss$1070ae341")
char pcd_fill_1070ae34[64];
#pragma bss_seg()
// 0x1070ae7c +68
#pragma bss_seg(".bss$1070ae7c0")
ConVar *g_1070ae7c;
#pragma bss_seg(".bss$1070ae7c1")
char pcd_fill_1070ae7c[64];
#pragma bss_seg()
// 0x1070aec4 +68
#pragma bss_seg(".bss$1070aec40")
ConVar *g_1070aec4;
#pragma bss_seg(".bss$1070aec41")
char pcd_fill_1070aec4[64];
#pragma bss_seg()
// 0x1070af4c +284; also ?g_1070af4c@@3PAUAIGlobX@@A ?g_1070af4c@@3PAUCAIInner1070af4c@@A ?g_1070af4c@@3PAUCCmdConsole@@A ?g_1070af4c@@3PAUCDevConVarHolder@@A ?g_1070af4c@@3PAUCDevGlobal@@A ?g_1070af4c@@3PAUCHolderV@@A ?g_1070af4c@@3PAUCVShadowHolder@@A ?g_1070af4c@@3PAUHolder@@A ?g_1070af4c@@3PAVConVar@@A ?g_1070af4c@@3PAXA
#pragma bss_seg(".bss$1070af4c0")
CMakerGlob *g_1070af4c;
#pragma bss_seg(".bss$1070af4c1")
char pcd_fill_1070af4c[280];
#pragma bss_seg()
// 0x1070b07c +64; also ?g_1070b07c@@3PAUConVarView07c@@A ?g_1070b07c@@3PAUConVarView@@A
#pragma bss_seg(".bss$1070b07c0")
ConVarV *g_1070b07c;
#pragma bss_seg(".bss$1070b07c1")
char pcd_fill_1070b07c[60];
#pragma bss_seg()
// 0x1070b0f4 +68; also ?g_1070b0f4@@3PAUConVarV@@A ?g_1070b0f4@@3PAUConVarView@@A
#pragma bss_seg(".bss$1070b0f40")
CDevCvarView *g_1070b0f4;
#pragma bss_seg(".bss$1070b0f41")
char pcd_fill_1070b0f4[64];
#pragma bss_seg()
// 0x1070b13c +64; also ?g_1070b13c@@3PAUConVarView@@A ?g_1070b13c@@3PAVCDevFlagObj@@A
#pragma bss_seg(".bss$1070b13c0")
ConVarV *g_1070b13c;
#pragma bss_seg(".bss$1070b13c1")
char pcd_fill_1070b13c[60];
#pragma bss_seg()
// 0x1070b184 +64
#pragma bss_seg(".bss$1070b1840")
ConVar *g_1070b184;
#pragma bss_seg(".bss$1070b1841")
char pcd_fill_1070b184[60];
#pragma bss_seg()
// 0x1070b1dc +64; also ?g_1070b1dc@@3PAUConVarView@@A
#pragma bss_seg(".bss$1070b1dc0")
ConVarV *g_1070b1dc;
#pragma bss_seg(".bss$1070b1dc1")
char pcd_fill_1070b1dc[60];
#pragma bss_seg()
// 0x1070b228 +4; also ?g_1070b228@@3PADA ?g_1070b228@@3PAHA ?g_1070b228@@3PAMA ?g_1070b228@@3PAUCFireGlobals@@A ?g_1070b228@@3PAUCGV@@A ?g_1070b228@@3PAUCGhostGlobals@@A ?g_1070b228@@3PAUCGlobalVarsDyn@@A ?g_1070b228@@3PAUCGlobalVarsLite@@A ?g_1070b228@@3PAUCGlobalVarsMap@@A ?g_1070b228@@3PAUCGlobalVarsTE@@A ?g_1070b228@@3PAUCGlobalVarsTime@@A ?g_1070b228@@3PAUCGlobalVarsView@@A ?g_1070b228@@3PAUCGlobalVarsX@@A ?g_1070b228@@3PAUCGlobalVars_1020acb0@@A ?g_1070b228@@3PAUCGlobalVars_102a0bc0@@A ?g_1070b228@@3PAUCGlobalVars_t@@A ?g_1070b228@@3PAUCGlobals1070b228@@A ?g_1070b228@@3PAUCGlobalsView@@A ?g_1070b228@@3PAUCGrenadeGlobals@@A ?g_1070b228@@3PAUCMotorGlobals@@A ?g_1070b228@@3PAUCTroikaGlobals@@A ?g_1070b228@@3PAUCUnknown1028b190Clock@@A ?g_1070b228@@3PAUCUnknownGlobals1070b228@@A ?g_1070b228@@3PAUCWorldGlobals@@A ?g_1070b228@@3PAUCannisterGlobals@@A ?g_1070b228@@3PAUGV817@@A ?g_1070b228@@3PAUGV@@A ?g_1070b228@@3PAUGlobalVarsFrame@@A ?g_1070b228@@3PAUGlobalVarsView@@A ?g_1070b228@@3PAUGlobals@@A ?g_1070b228@@3PAUGlobalsView@@A ?g_1070b228@@3PAUPyGlobalsView@@A ?g_1070b228@@3PAUS100f5880Globals@@A ?g_1070b228@@3PAUS103f2ae0Globals@@A ?g_1070b228@@3PAUS1070b228@@A ?g_1070b228@@3PAUSGlobals14@@A ?g_1070b228@@3PAUSGlobals847e0@@A ?g_1070b228@@3PAUS_1070b228@@A ?g_1070b228@@3PAU__unnamed@@A ?g_1070b228@@3PAUglobalvars_t@@A ?g_1070b228@v438@@3PAUGlobV@1@A
namespace EngineGlobals { EngineGlobals::CGlobalVars *g_1070b228; }
// 0x1070b22c +4; also ?g_1070b22c@@3PADA ?g_1070b22c@@3PAHA ?g_1070b22c@@3PAUBarterEngine@@A ?g_1070b22c@@3PAUCEngX@@A ?g_1070b22c@@3PAUCEngine1070b22c@@A ?g_1070b22c@@3PAUCEngineServerView@@A ?g_1070b22c@@3PAUCEngineSlot35View@@A ?g_1070b22c@@3PAUCEngineSlot84View@@A ?g_1070b22c@@3PAUCEngineSlots57@@A ?g_1070b22c@@3PAUCEngineSlots85@@A ?g_1070b22c@@3PAUCEngineSlots@@A ?g_1070b22c@@3PAUCEngineTimeView@@A ?g_1070b22c@@3PAUCEngineView1011c520@@A ?g_1070b22c@@3PAUCEngineView@@A ?g_1070b22c@@3PAUCEngineX@@A ?g_1070b22c@@3PAUCParseEngineView@@A ?g_1070b22c@@3PAUCSecCamEngine@@A ?g_1070b22c@@3PAUEngineCmdSlots@@A ?g_1070b22c@@3PAUEngineIdx@@A ?g_1070b22c@@3PAUEngineL@@A ?g_1070b22c@@3PAUEngineLike@@A ?g_1070b22c@@3PAUEngineMsgSlots@@A ?g_1070b22c@@3PAUEngineObj36@@A ?g_1070b22c@@3PAUEngineObj@@A ?g_1070b22c@@3PAUEngineSlots@@A ?g_1070b22c@@3PAUEngineSrv@@A ?g_1070b22c@@3PAUEngineText@@A ?g_1070b22c@@3PAUEngineX@@A ?g_1070b22c@@3PAUEngineY@@A ?g_1070b22c@@3PAUGlobalObj_t@@A ?g_1070b22c@@3PAUI1070b22c@@A ?g_1070b22c@@3PAUIEng@@A ?g_1070b22c@@3PAUIEngine@@A ?g_1070b22c@@3PAUIEngineEntFull@@A ?g_1070b22c@@3PAUIEngineResourceView@@A ?g_1070b22c@@3PAUIPM@@A ?g_1070b22c@@3PAUIUnk1070b22c@@A ?g_1070b22c@@3PAUPHFileSystem@@A ?g_1070b22c@@3PAUS11@@A ?g_1070b22c@@3PAUS22c@@A ?g_1070b22c@@3PAUSEngine99@@A ?g_1070b22c@@3PAUSEngine@@A ?g_1070b22c@@3PAUSEngineSch@@A ?g_1070b22c@@3PAUSEngineServer@@A ?g_1070b22c@@3PAUS_Eng@@A ?g_1070b22c@@3PAUSvc@@A ?g_1070b22c@@3PAUTIface@@A ?g_1070b22c@@3PAVCEngineCmd@@A ?g_1070b22c@@3PAVCEngineServerSP@@A ?g_1070b22c@@3PAVCEngineServerTW@@A ?g_1070b22c@@3PAVCUnknown1070b22c@@A ?g_1070b22c@@3PAVIVEngineServer@@A ?g_1070b22c@@3PAVIVEngineServerFull@@A ?g_1070b22c@@3PAXA
namespace EngineGlobals { EngineGlobals::IVEngineServer *g_1070b22c; }
// 0x1070b230 +4; also ?g_1070b230@@3PAXA
CVoiceServer1070b230 *g_1070b230;
// 0x1070b234 +4; also ?g_1070b234@@3PAUCCvarSys@@A ?g_1070b234@@3PAUCCvarX@@A ?g_1070b234@@3PAUCCvar_1023bc20@@A ?g_1070b234@@3PAUCGibCvarMgr@@A ?g_1070b234@@3PAUCNoclipCvarSystem@@A ?g_1070b234@@3PAUCUnknown1070b234View@@A ?g_1070b234@@3PAUCVDebugConVarSys@@A ?g_1070b234@@3PAUCvarSys402@@A ?g_1070b234@@3PAUCvarSys@@A ?g_1070b234@@3PAUICvarFind@@A ?g_1070b234@@3PAUICvarV10118350@@A ?g_1070b234@@3PAUICvarView@@A ?g_1070b234@@3PAUIVarFinder@@A ?g_1070b234@@3PAUSrc@@A ?g_1070b234@@3PAUTraitCvarSys@@A ?g_1070b234@@3PAVCvarInterface@@A ?g_1070b234@@3PAVSCvarSystem@@A ?g_1070b234@@3PAXA
CWorldCvarSystem *g_1070b234;
// 0x1070b238 +4; also ?g_1070b238@@3HA ?g_1070b238@@3PAUCFileFinder@@A ?g_1070b238@@3PAUCFileSys@@A ?g_1070b238@@3PAUCFileSystemX@@A ?g_1070b238@@3PAUCHEFileSystem@@A ?g_1070b238@@3PAUCSaveFileSys@@A ?g_1070b238@@3PAUCUnknown1070b238@@A ?g_1070b238@@3PAUFileSysView@@A ?g_1070b238@@3PAUFileSysX@@A ?g_1070b238@@3PAUFileSystem@@A ?g_1070b238@@3PAUFileSystemLike@@A ?g_1070b238@@3PAUFileSystemLite@@A ?g_1070b238@@3PAUFileSystemObj_t@@A ?g_1070b238@@3PAUHookL@@A ?g_1070b238@@3PAUIBufferFree@@A ?g_1070b238@@3PAUIDialog@@A ?g_1070b238@@3PAUIFile101c4580@@A ?g_1070b238@@3PAUIFileSys@@A ?g_1070b238@@3PAUIFileSysView3@@A ?g_1070b238@@3PAUIFileSystemExistsView@@A ?g_1070b238@@3PAUIFileSystemTrackView@@A ?g_1070b238@@3PAUNMFileSystem@@A ?g_1070b238@@3PAUSFileSystem@@A ?g_1070b238@@3PAUSLogView@@A ?g_1070b238@@3PAUS_FS@@A ?g_1070b238@@3PAVCDialogLogFS@@A ?g_1070b238@@3PAVIFileSystemFind@@A ?g_1070b238@@3PAXA
IFileSystemView *g_1070b238;
// 0x1070b23c +4; also ?g_1070b23c@@3PAUCUnk1011bc40Iface@@A ?g_1070b23c@@3PAUCUnk10231f80Iface@@A ?g_1070b23c@@3PAUCUnk10231fe0Iface@@A ?g_1070b23c@@3PAUCUnkVT1011bc70@@A ?g_1070b23c@@3PAVCVGuiPanelFactory@@A ?g_1070b23c@@3PAXA
CAllocatorLike *g_1070b23c;
// 0x1070b240 +4; also ?g_1070b240@@3PAUCollisionInterfaceLike@@A ?g_1070b240@@3PAUIPhysParser@@A ?g_1070b240@@3PAUStaticPropMgrSlots@@A ?g_1070b240@@3PAVCGameRulesView@@A ?g_1070b240@@3PAXA
CEntListQ *g_1070b240;
// 0x1070b244 +4; also ?g_1070b244@@3PAUCChangBallEngine@@A ?g_1070b244@@3PAUCEngRand@@A ?g_1070b244@@3PAUCGibEngine@@A ?g_1070b244@@3PAUCNTRandom@@A ?g_1070b244@@3PAUCRandomHook@@A ?g_1070b244@@3PAUCRandomStream@@A ?g_1070b244@@3PAUCRandomStreamView@@A ?g_1070b244@@3PAUCRandomStreamX@@A ?g_1070b244@@3PAUCRandomX@@A ?g_1070b244@@3PAUCRandom_1012a6e0@@A ?g_1070b244@@3PAUCRollTable@@A ?g_1070b244@@3PAUCSparkRandom@@A ?g_1070b244@@3PAUCVirtSoundB@@A ?g_1070b244@@3PAUDrawHelperA@@A ?g_1070b244@@3PAUGameL@@A ?g_1070b244@@3PAUIChk@@A ?g_1070b244@@3PAUIEngine1070b244@@A ?g_1070b244@@3PAUIEngineRandom@@A ?g_1070b244@@3PAUIRandom@@A ?g_1070b244@@3PAUIRandomLike@@A ?g_1070b244@@3PAUIRandomStream@@A ?g_1070b244@@3PAUISoundSettings@@A ?g_1070b244@@3PAUIUniformRandomStream@@A ?g_1070b244@@3PAURandV@@A ?g_1070b244@@3PAURandomStream@@A ?g_1070b244@@3PAURandomStream_t@@A ?g_1070b244@@3PAURandomV@@A ?g_1070b244@@3PAUS100f5880Rand@@A ?g_1070b244@@3PAUSRandom@@A ?g_1070b244@@3PAUS_Rnd@@A ?g_1070b244@@3PAUSndRandV@@A ?g_1070b244@@3PAUTRandom@@A ?g_1070b244@@3PAVCRandomSource@@A ?g_1070b244@@3PAVCRandomStreamView@@A ?g_1070b244@@3PAVCShooterRandom@@A ?g_1070b244@@3PAVCUnknown1070b244@@A ?g_1070b244@@3PAVIUniformRandomView@@A ?g_1070b244@@3PAXA ?g_1070b244@v438@@3PAURandV@1@A
namespace EngineGlobals { EngineGlobals::IUniformRandomStream *g_1070b244; }
// 0x1070b248 +4; also ?g_1070b248@@3PAUCEngineSoundView@@A ?g_1070b248@@3PAUCGlobalNpcHook@@A ?g_1070b248@@3PAUCMingXiaoPrecacheIface@@A ?g_1070b248@@3PAUCNotifierX@@A ?g_1070b248@@3PAUCPrecacheIface248@@A ?g_1070b248@@3PAUCPrecacheSounds@@A ?g_1070b248@@3PAUCRunnerSoundSystem@@A ?g_1070b248@@3PAUCSecCamSound@@A ?g_1070b248@@3PAUCSoundPrecacher@@A ?g_1070b248@@3PAUCSoundPrecacherX@@A ?g_1070b248@@3PAUCWorldSound@@A ?g_1070b248@@3PAUEngPrecache@@A ?g_1070b248@@3PAUEngineSoundView@@A ?g_1070b248@@3PAUIA@@A ?g_1070b248@@3PAUIEngineSoundServer@@A ?g_1070b248@@3PAUIEngineSoundX@@A ?g_1070b248@@3PAUISoundPrecache@@A ?g_1070b248@@3PAUISoundPrecache_t@@A ?g_1070b248@@3PAUISoundSink@@A ?g_1070b248@@3PAUISoundView@@A ?g_1070b248@@3PAUIStrSink@@A ?g_1070b248@@3PAUS248@@A ?g_1070b248@@3PAUSSoundSys@@A ?g_1070b248@@3PAUSSoundSystem@@A ?g_1070b248@@3PAUSoundSystemLike@@A ?g_1070b248@@3PAVCUnknown1070b248@@A ?g_1070b248@@3PAVS_SoundSystem@@A ?g_1070b248@@3PAXA
namespace EngineGlobals { EngineGlobals::IEngineSound *g_1070b248; }
// 0x1070b24c +4; also ?g_1070b24c@@3HA ?g_1070b24c@@3PAUCFireSpherePartition@@A ?g_1070b24c@@3PAUCPartition471@@A ?g_1070b24c@@3PAUCSpatialPartition101cca80@@A ?g_1070b24c@@3PAUCSpatialPartition101ccaf0@@A ?g_1070b24c@@3PAUCSpatialPartition101ccc80@@A ?g_1070b24c@@3PAUCSpatialV100dbc20@@A ?g_1070b24c@@3PAUCUnk100ddbd0Vt@@A ?g_1070b24c@@3PAUCUnkVT100ddc00@@A ?g_1070b24c@@3PAUHandleSys@@A ?g_1070b24c@@3PAUIEntityHandleTable@@A ?g_1070b24c@@3PAUPBPartition@@A ?g_1070b24c@@3PAUS24c@@A ?g_1070b24c@@3PAXA
CPartitionObj *g_1070b24c;
// 0x1070b250 +4; also ?g_1070b250@@3PAUCModelInfoX@@A ?g_1070b250@@3PAUCPhysModelInfo@@A ?g_1070b250@@3PAUCRagdollModelInfo@@A ?g_1070b250@@3PAUIPhysFactory@@A ?g_1070b250@@3PAUModelInfoLike@@A ?g_1070b250@@3PAUModelInfoView@@A ?g_1070b250@@3PAURagModelInfo@@A ?g_1070b250@@3PAUSModelInfoLike@@A ?g_1070b250@@3PAUSPhysLike5110@@A ?g_1070b250@@3PAXA ?g_1070b250@EngineGlobals@@3PAVCModelInfo@1@A ?g_1070b250@SaveModelInfo@@3PAUModelInfoSaveView@@A
CModelInfoBeam *g_1070b250;
// 0x1070b254 +4; also ?g_1070b254@@3PAUCUnk101d2530Vt@@A ?g_1070b254@@3PAUCUnknown1070b254@@A ?g_1070b254@@3PAUEngineTraceV@@A ?g_1070b254@@3PAUIEngineTraceX@@A ?g_1070b254@@3PAUIEngineTraceY@@A ?g_1070b254@@3PAUIFireTrace@@A ?g_1070b254@@3PAUIFoo@@A ?g_1070b254@@3PAUIHullTrace102e6290@@A ?g_1070b254@@3PAUIHullTrace@@A ?g_1070b254@@3PAVCEngineTraceView@@A ?g_1070b254@@3PAXA
CUnknown1070b254 *g_1070b254;
// 0x1070b258 +4
int g_1070b258;
// 0x1070b25c +4; also ?g_1070b25c@lifted@@3HA
int g_1070b25c;
// 0x1070b260 +4
int g_1070b260;
// 0x1070b264 +1
char g_1070b264;
// 0x1070b265 +1
char g_1070b265;
// 0x1070b266 +1; also ?g_1070b266@lifted@@3DA
char g_1070b266;
// 0x1070b267 +1; also ?g_1070b267@lifted@@3DA
unsigned char g_1070b267;
// 0x1070b268 +104
#pragma bss_seg(".bss$1070b2680")
char g_1070b268;
#pragma bss_seg(".bss$1070b2681")
char pcd_fill_1070b268[103];
#pragma bss_seg()
// 0x1070b2d4 +68; also ?g_1070b2d4@@3PAUSVarA@@A
#pragma bss_seg(".bss$1070b2d40")
CStepVar1011e940 *g_1070b2d4;
#pragma bss_seg(".bss$1070b2d41")
char pcd_fill_1070b2d4[64];
#pragma bss_seg()
// 0x1070b318 +648
#pragma bss_seg(".bss$1070b3180")
Vector *g_1070b318;
#pragma bss_seg(".bss$1070b3181")
char pcd_fill_1070b318[644];
#pragma bss_seg()
// 0x1070b5e4 +36
char g_1070b5e4[36];
// 0x1070b608 +256; also ?g_1070b608@@3PAY01HA
int g_1070b608[64];
// 0x1070b70c +68
#pragma bss_seg(".bss$1070b70c0")
ConVar *g_1070b70c;
#pragma bss_seg(".bss$1070b70c1")
char pcd_fill_1070b70c[64];
#pragma bss_seg()
// 0x1070b754 +68
#pragma bss_seg(".bss$1070b7540")
CDebugCvar *g_1070b754;
#pragma bss_seg(".bss$1070b7541")
char pcd_fill_1070b754[64];
#pragma bss_seg()
// 0x1070b798 +256; also ?g_1070b798@@3PAY01MA
char g_1070b798[256];
// 0x1070b898 +304
#pragma bss_seg(".bss$1070b8980")
int g_1070b898;
#pragma bss_seg(".bss$1070b8981")
char pcd_fill_1070b898[300];
#pragma bss_seg()
// 0x1070b9cc +64; also ?g_1070b9cc@@3PAUPhysImpactConVar@@A
#pragma bss_seg(".bss$1070b9cc0")
CDebugConVarView *g_1070b9cc;
#pragma bss_seg(".bss$1070b9cc1")
char pcd_fill_1070b9cc[60];
#pragma bss_seg()
// 0x1070ba0c +20; also ?g_1070ba0c@@3PAUAmmoDefs@@A ?g_1070ba0c@@3PAUCAimRules@@A ?g_1070ba0c@@3PAUCAmmoCheck_102524f0@@A ?g_1070ba0c@@3PAUCAmmoDefsCheck@@A ?g_1070ba0c@@3PAUCCmdGameRulesView@@A ?g_1070ba0c@@3PAUCGameEntsView1011c520@@A ?g_1070ba0c@@3PAUCGameFrameHooks@@A ?g_1070ba0c@@3PAUCGameRulesView@@A ?g_1070ba0c@@3PAUCGameRulesVirt@@A ?g_1070ba0c@@3PAUCGameRulesX@@A ?g_1070ba0c@@3PAUCGlobalList1070ba0c@@A ?g_1070ba0c@@3PAUCPTRules_1016be10@@A ?g_1070ba0c@@3PAUCPlayerGameRulesView@@A ?g_1070ba0c@@3PAUCRulesV@@A ?g_1070ba0c@@3PAUCRulesView10176520@@A ?g_1070ba0c@@3PAUCRulesView@@A ?g_1070ba0c@@3PAUCSlots@@A ?g_1070ba0c@@3PAUCSpawnEngine@@A ?g_1070ba0c@@3PAUCUnk1070ba0c@@A ?g_1070ba0c@@3PAUCUnknown101d02c0Iface@@A ?g_1070ba0c@@3PAUCUnknown1070ba0c@@A ?g_1070ba0c@@3PAUCVtblRulesHelper@@A ?g_1070ba0c@@3PAUCWorldRules@@A ?g_1070ba0c@@3PAUColGroups@@A ?g_1070ba0c@@3PAUFlagInterface@@A ?g_1070ba0c@@3PAUGameRulesView@@A ?g_1070ba0c@@3PAUGameRules_t@@A ?g_1070ba0c@@3PAUGlobalSlots20@@A ?g_1070ba0c@@3PAUIUnk1070ba0c@@A ?g_1070ba0c@@3PAUNavFilterGlobal@@A ?g_1070ba0c@@3PAUPhysGlobal@@A ?g_1070ba0c@@3PAURulesSlots@@A ?g_1070ba0c@@3PAURulesView@@A ?g_1070ba0c@@3PAURulesX@@A ?g_1070ba0c@@3PAUS1070ba0c@@A ?g_1070ba0c@@3PAUSRules@@A ?g_1070ba0c@@3PAUSRulesView@@A ?g_1070ba0c@@3PAUS_Eng@@A ?g_1070ba0c@@3PAUUCDRules@@A ?g_1070ba0c@@3PAVCGameRules@@A ?g_1070ba0c@@3PAVCUnk1070ba0c@@A ?g_1070ba0c@@3PAVCUnknown1070ba0c@@A ?g_1070ba0c@@3PAXA
#pragma bss_seg(".bss$1070ba0c0")
CGameRulesBlood *g_1070ba0c;
#pragma bss_seg(".bss$1070ba0c1")
char pcd_fill_1070ba0c[16];
#pragma bss_seg()
// 0x1070ba24 +4
int g_1070ba24;
// 0x1070ba28 +4
int g_1070ba28;
// 0x1070ba2c +8; also ?g_1070ba2c@@3EA ?g_1070ba2c@@3_NA
#pragma bss_seg(".bss$1070ba2c0")
char g_1070ba2c;
#pragma bss_seg(".bss$1070ba2c1")
char pcd_fill_1070ba2c[7];
#pragma bss_seg()
// 0x1070ba34 +4
int g_1070ba34;
// 0x1070ba38 +4; also ?g_1070ba38@@3IA
int g_1070ba38;
// 0x1070ba3c +4
int g_1070ba3c;
// 0x1070ba40 +24; also ?g_1070ba40@@3VVector@@A
char g_1070ba40[24];
// 0x1070ba58 +12; also ?g_1070ba58@@3PAUHINSTANCE__@@A
#pragma bss_seg(".bss$1070ba580")
int g_1070ba58;
#pragma bss_seg(".bss$1070ba581")
char pcd_fill_1070ba58[8];
#pragma bss_seg()
// 0x1070bcfc +680
char g_1070bcfc[680];
// 0x1070c4ac +4; also ?g_1070c4ac@lifted@@3HA
int g_1070c4ac;
// 0x1070c4b0 +4; also ?g_1070c4b0@lifted@@3HA
int g_1070c4b0;
// 0x1070c4b4 +8; also ?g_1070c4b4@lifted@@3HA
#pragma bss_seg(".bss$1070c4b40")
int g_1070c4b4;
#pragma bss_seg(".bss$1070c4b41")
char pcd_fill_1070c4b4[4];
#pragma bss_seg()
// 0x1070c4bc +4
InterfaceReg *g_1070c4bc;
// 0x1070c640 +256
char g_1070c640[256];
// 0x1070c740 +256
char g_1070c740[256];
// 0x1070c840 +108; also ?g_1070c840@@3PBDB
char g_1070c840[108];
// 0x1070c8ac +1028
float g_1070c8ac[257];
// 0x1070ccb0 +256
unsigned char g_1070ccb0[256];
// 0x1070cdb0 +1024
float g_1070cdb0[256];
// 0x1070d1b4 +4; also ?g_1070d1b4@@3MA
int g_1070d1b4;
// 0x1070d1b8 +8; also ?g_1070d1b8@@3MA
#pragma bss_seg(".bss$1070d1b80")
int g_1070d1b8;
#pragma bss_seg(".bss$1070d1b81")
char pcd_fill_1070d1b8[4];
#pragma bss_seg()
// 0x1070d1c0 +1024
float g_1070d1c0[256];
// 0x1070d5cc +1028
float g_1070d5cc[257];
// 0x1070d9d4 +4
float g_1070d9d4;
// 0x1070d9d8 +8
#pragma bss_seg(".bss$1070d9d80")
float g_1070d9d8;
#pragma bss_seg(".bss$1070d9d81")
char pcd_fill_1070d9d8[4];
#pragma bss_seg()
// 0x1070d9e0 +1024
float g_1070d9e0[256];
// 0x1070dde0 +16384
float g_1070dde0[4096];
// 0x10711de0 +4096
int g_10711de0[1024];
// 0x10712de0 +4096
int g_10712de0[1024];
// 0x10713df0 +16384
int g_10713df0[4096];
// 0x10717df0 +4
#pragma bss_seg(".bss$10717df00")
bool g_10717df0;
#pragma bss_seg(".bss$10717df01")
char pcd_fill_10717df0[3];
#pragma bss_seg()
// 0x10717df4 +4
float g_10717df4;
// 0x10717df8 +1; also ?g_10717df8@lifted@@3DA
bool g_10717df8;
// 0x10717df9 +1; also ?g_10717df9@lifted@@3DA
bool g_10717df9;
// 0x10717dfa +1; also ?g_10717dfa@lifted@@3DA
bool g_10717dfa;
// 0x10717dfb +9285; also ?g_10717dfb@lifted@@3DA
#pragma bss_seg(".bss$10717dfb0")
bool g_10717dfb;
#pragma bss_seg(".bss$10717dfb1")
char pcd_fill_10717dfb[9284];
#pragma bss_seg()
// 0x1071a240 +4; also ?g_1071a240@@3P6AXPBDH@ZA
int g_1071a240;
// 0x1071a278 +12; also ?g_1071a278@@3HA ?g_1071a278@@3PAUCNotifierView@@A ?g_1071a278@@3PAUCPhysSys@@A ?g_1071a278@@3PAUCSurfaceHolder@@A ?g_1071a278@@3PAUCSurfaceProps1011e940@@A ?g_1071a278@@3PAUCTuningLike@@A ?g_1071a278@@3PAUSSound@@A ?g_1071a278@@3PAUSoundEmitter@@A ?g_1071a278@@3PAVCMoveHelperServer@@A ?g_1071a278@lifted@@3HA
#pragma bss_seg(".bss$1071a2780")
CTouchNotifier *g_1071a278;
#pragma bss_seg(".bss$1071a2781")
char pcd_fill_1071a278[8];
#pragma bss_seg()
// 0x1071a28c +44
int g_1071a28c[11];
// 0x1071a2b8 +104; also ?g_1071a2b8@@3PAPAUS146500@@A
SPoolItem *g_1071a2b8[26];
// 0x1071a32c +64
#pragma bss_seg(".bss$1071a32c0")
CUnknown10738964 *g_1071a32c;
#pragma bss_seg(".bss$1071a32c1")
char pcd_fill_1071a32c[60];
#pragma bss_seg()
// 0x1071a36c +12
#pragma bss_seg(".bss$1071a36c0")
int g_1071a36c;
#pragma bss_seg(".bss$1071a36c1")
char pcd_fill_1071a36c[8];
#pragma bss_seg()
// 0x1071a3bc +8
#pragma bss_seg(".bss$1071a3bc0")
int g_1071a3bc;
#pragma bss_seg(".bss$1071a3bc1")
char pcd_fill_1071a3bc[4];
#pragma bss_seg()
// 0x1071a3ec +4
#pragma bss_seg(".bss$1071a3ec0")
unsigned char g_1071a3ec;
#pragma bss_seg(".bss$1071a3ec1")
char pcd_fill_1071a3ec[3];
#pragma bss_seg()
// 0x1071a3f0 +44; also ?g_1071a3f0@@3UCGameTrace@@A
char g_1071a3f0[44];
// 0x1071a41c +40
#pragma bss_seg(".bss$1071a41c0")
float g_1071a41c;
#pragma bss_seg(".bss$1071a41c1")
char pcd_fill_1071a41c[36];
#pragma bss_seg()
// 0x1071a444 +4
int g_1071a444;
// 0x1071a44c +64; also ?g_1071a44c@@3PAUCPickFlag@@A ?g_1071a44c@@3PAUCThrowVis@@A ?g_1071a44c@@3PAUGGVar@@A
#pragma bss_seg(".bss$1071a44c0")
CRelVis *g_1071a44c;
#pragma bss_seg(".bss$1071a44c1")
char pcd_fill_1071a44c[60];
#pragma bss_seg()
// 0x1071a4a4 +64; also ?g_1071a4a4@@3PAUCThrowVis@@A
#pragma bss_seg(".bss$1071a4a40")
CRelVis *g_1071a4a4;
#pragma bss_seg(".bss$1071a4a41")
char pcd_fill_1071a4a4[60];
#pragma bss_seg()
// 0x1071a4e4 +30004
#pragma bss_seg(".bss$1071a4e40")
int g_1071a4e4;
#pragma bss_seg(".bss$1071a4e41")
char pcd_fill_1071a4e4[30000];
#pragma bss_seg()
// 0x10721a1c +6168
#pragma bss_seg(".bss$10721a1c0")
GGVar *g_10721a1c;
#pragma bss_seg(".bss$10721a1c1")
char pcd_fill_10721a1c[6164];
#pragma bss_seg()
// 0x107238e4 +4
int g_107238e4;
// 0x107238f4 +64
#pragma bss_seg(".bss$107238f40")
CUnknown10074f70_Global *g_107238f4;
#pragma bss_seg(".bss$107238f41")
char pcd_fill_107238f4[60];
#pragma bss_seg()
// 0x10723934 +4; also ?g_10723934@@3PAXA
S10723934 *g_10723934;
// 0x10723938 +4; also ?g_10723938@@3PAUIObj_t@@A ?g_10723938@@3PAUIPhysObjStub@@A ?g_10723938@@3PAVIPhysicsObject@@A ?g_10723938@@3PAXA
int g_10723938;
// 0x1072393c +4; also ?g_1072393c@@3PAUCKeyParserFactory102e210@@A ?g_1072393c@@3PAUCKeyParserFactoryView@@A ?g_1072393c@@3PAUCRagdollCollision@@A ?g_1072393c@@3PAUIKeyParserFactory@@A ?g_1072393c@@3PAUIMapSys@@A ?g_1072393c@@3PAUIPhysicsEnv@@A ?g_1072393c@@3PAUKVSource@@A ?g_1072393c@@3PAUPhysCollideSaveView@@A ?g_1072393c@@3PAUPhysCollideV@@A ?g_1072393c@@3PAURagPhysCollision@@A ?g_1072393c@@3PAUSBoundsCollision@@A ?g_1072393c@@3PAUSurroundView@@A ?g_1072393c@@3PAVCPhysCollideIface@@A ?g_1072393c@@3PAVIPhysicsCollision@@A ?g_1072393c@@3PAXA
IPhysicsCollisionV *g_1072393c;
// 0x10723940 +4; also ?g_10723940@@3HA ?g_10723940@@3PAUCAttachEnvView@@A ?g_10723940@@3PAUCCannisterPhysEnv@@A ?g_10723940@@3PAUCCannisterPhysEnvView@@A ?g_10723940@@3PAUCPhysEnv15View@@A ?g_10723940@@3PAUCPhysEnvX@@A ?g_10723940@@3PAUCPhysTracer@@A ?g_10723940@@3PAUCUnk10158520B@@A ?g_10723940@@3PAUCWeaponHandleOwner@@A ?g_10723940@@3PAUCWindSystemX@@A ?g_10723940@@3PAUEngX@@A ?g_10723940@@3PAUEngineH@@A ?g_10723940@@3PAUIApi@@A ?g_10723940@@3PAUIPhysEnvBS@@A ?g_10723940@@3PAUIPhysEnvCreate@@A ?g_10723940@@3PAUIPhysEnvLike@@A ?g_10723940@@3PAUIPhysEnvView@@A ?g_10723940@@3PAUIPhysicsEnvironmentLike@@A ?g_10723940@@3PAUIPhysicsEnvironmentStub@@A ?g_10723940@@3PAUIPhysicsEnvironment_10029780@@A ?g_10723940@@3PAUIThing@@A ?g_10723940@@3PAUITracerView@@A ?g_10723940@@3PAUIUnk10723940@@A ?g_10723940@@3PAUPhysCustomView@@A ?g_10723940@@3PAUPhysEnv@@A ?g_10723940@@3PAUPhysEnvStub@@A ?g_10723940@@3PAUPhysEnvView@@A ?g_10723940@@3PAUPhysSaveEnv@@A ?g_10723940@@3PAUPhysTracer@@A ?g_10723940@@3PAUS10723940@@A ?g_10723940@@3PAUSEnv@@A ?g_10723940@@3PAUSPhysEnv@@A ?g_10723940@@3PAUSPhysEnvironment@@A ?g_10723940@@3PAVCMotorPhysEnvView@@A ?g_10723940@@3PAVCPhysCallbackIface@@A ?g_10723940@@3PAVCPhysEnvIface@@A ?g_10723940@@3PAVIPhysEnvX@@A ?g_10723940@@3PAXA
IPhysicsEnvironment *g_10723940;
// 0x10723944 +4; also ?g_10723944@@3HA ?g_10723944@@3PAUCFrSurfaceProps@@A ?g_10723944@@3PAUCSurfPropsView@@A ?g_10723944@@3PAUCSurfaceProps102e7270@@A ?g_10723944@@3PAUCSurfaceProps@@A ?g_10723944@@3PAUFlameLookupSlots@@A ?g_10723944@@3PAUIReg@@A ?g_10723944@@3PAUISurfacePropsIndex@@A ?g_10723944@@3PAUIUnk10723944@@A ?g_10723944@@3PAUPHSurfaceProps@@A ?g_10723944@@3PAUPhysEnv@@A ?g_10723944@@3PAUPhysPropsView@@A ?g_10723944@@3PAUPhysSurfaceView@@A ?g_10723944@@3PAUSPhysProps@@A ?g_10723944@@3PAUSPhysicsProps@@A ?g_10723944@@3PAUSndTable@@A ?g_10723944@@3PAUSndTblV@@A ?g_10723944@@3PAUSurfaceProps@@A ?g_10723944@@3PAVCPhysSurfacePropsIface@@A ?g_10723944@@3PAVIPhysicsSurfaceProps@@A ?g_10723944@lifted@@3HA
S1002cd50Props *g_10723944;
// 0x10723948 +28; also ?g_10723948@@3HA ?g_10723948@@3PAUCIface10723948@@A ?g_10723948@@3PAUCUnknown10158b40Obj@@A ?g_10723948@@3PAVCUnknown1070b244@@A ?g_10723948@@3PAVIPlaceholder10158bc0@@A ?g_10723948@@3PAVIPlaceholder10158c00@@A
#pragma bss_seg(".bss$107239480")
ColHash *g_10723948;
#pragma bss_seg(".bss$107239481")
char pcd_fill_10723948[24];
#pragma bss_seg()
// 0x10723984 +64
#pragma bss_seg(".bss$107239840")
ConVar *g_10723984;
#pragma bss_seg(".bss$107239841")
char pcd_fill_10723984[60];
#pragma bss_seg()
// 0x10724ef0 +264
char g_10724ef0[264];
// 0x10724ffc +68
#pragma bss_seg(".bss$10724ffc0")
CGlobal1017dd80 *g_10724ffc;
#pragma bss_seg(".bss$10724ffc1")
char pcd_fill_10724ffc[64];
#pragma bss_seg()
// 0x107250d4 +68
#pragma bss_seg(".bss$107250d40")
CUnknown107250d4 *g_107250d4;
#pragma bss_seg(".bss$107250d41")
char pcd_fill_107250d4[64];
#pragma bss_seg()
// 0x1072511c +68
#pragma bss_seg(".bss$1072511c0")
ConVar *g_1072511c;
#pragma bss_seg(".bss$1072511c1")
char pcd_fill_1072511c[64];
#pragma bss_seg()
// 0x107251ac +64
#pragma bss_seg(".bss$107251ac0")
ConVar *g_107251ac;
#pragma bss_seg(".bss$107251ac1")
char pcd_fill_107251ac[60];
#pragma bss_seg()
// 0x107255e4 +4
int g_107255e4;
// 0x107255ec +68
#pragma bss_seg(".bss$107255ec0")
ConVar *g_107255ec;
#pragma bss_seg(".bss$107255ec1")
char pcd_fill_107255ec[64];
#pragma bss_seg()
// 0x10725634 +64
#pragma bss_seg(".bss$107256340")
ConVar *g_10725634;
#pragma bss_seg(".bss$107256341")
char pcd_fill_10725634[60];
#pragma bss_seg()
// 0x10725804 +68
#pragma bss_seg(".bss$107258040")
ConVar *g_10725804;
#pragma bss_seg(".bss$107258041")
char pcd_fill_10725804[64];
#pragma bss_seg()
// 0x107258dc +64; also ?g_107258dc@@3PAUCCSActsFlag@@A ?g_107258dc@@3PAUCConVarLike@@A ?g_107258dc@@3PAUCCopGlobal107258dc@@A ?g_107258dc@@3PAUCUnk107258dc@@A ?g_107258dc@@3PAUS107258dc@@A ?g_107258dc@@3PAVCDevCvar_t@@A
#pragma bss_seg(".bss$107258dc0")
ConVar *g_107258dc;
#pragma bss_seg(".bss$107258dc1")
char pcd_fill_107258dc[60];
#pragma bss_seg()
// 0x1072594c +68
#pragma bss_seg(".bss$1072594c0")
CConVarLike *g_1072594c;
#pragma bss_seg(".bss$1072594c1")
char pcd_fill_1072594c[64];
#pragma bss_seg()
// 0x10725bcc +20
#pragma bss_seg(".bss$10725bcc0")
CVarV *g_10725bcc;
#pragma bss_seg(".bss$10725bcc1")
char pcd_fill_10725bcc[16];
#pragma bss_seg()
// 0x10725be0 +48
#pragma bss_seg(".bss$10725be00")
int g_10725be0;
#pragma bss_seg(".bss$10725be01")
char pcd_fill_10725be0[44];
#pragma bss_seg()
// 0x10725cec +68
#pragma bss_seg(".bss$10725cec0")
CConVarView10725cec *g_10725cec;
#pragma bss_seg(".bss$10725cec1")
char pcd_fill_10725cec[64];
#pragma bss_seg()
// 0x10725d9c +68
#pragma bss_seg(".bss$10725d9c0")
CVarV *g_10725d9c;
#pragma bss_seg(".bss$10725d9c1")
char pcd_fill_10725d9c[64];
#pragma bss_seg()
// 0x10725de4 +68
#pragma bss_seg(".bss$10725de40")
CUnk10725de4 *g_10725de4;
#pragma bss_seg(".bss$10725de41")
char pcd_fill_10725de4[64];
#pragma bss_seg()
// 0x10725e74 +68
#pragma bss_seg(".bss$10725e740")
CUnknown10725e74 *g_10725e74;
#pragma bss_seg(".bss$10725e741")
char pcd_fill_10725e74[64];
#pragma bss_seg()
// 0x10725ebc +68
#pragma bss_seg(".bss$10725ebc0")
CGameTimeScale *g_10725ebc;
#pragma bss_seg(".bss$10725ebc1")
char pcd_fill_10725ebc[64];
#pragma bss_seg()
// 0x10725f74 +68
#pragma bss_seg(".bss$10725f740")
CCopTimerView *g_10725f74;
#pragma bss_seg(".bss$10725f741")
char pcd_fill_10725f74[64];
#pragma bss_seg()
// 0x10725fbc +72
#pragma bss_seg(".bss$10725fbc0")
CUnk10725fbc *g_10725fbc;
#pragma bss_seg(".bss$10725fbc1")
char pcd_fill_10725fbc[68];
#pragma bss_seg()
// 0x10726004 +4
#pragma bss_seg(".bss$107260040")
char g_10726004;
#pragma bss_seg(".bss$107260041")
char pcd_fill_10726004[3];
#pragma bss_seg()
// 0x10726008 +4
int g_10726008;
// 0x1072600c +4
int g_1072600c;
// 0x10726010 +4
int g_10726010;
// 0x10726014 +4
int g_10726014;
// 0x10726018 +4
int g_10726018;
// 0x1072601c +4
int g_1072601c;
// 0x10726020 +4
int g_10726020;
// 0x10726024 +4
int g_10726024;
// 0x10726028 +8
#pragma bss_seg(".bss$107260280")
int g_10726028;
#pragma bss_seg(".bss$107260281")
char pcd_fill_10726028[4];
#pragma bss_seg()
// 0x10726030 +4
int g_10726030;
// 0x10726034 +4
int g_10726034;
// 0x10726038 +4
int g_10726038;
// 0x1072603c +4
int g_1072603c;
// 0x10726040 +8
#pragma bss_seg(".bss$107260400")
int g_10726040;
#pragma bss_seg(".bss$107260401")
char pcd_fill_10726040[4];
#pragma bss_seg()
// 0x10726048 +4
int g_10726048;
// 0x1072604c +4
int g_1072604c;
// 0x10726050 +4
int g_10726050;
// 0x10726054 +4
int g_10726054;
// 0x10726058 +4
int g_10726058;
// 0x1072605c +4
int g_1072605c;
// 0x10726060 +4
int g_10726060;
// 0x10726064 +4
int g_10726064;
// 0x10726068 +4
int g_10726068;
// 0x1072606c +4
int g_1072606c;
// 0x10726070 +4
int g_10726070;
// 0x10726074 +4
int g_10726074;
// 0x10726078 +4
int g_10726078;
// 0x1072607c +4
int g_1072607c;
// 0x10726080 +4
int g_10726080;
// 0x10726084 +4
int g_10726084;
// 0x10726088 +4
int g_10726088;
// 0x1072608c +4
int g_1072608c;
// 0x10726090 +4
int g_10726090;
// 0x10726094 +4
int g_10726094;
// 0x10726098 +4
int g_10726098;
// 0x1072609c +4
int g_1072609c;
// 0x107260a0 +8; also ?g_107260a0@@3PAXA
#pragma bss_seg(".bss$107260a00")
int g_107260a0;
#pragma bss_seg(".bss$107260a01")
char pcd_fill_107260a0[4];
#pragma bss_seg()
// 0x107260a8 +4
float g_107260a8;
// 0x107260ac +4; also ?g_107260ac@@3HA
CBaseEntity *g_107260ac;
// 0x107260b0 +2056
int g_107260b0[514];
// 0x107278b8 +8
#pragma bss_seg(".bss$107278b80")
float g_107278b8;
#pragma bss_seg(".bss$107278b81")
char pcd_fill_107278b8[4];
#pragma bss_seg()
// 0x107284bc +4
CBaseEntity *g_107284bc;
// 0x107284c0 +448
char g_107284c0[448];
// 0x1072a498 +2148; also ?g_1072a498@@3HA ?g_1072a498@@3PAHA
#pragma bss_seg(".bss$1072a4980")
CSkyCamera *g_1072a498;
#pragma bss_seg(".bss$1072a4981")
char pcd_fill_1072a498[2144];
#pragma bss_seg()
// 0x1072b020 +24; also ?g_1072b020@@3UCBreakModelTree@@A
char g_1072b020[24];
// 0x1072b2b4 +64
#pragma bss_seg(".bss$1072b2b40")
PyMgr *g_1072b2b4;
#pragma bss_seg(".bss$1072b2b41")
char pcd_fill_1072b2b4[60];
#pragma bss_seg()
// 0x1072b31c +4; also ?g_1072b31c@@3PAXA
PyObject *g_1072b31c;
// 0x1072b360 +4; also ?g_1072b360@@3PAUPyObject@@A
int g_1072b360;
// 0x1072b364 +8; also ?g_1072b364@@3HA
#pragma bss_seg(".bss$1072b3640")
PyObject *g_1072b364;
#pragma bss_seg(".bss$1072b3641")
char pcd_fill_1072b364[4];
#pragma bss_seg()
// 0x1072b36c +4; also ?g_1072b36c@@3PAUPyObject@@A
int g_1072b36c;
// 0x1072b370 +4; also ?g_1072b370@@3HA ?g_1072b370@@3PAUPyObjX@@A ?g_1072b370@@3PAUPyObject@@A ?g_1072b370@@3PAXA ?g_1072b370@lifted@@3HA
PyObj *g_1072b370;
// 0x1072b374 +4; also ?g_1072b374@@3PAHA ?g_1072b374@@3PAUPyObjX@@A ?g_1072b374@@3PAUPyObject@@A ?g_1072b374@lifted@@3HA
PyObj *g_1072b374;
// 0x1072b378 +48
char g_1072b378[48];
// 0x1072b3ac +80
#pragma bss_seg(".bss$1072b3ac0")
IPhysTune *g_1072b3ac;
#pragma bss_seg(".bss$1072b3ac1")
char pcd_fill_1072b3ac[76];
#pragma bss_seg()
// 0x1072b408 +4
CBaseEntity *g_1072b408;
// 0x1072b40c +1364
#pragma bss_seg(".bss$1072b40c0")
int g_1072b40c;
#pragma bss_seg(".bss$1072b40c1")
char pcd_fill_1072b40c[1360];
#pragma bss_seg()
// 0x1072b99c +292
char g_1072b99c[292];
// 0x1072bb84 +84; also ?g_1072bb84@@3PAUCCineConVarView@@A ?g_1072bb84@@3PAUCDevCheck@@A
int g_1072bb84[21];
// 0x1072bbd8 +4; also ?g_1072bbd8@lifted@@3HA
ServerClass *g_1072bbd8;
// 0x1072bc00 +8; also ?g_1072bc00@@3VCSoundscapeSystem@@A
char g_1072bc00[8];
// 0x1072bc10 +16
#pragma bss_seg(".bss$1072bc100")
int g_1072bc10;
#pragma bss_seg(".bss$1072bc101")
char pcd_fill_1072bc10[12];
#pragma bss_seg()
// 0x1072bc24 +4
int g_1072bc24;
// 0x1072bc28 +4
int g_1072bc28;
// 0x1072bc2c +4
int g_1072bc2c;
// 0x1072bc30 +4
int g_1072bc30;
// 0x1072bc34 +4
int g_1072bc34;
// 0x1072bc38 +4
int g_1072bc38;
// 0x1072bc3c +4
int g_1072bc3c;
// 0x1072bc40 +24
#pragma bss_seg(".bss$1072bc400")
int g_1072bc40;
#pragma bss_seg(".bss$1072bc401")
char pcd_fill_1072bc40[20];
#pragma bss_seg()
// 0x1072bc58 +4
int g_1072bc58;
// 0x1072bc5c +40
#pragma bss_seg(".bss$1072bc5c0")
int g_1072bc5c;
#pragma bss_seg(".bss$1072bc5c1")
char pcd_fill_1072bc5c[36];
#pragma bss_seg()
// 0x1072bc84 +4
int g_1072bc84;
// 0x1072bc88 +4
namespace v438 { int g_1072bc88; }
// 0x1072bc8c +8
#pragma bss_seg(".bss$1072bc8c0")
int g_1072bc8c;
#pragma bss_seg(".bss$1072bc8c1")
char pcd_fill_1072bc8c[4];
#pragma bss_seg()
// 0x1072bc94 +4; also ?g_1072bc94@@3UCPhysFrictionParams@@A
char g_1072bc94[4];
// 0x1072bc98 +4; also ?g_1072bc98@@3UCPhysSoundParams@@A
char g_1072bc98[4];
// 0x1072bc9c +4
int g_1072bc9c;
// 0x1072bca0 +4
int g_1072bca0;
// 0x1072bca4 +4
int g_1072bca4;
// 0x1072bca8 +1
unsigned char g_1072bca8;
// 0x1072bca9 +1
unsigned char g_1072bca9;
// 0x1072bcaa +1
unsigned char g_1072bcaa;
// 0x1072bcab +1
unsigned char g_1072bcab;
// 0x1072bcac +1
unsigned char g_1072bcac;
// 0x1072bcad +1
unsigned char g_1072bcad;
// 0x1072bcae +1; also ?g_1072bcae@@3UByteBox@@A
char g_1072bcae[1];
// 0x1072bcaf +1
char g_1072bcaf;
// 0x1072bcb0 +6
#pragma bss_seg(".bss$1072bcb00")
char g_1072bcb0;
#pragma bss_seg(".bss$1072bcb01")
char pcd_fill_1072bcb0[5];
#pragma bss_seg()
// 0x1072bcb6 +1
char g_1072bcb6;
// 0x1072bcb7 +10
#pragma bss_seg(".bss$1072bcb70")
unsigned char g_1072bcb7;
#pragma bss_seg(".bss$1072bcb71")
char pcd_fill_1072bcb7[9];
#pragma bss_seg()
// 0x1072bcc1 +1
char g_1072bcc1;
// 0x1072bcc2 +1
namespace v438 { char g_1072bcc2; }
// 0x1072bcc3 +4
#pragma bss_seg(".bss$1072bcc30")
char g_1072bcc3;
#pragma bss_seg(".bss$1072bcc31")
char pcd_fill_1072bcc3[3];
#pragma bss_seg()
// 0x1072bcc7 +1
char g_1072bcc7;
// 0x1072bcc8 +1
char g_1072bcc8;
// 0x1072bcc9 +3
#pragma bss_seg(".bss$1072bcc90")
char g_1072bcc9;
#pragma bss_seg(".bss$1072bcc91")
char pcd_fill_1072bcc9[2];
#pragma bss_seg()
// 0x1072bccc +12
int g_1072bccc[3];
// 0x1072bcd8 +68
#pragma bss_seg(".bss$1072bcd80")
int g_1072bcd8;
#pragma bss_seg(".bss$1072bcd81")
char pcd_fill_1072bcd8[64];
#pragma bss_seg()
// 0x1072bd1c +60
#pragma bss_seg(".bss$1072bd1c0")
float g_1072bd1c;
#pragma bss_seg(".bss$1072bd1c1")
char pcd_fill_1072bd1c[56];
#pragma bss_seg()
// 0x1072bd5c +64
#pragma bss_seg(".bss$1072bd5c0")
CDevInfo *g_1072bd5c;
#pragma bss_seg(".bss$1072bd5c1")
char pcd_fill_1072bd5c[60];
#pragma bss_seg()
// 0x1072bf50 +32
char g_1072bf50[32];
// 0x1072bf70 +32
char g_1072bf70[32];
// 0x1072bf90 +72
char g_1072bf90[72];
// 0x1072bfd8 +64
char g_1072bfd8[64];
// 0x1072c018 +32
char g_1072c018[32];
// 0x1072c038 +32
char g_1072c038[32];
// 0x1072c058 +76
char g_1072c058[76];
// 0x1072c0a4 +36
char g_1072c0a4[36];
// 0x1072c0c8 +512
char g_1072c0c8[512];
// 0x1072c2c8 +64
char g_1072c2c8[64];
// 0x1072c308 +32
char g_1072c308[32];
// 0x1072c328 +276
char g_1072c328[276];
// 0x1072c464 +16; also ?g_1072c464@@3HA ?g_1072c464@@3PADA ?g_1072c464@@3PAUCDebugX@@A ?g_1072c464@@3PAUCSoundEntData@@A ?g_1072c464@@3PAUCSoundEntView@@A ?g_1072c464@@3PAUCUnk101bb2e0@@A ?g_1072c464@@3PAXA
#pragma bss_seg(".bss$1072c4640")
CSoundEnt *g_1072c464;
#pragma bss_seg(".bss$1072c4641")
char pcd_fill_1072c464[12];
#pragma bss_seg()
// 0x1072c540 +444; also ?g_1072c540@@3UCTargetFinder@@A ?g_1072c540@@3UStealthRulesV@@A ?g_1072c540@@3VCStealthKillRules@@A
char g_1072c540[444];
// 0x1072c72c +188
#pragma bss_seg(".bss$1072c72c0")
CRules1072c72c *g_1072c72c;
#pragma bss_seg(".bss$1072c72c1")
char pcd_fill_1072c72c[184];
#pragma bss_seg()
// 0x1072ca84 +140
char g_1072ca84[140];
// 0x1072cb20 +32; also ?g_1072cb20@@3VVector@@A
char g_1072cb20[32];
// 0x1072cb40 +8
#pragma bss_seg(".bss$1072cb400")
float g_1072cb40;
#pragma bss_seg(".bss$1072cb401")
char pcd_fill_1072cb40[4];
#pragma bss_seg()
// 0x1072cb48 +20
#pragma bss_seg(".bss$1072cb480")
int g_1072cb48;
#pragma bss_seg(".bss$1072cb481")
char pcd_fill_1072cb48[16];
#pragma bss_seg()
// 0x1072cb5c +276; also ?g_1072cb5c@@3HA
#pragma bss_seg(".bss$1072cb5c0")
unsigned int g_1072cb5c;
#pragma bss_seg(".bss$1072cb5c1")
char pcd_fill_1072cb5c[272];
#pragma bss_seg()
// 0x1072cda8 +8
#pragma bss_seg(".bss$1072cda80")
int g_1072cda8;
#pragma bss_seg(".bss$1072cda81")
char pcd_fill_1072cda8[4];
#pragma bss_seg()
// 0x1072cdb0 +72
#pragma bss_seg(".bss$1072cdb00")
CRandomSpawnFactory *g_1072cdb0;
#pragma bss_seg(".bss$1072cdb01")
char pcd_fill_1072cdb0[68];
#pragma bss_seg()
// 0x1072cefc +68; also ?g_1072cefc@lifted@@3HA
#pragma bss_seg(".bss$1072cefc0")
ShutdownNode_t *g_1072cefc;
#pragma bss_seg(".bss$1072cefc1")
char pcd_fill_1072cefc[64];
#pragma bss_seg()
// 0x1072cf44 +36
char g_1072cf44[36];
// 0x1072cf78 +32
char g_1072cf78[32];
// 0x1072cfcc +68; also ?g_1072cfcc@@3PAVCTriggerBrushConVar@@A
#pragma bss_seg(".bss$1072cfcc0")
CTriggerBrushConVar *g_1072cfcc;
#pragma bss_seg(".bss$1072cfcc1")
char pcd_fill_1072cfcc[64];
#pragma bss_seg()
// 0x1072d024 +100
#pragma bss_seg(".bss$1072d0240")
namespace lifted { char g_1072d024; }
#pragma bss_seg(".bss$1072d0241")
char pcd_fill_1072d024[99];
#pragma bss_seg()
// 0x1072d4b8 +1024
char g_1072d4b8[1024];
// 0x1072d8b8 +8192
char g_1072d8b8[8192];
// 0x1072f8b8 +8192
unsigned char g_1072f8b8[8192];
// 0x107318bc +84; also ?g_107318bc@@3PAUPyScriptView@@A ?g_107318bc@@3PAUSConsoleVarView@@A ?g_107318bc@@3PAVCDevFlagObj@@A ?g_107318bc@@3PAVCUnknown10738964@@A
#pragma bss_seg(".bss$107318bc0")
PyHost *g_107318bc;
#pragma bss_seg(".bss$107318bc1")
char pcd_fill_107318bc[80];
#pragma bss_seg()
// 0x10731918 +8192
char g_10731918[8192];
// 0x10733918 +4
int g_10733918;
// 0x1073391c +4
int g_1073391c;
// 0x10733920 +8
#pragma bss_seg(".bss$107339200")
float g_10733920;
#pragma bss_seg(".bss$107339201")
char pcd_fill_10733920[4];
#pragma bss_seg()
// 0x10733928 +8208
char g_10733928[8208];
// 0x10735938 +1024
char g_10735938[1024];
// 0x10735d38 +1
char g_10735d38;
// 0x10735d39 +7207
#pragma bss_seg(".bss$10735d390")
char g_10735d39;
#pragma bss_seg(".bss$10735d391")
char pcd_fill_10735d39[7206];
#pragma bss_seg()
// 0x10737960 +4096; also ?g_10737960@@3PAY0EAA@DA
char g_10737960[4096];
// 0x10738964 +64; also ?g_10738964@@3PAUCDebugCvar@@A ?g_10738964@@3PAUConVarX@@A ?g_10738964@@3PAUDbgCvarV@@A ?g_10738964@@3PAUIFireClient@@A ?g_10738964@@3PAUIHullClient102e6290@@A ?g_10738964@@3PAUIHullClient@@A ?g_10738964@@3PAVConVar@@A
#pragma bss_seg(".bss$107389640")
CUnknown10738964 *g_10738964;
#pragma bss_seg(".bss$107389641")
char pcd_fill_10738964[60];
#pragma bss_seg()
// 0x107389a4 +844
#pragma bss_seg(".bss$107389a40")
int g_107389a4;
#pragma bss_seg(".bss$107389a41")
char pcd_fill_107389a4[840];
#pragma bss_seg()
// 0x10738d14 +236
#pragma bss_seg(".bss$10738d140")
int g_10738d14;
#pragma bss_seg(".bss$10738d141")
char pcd_fill_10738d14[232];
#pragma bss_seg()
// 0x10738f38 +264
char g_10738f38[264];
// 0x10739040 +128
char g_10739040[128];
// 0x107390c0 +128
char g_107390c0[128];
// 0x10739198 +4; also ?g_10739198@@3PBDB
char g_10739198[4];
// 0x1073919c +36; also ?g_1073919c@@3PBDB
char g_1073919c[36];
// 0x107391c0 +412
char g_107391c0[412];
// 0x1073935c +4
int g_1073935c;
// 0x10739360 +4
int g_10739360;
// 0x10739364 +40
int g_10739364[10];
// 0x1073938c +120; also ?g_1073938c@@3P6AXPAVCUnknown101d88b0@@@ZA
#pragma bss_seg(".bss$1073938c0")
int g_1073938c;
#pragma bss_seg(".bss$1073938c1")
char pcd_fill_1073938c[116];
#pragma bss_seg()
// 0x10739404 +4
unsigned int g_10739404;
// 0x10739414 +4
unsigned int g_10739414;
// 0x10739418 +96
char g_10739418[96];
// 0x10739478 +4
unsigned int g_10739478;
// 0x10739484 +1392
#pragma bss_seg(".bss$107394840")
unsigned int g_10739484;
#pragma bss_seg(".bss$107394841")
char pcd_fill_10739484[1388];
#pragma bss_seg()
// 0x10739a25 +3
#pragma bss_seg(".bss$10739a250")
unsigned char g_10739a25;
#pragma bss_seg(".bss$10739a251")
char pcd_fill_10739a25[2];
#pragma bss_seg()
// 0x10739a48 +4
#pragma bss_seg(".bss$10739a480")
unsigned char g_10739a48;
#pragma bss_seg(".bss$10739a481")
char pcd_fill_10739a48[3];
#pragma bss_seg()
// 0x10739a64 +4
#pragma bss_seg(".bss$10739a640")
unsigned char g_10739a64;
#pragma bss_seg(".bss$10739a641")
char pcd_fill_10739a64[3];
#pragma bss_seg()
// 0x10739a68 +4
int g_10739a68;
// 0x10739a6c +8
#pragma bss_seg(".bss$10739a6c0")
int g_10739a6c;
#pragma bss_seg(".bss$10739a6c1")
char pcd_fill_10739a6c[4];
#pragma bss_seg()
// 0x10739a74 +4; also ?g_10739a74@@3PAUCParticleGlobals@@A ?g_10739a74@@3PAUCSoundOwnerView@@A ?g_10739a74@@3PAUSDisc@@A ?g_10739a74@@3PAVCUnknown101e0940@@A ?g_10739a74@@3PAVCUnknown101e09c0@@A
CUnknown101e0f00Entry *g_10739a74;
// 0x10739a78 +4; also ?g_10739a78@@3PAVIKVNodeView@@A
CVFeatKV *g_10739a78;
// 0x10739a7c +4
int g_10739a7c;
// 0x10739a80 +344
#pragma bss_seg(".bss$10739a800")
int g_10739a80;
#pragma bss_seg(".bss$10739a801")
char pcd_fill_10739a80[340];
#pragma bss_seg()
// 0x10739d18 +8; also ?g_10739d18@@3PBDB
char g_10739d18[8];
// 0x10739d20 +4
int g_10739d20;
// 0x10739d24 +628
CVFeat_t *g_10739d24[157];
// 0x10739f98 +4
float g_10739f98;
// 0x10739f9c +4
float g_10739f9c;
// 0x10739fa0 +4
float g_10739fa0;
// 0x10739fa4 +4
float g_10739fa4;
// 0x10739fa8 +4
float g_10739fa8;
// 0x10739fac +340
#pragma bss_seg(".bss$10739fac0")
float g_10739fac;
#pragma bss_seg(".bss$10739fac1")
char pcd_fill_10739fac[336];
#pragma bss_seg()
// 0x1073a144 +328; also ?g_1073a144@@3P6AXHHHH@ZA
#pragma bss_seg(".bss$1073a1440")
int g_1073a144;
#pragma bss_seg(".bss$1073a1441")
char pcd_fill_1073a144[324];
#pragma bss_seg()
// 0x1073a290 +28
#pragma bss_seg(".bss$1073a2900")
int g_1073a290;
#pragma bss_seg(".bss$1073a2901")
char pcd_fill_1073a290[24];
#pragma bss_seg()
// 0x1073a2b8 +8; also ?g_1073a2b8@@3PBDB
char g_1073a2b8[8];
// 0x1073a2c0 +4
int g_1073a2c0;
// 0x1073a2c4 +4; also ?g_1073a2c4@@3PAPAUCBotchName@@A ?g_1073a2c4@@3PAPAVCUnknown101eb820@@A
CEntryX * *g_1073a2c4;
// 0x1073a2d4 +8; also ?g_1073a2d4@@3PBDB
char g_1073a2d4[8];
// 0x1073a2dc +4
int g_1073a2dc;
// 0x1073a2e0 +4; also ?g_1073a2e0@@3PAPAHA ?g_1073a2e0@@3PAPAUSectionRec@@A ?g_1073a2e0@@3PAPAVCUnknown101eac50@@A
CEntryY * *g_1073a2e0;
// 0x1073a2f0 +8; also ?g_1073a2f0@@3PBDB
char g_1073a2f0[8];
// 0x1073a2f8 +4
int g_1073a2f8;
// 0x1073a2fc +4; also ?g_1073a2fc@@3PAPAUWeaponNamedRec@@A ?g_1073a2fc@@3PAPAVCKeyHolder@@A
SNameEntry * *g_1073a2fc;
// 0x1073a30c +8; also ?g_1073a30c@@3PBDB
char g_1073a30c[8];
// 0x1073a314 +4
int g_1073a314;
// 0x1073a318 +4; also ?g_1073a318@@3PAPAVCUnknown101eccd0@@A
SNamedEntry10203660 * *g_1073a318;
// 0x1073a328 +8; also ?g_1073a328@@3PBDB
char g_1073a328[8];
// 0x1073a330 +4; also ?g_1073a330@@3UCNameTableX@@A
int g_1073a330;
// 0x1073a334 +4; also ?g_1073a334@@3PAPAVCEntryZ@@A ?g_1073a334@@3PAPAVCUnknown101eb1d0@@A
SNameEntry10259f80 * *g_1073a334;
// 0x1073a344 +8; also ?g_1073a344@@3PBDB
char g_1073a344[8];
// 0x1073a34c +4
int g_1073a34c;
// 0x1073a350 +4; also ?g_1073a350@@3PAPAUCUnknown101ed510@@A
StatDefault2 * *g_1073a350;
// 0x1073a360 +8; also ?g_1073a360@@3PBDB
char g_1073a360[8];
// 0x1073a368 +4
int g_1073a368;
// 0x1073a36c +4; also ?g_1073a36c@@3PAPAVCUnknown101ec6f0@@A
SNamedEntry10203540 * *g_1073a36c;
// 0x1073a37c +8; also ?g_1073a37c@@3PBDB
char g_1073a37c[8];
// 0x1073a384 +4
int g_1073a384;
// 0x1073a388 +4; also ?g_1073a388@@3PAPAUCUnknown101eda90@@A ?g_1073a388@@3PAPAUWeaponNamedRec@@A
SNameEntry * *g_1073a388;
// 0x1073a38c +4; also ?g_1073a38c@@3P6AXPAVCUnknown101eb7f0@@H@ZA
int g_1073a38c;
// 0x1073a390 +4; also ?g_1073a390@@3P6AXPAXHH@ZA
int g_1073a390;
// 0x1073a394 +4; also ?g_1073a394@@3P6APADHH@ZA
int g_1073a394;
// 0x1073a398 +4; also ?g_1073a398@@3P6APBDPAXHH@ZA
int g_1073a398;
// 0x1073a39c +4; also ?g_1073a39c@@3P6AXPAVCUnknown101ec6c0@@H@ZA
int g_1073a39c;
// 0x1073a3a0 +4; also ?g_1073a3a0@@3P6AXPAVCUnknown101ec690@@H@ZA
int g_1073a3a0;
// 0x1073a3a4 +4; also ?g_1073a3a4@@3P6AXPAVCUnknown101ecb10@@H@ZA
int g_1073a3a4;
// 0x1073a3a8 +4; also ?g_1073a3a8@@3P6AXPAVCUnknown101ecae0@@H@ZA
int g_1073a3a8;
// 0x1073a3ac +4; also ?g_1073a3ac@@3P6ADPAXH@ZA
int g_1073a3ac;
// 0x1073a3b0 +4; also ?g_1073a3b0@@3P6A_NPAXHH@ZA
int g_1073a3b0;
// 0x1073a3b4 +4; also ?g_1073a3b4@@3P6A_NXZA
int g_1073a3b4;
// 0x1073a3b8 +64; also ?g_1073a3b8@@3P6A_NXZA
#pragma bss_seg(".bss$1073a3b80")
int g_1073a3b8;
#pragma bss_seg(".bss$1073a3b81")
char pcd_fill_1073a3b8[60];
#pragma bss_seg()
// 0x1073a41c +64
#pragma bss_seg(".bss$1073a41c0")
CUnknown10924a1c *g_1073a41c;
#pragma bss_seg(".bss$1073a41c1")
char pcd_fill_1073a41c[60];
#pragma bss_seg()
// 0x1073a6dc +228
#pragma bss_seg(".bss$1073a6dc0")
CUnknown10924a1c *g_1073a6dc;
#pragma bss_seg(".bss$1073a6dc1")
char pcd_fill_1073a6dc[224];
#pragma bss_seg()
// 0x1073a7e0 +320
char g_1073a7e0[320];
// 0x1073a920 +128
char g_1073a920[128];
// 0x1073a9a4 +24
#pragma bss_seg(".bss$1073a9a40")
int g_1073a9a4;
#pragma bss_seg(".bss$1073a9a41")
char pcd_fill_1073a9a4[20];
#pragma bss_seg()
// 0x1073a9bc +4
char const * *g_1073a9bc;
// 0x1073a9c0 +20
char const *g_1073a9c0[5];
// 0x1073a9d4 +24
int g_1073a9d4[6];
// 0x1073a9ec +4
int g_1073a9ec;
// 0x1073a9f0 +4
int g_1073a9f0;
// 0x1073a9f4 +76
#pragma bss_seg(".bss$1073a9f40")
int g_1073a9f4;
#pragma bss_seg(".bss$1073a9f41")
char pcd_fill_1073a9f4[72];
#pragma bss_seg()
// 0x1073aa40 +64; also ?g_1073aa40@@3PADA
#pragma bss_seg(".bss$1073aa400")
char g_1073aa40;
#pragma bss_seg(".bss$1073aa401")
char pcd_fill_1073aa40[63];
#pragma bss_seg()
// 0x1073aa80 +8192
#pragma bss_seg(".bss$1073aa800")
int g_1073aa80;
#pragma bss_seg(".bss$1073aa801")
char pcd_fill_1073aa80[8188];
#pragma bss_seg()
// 0x1073ca80 +2048; also ?g_1073ca80@@3PAY0EA@DA
char g_1073ca80[2048];
// 0x1073d2b0 +2080
#pragma bss_seg(".bss$1073d2b00")
int g_1073d2b0;
#pragma bss_seg(".bss$1073d2b01")
char pcd_fill_1073d2b0[2076];
#pragma bss_seg()
// 0x1073dad0 +260
char g_1073dad0[260];
// 0x1073dbe8 +4
int g_1073dbe8;
// 0x1073dbec +16
NameEntry *g_1073dbec[4];
// 0x1073dc3c +4
int g_1073dc3c;
// 0x1073dc40 +16; also ?g_1073dc40@@3PAPAUCNPCTroikaNameRecord@@A ?g_1073dc40@@3PAPAUCNTSoundEntry@@A ?g_1073dc40@@3PAPAUSSoundEntry@@A ?g_1073dc40@@3PAPAUSoundEntry_t@@A ?g_1073dc40@@3PAPAUsub_Rec@@A
SoundRecord *g_1073dc40[4];
// 0x1073dc50 +264
char g_1073dc50[264];
// 0x1074aff8 +128
char g_1074aff8[128];
// 0x1074b078 +264
char g_1074b078[264];
// 0x1074b180 +264
char g_1074b180[264];
// 0x1074b288 +128
char g_1074b288[128];
// 0x1074b344 +4
int g_1074b344;
// 0x1074b348 +11104; also ?g_1074b348@@3PAPAUCPropHackingNameRecord@@A
CKeypadNameRecord *g_1074b348[2776];
// 0x1074dea8 +208
char g_1074dea8[208];
// 0x1074df7c +12
#pragma bss_seg(".bss$1074df7c0")
int g_1074df7c;
#pragma bss_seg(".bss$1074df7c1")
char pcd_fill_1074df7c[8];
#pragma bss_seg()
// 0x1074df88 +12; also ?g_1074df88@@3PBDB
char g_1074df88[12];
// 0x1074df94 +24
char const *g_1074df94[6];
// 0x1074dfac +92; also ?g_1074dfac@@3PBDB
char g_1074dfac[92];
// 0x1074e008 +4
int g_1074e008;
// 0x1074e00c +4
int g_1074e00c;
// 0x1074e010 +4
int g_1074e010;
// 0x1074e014 +4
int g_1074e014;
// 0x1074e018 +4
int g_1074e018;
// 0x1074e01c +4
int g_1074e01c;
// 0x1074e020 +4
int g_1074e020;
// 0x1074e024 +4
int g_1074e024;
// 0x1074e028 +108
#pragma bss_seg(".bss$1074e0280")
int g_1074e028;
#pragma bss_seg(".bss$1074e0281")
char pcd_fill_1074e028[104];
#pragma bss_seg()
// 0x1074e09c +32
#pragma bss_seg(".bss$1074e09c0")
int g_1074e09c;
#pragma bss_seg(".bss$1074e09c1")
char pcd_fill_1074e09c[28];
#pragma bss_seg()
// 0x1074e0bc +60; also ?g_1074e0bc@@3PBDB
char g_1074e0bc[60];
// 0x1074e0f8 +80
char g_1074e0f8[80];
// 0x1074e148 +352
char g_1074e148[352];
// 0x1074e2a8 +68
int g_1074e2a8[17];
// 0x1074e2ec +52; also ?g_1074e2ec@@3PAHA
char g_1074e2ec[52];
// 0x1074e320 +336
char g_1074e320[336];
// 0x1074e470 +128
char g_1074e470[128];
// 0x1074e4f4 +32
#pragma bss_seg(".bss$1074e4f40")
int g_1074e4f4;
#pragma bss_seg(".bss$1074e4f41")
char pcd_fill_1074e4f4[28];
#pragma bss_seg()
// 0x1074e514 +52; also ?g_1074e514@@3PBDB
char g_1074e514[52];
// 0x1074e548 +128
char g_1074e548[128];
// 0x1074e5c8 +48
char g_1074e5c8[48];
// 0x1074e5fc +32
#pragma bss_seg(".bss$1074e5fc0")
int g_1074e5fc;
#pragma bss_seg(".bss$1074e5fc1")
char pcd_fill_1074e5fc[28];
#pragma bss_seg()
// 0x1074e61c +60; also ?g_1074e61c@@3PBDB
char g_1074e61c[60];
// 0x1074e65c +32
#pragma bss_seg(".bss$1074e65c0")
int g_1074e65c;
#pragma bss_seg(".bss$1074e65c1")
char pcd_fill_1074e65c[28];
#pragma bss_seg()
// 0x1074e67c +52; also ?g_1074e67c@@3PBDB
char g_1074e67c[52];
// 0x1074e6b4 +68
#pragma bss_seg(".bss$1074e6b40")
StatMgr *g_1074e6b4;
#pragma bss_seg(".bss$1074e6b41")
char pcd_fill_1074e6b4[64];
#pragma bss_seg()
// 0x1074e6f8 +128
char g_1074e6f8[128];
// 0x1074e77c +64
#pragma bss_seg(".bss$1074e77c0")
StatMgr *g_1074e77c;
#pragma bss_seg(".bss$1074e77c1")
char pcd_fill_1074e77c[60];
#pragma bss_seg()
// 0x1074e7bc +4; also ?g_1074e7bc@@3P6AHPAVCVDmg_t@@HH@ZA
int g_1074e7bc;
// 0x1074e7c0 +4; also ?g_1074e7c0@@3P6A_NPAVCVDmg_t@@H@ZA
int g_1074e7c0;
// 0x1074e7c4 +4
int g_1074e7c4;
// 0x1074e7c8 +4; also ?g_1074e7c8@@3P6AXPAVCVStatAction_t@@HHHH@ZA
int g_1074e7c8;
// 0x1074e7cc +4; also ?g_1074e7cc@@3P6AXPAVCVStatAction_t@@HHH@ZA
int g_1074e7cc;
// 0x1074e7d0 +408; also ?g_1074e7d0@@3P6AXPAVCVStatActionList_t@@HHH@ZA
#pragma bss_seg(".bss$1074e7d00")
int g_1074e7d0;
#pragma bss_seg(".bss$1074e7d01")
char pcd_fill_1074e7d0[404];
#pragma bss_seg()
// 0x1074e9b8 +24; also ?g_1074e9b8@@3PAY0M@DA
char g_1074e9b8[24];
// 0x1074e9d0 +512; also ?g_1074e9d0@@3PAY0BAA@DA
char g_1074e9d0[512];
// 0x1074ebd0 +512; also ?g_1074ebd0@@3PAY0BAA@DA
char g_1074ebd0[512];
// 0x1074edd0 +4
int g_1074edd0;
// 0x1074edd4 +4
int g_1074edd4;
// 0x1074edd8 +4
int g_1074edd8;
// 0x1074eddc +4
int g_1074eddc;
// 0x1074ede0 +224; also ?g_1074ede0@@3P6AXXZA
#pragma bss_seg(".bss$1074ede00")
int g_1074ede0;
#pragma bss_seg(".bss$1074ede01")
char pcd_fill_1074ede0[220];
#pragma bss_seg()
// 0x1074eec4 +12; also ?g_1074eec4@@3P6AXPAUCVDmgBlock16_t@@PBD@ZA
#pragma bss_seg(".bss$1074eec40")
int g_1074eec4;
#pragma bss_seg(".bss$1074eec41")
char pcd_fill_1074eec4[8];
#pragma bss_seg()
// 0x1074eed0 +128
char g_1074eed0[128];
// 0x1074ef50 +180
char g_1074ef50[180];
// 0x1074f018 +4
int g_1074f018;
// 0x1074f01c +12; also ?g_1074f01c@@3PAPAUCLootRecord@@A
CUnknown10206400 *g_1074f01c[3];
// 0x1074f034 +4
int g_1074f034;
// 0x1074f038 +4
int g_1074f038;
// 0x1074f03c +4
int g_1074f03c;
// 0x1074f040 +8
#pragma bss_seg(".bss$1074f0400")
int g_1074f040;
#pragma bss_seg(".bss$1074f0401")
char pcd_fill_1074f040[4];
#pragma bss_seg()
// 0x1074f04c +88; also ?g_1074f04c@@3PAUDevObj1074f04c@@A ?g_1074f04c@@3PAUDiceDebug@@A ?g_1074f04c@@3PAUIObj1074f04c@@A ?g_1074f04c@@3PAVCDevConVar@@A ?g_1074f04c@@3PAVConVar@@A ?g_1074f04c@@3PAXA
#pragma bss_seg(".bss$1074f04c0")
CDevFlagObj *g_1074f04c;
#pragma bss_seg(".bss$1074f04c1")
char pcd_fill_1074f04c[84];
#pragma bss_seg()
// 0x1074f0c4 +64
#pragma bss_seg(".bss$1074f0c40")
ConVar *g_1074f0c4;
#pragma bss_seg(".bss$1074f0c41")
char pcd_fill_1074f0c4[60];
#pragma bss_seg()
// 0x1074f13c +4
int g_1074f13c;
// 0x1074f140 +4
int g_1074f140;
// 0x1074f144 +4
int g_1074f144;
// 0x1074f148 +4
int g_1074f148;
// 0x1074f14c +4
int g_1074f14c;
// 0x1074f150 +40
#pragma bss_seg(".bss$1074f1500")
int g_1074f150;
#pragma bss_seg(".bss$1074f1501")
char pcd_fill_1074f150[36];
#pragma bss_seg()
// 0x1074f178 +516
char g_1074f178[516];
// 0x1074f714 +64; also ?g_1074f714@@3PAUCDepConVar@@A
#pragma bss_seg(".bss$1074f7140")
CDepConVarView *g_1074f714;
#pragma bss_seg(".bss$1074f7141")
char pcd_fill_1074f714[60];
#pragma bss_seg()
// 0x1074f754 +4
int g_1074f754;
// 0x1074f758 +4; also ?g_1074f758@@3PAVCBaseEntity@@A
int g_1074f758;
// 0x1074f75c +4
int g_1074f75c;
// 0x1074f760 +308
#pragma bss_seg(".bss$1074f7600")
int g_1074f760;
#pragma bss_seg(".bss$1074f7601")
char pcd_fill_1074f760[304];
#pragma bss_seg()
// 0x1074f894 +4; also ?g_1074f894@@3UCUnk1074f894@@A
char g_1074f894[4];
// 0x1074f898 +4; also ?g_1074f898@@3HA ?g_1074f898@@3UMgr@@A ?g_1074f898@@3USObj@@A ?g_1074f898@@3VCUnknown1021e8e0@@A
char g_1074f898[4];
// 0x1074f89c +12
#pragma bss_seg(".bss$1074f89c0")
int g_1074f89c;
#pragma bss_seg(".bss$1074f89c1")
char pcd_fill_1074f89c[8];
#pragma bss_seg()
// 0x1074f924 +4; also ?g_1074f924@@3UCExperienceAward@@A ?g_1074f924@lifted@@3HA
char g_1074f924[4];
// 0x1074f928 +4
namespace lifted { int g_1074f928; }
// 0x1074f92c +4
namespace lifted { int g_1074f92c; }
// 0x1074f930 +4096
char g_1074f930[4096];
// 0x10750cd8 +156
char g_10750cd8[156];
// 0x10750d74 +4; also ?g_10750d74@@3US10750d74@@A
char g_10750d74[4];
// 0x10750d80 +424
#pragma bss_seg(".bss$10750d800")
char g_10750d80;
#pragma bss_seg(".bss$10750d801")
char pcd_fill_10750d80[423];
#pragma bss_seg()
// 0x10750f2c +68
#pragma bss_seg(".bss$10750f2c0")
CUnknown10750f2c *g_10750f2c;
#pragma bss_seg(".bss$10750f2c1")
char pcd_fill_10750f2c[64];
#pragma bss_seg()
// 0x10750f74 +68
#pragma bss_seg(".bss$10750f740")
CSoundStateView *g_10750f74;
#pragma bss_seg(".bss$10750f741")
char pcd_fill_10750f74[64];
#pragma bss_seg()
// 0x10750fec +4
int g_10750fec;
// 0x10750ff0 +132
#pragma bss_seg(".bss$10750ff00")
int g_10750ff0;
#pragma bss_seg(".bss$10750ff01")
char pcd_fill_10750ff0[128];
#pragma bss_seg()
// 0x107510b4 +4
int g_107510b4;
// 0x107510b8 +8; also ?g_107510b8@@3USA@@A ?g_107510b8@@3VCUnknown102304e0@@A
char g_107510b8[8];
// 0x107510c0 +128
char g_107510c0[128];
// 0x10751604 +68
#pragma bss_seg(".bss$107516040")
CUnknown10751604 *g_10751604;
#pragma bss_seg(".bss$107516041")
char pcd_fill_10751604[64];
#pragma bss_seg()
// 0x107520a4 +64
#pragma bss_seg(".bss$107520a40")
CWRTimeView *g_107520a4;
#pragma bss_seg(".bss$107520a41")
char pcd_fill_107520a4[60];
#pragma bss_seg()
// 0x10752954 +836
#pragma bss_seg(".bss$107529540")
int g_10752954;
#pragma bss_seg(".bss$107529541")
char pcd_fill_10752954[832];
#pragma bss_seg()
// 0x10752c9c +68; also ?g_10752c9c@@3PAUStateObj@@A
#pragma bss_seg(".bss$10752c9c0")
CQueueOwner *g_10752c9c;
#pragma bss_seg(".bss$10752c9c1")
char pcd_fill_10752c9c[64];
#pragma bss_seg()
// 0x10752ce0 +100; also ?g_10752ce0@@3PAPAUCQueuedNode@@A ?g_10752ce0@@3PAPAUN@@A
SeqNode *g_10752ce0[25];
// 0x10752d60 +100; also ?g_10752d60@@3PAHA
float g_10752d60[25];
// 0x10752ddc +68
#pragma bss_seg(".bss$10752ddc0")
CUnk10752ddc *g_10752ddc;
#pragma bss_seg(".bss$10752ddc1")
char pcd_fill_10752ddc[64];
#pragma bss_seg()
// 0x10752e9c +4
int g_10752e9c;
// 0x1075329c +68; also ?g_1075329c@@3PAUMeasureProfiler@@A
#pragma bss_seg(".bss$1075329c0")
ConVarA *g_1075329c;
#pragma bss_seg(".bss$1075329c1")
char pcd_fill_1075329c[64];
#pragma bss_seg()
// 0x107532e8 +4; also ?g_107532e8@lifted@@3HA
CWorld *g_107532e8;
// 0x107532ec +328; also ?g_107532ec@@3HA ?g_107532ec@lifted@@3HA
#pragma bss_seg(".bss$107532ec0")
CWorldEvents *g_107532ec;
#pragma bss_seg(".bss$107532ec1")
char pcd_fill_107532ec[324];
#pragma bss_seg()
// 0x10753434 +4; also ?g_10753434@@3PAUCNode102461d0@@A ?g_10753434@@3PAUCUnknown10245720Node@@A ?g_10753434@@3PAUCUnknown10753434@@A ?g_10753434@lifted@@3HA
CConCmdView *g_10753434;
// 0x10753438 +8
#pragma bss_seg(".bss$107534380")
int g_10753438;
#pragma bss_seg(".bss$107534381")
char pcd_fill_10753438[4];
#pragma bss_seg()
// 0x10753440 +256; also ?g_10753440@@3PADA
#pragma bss_seg(".bss$107534400")
char g_10753440;
#pragma bss_seg(".bss$107534401")
char pcd_fill_10753440[255];
#pragma bss_seg()
// 0x10753540 +256; also ?g_10753540@@3PADA
#pragma bss_seg(".bss$107535400")
char g_10753540;
#pragma bss_seg(".bss$107535401")
char pcd_fill_10753540[255];
#pragma bss_seg()
// 0x10753640 +1
char g_10753640;
// 0x10753641 +103
#pragma bss_seg(".bss$107536410")
char g_10753641;
#pragma bss_seg(".bss$107536411")
char pcd_fill_10753641[102];
#pragma bss_seg()
// 0x107536ac +68; also ?g_107536ac@@3PAUConVarFlag@@A ?g_107536ac@@3PAUMeasureProfiler@@A
#pragma bss_seg(".bss$107536ac0")
ConVarA *g_107536ac;
#pragma bss_seg(".bss$107536ac1")
char pcd_fill_107536ac[64];
#pragma bss_seg()
// 0x107536f4 +64
#pragma bss_seg(".bss$107536f40")
CDebugGate *g_107536f4;
#pragma bss_seg(".bss$107536f41")
char pcd_fill_107536f4[60];
#pragma bss_seg()
// 0x10753734 +4; also ?g_10753734@block_102478f0@@3PAUCMeasureSection2@1@A ?g_10753734@lifted@@3HA
CMeasureSection *g_10753734;
// 0x10753738 +8
#pragma bss_seg(".bss$107537380")
int g_10753738;
#pragma bss_seg(".bss$107537381")
char pcd_fill_10753738[4];
#pragma bss_seg()
// 0x10753740 +40
#pragma bss_seg(".bss$107537400")
double g_10753740;
#pragma bss_seg(".bss$107537401")
char pcd_fill_10753740[32];
#pragma bss_seg()
// 0x10753768 +2048
unsigned int g_10753768[512];
// 0x10753f68 +64; also ?g_10753f68@@3PADA
#pragma bss_seg(".bss$10753f680")
char g_10753f68;
#pragma bss_seg(".bss$10753f681")
char pcd_fill_10753f68[63];
#pragma bss_seg()
// 0x10753fa8 +2048; also ?g_10753fa8@@3PAY0EA@DA
char g_10753fa8[2048];
// 0x107547a8 +2048
char *g_107547a8[512];
// 0x10754fa8 +1056768
#pragma bss_seg(".bss$10754fa80")
int g_10754fa8;
#pragma bss_seg(".bss$10754fa81")
char pcd_fill_10754fa8[1056764];
#pragma bss_seg()
// 0x10856fa8 +4
int g_10856fa8;
// 0x10856fac +212600
#pragma bss_seg(".bss$10856fac0")
int g_10856fac;
#pragma bss_seg(".bss$10856fac1")
char pcd_fill_10856fac[212596];
#pragma bss_seg()
// 0x1088ae24 +16; also ?g_1088ae24@@3UNode16@@A
char g_1088ae24[16];
// 0x1088ae38 +4; also ?g_1088ae38@@3PAUStrTable@@A
Pool *g_1088ae38;
// 0x1088ae40 +16
#pragma bss_seg(".bss$1088ae400")
char g_1088ae40;
#pragma bss_seg(".bss$1088ae401")
char pcd_fill_1088ae40[15];
#pragma bss_seg()
// 0x1088ae50 +2
short g_1088ae50;
// 0x1088ae52 +2
short g_1088ae52;
// 0x1088ae54 +4
#pragma bss_seg(".bss$1088ae540")
short g_1088ae54;
#pragma bss_seg(".bss$1088ae541")
char pcd_fill_1088ae54[2];
#pragma bss_seg()
// 0x1088ae60 +28; also ?g_1088ae60@@3VCUnknown10250830@@A
char g_1088ae60[28];
// 0x1088ae7c +4
#pragma bss_seg(".bss$1088ae7c0")
short g_1088ae7c;
#pragma bss_seg(".bss$1088ae7c1")
char pcd_fill_1088ae7c[2];
#pragma bss_seg()
// 0x1088ae80 +4
#pragma bss_seg(".bss$1088ae800")
short g_1088ae80;
#pragma bss_seg(".bss$1088ae801")
char pcd_fill_1088ae80[2];
#pragma bss_seg()
// 0x1088ae84 +16
#pragma bss_seg(".bss$1088ae840")
short g_1088ae84;
#pragma bss_seg(".bss$1088ae841")
char pcd_fill_1088ae84[14];
#pragma bss_seg()
// 0x1088aee4 +12; also ?g_1088aee4@lifted@@3HA
#pragma bss_seg(".bss$1088aee40")
int g_1088aee4;
#pragma bss_seg(".bss$1088aee41")
char pcd_fill_1088aee4[8];
#pragma bss_seg()
// 0x1088aef4 +68; also ?g_1088aef4@@3PAVConVar@@A
#pragma bss_seg(".bss$1088aef40")
CTuningConVar *g_1088aef4;
#pragma bss_seg(".bss$1088aef41")
char pcd_fill_1088aef4[64];
#pragma bss_seg()
// 0x1088af38 +264; also ?g_1088af38@@3UCRollRecord_102517e0@@A
char g_1088af38[264];
// 0x1088b040 +344
#pragma bss_seg(".bss$1088b0400")
int g_1088b040;
#pragma bss_seg(".bss$1088b0401")
char pcd_fill_1088b040[340];
#pragma bss_seg()
// 0x1088b198 +59944
#pragma bss_seg(".bss$1088b1980")
int g_1088b198;
#pragma bss_seg(".bss$1088b1981")
char pcd_fill_1088b198[59940];
#pragma bss_seg()
// 0x1089d7cc +14; also ?g_1089d7cc@@3PADA
#pragma bss_seg(".bss$1089d7cc0")
int g_1089d7cc;
#pragma bss_seg(".bss$1089d7cc1")
char pcd_fill_1089d7cc[10];
#pragma bss_seg()
// 0x1089d7da +6
#pragma bss_seg(".bss$1089d7da0")
unsigned short g_1089d7da;
#pragma bss_seg(".bss$1089d7da1")
char pcd_fill_1089d7da[4];
#pragma bss_seg()
// 0x1089d7e0 +48; also ?g_1089d7e0@@3USymbolTable@@A ?g_1089d7e0@@3VCUnknown1024b370@@A
char g_1089d7e0[48];
// 0x1089d810 +146040
char g_1089d810[146040];
// 0x1090fbe0 +4; also ?g_1090fbe0@@3HA ?g_1090fbe0@@3PAUSB@@A ?g_1090fbe0@lifted@@3HA
CUnknownObj1024a1e0 * *g_1090fbe0;
// 0x1090fbe4 +8
#pragma bss_seg(".bss$1090fbe40")
int g_1090fbe4;
#pragma bss_seg(".bss$1090fbe41")
char pcd_fill_1090fbe4[4];
#pragma bss_seg()
// 0x1090fbec +4; also ?g_1090fbec@@3PAUS1025@@A ?g_1090fbec@@3PAUS1025d9d0@@A
CAI_NamedThing *g_1090fbec;
// 0x1090fbf0 +4; also ?g_1090fbf0@@3PAUS1025@@A ?g_1090fbf0@@3PAUS1025d9d0@@A
CAI_NamedThing *g_1090fbf0;
// 0x1090fbf4 +12; also ?g_1090fbf4@@3PAUS1025@@A ?g_1090fbf4@@3PAUS1025d9d0@@A
#pragma bss_seg(".bss$1090fbf40")
CAI_NamedThing *g_1090fbf4;
#pragma bss_seg(".bss$1090fbf41")
char pcd_fill_1090fbf4[8];
#pragma bss_seg()
// 0x1090fd68 +8
#pragma bss_seg(".bss$1090fd680")
int g_1090fd68;
#pragma bss_seg(".bss$1090fd681")
char pcd_fill_1090fd68[4];
#pragma bss_seg()
// 0x1090fdbc +4
int g_1090fdbc;
// 0x1090fe04 +4
float g_1090fe04;
// 0x1090febc +68
#pragma bss_seg(".bss$1090febc0")
ConVar *g_1090febc;
#pragma bss_seg(".bss$1090febc1")
char pcd_fill_1090febc[64];
#pragma bss_seg()
// 0x1090ff20 +24; also ?g_1090ff20@@3UCTimerX@@A
char g_1090ff20[24];
// 0x1090ff38 +24; also ?g_1090ff38@@3UCTimerX@@A
char g_1090ff38[24];
// 0x109202cc +64
#pragma bss_seg(".bss$109202cc0")
CConVar109202cc *g_109202cc;
#pragma bss_seg(".bss$109202cc1")
char pcd_fill_109202cc[60];
#pragma bss_seg()
// 0x1092030c +40; also ?g_1092030c@@3PAY04HA
char g_1092030c[40];
// 0x10920334 +4
CAI_BaseNPC *g_10920334;
// 0x10920344 +68
#pragma bss_seg(".bss$109203440")
CAIDebugSink *g_10920344;
#pragma bss_seg(".bss$109203441")
char pcd_fill_10920344[64];
#pragma bss_seg()
// 0x1092038c +64
#pragma bss_seg(".bss$1092038c0")
CTroikaConVarView *g_1092038c;
#pragma bss_seg(".bss$1092038c1")
char pcd_fill_1092038c[60];
#pragma bss_seg()
// 0x109203d4 +8; also ?g_109203d4@@3UCIdList@@A ?g_109203d4@@3USA@@A ?g_109203d4@@3VCUnknown1024a230@@A ?g_109203d4@lifted@@3DA
char g_109203d4[8];
// 0x109203dc +8; also ?g_109203dc@@3DA ?g_109203dc@@3UCConditionIdList@@A ?g_109203dc@@3UCIdList@@A ?g_109203dc@@3USA@@A ?g_109203dc@@3VCUnknown1024a230@@A ?g_109203dc@lifted@@3DA
char g_109203dc[8];
// 0x109203e4 +4
int g_109203e4;
// 0x10920534 +1
char g_10920534;
// 0x10920535 +3
#pragma bss_seg(".bss$109205350")
char g_10920535;
#pragma bss_seg(".bss$109205351")
char pcd_fill_10920535[2];
#pragma bss_seg()
// 0x10920538 +4
int g_10920538;
// 0x1092053c +4; also ?g_1092053c@@3EA ?g_1092053c@@3HA ?g_1092053c@@3PADA
unsigned int g_1092053c;
// 0x10920540 +4
void *g_10920540;
// 0x10920544 +4; also ?g_10920544@@3HA
int *g_10920544;
// 0x10920548 +4
int g_10920548;
// 0x1092054c +4
int g_1092054c;
// 0x10920550 +4
float g_10920550;
// 0x10920554 +4
float g_10920554;
// 0x10920558 +4
int g_10920558;
// 0x1092055c +13520
#pragma bss_seg(".bss$1092055c0")
int g_1092055c;
#pragma bss_seg(".bss$1092055c1")
char pcd_fill_1092055c[13516];
#pragma bss_seg()
// 0x10923a38 +8; also ?g_10923a38@@3PAUSTaskTiming@@A
#pragma bss_seg(".bss$10923a380")
AITaskTimings817 *g_10923a38;
#pragma bss_seg(".bss$10923a381")
char pcd_fill_10923a38[4];
#pragma bss_seg()
// 0x10923c70 +4
int g_10923c70;
// 0x10923c74 +124
#pragma bss_seg(".bss$10923c740")
bool g_10923c74;
#pragma bss_seg(".bss$10923c741")
char pcd_fill_10923c74[123];
#pragma bss_seg()
// 0x10923cf4 +68
#pragma bss_seg(".bss$10923cf40")
CDevFlagB *g_10923cf4;
#pragma bss_seg(".bss$10923cf41")
char pcd_fill_10923cf4[64];
#pragma bss_seg()
// 0x10923d3c +84
#pragma bss_seg(".bss$10923d3c0")
CUnknown10738964 *g_10923d3c;
#pragma bss_seg(".bss$10923d3c1")
char pcd_fill_10923d3c[80];
#pragma bss_seg()
// 0x10923dd7 +1
unsigned char g_10923dd7;
// 0x10923dec +76
#pragma bss_seg(".bss$10923dec0")
SConVarX *g_10923dec;
#pragma bss_seg(".bss$10923dec1")
char pcd_fill_10923dec[72];
#pragma bss_seg()
// 0x10923e3c +68
#pragma bss_seg(".bss$10923e3c0")
SConVarX *g_10923e3c;
#pragma bss_seg(".bss$10923e3c1")
char pcd_fill_10923e3c[64];
#pragma bss_seg()
// 0x10923e84 +68
#pragma bss_seg(".bss$10923e840")
ConVar *g_10923e84;
#pragma bss_seg(".bss$10923e841")
char pcd_fill_10923e84[64];
#pragma bss_seg()
// 0x10923f14 +68
#pragma bss_seg(".bss$10923f140")
CNpcInitConVar *g_10923f14;
#pragma bss_seg(".bss$10923f141")
char pcd_fill_10923f14[64];
#pragma bss_seg()
// 0x10923f5c +68
#pragma bss_seg(".bss$10923f5c0")
CVH375Obj *g_10923f5c;
#pragma bss_seg(".bss$10923f5c1")
char pcd_fill_10923f5c[64];
#pragma bss_seg()
// 0x10923fec +68
#pragma bss_seg(".bss$10923fec0")
SConVarX *g_10923fec;
#pragma bss_seg(".bss$10923fec1")
char pcd_fill_10923fec[64];
#pragma bss_seg()
// 0x10924034 +68
#pragma bss_seg(".bss$109240340")
CVH375Obj *g_10924034;
#pragma bss_seg(".bss$109240341")
char pcd_fill_10924034[64];
#pragma bss_seg()
// 0x109241ac +76
#pragma bss_seg(".bss$109241ac0")
CUnknown109241ac *g_109241ac;
#pragma bss_seg(".bss$109241ac1")
char pcd_fill_109241ac[72];
#pragma bss_seg()
// 0x109241fc +76; also ?g_109241fc@@3PAUCDebugStatsOwner@@A
#pragma bss_seg(".bss$109241fc0")
CDbgStats *g_109241fc;
#pragma bss_seg(".bss$109241fc1")
char pcd_fill_109241fc[72];
#pragma bss_seg()
// 0x10924260 +24
char g_10924260[24];
// 0x10924278 +32
char g_10924278[32];
// 0x1092429c +68
#pragma bss_seg(".bss$1092429c0")
CDbgDoorAI *g_1092429c;
#pragma bss_seg(".bss$1092429c1")
char pcd_fill_1092429c[64];
#pragma bss_seg()
// 0x1092435c +68
#pragma bss_seg(".bss$1092435c0")
CUnknown10738964 *g_1092435c;
#pragma bss_seg(".bss$1092435c1")
char pcd_fill_1092435c[64];
#pragma bss_seg()
// 0x109243ec +68; also ?g_109243ec@@3PAVCSoundDebugVar@@A
#pragma bss_seg(".bss$109243ec0")
CSoundDebugVar *g_109243ec;
#pragma bss_seg(".bss$109243ec1")
char pcd_fill_109243ec[64];
#pragma bss_seg()
// 0x10924434 +68
#pragma bss_seg(".bss$109244340")
ConVar *g_10924434;
#pragma bss_seg(".bss$109244341")
char pcd_fill_10924434[64];
#pragma bss_seg()
// 0x1092447c +68
#pragma bss_seg(".bss$1092447c0")
CVH461Obj *g_1092447c;
#pragma bss_seg(".bss$1092447c1")
char pcd_fill_1092447c[64];
#pragma bss_seg()
// 0x109244c4 +68
#pragma bss_seg(".bss$109244c40")
CUnknown10738964 *g_109244c4;
#pragma bss_seg(".bss$109244c41")
char pcd_fill_109244c4[64];
#pragma bss_seg()
// 0x1092450c +68
#pragma bss_seg(".bss$1092450c0")
V1092450c *g_1092450c;
#pragma bss_seg(".bss$1092450c1")
char pcd_fill_1092450c[64];
#pragma bss_seg()
// 0x109245e4 +68
#pragma bss_seg(".bss$109245e40")
CUnk109245e4 *g_109245e4;
#pragma bss_seg(".bss$109245e41")
char pcd_fill_109245e4[64];
#pragma bss_seg()
// 0x109246c0 +216
#pragma bss_seg(".bss$109246c00")
int g_109246c0;
#pragma bss_seg(".bss$109246c01")
char pcd_fill_109246c0[212];
#pragma bss_seg()
// 0x1092479c +68
#pragma bss_seg(".bss$1092479c0")
CUnknown10738964 *g_1092479c;
#pragma bss_seg(".bss$1092479c1")
char pcd_fill_1092479c[64];
#pragma bss_seg()
// 0x109247e4 +4
int g_109247e4;
// 0x109247ec +72
#pragma bss_seg(".bss$109247ec0")
ConVar *g_109247ec;
#pragma bss_seg(".bss$109247ec1")
char pcd_fill_109247ec[68];
#pragma bss_seg()
// 0x10924834 +20
#pragma bss_seg(".bss$109248340")
unsigned char g_10924834;
#pragma bss_seg(".bss$109248341")
char pcd_fill_10924834[19];
#pragma bss_seg()
// 0x109248ec +4
int g_109248ec;
// 0x109248f4 +68
#pragma bss_seg(".bss$109248f40")
SGlobal248f4 *g_109248f4;
#pragma bss_seg(".bss$109248f41")
char pcd_fill_109248f4[64];
#pragma bss_seg()
// 0x10924984 +76
#pragma bss_seg(".bss$109249840")
int g_10924984;
#pragma bss_seg(".bss$109249841")
char pcd_fill_10924984[72];
#pragma bss_seg()
// 0x109249d4 +68
#pragma bss_seg(".bss$109249d40")
CDevMsgLevel *g_109249d4;
#pragma bss_seg(".bss$109249d41")
char pcd_fill_109249d4[64];
#pragma bss_seg()
// 0x10924a1c +64; also ?g_10924a1c@@3PAUCGameRulesY@@A ?g_10924a1c@@3PAUCHumanTimeScale@@A ?g_10924a1c@@3PAUSDifficulty@@A ?g_10924a1c@@3PAUSDifficultyView@@A ?g_10924a1c@@3PAUSDifficulty_103c1b10@@A ?g_10924a1c@@3PAVCNPC_VTzimisceConVar@@A ?g_10924a1c@@3PAVConVar@@A
#pragma bss_seg(".bss$10924a1c0")
CUnknown10924a1c *g_10924a1c;
#pragma bss_seg(".bss$10924a1c1")
char pcd_fill_10924a1c[60];
#pragma bss_seg()
// 0x10924a6c +68; also ?g_10924a6c@@3PAHA ?g_10924a6c@@3PAUAIObj2X@@A ?g_10924a6c@@3PAUCAIEventSink@@A ?g_10924a6c@@3PAUCAIRandomView@@A ?g_10924a6c@@3PAUCCineDevFlagObj@@A ?g_10924a6c@@3PAUCCondHookView_433@@A ?g_10924a6c@@3PAUCDebugHook@@A ?g_10924a6c@@3PAUCDevFlag389@@A ?g_10924a6c@@3PAUCDevFlag481@@A ?g_10924a6c@@3PAUCDevFlag@@A ?g_10924a6c@@3PAUCDevFlagA@@A ?g_10924a6c@@3PAUCDevFlagObj102a0cb0@@A ?g_10924a6c@@3PAUCDevFlagObj@@A ?g_10924a6c@@3PAUCDevFlagObj_10280f40@@A ?g_10924a6c@@3PAUCDevFlagObject@@A ?g_10924a6c@@3PAUCDevFlagView@@A ?g_10924a6c@@3PAUCDevView102d3040@@A ?g_10924a6c@@3PAUCGatherDevFlag@@A ?g_10924a6c@@3PAUCGlobal10924a6c@@A ?g_10924a6c@@3PAUCMeleeHook@@A ?g_10924a6c@@3PAUCNTDevFlag@@A ?g_10924a6c@@3PAUCNpcAiGlobalX@@A ?g_10924a6c@@3PAUCPTDev_1016be10@@A ?g_10924a6c@@3PAUCScurryEvt@@A ?g_10924a6c@@3PAUCSquadHook@@A ?g_10924a6c@@3PAUCTroikaGlobalView@@A ?g_10924a6c@@3PAUCUnk10924a6c@@A ?g_10924a6c@@3PAUCUnknown1039ef90Global@@A ?g_10924a6c@@3PAUCUnknown10924a6c@@A ?g_10924a6c@@3PAUCVH461Dev@@A ?g_10924a6c@@3PAUCWerewolfSignal@@A ?g_10924a6c@@3PAUCWerewolfZoneObject@@A ?g_10924a6c@@3PAUGView@@A ?g_10924a6c@@3PAUS10924a6c@@A ?g_10924a6c@@3PAUS_Sig@@A ?g_10924a6c@@3PAUSabbatJumpHook@@A ?g_10924a6c@@3PAUSlotsInfl@@A ?g_10924a6c@@3PAUSlotsView2@@A ?g_10924a6c@@3PAUsub_DevFlag102cc760@@A ?g_10924a6c@@3PAVCAI_BaseNPC@@A ?g_10924a6c@@3PAVCUnknown10924a6c@@A ?g_10924a6c@@3PAVSBossGlobalView@@A
#pragma bss_seg(".bss$10924a6c0")
CDevFlagObj *g_10924a6c;
#pragma bss_seg(".bss$10924a6c1")
char pcd_fill_10924a6c[64];
#pragma bss_seg()
// 0x10924ab4 +68; also ?g_10924ab4@@3PAUDrawHelperB@@A
#pragma bss_seg(".bss$10924ab40")
CDevFlagA *g_10924ab4;
#pragma bss_seg(".bss$10924ab41")
char pcd_fill_10924ab4[64];
#pragma bss_seg()
// 0x10924afc +404
#pragma bss_seg(".bss$10924afc0")
CTroikaGameState *g_10924afc;
#pragma bss_seg(".bss$10924afc1")
char pcd_fill_10924afc[400];
#pragma bss_seg()
// 0x10924cdc +68
#pragma bss_seg(".bss$10924cdc0")
CUnknown10924cdc *g_10924cdc;
#pragma bss_seg(".bss$10924cdc1")
char pcd_fill_10924cdc[64];
#pragma bss_seg()
// 0x10924d24 +68
#pragma bss_seg(".bss$10924d240")
CNTConVar *g_10924d24;
#pragma bss_seg(".bss$10924d241")
char pcd_fill_10924d24[64];
#pragma bss_seg()
// 0x10924d6c +68
#pragma bss_seg(".bss$10924d6c0")
TranslateGlobal *g_10924d6c;
#pragma bss_seg(".bss$10924d6c1")
char pcd_fill_10924d6c[64];
#pragma bss_seg()
// 0x10924edc +68; also ?g_10924edc@@3PAUCHumanNotify@@A ?g_10924edc@@3PAUCNotifyX@@A ?g_10924edc@@3PAUCUnk10924edc@@A ?g_10924edc@@3PAUCUnknown10924edc@@A ?g_10924edc@@3PAUCUnknown10924edcView@@A ?g_10924edc@@3PAUCVirtSimpleA@@A ?g_10924edc@@3PAUGlobalObj@@A ?g_10924edc@@3PAUISlot1@@A ?g_10924edc@@3PAUIUnk10924edc@@A ?g_10924edc@@3PAUNotifyObj@@A ?g_10924edc@@3PAUSNotify10924edc@@A ?g_10924edc@@3PAUSNotifyObj@@A ?g_10924edc@@3PAUSTroikaNotify@@A ?g_10924edc@@3PAUSYukieNotify@@A ?g_10924edc@@3PAUUnk924edc_@@A
#pragma bss_seg(".bss$10924edc0")
S10924edc *g_10924edc;
#pragma bss_seg(".bss$10924edc1")
char pcd_fill_10924edc[64];
#pragma bss_seg()
// 0x10924f74 +68; also ?g_10924f74@@3PAUCNTConVar@@A ?g_10924f74@@3PAUCVH375Obj@@A ?g_10924f74@@3PAUCVH375_607@@A
#pragma bss_seg(".bss$10924f740")
ConVarLike *g_10924f74;
#pragma bss_seg(".bss$10924f741")
char pcd_fill_10924f74[64];
#pragma bss_seg()
// 0x10924fb8 +1
char g_10924fb8;
// 0x10924fb9 +1; also ?g_10924fb9@@3EA
char g_10924fb9;
// 0x10924fba +1; also ?g_10924fba@@3EA
char g_10924fba;
// 0x10924fbb +1
bool g_10924fbb;
// 0x10924fbc +4
#pragma bss_seg(".bss$10924fbc0")
bool g_10924fbc;
#pragma bss_seg(".bss$10924fbc1")
char pcd_fill_10924fbc[3];
#pragma bss_seg()
// 0x10924fc0 +968
#pragma bss_seg(".bss$10924fc00")
float g_10924fc0;
#pragma bss_seg(".bss$10924fc01")
char pcd_fill_10924fc0[964];
#pragma bss_seg()
// 0x10925388 +4
int g_10925388;
// 0x10925390 +4
int g_10925390;
// 0x109253b0 +24; also ?g_109253b0@@3VCUnknown10359c50@@A
char g_109253b0[24];
// 0x109253c8 +44; also ?g_109253c8@@3VCUnknown10359c50@@A
char g_109253c8[44];
// 0x109253f8 +8; also ?g_109253f8@@3HA ?g_109253f8@@3PAUCCsActListV@@A ?g_109253f8@@3PAUCUnknown102ca080@@A ?g_109253f8@@3PAUCaView@@A ?g_109253f8@@3PAUIGlobalObj109253f8@@A ?g_109253f8@@3PAUObj@@A ?g_109253f8@@3PAUP3_Cs@@A ?g_109253f8@@3PAUSHook@@A ?g_109253f8@@3PAUTraitCsActList@@A ?g_109253f8@@3PAVCUnknown102ca630@@A ?g_109253f8@@3PAVCUnknown102cabd0@@A
#pragma bss_seg(".bss$109253f80")
void *g_109253f8;
#pragma bss_seg(".bss$109253f81")
char pcd_fill_109253f8[4];
#pragma bss_seg()
// 0x1092541c +12; also ?g_1092541c@@3PAUCUnkDynLink@@A ?g_1092541c@@3PAUCUnknownNode102cce10@@A ?g_1092541c@@3PAUDynLinkX@@A
#pragma bss_seg(".bss$1092541c0")
CAI_DynamicLink *g_1092541c;
#pragma bss_seg(".bss$1092541c1")
char pcd_fill_1092541c[8];
#pragma bss_seg()
// 0x10925450 +4; also ?g_10925450@@3PAUCForwardHintX@@A ?g_10925450@@3PAUCNPC_VSabbatLeaderHint@@A ?g_10925450@@3PAUCNPC_VWerewolfHint66b0@@A ?g_10925450@@3PAUCNPC_VWerewolfHintLink@@A ?g_10925450@@3PAUCTentListEnt@@A ?g_10925450@@3PAUChangLedgeHintView@@A ?g_10925450@@3PAUEntNode@@A ?g_10925450@@3PAUHintListView@@A ?g_10925450@@3PAUHintV@@A ?g_10925450@@3PAULedgeHintView@@A ?g_10925450@@3PAUListNode_t@@A ?g_10925450@@3PAUSNode@@A ?g_10925450@@3PAUSheriffListNode@@A ?g_10925450@@3PAVCBaseEntity@@A ?g_10925450@@3PAVCUnk102d0910@@A ?g_10925450@@3PAVSTeleportNodeView@@A
CAI_Hint *g_10925450;
// 0x10925454 +4; also ?g_10925454@@3HA
CAI_Hint *g_10925454;
// 0x10925458 +4
int g_10925458;
// 0x1092545c +12; also ?g_1092545c@@3PAVCAI_Hint@@A
#pragma bss_seg(".bss$1092545c0")
HintV *g_1092545c;
#pragma bss_seg(".bss$1092545c1")
char pcd_fill_1092545c[8];
#pragma bss_seg()
// 0x10926a34 +4; also ?g_10926a34@lifted@@3HA
CEnt5f44 *g_10926a34;
// 0x10926a38 +4
int g_10926a38;
// 0x10926a3c +828
#pragma bss_seg(".bss$10926a3c0")
int g_10926a3c;
#pragma bss_seg(".bss$10926a3c1")
char pcd_fill_10926a3c[824];
#pragma bss_seg()
// 0x10926d80 +1028; also ?g_10926d80@@3PAHA
CUnknown102db470Node *g_10926d80[257];
// 0x10927194 +4; also ?g_10927194@@3PADA ?g_10927194@@3PAUCInterestingPlaceX@@A ?g_10927194@@3PAUDormantEnt@@A ?g_10927194@@3PAVCUnknown102db470Node@@A
CAI_InterestingPlace *g_10927194;
// 0x10927198 +4
int g_10927198;
// 0x1092719c +4; also ?g_1092719c@@3_NA
#pragma bss_seg(".bss$1092719c0")
char g_1092719c;
#pragma bss_seg(".bss$1092719c1")
char pcd_fill_1092719c[3];
#pragma bss_seg()
// 0x109271a0 +4
int g_109271a0;
// 0x109271a4 +220
#pragma bss_seg(".bss$109271a40")
int g_109271a4;
#pragma bss_seg(".bss$109271a41")
char pcd_fill_109271a4[216];
#pragma bss_seg()
// 0x10927280 +64; also ?g_10927280@@3PAHA
char g_10927280[64];
// 0x10931bc8 +4
int g_10931bc8;
// 0x10931bcc +8672
#pragma bss_seg(".bss$10931bcc0")
int g_10931bcc;
#pragma bss_seg(".bss$10931bcc1")
char pcd_fill_10931bcc[8668];
#pragma bss_seg()
// 0x10933e8c +68
#pragma bss_seg(".bss$10933e8c0")
CMoveProbeUnk10933e8c *g_10933e8c;
#pragma bss_seg(".bss$10933e8c1")
char pcd_fill_10933e8c[64];
#pragma bss_seg()
// 0x10933f14 +108
#pragma bss_seg(".bss$10933f140")
namespace lifted { char g_10933f14; }
#pragma bss_seg(".bss$10933f141")
char pcd_fill_10933f14[107];
#pragma bss_seg()
// 0x10934018 +12
#pragma bss_seg(".bss$109340180")
LLNode *g_10934018;
#pragma bss_seg(".bss$109340181")
char pcd_fill_10934018[8];
#pragma bss_seg()
// 0x10934024 +2
unsigned short g_10934024;
// 0x10934026 +2
unsigned short g_10934026;
// 0x10934028 +2
unsigned short g_10934028;
// 0x1093402a +2
unsigned short g_1093402a;
// 0x10934064 +4
int g_10934064;
// 0x10934068 +4
int g_10934068;
// 0x10934070 +8
#pragma bss_seg(".bss$109340700")
char g_10934070;
#pragma bss_seg(".bss$109340701")
char pcd_fill_10934070[7];
#pragma bss_seg()
// 0x1093407c +4; also ?g_1093407c@@3HA ?g_1093407c@@3PAUCAI_PathfinderNetwork@@A ?g_1093407c@@3PAUCTbl@@A ?g_1093407c@@3PAUCUnknownList102d3e60@@A ?g_1093407c@@3PAUHintNetV@@A ?g_1093407c@@3PAUSAINodeList@@A ?g_1093407c@@3PAUSNet@@A ?g_1093407c@@3PAVCAI_NodeGraph@@A ?g_1093407c@@3PAVCUnknown102f46d0@@A ?g_1093407c@@3PAVCUnknown102f47f0@@A ?g_1093407c@@3PAXA
CAI_Network *g_1093407c;
// 0x10934084 +4
float g_10934084;
// 0x10934088 +4; also ?g_10934088@@3HA ?g_10934088@@3PADA ?g_10934088@@3PAUCAIGlobalTimer@@A ?g_10934088@@3PAUCAI_NodeNetworkOwner@@A ?g_10934088@@3PAUCBigNetOwner@@A ?g_10934088@@3PAUCNodeEntManager@@A ?g_10934088@@3PAUCNodeNetwork@@A ?g_10934088@@3PAUCNodeV@@A ?g_10934088@@3PAUCUnk102f7c00Owner@@A ?g_10934088@@3PAUCVNetOwner@@A ?g_10934088@@3PAUCView454@@A ?g_10934088@@3PAUCWorldcraftView@@A ?g_10934088@@3PAUSWorld@@A ?g_10934088@@3PAUWorldX@@A ?g_10934088@@3PAVCAI_NetworkManager@@A
CAI_NetworkOwner *g_10934088;
// 0x1093408c +4; also ?g_1093408c@@3EA
#pragma bss_seg(".bss$1093408c0")
char g_1093408c;
#pragma bss_seg(".bss$1093408c1")
char pcd_fill_1093408c[3];
#pragma bss_seg()
// 0x10934094 +64
#pragma bss_seg(".bss$109340940")
GameL *g_10934094;
#pragma bss_seg(".bss$109340941")
char pcd_fill_10934094[60];
#pragma bss_seg()
// 0x109340d4 +4; also ?g_109340d4@@3PAUSNode@@A
CAI_NodeV102337d0 *g_109340d4;
// 0x109340d8 +4
int g_109340d8;
// 0x109340dc +1; also ?g_109340dc@@3EA ?g_109340dc@@3_NA
char g_109340dc;
// 0x109340dd +3
#pragma bss_seg(".bss$109340dd0")
char g_109340dd;
#pragma bss_seg(".bss$109340dd1")
char pcd_fill_109340dd[2];
#pragma bss_seg()
// 0x109340e0 +4
int g_109340e0;
// 0x109340e4 +28
#pragma bss_seg(".bss$109340e40")
int g_109340e4;
#pragma bss_seg(".bss$109340e41")
char pcd_fill_109340e4[24];
#pragma bss_seg()
// 0x1093412c +12; also ?g_1093412c@lifted@@3DA
#pragma bss_seg(".bss$1093412c0")
char g_1093412c;
#pragma bss_seg(".bss$1093412c1")
char pcd_fill_1093412c[11];
#pragma bss_seg()
// 0x10934140 +4
int g_10934140;
// 0x10934144 +4
int g_10934144;
// 0x10934148 +4
int g_10934148;
// 0x1093414c +8
#pragma bss_seg(".bss$1093414c0")
int g_1093414c;
#pragma bss_seg(".bss$1093414c1")
char pcd_fill_1093414c[4];
#pragma bss_seg()
// 0x109363d8 +32; also ?g_109363d8@@3PAEA ?g_109363d8@@3PAIA
char g_109363d8[32];
// 0x109363f8 +4
int g_109363f8;
// 0x10936ba4 +88
#pragma bss_seg(".bss$10936ba40")
CDevConVar *g_10936ba4;
#pragma bss_seg(".bss$10936ba41")
char pcd_fill_10936ba4[84];
#pragma bss_seg()
// 0x10936c2c +16
#pragma bss_seg(".bss$10936c2c0")
int g_10936c2c;
#pragma bss_seg(".bss$10936c2c1")
char pcd_fill_10936c2c[12];
#pragma bss_seg()
// 0x10936c68 +12; also ?g_10936c68@@3PAUCListNode@@A ?g_10936c68@@3PAUCUnknown103162d0Node@@A ?g_10936c68@@3PAUNode@@A ?g_10936c68@@3PAVCUnknown103164c0@@A
#pragma bss_seg(".bss$10936c680")
AINameNode *g_10936c68;
#pragma bss_seg(".bss$10936c681")
char pcd_fill_10936c68[8];
#pragma bss_seg()
// 0x10936ccc +68
#pragma bss_seg(".bss$10936ccc0")
CMeleeGlobal *g_10936ccc;
#pragma bss_seg(".bss$10936ccc1")
char pcd_fill_10936ccc[64];
#pragma bss_seg()
// 0x10936d14 +64
#pragma bss_seg(".bss$10936d140")
CMeleeHook *g_10936d14;
#pragma bss_seg(".bss$10936d141")
char pcd_fill_10936d14[60];
#pragma bss_seg()
// 0x10936de4 +64
#pragma bss_seg(".bss$10936de40")
CUnknown10936de4 *g_10936de4;
#pragma bss_seg(".bss$10936de41")
char pcd_fill_10936de4[60];
#pragma bss_seg()
// 0x10936e54 +68
#pragma bss_seg(".bss$10936e540")
CGlob10936e54 *g_10936e54;
#pragma bss_seg(".bss$10936e541")
char pcd_fill_10936e54[64];
#pragma bss_seg()
// 0x10936e9c +64
#pragma bss_seg(".bss$10936e9c0")
CMeleeHook *g_10936e9c;
#pragma bss_seg(".bss$10936e9c1")
char pcd_fill_10936e9c[60];
#pragma bss_seg()
// 0x10936f2c +64
#pragma bss_seg(".bss$10936f2c0")
CConVarF *g_10936f2c;
#pragma bss_seg(".bss$10936f2c1")
char pcd_fill_10936f2c[60];
#pragma bss_seg()
// 0x10936f74 +68; also ?g_10936f74@@3PAVConVar@@A
#pragma bss_seg(".bss$10936f740")
CUnknown10738964 *g_10936f74;
#pragma bss_seg(".bss$10936f741")
char pcd_fill_10936f74[64];
#pragma bss_seg()
// 0x10936fbc +68
#pragma bss_seg(".bss$10936fbc0")
CConVarF *g_10936fbc;
#pragma bss_seg(".bss$10936fbc1")
char pcd_fill_10936fbc[64];
#pragma bss_seg()
// 0x10937000 +4
int g_10937000;
// 0x10937034 +68; also ?g_10937034@@3PAUCDevFlag10937034@@A ?g_10937034@@3PAUCDevFlagObj@@A ?g_10937034@@3PAUCFeedDbg@@A ?g_10937034@@3PAUCGrappleDbg10937034@@A
#pragma bss_seg(".bss$109370340")
CDevFlagObj *g_10937034;
#pragma bss_seg(".bss$109370341")
char pcd_fill_10937034[64];
#pragma bss_seg()
// 0x109370d4 +136
#pragma bss_seg(".bss$109370d40")
CMeleeGlobal *g_109370d4;
#pragma bss_seg(".bss$109370d41")
char pcd_fill_109370d4[132];
#pragma bss_seg()
// 0x10937160 +96
int g_10937160[24];
// 0x109371c4 +68
#pragma bss_seg(".bss$109371c40")
CCorpseGlobal *g_109371c4;
#pragma bss_seg(".bss$109371c41")
char pcd_fill_109371c4[64];
#pragma bss_seg()
// 0x10937b08 +4
#pragma bss_seg(".bss$10937b080")
char g_10937b08;
#pragma bss_seg(".bss$10937b081")
char pcd_fill_10937b08[3];
#pragma bss_seg()
// 0x10937ccc +4
int g_10937ccc;
// 0x10937cd0 +32
int g_10937cd0[8];
// 0x10937cf0 +1
char g_10937cf0;
// 0x10937cf1 +1; also ?g_10937cf1@@3EA
char g_10937cf1;
// 0x10937cf2 +834
#pragma bss_seg(".bss$10937cf20")
char g_10937cf2;
#pragma bss_seg(".bss$10937cf21")
char pcd_fill_10937cf2[833];
#pragma bss_seg()
// 0x10938040 +8; also ?g_10938040@@3PAUSBossCounts@@A ?g_10938040@@3PAVCNPC_VAndreiBlood@@A
#pragma bss_seg(".bss$109380400")
CBaseEntity *g_10938040;
#pragma bss_seg(".bss$109380401")
char pcd_fill_10938040[4];
#pragma bss_seg()
// 0x10938054 +8
#pragma bss_seg(".bss$109380540")
int g_10938054;
#pragma bss_seg(".bss$109380541")
char pcd_fill_10938054[4];
#pragma bss_seg()
// 0x109382cc +64
#pragma bss_seg(".bss$109382cc0")
ConVar *g_109382cc;
#pragma bss_seg(".bss$109382cc1")
char pcd_fill_109382cc[60];
#pragma bss_seg()
// 0x1093851c +252
#pragma bss_seg(".bss$1093851c0")
float g_1093851c;
#pragma bss_seg(".bss$1093851c1")
char pcd_fill_1093851c[248];
#pragma bss_seg()
// 0x10938738 +8; also ?g_10938738@@3PAUCRagdollCopyUnit@@A ?g_10938738@@3PAVCUnk10938738@@A
#pragma bss_seg(".bss$109387380")
CBodyQueView *g_10938738;
#pragma bss_seg(".bss$109387381")
char pcd_fill_10938738[4];
#pragma bss_seg()
// 0x10939fdc +52; also ?g_10939fdc@@3PAUCListNode@@A ?g_10939fdc@@3PAUCPlayerListNode@@A ?g_10939fdc@@3PAXA
#pragma bss_seg(".bss$10939fdc0")
IPredictionSystem *g_10939fdc;
#pragma bss_seg(".bss$10939fdc1")
char pcd_fill_10939fdc[48];
#pragma bss_seg()
// 0x1093a01c +84
#pragma bss_seg(".bss$1093a01c0")
CBullseyeGlobals *g_1093a01c;
#pragma bss_seg(".bss$1093a01c1")
char pcd_fill_1093a01c[80];
#pragma bss_seg()
// 0x1093a08c +68
#pragma bss_seg(".bss$1093a08c0")
CCrowTimeView *g_1093a08c;
#pragma bss_seg(".bss$1093a08c1")
char pcd_fill_1093a08c[64];
#pragma bss_seg()
// 0x1093a0e8 +24; also ?g_1093a0e8@@3VCUnknown10359c50@@A
char g_1093a0e8[24];
// 0x1093a100 +24; also ?g_1093a100@@3VCUnknown10359c50@@A
char g_1093a100[24];
// 0x1093a118 +8
#pragma bss_seg(".bss$1093a1180")
int g_1093a118;
#pragma bss_seg(".bss$1093a1181")
char pcd_fill_1093a118[4];
#pragma bss_seg()
// 0x1093a1c0 +24; also ?g_1093a1c0@@3VCUnknown10359c50@@A
char g_1093a1c0[24];
// 0x1093a1d8 +24; also ?g_1093a1d8@@3VCUnknown10359c50@@A
char g_1093a1d8[24];
// 0x1093a1f4 +64
#pragma bss_seg(".bss$1093a1f40")
SCvar *g_1093a1f4;
#pragma bss_seg(".bss$1093a1f41")
char pcd_fill_1093a1f4[60];
#pragma bss_seg()
// 0x1093a284 +68
#pragma bss_seg(".bss$1093a2840")
SCvar *g_1093a284;
#pragma bss_seg(".bss$1093a2841")
char pcd_fill_1093a284[64];
#pragma bss_seg()
// 0x1093a2e0 +24; also ?g_1093a2e0@@3VCUnknown10359c50@@A
char g_1093a2e0[24];
// 0x1093a2f8 +28; also ?g_1093a2f8@@3VCUnknown10359c50@@A
char g_1093a2f8[28];
// 0x1093a36c +68
#pragma bss_seg(".bss$1093a36c0")
CSabbatGlobal *g_1093a36c;
#pragma bss_seg(".bss$1093a36c1")
char pcd_fill_1093a36c[64];
#pragma bss_seg()
// 0x1093a3c8 +24; also ?g_1093a3c8@@3VCUnknown10359c50@@A
char g_1093a3c8[24];
// 0x1093a3e0 +64; also ?g_1093a3e0@@3VCUnknown10359c50@@A
char g_1093a3e0[64];
// 0x1093a438 +24; also ?g_1093a438@@3VCUnknown10359c50@@A
char g_1093a438[24];
// 0x1093a450 +24; also ?g_1093a450@@3VCUnknown10359c50@@A
char g_1093a450[24];
// 0x1093a4c0 +24; also ?g_1093a4c0@@3VCUnknown10359c50@@A
char g_1093a4c0[24];
// 0x1093a4d8 +24; also ?g_1093a4d8@@3VCUnknown10359c50@@A
char g_1093a4d8[24];
// 0x1093a548 +24; also ?g_1093a548@@3VCUnknown10359c50@@A
char g_1093a548[24];
// 0x1093a560 +24; also ?g_1093a560@@3VCUnknown10359c50@@A
char g_1093a560[24];
// 0x1093a594 +64
#pragma bss_seg(".bss$1093a5940")
CGameSys1093a594 *g_1093a594;
#pragma bss_seg(".bss$1093a5941")
char pcd_fill_1093a594[60];
#pragma bss_seg()
// 0x1093a638 +24; also ?g_1093a638@@3VCUnknown10359c50@@A
char g_1093a638[24];
// 0x1093a650 +44; also ?g_1093a650@@3VCUnknown10359c50@@A
char g_1093a650[44];
// 0x1093a6a0 +24; also ?g_1093a6a0@@3VCUnknown10359c50@@A
char g_1093a6a0[24];
// 0x1093a6b8 +24; also ?g_1093a6b8@@3VCUnknown10359c50@@A
char g_1093a6b8[24];
// 0x1093a6e8 +80
#pragma bss_seg(".bss$1093a6e80")
namespace lifted { char g_1093a6e8; }
#pragma bss_seg(".bss$1093a6e81")
char pcd_fill_1093a6e8[79];
#pragma bss_seg()
// 0x1093a758 +24; also ?g_1093a758@@3VCUnknown10359c50@@A
char g_1093a758[24];
// 0x1093a770 +24; also ?g_1093a770@@3VCUnknown10359c50@@A
char g_1093a770[24];
// 0x1093a7f0 +24; also ?g_1093a7f0@@3VCUnknown10359c50@@A
char g_1093a7f0[24];
// 0x1093a808 +24; also ?g_1093a808@@3VCUnknown10359c50@@A
char g_1093a808[24];
// 0x1093a824 +76
#pragma bss_seg(".bss$1093a8240")
namespace lifted { char g_1093a824; }
#pragma bss_seg(".bss$1093a8241")
char pcd_fill_1093a824[75];
#pragma bss_seg()
// 0x1093a8a0 +24; also ?g_1093a8a0@@3VCUnknown10359c50@@A
char g_1093a8a0[24];
// 0x1093a8b8 +24; also ?g_1093a8b8@@3VCUnknown10359c50@@A
char g_1093a8b8[24];
// 0x1093a908 +24; also ?g_1093a908@@3VCUnknown10359c50@@A
char g_1093a908[24];
// 0x1093a920 +24; also ?g_1093a920@@3VCUnknown10359c50@@A
char g_1093a920[24];
// 0x1093a950 +24; also ?g_1093a950@@3VCUnknown10359c50@@A
char g_1093a950[24];
// 0x1093a968 +24; also ?g_1093a968@@3VCUnknown10359c50@@A
char g_1093a968[24];
// 0x1093a984 +68
#pragma bss_seg(".bss$1093a9840")
CChangBrosConVar *g_1093a984;
#pragma bss_seg(".bss$1093a9841")
char pcd_fill_1093a984[64];
#pragma bss_seg()
// 0x1093a9cc +64
#pragma bss_seg(".bss$1093a9cc0")
CChangBrosConVar *g_1093a9cc;
#pragma bss_seg(".bss$1093a9cc1")
char pcd_fill_1093a9cc[60];
#pragma bss_seg()
// 0x1093aa2c +64
#pragma bss_seg(".bss$1093aa2c0")
CChangBrosConVar *g_1093aa2c;
#pragma bss_seg(".bss$1093aa2c1")
char pcd_fill_1093aa2c[60];
#pragma bss_seg()
// 0x1093aa8c +44
#pragma bss_seg(".bss$1093aa8c0")
namespace lifted { char g_1093aa8c; }
#pragma bss_seg(".bss$1093aa8c1")
char pcd_fill_1093aa8c[43];
#pragma bss_seg()
// 0x1093aab8 +168
#pragma bss_seg(".bss$1093aab80")
namespace lifted { char g_1093aab8; }
#pragma bss_seg(".bss$1093aab81")
char pcd_fill_1093aab8[167];
#pragma bss_seg()
// 0x1093ab80 +24; also ?g_1093ab80@@3VCUnknown10359c50@@A
char g_1093ab80[24];
// 0x1093ab98 +24; also ?g_1093ab98@@3VCUnknown10359c50@@A
char g_1093ab98[24];
// 0x1093ac78 +24; also ?g_1093ac78@@3VCUnknown10359c50@@A
char g_1093ac78[24];
// 0x1093ac90 +24; also ?g_1093ac90@@3VCUnknown10359c50@@A
char g_1093ac90[24];
// 0x1093aca8 +4; also ?g_1093aca8@@3PADA ?g_1093aca8@lifted@@3HA
float g_1093aca8;
// 0x1093acac +4; also ?g_1093acac@@3PADA
int g_1093acac;
// 0x1093acb0 +32; also ?g_1093acb0@@3PADA
#pragma bss_seg(".bss$1093acb00")
int g_1093acb0;
#pragma bss_seg(".bss$1093acb01")
char pcd_fill_1093acb0[28];
#pragma bss_seg()
// 0x1093acf0 +24; also ?g_1093acf0@@3VCUnknown10359c50@@A
char g_1093acf0[24];
// 0x1093ad08 +24; also ?g_1093ad08@@3VCUnknown10359c50@@A
char g_1093ad08[24];
// 0x1093ad24 +64
#pragma bss_seg(".bss$1093ad240")
ConVar *g_1093ad24;
#pragma bss_seg(".bss$1093ad241")
char pcd_fill_1093ad24[60];
#pragma bss_seg()
// 0x1093ada8 +128; also ?g_1093ada8@@3PAPAUShadowElem@@A
CEdictView376 *g_1093ada8[32];
// 0x1093ae60 +24; also ?g_1093ae60@@3VCUnknown10359c50@@A
char g_1093ae60[24];
// 0x1093ae78 +36; also ?g_1093ae78@@3VCUnknown10359c50@@A
char g_1093ae78[36];
// 0x1093ae9c +60
#pragma bss_seg(".bss$1093ae9c0")
int g_1093ae9c;
#pragma bss_seg(".bss$1093ae9c1")
char pcd_fill_1093ae9c[56];
#pragma bss_seg()
// 0x1093af10 +24; also ?g_1093af10@@3VCUnknown10359c50@@A
char g_1093af10[24];
// 0x1093af28 +48; also ?g_1093af28@@3VCUnknown10359c50@@A
char g_1093af28[48];
// 0x1093afac +68
#pragma bss_seg(".bss$1093afac0")
CGargScale *g_1093afac;
#pragma bss_seg(".bss$1093afac1")
char pcd_fill_1093afac[64];
#pragma bss_seg()
// 0x1093b008 +24; also ?g_1093b008@@3VCUnknown10359c50@@A
char g_1093b008[24];
// 0x1093b020 +24; also ?g_1093b020@@3VCUnknown10359c50@@A
char g_1093b020[24];
// 0x1093b054 +132
#pragma bss_seg(".bss$1093b0540")
CGargScale *g_1093b054;
#pragma bss_seg(".bss$1093b0541")
char pcd_fill_1093b054[128];
#pragma bss_seg()
// 0x1093b110 +24; also ?g_1093b110@@3VCUnknown10359c50@@A
char g_1093b110[24];
// 0x1093b128 +24; also ?g_1093b128@@3VCUnknown10359c50@@A
char g_1093b128[24];
// 0x1093b180 +24; also ?g_1093b180@@3VCUnknown10359c50@@A
char g_1093b180[24];
// 0x1093b198 +24; also ?g_1093b198@@3VCUnknown10359c50@@A
char g_1093b198[24];
// 0x1093b1f4 +64
#pragma bss_seg(".bss$1093b1f40")
IPhysTune2 *g_1093b1f4;
#pragma bss_seg(".bss$1093b1f41")
char pcd_fill_1093b1f4[60];
#pragma bss_seg()
// 0x1093b23c +64
#pragma bss_seg(".bss$1093b23c0")
CHengScale *g_1093b23c;
#pragma bss_seg(".bss$1093b23c1")
char pcd_fill_1093b23c[60];
#pragma bss_seg()
// 0x1093b29c +68
#pragma bss_seg(".bss$1093b29c0")
IPhysTune2 *g_1093b29c;
#pragma bss_seg(".bss$1093b29c1")
char pcd_fill_1093b29c[64];
#pragma bss_seg()
// 0x1093b340 +24; also ?g_1093b340@@3VCUnknown10359c50@@A
char g_1093b340[24];
// 0x1093b358 +104; also ?g_1093b358@@3VCUnknown10359c50@@A
char g_1093b358[104];
// 0x1093b3f8 +24; also ?g_1093b3f8@@3VCUnknown10359c50@@A
char g_1093b3f8[24];
// 0x1093b410 +24; also ?g_1093b410@@3VCUnknown10359c50@@A
char g_1093b410[24];
// 0x1093b428 +80
#pragma bss_seg(".bss$1093b4280")
namespace lifted { char g_1093b428; }
#pragma bss_seg(".bss$1093b4281")
char pcd_fill_1093b428[79];
#pragma bss_seg()
// 0x1093b4b0 +24; also ?g_1093b4b0@@3VCUnknown10359c50@@A
char g_1093b4b0[24];
// 0x1093b4c8 +24; also ?g_1093b4c8@@3VCUnknown10359c50@@A
char g_1093b4c8[24];
// 0x1093b4e0 +80
#pragma bss_seg(".bss$1093b4e00")
namespace lifted { char g_1093b4e0; }
#pragma bss_seg(".bss$1093b4e01")
char pcd_fill_1093b4e0[79];
#pragma bss_seg()
// 0x1093b550 +24; also ?g_1093b550@@3VCUnknown10359c50@@A
char g_1093b550[24];
// 0x1093b568 +24; also ?g_1093b568@@3VCUnknown10359c50@@A
char g_1093b568[24];
// 0x1093b598 +80
#pragma bss_seg(".bss$1093b5980")
namespace lifted { char g_1093b598; }
#pragma bss_seg(".bss$1093b5981")
char pcd_fill_1093b598[79];
#pragma bss_seg()
// 0x1093b620 +24; also ?g_1093b620@@3VCUnknown10359c50@@A
char g_1093b620[24];
// 0x1093b638 +24; also ?g_1093b638@@3VCUnknown10359c50@@A
char g_1093b638[24];
// 0x1093b658 +32
#pragma bss_seg(".bss$1093b6580")
float g_1093b658;
#pragma bss_seg(".bss$1093b6581")
char pcd_fill_1093b658[28];
#pragma bss_seg()
// 0x1093b6b0 +24; also ?g_1093b6b0@@3VCUnknown10359c50@@A
char g_1093b6b0[24];
// 0x1093b6c8 +48; also ?g_1093b6c8@@3VCUnknown10359c50@@A
char g_1093b6c8[48];
// 0x1093b730 +24; also ?g_1093b730@@3VCUnknown10359c50@@A
char g_1093b730[24];
// 0x1093b748 +48; also ?g_1093b748@@3VCUnknown10359c50@@A
char g_1093b748[48];
// 0x1093b790 +24; also ?g_1093b790@@3VCUnknown10359c50@@A
char g_1093b790[24];
// 0x1093b7a8 +24; also ?g_1093b7a8@@3VCUnknown10359c50@@A
char g_1093b7a8[24];
// 0x1093b814 +68
#pragma bss_seg(".bss$1093b8140")
DebugCvarMB *g_1093b814;
#pragma bss_seg(".bss$1093b8141")
char pcd_fill_1093b814[64];
#pragma bss_seg()
// 0x1093b85c +64
#pragma bss_seg(".bss$1093b85c0")
CGameChecker *g_1093b85c;
#pragma bss_seg(".bss$1093b85c1")
char pcd_fill_1093b85c[60];
#pragma bss_seg()
// 0x1093b930 +24; also ?g_1093b930@@3VCUnknown10359c50@@A
char g_1093b930[24];
// 0x1093b948 +24; also ?g_1093b948@@3VCUnknown10359c50@@A
char g_1093b948[24];
// 0x1093b9b4 +68
#pragma bss_seg(".bss$1093b9b40")
CUnk1093b9b4 *g_1093b9b4;
#pragma bss_seg(".bss$1093b9b41")
char pcd_fill_1093b9b4[64];
#pragma bss_seg()
// 0x1093ba8c +64
#pragma bss_seg(".bss$1093ba8c0")
IGameClientsX *g_1093ba8c;
#pragma bss_seg(".bss$1093ba8c1")
char pcd_fill_1093ba8c[60];
#pragma bss_seg()
// 0x1093bb14 +68
#pragma bss_seg(".bss$1093bb140")
CTuning1093bb14 *g_1093bb14;
#pragma bss_seg(".bss$1093bb141")
char pcd_fill_1093bb14[64];
#pragma bss_seg()
// 0x1093bb5c +64
#pragma bss_seg(".bss$1093bb5c0")
CUnknown1093bb5c *g_1093bb5c;
#pragma bss_seg(".bss$1093bb5c1")
char pcd_fill_1093bb5c[60];
#pragma bss_seg()
// 0x1093bd50 +24; also ?g_1093bd50@@3VCUnknown10359c50@@A
char g_1093bd50[24];
// 0x1093bd68 +24; also ?g_1093bd68@@3VCUnknown10359c50@@A
char g_1093bd68[24];
// 0x1093bdf0 +24; also ?g_1093bdf0@@3VCUnknown10359c50@@A
char g_1093bdf0[24];
// 0x1093be08 +24; also ?g_1093be08@@3VCUnknown10359c50@@A
char g_1093be08[24];
// 0x1093be8c +84; also ?g_1093be8c@@3PAUCDevFlagObj@@A
char g_1093be8c[84];
// 0x1093bf00 +24; also ?g_1093bf00@@3VCUnknown10359c50@@A
char g_1093bf00[24];
// 0x1093bf18 +24; also ?g_1093bf18@@3VCUnknown10359c50@@A
char g_1093bf18[24];
// 0x1093bfc8 +24; also ?g_1093bfc8@@3VCUnknown10359c50@@A
char g_1093bfc8[24];
// 0x1093bfe0 +24; also ?g_1093bfe0@@3VCUnknown10359c50@@A
char g_1093bfe0[24];
// 0x1093c058 +24; also ?g_1093c058@@3VCUnknown10359c50@@A
char g_1093c058[24];
// 0x1093c070 +24; also ?g_1093c070@@3VCUnknown10359c50@@A
char g_1093c070[24];
// 0x1093c0a4 +76
#pragma bss_seg(".bss$1093c0a40")
namespace lifted { char g_1093c0a4; }
#pragma bss_seg(".bss$1093c0a41")
char pcd_fill_1093c0a4[75];
#pragma bss_seg()
// 0x1093c104 +68
#pragma bss_seg(".bss$1093c1040")
ConVar *g_1093c104;
#pragma bss_seg(".bss$1093c1041")
char pcd_fill_1093c104[64];
#pragma bss_seg()
// 0x1093c14c +64
#pragma bss_seg(".bss$1093c14c0")
ConVar *g_1093c14c;
#pragma bss_seg(".bss$1093c14c1")
char pcd_fill_1093c14c[60];
#pragma bss_seg()
// 0x1093c1a8 +24; also ?g_1093c1a8@@3VCUnknown10359c50@@A
char g_1093c1a8[24];
// 0x1093c1c0 +24; also ?g_1093c1c0@@3VCUnknown10359c50@@A
char g_1093c1c0[24];
// 0x1093c1f4 +64; also ?g_1093c1f4@@3PAVConVar@@A
#pragma bss_seg(".bss$1093c1f40")
CTimer *g_1093c1f4;
#pragma bss_seg(".bss$1093c1f41")
char pcd_fill_1093c1f4[60];
#pragma bss_seg()
// 0x1093c234 +116
#pragma bss_seg(".bss$1093c2340")
namespace lifted { char g_1093c234; }
#pragma bss_seg(".bss$1093c2341")
char pcd_fill_1093c234[115];
#pragma bss_seg()
// 0x1093c34c +68
#pragma bss_seg(".bss$1093c34c0")
CUnk1093c34c *g_1093c34c;
#pragma bss_seg(".bss$1093c34c1")
char pcd_fill_1093c34c[64];
#pragma bss_seg()
// 0x1093c408 +24; also ?g_1093c408@@3VCUnknown10359c50@@A
char g_1093c408[24];
// 0x1093c420 +104; also ?g_1093c420@@3VCUnknown10359c50@@A
char g_1093c420[104];
// 0x1093c4a8 +24; also ?g_1093c4a8@@3VCUnknown10359c50@@A
char g_1093c4a8[24];
// 0x1093c4c0 +32; also ?g_1093c4c0@@3VCUnknown10359c50@@A
char g_1093c4c0[32];
// 0x1093c538 +24; also ?g_1093c538@@3VCUnknown10359c50@@A
char g_1093c538[24];
// 0x1093c550 +24; also ?g_1093c550@@3VCUnknown10359c50@@A
char g_1093c550[24];
// 0x1093c5d4 +92
#pragma bss_seg(".bss$1093c5d40")
namespace lifted { char g_1093c5d4; }
#pragma bss_seg(".bss$1093c5d41")
char pcd_fill_1093c5d4[91];
#pragma bss_seg()
// 0x1093c650 +24; also ?g_1093c650@@3VCUnknown10359c50@@A
char g_1093c650[24];
// 0x1093c668 +24; also ?g_1093c668@@3VCUnknown10359c50@@A
char g_1093c668[24];
// 0x1093c698 +80
#pragma bss_seg(".bss$1093c6980")
namespace lifted { char g_1093c698; }
#pragma bss_seg(".bss$1093c6981")
char pcd_fill_1093c698[79];
#pragma bss_seg()
// 0x1093c708 +24; also ?g_1093c708@@3VCUnknown10359c50@@A
char g_1093c708[24];
// 0x1093c720 +24; also ?g_1093c720@@3VCUnknown10359c50@@A
char g_1093c720[24];
// 0x1093c754 +76
#pragma bss_seg(".bss$1093c7540")
namespace lifted { char g_1093c754; }
#pragma bss_seg(".bss$1093c7541")
char pcd_fill_1093c754[75];
#pragma bss_seg()
// 0x1093c7c0 +24; also ?g_1093c7c0@@3VCUnknown10359c50@@A
char g_1093c7c0[24];
// 0x1093c7d8 +24; also ?g_1093c7d8@@3VCUnknown10359c50@@A
char g_1093c7d8[24];
// 0x1093c848 +24; also ?g_1093c848@@3VCUnknown10359c50@@A
char g_1093c848[24];
// 0x1093c860 +24; also ?g_1093c860@@3VCUnknown10359c50@@A
char g_1093c860[24];
// 0x1093c918 +24; also ?g_1093c918@@3VCUnknown10359c50@@A
char g_1093c918[24];
// 0x1093c930 +24; also ?g_1093c930@@3VCUnknown10359c50@@A
char g_1093c930[24];
// 0x1093c998 +24; also ?g_1093c998@@3VCUnknown10359c50@@A
char g_1093c998[24];
// 0x1093c9b0 +24; also ?g_1093c9b0@@3VCUnknown10359c50@@A
char g_1093c9b0[24];
// 0x1093c9fc +64
#pragma bss_seg(".bss$1093c9fc0")
CNPC_VTzimisceConVar *g_1093c9fc;
#pragma bss_seg(".bss$1093c9fc1")
char pcd_fill_1093c9fc[60];
#pragma bss_seg()
// 0x1093cad4 +68
#pragma bss_seg(".bss$1093cad40")
CNPC_VTzimisceConVar *g_1093cad4;
#pragma bss_seg(".bss$1093cad41")
char pcd_fill_1093cad4[64];
#pragma bss_seg()
// 0x1093cb1c +64
#pragma bss_seg(".bss$1093cb1c0")
IPhysTune2 *g_1093cb1c;
#pragma bss_seg(".bss$1093cb1c1")
char pcd_fill_1093cb1c[60];
#pragma bss_seg()
// 0x1093cb64 +68
#pragma bss_seg(".bss$1093cb640")
IPhysTune2 *g_1093cb64;
#pragma bss_seg(".bss$1093cb641")
char pcd_fill_1093cb64[64];
#pragma bss_seg()
// 0x1093cce4 +68
#pragma bss_seg(".bss$1093cce40")
CNPC_VTzimisceConVar *g_1093cce4;
#pragma bss_seg(".bss$1093cce41")
char pcd_fill_1093cce4[64];
#pragma bss_seg()
// 0x1093cd70 +256
char g_1093cd70[256];
// 0x1093ce88 +24; also ?g_1093ce88@@3VCUnknown10359c50@@A
char g_1093ce88[24];
// 0x1093cea0 +24; also ?g_1093cea0@@3VCUnknown10359c50@@A
char g_1093cea0[24];
// 0x1093cebc +68
#pragma bss_seg(".bss$1093cebc0")
CNPC_VTzimisceConVar *g_1093cebc;
#pragma bss_seg(".bss$1093cebc1")
char pcd_fill_1093cebc[64];
#pragma bss_seg()
// 0x1093cf4c +68
#pragma bss_seg(".bss$1093cf4c0")
CObj1093cf4c *g_1093cf4c;
#pragma bss_seg(".bss$1093cf4c1")
char pcd_fill_1093cf4c[64];
#pragma bss_seg()
// 0x1093cf94 +68
#pragma bss_seg(".bss$1093cf940")
CNPC_VTzimisceConVar *g_1093cf94;
#pragma bss_seg(".bss$1093cf941")
char pcd_fill_1093cf94[64];
#pragma bss_seg()
// 0x1093cfdc +64
#pragma bss_seg(".bss$1093cfdc0")
CNPC_VTzimisceConVar *g_1093cfdc;
#pragma bss_seg(".bss$1093cfdc1")
char pcd_fill_1093cfdc[60];
#pragma bss_seg()
// 0x1093d01c +324
#pragma bss_seg(".bss$1093d01c0")
float g_1093d01c;
#pragma bss_seg(".bss$1093d01c1")
char pcd_fill_1093d01c[320];
#pragma bss_seg()
// 0x1093d178 +24; also ?g_1093d178@@3VCUnknown10359c50@@A
char g_1093d178[24];
// 0x1093d190 +24; also ?g_1093d190@@3VCUnknown10359c50@@A
char g_1093d190[24];
// 0x1093d1f0 +24; also ?g_1093d1f0@@3VCUnknown10359c50@@A
char g_1093d1f0[24];
// 0x1093d208 +24; also ?g_1093d208@@3VCUnknown10359c50@@A
char g_1093d208[24];
// 0x1093d270 +24; also ?g_1093d270@@3VCUnknown10359c50@@A
char g_1093d270[24];
// 0x1093d288 +24; also ?g_1093d288@@3VCUnknown10359c50@@A
char g_1093d288[24];
// 0x1093d2bc +76
#pragma bss_seg(".bss$1093d2bc0")
namespace lifted { char g_1093d2bc; }
#pragma bss_seg(".bss$1093d2bc1")
char pcd_fill_1093d2bc[75];
#pragma bss_seg()
// 0x1093d348 +24; also ?g_1093d348@@3VCUnknown10359c50@@A
char g_1093d348[24];
// 0x1093d360 +48; also ?g_1093d360@@3VCUnknown10359c50@@A
char g_1093d360[48];
// 0x1093d3c8 +24; also ?g_1093d3c8@@3VCUnknown10359c50@@A
char g_1093d3c8[24];
// 0x1093d3e0 +48; also ?g_1093d3e0@@3VCUnknown10359c50@@A
char g_1093d3e0[48];
// 0x1093d414 +64
#pragma bss_seg(".bss$1093d4140")
CWerewolfModeObj *g_1093d414;
#pragma bss_seg(".bss$1093d4141")
char pcd_fill_1093d414[60];
#pragma bss_seg()
// 0x1093d4a0 +64
char g_1093d4a0[64];
// 0x1093d4e4 +68
#pragma bss_seg(".bss$1093d4e40")
CWerewolfCfgView *g_1093d4e4;
#pragma bss_seg(".bss$1093d4e41")
char pcd_fill_1093d4e4[64];
#pragma bss_seg()
// 0x1093d52c +68
#pragma bss_seg(".bss$1093d52c0")
SDifficulty *g_1093d52c;
#pragma bss_seg(".bss$1093d52c1")
char pcd_fill_1093d52c[64];
#pragma bss_seg()
// 0x1093d574 +68; also ?g_1093d574@@3PAUCWerewolfTimerGlobal@@A ?g_1093d574@@3PAVConVar@@A
#pragma bss_seg(".bss$1093d5740")
WWTimerCvar *g_1093d574;
#pragma bss_seg(".bss$1093d5741")
char pcd_fill_1093d574[64];
#pragma bss_seg()
// 0x1093d64c +68
#pragma bss_seg(".bss$1093d64c0")
CWerewolfGate *g_1093d64c;
#pragma bss_seg(".bss$1093d64c1")
char pcd_fill_1093d64c[64];
#pragma bss_seg()
// 0x1093d694 +64
#pragma bss_seg(".bss$1093d6940")
CGlobal1093d694 *g_1093d694;
#pragma bss_seg(".bss$1093d6941")
char pcd_fill_1093d694[60];
#pragma bss_seg()
// 0x1093d6f4 +68
#pragma bss_seg(".bss$1093d6f40")
CWWDevView2 *g_1093d6f4;
#pragma bss_seg(".bss$1093d6f41")
char pcd_fill_1093d6f4[64];
#pragma bss_seg()
// 0x1093d738 +8192
char g_1093d738[8192];
// 0x1093f73c +68; also ?g_1093f73c@@3PAUCUnk1093f73c@@A ?g_1093f73c@@3PAUSWWDev@@A ?g_1093f73c@@3PAVConVar@@A
#pragma bss_seg(".bss$1093f73c0")
CDevObj *g_1093f73c;
#pragma bss_seg(".bss$1093f73c1")
char pcd_fill_1093f73c[64];
#pragma bss_seg()
// 0x1093f814 +68
#pragma bss_seg(".bss$1093f8140")
CWerewolfCfgView *g_1093f814;
#pragma bss_seg(".bss$1093f8141")
char pcd_fill_1093f814[64];
#pragma bss_seg()
// 0x1093f8a4 +68
#pragma bss_seg(".bss$1093f8a40")
CWerewolfGate *g_1093f8a4;
#pragma bss_seg(".bss$1093f8a41")
char pcd_fill_1093f8a4[64];
#pragma bss_seg()
// 0x1093f8ec +64
#pragma bss_seg(".bss$1093f8ec0")
ConVar *g_1093f8ec;
#pragma bss_seg(".bss$1093f8ec1")
char pcd_fill_1093f8ec[60];
#pragma bss_seg()
// 0x1093f95c +68; also ?g_1093f95c@@3PAVConVar@@A
#pragma bss_seg(".bss$1093f95c0")
CWerewolfModeSrc *g_1093f95c;
#pragma bss_seg(".bss$1093f95c1")
char pcd_fill_1093f95c[64];
#pragma bss_seg()
// 0x1093f9a4 +68; also ?g_1093f9a4@@3PAUCWerewolfDevCvar_103cee70@@A ?g_1093f9a4@@3PAVCDevFlagObj@@A
#pragma bss_seg(".bss$1093f9a40")
CWWDevView *g_1093f9a4;
#pragma bss_seg(".bss$1093f9a41")
char pcd_fill_1093f9a4[64];
#pragma bss_seg()
// 0x1093fa00 +24; also ?g_1093fa00@@3VCUnknown10359c50@@A
char g_1093fa00[24];
// 0x1093fa18 +32; also ?g_1093fa18@@3VCUnknown10359c50@@A
char g_1093fa18[32];
// 0x1093fa84 +64
#pragma bss_seg(".bss$1093fa840")
CWerewolfCfgView *g_1093fa84;
#pragma bss_seg(".bss$1093fa841")
char pcd_fill_1093fa84[60];
#pragma bss_seg()
// 0x1093fac4 +1988; also ?g_1093fac4@@3EA
#pragma bss_seg(".bss$1093fac40")
char g_1093fac4;
#pragma bss_seg(".bss$1093fac41")
char pcd_fill_1093fac4[1987];
#pragma bss_seg()
// 0x109402c0 +24; also ?g_109402c0@@3VCUnknown10359c50@@A
char g_109402c0[24];
// 0x109402d8 +24; also ?g_109402d8@@3VCUnknown10359c50@@A
char g_109402d8[24];
// 0x10940348 +24; also ?g_10940348@@3VCUnknown10359c50@@A
char g_10940348[24];
// 0x10940360 +48; also ?g_10940360@@3VCUnknown10359c50@@A
char g_10940360[48];
// 0x109403b0 +24; also ?g_109403b0@@3VCUnknown10359c50@@A
char g_109403b0[24];
// 0x109403c8 +24; also ?g_109403c8@@3VCUnknown10359c50@@A
char g_109403c8[24];
// 0x10940404 +68
#pragma bss_seg(".bss$109404040")
ConVar *g_10940404;
#pragma bss_seg(".bss$109404041")
char pcd_fill_10940404[64];
#pragma bss_seg()
// 0x1094044c +64
#pragma bss_seg(".bss$1094044c0")
ConVar *g_1094044c;
#pragma bss_seg(".bss$1094044c1")
char pcd_fill_1094044c[60];
#pragma bss_seg()
// 0x1094049c +132
#pragma bss_seg(".bss$1094049c0")
CZombieGlobal *g_1094049c;
#pragma bss_seg(".bss$1094049c1")
char pcd_fill_1094049c[128];
#pragma bss_seg()
// 0x10940524 +68
#pragma bss_seg(".bss$109405240")
CUnknown10940524 *g_10940524;
#pragma bss_seg(".bss$109405241")
char pcd_fill_10940524[64];
#pragma bss_seg()
// 0x1094056c +68
#pragma bss_seg(".bss$1094056c0")
CUnknown103e1680 *g_1094056c;
#pragma bss_seg(".bss$1094056c1")
char pcd_fill_1094056c[64];
#pragma bss_seg()
// 0x109405b4 +68
#pragma bss_seg(".bss$109405b40")
CUnknown103e1680 *g_109405b4;
#pragma bss_seg(".bss$109405b41")
char pcd_fill_109405b4[64];
#pragma bss_seg()
// 0x109405fc +68
#pragma bss_seg(".bss$109405fc0")
CUnknown103e1680 *g_109405fc;
#pragma bss_seg(".bss$109405fc1")
char pcd_fill_109405fc[64];
#pragma bss_seg()
// 0x10940644 +68
#pragma bss_seg(".bss$109406440")
CUnknown103e1680 *g_10940644;
#pragma bss_seg(".bss$109406441")
char pcd_fill_10940644[64];
#pragma bss_seg()
// 0x1094068c +156
#pragma bss_seg(".bss$1094068c0")
int g_1094068c;
#pragma bss_seg(".bss$1094068c1")
char pcd_fill_1094068c[152];
#pragma bss_seg()
// 0x10940954 +68
#pragma bss_seg(".bss$109409540")
CUnknown103e1680 *g_10940954;
#pragma bss_seg(".bss$109409541")
char pcd_fill_10940954[64];
#pragma bss_seg()
// 0x10942e24 +4
int g_10942e24;
// 0x10942e28 +180
#pragma bss_seg(".bss$10942e280")
unsigned char g_10942e28;
#pragma bss_seg(".bss$10942e281")
char pcd_fill_10942e28[179];
#pragma bss_seg()
// 0x10942f04 +68
#pragma bss_seg(".bss$10942f040")
ConVar *g_10942f04;
#pragma bss_seg(".bss$10942f041")
char pcd_fill_10942f04[64];
#pragma bss_seg()
// 0x10942f4c +364
#pragma bss_seg(".bss$10942f4c0")
ConVar *g_10942f4c;
#pragma bss_seg(".bss$10942f4c1")
char pcd_fill_10942f4c[360];
#pragma bss_seg()
// 0x109436e8 +344
#pragma bss_seg(".bss$109436e80")
namespace lifted { char g_109436e8; }
#pragma bss_seg(".bss$109436e81")
char pcd_fill_109436e8[343];
#pragma bss_seg()
// 0x1094a944 +68
#pragma bss_seg(".bss$1094a9440")
ConVar *g_1094a944;
#pragma bss_seg(".bss$1094a9441")
char pcd_fill_1094a944[64];
#pragma bss_seg()
// 0x1094a98c +68
#pragma bss_seg(".bss$1094a98c0")
CMeleeRange *g_1094a98c;
#pragma bss_seg(".bss$1094a98c1")
char pcd_fill_1094a98c[64];
#pragma bss_seg()
// 0x1094a9d4 +68
#pragma bss_seg(".bss$1094a9d40")
ConVarView9d4 *g_1094a9d4;
#pragma bss_seg(".bss$1094a9d41")
char pcd_fill_1094a9d4[64];
#pragma bss_seg()
// 0x1094aa7c +68
#pragma bss_seg(".bss$1094aa7c0")
ConVar *g_1094aa7c;
#pragma bss_seg(".bss$1094aa7c1")
char pcd_fill_1094aa7c[64];
#pragma bss_seg()
// 0x1094ab14 +68
#pragma bss_seg(".bss$1094ab140")
ConVar *g_1094ab14;
#pragma bss_seg(".bss$1094ab141")
char pcd_fill_1094ab14[64];
#pragma bss_seg()
// 0x1094abac +68
#pragma bss_seg(".bss$1094abac0")
SConVarX *g_1094abac;
#pragma bss_seg(".bss$1094abac1")
char pcd_fill_1094abac[64];
#pragma bss_seg()
// 0x1094ac3c +68
#pragma bss_seg(".bss$1094ac3c0")
CEntA *g_1094ac3c;
#pragma bss_seg(".bss$1094ac3c1")
char pcd_fill_1094ac3c[64];
#pragma bss_seg()
// 0x1094accc +64; also ?g_1094accc@@3PAUSGrabGlobal1094accc@@A
#pragma bss_seg(".bss$1094accc0")
CGlobal1094accc *g_1094accc;
#pragma bss_seg(".bss$1094accc1")
char pcd_fill_1094accc[60];
#pragma bss_seg()
// 0x1094ad14 +64
#pragma bss_seg(".bss$1094ad140")
CEntB *g_1094ad14;
#pragma bss_seg(".bss$1094ad141")
char pcd_fill_1094ad14[60];
#pragma bss_seg()
// 0x1094afe8 +557056; also ?g_1094afe8@@3PAHA
#pragma bss_seg(".bss$1094afe80")
ActName *g_1094afe8;
#pragma bss_seg(".bss$1094afe81")
char pcd_fill_1094afe8[557052];
#pragma bss_seg()
// 0x109d301c +12; also ?g_109d301c@lifted@@3HA
#pragma bss_seg(".bss$109d301c0")
int g_109d301c;
#pragma bss_seg(".bss$109d301c1")
char pcd_fill_109d301c[8];
#pragma bss_seg()
// 0x109d302c +64; also ?g_109d302c@@3PAVConVar@@A
#pragma bss_seg(".bss$109d302c0")
ActivityList *g_109d302c;
#pragma bss_seg(".bss$109d302c1")
char pcd_fill_109d302c[60];
#pragma bss_seg()
// 0x109d3078 +8
#pragma bss_seg(".bss$109d30780")
int g_109d3078;
#pragma bss_seg(".bss$109d30781")
char pcd_fill_109d3078[4];
#pragma bss_seg()
// 0x109d3080 +111448
#pragma bss_seg(".bss$109d30800")
int g_109d3080;
#pragma bss_seg(".bss$109d30801")
char pcd_fill_109d3080[111444];
#pragma bss_seg()
// 0x109eed2c +32; also ?g_109eed2c@@3UCUnkTree12@@A ?g_109eed2c@@3VCStringPool@@A
char g_109eed2c[32];
// 0x109eed5c +8
#pragma bss_seg(".bss$109eed5c0")
int g_109eed5c;
#pragma bss_seg(".bss$109eed5c1")
char pcd_fill_109eed5c[4];
#pragma bss_seg()
// 0x109eed64 +4; also ?g_109eed64@lifted@@3HA
char *g_109eed64;
// 0x109eed68 +16; also ?g_109eed68@lifted@@3HA
#pragma bss_seg(".bss$109eed680")
AutoSys *g_109eed68;
#pragma bss_seg(".bss$109eed681")
char pcd_fill_109eed68[12];
#pragma bss_seg()
// 0x109eee0c +68; also ?g_109eee0c@@3PAUCVarV@@A
#pragma bss_seg(".bss$109eee0c0")
CNodeV3 *g_109eee0c;
#pragma bss_seg(".bss$109eee0c1")
char pcd_fill_109eee0c[64];
#pragma bss_seg()
// 0x109eee54 +68
#pragma bss_seg(".bss$109eee540")
CMoveTuneView *g_109eee54;
#pragma bss_seg(".bss$109eee541")
char pcd_fill_109eee54[64];
#pragma bss_seg()
// 0x109eee9c +68
#pragma bss_seg(".bss$109eee9c0")
CMoveConVar *g_109eee9c;
#pragma bss_seg(".bss$109eee9c1")
char pcd_fill_109eee9c[64];
#pragma bss_seg()
// 0x109eeee4 +68; also ?g_109eeee4@@3PAUMaxVel@@A
#pragma bss_seg(".bss$109eeee40")
SConVarView *g_109eeee4;
#pragma bss_seg(".bss$109eeee41")
char pcd_fill_109eeee4[64];
#pragma bss_seg()
// 0x109eef2c +68
#pragma bss_seg(".bss$109eef2c0")
CJumpSv2c *g_109eef2c;
#pragma bss_seg(".bss$109eef2c1")
char pcd_fill_109eef2c[64];
#pragma bss_seg()
// 0x109eef74 +68
#pragma bss_seg(".bss$109eef740")
ConVar *g_109eef74;
#pragma bss_seg(".bss$109eef741")
char pcd_fill_109eef74[64];
#pragma bss_seg()
// 0x109eefbc +68; also ?g_109eefbc@@3PAVConVar@@A
#pragma bss_seg(".bss$109eefbc0")
CMoveConVar *g_109eefbc;
#pragma bss_seg(".bss$109eefbc1")
char pcd_fill_109eefbc[64];
#pragma bss_seg()
// 0x109ef004 +68; also ?g_109ef004@@3PAVConVar@@A
#pragma bss_seg(".bss$109ef0040")
CJumpSv28 *g_109ef004;
#pragma bss_seg(".bss$109ef0041")
char pcd_fill_109ef004[64];
#pragma bss_seg()
// 0x109ef04c +68
#pragma bss_seg(".bss$109ef04c0")
S109ef04c *g_109ef04c;
#pragma bss_seg(".bss$109ef04c1")
char pcd_fill_109ef04c[64];
#pragma bss_seg()
// 0x109ef094 +68; also ?g_109ef094@@3PAUStepVar@@A
#pragma bss_seg(".bss$109ef0940")
CStepVar1011e940 *g_109ef094;
#pragma bss_seg(".bss$109ef0941")
char pcd_fill_109ef094[64];
#pragma bss_seg()
// 0x109ef16c +68
#pragma bss_seg(".bss$109ef16c0")
ConVar *g_109ef16c;
#pragma bss_seg(".bss$109ef16c1")
char pcd_fill_109ef16c[64];
#pragma bss_seg()
// 0x109ef1b4 +68
#pragma bss_seg(".bss$109ef1b40")
ConVar *g_109ef1b4;
#pragma bss_seg(".bss$109ef1b41")
char pcd_fill_109ef1b4[64];
#pragma bss_seg()
// 0x109ef28c +68
#pragma bss_seg(".bss$109ef28c0")
ConVar *g_109ef28c;
#pragma bss_seg(".bss$109ef28c1")
char pcd_fill_109ef28c[64];
#pragma bss_seg()
// 0x109ef2d4 +68; also ?g_109ef2d4@@3PAUCGravityCvar@@A ?g_109ef2d4@@3PAUCGravityVar101e7dd0@@A ?g_109ef2d4@@3PAUCVar109ef2d4@@A ?g_109ef2d4@@3PAUGravityObj@@A ?g_109ef2d4@@3PAUS109ef2d4@@A ?g_109ef2d4@@3PAUSGlobalB@@A ?g_109ef2d4@@3PAUSGravVar109ef2d4@@A ?g_109ef2d4@@3PAUSGravVar@@A
#pragma bss_seg(".bss$109ef2d40")
ConVar *g_109ef2d4;
#pragma bss_seg(".bss$109ef2d41")
char pcd_fill_109ef2d4[64];
#pragma bss_seg()
// 0x109ef31c +68
#pragma bss_seg(".bss$109ef31c0")
CMoveTuneView *g_109ef31c;
#pragma bss_seg(".bss$109ef31c1")
char pcd_fill_109ef31c[64];
#pragma bss_seg()
// 0x109ef3ac +68
#pragma bss_seg(".bss$109ef3ac0")
CMoveConVar *g_109ef3ac;
#pragma bss_seg(".bss$109ef3ac1")
char pcd_fill_109ef3ac[64];
#pragma bss_seg()
// 0x109ef58c +4; also ?g_109ef58c@lifted@@3HA
CUnk1042d5a0 *g_109ef58c;
// 0x109f03a0 +956
#pragma bss_seg(".bss$109f03a00")
int g_109f03a0;
#pragma bss_seg(".bss$109f03a01")
char pcd_fill_109f03a0[952];
#pragma bss_seg()
// 0x109f075c +16; also ?g_109f075c@@3P6AXXZA ?g_109f075c@@3PBDB
#pragma bss_seg(".bss$109f075c0")
void *g_109f075c;
#pragma bss_seg(".bss$109f075c1")
char pcd_fill_109f075c[12];
#pragma bss_seg()
// 0x109f076c +5; also ?g_109f076c@@3P6AXXZA
#pragma bss_seg(".bss$109f076c0")
int g_109f076c;
#pragma bss_seg(".bss$109f076c1")
char pcd_fill_109f076c[1];
#pragma bss_seg()
// 0x109f085d +9
#pragma bss_seg(".bss$109f085d0")
unsigned char g_109f085d;
#pragma bss_seg(".bss$109f085d1")
char pcd_fill_109f085d[8];
#pragma bss_seg()
// 0x109f0b64 +4; also ?g_109f0b64@@3P6AXXZA ?g_109f0b64@@3PAURBNode@@A
void *g_109f0b64;
// 0x109f0b68 +4
#pragma bss_seg(".bss$109f0b680")
unsigned char g_109f0b68;
#pragma bss_seg(".bss$109f0b681")
char pcd_fill_109f0b68[3];
#pragma bss_seg()
// 0x109f0b6c +8; also ?g_109f0b6c@@3P6AXXZA ?g_109f0b6c@@3PAURBNode@@A
#pragma bss_seg(".bss$109f0b6c0")
void *g_109f0b6c;
#pragma bss_seg(".bss$109f0b6c1")
char pcd_fill_109f0b6c[4];
#pragma bss_seg()
// 0x109f0b74 +4; also ?g_109f0b74@@3P6AXXZA
int g_109f0b74;
// 0x109f0b7c +7932; also ?g_109f0b7c@@3P6AXXZA
#pragma bss_seg(".bss$109f0b7c0")
int g_109f0b7c;
#pragma bss_seg(".bss$109f0b7c1")
char pcd_fill_109f0b7c[7928];
#pragma bss_seg()
