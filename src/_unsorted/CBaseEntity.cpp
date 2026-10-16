// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10026b70 size=0xb
struct CUnknown10146790 {
	char m_unk0;
	char m_unk1;
	char m_unk2;
	void sub_10146790();
};

void CBaseEntity::vfunc89()
{
	((CUnknown10146790*)((char*)this + 0x1b0))->sub_10146790();
}
// END FUNCTION

// FUNCTION: 0x10026c50 size=0xd
void CBaseEntity::vfunc133()
{
	if (m_pfn0114)
		(this->*m_pfn0114)();
}
// END FUNCTION

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

// FUNCTION: 0x100aa5a0 size=0xd
void CBaseEntity::vfunc130(int a)
{
	vfunc6(0);
}
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

// FUNCTION: 0x100b4f10 size=0xd
void CBaseEntity::vfunc84(int flags)
{
	m_flags268 = flags;
}
// END FUNCTION
