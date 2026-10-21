// IVEngineServer: the engine's server interface, reached through the global at 0x1070b22c.
// Only the slots that decompiled code calls are typed; the others are placeholders that keep the slot numbers right.
#pragma once

class IVEngineServer
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12();
	virtual int vfunc13(const char *pszModel, int bPreload);	// slot 13 (+0x34): PrecacheModel
	virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16();
	virtual void vfunc17(int index, int bPreload);	// slot 17 (+0x44): precaches the particle / decal / generic resource with the given index
	virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23(); virtual void vfunc24();
	virtual void vfunc25(); virtual void vfunc26(); virtual void vfunc27(); virtual void vfunc28(); virtual void vfunc29();
	virtual void vfunc30(); virtual void vfunc31(); virtual void vfunc32(); virtual void vfunc33(); virtual void vfunc34();
	virtual int vfunc35(int a);	// slot 35 (+0x8c)
	virtual void vfunc36(); virtual void vfunc37();
	virtual void *vfunc38(int index);	// slot 38 (+0x98): PEntityOfEntIndex (the edict, whose IServerUnknown is at +0x40)
	virtual void vfunc39();
	virtual void vfunc40(); virtual void vfunc41(); virtual void vfunc42(); virtual void vfunc43(); virtual void vfunc44();
	virtual void vfunc45(); virtual void vfunc46(); virtual void vfunc47(); virtual void vfunc48(); virtual void vfunc49();
	virtual void vfunc50(); virtual void vfunc51(); virtual void vfunc52(); virtual void vfunc53(); virtual void vfunc54();
	virtual void vfunc55(); virtual void vfunc56(); virtual void vfunc57(); virtual void vfunc58(); virtual void vfunc59();
	virtual void vfunc60(); virtual void vfunc61(); virtual void vfunc62(); virtual void vfunc63(); virtual void vfunc64();
	virtual void vfunc65(void *pFilter, int nMessage);	// slot 65 (+0x104): UserMessageBegin
	virtual void vfunc66();	// slot 66 (+0x108): MessageEnd
	virtual void vfunc67(); virtual void vfunc68(); virtual void vfunc69();
	virtual void vfunc70(); virtual void vfunc71(); virtual void vfunc72(); virtual void vfunc73(); virtual void vfunc74();
	virtual void vfunc75(int nValue);	// slot 75 (+0x12c): WriteByte
	virtual void vfunc76(); virtual void vfunc77(); virtual void vfunc78(); virtual void vfunc79();
	virtual void vfunc80(); virtual void vfunc81(); virtual void vfunc82(); virtual void vfunc83();
	virtual int vfunc84(int a);	// slot 84 (+0x150): Cmd_Argv (a char pointer)
	virtual int vfunc85();	// slot 85 (+0x154): Cmd_Argc
};
