// CTETextMessage: text message temp entity (derived from the CBaseTempEntity head at +0x0).
#pragma once

#include "CBaseTempEntity.h"

class CRecipientFilter;

class CTETextMessage : public CBaseTempEntityHead
{
public:
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTETextMessage();	// function 0x10068c00: the vtable, then the base's destructor body
#endif
	CTETextMessage(const char *name);	// 0x10068b50

	virtual CTETextMessage *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const float *pOrigin, const float *pAngles);	// "Test": fills in default message fields and the text "Testing CTETextMessage", then sends it to everybody through slot 4
	virtual void vfunc4(CRecipientFilter *pFilter, float flDelay);	// sends the message

	void sub_10010e15();	// destructor body
	void sub_10068d50(int a, int b);	// slot 4 (stub 0x1000ab6e): sends the message; called directly on the global instance at 0x106c5e80 (message fields at +0xc.., text at +0x4c) with the recipient filter and a second argument

	char m_pad0004[0xc - 4];
	int m_n0c;
	float m_f10;
	float m_f14;
	int m_n18;
	int m_n1c;
	int m_n20;
	int m_n24;
	int m_n28;
	int m_n2c;
	int m_n30;
	int m_n34;
	int m_n38;
	float m_f3c;
	float m_f40;
	float m_f44;
	float m_f48;
	char m_szText[0x80];	// 0x4c
public:
    virtual int vfunc1();
    virtual ServerClass * vfunc0();
};
