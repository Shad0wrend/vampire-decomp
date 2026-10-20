// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102c87a0 size=0x69
#include "CAI_StandoffGoal.h"

__declspec(dllimport) void __cdecl DevMsg(const char *, ...);

// TARGET: CAI_StandoffGoal::vfunc241
void CAI_StandoffGoal::vfunc241(int a)
{
	if ((m_Aggressiveness < 0 || m_Aggressiveness > 4) && m_Aggressiveness != 5)
	{
		DevMsg("Invalid aggressiveness value %d\n", m_Aggressiveness);
		if (m_Aggressiveness < 0)
			m_Aggressiveness = 0;
		else if (m_Aggressiveness > 4)
			m_Aggressiveness = 4;
	}
	CAI_GoalEntity::vfunc241(a);
}
// END FUNCTION
