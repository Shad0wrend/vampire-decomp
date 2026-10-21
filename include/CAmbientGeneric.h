// CAmbientGeneric: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

class CAmbientGeneric
{
public:
	char pad0[0x17c];
	float m_flNextThink;	// 0x17c
	char pad180[0x204 - 0x180];
	unsigned int m_spawnflags;
	char pad208[0x454 - 0x208];
	int m_n0454;
	char pad0458[0x494 - 0x458];
	int m_n0494;
	char pad0498[0x4a4 - 0x498];
	int m_n04a4;
	char pad04a8[0x4bc - 0x4a8];
	char m_b04bc;
	char m_b04bd;
	char pad04be[2];
	const char *volatile m_pszSoundFile;	// 0x4c0 (volatile: the game's code reads it again for the null check)
	const char *m_pszSoundEntName;	// 0x4c4: name of the entity the sound is attached to
	unsigned int m_hSoundEnt;	// 0x4c8: entity handle of the entity the sound is attached to
	char pad04cc[0x4e0 - 0x4cc];
	int m_n04e0;

	unsigned int sub_101ac2f0();
	CAmbientGeneric *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
	void vfunc104();	// slot 104: precaches the sound file (when it is set, longer than one character and not a '!' sentence), then sub_101ad0f0, then flags bit 0 of the 0x4bc byte when the 0x4bd byte is set and spawnflag 0x10 is clear
	void sub_101ad0f0();	// ambient sound parameter setup (called through the stub at 0x1000da80)
	void vfunc180();	// slot 180: when the attached entity resolves, stops the sound on its edict (sub_101cdac0), then CBaseEntity::vfunc180
	void vfunc113();	// slot 113: finds the attached entity (cached as a handle by name, else the ambient itself), and while playing re-emits the sound on its edict (sub_101cdac0), then schedules the next think
	int sub_101ac670(int flags);	// flags | the dword at +0x4e0 (stub 0x1000d8e1)
};
