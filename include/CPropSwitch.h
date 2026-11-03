// CPropSwitch: declared by pcdecomp transplant for 0x1020d6f0 from CBaseDoor (0x100efab0);
// only what matched code needs, as plain members.
#pragma once

class CPropSwitch : public CBaseEntity
{
public:
	virtual void vfunc113();	// slot 113 (Activate): after the base, finds the entity named by the string at +0x730 and, when it is a "prop_switch", keeps its handle at +0x740 (-1 when it is not a CPropSwitch); looks up the sequences "activate", "deactivate", "idle_on", "idle_off" into +0x7a8..+0x7b4 and starts the idle one (on when the byte at +0x7a5 is set)

	virtual void vfunc103();	// slot 103 "CPropSwitch::Spawn": the CBaseProp spawn, effects 0xa0 (+0x19c), and unless spawn flag 0x8000 is set a bounding box solid (SOLID_BBOX, inlined scope trace "CBaseEntity::SetSolid") sized from the model header (+0xb4 / +0xc0), collision group 1, partition handle and sub_100b3b00; then the starts-on byte (+0x7a4, flag 0x4000) and the state (+0x670 / +0x7a5, flag 0x2000)
	void vfunc104();
	virtual void vfunc130(int a);	// slot 130: stores the flag at +0x7a5 when the state at +0x73c is 2 (set) or 1 (clear), then CBaseAnimating::vfunc130 (stub 0x10009e6c) with the argument
	void sub_1018e0d0();
	CPropSwitch *sub_1020d5f0();	// as in CKeepUpright (transplant)
	float sub_1020df00(int sequence);	// starts the animation sequence (negative: sequence 0): resets the sequence info, cycle 0, animtime = curtime and clears flag 0x40000 for a valid one, then forces a transmit, sets the think function 0x100080b7, the next think and returns the sequence's duration
	void sub_1020dd70();	// think function: while the switch is active (byte +0x65c), the sequence at +0x6f0 reaching the "on" sequence (+0x7a8) or "off" sequence (+0x7ac) stores the state at +0x670, fires the matching output (+0x744 / +0x75c) with the owner behind the handle at +0x10c and starts the next sequence (+0x7b0 / +0x7b4); otherwise stops thinking (flag 0x40000, ThinkSet(0)) unless byte +0x65d; when inactive or +0x65d is set, runs slot 250 and schedules the next think 10.0 seconds ahead
	void sub_10090950();	// CBaseAnimating::ResetSequenceInfo (stub 0x100117b1)
	float sub_10091080(int sequence);	// CBaseAnimating::SequenceDuration (stub 0x10009813)
	void sub_1020f330(inputdata_t *pInput);	// input handler: the integer input (0 for another type) minus one selects the state at +0x630; on a change zeroes the velocity, sets +0x3fc = -1.0f, moves the entity to (x at +0x800, y at +0x804, z from the table at +0x608[state]) and runs sub_100b3b00
	void sub_100b2e30(const float *pVec);	// stub 0x10013728
	int sub_1008f7b0(const char *pszName);	// CBaseAnimating::LookupSequence (stub 0x1000e057), called directly
	void sub_1018df70();	// CBaseProp::vfunc103 (stub 0x10011793), called directly
	void *sub_100952d0(int a);	// CBaseAnimating::GetModelPtr-like (stub 0x10013d8b), called directly
	virtual void vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value);	// slot 173 (Use): fires the output at +0x78c when the byte +0x7a4 is set, else the one at +0x774, then switches the state (sub_1020dce0) and the linked switch behind the handle at +0x740
	char sub_1020e020();	// the byte at +0x7a4 (stub 0x1000a2f9), called directly
	char sub_1020e040();	// the byte at +0x7a5 (stub 0x1000b933), called directly
	virtual void vfunc71();	// slot 71 "GetVSoundTable": looks the sound set named by the string at +0xc0 up in the sound table (0x1073dc00) into +0xb4, clears +0xbc and caches the ids of the sounds "on" / "off" in 0x1074f13c / 0x1074f140
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc117();
    void *vfunc5(unsigned int flags);	// as in CTriggerElectricBugaloo (transplant)
    virtual int vfunc34(int a);	// slot 34: true when slot 35(a) is non-zero
};
