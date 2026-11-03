// CNPC_VPlayerController: declared by pcdecomp transplant for 0x10376f50 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VPlayerController
{
public:
	CNPC_VPlayerController *vfunc5(unsigned int flags);
	void sub_100123af();
	void vfunc245(int a, int b, int c, int d, int e);	// override: forwards to the base, then to slot 245 of the object at +0xa8 of the owner (slot 97), warning when there is none
	void vfunc246();	// override: CBaseAnimating::vfunc246 (stub 0x1000ede0), then slot 246 of the player object at +0xa8 of the owner (slot 97), warning when there is none
	void sub_1000cefa(int a, int b, int c, int d, int e);	// CBaseAnimating::vfunc245 (jump stub)
	int vfunc404(void *pEnt);	// slot 404 (classification of pEnt): 0 for null, 3 for the entity of the handle at +0x60ac, 1 when pEnt's object at +0x9c has its byte at +0x1480 set and sub_100b5190 is clear there, else 4
	void vfunc300(struct CPlayerCtrlEnt *pEnt, int b, int c);	// slot 300 "Event_TookLife": when the owner (slot 97) has the player object at +0xa8, hands it the message "CNPC_VPlayerController::Event_TookLife %s" (the name of pEnt or UNKNOWN) with 4 and -1.0f
	void vfunc420();	// slot 420 (reset): base slot 420 (sub_1000c531), then the same counter/limit reset as CNPC_VNewscaster::vfunc420 (scrambled sub_10009408(0) at +0x6364), then slot 416(1), slot 97() -> +0x60ac and clearing of the flags
	void vfunc103();	// slot 103 (Spawn): the vampire base, relationship (1, 3, 0), the byte at +0x63f0 set, the name \"playercontroller\" and flag2 0x10
	void sub_103c4ef0();	// CNPC_VVampire::vfunc103 (stub 0x10014876), called directly
	void sub_10332aa0(int classId, int disposition, int priority);	// \"CBaseCombatCharacter::AddClassRelationship\" (stub 0x10013cf5), called directly
	void sub_100a0420(const char *name);	// CBaseEntity::SetName (stub 0x10003229), called directly
	void sub_100b3840(unsigned int flags);	// CBaseEntity::AddFlag2 (stub 0x100027bb), called directly
	void sub_1000c531();	// CAI_BaseNPCTroika::vfunc420, called directly
	void sub_103a4580();	// the same function as vfunc420 (stub 0x100155aa), as the subclasses call it directly
	void vfunc431();	// slot 431: CAI_BaseNPCTroika::vfunc431, then vtable slot 614
public:
	bool vfunc72(int);
	int vfunc138();
	bool vfunc362(int);
	bool vfunc363(int);
	bool vfunc364(int);
	bool vfunc365(int);
	int vfunc432(int);
	void vfunc488();
	void vfunc489();
	void vfunc490();
	void vfunc491();
	void vfunc492();
	void vfunc493();
	void vfunc494();
	void vfunc495();
	void vfunc496();
	void vfunc497();
};
