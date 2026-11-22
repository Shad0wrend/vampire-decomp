// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

// FUNCTION: 0x101b06a0 size=0x2e4
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CSoundEmitterSystemBase.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "Tier1.h"
#include "CEntityLookup.h"
#include <stdlib.h>

struct CSoundEmitterSystemVtbl
{
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void __cdecl vfunc3(const char *pszFormat, const char *a, const char *b, int c);
};

struct CBaseEntityUnit101b0c10
{
	void sub_101b0c10(int a);
};

struct CBaseEntityVectorsUnit
{
	void sub_100ad320(float *a, float *b, float *c);
};

struct SEdict;
void *sub_101878d0(SEdict *pEdict);
void sub_10143d80(const Vector &origin, float a, int b, int c, int d, int e, float f);

inline const char *Cmd_Argv(int i) { return engine->vfunc84(i); }

inline CBaseEntity *Instance(int iEnt)
{
	ScopeTrace trace("CBaseEntity::Instance", g_106b8540, g_106b8540);
	return (CBaseEntity *)sub_101878d0((SEdict *)engine->vfunc38(iEnt));
}

inline void EmitSoundAt(CRecipientFilter &filter, int entindex, const char *pszName, const Vector *pOrigin)
{
	CSoundParameters params;
	CBaseEntity *pEnt = Instance(entindex);
	if (pEnt)
	{
		int nModel;
		const char *pszModel = *((CEntityVSlots *)pEnt)->slot9(&nModel);
		if (!pszModel)
			pszModel = g_106b8540;
		g_1072be18.sub_101b3b90(pszModel);
	}
	if (g_1072be18.sub_101b33f0(pszName, params) && params.soundname[0])
	{
		if (g_109f3848(params.soundname, "vo", 2) == 0
			&& params.channel != 5 && params.channel != 2)
			g_109f3630("EmitSound:  Voice .wav file %s doesn't specify CHAN_VOICE or CHAN_STREAM for sound %s\n", params.soundname, pszName);
		enginesound->vfunc2(&filter, entindex, params.channel, params.soundname, params.volume, params.soundlevel, 0, params.pitch, (const float *)pOrigin, 0, 1, 0);
		((CSoundEmitterSystemVtbl *)&g_1072be18)->vfunc3("EmitSound:  '%s' emitted as '%s' (ent %i)\n", pszName, params.soundname, entindex);
	}
}

__forceinline Vector VMulF(const Vector &v, float fl) { Vector res; res.x = v.x * fl; res.y = v.y * fl; res.z = v.z * fl; return res; }
__forceinline void VAddF(Vector &a, const Vector &v) { a.x += v.x; a.y += v.y; a.z += v.z; }
__forceinline Vector VMulG(const Vector &v, float fl) { Vector res; VectorMultiply(v, fl, res); return res; }
// TARGET: sub_101b06a0
void sub_101b06a0()
{
	CBasePlayer *pPlayer = (CBasePlayer *)sub_101193b0();
	if (pPlayer)
	{
		if (engine->vfunc85() > 2)
		{
			Vector vecEar = pPlayer->vfunc193();
			Vector vecDir;
			((CBaseEntityVectorsUnit *)pPlayer)->sub_100ad320((float *)&vecDir, 0, 0);
			vecEar += VMulG(vecDir, atof(Cmd_Argv(2)));

			CPASAttenuationFilter filter((CEntitySoundOriginView *)pPlayer, 0.8f);
			EmitSoundAt(filter, 0, Cmd_Argv(1), &vecEar);
			sub_10143d80(vecEar, 8.0f, 0, 0xff, 0, 1, 4.0f);
		}
		else
		{
			((CBaseEntityUnit101b0c10 *)pPlayer)->sub_101b0c10((int)Cmd_Argv(1));
		}
	}
	else
	{
		g_109f3628("Can't play until a game is started.\n");
	}
}
// END FUNCTION
