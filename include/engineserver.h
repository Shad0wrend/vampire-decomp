#pragma once
// engine: the engine's server interface, pointed to by g_1070b22c. Slot types are the ones the matched sources call
// through (2026-10-28 survey of 370 sources and CUnknown1070b22c.h / IVEngineServer.h); slot N is at +N*4 of the
// vtable, so `call [eax+0x150]` is vfunc84. Untyped slots are `void vfuncN()` placeholders that keep the numbering:
// give one its type here (edit_context) when your function calls it. The type and the pointer live in a namespace so
// sources that still declare their own `extern X *g_1070b22c;` keep compiling (the judge resolves both to one address).
class CRecipientFilter;
class Vector;

namespace EngineGlobals {
class IVEngineServer
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(const char *pszCommand); virtual void vfunc8(); virtual void vfunc9(const char *pszLevel, const char *pszLandmark);	/* ChangeLevel */
	virtual int vfunc10(const char *pszMapName);	// IsMapValid
	virtual void vfunc11(int a, int *b);
	virtual int vfunc12();	// a flag (the "is the level loaded" test before sprite / particle code)
	virtual int vfunc13(const char *pszName, bool bPreload);	// PrecacheModel: returns the model index
	virtual void vfunc14(); virtual void vfunc15(); virtual void vfunc16();
	virtual int vfunc17(const char *pszName, int bPreload);	// precaches a particle emitter / generic resource by name
	virtual void *vfunc18(int modelIndex);	// the studio header of a model index (0 when none)
	virtual char *vfunc19(int modelIndex);	// the model name of a model index
	virtual int vfunc20(const char *pszModel);	// the model index of a model name
	virtual int vfunc21(int modelIndex);	// the type of a model index (3 = studio)
	virtual void vfunc22(); virtual void vfunc23(); virtual void vfunc24(); virtual void vfunc25();
	virtual int vfunc26(int a);
	virtual void vfunc27();
	virtual const char *vfunc28(int index);
	virtual void vfunc29();
	virtual int vfunc30(const float *pPos);	// the PVS cluster of a position
	virtual void vfunc31(int cluster, int size, char *pBuffer);	// fills a PVS buffer for a cluster
	virtual char vfunc32(const float *pPos, void *pData);	// a PVS test of a position
	virtual char vfunc33(const Vector &vecMins, const Vector &vecMaxs, const void *pPVS);	// CheckBoxInPVS
	virtual int vfunc34(int edictIndex);	// the user id of the player behind an engine index
	virtual int vfunc35(int edict);	// IndexOfEdict
	virtual char *vfunc36();	// the base of the edict array (stride 0x78)
	virtual void vfunc37();
	virtual void *vfunc38(int index);	// PEntityOfEntIndex: the edict (its IServerUnknown is at +0x40)
	virtual int vfunc39();	// the number of edicts
	virtual void vfunc40(); virtual void vfunc41(int a, int b, int c); virtual void vfunc42(); virtual void *vfunc43();
	virtual void vfunc44(void *pEdict);
	virtual void vfunc45();
	virtual void vfunc46(void *p);
	virtual void *vfunc47(int num, int size);	// SaveAllocMemory: num * size bytes of save memory
	virtual void vfunc48();
	virtual void vfunc49(int entindex, int pos, const char *pszSample, int volume, int soundlevel, int flags, int pitch);	// EmitAmbientSound
	virtual void vfunc50();
	virtual int vfunc51(int nGroup, char *pszBuffer, int nBufferSize);	// SentenceGroupPick: picks a sentence of the group, its name into the buffer; negative when none
	virtual int vfunc52(int nGroup, char *pszBuffer, int nBufferSize, int nSentence, int bReset);	// SentenceGroupPickSequential: the name of the group's sentence, negative when none
	virtual int vfunc53(int a); virtual void vfunc54();
	virtual int vfunc55(const char *pszGroupName);	// SentenceGroupIndexFromName: negative for an unknown group
	virtual void vfunc56(); virtual void vfunc57();
	virtual void *vfunc58(int modelIndex);	// GetVCollide: a model's collision data (0 when none)
	virtual void vfunc59(const char *pszCommand);	// ServerCommand
	virtual void vfunc60();	// ServerExecute
	virtual void vfunc61(void *pEdict, const char *pszFormat, ...);	// ClientCommand (variadic: cdecl, the caller pushes this and pops all)
	virtual void vfunc62(int style, const char *pszPattern);	// LightStyle
	virtual void vfunc63();
	virtual void vfunc64(int bUsePAS, const float *pOrigin, int *pPlayerBits);	// Message_DetermineMulticastRecipients: the players that see / hear the origin as a bit mask
	virtual void vfunc65(CRecipientFilter *pFilter, int msgType);	// UserMessageBegin
	virtual void vfunc66();	// MessageEnd
	virtual void vfunc67(int value);	// message write: a byte
	virtual void vfunc68(int value);	// message write: a char
	virtual void vfunc69(int value);	// message write: an integer field
	virtual void vfunc70(int value);	// message write: a 16-bit value
	virtual void vfunc71(int value);	// message write: one value
	virtual void vfunc72(float value);	// message write: a float
	virtual void vfunc73(); virtual void vfunc74();
	virtual void vfunc75(int value);
	virtual void vfunc76(); virtual void vfunc77();
	virtual void vfunc78(const char *pszValue);	// message write: a string
	virtual void vfunc79(); virtual void vfunc80(); virtual void vfunc81(int idx, const char *pszFormat, ...);	/* Con_NPrintf (variadic: cdecl, the caller pushes this and pops all) */
	virtual int vfunc82(const char *pszName, int size);	// registers a user message by name and size, returns its id
	virtual void vfunc83();
	virtual const char *vfunc84(int index);	// Cmd_Argv
	virtual int vfunc85();	// Cmd_Argc
	virtual void vfunc86(); virtual float vfunc87();	/* Time: the engine time in seconds (returned in ST0) */ virtual void vfunc88(); virtual void vfunc89(char *pszBuffer);	/* GetGameDir */ virtual void *vfunc90(const char *pszName, int *pLength);	/* LoadFileForMe: the file's contents (0 when missing), its length in *pLength */
	virtual void vfunc91(void *pBuffer);	/* FreeFile: frees a LoadFileForMe buffer */ virtual void vfunc92(); virtual void vfunc93(); virtual void vfunc94(); virtual void vfunc95();
	virtual void vfunc96(); virtual void vfunc97();
	virtual int vfunc98(int a, void *b);
	virtual void *vfunc99(const char *pszName, int a, int b);
	virtual void vfunc100();
	virtual void vfunc101(int index);
	virtual void vfunc102(int portalKey, int bOpen);	// SetAreaPortalState
	virtual void vfunc103(int a, int b, const void *c, void *d, int e);
	virtual void vfunc104();
	virtual int vfunc105(int a, int b);
	virtual void vfunc106(); virtual void vfunc107(); virtual void vfunc108(); virtual void vfunc109(); virtual void vfunc110();
	virtual int vfunc111(const float *pOrigin);	// the area (cluster) of a position
	virtual void vfunc112();
	virtual char vfunc113(const float *pViewOrigin, int portalKey, float *pPlane);	// GetAreaPortalPlane
	virtual void vfunc114(); virtual void vfunc115(); virtual void vfunc116(); virtual void vfunc117(); virtual void vfunc118();
	virtual double vfunc119(int flag);	// a time value (returned in ST0)
	virtual int vfunc120();
	virtual void vfunc121(int a, int *b);
	virtual void vfunc122(int edict, int a);
};
extern IVEngineServer *g_1070b22c;
}
#define engine EngineGlobals::g_1070b22c
