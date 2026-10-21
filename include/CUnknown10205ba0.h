// CUnknown10205ba0: a tagged value (type at +0: 0 number, 1 sub-object at +4, 2 stat id, 3 function; -1 none); real name not yet known.
#pragma once

class CUnknown10204bf0;

class CUnknown10205ba0
{
public:
	int m_type;	// 0x00
	int m_value;	// 0x04: the number, the stat id or the sub-object

	const char *sub_10205ba0(CUnknown10204bf0 *pNames);	// the text form of the value; numbers go through pNames when it is set, else "%d"
};
