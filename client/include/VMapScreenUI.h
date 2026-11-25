// VMapScreenUI: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, its operator delete; nothing else yet
// the destructor is slot 0 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CHudElement.h"
#include "CBasePanel.h"

class VMapBkg { public: VMapBkg(CBasePanel *p, const char *name, void *d, int z); void sub_101aa230(void *); char m_data[0xf0]; };

class VMapScreenUI : public CHudElement, public CBasePanel
{
public:
	VMapScreenUI(int a);
	void sub_10187860();
	void sub_10187980();
	void sub_10187b20();
	void sub_10187400();
	void sub_101878c0(int nArg0, int nArg1);
	bool m_b180;
	int m_n184;
	VMapBkg m_bkg;
	char m_b278;
	virtual void vfunc2();
	virtual ~VMapScreenUI();
	static void operator delete(void *pMem) { CHudElement::operator delete(pMem); }
};
