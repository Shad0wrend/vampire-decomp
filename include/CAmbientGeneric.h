// CAmbientGeneric: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

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

// The entity base chain (CPointEntity: CBaseEntity), modelled as in CPointEntityBase / CConstraintAnchorBase: its constructor
// (CBaseEntity::CBaseEntity body, stub 0x100090fc, arg = bAddAsDefault) is out of line and runs before the vtable store.
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

class CAmbientGeneric : public CAmbientGenericBase
{
public:
	CAmbientGeneric() : CAmbientGenericBase(0) {}	// 0x101ac230: base constructor, -1 at +0x4c8 / +0x4d8, vtable 0x1047a58c, bytes +0x4dc..+0x4df and dword +0x4e0 = 0
	char pad0[0x17c - 4];
	float m_flNextThink;	// 0x17c
	char pad180[0x1f0 - 0x180];
	int m_pfnUse1f0;	// 0x1f0: the use function (a stub address)
	char pad1f4[0x204 - 0x1f4];
	unsigned int m_spawnflags;
	char pad208[0x210 - 0x208];
	int m_iHealth;	// 0x210
	char pad214[0x26c - 0x214];
	const char *m_name26c;	// 0x26c: the entity name
	char pad270[0x450 - 0x270];
	float m_flVolume0450;	// 0x450
	int m_n0454;
	dynpitchvol_t m_dpv;	// 0x458: the pitch / volume modulation state (0x64 bytes)
	char m_b04bc;
	char m_b04bd;
	char pad04be[2];
	const char *volatile m_pszSoundFile;	// 0x4c0 (volatile: the game's code reads it again for the null check)
	const char *m_pszSoundEntName;	// 0x4c4: name of the entity the sound is attached to
	unsigned int m_hSoundEnt;	// 0x4c8: entity handle of the entity the sound is attached to
	char pad04cc[0x4dc - 0x4cc];
	char m_b04dc;
	char m_b04dd;
	char m_b04de;
	char m_b04df;
	int m_n04e0;

	unsigned int sub_101ac2f0();
	CAmbientGeneric *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
	void vfunc103();	// slot 103 "CAmbientGeneric::Spawn": the sound index from the volume and a flag (sub_101ac570); with a sound file of at least one character: SetSolid(0) (inlined scope trace), move type (0, 0), think function sub_1000969c, no next think, use function 0x100131e2, the 0x4bc / 0x4bd flags, the spawn flag bits into +0x4e0 from the bytes 0x4dc..0x4df, no attached entity, then slot 104; else warns "EMPTY AMBIENT AT" and removes the entity
	void vfunc104();	// slot 104: precaches the sound file (when it is set, longer than one character and not a '!' sentence), then sub_101ad0f0, then flags bit 0 of the 0x4bc byte when the 0x4bd byte is set and spawnflag 0x10 is clear
	void sub_101ad0f0();	// ambient sound parameter setup (called through the stub at 0x1000da80)
	void vfunc180();	// slot 180: when the attached entity resolves, stops the sound on its edict (sub_101cdac0), then CBaseEntity::vfunc180
	void vfunc113();	// slot 113: finds the attached entity (cached as a handle by name, else the ambient itself), and while playing re-emits the sound on its edict (sub_101cdac0), then schedules the next think
	int sub_101ac670(int flags);	// flags | the dword at +0x4e0 (stub 0x1000d8e1)
public:
	datamap_t * vfunc82();
	bool vfunc136();
};
