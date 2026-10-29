// CSteamJet: steam jet entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CSteamJet
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CSteamJet *vfunc5(unsigned int flags);	// scalar deleting destructor

	char m_pad0004[0x11c - 4];
	const char *m_pszClassname11c;	// +0x11c: classname (null when unset)
	char m_pad0120[0x468 - 0x120];
	int m_nFlag468;	// +0x468
	bool m_bIsSteamJet46c;	// +0x46c: set when the classname is env_steamjet
	bool m_bFlag46d;	// +0x46d

	void vfunc103();	// slot 103 (plain member here): marks the jet when classname is env_steamjet

	void sub_1000cb8a();	// destructor body
};
