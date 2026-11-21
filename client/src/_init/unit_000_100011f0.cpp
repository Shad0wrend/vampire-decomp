// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10001bd0 size=0xa
#include "ConVar.h"
ConVar g_102de308("camera_fov", "-1", 0);
// END FUNCTION

// FUNCTION: 0x100270c0 size=0xa
#include "ConVar.h"
ConVar g_102e32e0("torchlight_minradius", "190", 0);
// END FUNCTION

// FUNCTION: 0x10027110 size=0xa
#include "ConVar.h"
ConVar g_102e0ed0("torchlight_maxradius", "240", 0);
// END FUNCTION

// FUNCTION: 0x10027160 size=0xa
#include "ConVar.h"
ConVar g_102e26c8("torchlight_enable", "0", 0);
// END FUNCTION

// FUNCTION: 0x100271b0 size=0xa
#include "ConVar.h"
ConVar g_102e71d8("torchlight_fast", "17", 0);
// END FUNCTION

// FUNCTION: 0x10027200 size=0xa
#include "ConVar.h"
ConVar g_102e7220("torchlight_slow", "7", 0);
// END FUNCTION

// FUNCTION: 0x10027250 size=0xa
#include "ConVar.h"
ConVar g_102e0048("torchlight_exponent", "1", 0);
// END FUNCTION

// FUNCTION: 0x100299b0 size=0xa
#include "ConVar.h"
ConVar g_102ea548("ft_link_velocity", "800", 8192, "The initial velocity of a flamethrower link");
// END FUNCTION

// FUNCTION: 0x10029a00 size=0xa
#include "ConVar.h"
ConVar g_102ea4b8("ft_link_drag", ".1", 8192, "The drag applied to a flamethrower link. The velocity is curved by this much each second. ");
// END FUNCTION

// FUNCTION: 0x10029a50 size=0xa
#include "ConVar.h"
ConVar g_102ea470("ft_link_gravity", "-100", 8192, "The amouunt of drop applied to a link, in inches per second.");
// END FUNCTION

// FUNCTION: 0x10029aa0 size=0xa
#include "ConVar.h"
ConVar g_102ea500("ft_link_lifetime", "1", 8192, "How long a link in the chain lives");
// END FUNCTION

// FUNCTION: 0x10029af0 size=0xa
#include "ConVar.h"
ConVar g_102ea590("ft_draw_chain", "0", 8192, "Set to 1 to draw the client chain, 2 to draw the server, 3 for both, 0 for none.");
// END FUNCTION
