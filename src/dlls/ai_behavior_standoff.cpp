// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102c7bd0 size=0x18d
#include "CAI_StandoffBehavior.h"
#include "CAI_Navigator.h"

#define V1(p) virtual void p();
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct CStandoffEnemySlots
{
	V100(a0) V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6) V10(b7) V10(b8)
	V1(c0) V1(c1) V1(c2)
	virtual Vector vfunc193();
	V10(d0) V10(d1) V1(e0) V1(e1) V1(e2)
	virtual const Vector &vfunc217();
};

// CAI_Navigator seen with the argument types this caller passes (the matched callee is declared
// as sub_102edc80(const Vector *, float, int, int, Vector *, int) in CAI_Navigator.h)
struct CStandoffNavigator
{
	bool sub_102edc80(const Vector &vThreatPos, const Vector &vThreatEyePos, int c, float flDist, Vector *pOut, void *pEnemy);
	bool sub_102ecd20(void *pGoal, int nFlags);
};

struct CStandoffOuter
{
	V100(a0) V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5)
	V1(c0) V1(c1) V1(c2) V1(c3) V1(c4) V1(c5) V1(c6)
	virtual CStandoffEnemySlots *vfunc167();
	V100(d0) V100(d1) V10(e0) V10(e1) V10(e2) V10(e3) V10(e4) V10(e5) V10(e6) V10(e7)
	virtual void vfunc448(int a);
	V100(i0) V1(j0)
	virtual float vfunc550();

	char pad4[0x1b44 - 4];
	const char *m_pszFile1b44;
	int m_nLine1b48;
	char pad1[0x5cf0 - 0x1b4c];
	float m_fl5cf0;
	char pad2[0x5d34 - 0x5cf4];
	CStandoffNavigator *m_pNav5d34;

	CStandoffNavigator *GetNavigator() { return m_pNav5d34; }
};

extern int g_1092538c;
extern Vector g_10934060;
extern float g_1049aecc;

struct CStandoffNavGoal
{
	CStandoffNavGoal(int type_, const Vector &dest_, int activity_, float tolerance_ = g_1049aecc, unsigned flags_ = 0)
	{
		type = type_;
		dest = dest_;
		destNode = -1;
		activity = activity_;
		arrivalActivity = -1;
		arrivalSequence = -1;
		tolerance = tolerance_;
		flags = flags_;
		id = g_1092538c;
		arrivalDirection = g_10934060;
		pTarget = 0;
		unk3c = 0;
	}
	int type;
	Vector dest;
	int destNode;
	int activity;
	int arrivalActivity;
	int arrivalSequence;
	float tolerance;
	unsigned flags;
	int id;
	Vector arrivalDirection;
	int pTarget;
	int unk3c;
};

struct CStandoffView : CAI_StandoffBehavior
{
	CStandoffOuter *GetOuter() { return (CStandoffOuter *)m_pOuter; }
	CStandoffNavigator *GetNavigator() { return GetOuter()->GetNavigator(); }
};

// TARGET: CAI_StandoffBehavior::vfunc15
void CAI_StandoffBehavior::vfunc15(const CStandoffTask *pTask)
{
	CStandoffView *self = (CStandoffView *)this;
	if (pTask->m_iTask == 0x34)
		sub_102c7e10();
	else if (pTask->m_iTask == 0x58 && !(gpGlobals->curtime - m_fl58 > -0.001))
	{
		m_fl58 = -1.0f;
		CStandoffEnemySlots *pEnemy = self->GetOuter()->vfunc167();
		if (!pEnemy)
			pEnemy = (CStandoffEnemySlots *)self->GetOuter();
		Vector vec;
		if (self->GetNavigator()->sub_102edc80(pEnemy->vfunc217(), pEnemy->vfunc193(), 0, self->GetOuter()->vfunc550(), &vec, pEnemy))
		{
			CStandoffNavGoal goal(6, vec, 0x13);
			self->GetNavigator()->sub_102ecd20(&goal, 0);
			self->GetOuter()->m_fl5cf0 = gpGlobals->curtime + pTask->m_flData;
			return;
		}
		self->GetOuter()->m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\ai_behavior_standoff.cpp";
		self->GetOuter()->m_nLine1b48 = 0x17b;
		self->GetOuter()->vfunc448(8);
		return;
	}
	sub_102c6e50(pTask);
}
// END FUNCTION
