// CUnknown101f4c80: a record of the sound name table (id at +0, a name at +4, a folder name at +8); the shared
// default record (id -1) is the one function-local static of the table lookup, so every function that looks a record
// up inlines CUnknown101f4c80Table::Find instead of a static of its own (guard 0x109f08f8, object 0x109f0920).
#pragma once

class CUnknown101f4c80
{
public:
	int m_nId;	// 0x00
	const char *m_pszName;	// 0x04
	const char *m_pszFolder;	// 0x08
	int m_unk0c;
	int m_unk10;

	CUnknown101f4c80(int id);	// 0x101f4c80
	~CUnknown101f4c80();	// 0x101f4cb0
};

struct CUnknown101f4c80Table
{
	char m_pad0000[0x0c];
	const char *m_pszDirectory;	// 0x0c
	char m_pad0010[4];
	int m_nRecords;	// 0x14
	CUnknown101f4c80 **m_pRecords;	// 0x18

	CUnknown101f4c80 *Find(int id)
	{
		for (int i = 0; i < m_nRecords; i++) {
			if (m_pRecords[i]->m_nId == id)
				return m_pRecords[i];
		}
		static CUnknown101f4c80 s_default(-1);
		return &s_default;
	}
};
