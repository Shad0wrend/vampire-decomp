// g_1093c980: the four 0x18-byte CUnknown10359c50 registry objects the CNPC_VTremere schedule loader
// (0x103b5ca0) uses (stride 0x18: schedule / task / condition / squadslot).
#pragma once

#include "CUnknown10359c50.h"

extern CUnknown10359c50 g_1093c980;	// 0x1093c980: schedule registry
extern CUnknown10359c50 g_1093c998;	// 0x1093c998: task registry (+0x18)
extern CUnknown10359c50 g_1093c9b0;	// 0x1093c9b0: condition registry (+0x30)
extern CUnknown10359c50 g_1093c9c8;	// 0x1093c9c8: squadslot registry (+0x48)
