// IPhysicsSurfaceProps: vphysics' surface property table behind the engine pointer at 0x10723944 (g_10723944). Slot N is at
// +N*4 of its vtable. Only the slot the decompiled code calls is typed here; the others are placeholders that keep the
// slot numbers right. No extern is declared on purpose: matched sources still declare g_10723944 with views of their own.
#pragma once

struct surfacedata_t_view	// the record slot 5 returns (Source's surfacedata_t); only the game material character is known
{
	char m_pad0000[0x70];
	unsigned char m_nMaterial70;	// 0x70: the material character ('F' flesh, 'A' antlion, 'M' metal, 'W' wood, 'Y' glass, 'C' concrete ...), read by 0x101cfef0
};

class IPhysicsSurfaceProps
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual surfacedata_t_view *vfunc5(int surfaceDataIndex);	// slot 5 (+0x14) GetSurfaceData: 0x101cfef0 passes the short at +0x40 of its info record
};
