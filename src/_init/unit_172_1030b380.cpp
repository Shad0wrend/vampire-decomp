// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1030b380 size=0x5
int sub_1030b3c0(void);
int g_10936b44 = ((int (*)(int))sub_1030b3c0)(0);
// END FUNCTION

// FUNCTION: 0x1030b3f0 size=0xa
#include "utlmemory.h"
#define PCD_INITIALIZERS
#include "Vector.h"
#include "CAI_Waypoint.h"
#include "PcdGuarded.h"
template <> CAI_Waypoint PcdGuarded<0x10936afc, CAI_Waypoint>::s_object(Vector(0, 0, 0).Base(), 0, -1, 0, 0);
// END FUNCTION
