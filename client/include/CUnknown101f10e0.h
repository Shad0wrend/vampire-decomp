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

		// loads vdata\system\Reaction.txt (General: InternalName, ModifierNames; Strings), then every Reactions*.txt list file
	bool sub_10153180(const char *pszFile);	// loads one data file of the reaction categories (stub 0x10003e8f...): opens it, parses every ReactionCategory with sub_101f10e0 (false and a Msg when the file cannot be opened or a category fails), releases the file
	bool sub_10153230(const char *pszFile);
	bool sub_101576f0(const char *pszFile);
	bool sub_101577a0(const char *pszFile);
	bool sub_10152ff0(void *pData);
	bool sub_101530c0(void *pData);
	bool sub_10157560(void *pData);
	bool sub_10157630(void *pData);
		// parses one reaction category of the data file: its InternalName (looked up in the global name table at 0x1073a9a0, registered on a miss) picks the id and every ReactionGroup key is handed to a fresh item (sub_101f0b80); false (with a Msg) for no data or when no item could be made
	int *sub_101574f0();	// reserves one more id slot (stub 0x10006032)
	int *sub_10152f80();
	void *sub_10152e30();	// the next item (stub 0x10012d64), 0 when none could be made
		// loads one Reactions data file (stub 0x1000700e): opens it, parses every ReactionCategory; false (with a Msg) when it cannot be opened or a category fails
		// loads every vdata\system\Reactions*.txt file, then looks up the "ReactionLevel", "Reaction_Ranges" and "Appearance_Reaction" tables (a Msg for each that is missing)
};
