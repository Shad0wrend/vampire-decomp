// CPropRadio: usable radio prop. Only what decompiled code needs (base chain not modelled: CBaseEntity at +0).
#pragma once

#include "CBaseEntity.h"

struct inputdata_t;

class CPropRadio : public CBaseEntity
{
public:
	// Slot 35, called directly so far; declared as a plain member.
	int vfunc35(int a);	// "CPropRadio::GetUseIcon": returns the field at +0x730
	CPropRadio *sub_1022bc30();	// as in CKeepUpright (transplant)
	void sub_1022c920(inputdata_t *pInput);	// "CPropRadio::InputDeactivate": scope trace (entity name), when the byte at +0x734 is set calls sub_1022c750(0)
	void sub_1022c750(int a);	// called through the stub at 0x1000331e
	void sub_1022c860(inputdata_t *pInput);	// "CPropRadio::InputActivate": scope trace (entity name), when the byte at +0x734 is clear calls sub_1022c750(1)
	void vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int value);	// "CPropRadio::Use": scope trace (entity name), toggles: sub_1022c750(0) when the byte at +0x734 is set, else sub_1022c750(1)
	void vfunc71();	// "CPropRadio::PrecacheSoundTable": scope trace (entity name), clears +0xbc, looks up the sound set of the name at +0xc0 in the table at 0x1073dc00 (stored at +0xb4) and caches the table indices of the entries named "on" / "off" in g_10750fec / g_10750ff0 (-1 when absent)
};
