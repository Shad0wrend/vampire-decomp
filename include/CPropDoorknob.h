// CPropDoorknob: declared by pcdecomp transplant for 0x10225950 from CMomentaryRotButton (0x100cb4f0);
// only what matched code needs, as plain members.
#pragma once

class CPropDoorknob : public CBaseEntity
{
public:
	CPropDoorknob *vfunc5(unsigned int flags);
	void vfunc273();	// slot 273 (declared as a plain member): plays the handle_locked / handle_unlocked sequence by sub_10224100, restarting the animation when the sequence (+0x6f0) changes, clearing it when there is none
	char sub_10224100();
	int sub_100056aa();	// CItemContainerLock::vfunc117 (stub 0x100056aa), called directly
	unsigned char sub_10225930();	// CPropDoorknob::vfunc117 body (CItemContainerLock::vfunc117 & 0xfd)	// stub 0x10001d2f: whether the doorknob is locked
	CPropDoorknob();	// 0x102258a0 (stub 0x1000e91c): the constructor
	CPropDoorknob *sub_102258a0();	// as in CKeepUpright (transplant)
	virtual void vfunc103();	// slot 103 "CPropDoorknob::Spawn": CBaseVampireSkillEntity::vfunc103, +0x19c = 0xa0, inlined SetSolid(0) with scope trace, then CBaseAnimating::sub_10093b10 and the state at +0x780 (1 with the object at +0x77c, else 3)
public:
    virtual int vfunc117();
    virtual void vfunc134();	// slot 134 (the first slot past CBaseEntity's declared ones): makes sure the model is set up (slot 250(0) while the byte at +0x65c is clear), then thinks again in 0.1 seconds
public:
	virtual void vfunc31(int);	// slot 31: 0x1008b530 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual bool vfunc32(int);	// slot 32: 0x10224ae0 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual int vfunc33();	// slot 33: 0x10224cc0 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual int vfunc34(int);	// slot 34: 0x10224ed0 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual int vfunc35(int);	// slot 35: 0x10224d40 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual int vfunc36();	// slot 36: 0x10224ca0 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual float vfunc37();	// slot 37: 0x10224eb0 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual void vfunc39(CBaseEntity *);	// slot 39: 0x10225070 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual void vfunc40(int);	// slot 40: 0x10225120 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual void vfunc43(int);	// slot 43: 0x10225100 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual bool vfunc74(int);	// slot 74: 0x1018fe50 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual int vfunc79();	// slot 79: 0x10097ae0 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual int vfunc80();	// slot 80: 0x1008a9f0 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual int vfunc81();	// slot 81: 0x1008aa10 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual datamap_t * vfunc82();	// slot 82: 0x10224070 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual bool vfunc99(int, int, int);	// slot 99: 0x100956e0 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual void vfunc104();	// slot 104: 0x1018fb50 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual void vfunc105(const char *);	// slot 105: 0x10095030 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual bool vfunc108(const char *, float, float, float);	// slot 108: 0x1004fbb0 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual bool vfunc109(const char *, float);	// slot 109: 0x1004fbf0 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual bool vfunc110(const char *, const char *);	// slot 110: 0x101c1480 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual void vfunc113();	// slot 113: 0x10225af0 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual int vfunc124();	// slot 124: 0x1018fec0 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual void vfunc130(int);	// slot 130: 0x1020ac70 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
	virtual void vfunc133();	// slot 133: 0x101c1720 in the game's CPropDoorknob vtable (link audit, CPropDoorknobElectronic)
};
