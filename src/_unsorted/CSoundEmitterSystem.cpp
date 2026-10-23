// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101b0110 size=0xbe
#include "CSoundEmitterSystem.h"
#include "CUnknown1024b370.h"
#include "UtlMem.h"
#include "utlvector.h"

extern char vt_1047b3c0[];

CSoundEmitterSystem *CSoundEmitterSystem::sub_101b0110(unsigned char flags)
{
	((IGameSystem *)this)->sub_1000cfbd();
	m_vtbl = vt_1047b3c0;
	((CUnknown1024b370 *)&m_listb0)->sub_1024b370();
	CUtlVector<int> *vec = (CUtlVector<int> *)&m_i9c;
	vec->m_Size = 0;
	((UtlMem *)vec)->sub_101b2070();
	vec->ResetDbgInfo();
	vec->m_Memory.Purge();
	((CUnknown1024b370 *)&m_list70)->sub_1024b370();
	((CUtlMemory<int> *)&m_i54)->Purge();
	((CUnknown1024b370 *)&m_list24)->sub_1024b370();
	((CUtlMemory<int> *)&m_i08)->Purge();
	if (flags & 1)
		delete this;
	return this;
}
// END FUNCTION
