// CCollisionTimeEntry: the 8-byte element of CCollisionEvent's vector at +8 (a handle and the time it was added).
#pragma once

struct CCollisionTimeEntry
{
	int handle;
	float time;
};
