// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10132d50 size=0x6
#include "datamap.h"
#include "CMultiSource.h"
namespace lifted {
extern char g_1057658c;
}
datamap_t * CMultiSource::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1057658c);
}
// END FUNCTION

// FUNCTION: 0x10132ec0 size=0x8
#include "CMultiSource.h"
namespace lifted {
int sub_1000f7e5();
}
int CMultiSource::vfunc117()
{
    return (lifted::sub_1000f7e5()) | 0x80;
}
// END FUNCTION

// FUNCTION: 0x10132ee0 size=0x8d
#include "CMultiSource.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

bool CMultiSource::vfunc110(const char *szKeyName, const char *szValue)
{
	if (!_strcmpi(szKeyName, "style")
		|| !_strcmpi(szKeyName, "height")
		|| !_strcmpi(szKeyName, "killtarget")
		|| !_strcmpi(szKeyName, "value1")
		|| !_strcmpi(szKeyName, "value2")
		|| !_strcmpi(szKeyName, "value3"))
		return true;
	return sub_1009e430(szKeyName, szValue);
}
// END FUNCTION

// FUNCTION: 0x10132fa0 size=0x32
// TARGET: CMultiSource::vfunc103
#include "CMultiSource.h"

extern double g_104493d0;
void sub_100120bc();

void CMultiSource::vfunc103()
{
    unsigned int flags = m_flags204 | 1;
    float t = gpGlobals->curtime + g_104493d0;
    m_flags204 = flags;
    m_flNextThink = t;
    sub_100ac4e0((int)sub_100120bc, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x10132ff0 size=0x11d
#include "CMultiSource.h"
#include "CGlobalEntityList.h"
#include "COutputEvent.h"
extern CGlobalEntityList *g_10566458;
extern "C" __declspec(dllimport) void __cdecl Warning(const char *, ...);
extern "C" __declspec(dllimport) void __cdecl DevMsg(int, const char *, ...);
extern char g_10578878[];
extern char g_10578864[];
extern char g_10578838[];
extern char g_106b8540[];
#define MV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct SMSView
{
	MV10(a0) MV10(a1) MV10(a2) MV10(a3) MV10(a4) MV10(a5) MV10(a6) MV10(a7) MV10(a8) MV10(a9)
	MV10(b0) MV10(b1) MV10(b2) MV10(b3)
	virtual void s140(); virtual void s141(); virtual void s142(); virtual void s143(); virtual void s144(); virtual void s145(); virtual void s146();
	virtual bool vfunc147(CBaseEntity *pActivator);
};
struct SMSNetworkable { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual const char *vfunc5(); };
struct SMSUnknown { virtual void v0(); virtual void v1(); virtual void v2(); virtual SMSNetworkable *vfunc3(); };
struct SMSEdict { char m_pad[0x40]; SMSUnknown *m_pUnk; };
struct SMSHandle
{
	unsigned int m_h;
	CGlobalEntityList_Ent *Get()
	{
		if (m_h != 0xffffffff) {
			CGlobalEntityList_Slot *s = &g_10566458->m_Slots[m_h & 0x1fff];
			if (s->m_Serial == (int)(m_h >> 13))
				return s->m_pEntity;
		}
		return 0;
	}
};
void CMultiSource::vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value)
{
	int i = 0;
	int nTotal = *(int *)((char *)this + 0x568);
	if (nTotal > 0) {
		SMSHandle *p = (SMSHandle *)((char *)this + 0x450);
		do {
			SMSHandle *pCur = p;
			i++;
			p++;
			if (pCur->Get() == (CGlobalEntityList_Ent *)pCaller)
				break;
		} while (i < nTotal);
	}
	if (i > nTotal) {
		SMSEdict *pEdict = (SMSEdict *)*(int *)((char *)pCaller + 0x2e0);
		const char *pszClass;
		if (pEdict) {
			if (!pEdict->m_pUnk)
				pszClass = g_106b8540;
			else
				pszClass = pEdict->m_pUnk->vfunc3()->vfunc5();
		} else {
			pszClass = g_10578864;
		}
		Warning(g_10578878, pszClass);
		return;
	}
	*(unsigned int *)((char *)this + 0x4cc + i * 4) ^= 1;
	if (((SMSView *)this)->vfunc147(pActivator)) {
		DevMsg(2, g_10578838, sub_100ab4f0(), *(int *)((char *)this + 0x568));
		((COutputEvent *)((char *)this + 0x550))->sub_100cd660(pActivator, this, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10133160 size=0x54
#include "CMultiSource.h"
#include "CUnknown10057680.h"
extern CUnknown10057680 g_106be530;

// TARGET: CMultiSource::vfunc147
unsigned char CMultiSource::vfunc147(CBaseEntity *pActivator)
{
	int i = 0;
	if (!(m_flags204 & 1)) {
		int n = m_nMembers;
		if (n > 0) {
			int *p = m_aMemberTriggered;
			do {
				if (!*p)
					break;
				i++;
				p++;
			} while (i < n);
		}
		if (i == n) {
			if (m_pszGlobalState) {
				i = g_106be530.sub_10057820(m_pszGlobalState);
				if (i != 1)
					goto fail;
			}
			return 1;
		}
	}
fail:
	return i & 0xffffff00;
}
// END FUNCTION

// FUNCTION: 0x10135f20 size=0x2b
#include "CMultiSource.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CMultiSource::vfunc5
CBaseEntity *CMultiSource::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x550))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION
