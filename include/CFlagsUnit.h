// CFlagsUnit: the provisional view of the collision property (CBaseEntity +0x270) that the matched
// CCollisionProperty::SetSolidFlags (0x100dc580) was saved under. Declaring it here lets sources call the exact
// symbol ?sub_100dc580@CFlagsUnit@@QAEXG@Z instead of the CCollisionProperty view.
#pragma once

class CFlagsUnit
{
public:
	char m_pad0000[0x3c];
	void *m_pOuter;			// 0x3c: the CBaseEntity that owns the collision property
	int m_nSolidType;		// 0x40
	unsigned short m_usFlags;	// 0x44: the solid flags

	void sub_100dc580(unsigned short flags);	// 0x100dc580: SetSolidFlags
};
