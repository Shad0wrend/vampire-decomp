// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10027020 size=0x8
#include "CBaseEntity.h"

void CBaseEntity::vfunc168()
{
	typedef void (__fastcall *Fn)(CBaseEntity *);
	(*(Fn *)((char *)*(void **)this + 0x29c))(this);
}
// END FUNCTION

// FUNCTION: 0x10027490 size=0xa
#include "CBaseEntity.h"
// TARGET: CBaseEntity::vfunc116
int CBaseEntity::vfunc116() { return m_flags268 & 1; }
// END FUNCTION

// FUNCTION: 0x100b4bc0 size=0x8
#include "CBaseEntity.h"

void CBaseEntity::vfunc194()
{
	typedef void (__fastcall *Fn)(CBaseEntity *);
	(*(Fn *)((char *)*(void **)this + 0x36c))(this);
}
// END FUNCTION

// FUNCTION: 0x100b4be0 size=0x8
#include "CBaseEntity.h"

typedef void (__fastcall *VFunc)(CBaseEntity *);

// TARGET: CBaseEntity::vfunc195
void CBaseEntity::vfunc195()
{
	(*(VFunc **)this)[221](this);
}
// END FUNCTION
