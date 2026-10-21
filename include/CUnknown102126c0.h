// CUnknown102126c0: an entity class with an input handler (0x102126c0) that makes the activator's player object start
// whatever it is bound to; real name not yet known.
#pragma once

struct inputdata_t;

class CUnknown102126c0
{
public:
	void sub_102126c0(inputdata_t *pInput);	// input handler: the activator's player object (the local player without one) releases its current target (+0x1040 handle) when it has one, and when it has none lets sub_10167d70(this) take over
};
