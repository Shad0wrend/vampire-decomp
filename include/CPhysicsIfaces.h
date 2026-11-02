// The vphysics-side interfaces that the world / model physics parser (0x10158600, called by 0x1002e140) talks to.
// Vtable slots only (N*4 from the object's vtable); names follow the 2004 SDK where the slot clearly is one.
// Globals (declare in the source as `extern T *g_XXXXXXXX;`):
//   g_10723940  CPhysEnvIface *            the physics environment (physenv)
//   g_10723944  CPhysSurfacePropsIface *   the surface properties (physprops)
//   g_1072393c  CPhysCollideIface *        the collision interface / key parser factory (physcollision)
// Other placeholder globals seen with them: g_1070d1b0 (the origin vec3_origin) and g_1070d9d0 (the angles vec3_angle),
// g_107238e0 (the default object parameters, 0x30 bytes, copied by value into the stack params) and g_107238e4 (a game
// flags / material value for the object).
#pragma once

class CPhysObjectIface
{
public:
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4();
	virtual void v5();
	virtual void v6();
	virtual void v7();
	virtual void v8();
	virtual void SetGameFlags(unsigned int flags);	// slot 9 (+0x24)
	virtual unsigned int GetGameFlags();	// slot 10 (+0x28)
	virtual void v11();
	// slot 66 (+0x108) is called with the global at 0x107238e4; declare when a function needs it
};

class CPhysEnvIface
{
public:
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4();
	virtual void v5();
	virtual void v6();
	virtual void v7();
	// slot 8 (+0x20): CreatePolyObject(pCollide, materialIndex, const float *origin, const float *angles, const void *pParams)
	virtual CPhysObjectIface *CreatePolyObject(void *pCollide, int materialIndex, const float *pOrigin, const float *pAngles, const void *pParams);
	virtual void v9();
	// slot 10 (+0x28): (CPhysObjectIface *, buffer) - a per-object setup called after the flags are changed
	virtual void vfunc10(CPhysObjectIface *pObject, void *pBuffer);
};

class CPhysSurfacePropsIface
{
public:
	virtual void v0();
	virtual void v1();
	virtual void v2();
	// slot 3 (+0xc): GetSurfaceIndex(name), e.g. "default", "water"
	virtual int GetSurfaceIndex(const char *pszName);
	virtual void v4();
	virtual void v5();
	virtual void v6();
	virtual void v7();
	// slot 8 (+0x20): (char *buffer, int size) - fills the name of the material table entry
	virtual void vfunc8(char *pBuffer, int nSize);
};

class CPhysKeyParserIface	// the block parser the factory creates over the model's collision text
{
public:
	virtual void v0();
	virtual const char *GetCurrentBlockName();	// slot 1 (+0x4)
	virtual bool Done();	// slot 2 (+0x8): true at the end of the text
	virtual void ParseSolid(void *pSolid, const void *pDefaults);	// slot 3 (+0xc): (0x30-byte solid record out, defaults)
	virtual void ParseFluid(void *pFluid, int nFlags);	// slot 4 (+0x10): (fluid record, flags)
	virtual void v5();
	virtual void ParseMaterialTable(void *pBuffer, int nFlags);	// slot 6 (+0x18)
	virtual void v7();
	virtual void v8();
	virtual void SkipBlock();	// slot 9 (+0x24): skips an unknown block
};

class CPhysCollideIface
{
public:
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4();
	virtual void v5();
	virtual void v6();
	virtual void v7();
	virtual void v8();
	virtual void v9();
	virtual void v10();
	virtual void v11();
	virtual void v12();
	virtual void v13();
	virtual void v14();
	virtual void v15();
	virtual void v16();
	virtual void v17();
	virtual void v18();
	virtual void v19();
	virtual void v20();
	virtual void v21();
	virtual void v22();
	virtual void v23();
	virtual void v24();
	virtual void v25();
	virtual CPhysKeyParserIface *CreateKeyParser(const char *pszText);	// slot 26 (+0x68)
	virtual void DestroyKeyParser(CPhysKeyParserIface *pParser);	// slot 27 (+0x6c)
};
