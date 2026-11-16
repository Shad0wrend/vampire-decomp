// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fdde0 size=0x5
#include "Vector.h"
Vector g_10709088(0.0f, 0.0f, 0.0f);
// END FUNCTION

// FUNCTION: 0x100fe5d0 size=0x5
int sub_100fe610(void);
int g_10709098 = ((int (*)(int))sub_100fe610)(0);
// END FUNCTION

// FUNCTION: 0x100feb70 size=0x5
int sub_100febb0(void);
int g_1070909c = ((int (*)(int))sub_100febb0)(0);
// END FUNCTION

// FUNCTION: 0x10100eb0 size=0x5
int * sub_10100ef0(void);
int * g_107090c8 = ((int * (*)(int))sub_10100ef0)(0);
// END FUNCTION

// FUNCTION: 0x10101070 size=0xa
#include "ConCommand.h"
void sub_101010c0(void);
ConCommand g_107090a0("fadeout", sub_101010c0, "fadeout {time r g b}: Fades the screen to black or to the specified color over the given number of seconds.", 0, 0);
// END FUNCTION

// FUNCTION: 0x10101270 size=0xa
#include "ConCommand.h"
void sub_101012c0(void);
ConCommand g_107090cc("fadein", sub_101012c0, "fadein {time r g b}: Fades the screen in from black or from the specified color over the given number of seconds.", 0, 0);
// END FUNCTION
