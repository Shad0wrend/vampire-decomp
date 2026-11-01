// CScriptedSentence: declared by pcdecomp transplant for 0x101ab160 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

class CBaseEntity;

class CScriptedSentence
{
public:
	CScriptedSentence *vfunc5(unsigned int flags);
	bool vfunc110(const char *key, const char *value);	// "CScriptedSentence::KeyValue": "volume" sets the float at +0x46c to atof(value) * 0.1, else CBaseEntity::vfunc110
	void vfunc103();	// slot 103 "CScriptedSentence::Spawn": SetSolid(SOLID_NONE) scope trace, byte at +0x470 = 1, without a name schedules the think function 0x1000880a one second ahead, maps the delay type at +0x468 (1 / 2 / 3 / other) to the volume-like value at +0x464 (0x46 / 0x4b / 0 / 0x3c), clears +0x468, resets a non-positive float at +0x46c to 1.0f, then CBaseEntity::sub_100b3b00()
	int sub_101aa390(CBaseEntity *pTarget);	// "CScriptedSentence::StartSentence": -1 (DevMsg "Not Playing sentence %s") without a target; else plays the sentence (name +0x450, volume +0x45c, pitch +0x464, attenuation +0x46c) on the target through its slot 485 (listener found through the global entity list for the target name at +0x474 and the radius at +0x458 / 56763.8 for "!player", or the entity at +0x478 when flag 0x10 of +0x204 is set), DevMsg "Playing sentence %s", then tells the sub-object at +0x47c about the entity of the handle at +0x10c; returns the sentence index
public:
	typedef datamap_t *Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
	int vfunc117();
};
