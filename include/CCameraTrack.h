// CCameraTrack: camera track entity (CCameraKeyFrame -> CLogicalEntity -> CBaseEntity). Declared flat; only the vtable head is modelled.
#pragma once

#define CCT_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

// Embedded member (three of them at +0x480, +0x498, +0x4f4); only its destructor body is known.
class CCameraTrack;

class CCameraTrackMember
{
public:
	void sub_10015708();	// destructor body
	void sub_100cd660(CCameraTrack *pTrack, CCameraTrack *pTrack2, int a);	// called through the stub at 0x10010794 on the member at +0x480
};

class CCameraTrack
{
public:
	virtual void vfunc0();
	virtual unsigned int *vfunc1();	// the entity's handle (as CBaseEntity::vfunc1)
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CCameraTrack *vfunc5(unsigned int flags);	// scalar deleting destructor
	// slots 6..45
	virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	CCT_V10(sa1) CCT_V10(sa2) CCT_V10(sa3)
	virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45();
	virtual void vfunc46();	// starts the first of the track's timers: stores the engine time at +0x4bc, the entity handle at +0x4c0 and a started flag at +0x4c4, starts the member at +0x480 and schedules the think function at 0x10014d58 for the engine time

	void sub_1000cb8a();	// base (CCameraKeyFrame) destructor body
	int sub_100ac4e0(int func, int thinkTime, const char *szContext);	// CBaseEntity::ThinkSet (stub 0x10007fe5)
	void sub_100ac610(float time, const char *szContext);	// CBaseEntity::SetNextThink (stub 0x1000326f)
};
