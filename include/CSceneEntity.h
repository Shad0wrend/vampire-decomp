// class CSceneEntity (RTTI .?AVCSceneEntity@@), primary vtable 0x1044f05c, 269 slots.
// Derives from CLogicalEntity / CBaseEntity (all at offset +0x0); until those bases are
// known the slots they contribute are only declared here so that the slot numbers of the
// members we do define are right.
#pragma once

#define SCENE_V(n) virtual void vfunc##n();
#define SCENE_V10(p) SCENE_V(p##0) SCENE_V(p##1) SCENE_V(p##2) SCENE_V(p##3) SCENE_V(p##4) SCENE_V(p##5) SCENE_V(p##6) SCENE_V(p##7) SCENE_V(p##8) SCENE_V(p##9)

class CSceneEntity
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CSceneEntity *vfunc5(unsigned int flags);
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	SCENE_V10(1) SCENE_V10(2) SCENE_V10(3) SCENE_V10(4) SCENE_V10(5) SCENE_V10(6) SCENE_V10(7) SCENE_V10(8) SCENE_V10(9)
	SCENE_V10(10) SCENE_V10(11) SCENE_V10(12) SCENE_V10(13) SCENE_V10(14) SCENE_V10(15) SCENE_V10(16) SCENE_V10(17) SCENE_V10(18) SCENE_V10(19)
	SCENE_V10(20) SCENE_V10(21) SCENE_V10(22) SCENE_V10(23)
	SCENE_V(240) SCENE_V(241) SCENE_V(242)
	virtual void vfunc243();	// resets the automation state (called first by vfunc266)
	SCENE_V(244) SCENE_V(245) SCENE_V(246) SCENE_V(247)
	virtual void vfunc248(float a, int b, int c);
	virtual void vfunc249(float a, int b, int c);
	virtual void vfunc250(float a, int b, int c);
	SCENE_V(251) SCENE_V(252) SCENE_V(253) SCENE_V(254) SCENE_V(255) SCENE_V(256) SCENE_V(257) SCENE_V(258)
	virtual void vfunc259(int unused, void *pEvent, const char *pszTarget);	// slot 259: for the actor of the scene event (object at +0x94 of pEvent) and the entity named pszTarget: sets the actor's move type (4, 0), copies the target's slot 192 vector to +0x5db8 and its slot 219 vector to +0x5dc4 of the actor, runs the actor's sub_10280de0(0x39) and stamps curtime at +0x5cf0
	SCENE_V(260) SCENE_V(261) SCENE_V(262) SCENE_V(263) SCENE_V(264) SCENE_V(265)
	virtual void vfunc266(int unused, const char *pszArgs);	// parses "automate <Cancel|Resume> <seconds>" arguments into the automation fields
	SCENE_V(267) SCENE_V(268)
	void sub_1000b1ef();	// as in CPhysForce (transplant)
	void sub_10083a30(const char *pszScene);	// stub 0x100106f9, called directly by vfunc104 with the scene file name at +0x450 ("" when unset)
	void sub_10080cb0(int a);	// stub 0x1001163f, called directly by vfunc104 with the dword at +0x4bc

	char m_pad0004[0x4ac - 4];
	char m_bAutomateTimed;	// 0x4ac: set when a positive time was parsed
	char m_pad04ad[3];
	int m_nAutomateType;	// 0x4b0: 1 = Cancel, 2 = Resume
	float m_flAutomateTime;	// 0x4b4
	int m_nAutomateField;	// 0x4b8
};
