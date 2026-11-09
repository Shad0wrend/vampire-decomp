// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10280360 size=0x240
#include "CAI_BaseNPC.h"
#include "CAI_Navigator.h"
#include "CDevFlagObj.h"
#include "UTIL_Trace.h"
#include "Vector.h"
extern CDevFlagObj *g_10924a6c;
extern float sub_102f9c70(const Vector &v);

#define S1(x) virtual void s##x();
#define S10(p) S1(p##0) S1(p##1) S1(p##2) S1(p##3) S1(p##4) S1(p##5) S1(p##6) S1(p##7) S1(p##8) S1(p##9)

struct CAI_BaseNPCVtbl
{
	S10(0) S10(1) S10(2) S10(3) S10(4) S10(5) S10(6) S10(7) S10(8) S10(9)
	S10(10) S10(11) S10(12) S10(13) S10(14) S10(15) S10(16) S10(17) S10(18) S10(19)
	S10(20) S10(21) S10(22) S10(23) S10(24) S10(25) S10(26) S10(27) S10(28) S10(29)
	S10(30) S10(31) S10(32) S10(33) S10(34) S10(35) S10(36) S10(37) S10(38) S10(39)
	S10(40) S10(41) S10(42) S10(43) S10(44) S10(45) S10(46) S10(47) S10(48) S10(49)
	S10(50) S10(51) S10(52) S10(53) S10(54) S10(55)
	virtual void s560(); virtual void s561(); virtual void s562(); virtual void s563();
	virtual void s564(); virtual void s565(); virtual void s566(); virtual void s567();
	virtual void s568();
	virtual int s569(void *pOther);
};

bool CAI_BaseNPC::sub_10280360()
{
	if ( ((CAI_Navigator *)Owned5d34())->sub_102ee620() == 6 && vfunc167() )
	{
		int act = ((CAI_BaseNPCVtbl *)this)->s569( *(void **)((char *)this + 0x5ddc) );

		Vector vecPath = *((CAI_Navigator *)Owned5d34())->sub_102ee140();
		float flZ = sub_102f9c70( vecPath );
		vecPath.z = flZ;

		Vector vecGoal = vecPath + vfunc533( act, act );

		CGameTrace tr;
		UTIL_TraceLine( vecGoal, ((CAI_BaseNPC *)vfunc167())->vfunc193(), 0x2804091, this, 0, &tr );

		if ( tr.m_fraction == 1.0 )
		{
			if ( sub_10269c70( 0x39 ) )
			{
				g_10924a6c->vfunc1();
				sub_10269a20( 0x39 );
			}
			else
			{
				*(const char **)((char *)this + 0x1b44) = "E:\\Vampire\\main\\dlls\\AI_BaseNPC_Movement.cpp";
				*(int *)((char *)this + 0x1b48) = 188;
				vfunc448( 0x1b );
				return false;
			}
		}
	}
	return true;
}
// END FUNCTION
