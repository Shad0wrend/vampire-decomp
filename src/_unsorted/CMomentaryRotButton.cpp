// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100c9db0 size=0x6
#include "CMomentaryRotButton.h"
namespace lifted {
extern char g_1055c264;
}
int CMomentaryRotButton::vfunc82()
{
    return (int)&lifted::g_1055c264;
}
// END FUNCTION

// FUNCTION: 0x100ca0e0 size=0x1e
// TARGET: CMomentaryRotButton::vfunc117
#include "CMomentaryRotButton.h"

unsigned char CMomentaryRotButton::vfunc117()
{
	unsigned char r = (unsigned char)((CBaseEntity *)this)->CBaseEntity::vfunc117();
	unsigned int flags = m_nSpawnFlags204;
	r &= 0xfd;
	if (flags & 1)
		return r;
	if (flags & 2)
		return r;
	return r | 0x10;
}
// END FUNCTION

// FUNCTION: 0x100ca5f0 size=0xe
#include "CMomentaryRotButton.h"
namespace lifted {
int __stdcall sub_10004b92(int, int, int);
}
bool CMomentaryRotButton::vfunc223()
{
    lifted::sub_10004b92(0, 0, 0);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100cabc0 size=0xbb
#include "CMomentaryRotButton.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CEntityVSlots.h"

extern CGlobalEntityList *g_10566458;
void sub_1000a033();

// TARGET: CMomentaryRotButton::vfunc173
void CMomentaryRotButton::vfunc173(int a, int b, int c, int d)
{
	bool bFlag = false;
	if (m_nUsed5d4 == 0) {
		bFlag = true;
		m_nDirection5d8 = -m_nDirection5d8;
		unsigned int h = m_hEntity53c;
		void *pEnt;
		if (h == 0xffffffff) {
			pEnt = 0;
		} else {
			CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
			pEnt = pSlot->m_Serial == (int)(h >> 13) ? pSlot->m_pEntity : 0;
		}
		m_Output574.sub_100cd660(pEnt, this, 0);
	}
	m_nUsed5d4 = 1;
	float flAngle = sub_100ca630((float *)((CEntityVSlots *)this)->slot221());
	sub_100cacb0(flAngle, bFlag);
	((CBaseEntity *)this)->sub_100ac4e0((int)sub_1000a033, 0, 0);
	m_flNextThink = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x100cb4f0 size=0x6d
#include "CMomentaryRotButton.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CMomentaryRotButton *CMomentaryRotButton::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x5bc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x5a4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x58c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x574))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x55c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x4bc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x4a4))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
