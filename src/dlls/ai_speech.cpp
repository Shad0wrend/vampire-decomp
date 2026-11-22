// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 8 blocks
#include "vampire.h"

// FUNCTION: 0x10260d70 size=0x1e
#include "CAI_ExpressiveNPC.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_ExpressiveNPC::vfunc5
CAI_ExpressiveNPC *CAI_ExpressiveNPC::vfunc5(unsigned int flags)
{
	sub_1000aa51();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10260da0 size=0x7
#include "CAI_ExpressiveNPC.h"
int CAI_ExpressiveNPC::vfunc512()
{
    return *(int *)((char *)this + 0x5f48);
}
// END FUNCTION

// FUNCTION: 0x10260dc0 size=0xb
#include "CAI_ExpressiveNPC.h"
namespace lifted {
struct C100116d0 { int sub_100116d0(); };
}
int CAI_ExpressiveNPC::vfunc584()
{
    return ((lifted::C100116d0 *)(*(int *)((char *)this + 0x5f48)))->sub_100116d0();
}
// END FUNCTION

// FUNCTION: 0x10312cd0 size=0x47
#include "vampire_all.h"
#include "CAI_ExpressiveNPC.h"
#include "CAI_BaseNPC.h"
#include "CAI_Expresser.h"

void __fastcall sub_10312b20(char *p);

struct CExprSlotView : CAI_BaseNPC
{
	CAI_NPC_V(569) CAI_NPC_V(570) CAI_NPC_V(571) CAI_NPC_V(572) CAI_NPC_V(573) CAI_NPC_V(574) CAI_NPC_V(575) CAI_NPC_V(576) CAI_NPC_V(577) CAI_NPC_V(578) CAI_NPC_V(579) CAI_NPC_V(580) CAI_NPC_V(581) CAI_NPC_V(582)
	virtual CAI_Expresser *vfunc583();
};

struct CExprHostPad { virtual void f(); char m_pad[0x5f40]; };
struct CExprHostView : CExprHostPad, CAI_ExpresserSink
{
	CAI_ExpresserSink *AsSink() { return this; }
};

// TARGET: CAI_ExpressiveNPC::vfunc424
bool CAI_ExpressiveNPC::vfunc424()
{
	if (!((CAI_BaseNPC *)this)->CAI_BaseNPC::vfunc424())
		return false;
	m_pExpresser = ((CExprSlotView *)this)->vfunc583();
	if (!m_pExpresser)
		return false;
	m_pExpresser->SetHost(this);
	m_pExpresser->SetSink(((CExprHostView *)this)->AsSink());
	sub_10312b20((char *)m_pExpresser);
	return true;
}
// END FUNCTION

// FUNCTION: 0x10312d40 size=0x90
#include "vampire_all.h"
#include "CAI_ExpressiveNPC.h"
#include "CAI_Expresser.h"

CAI_Expresser *CAI_ExpressiveNPC::vfunc583()
{
	return new CAI_Expresser;
}
// END FUNCTION

// FUNCTION: 0x10312e00 size=0x51
#include <string.h>
#pragma intrinsic(strcmp)
bool sub_10312e00(const char **a, const char **b)
{
    return strcmp(*a, *b) < 0;
}
// END FUNCTION

// FUNCTION: 0x10312e80 size=0x4d
#include "vampire_all.h"
#include "CAI_Expresser.h"

// TARGET: CAI_Expresser::vfunc0
CAI_Expresser *CAI_Expresser::vfunc0(unsigned char flags)
{
	m_Sub.sub_10311500();
	if (m_Tree.m_mem.m_mem.m_growSize != -1)
	{
		if (m_Tree.m_mem.m_mem.m_pMemory)
		{
			Plat_Free(m_Tree.m_mem.m_mem.m_pMemory);
			m_Tree.m_mem.m_mem.m_pMemory = 0;
		}
		m_Tree.m_mem.m_mem.m_allocationCount = 0;
	}
	((CAI_Component *)this)->CAI_Component::~CAI_Component();
	if (flags & 1)
		::operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10312ef0 size=0x2b
#include "vampire_all.h"
#include "CAI_ExpressiveNPC.h"
#include "CAI_Expresser.h"
typedef CAI_Expresser *(__fastcall *GetExpresserFn)(void *);
int CAI_ExpressiveNPC::vfunc484(const char *pszName, float flDelay, float flVolume, int nSoundLevel, int b)
{
	return ((CAI_Expresser *)((GetExpresserFn)(*(void ***)this)[512])(this))->sub_10311f50(pszName, flDelay, flVolume, nSoundLevel, b);
}
// END FUNCTION
