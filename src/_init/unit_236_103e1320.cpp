// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e1320 size=0xa
#include "ConVar.h"
ConVar g_10940640("ft_link_velocity", "800", 8192, "The initial velocity of a flamethrower link");
// END FUNCTION

// FUNCTION: 0x103e13b0 size=0xa
#include "ConVar.h"
ConVar g_109405b0("ft_link_drag", ".1", 8192, "The drag applied to a flamethrower link. The velocity is curved by this much each second. ");
// END FUNCTION

// FUNCTION: 0x103e1440 size=0xa
#include "ConVar.h"
ConVar g_10940568("ft_link_gravity", "-100", 8192, "The amouunt of drop applied to a link, in inches per second.");
// END FUNCTION
