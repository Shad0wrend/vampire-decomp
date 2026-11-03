// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101fdc30 size=0x11c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CVStatInfo_t.h"
#include "CVStatAction_t.h"
#include "ScopeTrace.h"
extern char g_105a7cd0[];
struct SStatList12 { void sub_101fd4c0(); };
CVStatInfo_t::~CVStatInfo_t()
{
	{
		ScopeTrace trace(g_105a7cd0, g_106b8540);
		operator delete(m_pLevels);
	}
	if (m_field0138) {
		for (int i = 0; i < m_field0134; i++) {
			char *p = ((char **)m_field0138)[i];
			if (p) {
				((CVStatActionPart *)(p + 0x18))->~CVStatActionPart();
				operator delete(p);
			}
			((char **)m_field0138)[i] = 0;
		}
		operator delete((void *)m_field0138);
		m_field0138 = 0;
	}
	m_field0124 = 0;
	m_field0134 = 0;
	m_field0130 = 0;
	((SStatList12 *)((char *)this + 0x10c))->sub_101fd4c0();
	((CVStatActionPart *)((char *)this + 0x9c))->~CVStatActionPart();
	((CVStatActionPart *)((char *)this + 0x88))->~CVStatActionPart();
	((CVStatActionPart *)((char *)this + 0x74))->~CVStatActionPart();
	((CVStatActionPart *)((char *)this + 0x60))->~CVStatActionPart();
	((CVStatActionPart *)((char *)this + 0x4c))->~CVStatActionPart();
}
// END FUNCTION
