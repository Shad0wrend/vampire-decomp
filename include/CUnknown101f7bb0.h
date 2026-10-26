// CUnknown101f7bb0: loader of the "TraitEffectInfoList" data file (real name not yet known); same shape as
// CUnknown101f10e0 (name table at 0x1074df78).
#pragma once

class CUnknown101f7bb0
{
public:
	bool sub_101f7bb0(void *pData);	// parses one trait effect category of the data file: InternalName picks the id (registered on a miss), every TraitEffectGroup key is handed to a fresh item; false (with a Msg) for no data or when no item could be made
	bool sub_101f7db0(const char *pszFile);	// opens the data file and parses every "TraitEffectCategory" key of it with sub_101f7bb0; false (with a Msg) when the file is missing or a category does not parse
};
