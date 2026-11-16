// VDataTable.h: Troika's table of vdata records (items, feats, botch types, ...): a growth step, the next key, two
// name fields of the data file, then a pointer array of records it owns. Ten such tables are globals (0x1073a2ac,
// 0x1073a2c8, ...); their initializers build and destroy them inline. Only those units include this header.
#pragma once

template <class T>
class CVDataTable
{
public:
	CVDataTable() : m_nGrow(1), m_nNextKey(0), m_nAlloc(0), m_nRecords(0), m_pRecords(0) {}
	~CVDataTable()
	{
		if (m_pRecords) {
			for (int i = 0; i < m_nRecords; i++) {
				delete m_pRecords[i];
				m_pRecords[i] = 0;
			}
			delete m_pRecords;
			m_pRecords = 0;
		}
		m_nNextKey = 0;
		m_nRecords = 0;
		m_nAlloc = 0;
	}

	int m_nGrow;	// 0x00: how many records one growth step adds
	int m_nNextKey;	// 0x04: the key of the next record created
	int m_unk08;	// 0x08: "InternalName" of the data file
	int m_unk0c;	// 0x0c: "Name" of the data file
	int m_nAlloc;	// 0x10: records the array has room for
	int m_nRecords;	// 0x14
	T **m_pRecords;	// 0x18
};
