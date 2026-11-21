// CUnit101d5e00: a table of items (count at +4, item pointers at +8); the lookup returns the string at the item's +0xc,
// or the empty string when it is null. Real name not yet known.
#pragma once

class CUnit101d5e00
{
public:
	char *sub_1013ffa0(int index);	// stub 0x1000ce46: the field at +0xc of item `index` (0 when out of range; the empty string at 0x106b8540 when that field is null)
};
