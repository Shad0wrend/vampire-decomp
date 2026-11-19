// CAmbientGeneric (RTTI CAmbientGeneric : CPointEntity, vtable 0x1047a58c): ambient_generic.
#pragma once
#include "string_t.h"
#include "CPointEntity.h"

struct datamap_t;

struct dynpitchvol_t
{
	int preset;
	int pitchrun, pitchstart, spinup, spindown;
	int volrun, volstart, fadein, fadeout;
	int lfotype, lforate, lfomodpitch, lfomodvol;
	int cspinup, cspincount;
	int pitch, spinupsav, spindownsav, pitchfrac;
	int vol, fadeinsav, fadeoutsav, volfrac, lfofrac, lfomult;
};

class CAmbientGeneric;

// The name the entity base constructor (CBaseEntity::CBaseEntity body 0x1009d980, stub 0x100090fc, arg = bAddAsDefault)
// is matched under: a view, no class's base.
class CAmbientGenericBase
{
public:
	CAmbientGenericBase(char bAddAsDefault);
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CAmbientGeneric *vfunc5(unsigned int flags);	// scalar deleting destructor (0x100141ff); VC6 has no covariant returns, so the base declares the same type
};

class CAmbientGeneric : public CPointEntity
{
public:
	CAmbientGeneric *sub_101ac230();	// constructor as a plain member (0x101ac230)
	CAmbientGeneric();	// 0x101ac230 (called by the ambient_generic factory 0x101ac130): base constructor, -1 at +0x4c8 / +0x4d8, vtable 0x1047a58c, bytes +0x4dc..+0x4df and dword +0x4e0 = 0
	float m_flVolume0450;	// 0x450
	int m_n0454;
	dynpitchvol_t m_dpv;	// 0x458: the pitch / volume modulation state (0x64 bytes)
	char m_b04bc;
	char m_b04bd;
	char pad04be[2];
	const char *volatile m_pszSoundFile;	// 0x4c0 (volatile: the game's code reads it again for the null check)
	const char *m_pszSoundEntName;	// 0x4c4: name of the entity the sound is attached to
	EHANDLE m_hSoundEnt;	// 0x4c8: entity handle of the entity the sound is attached to (-1 from its constructor)
	int m_nSoundEvent;	// 0x04cc
	int m_nSoundEventLevel;	// 0x04d0
	string_t m_iszSoundEventOwner;	// 0x04d4
	EHANDLE m_hAttached4d8;	// 0x4d8: an entity handle (-1 from its constructor, which runs before the vtable store)
	char m_b04dc;
	char m_b04dd;
	char m_b04de;
	char m_b04df;
	int m_n04e0;

	unsigned int sub_101ac2f0();
	virtual CBaseEntity *vfunc5(unsigned int flags);	// scalar deleting destructor
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
	bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 KeyValue
	void vfunc103();	// slot 103 "CAmbientGeneric::Spawn": the sound index from the volume and a flag (sub_101ac570); with a sound file of at least one character: SetSolid(0) (inlined scope trace), move type (0, 0), think function sub_1000969c, no next think, use function 0x100131e2, the 0x4bc / 0x4bd flags, the spawn flag bits into +0x4e0 from the bytes 0x4dc..0x4df, no attached entity, then slot 104; else warns "EMPTY AMBIENT AT" and removes the entity
	void vfunc104();	// slot 104: precaches the sound file (when it is set, longer than one character and not a '!' sentence), then sub_101ad0f0, then flags bit 0 of the 0x4bc byte when the 0x4bd byte is set and spawnflag 0x10 is clear
	void sub_101ad470(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value);	// "CAmbientGeneric::ToggleUse" (the use function: USE_OFF 0 / ON 1 / SET 2 / TOGGLE 3)
	int sub_101ad9a0();	// stub 0x100057fe: true when the NPC sound event parameters are valid
	const char *sub_100ab4f0();	// stub 0x1000b5cd: GetDebugName-like (used in the Warning texts)
	void sub_101ad0f0();	// ambient sound parameter setup (called through the stub at 0x1000da80)
	void vfunc180();	// slot 180: when the attached entity resolves, stops the sound on its edict (sub_101cdac0), then CBaseEntity::vfunc180
	void vfunc113();	// slot 113: finds the attached entity (cached as a handle by name, else the ambient itself), and while playing re-emits the sound on its edict (sub_101cdac0), then schedules the next think
	void sub_101acb70();
	int sub_101ac670(int flags);	// flags | the dword at +0x4e0 (stub 0x1000d8e1)
public:
	datamap_t * vfunc82();
	bool vfunc136();
};
