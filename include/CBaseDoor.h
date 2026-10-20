// CBaseDoor: door entity family. Only slots that decompiled code needs are declared, as plain members.
#pragma once

class CBaseDoor : public CBaseEntity
{
public:
	void vfunc71();
	void vfunc104();	// slot 104: calls slot 71, then sub_100eecf0
	void vfunc246(int a, int* b, int c);
	void sub_100eecf0();
	void sub_100ee810();	// scope-less: for each of the two entity handles at +0x628 and +0x62c that resolve, calls sub_10224170 on the entity with a zeroed inputdata_t (value -1 handle), and for the second also again when it still resolves
	CBaseDoor *sub_100ee2b0();	// as in CKeepUpright (transplant)
	int sub_100f12a0(CBaseDoor **ppDoors, int maxDoors);	// the other doors that share this door's name (a door pair), up to maxDoors
	void sub_100efbf0(char bOpen);	// "UpdateAreaPortals": for every func_areaportal whose slot 161 accepts the door's name (+0x26c) calls its Use(this, this, bOpen, 0)
};
