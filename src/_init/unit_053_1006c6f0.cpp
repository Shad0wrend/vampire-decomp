// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1006c6f0 size=0xa
#define PCD_INITIALIZERS
#include "CUnknown1006ccc0.h"
CUnknown1006ccc0 g_106c7c34;
// END FUNCTION

// FUNCTION: 0x1006d180 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c7f68;
extern char g_106c8184[];
ServerClassReg g_106c816c("CBaseCineCam", &g_106c7f68, g_106c8184);
// END FUNCTION

// FUNCTION: 0x1006d230 size=0xa
#include "SendTable.h"
SendTable g_106c7f68;
// END FUNCTION

// FUNCTION: 0x1006d2b0 size=0x5
int sub_1006d2f0(void);
int g_106c7f64 = ((int (*)(int))sub_1006d2f0)(0);
// END FUNCTION

// FUNCTION: 0x1006d520 size=0x5
int sub_1006d560(void);
int g_106c7f84 = ((int (*)(int))sub_1006d560)(0);
// END FUNCTION

// FUNCTION: 0x1006d590 size=0xa
#include "ConVar.h"
ConVar g_106c7fa0("camera_showdebug", "0", 0);
// END FUNCTION

// FUNCTION: 0x10070aa0 size=0x5
int * sub_10070ae0(void);
int * g_106c7fe8 = ((int * (*)(int))sub_10070ae0)(0);
// END FUNCTION

// FUNCTION: 0x10070f90 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c7c54;
extern char g_10546930[];
ServerClassReg g_106c7f88("CCameraAnimated", &g_106c7c54, g_10546930);
// END FUNCTION

// FUNCTION: 0x10071040 size=0xa
#include "SendTable.h"
SendTable g_106c7c54;
// END FUNCTION

// FUNCTION: 0x100710c0 size=0x5
int sub_10071100(void);
int g_106c7c50 = ((int (*)(int))sub_10071100)(0);
// END FUNCTION

// FUNCTION: 0x10071a50 size=0xa
#include "ConCommand.h"
void sub_10071970(void);
ConCommand g_106c8144("camera_kill", sub_10071970, "Kills all cinematic cameras", 0, 0);
// END FUNCTION
