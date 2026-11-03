// CUnknown101f7cc0: loader of the trait effect groups (real name not yet known): a table of CVTraitEffectGroup_t
// pointers (count at +4, array at +8) whose entries are looked up by id.
#pragma once

class CVTraitEffectGroup_t;

class CUnknown101f7cc0
{
public:
	bool sub_101f7cc0(void *pData);	// parses one trait effect category of the data file: InternalName picks the entry of the pointer array by id (the name table at 0x1074df78), every TraitEffectGroup key is handed to that entry (CVTraitEffectGroup_t::sub_101f73f0); false (with a Msg) for no data or a missing entry
	bool sub_101f7e90(const char *pszFile);	// opens the data file and parses every "TraitEffectCategory" key with sub_101f7cc0

	int m_n00;
	int m_nGroups;	// 0x04
	CVTraitEffectGroup_t **m_ppGroups;	// 0x08
};
