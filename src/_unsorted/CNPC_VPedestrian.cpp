// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a1c20 size=0x6
#include "CNPC_VPedestrian.h"
namespace lifted {
extern char g_1064b0b0;
}
datamap_t * CNPC_VPedestrian::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1064b0b0);
}
// END FUNCTION

// FUNCTION: 0x103a1de0 size=0x7
#include "CNPC_VPedestrian.h"
namespace lifted {
extern float g_104563b0;
}
float CNPC_VPedestrian::vfunc550()
{
    return lifted::g_104563b0;
}
// END FUNCTION

// FUNCTION: 0x103a1e00 size=0x6
#include "CNPC_VPedestrian.h"
namespace lifted {
extern char g_1093bfb0;
}
int CNPC_VPedestrian::vfunc580()
{
    return (int)&lifted::g_1093bfb0;
}
// END FUNCTION

// FUNCTION: 0x103a1e20 size=0x6
#include "CNPC_VPedestrian.h"
namespace lifted {
extern int g_1064b1ac;
}
int CNPC_VPedestrian::vfunc451()
{
    return lifted::g_1064b1ac;
}
// END FUNCTION

// FUNCTION: 0x103a1e40 size=0x1e
#include "CNPC_VPedestrian.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VPedestrian::vfunc5
CBaseEntity *CNPC_VPedestrian::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103a1f40 size=0x6
extern unsigned char g_1064b1a4;
// TARGET: sub_103a1f40
unsigned char sub_103a1f40()
{
    return g_1064b1a4;
}
// END FUNCTION

// FUNCTION: 0x103a1fa0 size=0x1d
#include "CNPC_VPedestrian.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093bffc;
extern B g_10936c74;
int CNPC_VPedestrian::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093bffc.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103a2520 size=0x5
#include "CNPC_VPedestrian.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VPedestrian::vfunc104
// the game's 0x103a2520: a tail call (jmp) of CNPC_VHuman::vfunc104
void CNPC_VPedestrian::vfunc104()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x103a2540 size=0x15
#include "CNPC_VPedestrian.h"

struct CUnk1026dc00
{
	char pad[0x5cec];
	unsigned int m_5cec;
	unsigned int sub_1026dc00(unsigned int flags);
};

struct CVHumanView103
{
	void sub_10384690();
};

void CNPC_VPedestrian::vfunc103()
{
	((CUnk1026dc00 *)this)->sub_1026dc00(0x200000);
	((CVHumanView103 *)this)->sub_10384690();
}
// END FUNCTION

// FUNCTION: 0x103a2570 size=0x18
// TARGET: CNPC_VPedestrian::vfunc420
#include "CNPC_VPedestrian.h"
void sub_1029a0b0();
void CNPC_VPedestrian::vfunc420()
{
    sub_1029a0b0();
    m_b6678 = 0;
    m_n641c = 0;
}
// END FUNCTION

// FUNCTION: 0x103a25a0 size=0x29e
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VPedestrian.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include "Vector.h"

void CNPC_VPedestrian::vfunc130(int a)
{
	CEntityVSlots *pThis = (CEntityVSlots *)this;

	sub_10002b99( a );
	if ( !(char)a )
		return;
	if ( m_eLevelResetType == 2 )
		return;

	if ( !pThis->slot158() )
	{
		if ( m_eLevelResetType != 0 )
			return;
	}

	if ( sub_100b5190() )
		return;

	sub_10334b10();
	if ( !pThis->slot158() )
		sub_101cf390( (int)this, (int)m_vecMins6660, (int)m_vecMaxs666c );

	pThis->slot420();

	sub_102c4430( g_106b8540 );
	sub_101cf5c0( (CBaseEntity *)this, (int)&m_vecInitialPosition, 0 );
	pThis->slot64( (const float *)&m_qaInitialAngles );

	{
		ScopeTrace st( "CBaseEntity::SetSolidFlags", m_name26c ? m_name26c : g_106b8540 );
		( (CCollisionProperty *)( (char *)this + 0x270 ) )->sub_100dc580( 0 );
	}
	{
		ScopeTrace st( "CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540 );
		( (CCollisionProperty *)( (char *)this + 0x270 ) )->AddSolidFlags( 1 );
	}
	{
		ScopeTrace st( "CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540 );
		( (CCollisionProperty *)( (char *)this + 0x270 ) )->AddSolidFlags( 0x40 );
	}
	{
		ScopeTrace st( "CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540 );
		( (CCollisionProperty *)( (char *)this + 0x270 ) )->sub_100dc480( 2 );
	}

	pThis->slot93( 4, 0 );
	sub_10273070( 0 );
	sub_101cf600( (void *)this );
	pThis->slot223();
}
// END FUNCTION

// FUNCTION: 0x103a28f0 size=0x6
#include "CNPC_VPedestrian.h"
int CNPC_VPedestrian::vfunc473()
{
    return 0x81d;
}
// END FUNCTION

// FUNCTION: 0x103a2910 size=0x6
#include "CNPC_VPedestrian.h"
int CNPC_VPedestrian::vfunc138()
{
    return 5;
}
// END FUNCTION

// FUNCTION: 0x103a2930 size=0x3a
#include "CNPC_VPedestrian.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VPedestrian::vfunc404
int CNPC_VPedestrian::vfunc404(CBaseEntity *pEntity)
{
    if (pEntity == 0) {
        return 0;
    }
    int nCharacter = *(int *)((char *)pEntity + 0x9c);
    if (nCharacter != 0 && (*(int *)(nCharacter + 0x14bc) & 0x20000) == 0x20000) {
        return 2;
    }
    return ((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc404(pEntity);
}
// END FUNCTION

// FUNCTION: 0x103a2980 size=0x1e
#include "CNPC_VPedestrian.h"

// The base-class members the game calls directly (stubs), seen from this class.
struct CUnkPedestrianStubs {
	void sub_10011b35();
	void sub_100123f5(int a);
};

// TARGET: CNPC_VPedestrian::vfunc453
void CNPC_VPedestrian::vfunc453()
{
	((CUnkPedestrianStubs *)this)->sub_10011b35();
	if (!sub_1033e2b0())
	{
		((CUnkPedestrianStubs *)this)->sub_100123f5(0x24);
	}
}
// END FUNCTION

// FUNCTION: 0x103a29b0 size=0x5
#include "CNPC_VPedestrian.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VPedestrian::vfunc463
// the game's 0x103a29b0: a tail call (jmp) of CNPC_VHuman::vfunc463
void CNPC_VPedestrian::vfunc463(int a0, int a1)
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc463(a0, a1);
}
// END FUNCTION

// FUNCTION: 0x103a29d0 size=0x5
#include "animevent_t.h"
#include "CNPC_VPedestrian.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VPedestrian::vfunc259
// the game's 0x103a29d0: a tail call (jmp) of CNPC_VHuman::vfunc259
void CNPC_VPedestrian::vfunc259(animevent_t *a0)
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc259(a0);
}
// END FUNCTION

// FUNCTION: 0x103a38c0 size=0xdc
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CNPC_VPedestrian.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern char g_1053dafc[];

void CNPC_VPedestrian::vfunc301(int a, int b)
{
	CCollisionProperty *pCollision = (CCollisionProperty *)((char *)this + 0x270);
	float *pMins = pCollision->vfunc1();
	m_vecMins6660[0] = pMins[0];
	m_vecMins6660[1] = pMins[1];
	m_vecMins6660[2] = pMins[2];
	float *pMaxs = pCollision->vfunc2();
	m_vecMaxs666c[0] = pMaxs[0];
	m_vecMaxs666c[1] = pMaxs[1];
	m_vecMaxs666c[2] = pMaxs[2];
	sub_10293a60(a, b);
	sub_100ac4e0(0, 0, 0);
	{
		ScopeTrace trace(g_1053dafc, m_name26c ? m_name26c : g_106b8540);
		pCollision->sub_100dc480(0);
	}
}
// END FUNCTION
