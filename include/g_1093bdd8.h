// g_1093bdd8: the four CUnknown10359c50 registry objects the CNPC_VMoleman schedule loader (0x1039f7d0) uses.
// The schedule / task / condition objects are 0x18 apart (0x1093bdd8 / 0x1093bdf0 / 0x1093be08); the
// squadslot one sits below them at 0x1093bdb8.
#pragma once

#include "CUnknown10359c50.h"

extern CUnknown10359c50 g_1093bdd8;	// 0x1093bdd8: schedule registry
extern CUnknown10359c50 g_1093bdf0;	// 0x1093bdf0: task registry (+0x18)
extern CUnknown10359c50 g_1093be08;	// 0x1093be08: condition registry (+0x30)
extern CUnknown10359c50 g_1093bdb8;	// 0x1093bdb8: squadslot registry
