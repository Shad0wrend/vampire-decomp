// g_1093a688: the four 0x18-byte CUnknown10359c50 registry objects the NPC schedule loader uses
// (stride 0x18: schedule / task / condition / squadslot). Loaded by the per-NPC registration functions
// such as 0x10366e40 ("CNPC_VBatSwarm" loader).
#pragma once

#include "CUnknown10359c50.h"

extern CUnknown10359c50 g_1093a688;	// 0x1093a688: schedule registry
extern CUnknown10359c50 g_1093a6a0;	// 0x1093a6a0: task registry (+0x18)
extern CUnknown10359c50 g_1093a6b8;	// 0x1093a6b8: condition registry (+0x30)
extern CUnknown10359c50 g_1093a6d0;	// 0x1093a6d0: squadslot registry (+0x48)
