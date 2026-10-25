// CPhysSaveRestoreBlockHandler: the physics save/restore block handler (RTTI name). Only the members the recovered code needs.
#pragma once

class CPhysSaveRestoreBlockHandler
{
public:
	char m_pad0000[0x40];
	bool m_bMatch40;	// 0x40: the saved short of the source equals the global at 0x1053c340
	char m_pad0041[0x98 - 0x41];
	char m_data98[0x10];	// 0x98: the sub-object the source is handed to (slot 2 of the source's vtable)

	void vfunc6(void *pSource);	// stores whether the source's slot 13 short equals 0x1053c340 at +0x40, then forwards the block at +0x98 with the string 0x1053c344 to the source's slot 2
};
