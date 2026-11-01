// CVSoundActivityTable_t: per activity (0x118d of them, 12 bytes each) the list of sound objects to start / stop when a
// character changes its activity ("not a bug perhaps but this table doesn't go past LAST_SHARED_ACTIVITY").
#pragma once

#include "CEntitySoundOriginView.h"
#include "CUnk101f42d0.h"

class CBaseCombatCharacter;

struct CVSoundEdictObject	// what the edict's object at +0x40 hands out for the entity's name
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual const char *GetName();	// slot 5
};

struct CVSoundEdictUnk
{
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual CVSoundEdictObject *GetObject();	// slot 3
};

struct CVSoundEdict	// the engine's edict of an entity (+0x2e0)
{
	char m_pad0000[0x40];
	CVSoundEdictUnk *m_pUnk40;	// 0x40
};

class CVSoundEnt : public CEntitySoundOriginView	// a sound-emitting entity: the sound table calls GetSoundEmissionOrigin on it
{
public:
	int sub_1009d6a0();	// CBaseEntity::sub_1009d6a0 (stub 0x100128cd)
	int sub_1009d760();	// CBaseEntity::sub_1009d760 (stub 0x1001320a)
	int sub_1009d5e0();	// CBaseEntity::sub_1009d5e0 (stub 0x10008922): the index of the entity's sound table row

	char m_pad0004[0x2e0 - 4];
	CVSoundEdict *m_pEdict;	// 0x2e0
};

struct CVSoundList : public CUnk101f42d0	// the sounds of one table row
{
	const char *sub_101f4600(CVSoundEnt *pEnt, int a);	// stub 0x10004930: the sample name picked for the entity
};

struct CVActivitySound	// the table of the sound rows (+0x20, count +0x1c)
{
	char m_pad0000[0x14];
	int m_nSounds;	// 0x14: sounds per row
	char m_pad0018[4];
	int m_nLists;	// 0x1c
	CVSoundList **m_ppLists;	// 0x20

	void sub_101f5b60(int hControl, int nSound, int nMode);	// "VSnd::Play" (stub 0x1000c851); hControl is the sound-emitting entity (CVSoundEnt *), nSound the channel, nMode the pick argument: plays the sound of the entity's row at the entity, DevMsg "ERROR: VSnd::Play: %s Table out of range" when the row index is past the table
	void sub_101f58e0(CVSoundEnt *pEnt);	// precaches every sound of the entity's row
	void sub_101f5950(int hControl, int nSound, int nMode, float flVolume, float flPitch);	// starts the sound (stub 0x100119fa)
};

struct CVSoundActivityRecord_t
{
	int m_nSounds;	// 0x0
	CVActivitySound **m_pSounds;	// 0x4
	int *m_pIds;	// 0x8
};

class CVSoundActivityTable_t
{
public:
	CVSoundActivityRecord_t m_Records[0x118d];

	void sub_101f61b0();	// debug dump: "SoundActivityTable", then per activity the sound objects of its rows
	void sub_101f6130(CBaseCombatCharacter *pCharacter, int nActivity);	// starts the sounds of one activity (mode 2) for the character's sound control object (+0x9c)
	void sub_101f6010(CBaseCombatCharacter *pCharacter, int nNewActivity, int nOldActivity);	// "CVSoundActivityTable_t::Play": stops the sounds of the old activity and starts those of the new one for the character's sound control object (+0x9c)
};
