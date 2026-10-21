// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
