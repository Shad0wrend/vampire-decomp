// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a9b70 size=0x6
#include "datamap.h"
#include "CScriptedSentence.h"
namespace lifted {
extern char g_10593d94;
}
datamap_t *CScriptedSentence::vfunc82()
{
    return (datamap_t *)&lifted::g_10593d94;
}
// END FUNCTION

// FUNCTION: 0x101a9d40 size=0x8
unsigned char sub_10001109();

// TARGET: sub_101a9d40
unsigned char sub_101a9d40()
{
    unsigned char bVar1;
    bVar1 = sub_10001109();
    bVar1 &= 0xfd;
    return bVar1;
}
// END FUNCTION

// FUNCTION: 0x101a9d60 size=0x4c
#include <string.h>
#include <stdlib.h>
#include "CBaseEntity.h"
#include "CScriptedSentence.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
struct CScriptedSentenceView : CBaseEntity {
	char m_pad[0x46c - sizeof(CBaseEntity)];
	float m_flAttenuation;
};
// TARGET: CScriptedSentence::vfunc110
bool CScriptedSentence::vfunc110(const char *key, const char *value)
{
	CScriptedSentenceView *p = (CScriptedSentenceView *)this;
	if (!_strcmpi(key, "volume")) {
		p->m_flAttenuation = atof(value) * 0.1;
		return true;
	}
	return p->CBaseEntity::vfunc110(key, value);
}
// END FUNCTION

// FUNCTION: 0x101a9e20 size=0x122
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CScriptedSentence.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern char g_1053dafc[];
extern double g_10449280;
extern float g_104454c4;
void sub_1000880a();


void CScriptedSentence::vfunc103()
{
	CBaseEntity *pEntity = (CBaseEntity *)this;
	{
		ScopeTrace trace(g_1053dafc, this ? (pEntity->m_name26c ? pEntity->m_name26c : g_106b8540) : g_105387dc);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	*((char *)this + 0x470) = 1;
	if (!pEntity->m_name26c) {
		pEntity->sub_100ac4e0((int)sub_1000880a, 0, 0);
		*(float *)((char *)this + 0x17c) = gpGlobals->curtime + g_10449280;
	}
	switch (*(int *)((char *)this + 0x468)) {
	case 1:
		*(int *)((char *)this + 0x464) = 0x46;
		break;
	case 2:
		*(int *)((char *)this + 0x464) = 0x4b;
		break;
	case 3:
		*(int *)((char *)this + 0x464) = 0;
		break;
	default:
		*(int *)((char *)this + 0x464) = 0x3c;
		break;
	}
	if (*(float *)((char *)this + 0x46c) <= g_104454c4) {
		*(int *)((char *)this + 0x468) = 0;
		*(float *)((char *)this + 0x46c) = 1.0f;
	} else {
		*(int *)((char *)this + 0x468) = 0;
	}
	pEntity->sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x101ab160 size=0x36
#include "CScriptedSentence.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseEntity *CScriptedSentence::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x494))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x47c))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
