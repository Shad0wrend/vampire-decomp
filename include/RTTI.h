// RTTI helpers: the type descriptors the game passes to msvcrt's __RTDynamicCast. A `dynamic_cast<T*>(p)` in a source
// emits its own descriptors (wrong addresses), so callers that must reproduce the game's bytes call __RTDynamicCast
// directly with these placeholder descriptors. Other descriptors: declare `extern char g_XXXXXXXX[];`.
// NOTE: __RTDynamicCast itself must NOT be redeclared here: the compiler/the prelude already has it (an `extern "C"`
// redeclaration is refused with C2733), so a source just calls __RTDynamicCast(p, 0, srcTD, dstTD, 0).
#pragma once

extern char g_10538764[];	// 0x10538764: ??_R0?AVCBaseEntity@@@8
extern char g_10560638[];	// 0x10560638: ??_R0?AVCBaseCombatCharacter@@@8
extern char g_1053e8d0[];	// 0x1053e8d0: ??_R0?AVCDisciplineParticle@@@8
extern char g_1053e91c[];	// 0x1053e91c: ??_R0?AVCBaseViewModel@@@8
