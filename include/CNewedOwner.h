// CNewedOwner.h: an owner of one 4 byte heap object and a count (1000000000 when built); its constructor 0x102e9ef0
// and destructor 0x102e9f40 (deletes the object) are matched under provisional names in free_functions.cpp, which
// defines its own view: only the initializer units see this definition.
#pragma once
#ifdef PCD_INITIALIZERS
struct CNewedOwner
{
	CNewedOwner();	// function 0x102e9ef0
	~CNewedOwner();	// function 0x102e9f40
	void *m_p0;
	int m_n4;
};
#endif
