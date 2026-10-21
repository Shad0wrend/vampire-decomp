// CUnknown10208c90: NPC class with an input handler (0x10208c90) taking the activator in its input data; real name not yet known.
#pragma once

struct inputdata_t;

class CUnknown10208c90
{
public:
	void sub_10208c90(inputdata_t *pInput);	// input handler: for an activator with an object at +0xa8 that is not refused by sub_10008a44: plays the "Openable" scheme sound; when the handle at +0x1a28 still resolves, sends "hidebarter" to the local player, clears the handle, runs slot 407 and CBaseEntity's slot 42 on the object; else takes the handle of the activator's owner (+0x9c) as the new target, hands it to CBaseCombatCharacter::sub_103411c0(target, 1), runs slot 406 and plays the second scheme sound
};
