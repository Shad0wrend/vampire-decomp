// CUnknown1020e4f0: entity-like class with an input handler (0x1020e4f0) that sends a user message to the activator's
// player; real name not yet known. Its name is a const char * at +0x450 and a delay float at +0x470.
#pragma once

struct inputdata_t;

class CUnknown1020e4f0
{
public:
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3();
	virtual int vfunc4(int a);	// slot 4 (+0x10): also reached with four arguments (name, delay, entity, previous result), see sub_1020e4f0
	char m_pad0004[0x450 - 4];
	const char *m_pName450;
	char m_pad0454[0x470 - 0x454];
	float m_f470;
	void sub_1020e4f0(inputdata_t *pInput);	// input handler: sends the \"CloseWindow\" style user message to the activator's player (+0xa8), then fires a delayed event when the delay at +0x470 is positive
};
