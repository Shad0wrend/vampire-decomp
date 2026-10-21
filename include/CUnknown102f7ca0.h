// CUnknown102f7ca0: the AI network debug / editing display (real name not yet known); its debug flags are at +8
// (0x10000000 = the display is locked to an editing view).
#pragma once

class CUnknown102f7ca0
{
public:
	char m_pad0000[8];
	unsigned int m_nDebugFlags;	// 0x08

	void sub_102f7ca0();	// builds the on-screen text of the AI network display ("Displaying:" with the selected hull name, then "Editing:" with the link / move mode when the engine says the editor is on) and sends it as a text message at (0.8, 0.8)
};
