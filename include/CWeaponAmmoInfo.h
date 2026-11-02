// CWeaponAmmoInfo: the weapon-info record the weapon data loaders fill from a key/value file (ReadWeaponDataFromFileForSlot
// family: 0x10258ef0 magazines, 0x10258c30 sound data), and the key/value node interface they read it with.
// New names (the matched 0x10258c30 declares its own local IKVSub / WeaponSoundInfo; do not mix them into one source).
#pragma once

// A node of the weapon data file. Slots as the loaders use them: 0 name, 2 FindKey(name), 3 next key of the same name,
// 4 first sub key, 5 next sibling (0x10258c30); 6 / 7 are the same kind of calls on the file level object of
// 0x10258ef0 (6 = find the "Magazine" section, 7 = the next one); 10 GetInt, 11 GetFloat, 13 GetString.
struct IKVNode
{
	virtual const char *vfunc0();
	virtual void vfunc1();
	virtual IKVNode *vfunc2(const char *pszName);
	virtual IKVNode *vfunc3();
	virtual IKVNode *vfunc4();
	virtual IKVNode *vfunc5();
	virtual IKVNode *vfunc6(const char *pszName);	// slot 6 (+0x18): used on the file object: FindKey("Magazine")
	virtual IKVNode *vfunc7();	// slot 7 (+0x1c): the next section after vfunc6's
	virtual void vfunc8();
	virtual void vfunc9();
	virtual int vfunc10(const char *pszKey, int nDefault);	// GetInt
	virtual float vfunc11(const char *pszKey, float flDefault);	// GetFloat
	virtual void vfunc12();
	virtual const char *vfunc13(const char *pszKey, const char *pszDefault);	// GetString (the loaders strncpy the returned pointer)
};

// 0x10258c30's WeaponSoundInfo, 0xe7a4 bytes (0x39d0 dwords of sound slots, 0x19 dwords of counters); the sound loader
// is sub_10258c30(IKVNode *pKV, void *pSoundInfo, const char *pszWeaponName) (cdecl, matched).

// One magazine / ammo record, 0x1093c bytes, three of them at CWeaponAmmoInfo::m_Mags.
struct CWeaponMagazineRec
{
	int m_nSize;	// 0x00: "Size" (default 0); also the default of Default_Size and Dropped_Ammo
	int m_nAmmoWorth;	// 0x04: "ammo_worth" (default 0x7b)
	int m_nDefaultSize;	// 0x08: "Default_Size"
	int m_nDroppedAmmo;	// 0x0c: "Dropped_Ammo"
	float m_flReloadTime;	// 0x10: "ReloadTime" (default 0)
	char m_szType[0x80];	// 0x14: "Type" string, left "" when it is "None" (the loader then skips print name and description)
	char m_szInfoModel[0x80];	// 0x94: "ammoinfomodel" (default: m_szDefaultModel of the info object)
	char m_pad0114[4];
	char m_szPrintName[0x80];	// 0x118: "ammoprintname" (default "!!! Missing printname on weapon")
	char m_szDescription[0x2000];	// 0x198: "ammodescription" (same default; strncpy length 0x2000)
	char m_SoundInfo[0xe7a4];	// 0x2198: filled by sub_10258c30(pKV node, m_SoundInfo, name)
};

// The weapon-info object the magazine loader fills (only what 0x10258ef0 touches).
struct CWeaponAmmoInfo
{
	char m_pad0000[0x2388];
	char m_szDefaultModel[0x80];	// 0x2388: the default string of "ammoinfomodel" (the loader passes its address)
	char m_pad2408[0x2668 - 0x2408];
	CWeaponMagazineRec m_Mags[3];	// 0x2668, stride 0x1093c
};
