// CSoundScheme: declared by pcdecomp transplant for 0x1022a1d0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CSoundScheme : public CBaseEntity
{
public:
	CSoundScheme *vfunc5(unsigned int flags);
	void sub_1000bccb();
	void sub_1000cb8a();
	void sub_1022a200();	// destructor body (stub 0x1000bccb): resets the vtable, purges the vectors at +0x580 and +0x594
	CSoundScheme *sub_1022a0f0();	// as in CKeepUpright (transplant)
};
