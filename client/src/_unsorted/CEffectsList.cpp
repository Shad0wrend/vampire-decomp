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
