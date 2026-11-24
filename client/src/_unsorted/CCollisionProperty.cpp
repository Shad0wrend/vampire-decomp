// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100431d0 size=0x4
#include "CCollisionProperty.h"

// TARGET: CCollisionProperty::vfunc0
void *CCollisionProperty::vfunc0()
{
	return m_unk3c;
}
// END FUNCTION

// FUNCTION: 0x10043290 size=0x4
#include "CCollisionProperty.h"
// TARGET: CCollisionProperty::vfunc11
int CCollisionProperty::vfunc11()
{
	return m_unk40;
}
// END FUNCTION

// FUNCTION: 0x100432e0 size=0x8
#include "CCollisionProperty.h"
#include "C_BaseEntity.h"

// TARGET: CCollisionProperty::vfunc8
const Vector &CCollisionProperty::vfunc8()
{
	return ((C_BaseEntity *)m_unk3c)->GetAbsOrigin();
}
// END FUNCTION

// FUNCTION: 0x10043440 size=0x4
#include "CCollisionProperty.h"

// TARGET: CCollisionProperty::vfunc1
Vector &CCollisionProperty::vfunc1()
{
	return m_vecMins;
}
// END FUNCTION

// FUNCTION: 0x10043450 size=0x4
#include "CCollisionProperty.h"

// TARGET: CCollisionProperty::vfunc2
void *CCollisionProperty::vfunc2()
{
	return &m_unk10;
}
// END FUNCTION

// FUNCTION: 0x10043530 size=0x8
#include "CCollisionProperty.h"
struct CColView { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); };
void CCollisionProperty::vfunc5() { ((CColView *)m_unk3c)->v27(); }
// END FUNCTION

// FUNCTION: 0x10044630 size=0x1
#include "CCollisionProperty.h"

// TARGET: CCollisionProperty::vfunc17
void CCollisionProperty::vfunc17()
{
}
// END FUNCTION

// FUNCTION: 0x10044640 size=0x7
#include "CCollisionProperty.h"

// TARGET: CCollisionProperty::vfunc12
int CCollisionProperty::vfunc12()
{
	return m_unk44;
}
// END FUNCTION
