// IMoveHelperServer: the interface base of CMoveHelperServer (RTTI chain CMoveHelperServer -> IMoveHelperServer
// -> IMoveHelper). Only slot 0 is modelled, so that the class has its own vtable pointer; CMoveHelperServer
// redeclares every slot.
#pragma once

class IMoveHelperServer
{
public:
	IMoveHelperServer() {}
	virtual void vfunc0() {}
};
