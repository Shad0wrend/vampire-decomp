// CCameraTrack: camera track entity (CCameraKeyFrame -> CLogicalEntity -> CBaseEntity). Declared flat; only the vtable head is modelled.
#pragma once

class CCameraTrack;

// Embedded member (three of them at +0x480, +0x498, +0x4f4); only its destructor body and one setup call are known.
class CCameraTrackMember
{
public:
	void sub_10015708();	// destructor body
	void sub_10010794(CCameraTrack *pOwner, CCameraTrack *pEntity, int a);	// stub 0x10010794, called by vfunc47 on the member at +0x480
};

class CCameraTrack
{
public:
	virtual void vfunc0();
	virtual unsigned int *vfunc1();	// "GetRefEHandle": pointer to the entity's handle
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CCameraTrack *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_1000cb8a();	// base (CCameraKeyFrame) destructor body

	void vfunc47();	// slot 47: stores the engine time (slot 119 of the global at 0x1070b22c) at +0x4d4, the entity's handle at +0x4d8 and 1 at +0x4dc, sets up the member at +0x480, then SetNextThink(engine time) and ThinkSet(0x10014d58)

	char m_pad0004[0x480 - 4];
	CCameraTrackMember m_member480[0x18];	// 0x0480 (the first of the embedded members)
	char m_pad0498[0x4d4 - 0x498];
	float m_flStartTime;	// 0x04d4
	unsigned int m_hHandle;	// 0x04d8
	char m_bStarted;	// 0x04dc
};
