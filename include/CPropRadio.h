// CPropRadio: usable radio prop. Only what decompiled code needs (base chain not modelled: CBaseEntity at +0).
#pragma once

#include "CBaseEntity.h"

struct inputdata_t;

class CPropRadio : public CBaseEntity
{
public:
	// Slot 35, called directly so far; declared as a plain member.
	int vfunc35(int a);	// "CPropRadio::GetUseIcon": returns the field at +0x730
	CPropRadio *vfunc5(unsigned int flags);	// scalar deleting destructor, declared as a plain member: purges the record vector at +0x738 (twice, as member destructor), the CBaseAnimating destructor body, then deletes when bit 0 of flags is set
	CPropRadio *sub_1022bc30();	// as in CKeepUpright (transplant)
	void sub_1022c920(inputdata_t *pInput);	// "CPropRadio::InputDeactivate": scope trace (entity name), when the byte at +0x734 is set calls sub_1022c750(0)
	void sub_1022c750(int a);	// called through the stub at 0x1000331e
	void sub_1022c860(inputdata_t *pInput);	// "CPropRadio::InputActivate": scope trace (entity name), when the byte at +0x734 is clear calls sub_1022c750(1)
	void vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int value);	// "CPropRadio::Use": scope trace (entity name), toggles: sub_1022c750(0) when the byte at +0x734 is set, else sub_1022c750(1)
	void vfunc71();	// "CPropRadio::PrecacheSoundTable": scope trace (entity name), clears +0xbc, looks up the sound set of the name at +0xc0 in the table at 0x1073dc00 (stored at +0xb4) and caches the table indices of the entries named "on" / "off" in g_10750fec / g_10750ff0 (-1 when absent)
	virtual void vfunc104();
	void vfunc103();	// slot 104 "CPropRadio::Precache": scope trace (entity name), CBaseProp::vfunc104, slot 71, loads the radio data and picks the first show whose script (python string, 0x100 byte records) returns non-zero; precaches that show's sound (record + 0x80); warns when the data cannot be loaded or no show is found
	virtual int vfunc124();	// slot 124 "CPropRadio::DrawDebugTextOverlays": scope trace (entity name), base lines, then the current show's record text (or "COULD NOT FIND VALID STORY") as overlay lines
	void sub_1018e0d0();	// CBaseProp::vfunc104 (stub 0x1000d99f), called directly
	int sub_10096100();	// CBaseAnimating::vfunc124 (stub 0x10007d97), called directly
	bool sub_1022c9e0();	// "CPropRadio::LoadRadioData" (stub 0x1000c8f1): reads the radio data file into the record vector at +0x738; true when it holds a record

	char m_pad03e0[0x738 - 0x3e0];
	char *m_pRadioData;	// 0x738: records of 0x100 bytes (script string, sound name at +0x80)
	int m_nRadioAlloc;	// 0x73c
	int m_pad0740;
	int m_nRadioCount;	// 0x744
	int m_pad0748;
	int m_nCurrentShow;	// 0x74c: index of the selected record, -1 when none
	int m_nVolume750;	// 0x750: the volume handed to EmitAmbientSound (engine slot 49) by Activate (bits of a float: pushed as a dword)
	int m_nSoundLevelArg754;	// 0x754: argument of sub_10228350 (cdecl, stub 0x10004db3), whose result is the sound level argument of that call
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc117();
};
