// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1020a080 size=0xf
#include "CDebugEntity.h"
// TARGET: CDebugEntity::vfunc104
void CDebugEntity::vfunc104() { *(unsigned int *)((char *)this + 0x224) |= 0xd; }
// END FUNCTION

// FUNCTION: 0x1020a170 size=0x95
#include "utlrbtree.h"
#include "CDebugEntity.h"
#include "utlvector.h"
void sub_101434b0(int nEntIndex, int nLine, const char *text, float duration, int r, int g, int b, int a);

inline int ENTINDEX_Dbg(int pEdict)
{
	return engine->vfunc35(pEdict);
}

struct CDebugEntityIdxView : CDebugEntity
{
	int edict() { return m_pEdict2e0; }
	int entindex() { return ENTINDEX_Dbg(edict()); }
};

// TARGET: CDebugEntity::vfunc124
int CDebugEntity::vfunc124()
{
	int text_offset = CBaseEntity::vfunc124();
	if (*(unsigned char *)((char *)this + 0x224) & 1) {
		CUtlVector<CDebugEntityRecord> &list = *(CUtlVector<CDebugEntityRecord> *)&m_pRecords450;
		for (int i = 0; i < list.Count(); i++) {
			sub_101434b0(((CDebugEntityIdxView *)this)->entindex(), text_offset, list[i].m_pad00, 0, list[i].m_n80, list[i].m_n84, list[i].m_n88, list[i].m_n8c);
			text_offset++;
		}
	}
	return text_offset;
}
// END FUNCTION

// FUNCTION: 0x1020a470 size=0x86
#include "CDebugEntity.h"
#include "utlvector.h"

void sub_100aa7b0(void *pEntity);

CBaseEntity *CDebugEntity::vfunc5(unsigned int flags)
{
	((CUtlVector<int> *)((char *)this + 0x450))->~CUtlVector<int>();
	sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
