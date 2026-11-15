// CAI_LocalIdSpace.h: maps an NPC class's local schedule/task/condition/squad slot ids to global ones
// (dlls/ai_namespaces.h, 2003 and 2004). DEFINE_CUSTOM_AI's gm_SquadSlotIdSpace globals construct one each.
#ifndef CAI_LOCALIDSPACE_H
#define CAI_LOCALIDSPACE_H

#define MAX_STRING_INDEX 9999

class CAI_GlobalNamespace;

class CAI_LocalIdSpace
{
public:
	CAI_LocalIdSpace(bool fIsRoot = false);	// function 0x102ea090

	int m_globalBase;	// fIsRoot ? 0 : -1
	int m_localBase;	// fIsRoot ? 0 : MAX_STRING_INDEX
	int m_localTop;
	int m_globalTop;
	CAI_LocalIdSpace *m_pParentIDSpace;
	CAI_GlobalNamespace *m_pGlobalNamespace;
};

#endif
