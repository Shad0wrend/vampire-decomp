// g_1093c638: the four 0x18-byte CUnknown10359c50 registry objects the NPC schedule loader uses
// (stride 0x18: schedule / task / condition / squadslot). Loaded by the CNPC_VSheriffSwarm registration
// function 0x103b1df0 (and siblings such as 0x10366e40 for CNPC_VBatSwarm).
#pragma once

#include "CUnknown10359c50.h"

extern CUnknown10359c50 g_1093c638;	// 0x1093c638: schedule registry
extern CUnknown10359c50 g_1093c650;	// 0x1093c650: task registry (+0x18)
extern CUnknown10359c50 g_1093c668;	// 0x1093c668: condition registry (+0x30)
extern CUnknown10359c50 g_1093c680;	// 0x1093c680: squadslot registry (+0x48)
