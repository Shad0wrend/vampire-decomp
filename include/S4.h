// S4.h: S4 is a view class its constructor's source defines with provisional members; only the
// initializer units (PCD_INITIALIZERS) see this definition, with the constructor and destructor
// the initializer units: the global 0x1074e968 is built and destroyed by these. Size = the bytes the constructor writes.
#pragma once
#ifdef PCD_INITIALIZERS
struct S4
{
	S4();	// function 0x10202c40
	~S4();	// function 0x10202c60
	char m_pad0000[0x10];
};
#endif
