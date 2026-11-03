// CUnknown101f10e0: loader of the "ReactionInfoList" data file (real name not yet known); its list object keeps the
// reactions (sub_101f1050 reserves a slot of the id array, sub_101f0ea0 hands out the next item).
#pragma once

class CUnknown101f10e0
{
public:
	int m_unk0;
	int m_unk4;
	int m_unk8;
	int m_unkc;
	char m_pad10[0x3c];
	int m_levelTable;	// 0x004c: id of the "ReactionLevel" string list
	int m_rangesTable;	// 0x0050: id of the "Reaction_Ranges" table
	int m_appearanceTable;	// 0x0054: id of the "Appearance_Reaction" table

	void sub_101f14a0();	// loads vdata\system\Reaction.txt (General: InternalName, ModifierNames; Strings), then every Reactions*.txt list file
	bool sub_101f12e0(const char *pszFile);	// loads one data file of the reaction categories (stub 0x10003e8f...): opens it, parses every ReactionCategory with sub_101f10e0 (false and a Msg when the file cannot be opened or a category fails), releases the file
	bool sub_101f10e0(void *pData);
	bool sub_101f11f0(void *pData);	// parses one reaction category of the data file: its InternalName (looked up in the global name table at 0x1073a9a0, registered on a miss) picks the id and every ReactionGroup key is handed to a fresh item (sub_101f0b80); false (with a Msg) for no data or when no item could be made
	int *sub_101f1050();	// reserves one more id slot (stub 0x10006032)
	void *sub_101f0ea0();	// the next item (stub 0x10012d64), 0 when none could be made
	bool sub_101f13c0(const char *pszFile);	// loads one Reactions data file (stub 0x1000700e): opens it, parses every ReactionCategory; false (with a Msg) when it cannot be opened or a category fails
	void sub_101f1750();	// loads every vdata\system\Reactions*.txt file, then looks up the "ReactionLevel", "Reaction_Ranges" and "Appearance_Reaction" tables (a Msg for each that is missing)
};
