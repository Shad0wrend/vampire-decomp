// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100624e0 size=0x1e
#include "CStealth.h"

// VC6 writes CStealth's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CStealth *pcd_emit_100624e0() { return new CStealth; }

// TARGET: ??_GCStealth@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10062500 size=0x110
#include "CStealth.h"
// TARGET: ??1CStealth@@UAE@XZ
CStealth::~CStealth()
{
	CBasePanel::sub_101a9ff0(0);
	if (m_p1b0) {
		delete m_p1b0;
		for (int i = 0; i < 5; i++)
			if (m_arr1b4[i]) delete m_arr1b4[i];
		if (m_p1c8) delete m_p1c8;
	}
	if (m_p1d0) delete m_p1d0;
	if (m_p1d4) delete m_p1d4;
	if (m_p1d8) delete m_p1d8;
	if (m_p1dc) delete m_p1dc;
	if (m_p1e0) delete m_p1e0;
	if (m_p1e4) delete m_p1e4;
	for (int j = 0; j < 4; j++)
		if (m_arr1e8[j]) delete m_arr1e8[j];
	if (m_p1fc) delete m_p1fc;
	if (m_p200) delete m_p200;
	if (m_p204) delete m_p204;
}
// END FUNCTION

// FUNCTION: 0x10063580 size=0x1
#include "CStealth.h"
void CStealth::vfunc97()
{
}
// END FUNCTION
