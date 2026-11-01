// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1019ce00 size=0x23
CRecipientFilter::CRecipientFilter()
{
	Reset();
}
// END FUNCTION

// FUNCTION: 0x1019ce40 size=0x68
extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);
extern int vt_10447108[];

struct TFilterX {
	int *vptr;
	int pad;
	void *p;
	int count;
	int grow;
	int size;
	void *elems;
	TFilterX *sub_1019ce40(unsigned char flags);
};

TFilterX *TFilterX::sub_1019ce40(unsigned char flags)
{
	size = 0;
	if (grow != -1) {
		if (p) {
			Plat_Free(p);
			p = 0;
		}
		count = 0;
	}
	void *e = p;
	int g = grow;
	elems = e;
	if (g != -1) {
		if (e) {
			Plat_Free(e);
			p = 0;
		}
		count = 0;
	}
	vptr = vt_10447108;
	if (flags & 1)
		delete this;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1019ced0 size=0x1e
// TARGET: Reset
#include "CRecipientFilter.h"
void CRecipientFilter::Reset()
{
    m_bReliable = false;
    m_bInitMessage = false;
    m_1c = 0;
    m_20 = -1;
    m_24 = -1;
    m_Recipients.m_Size = 0;
    m_bUsingPredictionRules = false;
    m_bIgnorePredictionCull = false;
}
// END FUNCTION

// FUNCTION: 0x1019cf50 size=0x5
void CRecipientFilter::MakeReliable()
{
    *(char *)((char *)this + 4) = 1;
}
// END FUNCTION

// FUNCTION: 0x1019cf70 size=0x4
// TARGET: sub_1019cf70
char __fastcall sub_1019cf70(CRecipientFilter *p) { return p->m_bReliable; }
// END FUNCTION

// FUNCTION: 0x1019cff0 size=0x3e
#include "vampire.h"
#include "CRecipientFilter.h"

void *sub_1000ac8b(int nClient);

// TARGET: CRecipientFilter::AddAllPlayers
void CRecipientFilter::AddAllPlayers()
{
    m_Recipients.RemoveAll();
    for (int i = 1; i <= gpGlobals->maxClients; i++)
    {
        void *pPlayer = sub_1000ac8b(i);
        if (pPlayer)
        {
            AddRecipient((CBasePlayer *)pPlayer);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1019d210 size=0x4e
#include "CRecipientFilter.h"
void CRecipientFilter::AddRecipientsByPVS(const Vector &origin)
{
	if (gpGlobals->maxClients == 1) {
		AddAllPlayers();
	} else {
		int playerbits = 0;
		engine->vfunc64(0, &origin.x, &playerbits);
		sub_1019d1c0(playerbits);
	}
}
// END FUNCTION

// FUNCTION: 0x1019d280 size=0x4e
void CRecipientFilter::AddRecipientsByPAS(const Vector &origin)
{
	if (gpGlobals->maxClients == 1) {
		AddAllPlayers();
		return;
	}
	int playerbits = 0;
	engine->vfunc64(1, &origin.x, &playerbits);
	sub_1019d1c0(playerbits);
}
// END FUNCTION

// FUNCTION: 0x1019d320 size=0x8
#include "CRecipientFilter.h"

char CRecipientFilter::vfunc4()
{
	return m_1c == 1;
}
// END FUNCTION

// FUNCTION: 0x1019d340 size=0x4
// TARGET: sub_1019d340
int __fastcall sub_1019d340(CRecipientFilter *p) { return p->m_20; }
// END FUNCTION

// FUNCTION: 0x1019d390 size=0x4
// TARGET: sub_1019d390
char __fastcall sub_1019d390(CRecipientFilter *p) { return p->m_bInitMessage; }
// END FUNCTION

// FUNCTION: 0x1019d3d0 size=0x5c
#include "CRecipientFilter.h"
#include "CUnknown1019d130.h"

struct CRecipientFilterSlotsView {
	virtual void vfunc0();
	virtual void vfunc1();
	virtual int GetRecipientCount();
	virtual int GetRecipientIndex(int slot);
};
extern int g_1072b40c;
extern CBaseEntity *g_1072b408;
CBaseEntity *sub_101cd9e0(int);

void CRecipientFilter::UsePredictionRules()
{
	if (m_bUsingPredictionRules)
		return;
	m_bUsingPredictionRules = true;
	CRecipientFilterSlotsView *v = (CRecipientFilterSlotsView *)this;
	int count = v->GetRecipientCount();
	if (count) {
		for (int i = count - 1; i >= 0; i--) {
			CBaseEntity *p = sub_101cd9e0(v->GetRecipientIndex(i));
			if (p && (g_1072b40c > 0 ? 0 : g_1072b408) == p)
				((CUnknown1019d130 *)this)->sub_1019d130(p);
		}
	}
}
// END FUNCTION
