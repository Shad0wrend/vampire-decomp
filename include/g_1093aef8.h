// g_1093aef8: the four CUnknown10359c50 registry objects the CNPC_VGangrel schedule loader (0x10377240) uses.
// The schedule / task / condition objects are 0x18 apart (0x1093aef8 / 0x1093af10 / 0x1093af28); the
// squadslot one sits below them at 0x1093aed8.
#pragma once

#include "CUnknown10359c50.h"

extern CUnknown10359c50 g_1093aef8;	// 0x1093aef8: schedule registry
extern CUnknown10359c50 g_1093af10;	// 0x1093af10: task registry (+0x18)
extern CUnknown10359c50 g_1093af28;	// 0x1093af28: condition registry (+0x30)
extern CUnknown10359c50 g_1093aed8;	// 0x1093aed8: squadslot registry
