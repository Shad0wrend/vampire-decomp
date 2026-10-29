// CChoreoScene1007e970: the choreography scene object as far as its event search goes (placeholder class name of the
// function at 0x1007e970; the real class is not known yet). It owns a vector of actors (pointer array at +0x14,
// count at +0x20); an actor owns channels, a channel owns events.
#pragma once

struct CChoreoSceneEvent1007e970
{
	int sub_100029c8();	// the event's type (stub 0x100029c8)
	const char *sub_10075c50();	// the event's text parameter (stub 0x10006fdc)
	int sub_10076e70(int a);	// stub 0x1000dfdf: the event's follow-up check, nonzero when the event qualifies
};

struct CChoreoSceneChannel1007e970
{
	int sub_10073540();	// the number of events (stub 0x10001a87)
	CChoreoSceneEvent1007e970 *sub_10073560(int index);	// the event with that index (stub 0x10006c3f)
	void sub_100736b0(CChoreoSceneEvent1007e970 *pEvent);	// removes an event from the channel's list (stub 0x1000e241)
};

struct CChoreoSceneChannel1007e970;

struct CChoreoSceneActor1007e970
{
	const char *sub_10072d90();	// the actor's name (stub 0x10008a99, this + 0x14)
	void sub_10073020(CChoreoSceneChannel1007e970 *pChannel);	// removes a channel from the actor's list (stub 0x1000e935)
	int sub_10072eb0();	// the number of channels (stub 0x1000ba96)
	CChoreoSceneChannel1007e970 *sub_10072ed0(int index);	// the channel with that index (stub 0x10008d55)
};

class CChoreoScene1007e970
{
public:
	char m_pad0000[0x14];
	CChoreoSceneActor1007e970 **m_ppActors;	// 0x14
	char m_pad0018[0x20 - 0x18];
	int m_nActors;	// 0x20

	CChoreoSceneActor1007e970 *sub_1007a170(const char *pszName);	// the actor with that name (case-insensitive), 0 when none
	int sub_1007e970(const char *pszText, int a);	// the first speech event (type 5) of any actor / channel whose text contains pszText and which passes the follow-up check with a: its check result; 0 when there is none
};
