// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100cb610 size=0x6
#include "CCameraKeyFrame.h"
namespace lifted {
extern char g_1055ce68;
}
CCameraKeyFrame::Datamap82 CCameraKeyFrame::vfunc82()
{
    return (CCameraKeyFrame::Datamap82)&lifted::g_1055ce68;
}
// END FUNCTION

// FUNCTION: 0x100cb750 size=0x158
#include "CGlobalEntityList.h"
#include "CCameraKeyFrame.h"
#include <math.h>

extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
extern int g_10538764;
extern int g_1055d7ec;
extern float g_104454c4;
float sub_1013d650(float f);

// TARGET: CCameraKeyFrame::vfunc113
void CCameraKeyFrame::vfunc113()
{
	sub_100a0bc0();
	if (!(m_fl460 >= 18.0f) || !(m_fl460 <= 2000.0f))
		m_fl460 = 8.95 / sin(18.75);
	m_fl45c = sub_1013d650(m_fl45c);
	const char *pszName = m_pszNext450;
	if (!pszName)
		pszName = g_106b8540;
	m_pNext454 = (CCameraKeyFrame *)__RTDynamicCast(g_106eb5d8.sub_100f7770(0, pszName, 0, 0), 0, &g_10538764, &g_1055d7ec, 0);
	if (m_pNext454)
		m_pNext454->m_pPrevious458 = this;
	if (m_flDelay46c <= 0.05f && m_b464) {
		if (m_flDelay46c > g_104454c4) {
			if (m_pNext454 && m_pNext454->m_fl470 > g_104454c4)
				m_pNext454->m_fl470 = m_pNext454->m_fl470 + m_flDelay46c;
			else if (m_fl470 > g_104454c4)
				m_fl470 = m_flDelay46c + m_fl470;
		}
		m_flDelay46c = 0;
		m_b47c = 1;
		if (m_pNext454)
			m_pNext454->m_b47c = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x100cc040 size=0x36
#include "CCameraKeyFrame.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CCameraKeyFrame *CCameraKeyFrame::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x498))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x480))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
