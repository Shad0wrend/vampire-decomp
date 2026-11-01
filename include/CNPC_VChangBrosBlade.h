// CNPC_VChangBrosBlade: declared by pcdecomp transplant for 0x1036ecf0 from CNPC_Crow (0x10359240);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

class CNPC_VChangBrosBlade
{
public:
	int vfunc546(int arg);
	void vfunc420();	// "CNPC_VChangBrosBlade::NPCInit": scope trace (no entity name), sets the dword at +0x66b8 to 0, then CNPC_VChangBros::vfunc420 (stub 0x10014867)
	void sub_10014867();	// CNPC_VChangBros::vfunc420, called directly
public:
	typedef datamap_t *Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
	int vfunc451();
	bool vfunc452();
	int vfunc580();
};
