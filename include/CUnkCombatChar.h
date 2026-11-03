// CUnkCombatChar and sub_1040d970: declared in vampire.h until the prelude was slimmed (pcdecomp slim
// prelude); vampire.h includes this header at their old place.
#pragma once

struct CUnkCombatChar;
void sub_1040d970(CUnkCombatChar *pOther);	// vfunc39 helper shared by CPhysBox / CSimplePhysicsBrush / CSimplePhysicsProp / CRagdollProp / CPhysicsProp: resolves the combat character of the edict behind pOther (sub_102587f0 / CBaseCombatCharacter::sub_10335950) and calls its slot 327
