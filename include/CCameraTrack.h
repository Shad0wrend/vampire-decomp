// CCameraTrack: camera track entity (CCameraKeyFrame -> CLogicalEntity -> CBaseEntity). Declared flat; only the vtable head is modelled.
#pragma once

// Embedded member (three of them at +0x480, +0x498, +0x4f4); only its destructor body is known.
class CCameraTrackMember
{
public:
	void sub_10015708();	// destructor body
};

class CCameraTrack
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CCameraTrack *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_1000cb8a();	// base (CCameraKeyFrame) destructor body
};
