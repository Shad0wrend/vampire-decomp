// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

// FUNCTION: 0x103008f0 size=0x1de
#include "CUnknown103008f0.h"
#include "CAI_Pathfinder.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CBitString.h"

typedef void (*FnDevWarning)(int level, const char *fmt, ...);
extern FnDevWarning g_109f3658;
extern char g_1093408c;
extern int g_106c994c;

inline CAI_PathfinderNode *GetNode(CAI_PathfinderNetwork *pNet, int index)
{
	if (index >= 0 && index < pNet->m_nNodes)
		return pNet->m_ppNodes[index];
	g_106c994c++;
	return 0;
}

inline CAI_PathfinderNetwork *GetNetwork(CAI_PathfinderOuter *p)
{
	return p->m_pPathfinder->m_pNetwork;
}

int CUnknown103008f0::sub_103008f0(const Vector *pPosition, float flDistance, int c)
{
	if (!g_1093408c)
	{
		g_109f3658(2, "Graph not ready for FindBackAwayNode!\n");
		return -1;
	}
	CAI_PathfinderOuter *pOuter = (CAI_PathfinderOuter *)m_pOuter;
	CAI_PathfinderNetwork *pNetwork = pOuter->m_pPathfinder->m_pNetwork;
	int iNearest = pNetwork->sub_102f3c10(pOuter, &((CEntityVSlots *)pOuter)->slot220()->x);
	int iTarget = GetNetwork((CAI_PathfinderOuter *)m_pOuter)->sub_102f3c10((CAI_PathfinderOuter *)m_pOuter, (const float *)pPosition);
	if (iNearest == -1)
	{
		CEntityVSlots *pEnt = (CEntityVSlots *)m_pOuter;
		Vector *pY = pEnt->slot220();
		Vector *pX = ((CEntityVSlots *)m_pOuter)->slot220();
		const char *pszName = ((CBaseEntity *)m_pOuter)->sub_1009f200();
		Vector *pZ = pEnt->slot220();
		g_109f3658(2, "FindBackAwayNode() - %s has no nearest node (%f, %f, %f)!\n", pszName, pX->x, pY->y, pZ->z);
		return -1;
	}
	if (iTarget == -1)
		iTarget = iNearest;
	Vector vecOrigin = *((CEntityVSlots *)m_pOuter)->slot220();
	int nHull = m_n08;
	CAI_PathfinderNode *pNode = GetNode(((CAI_PathfinderOuter *)m_pOuter)->m_pPathfinder->m_pNetwork, iNearest);
	Vector vecNodePos;
	pNode->sub_102fb0d0(&vecNodePos.x, nHull);
	flDistance = flDistance * flDistance;
	CBitString visited(((CAI_PathfinderOuter *)m_pOuter)->m_pPathfinder->m_pNetwork->m_nNodes);
	int iResult = sub_10300b50(&visited, pPosition, flDistance, c, iTarget, &vecOrigin, iNearest, &vecNodePos);
	visited.sub_100bf6a0();
	return iResult;
}
// END FUNCTION
