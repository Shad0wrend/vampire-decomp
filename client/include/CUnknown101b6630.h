// CUnknown101b6630: the memory part of a CUtlVector of 8-byte elements; Base() is the out-of-line CUtlMemory::operator[] helper.
#pragma once

#include "CMem8_t.h"

struct CUnknown101b6630 : public CMem8_t
{
	int sub_10130be0();	// "CUtlMemory::Base": returns the memory pointer (the first dword)
};
