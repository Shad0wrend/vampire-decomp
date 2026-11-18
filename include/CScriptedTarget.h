// CScriptedTarget: scripted target entity. Only what matched code needs (base chain not modelled: CBaseEntity at +0).
#pragma once

#include "CBaseEntity.h"
#include "COutputEvent.h"

class CScriptedTarget : public CBaseEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);	// slot 5: scalar deleting destructor (the three outputs at +0x5f9c / +0x5f84 / +0x5f6c, then the base)
	virtual void vfunc103();	// slot 103 (Spawn): looks the global at 0x10938054 up once, SetSolid(0) (inlined scope trace), sub_100b3b00(), remembers the origin (slot 217) at +0x5f44, runs sub_1034d5b0() when the field at +0x5f50 is not set, then AddFlag2(0x10)
	void sub_1034d5b0();
	CScriptedTarget *sub_1034d800();
	unsigned char sub_1034d410();	// CScriptedTarget::vfunc117 body (CBaseEntity::vfunc117 & 0xfd)	// called through the stub at 0x10012be3

	virtual void vfunc123();	// slot 123 "DrawDebugGeometryOverlays": with the box / pivot overlay bits (0x24) of the debug flags (+0x224) boxes of the target (a red one around the remembered origin and a green one around the user when it is not yet in use; a plain one around the origin otherwise), lines to the next target (slot 172) and to the user, then CBaseEntity::vfunc123

	virtual int vfunc124();	// slot 124 \"DrawDebugTextOverlays\": the base overlay lines, then (text overlay bit set) the lines \"State: On / Off\", \"Next: <name of slot 172>\" and \"User: <name>\" (the user handle at +0x5ce4); returns the next free line

	char m_pad03e0[0x5ce4 - 0x3e0];
	EHANDLE m_hUser5ce4;	// 0x5ce4
	char m_pad5ce8[0x5f44 - 0x5ce8];
	float m_vecOrigin5f44[3];	// 0x5f44
	int m_n5f50;	// 0x5f50
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc117();
    int sub_1000d279(int a);	// as in CNPC_VMingXiaoTentacle (transplant)
    int vfunc126(int a);	// as in CNPC_VMingXiaoTentacle (transplant)
    int vfunc127(int a);	// as in CNPC_VMingXiaoTentacle (transplant)
    int sub_1000b163(int a);	// as in CNPC_VMingXiaoTentacle (transplant)
	string_t m_iszEntity;	// 0x5f54
	float m_flRadius;	// 0x5f58
	int m_nMoveSpeed;	// 0x5f5c
	float m_flPauseDuration;	// 0x5f60
	float m_flPauseDoneTime;	// 0x5f64
	float m_flEffectDuration;	// 0x5f68
	COutputEvent m_out5f6c;
	COutputEvent m_out5f84;
	char m_pad5f9c[0x5fb4 - 0x5f9c];
};
