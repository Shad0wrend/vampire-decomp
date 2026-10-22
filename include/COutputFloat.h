// COutputFloat: an entity output that carries a float (Source's COutputFloat). The output is a COutputEvent whose first
// 0x14 bytes are the variant value; Set stores the float as the variant and fires the output with a copy of it.
#pragma once

#include "COutputEvent.h"

class COutputFloat : public COutputEvent
{
public:
	float Get() const { return *(const float *)this; }
	void Set(float value, void *pActivator, void *pCaller)
	{
		((CVariantCopy *)this)->sub_1000b320(1, &value);
		sub_100cd300(*(CVariantCopy *)this, pActivator, pCaller, 0.0f);
	}
};
