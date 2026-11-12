// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102a9d20 size=0x73
#include "AI_NavGoal_t.h"
#include "CBaseEntity.h"
#include "Vector.h"
extern Vector g_10934060;	// vec3_invalid

AI_NavGoal_t::AI_NavGoal_t(const Vector &dest, Activity activity, float tolerance, unsigned flags, CBaseEntity *pTarget)
    : type(GOALTYPE_LOCATION), dest(dest), destNode(-1), activity(activity), arrivalActivity(ACT_INVALID), arrivalSequence(-1),
      tolerance(tolerance), flags(flags), pTarget(pTarget), arrivalDirection(g_10934060), m_n38(0), m_n3c(0)
{
}
// END FUNCTION
