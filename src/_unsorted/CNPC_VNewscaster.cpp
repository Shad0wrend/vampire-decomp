// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1039fff0 size=0x1
#include "CNPC_VNewscaster.h"
void CNPC_VNewscaster::vfunc488()
{
}
// END FUNCTION

// FUNCTION: 0x103a0010 size=0x1
#include "CNPC_VNewscaster.h"
void CNPC_VNewscaster::vfunc489()
{
}
// END FUNCTION

// FUNCTION: 0x103a0030 size=0x1
#include "CNPC_VNewscaster.h"
void CNPC_VNewscaster::vfunc490()
{
}
// END FUNCTION

// FUNCTION: 0x103a0050 size=0x1
#include "CNPC_VNewscaster.h"
void CNPC_VNewscaster::vfunc491()
{
}
// END FUNCTION

// FUNCTION: 0x103a0070 size=0x1
#include "CNPC_VNewscaster.h"
void CNPC_VNewscaster::vfunc492()
{
}
// END FUNCTION

// FUNCTION: 0x103a0090 size=0x1
#include "CNPC_VNewscaster.h"
void CNPC_VNewscaster::vfunc493()
{
}
// END FUNCTION

// FUNCTION: 0x103a00b0 size=0x1
#include "CNPC_VNewscaster.h"
void CNPC_VNewscaster::vfunc494()
{
}
// END FUNCTION

// FUNCTION: 0x103a00d0 size=0x1
#include "CNPC_VNewscaster.h"
void CNPC_VNewscaster::vfunc495()
{
}
// END FUNCTION

// FUNCTION: 0x103a00f0 size=0x1
#include "CNPC_VNewscaster.h"
void CNPC_VNewscaster::vfunc496()
{
}
// END FUNCTION

// FUNCTION: 0x103a0110 size=0x1
#include "CNPC_VNewscaster.h"
void CNPC_VNewscaster::vfunc497()
{
}
// END FUNCTION

// FUNCTION: 0x103a0130 size=0x5
#include "CNPC_VNewscaster.h"
bool CNPC_VNewscaster::vfunc363(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a0150 size=0x5
#include "CNPC_VNewscaster.h"
bool CNPC_VNewscaster::vfunc362(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a0170 size=0x5
#include "CNPC_VNewscaster.h"
bool CNPC_VNewscaster::vfunc365(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a0190 size=0x5
#include "CNPC_VNewscaster.h"
bool CNPC_VNewscaster::vfunc364(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a01b0 size=0x8
#include "CNPC_VNewscaster.h"

int CNPC_VNewscaster::vfunc404(int)
{
	return 4;
}
// END FUNCTION

// FUNCTION: 0x103a01d0 size=0x5
#include "CNPC_VNewscaster.h"
bool CNPC_VNewscaster::vfunc587(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a01f0 size=0x3
#include "CNPC_VNewscaster.h"
int CNPC_VNewscaster::vfunc473()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a0210 size=0x5
#include "CNPC_VNewscaster.h"
bool CNPC_VNewscaster::vfunc377(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a0230 size=0x5
#include "CNPC_VNewscaster.h"
bool CNPC_VNewscaster::vfunc378(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a0250 size=0x5
#include "CNPC_VNewscaster.h"
bool CNPC_VNewscaster::vfunc72(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103a0270 size=0xe1
#include "utlmemory.h"
#include "CNPC_VNewscaster.h"

void sub_100aa7b0(void *p);

CNPC_VNewscaster *CNPC_VNewscaster::vfunc5(unsigned int flags)
{
	m_listB.Destruct();
	m_listA.Destruct();
	sub_1028d610();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103a03a0 size=0x10
#include "vampire.h"

void __fastcall sub_103a0d50(void *pThis);
void __fastcall sub_1028d6e0(void *pThis);

// TARGET: sub_103a03a0
void __fastcall sub_103a03a0(void *pThis)
{
	sub_103a0d50(pThis);
	sub_1028d6e0(pThis);
}
// END FUNCTION

// FUNCTION: 0x103a03e0 size=0x2f
// TARGET: CNPC_VNewscaster::vfunc104
#include "CNPC_VNewscaster.h"

void sub_100097b4();
void sub_101d0f10(const char *pszPrefix, const char *pszExt, int a, int b);

void CNPC_VNewscaster::vfunc104() {
    sub_100097b4();
    sub_101d0f10("sound/character/conversations/news/tv", ".mp3", 0, 0);
    sub_101d0f10("sound/character/conversations/news/tv", ".wav", 0, 0);
}
// END FUNCTION

// FUNCTION: 0x103a0500 size=0x6
#include "CNPC_VNewscaster.h"
int CNPC_VNewscaster::vfunc138()
{
    return 9;
}
// END FUNCTION

// FUNCTION: 0x103a05b0 size=0x88
#include "CNPC_VNewscaster.h"


struct CDevFlagObj {
	virtual void v0();
	virtual bool vfunc1();
	char m_pad[0x2c - 4];
	int m_n2c;
};
extern CDevFlagObj *g_1093be8c;

void CNPC_VNewscaster::vfunc431()
{
	m_f624c = gpGlobals->curtime + 1.0f;
	m_f6250 = gpGlobals->curtime + 1.0f;
	m_f625c = gpGlobals->curtime;
	m_f6260 = gpGlobals->curtime;
	sub_10292de0();
	sub_103a0670();
	if (!g_1093be8c->vfunc1() && g_1093be8c->m_n2c && !(m_bFlags224 & 1))
		sub_103a0ff0(0);
}
// END FUNCTION

// FUNCTION: 0x103a1250 size=0x97
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VNewscaster.h"
#include "ScopeTrace.h"

// TARGET: CNPC_VNewscaster::vfunc124
int CNPC_VNewscaster::vfunc124()
{
	ScopeTrace trace("CNPC_VNewscaster::DrawDebugTextOverlays", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	int nLines = sub_1029d4e0();
	if (m_bFlags224 & 1)
		nLines += sub_103a0ff0(nLines);
	return nLines;
}
// END FUNCTION
