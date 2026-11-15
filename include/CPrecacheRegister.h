// CPrecacheRegister.h: PRECACHE_REGISTER(className) / PRECACHE_WEAPON_REGISTER(className) define a global
// CPrecacheRegister(&CPrecacheRegister::PrecacheFn_Other, "classname") that links itself in at the head of
// g_pPrecacheRegisters (0x109ef58c); CWorld's precache walks the list (game_shared/precache_register.h, 2003 and 2004).
#ifndef CPRECACHEREGISTER_H
#define CPRECACHEREGISTER_H

class CPrecacheRegister
{
public:
	typedef void (*PrecacheFn)(void *pUser);

	CPrecacheRegister(PrecacheFn fn, const void *pUser);	// function 0x1042d570

	static void PrecacheFn_Other(void *pUser);	// function 0x1042d5d0: UTIL_PrecacheOther((const char *)pUser)

	PrecacheFn m_Fn;
	const void *m_pUser;
	CPrecacheRegister *m_pNext;
};

#endif
