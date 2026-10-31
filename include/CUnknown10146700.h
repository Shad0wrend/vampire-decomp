// CUnknown10146700: small timer/flag record; real name not yet known.
#pragma once

class CUnknown10146700
{
public:
	char m_b0;
	char m_b1;
	char m_b2;
	char m_pad3;
	unsigned short m_usPeriod;	// 0x04
	unsigned short m_usTimer;	// 0x06

	int sub_10146700();
};
