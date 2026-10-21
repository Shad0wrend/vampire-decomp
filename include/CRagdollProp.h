// class CRagdollProp; modelled as a direct CBaseEntity subclass (the real bases are not declared).
// Slots 134..269 are placeholders that keep the slot number of vfunc270 right.
#pragma once

#include "CBaseEntity.h"

struct CRagdollPropDamageInfo	// a CTakeDamageInfo (0x4c bytes), copied by value
{
	int m_data[14];
	unsigned int m_bitsDamageType;	// 0x38
	int m_tail[4];
};

class CRagdollProp : public CBaseEntity
{
public:
	virtual void vfunc103();	// slot 103 "CRagdollProp::Spawn": slot 104, the model (slot 9 / 105), the bone setup (CBaseAnimating::vfunc257 with mask 0xfffc) handed to the ragdoll initialiser sub_101554a0, clears the fields at +0xd54 / +0xd60, +0xd64 = -1, a zero float at +0xdc becomes 0.1f, marks the collision property at +0x270 dirty and sets or clears flag bit 2 of +0x438 by bit 5 of +0x204
	virtual void vfunc134();
	virtual void vfunc135(); virtual void vfunc136(); virtual void vfunc137(); virtual void vfunc138(); virtual void vfunc139();
	virtual void vfunc140(); virtual void vfunc141(); virtual void vfunc142(const CRagdollPropDamageInfo *pInfo); virtual void vfunc143(); virtual void vfunc144();	// slot 142 "CRagdollProp::OnTakeDamage"-like: forwards a copy of the info with bit 23 of the damage type added to the entity of the handle at +0xd5c when it is live, else the base implementation
	virtual void vfunc145(); virtual void vfunc146(); virtual void vfunc147(); virtual void vfunc148(); virtual void vfunc149();
	virtual void vfunc150(); virtual void vfunc151(); virtual void vfunc152(); virtual void vfunc153(); virtual void vfunc154();
	virtual void vfunc155(); virtual void vfunc156(); virtual void vfunc157(); virtual void vfunc158x(); virtual void vfunc159();
	virtual void vfunc160(); virtual void vfunc161(); virtual void vfunc162(); virtual void vfunc163(); virtual void vfunc164();
	virtual void vfunc165(); virtual void vfunc166(); virtual void vfunc167(); virtual void vfunc168x(); virtual void vfunc169();
	virtual void vfunc170(); virtual void vfunc171(); virtual void vfunc172(); virtual void vfunc173(); virtual void vfunc174();
	virtual void vfunc175(); virtual void vfunc176(); virtual void vfunc177(); virtual void vfunc178(); virtual void vfunc179();
	virtual void vfunc180(); virtual void vfunc181(const float *pPosition, const float *pAngles, const float *pVelocity);	// slot 181 "CRagdollProp::Teleport": moves the ragdoll bodies along with the entity: remembers the inverse of the root body's matrix, runs the base Teleport (sub_100ada20), and carries every other body to the new transform
	virtual void vfunc182(); virtual void vfunc183(); virtual void vfunc184();
	virtual void vfunc185(); virtual void vfunc186(); virtual void vfunc187(); virtual void vfunc188(); virtual void vfunc189();
	virtual void vfunc190(); virtual void vfunc191(); virtual void vfunc192(); virtual void vfunc193(); virtual void vfunc194x();
	virtual void vfunc195x(); virtual void vfunc196(); virtual void vfunc197(); virtual void vfunc198(); virtual void vfunc199();
	virtual void vfunc200(); virtual void vfunc201(); virtual void vfunc202(); virtual void vfunc203(); virtual void vfunc204();
	virtual void vfunc205(); virtual void vfunc206(); virtual void vfunc207(); virtual void vfunc208(); virtual void vfunc209();
	virtual void vfunc210(); virtual void vfunc211(); virtual void vfunc212(); virtual void vfunc213(); virtual void vfunc214();
	virtual void vfunc215(); virtual void vfunc216(float *p); virtual void vfunc217(); virtual void vfunc218(); virtual void vfunc219();
	virtual void vfunc220(); virtual void vfunc221(); virtual void vfunc222(); virtual void vfunc223(); virtual void vfunc224();
	virtual void vfunc225(); virtual void vfunc226(); virtual void vfunc227(); virtual void vfunc228(); virtual void vfunc229();
	virtual void vfunc230(); virtual void vfunc231(); virtual void vfunc232(); virtual void vfunc233(); virtual void vfunc234();
	virtual void vfunc235(); virtual void vfunc236(); virtual void vfunc237(); virtual void vfunc238(); virtual void vfunc239();
	virtual void vfunc240(); virtual void vfunc241(); virtual void vfunc242(); virtual void vfunc243(); virtual void vfunc244();
	virtual void vfunc245(); virtual void vfunc246(); virtual void vfunc247(); virtual void vfunc248(); virtual void vfunc249();
	virtual void vfunc250(); virtual void vfunc251(); virtual void vfunc252(); virtual void vfunc253(); virtual void vfunc254();
	virtual void vfunc255(); virtual void vfunc256();
	virtual void vfunc257(void *pMatrices, int unused);	// slot 257: marks the bones the ragdoll layout (count at +0x730, bone table at +0xa08) handles and runs sub_10138600(parent matrix, matrix) for every other bone of the model (matrices are 0x30 bytes each)
	virtual void vfunc258(); virtual void vfunc259();
	virtual void vfunc260(); virtual void vfunc261(); virtual void vfunc262(); virtual void vfunc263(); virtual void vfunc264();
	virtual int vfunc265(const char *pszBone);	// slot 265: the dword at +0x744 + 0x18 * i of the first ragdoll element i (index table at +0xa08, count at +0x730) that belongs to the studio bone named pszBone or to its nearest parent bone; the first element's dword when nothing matches
	virtual void vfunc266(); virtual void vfunc267(); virtual void vfunc268(); virtual void vfunc269();
	virtual void vfunc270(int a, int b);
	virtual void vfunc271(int a, int b);
	void *sub_100952d0(int a);	// CBaseAnimating::sub_100952d0 (GetModelPtr-like), called directly
	CRagdollProp *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10014317();	// as in CPhysForce (transplant)
	void sub_101563b0(int index, int unused);	// stores the origin/angles of body `index` at +0x2a0 / +0x2fa (dwords); index 0 also calls slot 216 and PhysicsTouchTriggers
	CRagdollProp *sub_101550d0();	// as in CKeepUpright (transplant)
	void sub_100ada20(const float *pPosition, const float *pAngles, const float *pVelocity);	// CBaseEntity::Teleport (slot 181, stub 0x10012cf1), called directly
	int vfunc124();	// slot 124 "CRagdollProp::DrawDebugTextOverlays": the base's line offset, plus one line ("Mass: %.2f kg / %.2f lb (%s)") when the text overlay bit (byte at +0x224) is set and the physics object at +0x36c exists
	int sub_10096100();	// CBaseAnimating::vfunc124 (stub 0x10007d97), called directly
	void sub_101554a0(const float *pOrigin, int a, const float *pAngles, void *pBones, void *pName, int b, int bStatic, int c);	// ragdoll initialiser (stub 0x100062a8)
};
