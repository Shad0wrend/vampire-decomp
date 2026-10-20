// CAmbientGeneric: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

class CAmbientGeneric
{
public:
	char pad0[0x204];
	unsigned int m_spawnflags;
	char pad208[0x4bc - 0x208];
	char m_b04bc;
	char m_b04bd;
	char pad04be[2];
	const char *m_pszSoundFile;	// 0x4c0

	unsigned int sub_101ac2f0();
	CAmbientGeneric *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
	void vfunc104();	// slot 104: precaches the sound file (when it is set, longer than one character and not a '!' sentence), then sub_101ad0f0, then flags bit 0 of the 0x4bc byte when the 0x4bd byte is set and spawnflag 0x10 is clear
	void sub_101ad0f0();	// ambient sound parameter setup (called through the stub at 0x1000da80)
};
