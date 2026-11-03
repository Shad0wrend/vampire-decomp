// CUnknown10738960: the debug-gate object at 0x10738960. Its method 0x1005f190 answers whether the
// trace debug lines are drawn; matched under the provisional class name CFoo1005f190, so callers use
// `g_10738960.sub_1005f190()`.
#pragma once

class CFoo1005f190
{
public:
	int sub_1005f190();	// 0x1005f190 (matched): the debug switch
};

extern CFoo1005f190 g_10738960;
