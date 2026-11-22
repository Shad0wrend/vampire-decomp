// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 43 blocks
#include "vampire.h"

// FUNCTION: 0x101bbde0 size=0x1af
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown101bc140.h"
#include "CUnknown101bbd10.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"

__declspec(dllimport) void Warning(const char *pMsg, ...);
extern char g_106b8540[];
extern float g_104454c4;
void sub_101b14d0(void *pFilter, int nEntIndex, int nChannel, const char *pszSample, float flVolume, int nSoundLevel, int nFlags, int nPitch, int a, int b, int c);

namespace block_101bbde0
{
	struct CUnk101bb730
	{
		float m_flCurrent;
		float m_flTarget;
		float m_flRate;
		bool m_bForceUpdate;

		unsigned char sub_101bb730();
		void sub_101bb760(float flDelta);
	};

	unsigned char CUnk101bb730::sub_101bb730()
	{
		if (m_bForceUpdate)
		{
			m_bForceUpdate = false;
			return 1;
		}
		if (m_flCurrent != m_flTarget)
			return 1;
		return 0;
	}
}
using namespace block_101bbde0;

struct CSoundEntView
{
	char m_pad0000[0x2e0];
	int m_pEdict;
};

// TARGET: ?sub_101bbde0@CUnknown101bc140@@QAE_NMM@Z
bool CUnknown101bc140::sub_101bbde0(float flTime, float flDelta)
{
	if (m_fl24 != g_104454c4 && flTime > m_fl24)
	{
		((CUnknown101bbd10 *)this)->sub_101bbd10();
		return false;
	}
	int idx;
	if (g_10566458->sub_100290c0(&m_hEntity))
	{
		int edict = ((CSoundEntView *)g_10566458->sub_100290c0(&m_hEntity))->m_pEdict;
		idx = engine->vfunc35(edict);
	}
	else
		idx = -1;
	if (idx < 0)
	{
		Warning("CSoundPatch::Update:  Removing CSoundPatch (%s) with NULL EHandle\n", m_pszSample ? m_pszSample : g_106b8540);
		return false;
	}
	if (((CUnk101bb730 *)this)->sub_101bb730())
	{
		((CUnk101bb730 *)this)->sub_101bb760(flDelta);
		m_n38 |= 2;
	}
	else
		m_n38 &= ~2;
	if (((CUnk101bb730 *)&m_flPitchScale)->sub_101bb730())
	{
		((CUnk101bb730 *)&m_flPitchScale)->sub_101bb760(flDelta);
		m_n38 |= 1;
	}
	else
		m_n38 &= ~1;
	if (m_n38 && (m_nFlags & 1))
	{
		m_n38 |= 1;
		float flVolume = m_flVolume;
		const char *name = m_pszSample ? m_pszSample : g_106b8540;
		int nEntIndex;
		if (EHandle_Get(m_hEntity))
		{
			int edict = ((CSoundEntView *)EHandle_Get(m_hEntity))->m_pEdict;
			nEntIndex = engine->vfunc35(edict);
		}
		else
			nEntIndex = -1;
		sub_101b14d0(m_Filter, nEntIndex, m_nChannel, name, sub_101bbcf0(), m_nSoundLevel, m_n38, (int)flVolume, 0, 0, 0);
		m_n38 = 0;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x101bc000 size=0x8
void __fastcall sub_101bc000(int *p)
{
	p[9] = 0;
}
// END FUNCTION

// FUNCTION: 0x101bc020 size=0xd9
#include "CBaseEntity.h"
#include "CUnknown101bc140.h"
#include "CGlobalEntityList.h"

#define SPD10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CEngineServerSP
{
public:
    SPD10(a) SPD10(b) SPD10(c)
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4();
    virtual int IndexOfEdict(int pEdict);
};

extern CGlobalEntityList *g_10566458;
extern CEngineServerSP *g_1070b22c;
extern char g_106b8540[];

void sub_100126cf(void *pFilter, int nEntIndex, int nChannel, const char *pszSample, float flVolume, int nSoundLevel, int nFlags, int nPitch, int a, int b, int c);

static inline CBaseEntity *LookupHandle(const unsigned int *pHandle)
{
    if (*pHandle == 0xffffffff)
        return 0;
    CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[*pHandle & 0x1fff];
    if (pSlot->m_Serial == (int)(*pHandle >> 13))
        return (CBaseEntity *)pSlot->m_pEntity;
    return 0;
}

#define STRING(x) ((x) ? (x) : g_106b8540)

void CUnknown101bc140::sub_101bc020()
{
    m_n38 = 0;
    if (m_nFlags & 1) {
        float flVolume = m_flVolume;
        const char *pszSample = STRING(m_pszSample);
        int nEntIndex;
        if (LookupHandle(&m_hEntity)) {
            int pEdict = *(int *)((char *)LookupHandle(&m_hEntity) + 0x2e0);
            nEntIndex = g_1070b22c->IndexOfEdict(pEdict);
        } else
            nEntIndex = -1;
        sub_100126cf(m_Filter, nEntIndex, m_nChannel, pszSample, sub_101bbcf0(), m_nSoundLevel, 1, (int)flVolume, 0, 0, 0);
    }
    m_pEmitter = (void *)1;
}
// END FUNCTION

// FUNCTION: 0x101bc140 size=0xd5
#include "CBaseEntity.h"
#include "CUnknown101bc140.h"

struct EntInfo { CBaseEntity *m_pEntity; int m_serial; int m_unused; };
struct EntInfoList { int m_unused; EntInfo m_entries[1]; };
extern EntInfoList *g_10566458;
extern char g_106b8540[];

struct CSoundEHandle
{
	unsigned int m_Index;
	CBaseEntity *Get() const
	{
		EntInfo *e;
		return (m_Index != 0xffffffff && (e = &g_10566458->m_entries[m_Index & 0x1fff], e->m_serial == (int)(m_Index >> 13))) ? e->m_pEntity : 0;
	}
};

static inline const char *SafeString(const char *p)
{
	return p ? p : g_106b8540;
}

void sub_101b14d0(void *pFilter, int nEntIndex, int nChannel, const char *pszSample, float flVolume, int nSoundLevel, int nFlags, int nPitch, int a, int b, int c);

void CUnknown101bc140::sub_101bc140()
{
	if (m_pEmitter == 0)
		return;
	if (!(m_nFlags & 1))
		return;
	float flVolume = m_flVolume;
	const char *pszSample = SafeString(m_pszSample);
	int nEntIndex;
	if (((CSoundEHandle *)&m_hEntity)->Get()) {
		int nEdict = ((CSoundEHandle *)&m_hEntity)->Get()->m_pEdict2e0;
		nEntIndex = engine->vfunc35(nEdict);
	} else {
		nEntIndex = -1;
	}
	sub_101b14d0(m_Filter, nEntIndex, m_nChannel, pszSample, sub_101bbcf0(), m_nSoundLevel, 3, (int)flVolume, 0, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x101bc260 size=0x132
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CUnknown101bc140.h"
#include "CSingleUserRecipientFilter.h"
#include "CEHandleGet.h"
#include "CBaseEntity.h"
#include "engineserver.h"

struct SoundFilterView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual bool vfunc8(void *pPlayer);
};

void sub_101b14d0(CRecipientFilter *pFilter, int nEntIndex, int nChannel, const char *pszSample, float flVolume, int nSoundLevel, int a, int b, int c, int d, int e);

inline int ENTINDEX(int pEdict) { return engine->vfunc35(pEdict); }

inline void SoundEmitTo(CUnknown101bc140 *p, CRecipientFilter &filter)
{
	float flVolume = p->m_flVolume;
	const char *pszSample = p->m_pszSample ? p->m_pszSample : g_106b8540;
	int nEntIndex;
	if (EHandle_Get(p->m_hEntity))
		nEntIndex = ENTINDEX(((CBaseEntity *)EHandle_Get(p->m_hEntity))->m_pEdict2e0);
	else
		nEntIndex = -1;
	sub_101b14d0(&filter, nEntIndex, p->m_nChannel, pszSample, p->sub_101bbcf0(), p->m_nSoundLevel, 1, (int)flVolume, 0, 0, 0);
}

void CUnknown101bc140::sub_101bc260(void *pPlayer)
{
	if ((m_nFlags & 1) && ((SoundFilterView *)m_Filter)->vfunc8(pPlayer))
	{
		CSingleUserRecipientFilter filter(pPlayer);
		SoundEmitTo(this, filter);
	}
}
// END FUNCTION

// FUNCTION: 0x101bc3f0 size=0xa
#define PCD_INITIALIZERS
#include "Pool.h"
#include "PcdGuarded.h"
template <> Pool PcdGuarded<0x1072c4b0, Pool>::s_object(24, 32, 1);
// END FUNCTION

// FUNCTION: 0x101bc490 size=0x5
int sub_101bc4d0(void);
int g_1072c510 = ((int (*)(int))sub_101bc4d0)(0);
// END FUNCTION

// FUNCTION: 0x101bc4d0 size=0x1a
namespace lifted {
extern int g_1059aa0c;
extern int g_1059aa10;
extern char g_1059aa54;
}
int sub_101bc4d0()
{
    lifted::g_1059aa10 = 4;
    lifted::g_1059aa0c = (int)&lifted::g_1059aa54;
    return (int)&lifted::g_1059aa0c;
}
// END FUNCTION

// FUNCTION: 0x101bc500 size=0x24
// TARGET: sub_101bc500
int sub_101bc500(char **pa, char **pb)
{
    return *(float *)(*pa + 4) > *(float *)(*pb + 4);
}
// END FUNCTION

// FUNCTION: 0x101bc540 size=0x40
#include "CUnknown101bbd10.h"

struct CUnknown101bc540Obj
{
	void sub_100139e4(int a, int b);
	void sub_10014713(int a, int b);
};

struct CUnknown101bc540Rec
{
	void *m_pObj;	// +0
	int m_n04;
	int m_n08;	// +0x8
	int m_nMode;	// +0xc
	int m_n10;	// +0x10
};

// TARGET: sub_101bc540
void __stdcall sub_101bc540(CUnknown101bc540Rec *p)
{
	switch (p->m_nMode) {
	case 2:
		((CUnknown101bbd10 *)p->m_pObj)->sub_101bbd10();
		break;
	case 1:
		((CUnknown101bc540Obj *)p->m_pObj)->sub_10014713(p->m_n10, p->m_n08);
		break;
	case 0:
		((CUnknown101bc540Obj *)p->m_pObj)->sub_100139e4(p->m_n10, p->m_n08);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x101bc590 size=0x61
#include "CSoundControllerImp.h"
#include "utlvector.h"
#include "CUnknown101bc140.h"
#include "CUnknown101bbd10.h"

void CSoundControllerImp::sub_101bc590(void *pSound)
{
	((CUtlVector<CUnknown101bc140 *> *)&m_Sounds)->FindAndRemove((CUnknown101bc140 *)pSound);
	((CUnknown101bbd10 *)pSound)->sub_101bbd10();
}
// END FUNCTION

// FUNCTION: 0x101bc620 size=0xe5
#include "utlvector.h"
#include "CSoundControllerImp.h"
#include "CUnknown101bc140.h"

namespace block_101bc620 {
struct CSoundPatchUnit : CUnknown101bc140 { void sub_101bc000(); };
void CSoundPatchUnit::sub_101bc000() { *(int *)&m_fl24 = 0; }
}
using namespace block_101bc620;

// TARGET: CSoundControllerImp::vfunc2
void CSoundControllerImp::vfunc2(CUnknown101bc140 *pSound, float flVolume, float flPitch)
{
	((CSoundPatchUnit *)pSound)->sub_101bc000();
	pSound->sub_101bbc20(flVolume, 0);
	pSound->sub_101bbbf0(flPitch, 0);
	if (pSound->m_pEmitter) {
		vfunc4(pSound);
	} else {
		((CUtlVector<CUnknown101bc140 *> *)&m_Sounds)->AddToTail(pSound);
		pSound->sub_101bc020();
	}
}
// END FUNCTION

// FUNCTION: 0x101bc750 size=0x7e
#include "CUnknown101bc750.h"
struct Mem4;
void __fastcall sub_101bdf90(Mem4 *, int, int);
void CUnknown101bc750::sub_101bc750(int value)
{
    PQHeap101bc750 *h = &m_heap;
    int idx = h->m_Size;
    if (idx + 1 > h->m_allocationCount)
        sub_101bdf90((Mem4 *)h, idx - h->m_allocationCount + 1, idx - h->m_allocationCount + 1);
    h->m_Size++;
    h->m_pElements = (UtlVec8Elem *)h->m_pMemory;
    h->sub_101bdf40(idx, 1);
    ((int *)h->m_pMemory)[idx] = value;
    while (idx != 0) {
        int parent = (idx + 1) / 2 - 1;
        int *mem = (int *)h->m_pMemory;
        if (h->m_pLessFunc(&mem[idx], &mem[parent]))
            break;
        mem = (int *)h->m_pMemory;
        int t = mem[parent];
        mem[parent] = mem[idx];
        ((int *)h->m_pMemory)[idx] = t;
        idx = parent;
    }
}
// END FUNCTION

// FUNCTION: 0x101bc7f0 size=0x5f
#include "CLogicAuto.h"
#include "CSoundControllerImp.h"
#include "CUnknown101bc750.h"
#define V4(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3();
struct CSoundTimeView { V4(a) V4(b) virtual void h8(); virtual float vfunc9(); };
extern CSoundTimeView *g_10566258;
struct Pool { unsigned int *sub_1013dc60(unsigned int nSize); };
extern Pool g_1072c4b0;
struct CSoundCommand
{
    void *m_pSound; float m_flTime; float m_flDuration; int m_nCommand; float m_flAmplitude; int m_pad;
    CSoundCommand(void *pSound, float flTime, int command, float duration, float amplitude)
        : m_pSound(pSound), m_flTime(flTime), m_flDuration(duration), m_nCommand(command), m_flAmplitude(amplitude) {}
    void *operator new(unsigned int n) { return g_1072c4b0.sub_1013dc60(n); }
};
void CSoundControllerImp::vfunc3(void *pSound, float executeDeltaTime, int command, float duration, float amplitude)
{
    CSoundCommand *pCmd = new CSoundCommand(pSound, g_10566258->vfunc9() + executeDeltaTime, command, duration, amplitude);
    ((CUnknown101bc750 *)this)->sub_101bc750((int)pCmd);
}
// END FUNCTION

// FUNCTION: 0x101bc870 size=0x48
#include "utlrbtree.h"
#include "CSoundControllerImp.h"
#include "CUnknown101bbd10.h"
#include "utlvector.h"

// TARGET: CSoundControllerImp::vfunc0
void CSoundControllerImp::vfunc0()
{
	CUtlVector<CUnknown101bbd10 *> *pSounds = (CUtlVector<CUnknown101bbd10 *> *)&m_Sounds;
	for (int i = pSounds->Count() - 1; i >= 0; i--)
		(*pSounds)[i]->sub_101bbd10();
	pSounds->Purge();
	*(int *)((char *)this + 0x2c) = 0;
}
// END FUNCTION

// FUNCTION: 0x101bc8e0 size=0x18a
#include "CVTraitEffect_t.h"
#include "utlrbtree.h"
#include "CSoundControllerImp.h"
#include "CUnknown101bc140.h"

struct CSoundTimeView101bc8e0
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual float vfunc9();
};
extern CSoundTimeView101bc8e0 *g_10566258;

struct SoundCommand_t
{
	CUnknown101bc140 *m_pPatch;
	float m_time;
	int m_n8;
	int m_command;
	int m_n10;
	int m_n14;
};
struct CUnk1013dce0 { void sub_1013dce0(SoundCommand_t *p); };
extern CUnk1013dce0 g_1072c4b0;
void __fastcall sub_101bc000(int *p);

typedef bool (__cdecl *SoundCmdLess_t)(SoundCommand_t *const &, SoundCommand_t *const &);

struct CSoundCmdQueue101bc8e0
{
	SoundCommand_t **m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_Size;
	SoundCommand_t **m_pElements;
	SoundCmdLess_t m_LessFunc;

	int Count() const { return m_Size; }
	SoundCommand_t *ElementAtHead() const { return m_pMemory[0]; }
	void Swap(int a, int b) { ((CUtlVector4 *)this)->sub_101bdde0(a, b); }
	void FastRemove(int elem)
	{
		if (m_Size > 0)
		{
			memmove(&m_pMemory[elem], &m_pMemory[m_Size - 1], sizeof(SoundCommand_t *));
			--m_Size;
		}
	}
	void RemoveAtHead()
	{
		FastRemove(0);
		int index = 0;
		int count = Count();
		if (!count)
			return;
		int half = count / 2;
		int larger = index;
		while (index < half)
		{
			int child = ((index + 1) * 2) - 1;
			if (child < count)
			{
				if (m_LessFunc(m_pMemory[index], m_pMemory[child]))
					larger = child;
			}
			child++;
			if (child < count)
			{
				if (m_LessFunc(m_pMemory[larger], m_pMemory[child]))
					larger = child;
			}
			if (larger == index)
				break;
			Swap(index, larger);
			index = larger;
		}
	}
};

struct CSoundCtlView101bc8e0 : CSoundControllerImp
{
	void sub_101bc540(SoundCommand_t *p);
	CSoundCmdQueue101bc8e0 &CommandList() { return *(CSoundCmdQueue101bc8e0 *)&m_Second20; }
	void ProcessCommands(float time)
	{
		while (CommandList().Count())
		{
			SoundCommand_t *pCmd = CommandList().ElementAtHead();
			if (time >= pCmd->m_time)
			{
				CommandList().RemoveAtHead();
				sub_101bc540(pCmd);
				g_1072c4b0.sub_1013dce0(pCmd);
			}
			else
			{
				break;
			}
		}
	}
};

void CSoundControllerImp::vfunc1()
{
	float time = g_10566258->vfunc9();
	float deltaTime = time - m_flLastTime;
	if (deltaTime < 0)
		deltaTime = 0;
	m_flLastTime = time;

	((CSoundCtlView101bc8e0 *)this)->ProcessCommands(time);

	int i = m_Sounds.m_size - 1;
	while (i >= 0)
	{
		CUnknown101bc140 *pNode = ((CUnknown101bc140 **)m_Sounds.m_pMemory)[i];
		if (!pNode->sub_101bbde0(time, deltaTime))
		{
			sub_101bc000((int *)pNode);
			if (m_Sounds.m_size > 0)
			{
				memmove(&m_Sounds.m_pMemory[i], &m_Sounds.m_pMemory[m_Sounds.m_size - 1], 4);
				--m_Sounds.m_size;
			}
		}
		i--;
	}
}
// END FUNCTION

// FUNCTION: 0x101bcae0 size=0x10c
#include "utlmemory.h"
#include "utlvector.h"
#include "CSoundControllerImp.h"
extern "C" void *memmove(void *, const void *, unsigned int);
struct CSoundFreeList { void sub_1000330f(void *p); };
extern CSoundFreeList g_1072c4b0;

struct SoundCommand_t
{
	void *m_pPatch;
	void operator delete(void *p) { g_1072c4b0.sub_1000330f(p); }
};

template <class T>
struct PQVec
{
	T *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	int m_Size;
	T *m_pElements;
	T &Element(int i) { return m_pMemory[i]; }
	T &operator[](int i) { return m_pMemory[i]; }
	int Count() const { return m_Size; }
	void FastRemove(int elem)
	{
		if (m_Size > 0) {
			memmove(&Element(elem), &Element(m_Size - 1), sizeof(T));
			--m_Size;
		}
	}
};

template <class T>
struct PQ
{
	typedef bool (*LessFunc_t)(T const &, T const &);
	PQVec<T> m_heap;
	LessFunc_t m_LessFunc;

	int Count() const { return m_heap.Count(); }
	void Swap(int index1, int index2)
	{
		T tmp = m_heap[index1];
		m_heap[index1] = m_heap[index2];
		m_heap[index2] = tmp;
	}
	void RemoveAt(int index)
	{
		m_heap.FastRemove(index);

		int count = Count();
		if (!count)
			return;

		int half = count / 2;
		int larger = index;
		while (index < half) {
			int child = ((index + 1) * 2) - 1;
			if (child < count) {
				if (m_LessFunc(m_heap[index], m_heap[child]))
					larger = child;
			}
			child++;
			if (child < count) {
				if (m_LessFunc(m_heap[larger], m_heap[child]))
					larger = child;
			}
			if (larger == index)
				break;
			Swap(index, larger);
			index = larger;
		}
	}
};

struct CSCView
{
	char pad0[0x20];
	PQ<SoundCommand_t *> m_commandList;

	void CommandClear(void *pSound)
	{
		for (int i = m_commandList.Count() - 1; i >= 0; i--) {
			SoundCommand_t *pCmd = m_commandList.m_heap.Element(i);
			if (pCmd->m_pPatch == pSound) {
				m_commandList.RemoveAt(i);
				delete pCmd;
			}
		}
	}
};

void CSoundControllerImp::vfunc4(void *pSound)
{
	((CSCView *)this)->CommandClear(pSound);
}
// END FUNCTION

// FUNCTION: 0x101bcc40 size=0xa3
#include "CUnknown101bcc40.h"
struct ISaveSlots {
	virtual void v0();
	virtual void v1();
	virtual void Write(const void *p, const char *name);
	virtual void v3();
	virtual void StartBlock();
	virtual void v5();
	virtual void EndBlock();
	virtual void v7();
	virtual void v8();
	virtual void v9();
	virtual void WriteInts(int *p, int n);
};
extern char g_1059a7b4[], g_1059aa0c[];

void CUnknown101bcc40::sub_101bcc40(int id, void *pSave)
{
	ISaveSlots *save = (ISaveSlots *)pSave;
	save->StartBlock();
	save->Write((void *)id, g_1059a7b4);
	save->EndBlock();
	int count = 0;
	int i = m_count;
	while (--i >= 0) {
		if (*m_items[i] == id)
			count++;
	}
	save->StartBlock();
	save->WriteInts(&count, 1);
	for (i = m_count - 1; i >= 0; i--) {
		int *rec = m_items[i];
		if (*rec == id) {
			save->StartBlock();
			save->Write(rec, g_1059aa0c);
			save->EndBlock();
		}
	}
	save->EndBlock();
}
// END FUNCTION

// FUNCTION: 0x101bcd20 size=0x16a
#include "CSoundControllerImp.h"
#include "CUnknown101bc140.h"
#include "CUnknown101bc750.h"
#include "Pool.h"

extern Pool g_1072c4e0;
extern Pool g_1072c4b0;
extern const char g_1059a7b4[];
extern const char g_1059aa0c[];

struct SoundCommand_101bcd20
{
	int m_n[6];
	SoundCommand_101bcd20() { for (int i = 0; i < 6; i++) m_n[i] = 0; }
	void *operator new(unsigned int size) { return g_1072c4b0.sub_1013dc60(size); }
};

struct SoundEnvelope_101bcd20
{
	float m_current;
	float m_target;
	float m_rate;
	bool m_forceupdate;
	SoundEnvelope_101bcd20() { m_current = 0; m_target = 0; m_rate = 0; m_forceupdate = false; }
};

struct SoundHandle_101bcd20
{
	unsigned int m_Index;
	SoundHandle_101bcd20() { m_Index = 0xffffffff; }
};

struct SoundFilter_101bcd20
{
	int m_vt;
	SoundFilter_101bcd20() { ((CCopyRecipientFilter_101bc140 *)this)->sub_101bcef0(); }
};

struct SoundPatch_101bcd20
{
	SoundEnvelope_101bcd20 m_pitch;	// 0x00
	SoundEnvelope_101bcd20 m_volume;	// 0x10
	int m_nSoundLevel;	// 0x20
	float m_fl24;
	int m_n28;
	const char *m_pszSample;	// 0x2c
	SoundHandle_101bcd20 m_hEnt;	// 0x30
	int m_nChannel;
	int m_n38;
	void *m_pEmitter;	// 0x3c
	float m_flScale;
	SoundFilter_101bcd20 m_Filter;	// 0x44
	unsigned int m_nFlags;
	int m_n4c;
	int m_n50;
	int m_n54;
	int m_n58;
	int m_n5c;
	int m_n60;
	int m_n64;
	int m_n68;

	SoundPatch_101bcd20()
	{
		m_pszSample = 0;
	}
	void *operator new(unsigned int size) { return g_1072c4e0.sub_1013dc60(size); }
};

struct SoundList_101bcd20
{
	SoundPatch_101bcd20 **m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	int m_Size;
	SoundPatch_101bcd20 **m_pElements;

	void sub_101bdeb0(int num);
	void sub_101bde20(int elem, int num);

	int AddToTail(SoundPatch_101bcd20 *const &src)
	{
		int elem = m_Size;
		if (m_Size + 1 > m_nAllocationCount)
			sub_101bdeb0(m_Size + 1 - m_nAllocationCount);
		m_Size++;
		m_pElements = m_pMemory;
		sub_101bde20(elem, 1);
		SoundPatch_101bcd20 **p = &m_pMemory[elem];
		if (p)
			*p = src;
		return elem;
	}
};

void CSoundControllerImp::sub_101bcd20(CUnknown101bc140 **ppSoundPatch, ISoundRestoreView *pRestore)
{
	SoundPatch_101bcd20 *pPatch = new SoundPatch_101bcd20;

	pRestore->vfunc5();
	bool bValidData = pRestore->vfunc2(pPatch, g_1059a7b4) != 0;
	pRestore->vfunc8();

	bValidData = bValidData && (pPatch->m_pEmitter != 0);

	if (bValidData) {
		((SoundList_101bcd20 *)&m_Sounds)->AddToTail(pPatch);
	}

	pRestore->vfunc5();
	if (bValidData) {
		int count;
		pRestore->vfunc15(&count, 1, 0);
		while (--count >= 0) {
			SoundCommand_101bcd20 *pCommand = new SoundCommand_101bcd20;
			pRestore->vfunc5();
			if (pRestore->vfunc2(pCommand, g_1059aa0c)) {
				pCommand->m_n[0] = (int)pPatch;
				((CUnknown101bc750 *)this)->sub_101bc750((int)pCommand);
			}
			pRestore->vfunc8();
		}
	}
	pRestore->vfunc8();
	*ppSoundPatch = (CUnknown101bc140 *)pPatch;
}
// END FUNCTION

// FUNCTION: 0x101bcef0 size=0x2a
namespace lifted {
extern char g_1047bd24;
}
struct CUnknown101bcef0 { void * sub_101bcef0(); };
void * CUnknown101bcef0::sub_101bcef0()
{
    *(int *)((char *)this + 4) = 0;
    *(int *)((char *)this + 8) = 0;
    *(int *)((char *)this + 0xc) = 0;
    *(int *)((char *)this + 0x10) = 0;
    *(int *)((char *)this + 0x14) = 0;
    *(int *)((char *)this + 0x18) = 0;
    *(int *)this = (int)&lifted::g_1047bd24;
    *(char *)((char *)this + 0x1c) = 0;
    *(int *)((char *)this + 0x20) = -1;
    *(char *)((char *)this + 0x24) = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x101bcf30 size=0x9
#include "CCopyRecipientFilter.h"
unsigned int CCopyRecipientFilter::vfunc1() { return m_flags >> 1 & 1; }
// END FUNCTION

// FUNCTION: 0x101bcf50 size=0x4
#include "CCopyRecipientFilter.h"
int CCopyRecipientFilter::vfunc2()
{
    return *(int *)((char *)this + 0x14);
}
// END FUNCTION

// FUNCTION: 0x101bcf70 size=0xd
#include "CCopyRecipientFilter.h"
int CCopyRecipientFilter::vfunc3(int index)
{
	return m_pRecipients[index];
}
// END FUNCTION

// FUNCTION: 0x101bcf90 size=0xa
#include "CCopyRecipientFilter.h"
unsigned int CCopyRecipientFilter::vfunc7()
{
	return (m_flags >> 2) & 1;
}
// END FUNCTION

// FUNCTION: 0x101bcfb0 size=0x4
// TARGET: sub_101bcfb0
char __fastcall sub_101bcfb0(void *p) { return ((unsigned char *)p)[0x1c]; }
// END FUNCTION

// FUNCTION: 0x101bcfd0 size=0x4
#include "CCopyRecipientFilter.h"
int CCopyRecipientFilter::vfunc5()
{
    return *(int *)((char *)this + 0x20);
}
// END FUNCTION

// FUNCTION: 0x101bcff0 size=0x4
// TARGET: sub_101bcff0
char __fastcall sub_101bcff0(void *p) { return ((unsigned char *)p)[0x24]; }
// END FUNCTION

// FUNCTION: 0x101bd010 size=0xaf
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CRecipientFilter.h"


struct PlayerEdict_t {
	char m_pad0000[0x2e0];
	int m_edict;
};

// The game calls CUtlMemory<int>::Grow out of line here, where VC6 expands the template's Grow: the vector is
// written through a view of its own with the out-of-line copy declared (only for this matched function).
struct UtlMem2
{
	void sub_100eb280(int num);	// CUtlMemory<int>::Grow
};

struct CRecipientIntVecView
{
	int *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	int m_Size;
	int *m_pElements;

	void AddToTail(int src)
	{
		int elem = m_Size;
		if (m_Size + 1 > m_nAllocationCount)
			((UtlMem2 *)this)->sub_100eb280(m_Size + 1 - m_nAllocationCount);
		m_Size += 1;
		m_pElements = m_pMemory;
		int numToMove = m_Size - elem - 1;
		if (numToMove > 0)
			memmove(&m_pMemory[elem + 1], &m_pMemory[elem], numToMove * sizeof(int));
		int *p = &m_pMemory[elem];
		if (p)
			*p = src;
	}
};

bool CRecipientFilter::sub_101bd010(void *pPlayer)
{
	int edict = ((PlayerEdict_t *)pPlayer)->m_edict;
	int idx = engine->vfunc35(edict);
	if (idx < 0)
		return false;
	if (m_Recipients.Find(idx) != -1)
		return false;
	((CRecipientIntVecView *)&m_Recipients)->AddToTail(idx);
	return true;
}
// END FUNCTION

// FUNCTION: 0x101bd0f0 size=0x68
extern "C" __declspec(dllimport) void Plat_Free(void *);
extern int g_10447108[];
struct SFilter {
    void *vt;
    int m4;
    void *m8;
    int mc;
    int m10;
    int m14;
    void *m18;
    SFilter *sub_101bd0f0(unsigned char flag);
};
// TARGET: SFilter::sub_101bd0f0
SFilter *SFilter::sub_101bd0f0(unsigned char flag)
{
    m14 = 0;
    if (m10 != -1) {
        if (m8) { Plat_Free(m8); m8 = 0; }
        mc = 0;
    }
    m18 = m8;
    if (m10 != -1) {
        if (m8) { Plat_Free(m8); m8 = 0; }
        mc = 0;
    }
    vt = g_10447108;
    if (flag & 1)
        delete this;
    return this;
}
// END FUNCTION

// FUNCTION: 0x101bd180 size=0x28
#include "CSoundControllerImp.h"
#include "CUnknown101bbd10.h"

// TARGET: CSoundControllerImp::vfunc5
void CSoundControllerImp::vfunc5(void *pSound)
{
    if (pSound) {
        ((CUnknown101bbd10 *)pSound)->sub_101bbd10();
        vfunc4(pSound);
        sub_101bc590(pSound);
    }
}
// END FUNCTION

// FUNCTION: 0x101bd1c0 size=0xc2
#include "CEHandleGet.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CSoundControllerImp.h"
#include "CUnknown101bc140.h"
#include "ehandle.h"

struct CSoundPool { void *sub_1013dc60(int nSize); };
extern CSoundPool g_1072c4e0;

inline CBaseHandle GetNetworkableHandle(int iEntity)
{
	if (EHandleDetail::g_10566458->m_EntPtrArray[iEntity].m_pEntity)
		return CBaseHandle(iEntity, EHandleDetail::g_10566458->m_EntPtrArray[iEntity].m_SerialNumber);
	else
		return CBaseHandle();
}

struct CSoundEnvelopeNew
{
	float m_current;
	float m_target;
	float m_rate;
	bool m_forceupdate;
	CSoundEnvelopeNew() { m_current = 0; m_target = 0; m_rate = 0; m_forceupdate = false; }
};

struct CSoundPatchNew
{
	CSoundEnvelopeNew m_pitch;
	CSoundEnvelopeNew m_volume;
	int m_n20;
	int m_n24;
	int m_n28;
	const char *m_pszSample;
	EHANDLE m_hEnt;
	int m_n34;
	int m_n38;
	int m_n3c;
	int m_n40;
	CCopyRecipientFilter_101bc140 m_Filter;
	int m_n48;
	int m_n4c[8];

	CSoundPatchNew()
	{
		m_Filter.sub_101bcef0();
		m_pszSample = 0;
	}
	void *operator new(unsigned int nSize) { return g_1072c4e0.sub_1013dc60(nSize); }
};

// TARGET: CSoundControllerImp::vfunc8
CUnknown101bc140 *CSoundControllerImp::vfunc8(void *pFilter, unsigned int nEntIndex, const char *pszSample)
{
	CUnknown101bc140 *pSound = (CUnknown101bc140 *)new CSoundPatchNew;
	EHANDLE hEnt = (nEntIndex != -1) ? GetNetworkableHandle(nEntIndex) : CBaseHandle(0, 0);
	pSound->sub_101bb990(pFilter, hEnt.Get(), 0, pszSample, 0x4b);
	return pSound;
}
// END FUNCTION

// FUNCTION: 0x101bd2d0 size=0xee
#include "CEHandleGet.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CSoundControllerImp.h"
#include "CUnknown101bc140.h"
#include "ehandle.h"

struct CSoundPool { void *sub_1013dc60(int nSize); };
extern CSoundPool g_1072c4e0;

inline CBaseHandle GetNetworkableHandle(int iEntity)
{
	if (EHandleDetail::g_10566458->m_EntPtrArray[iEntity].m_pEntity)
		return CBaseHandle(iEntity, EHandleDetail::g_10566458->m_EntPtrArray[iEntity].m_SerialNumber);
	else
		return CBaseHandle();
}

struct CSoundEnvelopeNew
{
	float m_current;
	float m_target;
	float m_rate;
	bool m_forceupdate;
	CSoundEnvelopeNew() { m_current = 0; m_target = 0; m_rate = 0; m_forceupdate = false; }
};

struct CSoundPatchNew
{
	CSoundEnvelopeNew m_pitch;
	CSoundEnvelopeNew m_volume;
	int m_n20;
	int m_n24;
	int m_n28;
	const char *m_pszSample;
	EHANDLE m_hEnt;
	int m_n34;
	int m_n38;
	int m_n3c;
	int m_n40;
	CCopyRecipientFilter_101bc140 m_Filter;
	int m_n48;
	int m_n4c[8];

	CSoundPatchNew()
	{
		m_Filter.sub_101bcef0();
		m_pszSample = 0;
	}
	void *operator new(unsigned int nSize) { return g_1072c4e0.sub_1013dc60(nSize); }
};

// TARGET: CSoundControllerImp::vfunc7
CUnknown101bc140 *CSoundControllerImp::vfunc7(void *pFilter, unsigned int nEntIndex, int nChannel, const char *pszSample, float flAttenuation)
{
	CUnknown101bc140 *pSound = (CUnknown101bc140 *)new CSoundPatchNew;
	EHANDLE hEnt = (nEntIndex != -1) ? GetNetworkableHandle(nEntIndex) : CBaseHandle(0, 0);
	pSound->sub_101bb990(pFilter, hEnt.Get(), nChannel, pszSample,
		(int)(flAttenuation != 0 ? 20.0f / flAttenuation + 50.0f : 0.0f));
	return pSound;
}
// END FUNCTION

// FUNCTION: 0x101bd400 size=0xc9
#include "CEHandleGet.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CSoundControllerImp.h"
#include "CUnknown101bc140.h"
#include "ehandle.h"

struct CSoundPool { void *sub_1013dc60(int nSize); };
extern CSoundPool g_1072c4e0;

inline CBaseHandle GetNetworkableHandle(int iEntity)
{
	if (EHandleDetail::g_10566458->m_EntPtrArray[iEntity].m_pEntity)
		return CBaseHandle(iEntity, EHandleDetail::g_10566458->m_EntPtrArray[iEntity].m_SerialNumber);
	else
		return CBaseHandle();
}

struct CSoundEnvelopeNew
{
	float m_current;
	float m_target;
	float m_rate;
	bool m_forceupdate;
	CSoundEnvelopeNew() { m_current = 0; m_target = 0; m_rate = 0; m_forceupdate = false; }
};

struct CSoundPatchNew
{
	CSoundEnvelopeNew m_pitch;
	CSoundEnvelopeNew m_volume;
	int m_n20;
	int m_n24;
	int m_n28;
	const char *m_pszSample;
	EHANDLE m_hEnt;
	int m_n34;
	int m_n38;
	int m_n3c;
	int m_n40;
	CCopyRecipientFilter_101bc140 m_Filter;
	int m_n48;
	int m_n4c[8];

	CSoundPatchNew()
	{
		m_Filter.sub_101bcef0();
		m_pszSample = 0;
	}
	void *operator new(unsigned int nSize) { return g_1072c4e0.sub_1013dc60(nSize); }
};

// TARGET: CSoundControllerImp::vfunc6
CUnknown101bc140 *CSoundControllerImp::vfunc6(void *pFilter, unsigned int nEntIndex, int nChannel, const char *pszSample, int nSoundLevel)
{
	CUnknown101bc140 *pSound = (CUnknown101bc140 *)new CSoundPatchNew;
	EHANDLE hEnt = (nEntIndex != -1) ? GetNetworkableHandle(nEntIndex) : CBaseHandle(0, 0);
	pSound->sub_101bb990(pFilter, hEnt.Get(), nChannel, pszSample, nSoundLevel);
	return pSound;
}
// END FUNCTION

// FUNCTION: 0x101bd510 size=0x75
#include "utlrbtree.h"
#include "CPASAttenuationFilter.h"
#include "UtlMem.h"
#include "CSoundControllerImp.h"

struct CSoundPatchObj
{
	char m_pad0000[0x44];
	void *m_pFilterVtbl;	// 0x44: IRecipientFilter
	char m_pad0048[4];
	CRecipientVec m_Recipients;	// 0x4c
};

struct CSoundPatchPool { void sub_1013dce0(void *pSound); };
extern CSoundPatchPool g_1072c4e0;
extern void *vt_10447108[];

void CSoundControllerImp::vfunc9(void *pSound)
{
	if (pSound) {
		vfunc5(pSound);
		CSoundPatchObj *p = (CSoundPatchObj *)pSound;
		CRecipientVec *v = &p->m_Recipients;
		for (int i = v->m_Size; --i >= 0; )
			v->sub_10013e12();
		v->m_Size = 0;
		((UtlMem *)&v->m_Memory)->sub_1002cbd0();
		v->m_pElements = v->m_Memory.m_pMemory;
		v->m_Memory.Purge(g_109f3624);
		p->m_pFilterVtbl = vt_10447108;
		g_1072c4e0.sub_1013dce0(pSound);
	}
}
// END FUNCTION

// FUNCTION: 0x101bd5b0 size=0x16
#include "CSoundControllerImp.h"
namespace lifted {
struct C10014713 { int sub_10014713(int, int); };
}
int CSoundControllerImp::vfunc10(int a0, int a1, int a2)
{
    return ((lifted::C10014713 *)a0)->sub_10014713(a1, a2);
}
// END FUNCTION

// FUNCTION: 0x101bd5e0 size=0x16
#include "CSoundControllerImp.h"
namespace lifted {
struct C100139e4 { int sub_100139e4(int, int); };
}
int CSoundControllerImp::vfunc11(int a0, int a1, int a2)
{
    return ((lifted::C100139e4 *)a0)->sub_100139e4(a1, a2);
}
// END FUNCTION

// FUNCTION: 0x101bd610 size=0xc
#include "CSoundControllerImp.h"
namespace lifted {
struct C1000f231 { int sub_1000f231(); };
}
int CSoundControllerImp::vfunc13(int a0)
{
    return ((lifted::C1000f231 *)a0)->sub_1000f231();
}
// END FUNCTION

// FUNCTION: 0x101bd630 size=0xc
#include "CSoundControllerImp.h"
namespace lifted {
struct C10008ddc { int sub_10008ddc(); };
}
int CSoundControllerImp::vfunc14(int a0)
{
    return ((lifted::C10008ddc *)a0)->sub_10008ddc();
}
// END FUNCTION

// FUNCTION: 0x101bd650 size=0x11
struct S { void sub_10005cdb(int); };
void __stdcall sub_101bd650(S *p, int a)
{
    p->sub_10005cdb(a);
}
// END FUNCTION

// FUNCTION: 0x101bd680 size=0x101
#include "CSoundControllerImp.h"

struct IUniformRandomStream { virtual void v0(); virtual float RandomFloat(float flMin, float flMax); };
extern IUniformRandomStream *g_1070b244;
extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);

float CSoundControllerImp::vfunc16(void *pSound, int command, envelopePoint_t *points, int numPoints)
{
	float amplitude = 0.0f;
	float duration = 0.0f;
	float totalDuration = 0.0f;
	vfunc4(pSound);
	for (int i = 0; i < numPoints; i++)
	{
		if (points[i].amplitudeMin == -1.0f && points[i].amplitudeMax == -1.0f)
		{
			if (i == 0)
				Msg("Invalid starting amplitude value in envelope!  (Cannot be -1)\n");
		}
		else
			amplitude = g_1070b244->RandomFloat(points[i].amplitudeMin, points[i].amplitudeMax);
		if (points[i].durationMin == -1.0f && points[i].durationMax == -1.0f)
		{
			if (i == 0)
				Msg("Invalid starting duration value in envelope! (Cannot be -1)\n");
		}
		else
			duration = g_1070b244->RandomFloat(points[i].durationMin, points[i].durationMax);
		vfunc3(pSound, totalDuration, command, duration, amplitude);
		totalDuration += duration;
	}
	return totalDuration;
}
// END FUNCTION

// FUNCTION: 0x101bd7e0 size=0x1f
#include "vampire.h"
#include "CSoundControllerImp.h"
#include "CSoundEnvelopeController.h"
// TARGET: CSoundControllerImp::vfunc15
void CSoundControllerImp::vfunc15(void *pSound, int command, int *pPoints)
{
    ((CSoundEnvelopeController *)this)->vfunc16(pSound, command, (void *)pPoints[0], pPoints[1]);
}
// END FUNCTION

// FUNCTION: 0x101bd810 size=0x24
#include "CSoundControllerImp.h"

struct CUnknown101bc260
{
    void sub_101bc260(int a);
};

// TARGET: CSoundControllerImp::vfunc17
void CSoundControllerImp::vfunc17(int a)
{
    int i = *(int *)((char *)this + 0x18);
    while (--i >= 0)
        ((CUnknown101bc260 *)((void **)*(void ***)((char *)this + 0xc))[i])->sub_101bc260(a);
}
// END FUNCTION

// FUNCTION: 0x101bd850 size=0x26
#include "CUnknown101bc140.h"

struct CSoundControllerImpView {
    char m_pad0000[0xc];
    CUnknown101bc140 **m_pp0c;	// 0x0c
    char m_pad0010[0x18 - 0x10];
    int m_n18;	// 0x18
    void sub_101bd850();
};

// TARGET: CSoundControllerImpView::sub_101bd850
void CSoundControllerImpView::sub_101bd850()
{
    int i = m_n18;
    while (--i >= 0) {
        CUnknown101bc140 *p = m_pp0c[i];
        if (p != 0 && *(int *)((char *)p + 0x3c) != 0) {
            p->sub_101bc140();
        }
    }
}
// END FUNCTION
