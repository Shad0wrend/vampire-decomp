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

void CAI_NPCPatrolPathSaveRestoreOps::vfunc0(SaveRestoreFieldInfo_t *fieldInfo, CSave *pSave)
{
	CPatrolPathField *pField = (CPatrolPathField *)fieldInfo->pField;
	pSave->vfunc12(pField, 1);
	if (pField->m_bValid)
	{
		if (pField->m_pPath)
			pSave->vfunc3((int)"PatrolPath", (int)pField->m_pPath, 0, g_106117c0, g_106117c4);
		else
			g_109f366c("Invalid game state while trying to save NPC.\n");
	}
}
// END FUNCTION
