// SendTable: the engine's networked-table description (an object the game defines per server class; only its
// registration call is known). BEGIN_SEND_TABLE initialises a guarded static array of SendProp (the first one is the
// "should_never_see_this" dummy) and then registers everything after it with the table.
#pragma once

#include "SendProp.h"

class SendTable
{
public:
	void sub_10247240(SendProp *pProps, int nProps, const char *pNetTableName);	// stub 0x1000e8fe: SendTable::Construct
};
