// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1028cc00 size=0x57
#include "CAI_NPCPatrolPathSaveRestoreOps.h"
struct CPatrolPathField
{
	char m_bValid;
	void *m_pPath;
};
extern void (__cdecl *g_109f366c)(const char *fmt, ...);
extern int g_106117c0;
extern int g_106117c4;

void CAI_NPCPatrolPathSaveRestoreOps::vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave)
{
#define pSave ((CSave *)pSave)
	CPatrolPathField *pField = (CPatrolPathField *)fieldInfo->pField;
	pSave->vfunc12(pField, 1);
	if (pField->m_bValid)
	{
		if (pField->m_pPath)
			pSave->vfunc3((int)"PatrolPath", (int)pField->m_pPath, 0, g_106117c0, g_106117c4);
		else
			g_109f366c("Invalid game state while trying to save NPC.\n");
	}
#undef pSave
}
// END FUNCTION

// FUNCTION: 0x1028cc80 size=0x62
#include "CBaseEntity.h"
#include "CAI_NPCPatrolPathSaveRestoreOps.h"
#include "CRestore.h"
struct SNPCTroikaRef_t;
extern void (*g_109f366c)(const char *, ...);
extern int g_106117c0;
extern int g_106117c4;
int sub_10307d30();
struct CPatrolOwnerView {
	void sub_1029f5d0(SNPCTroikaRef_t *);
};
struct CRestoreIntSlot3 {
	virtual void vfunc0();
	virtual void vfunc1();
	virtual int vfunc2(CBaseEntity *pEnt, int map);
	virtual int vfunc3(int a, int b, int c, int d, int e);
	virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8();
	virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13();
	virtual void s14(); virtual void s15();
	virtual char vfunc16();
};
void CAI_NPCPatrolPathSaveRestoreOps::vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore)
{
#define pRestore ((CRestore *)pRestore)
	SNPCTroikaRef_t *pPath = (SNPCTroikaRef_t *)fieldInfo->pField;
	CPatrolOwnerView *pOwner = (CPatrolOwnerView *)fieldInfo->pOwner;
	CRestoreIntSlot3 *pR = (CRestoreIntSlot3 *)pRestore;
	char *pFlag = (char *)pPath;
	*pFlag = pR->vfunc16();
	if (*pFlag) {
		int pBlock = sub_10307d30();
		*(int *)(pFlag + 4) = pBlock;
		if (!pR->vfunc3((int)"PatrolPath", pBlock, 0, g_106117c0, g_106117c4)) {
			pOwner->sub_1029f5d0(pPath);
			g_109f366c("Error restoring PatrolPath for NPC.\n");
		}
	}
#undef pRestore
}
// END FUNCTION
