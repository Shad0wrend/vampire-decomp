// CScriptedSentence (RTTI CScriptedSentence : CPointEntity : CBaseEntity), vtable 0x1047935c, size 0x4ac.
// Constructor (the factory scripted_sentence, 0x101a9cb0): CBaseEntity(0), CPointEntity vftable, the two outputs
// (+0x47c, +0x494), CScriptedSentence vftable.
#pragma once
#include "string_t.h"

#include "CPointEntity.h"
#include "COutputEvent.h"

struct datamap_t;

class CBaseEntity;

class CScriptedSentence : public CPointEntity
{
public:
	CScriptedSentence *vfunc5(unsigned int flags);
	bool vfunc110(const char *key, const char *value);	// "CScriptedSentence::KeyValue": "volume" sets the float at +0x46c to atof(value) * 0.1, else CBaseEntity::vfunc110
	void vfunc103();	// slot 103 "CScriptedSentence::Spawn": SetSolid(SOLID_NONE) scope trace, byte at +0x470 = 1, without a name schedules the think function 0x1000880a one second ahead, maps the delay type at +0x468 (1 / 2 / 3 / other) to the volume-like value at +0x464 (0x46 / 0x4b / 0 / 0x3c), clears +0x468, resets a non-positive float at +0x46c to 1.0f, then CBaseEntity::sub_100b3b00()
	int sub_101aa390(CBaseEntity *pTarget);	// "CScriptedSentence::StartSentence": -1 (DevMsg "Not Playing sentence %s") without a target; else plays the sentence (name +0x450, volume +0x45c, pitch +0x464, attenuation +0x46c) on the target through its slot 485 (listener found through the global entity list for the target name at +0x474 and the radius at +0x458 / 56763.8 for "!player", or the entity at +0x478 when flag 0x10 of +0x204 is set), DevMsg "Playing sentence %s", then tells the sub-object at +0x47c about the entity of the handle at +0x10c; returns the sentence index
public:
	datamap_t * vfunc82();
	int vfunc117();

	string_t m_iszSentence;	// 0x0450
	string_t m_iszEntity;	// 0x0454
	float m_flRadius;	// 0x0458
	float m_flDelay;	// 0x045c
	float m_flRepeat;	// 0x0460
	int m_iSoundLevel;	// 0x0464
	int m_TempAttenuation;	// 0x0468
	float m_flVolume;	// 0x046c
	bool m_active;	// 0x0470
	char m_pad0471[0x474 - 0x471];
	string_t m_iszListener;	// 0x0474
	unsigned int m_pActivator;	// 0x0478	// the sentence fields at +0x450..+0x47c
	COutputEvent m_Output47c;	// 0x47c: constructed by the factory (0x10002ddd)
	COutputEvent m_Output494;	// 0x494
};
