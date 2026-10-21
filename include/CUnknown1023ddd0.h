// CUnknown1023ddd0: owner of the "World Area Type" input handler (no members known; `this` is not used); real name not yet known.
#pragma once

struct inputdata_t;

class CUnknown1023ddd0
{
public:
	void sub_1023ddd0(inputdata_t *inputdata);	// input handler: clamps the integer value of the input to 0..2 (0 for other types) and stores it at +0x49c of the object returned by sub_1023bd00(); on change tells every player (sub_10170750) and flags the object (byte +0x1b1); prints a "CSActs: ... Setting World Area Type" developer message first
};
