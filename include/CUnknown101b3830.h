// CUnknown101b3830: a loader that registers model names (real name not yet known). A model name containing the
// marker "_gender" is registered twice, once with "male" and once with "female" in place of the marker.
#pragma once

class CUnknown101b3830
{
public:
	void sub_101b3770(int nKey, const char *pszName, int nGender);	// stub 0x10005826: registers one model name (gender 0 = neutral, 1 = male, 2 = female) for the key
	void sub_101b3830(int nKey, const char *pszName);	// registers the name, expanding "_gender" into the male and female variants
};
