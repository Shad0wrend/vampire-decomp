// CAI_Motor (RTTI .?AVCAI_Motor@@): bases CAI_Component (+0x0) and CAI_ProxyMovementSink (+0x10)
// are not modelled; primary vtable 0x1049d854 has 21 slots.
#pragma once

#include "utlvector.h"
#include "CUtlVectorDataOps.h"
#include "Vector.h"
#include "CAI_InterestTarget.h"

struct ISaveRestoreOps;
class CBaseEntity;

class CAI_Motor
{
public:
	virtual CAI_Motor *vfunc0(unsigned int flags);
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual int vfunc4(const Vector &vecGoal, float flYaw);	// a step toward vecGoal: 0 (speed cleared, ideal yaw flYaw set) when the goal is not closer than a hundredth of the speed, else 1 and the speed is reduced by the distance still to go
	virtual void vfunc5();
	virtual void vfunc6(Vector *pDirection);	// faces the direction: resets the facing queue (sub_102e2690), slot 208(0) and slot 310(0x2c) of the owner, then the ideal yaw of the direction (yaw speed -1)
	virtual int vfunc7();	// UpdateYaw, then the owner's slot 310 with 0x2d (the facing direction's z positive) or 0x2e; stops the speed; returns 0
	virtual void vfunc8();
	virtual void vfunc9();
	virtual int vfunc10();
	virtual float vfunc11(int a);
	virtual void vfunc12();
	virtual void vfunc13();
	virtual void vfunc14(int a, int b, int c);	// forwards its arguments to the subobject at +0x54 (stub 0x1000b8ca)
	virtual float vfunc15(Vector &vecDir);	// GetFacingDirection: drops the expired facing targets (+0x54), blends the directions to the live ones (weighted by their interest) into vecDir and returns the total interest
	virtual float vfunc16();	// slot 16: the minimum speed (asked by slot 17 with the same call twice)
	virtual float vfunc17();	// slot 17: the wanted speed (+0x30 times the component's scale) raised to at least slot 16 and capped at sub_102d61b0(+0x8)
	virtual void vfunc18(int a);	// takes one argument (slot 19 hands it its first argument)
	virtual void vfunc19(int a, int b, int c);	// slot 19: slot 18(a), then sub_102e1560(a, scale, (speed of the velocity vector + scale) * the wanted speed * 0.5, b, c)
	virtual int vfunc20(int a, int b, int c);	// slot 20: the other move executor MoveNormalExecute dispatches to (same arguments as slot 19)

	char *m_pOuter;	// 0x0004, CAI_Component::m_pOuter (the owning NPC)
	int m_08;
	int m_0c;
	void *m_pSinkVtbl;	// 0x0010
	int m_14;
	int m_18;	// a float: the current yaw (see sub_102e0a80)
	int m_1c;	// a float: the largest yaw change
	int m_20;
	int m_24;
	char m_28;
	char m_29[3];
	int m_2c;	// a float: the time of the last yaw update (UpdateYaw)
	float m_30;	// the wanted speed
	float m_34;	// the ideal yaw
	int m_38;	// a float: the yaw speed (UpdateYaw converts it with _ftol)
	float m_3c;	// the velocity vector (x, y, z)
	float m_40;
	float m_44;
	int m_48;
	int m_4c;
	int m_50;
	int m_54;
	int m_58;
	int m_5c;
	int m_60;
	int m_64;
	int m_68;

	int sub_102e23a0(struct CAI_MoveRequest *pMove, float flInterval);	// "CAI_Motor::MoveNormalExecute"-named VPROF scope: runs slot 19 (slot 20 when the request's field at +0x30 is set) into a zeroed 0x38 byte buffer, and when the table 0x1060e654 has a value for the result tells the movement sink (slot 7) and clears the wanted speed; returns the table value
	void sub_102e09c0();	// the destructor body (vfunc0 0x102e0990 calls it): both vtables, empties the facing queue (+0x54, CUtlVector<CAI_InterestTarget>) twice, then the CAI_Component vftable
	int sub_102e2610();
	CAI_Motor *sub_102e0900(int outer);
	void sub_102e2840(int a, int b);	// forwards (a, b) to slot 93 of the owning NPC (stub 0x1000628a)
	void sub_102e0ba0(void *pMovementSink);	// "CAI_Motor::Init" (stub 0x10003a1c): takes the local navigator's movement sink (its secondary base at +0x10)
	int sub_102e0bd0(void *pOut, CBaseEntity *pTarget, int a, int b, int c, int d, int e);	// stub 0x100103ca: 7 stack arguments (the AutoMovement test of a move toward pTarget); 1 when the move is possible
	void sub_102e20b0(const float *pPosition, float flWeight);	// "AddFacingTarget"-like: queues a look target (position, priority) (stub 0x10007248)
	float sub_102e2750(const float *pPosition);	// CAI_Component helper (stub 0x10014f0b): the owning NPC's slot 515 (+0x80c) answer for pPosition, a yaw
	void sub_102e2020(const float *pPosition, int b);	// sets the ideal yaw (+0x34) to the yaw toward pPosition (sub_102e2750; flipped by 180 when the byte at +0x28 is set), limited by sub_102e0a80 unless the largest change is 180
	float sub_102e0a80(float flIdealYaw);	// the yaw the motor reaches when turning toward flIdealYaw: the difference to the yaw at +0x18 (wrapped into -180..180) is clamped to +-the float at +0x1c, added back and wrapped into 0..360
	float sub_102e1f90();	// "CAI_Motor::DeltaIdealYaw": 0 when the owner's yaw (angles slot 221, y * 182.04445f quantised to 16 bits and scaled back) equals the ideal yaw at +0x34, else AngleDiff(ideal yaw, current yaw) (sub_1013d580, stub 0x100097e6)
	void sub_102e1e20(int yawSpeed);	// "CAI_Motor::UpdateYaw": the owner's yaw approaches the ideal yaw (+0x34) by yawSpeed (the float at +0x38 for -1) * 10 per second since the last update (+0x2c)
	void sub_102e1cf0();	// stub 0x10011af9: the yaw speed (+0x38) from slot 0 of the movement sink at +0x10
	void sub_102e1c10(float flIdealYaw, float flYawSpeed);	// "CAI_Motor::SetIdealYawAndUpdate" (stub 0x10014b8c): sets the ideal yaw (flipped when the byte at +0x28 is set, limited by the turn rate unless the largest change is 180), the yaw speed (+0x38, -1 keeps it; -2 asks the movement sink) and updates the yaw
	float sub_102e12c0();	// CAI_Component helper (stub 0x10008bfc): a scale factor, returned in st(0)
	float sub_102e12e0();	// CAI_Component helper (stub 0x10006721): the owner's value at slot 249 (+0x3e4), returned in st(0)
	void sub_102e1560(int a, float flScale, float flValue, int b, int c);	// stub 0x10012116, called directly by slot 19 with five stack arguments
	void sub_102e2690(Vector *pVec);	// stub 0x10011a09
	void sub_102e26b0(Vector *pVec);	// stub 0x10003f7b, called directly by slot 7 (fills the facing direction)
	float sub_102e27d0(const char *a, float b);	// forwards (a, b, 0) to slot 345 (+0x564) of the owning NPC (m_pOuter) and returns its float
	void sub_10288670(float flIdealYaw);	// sets the ideal yaw (+0x34): flipped by 180 when the byte at +0x28 is set, limited by sub_102e0a80 unless the largest change (+0x1c) is 180

	// The datamap getter (BEGIN_DATADESC); its m_facingQueue field uses the vector save/restore ops below.
	static int *sub_102e0860();
	static ISaveRestoreOps *GetFacingQueueOps();
	void sub_10014b32();	// as in CDataObjectAccessSystem (transplant)
};

inline ISaveRestoreOps *CAI_Motor::GetFacingQueueOps()
{
	static CUtlVectorDataOps<CAI_InterestTarget,9> ops;
	return (ISaveRestoreOps *)&ops;
}
