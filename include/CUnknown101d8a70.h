// CUnknown101d8a70: an object with an output helper (sub_101d8b40(value, flag)); real name not yet known.
#pragma once

class CUnknown101d8a70
{
public:
	void *sub_101d8a70(void *pValue);	// forwards pValue to sub_101d8b40 together with the "v_printrolls" console variable as flag (false when the variable does not exist); returns pValue
	void sub_101d8b40(void *pValue, bool bFlag);	// called through the stub at 0x1000e223
};
