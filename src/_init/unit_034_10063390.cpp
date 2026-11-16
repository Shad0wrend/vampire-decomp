// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10063390 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c383c;
extern char g_10543610[];
ServerClassReg g_106c3858("CTEShatterSurface", &g_106c383c, g_10543610);
// END FUNCTION

// FUNCTION: 0x10063440 size=0xa
#include "SendTable.h"
SendTable g_106c383c;
// END FUNCTION

// FUNCTION: 0x100634c0 size=0x5
int sub_10063500(void);
int g_106c3838 = ((int (*)(int))sub_10063500)(0);
// END FUNCTION

// FUNCTION: 0x10063800 size=0xa
#define PCD_INITIALIZERS
#include "CTEShatterSurface.h"
CTEShatterSurface g_106c3870("Surface Shatter");
// END FUNCTION
