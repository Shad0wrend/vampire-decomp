// g_1093b718: the four CUnknown10359c50 registry objects the CNPC_VMalkavian schedule loader (0x10389730) uses.
// The schedule / task / condition objects are 0x18 apart (0x1093b718 / 0x1093b730 / 0x1093b748); the
// squadslot one sits below them at 0x1093b6fc.
#pragma once

#include "CUnknown10359c50.h"

extern CUnknown10359c50 g_1093b718;	// 0x1093b718: schedule registry
extern CUnknown10359c50 g_1093b730;	// 0x1093b730: task registry (+0x18)
extern CUnknown10359c50 g_1093b748;	// 0x1093b748: condition registry (+0x30)
extern CUnknown10359c50 g_1093b6fc;	// 0x1093b6fc: squadslot registry
