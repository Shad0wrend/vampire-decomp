// CEntityMapData: cursor over the key/value text block of one entity in the map's entity lump.
#pragma once

class CEntityMapData
{
public:
	char *m_pBuffer;	// 0x00 start of the entity text
	char *m_pCurrentKey;	// 0x04 current parse position

	bool sub_10136ee0(char *keyName, char *value);	// "CEntityMapData::GetNextKey": tokenizes a key and a value (256 bytes each) from the current position; false (position restored) at a closing brace, false with a warning on EOF or a brace in place of a value
};
