// CDynamicLight: dynamic light entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

struct datamap_t;

class CDynamicLight
{
public:

	void sub_1000cb8a();	// destructor body
	void vfunc103();	// slot 103 "CDynamicLight::Spawn": slot 104, SetSolid(0) (inlined scope trace), the byte at +0x453 = 1, the worker sub_101cf390(this, zero vector, zero vector), CBaseEntity::sub_100b3b00, then bit 7 of the flags at +0x268
	bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "CDynamicLight::KeyValue" (declared as a plain member): "_light" sets the colour bytes at +0x1a0..+0x1a2 from a colour string, "pitch" sets the pitch (the negated value) of the absolute angles (slots 219 / 218), "spawnflags" the bytes at +0x450 / +0x451; everything else goes to CBaseEntity::KeyValue
	bool sub_1009e430(const char *szKeyName, const char *szValue);	// CBaseEntity::vfunc110 (stub 0x1000fc86), called directly
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CDynamicLight *vfunc5(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual void vfunc14();
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc18();
	virtual void vfunc19();
	virtual void vfunc20();
	virtual void vfunc21();
	virtual void vfunc22();
	virtual void vfunc23();
	virtual void vfunc24();
	virtual void vfunc25();
	virtual void vfunc26();
	virtual void vfunc27();
	virtual void vfunc28();
	virtual void vfunc29();
	virtual void vfunc30();
	virtual void vfunc31();
	virtual void vfunc32();
	virtual void vfunc33();
	virtual void vfunc34();
	virtual void vfunc35();
	virtual void vfunc36();
	virtual void vfunc37();
	virtual void vfunc38();
	virtual void vfunc39();
	virtual void vfunc40();
	virtual void vfunc41();
	virtual void vfunc42();
	virtual void vfunc43();
	virtual void vfunc44();
	virtual void vfunc45();
	virtual void vfunc46();
	virtual void vfunc47();
	virtual void vfunc48();
	virtual void vfunc49();
	virtual void vfunc50();
	virtual void vfunc51();
	virtual void vfunc52();
	virtual void vfunc53();
	virtual void vfunc54();
	virtual void vfunc55();
	virtual void vfunc56();
	virtual void vfunc57();
	virtual void vfunc58();
	virtual void vfunc59();
	virtual void vfunc60();
	virtual void vfunc61();
	virtual void vfunc62();
	virtual void vfunc63();
	virtual void vfunc64();
	virtual void vfunc65();
	virtual void vfunc66();
	virtual void vfunc67();
	virtual void vfunc68();
	virtual void vfunc69();
	virtual void vfunc70();
	virtual void vfunc71();
	virtual void vfunc72();
	virtual void vfunc73();
	virtual void vfunc74();
	virtual void vfunc75();
	virtual void vfunc76();
	virtual void vfunc77();
	virtual void vfunc78();
	virtual void vfunc79();
	virtual int vfunc80();
	virtual int vfunc81();
	virtual datamap_t * vfunc82();
	char m_pad0004[0x46c - 0x4];
};
