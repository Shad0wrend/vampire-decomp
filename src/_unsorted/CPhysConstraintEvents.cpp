// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002c990 size=0x58
#include "CPhysConstraintEvents.h"
void CPhysConstraintEvents::vfunc0(IPhysicsConstraint *pConstraint)
{
	CBaseEntity *pEntity = pConstraint->GetGameData();
	if (pEntity) {
		CVariantCopy emptyVariant;
		pEntity->vfunc118("ConstraintBroken", 0, 0, emptyVariant, 0);
	}
}
// END FUNCTION
