// CItemGWarrLedger1: ledger item entity (CWeaponIGeneric lineage); only what the factory needs.
// Layout is declared flat until the bases are recovered; slots 0..105 are placeholders.
#pragma once

#define LEDGER_V10(n) virtual void v##n##0(); virtual void v##n##1(); virtual void v##n##2(); virtual void v##n##3(); virtual void v##n##4(); \
	virtual void v##n##5(); virtual void v##n##6(); virtual void v##n##7(); virtual void v##n##8(); virtual void v##n##9();

class CItemGWarrLedger1
{
public:
	LEDGER_V10(0) LEDGER_V10(1) LEDGER_V10(2) LEDGER_V10(3) LEDGER_V10(4)
	LEDGER_V10(5) LEDGER_V10(6) LEDGER_V10(7) LEDGER_V10(8) LEDGER_V10(9)
	virtual void v100(); virtual void v101(); virtual void v102(); virtual void v103(); virtual void v104();
	virtual void v105();
	virtual void vfunc106(const char* name);

	void sub_1000d26f();
	CItemGWarrLedger1 *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10013a57();	// as in CPhysForce (transplant)
public:
	virtual int vfunc81();
public:
	virtual int vfunc80();
	char m_pad0004[0x914 - 0x4];
};
