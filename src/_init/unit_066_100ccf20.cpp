// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100ccf20 size=0x5
int sub_100ccf60(void);
int g_106e6ff4 = ((int (*)(int))sub_100ccf60)(0);
// END FUNCTION

// FUNCTION: 0x100cd190 size=0xa
#define PCD_INITIALIZERS
#include "Pool.h"
Pool g_106e6fc8(32, 512, 1);
// END FUNCTION

// FUNCTION: 0x100cd720 size=0x5
int * sub_100cd760(void);
int * g_106e6f98 = ((int * (*)(int))sub_100cd760)(0);
// END FUNCTION

// FUNCTION: 0x100cd9a0 size=0x5
#include "CEventsSaveDataOps.h"
CEventsSaveDataOps g_106e70d8;
// END FUNCTION

// FUNCTION: 0x100cdca0 size=0xa
#define PCD_INITIALIZERS
#include "CUnk100cdd20.h"
CUnk100cdd20 g_106e7050;
// END FUNCTION

// FUNCTION: 0x100cf6a0 size=0xa
#include "ConCommand.h"
void sub_100cf680(void);
ConCommand g_106e70b0("debug_dump_eventqueue", sub_100cf680, "Dumps a list of the current event queue.", 0, 0);
// END FUNCTION

// FUNCTION: 0x100cfae0 size=0x5
#include "datamap.h"
// EventQueuePrioritizedEvent_t's DATADESC (the SDK's BEGIN_SIMPLE_DATADESC in eventqueue.cpp, with the game's Python
// fields; no dummy entry: the save code hands this table itself on). The custom fields name their ops through pointer
// variables, so VC6 builds the table from the first of them on at load time.
extern ISaveRestoreOps *g_1055deb4;	// the Python object ops (CPyObjStrSaveRestoreDataOps 0x106e6ffc)
extern ISaveRestoreOps *g_1055e01c;	// variantFuncs (CVariantSaveDataOps 0x106e70dc)
extern ISaveRestoreOps *g_1055deb8;	// the VTS dependency ops (CVTSDependencySaveRestoreDataOps 0x106e6ff8)
typedescription_t g_1055dca0[] = {
	{ 15, "m_flFireTime", {0x00, 0}, 1, 2, 0, 0, 0 },
	{ 2, "m_iTarget", {0x04, 0}, 1, 2, 0, 0, 0 },
	{ 2, "m_iTargetInput", {0x08, 0}, 1, 2, 0, 0, 0 },
	{ 12, "m_pActivator", {0x0c, 0}, 1, 2, 0, 0, 0 },
	{ 12, "m_pCaller", {0x10, 0}, 1, 2, 0, 0, 0 },
	{ 4, "m_iOutputID", {0x14, 0}, 1, 2, 0, 0, 0 },
	{ 12, "m_pEntTarget", {0x18, 0}, 1, 2, 0, 0, 0 },
	{ 10, "m_pPyObj", {0x1c, 0}, 1, 2, 0, g_1055deb4, 0 },
	{ 10, "m_VariantValue", {0x20, 0}, 1, 2, 0, g_1055e01c, 0 },
	{ 4, "m_qeType", {0x34, 0}, 1, 2, 0, 0, 0 },
	{ 2, "m_iScript", {0x3c, 0}, 1, 2, 0, 0, 0 },
	{ 10, "m_vtsDependency", {0x40, 0}, 1, 2, 0, g_1055deb8, 0 },
};
// END FUNCTION

// FUNCTION: 0x100cfe80 size=0x5
#include "CEQ_SaveRestoreBlockHandler.h"
CEQ_SaveRestoreBlockHandler g_106e70a8;
// END FUNCTION

// FUNCTION: 0x100cffc0 size=0x5
#include "CPyObjStrSaveRestoreDataOps.h"
CPyObjStrSaveRestoreDataOps g_106e6ffc;
// END FUNCTION

// FUNCTION: 0x100d01b0 size=0x5
#include "CVTSDependencySaveRestoreDataOps.h"
CVTSDependencySaveRestoreDataOps g_106e6ff8;
// END FUNCTION

// FUNCTION: 0x100d0c50 size=0x5
#include "CVariantSaveDataOps.h"
CVariantSaveDataOps g_106e70dc;
// END FUNCTION

// FUNCTION: 0x100d1160 size=0xa
#define PCD_INITIALIZERS
#include "Pool.h"
Pool g_106e6f9c(8, 256, 0);
// END FUNCTION
