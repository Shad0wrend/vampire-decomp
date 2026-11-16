// CTESpriteSpray: sprite spray temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CRecipientFilter;
class Vector;

class CTESpriteSpray
{
public:
	CTESpriteSpray(const char *name);	// function 0x10068440
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTESpriteSpray();	// function 0x100684c0: the vtable, then the base's destructor body
#endif

	virtual int vfunc0();
	virtual int vfunc1();
	virtual CTESpriteSpray *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const Vector *pOrigin, const Vector *pAngles);	// slot 3 "CTESpriteSpray::Test": fills the effect (smoke model, noise 0.8f, speed 5, count 30), puts the origin 24 units above pOrigin and moves it 50 units along the flat forward vector of pAngles and -25 along its right vector, a random direction (x, y in -100..100, z in 0..100), then Create(broadcast filter, 0.0f)
	virtual void vfunc4(CRecipientFilter *pFilter, float flDelay);	// slot 4 "CTESpriteSpray::Create"

	CTESpriteSpray *sub_10068440(const char *name);	// constructor body (0x10068440): the CBaseTempEntityHead constructor with the name, the vtable, the ten zeroed dwords; returns this
	void sub_1000bc7b();	// destructor body
	void sub_100686b0(int a, int b);	// "CTESpriteSpray::Create" (called through the stub at 0x100014b5)

	char m_pad0004[8];
	int m_mins[3];	// 0x000c
	int m_maxs[3];	// 0x0018
	int m_f24;
	int m_f28;
	int m_f2c;
	int m_f30;
};
