// CAI_Motor (RTTI .?AVCAI_Motor@@): bases CAI_Component (+0x0) and CAI_ProxyMovementSink (+0x10)
// are not modelled; primary vtable 0x1049d854 has 21 slots.
#pragma once

#include "CUtlVectorDataOps.h"

struct CAI_InterestTarget;
struct ISaveRestoreOps;
class CBaseEntity;

class CAI_Motor
{
public:
	virtual CAI_Motor *vfunc0(unsigned int flags);
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual float vfunc11(int a);
	virtual void vfunc12();
	virtual void vfunc13();
	virtual void vfunc14(int a, int b, int c);	// forwards its arguments to the subobject at +0x54 (stub 0x1000b8ca)
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc18();
	virtual void vfunc19();
	virtual void vfunc20();

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
	int m_2c;
	int m_30;
	int m_34;
	int m_38;
	int m_3c;
	int m_40;
	int m_44;
	int m_48;
	int m_4c;
	int m_50;
	int m_54;
	int m_58;
	int m_5c;
	int m_60;
	int m_64;
	int m_68;

	int sub_102e2610();
	CAI_Motor *sub_102e0900(int outer);
	void sub_102e2840(int a, int b);	// forwards (a, b) to slot 93 of the owning NPC (stub 0x1000628a)
	void sub_102e0ba0(void *pMovementSink);	// "CAI_Motor::Init" (stub 0x10003a1c): takes the local navigator's movement sink (its secondary base at +0x10)
	int sub_102e0bd0(void *pOut, CBaseEntity *pTarget, int a, int b, int c, int d, int e);	// stub 0x100103ca: 7 stack arguments (the AutoMovement test of a move toward pTarget); 1 when the move is possible
	void sub_102e20b0(const float *pPosition, float flWeight);	// "AddFacingTarget"-like: queues a look target (position, priority) (stub 0x10007248)
	float sub_102e0a80(float flIdealYaw);	// the yaw the motor reaches when turning toward flIdealYaw: the difference to the yaw at +0x18 (wrapped into -180..180) is clamped to +-the float at +0x1c, added back and wrapped into 0..360

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
