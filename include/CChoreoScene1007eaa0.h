// CChoreoScene1007eaa0: the choreography scene object as far as its text export goes.
// Placeholder class name of the function family around 0x1007eaa0; the real class is not known yet.
#pragma once

class CChoreoScene1007eaa0
{
public:
	void sub_1007eaa0(const char *pszFile, void *pEvents);	// writes the scene as a text file: nothing without events; otherwise a header line with the event count, then every event of the list (a vector: memory at +0, count at +0xc) that passes the check is saved through sub_1007c600 relative to the earliest start time, and the buffer is written to the file (ret 8)
};
