// S1030fc90: an iterator-like object (its name in the game's code is the one the judge shows); only the members matched code calls.
#pragma once

class S1030fc90
{
public:
	int sub_1030fc90(int *pOut);	// first element of the iteration; the value goes to *pOut, 0 when there is none
	int sub_1030fd20(int *pOut);	// next element, 0 when there is none
	bool sub_1030fb10(int key);	// true when key is one of the elements (the iteration goes through sub_1030fc90 / sub_1030fd20)
};
