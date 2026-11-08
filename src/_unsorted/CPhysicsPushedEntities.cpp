// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10035d00 size=0xb4
#include "CPhysicsPushedEntities.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);

// CUtlVector<T>(growSize, initSize) inlined on the header's vector views
template <class V, class T>
inline void UtlVectorInit(V &v, T *, int growSize, int initSize)
{
	v.m_pMemory = 0;
	v.m_nAllocationCount = initSize;
	v.m_nGrowSize = growSize;
	if (v.m_nAllocationCount)
		v.m_pMemory = (T *)Plat_Alloc(v.m_nAllocationCount * sizeof(T));
	v.m_Size = 0;
	v.m_pElements = v.m_pMemory;
}

CPhysicsPushedEntities::CPhysicsPushedEntities()
{
	UtlVectorInit(m_rgPusher, (PusherInfo_t *)0, 8, 8);
	UtlVectorInit(m_rgMoved, (MovedEntity_t *)0, 32, 32);
	ScopeTrace trace("CPhysicsPushedEntities::CPhysicsPushedEntities", g_106b8540, g_106b8540);
}
// END FUNCTION
