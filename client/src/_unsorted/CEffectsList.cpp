// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100d91f0 size=0x1e
#include "CEffectsList.h"

// VC6 writes CEffectsList's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CEffectsList *pcd_emit_100d91f0() { return new CEffectsList; }

// TARGET: ??_GCEffectsList@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100d9240 size=0x3c
#include "CEffectsList.h"
#include "CClientSideEffect.h"
extern "C" __declspec(dllimport) void DevWarning(int, const char *, ...);
void CEffectsList::vfunc1(CClientSideEffect *effect)
{
	if ( !effect )
	{
		return;
	}
	if ( m_nEffects >= 128 )
	{
		DevWarning( 1, "No room for effect %s\n", effect->vfunc2() );
		return;
	}
	m_rgEffects[ m_nEffects++ ] = effect;
}
// END FUNCTION

// FUNCTION: 0x100d9280 size=0x81
#include "CEffectsList.h"
#include "CClientSideEffect.h"
extern "C" __declspec(dllimport) void DevWarning(int, const char *, ...);
void CEffectsList::vfunc2(CClientSideEffect *effect)
{
	int i;
	bool found = false;
	if ( !effect || ( m_nEffects <= 0 ) )
	{
		return;
	}
	for ( i = 0; i < m_nEffects; i++ )
	{
		if ( m_rgEffects[ i ] == effect )
		{
			m_rgEffects[ i ] = 0;
			found = true;
			break;
		}
	}
	if ( !found )
	{
		DevWarning( 1, "Tried to remove %s from effects list, but it wasn't in the list\n", effect->vfunc2() );
		return;
	}
	for ( ; i < m_nEffects - 1; i++ )
	{
		m_rgEffects[ i ] = m_rgEffects[ i + 1 ];
	}
	m_nEffects--;
	effect->vfunc4();
	delete effect;
}
// END FUNCTION

// FUNCTION: 0x100d9310 size=0x1f1
#include "CEffectsList.h"
#include "CClientSideEffect.h"

__declspec(dllimport) void vtune( bool resume );

class CCycleCount
{
public:
	__int64 m_Int64;
	void Sample()
	{
		unsigned long *pSample = (unsigned long *)&m_Int64;
		__asm
		{
			mov ecx, pSample
			rdtsc
			mov [ecx], eax
			mov [ecx+4], edx
		}
	}
};

class CFastTimer
{
public:
	CCycleCount m_Duration;
	void Start()
	{
		m_Duration.Sample();
	}
	void End()
	{
		CCycleCount cnt;
		cnt.m_Int64 = 0;
		cnt.Sample();
		m_Duration.m_Int64 = cnt.m_Int64 - m_Duration.m_Int64;
	}
	const CCycleCount &GetDuration() const
	{
		return m_Duration;
	}
};

class CVProfNode;

class CVProfile
{
public:
	bool m_bVTuneGroupEnabled;	// 0x0
	int m_nVTuneGroupID;	// 0x4
	int m_BudgetGroupStack[1024];	// 0x8
	int m_nBudgetGroupStackPtr;	// 0x1008
	int m_enabled;	// 0x100c
	bool m_fAtRoot;	// 0x1010
	CVProfNode *m_pCurNode;	// 0x1014
	CVProfNode *m_pRoot;	// 0x1018

	inline void EnterScope( const char *pszName, int detailLevel, const char *pBudgetGroupName );
	inline void ExitScope();
	inline void PushBudgetGroup( int id )
	{
		m_BudgetGroupStack[m_nBudgetGroupStackPtr] = id;
		m_nBudgetGroupStackPtr++;
		if ( m_BudgetGroupStack[m_nBudgetGroupStackPtr - 2] != id && m_bVTuneGroupEnabled && id == m_nVTuneGroupID )
			vtune( true );
	}
	inline void PopBudgetGroup()
	{
		m_nBudgetGroupStackPtr--;
		int id = m_BudgetGroupStack[m_nBudgetGroupStackPtr + 1];
		if ( m_BudgetGroupStack[m_nBudgetGroupStackPtr] != id && m_bVTuneGroupEnabled && id == m_nVTuneGroupID )
			vtune( false );
	}
};

extern "C" __declspec(dllimport) CVProfile g_VProfCurrentProfile;

class CVProfNode
{
public:
	const char *m_pszName;	// 0x00
	int m_unk04;
	CFastTimer m_Timer;	// 0x08
	int m_nRecursions;	// 0x10
	int m_nCalls;	// 0x14
	__int64 m_CurFrameTime;	// 0x18
	char m_pad[0x48 - 0x20];
	CVProfNode *m_pParent;	// 0x48
	char m_pad2[0x54 - 0x4c];
	int m_BudgetGroupID;	// 0x54

	__declspec(dllimport) CVProfNode *GetSubNode( const char *pszName, int detailLevel, const char *pBudgetGroupName );

	inline void EnterScope()
	{
		m_nCalls++;
		if ( m_nRecursions++ == 0 )
		{
			m_Timer.Start();
			g_VProfCurrentProfile.PushBudgetGroup( m_BudgetGroupID );
		}
	}
	inline bool ExitScope()
	{
		if ( --m_nRecursions == 0 && m_nCalls != 0 )
		{
			m_Timer.End();
			m_CurFrameTime += m_Timer.GetDuration().m_Int64;
			g_VProfCurrentProfile.PopBudgetGroup();
		}
		return m_nRecursions == 0;
	}
};

inline void CVProfile::EnterScope( const char *pszName, int detailLevel, const char *pBudgetGroupName )
{
	if ( m_enabled || !m_fAtRoot )
	{
		if ( m_pCurNode->m_pszName != pszName )
			m_pCurNode = m_pCurNode->GetSubNode( pszName, detailLevel, pBudgetGroupName );
		m_pCurNode->EnterScope();
		m_fAtRoot = false;
	}
}

inline void CVProfile::ExitScope()
{
	if ( !m_fAtRoot || m_enabled )
	{
		if ( m_pCurNode->ExitScope() )
			m_pCurNode = m_pCurNode->m_pParent;
		m_fAtRoot = ( m_pCurNode == m_pRoot );
	}
}

void CEffectsList::vfunc3(double frametime)
{
	g_VProfCurrentProfile.EnterScope( "CEffectsList::DrawEffects", 0, "Particle/Effect Rendering" );
	int i;
	for ( i = m_nEffects - 1; i >= 0; i-- )
	{
		CClientSideEffect *effect = m_rgEffects[ i ];
		if ( !effect )
			continue;
		effect->vfunc1( frametime );
		if ( !effect->vfunc3() )
		{
			vfunc2( effect );
		}
	}
	g_VProfCurrentProfile.ExitScope();
}
// END FUNCTION
