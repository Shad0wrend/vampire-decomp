// CUnknown100e19f0: a dialog object (scope trace name "CDialog") that points at a data object at +8 holding an array of
// 0x34-byte lines; real name not yet known.
#pragma once

struct DialogLine_t
{
	int m_id;	// 0x00
	char pad04[0x34 - 4];
};

class CUnknown100e19f0Data
{
public:
	char pad0[0x104];
	int m_nLines;	// 0x104
	char pad108[4];
	DialogLine_t *m_pLines;	// 0x10c
};

class CUnknown100e19f0
{
public:
	char pad0[8];
	CUnknown100e19f0Data *m_pData;	// 0x08

	DialogLine_t *sub_100e19f0(int id);	// "CDialog::get_line": scope trace, the line with the given id, or null
};
