// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101bcf30 size=0x9
unsigned int CCopyRecipientFilter::vfunc1() { return m_flags >> 1 & 1; }
// END FUNCTION

// FUNCTION: 0x101bcf70 size=0xd
int CCopyRecipientFilter::vfunc3(int index)
{
	return m_pRecipients[index];
}
// END FUNCTION

// FUNCTION: 0x101bcf90 size=0xa
unsigned int CCopyRecipientFilter::vfunc7()
{
	return (m_flags >> 2) & 1;
}
// END FUNCTION

// FUNCTION: 0x101bd010 size=0xaf
#include "CRecipientFilter.h"

struct EngineServer_t {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
	virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
	virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14();
	virtual void a15(); virtual void a16(); virtual void a17(); virtual void a18(); virtual void a19();
	virtual void a20(); virtual void a21(); virtual void a22(); virtual void a23(); virtual void a24();
	virtual void a25(); virtual void a26(); virtual void a27(); virtual void a28(); virtual void a29();
	virtual void a30(); virtual void a31(); virtual void a32(); virtual void a33(); virtual void a34();
	virtual int GetPlayerUserId(int edict);
};
extern EngineServer_t *g_1070b22c;

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
	int idx = g_1070b22c->GetPlayerUserId(edict);
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
