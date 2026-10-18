// CEnvLaser: laser beam entity (CBeam -> CBaseEntity). Only the constructor chain is modelled: CBeamHead stands for
// the CBeam/CBaseEntity part whose constructor (0x100bac50) the CEnvLaser constructor calls before storing its vtable.
#pragma once

class CBeamHead
{
public:
	CBeamHead();	// 0x100bac50

	virtual void vfunc0();
};

class CEnvLaser : public CBeamHead
{
public:
	CEnvLaser();	// 0x10101480

	virtual void vfunc0();
};
