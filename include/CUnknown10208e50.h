// CUnknown10208e50: entity class with an input handler (0x10208e50) that finds every entity of a given name and,
// for each one whose object at +0xa0 has no owner, calls slot 383(object, 1); real name not yet known.
#pragma once

struct inputdata_t;

class CUnknown10208e50
{
public:
	void sub_10208e50(inputdata_t *pInput);	// the input value's string (empty when the value is not a string) names the entities to walk (FindEntityByName with this as the searcher)
};
