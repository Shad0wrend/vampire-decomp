// CEntityMapData: cursor over the key/value text block of one entity in the map's entity lump.
#pragma once

class CEntityMapData
{
public:
	char *m_pBuffer;	// 0x00 start of the entity text
	char *m_pCurrentKey;	// 0x04 current parse position

	bool sub_10136ee0(char *keyName, char *value);	// "CEntityMapData::GetNextKey": tokenizes a key and a value (256 bytes each) from the current position; false (position restored) at a closing brace, false with a warning on EOF or a brace in place of a value
	bool sub_10136e80(char *keyName, char *value);	// "CEntityMapData::GetFirstKey" (stub 0x10002d74): rewinds to the start and returns the first key / value pair
	bool sub_10136e50(const char *keyName, char *value);	// "CEntityMapData::ExtractValue" (stub 0x1000f817): the value of the named key
	void sub_10136ea0();	// stub 0x1000847c, run on the map data when the entity has been built (the end of the cursor's scope)
};
