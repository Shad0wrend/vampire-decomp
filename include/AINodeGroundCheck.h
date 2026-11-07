// 0x101cd390: the AI node ground check used by the node-placing helper 0x10232ef0 (cdecl, caller pops 12 bytes).
// Builds a CTracePassFilter when the filter argument is null, takes the entity's collision box (slot 237 mask, CCollisionProperty
// slots 1 / 2 + slot 217 origin), drops a 2x2 grid of corner traces (Ray_t call 0x1004f7a0, g_1070b254 slot 4, debug test
// 0x1005f190 / g_10738964) and returns true when every corner stands on ground no further than flStepHeight below.
#pragma once

class CBaseEntity;

char sub_101cd390(CBaseEntity *pEntity, void *pTraceFilter, float flStepHeight);
