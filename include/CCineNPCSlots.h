// CCineNPCSlots: the virtual table of an AI NPC / scripted sequence viewed as a plain list of slots up to slot 585, used to
// call a slot of an object whose class does not model its vtable (CCineNPC and the NPC at +0x94 of an entity).
#pragma once

#define CCS_V(n) virtual void f##n();
#define CCS_V10(p) CCS_V(p##0) CCS_V(p##1) CCS_V(p##2) CCS_V(p##3) CCS_V(p##4) CCS_V(p##5) CCS_V(p##6) CCS_V(p##7) CCS_V(p##8) CCS_V(p##9)
#define CCS_V100(p) CCS_V10(p##0) CCS_V10(p##1) CCS_V10(p##2) CCS_V10(p##3) CCS_V10(p##4) CCS_V10(p##5) CCS_V10(p##6) CCS_V10(p##7) CCS_V10(p##8) CCS_V10(p##9)

class CCineNPCSlots
{
public:
	CCS_V100(a) CCS_V100(b)
	CCS_V10(c0) CCS_V10(c1)
	virtual int slot220(int a, void *pSearcher, int b);	// the activator / search context handed to the entity list's name search
	CCS_V(c221) CCS_V(c222) CCS_V(c223) CCS_V(c224) CCS_V(c225) CCS_V(c226) CCS_V(c227) CCS_V(c228) CCS_V(c229)
	CCS_V10(c3) CCS_V10(c4) CCS_V10(c5) CCS_V10(c6) CCS_V10(c7) CCS_V10(c8) CCS_V10(c9)
	CCS_V100(d)
	CCS_V10(e0) CCS_V10(e1) CCS_V10(e2) CCS_V10(e3) CCS_V10(e4) CCS_V10(e5) CCS_V(e460) CCS_V(e461) CCS_V(e462) CCS_V(e463) virtual int slot464(); CCS_V(e465) CCS_V(e466) CCS_V(e467) CCS_V(e468) CCS_V(e469) CCS_V10(e7)
	CCS_V(e480) CCS_V(e481)
	virtual int slot482(int a);	// asked of the NPC with the value slot 585 returns: 1 accepts, 2 accepts as a fallback
	CCS_V(e483) CCS_V(e484) CCS_V(e485) CCS_V(e486) CCS_V(e487) CCS_V(e488) CCS_V(e489)
	CCS_V10(g49) CCS_V10(g50) CCS_V10(g51) CCS_V10(g52) CCS_V10(g53) CCS_V10(g54) CCS_V10(g55) CCS_V10(g56) CCS_V10(g57)
	CCS_V(g580) CCS_V(g581) CCS_V(g582) CCS_V(g583) CCS_V(g584)
	virtual int slot585(int a);
};
