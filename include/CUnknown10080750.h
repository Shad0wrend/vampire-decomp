// CUnknown10080750: object with a setter for the field at +4 (called from 0x10080830); real name not yet known.
#pragma once

class CUnknown10080750
{
public:
	int m_unk0;
	int m_unk4;
	int m_unk8;	// the scene entity stores the "snd_mixahead" console variable here

	void sub_10080750(int value);
	void sub_10080730();	// constructor body (stub 0x10002a77), run first by the scene entity constructor
};
