// CPhysThruster: physics thruster entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

#include "Vector.h"

class CPhysThruster
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPhysThruster *vfunc5(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc242();	// slot 242 (declared here without the placeholder slots 6..241): with the attached entity (handle at +0x460) alive, the thruster's offset (+0x49c) is the global zero vector when flag 0x20 of +0x204 is set, else this entity's absolute origin minus the attached entity's

	void sub_10014470();	// destructor body

	char m_pad0004[0x204 - 4];
	unsigned int m_flags204;	// 0x204
	char m_pad0208[0x460 - 0x208];
	unsigned int m_hAttached;	// 0x460: handle of the attached entity
	char m_pad0464[0x49c - 0x464];
	Vector m_vecOffset;	// 0x49c
};
