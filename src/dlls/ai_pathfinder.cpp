// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

// FUNCTION: 0x102fcab0 size=0xdd
#include "vampire_all.h"
#include "CAI_Pathfinder.h"
#include "CPairFields102dda40.h"
#include "CAI_BaseNPC.h"
#include "utlvector.h"

extern "C" __declspec(dllimport) void __cdecl Msg(const char *pszFormat, ...);
enum NAVT { NAV_NONE = -1, NAV_GROUND = 0 };
NAVT __cdecl sub_102fca40(int moveTypeBits);
namespace block_102fcab0 {
#pragma auto_inline(off)
NAVT __cdecl sub_102fca40(int flag);
NAVT __cdecl sub_102fca40(int flag)
{
	switch (flag)
	{
	case 1:
		return (NAVT)0;
	case 4:
		return (NAVT)2;
	case 8:
		return (NAVT)3;
	case 2:
		return (NAVT)1;
	}
	return NAV_NONE;
}
#pragma auto_inline(on)
}
#define MoveBitsToNavType block_102fcab0::sub_102fca40
enum HULLT { HULL_HUMAN };
struct CPFView : CAI_Pathfinder
{
	HULLT GetHullType() const { return (HULLT)m_n08; }
	int CapabilitiesGet() { return GetOuter()->vfunc513(); }
	CAI_BaseNPC *GetOuter() { return (CAI_BaseNPC *)m_pOuter; }
};
#define GetHullType() ((CPFView *)this)->GetHullType()
#define CapabilitiesGet() ((CPFView *)this)->CapabilitiesGet()

struct CNodeLinksView
{
	char pad0[0x78];
	int m_nLinks;
	CUtlVector<CPairFields102dda40 *> m_Links;
	int NumLinks() const { return m_nLinks; }
	CPairFields102dda40 *GetLinkByIndex(int i) { return m_Links[i]; }
};

int CAI_Pathfinder::sub_102fcab0(CAI_PathfinderNode **ppNodesX, int parentID, int destID)
{
	CNodeLinksView **ppNodes = (CNodeLinksView **)ppNodesX;
	NAVT navType = NAV_NONE;

	CNodeLinksView *pNode = ppNodes[parentID];
	for (int link=0; link < pNode->NumLinks();link++) 
	{
		if (pNode->GetLinkByIndex(link)->sub_102dda40(parentID) == destID)
		{
			int moveTypeBits = (pNode->GetLinkByIndex(link)->m_iAcceptedMoveTypes[GetHullType()] & CapabilitiesGet());
			NAVT linkType = MoveBitsToNavType( moveTypeBits );
			navType = linkType; 
			break;
		}
	}
	if ( navType == NAV_NONE )
	{
		pNode = ppNodes[destID];
		for (int link=0; link < pNode->NumLinks();link++) 
		{
			if (pNode->GetLinkByIndex(link)->sub_102dda40(parentID) == destID)
			{
				int npcMoveBits = CapabilitiesGet();
				int nodeMoveBits = pNode->GetLinkByIndex(link)->m_iAcceptedMoveTypes[GetHullType()];
				int moveTypeBits = ( npcMoveBits & nodeMoveBits );
				NAVT linkType = MoveBitsToNavType( moveTypeBits );
				navType = linkType; 
				Msg( "Note: Strange link found between nodes in AI node graph\n" );
				break;
			}
		}
	}
	return navType;
}
// END FUNCTION
