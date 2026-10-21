	bool sub_1027e140(const Vector *pMove, int mask);	// "TryMove": traces from the absolute origin (slot 217) by pMove with mask (sub_101cd110); with the whole way free (and, for entities with flag bit 11, a point contents check at the end point) moves there (slot 216), runs PhysicsTouchTriggers(0) and returns true
	void sub_100a53d0(int a);	// CBaseEntity::PhysicsTouchTriggers (stub 0x10005bcd), called directly
	void sub_10274ca0();	// finds the eye offset (+0x5d60) from the model (sub_100952d0 / GetEyePosition); without one warns and uses the half-sum of the collision mins / maxs scaled by 0.75; then stores it as the view offset (sub_1009f380)
	void *sub_100952d0(int a);	// CBaseAnimating::GetModelPtr (stub 0x10013d8b), called directly
	const char *sub_1009f200();	// CBaseEntity::GetDebugName (stub 0x1000ea11), called directly
	void sub_1009f380(const Vector *pVec);	// CBaseEntity::SetViewOffset (stub 0x1000?), called directly
	char m_pad_eye[0x5d60 - 4];
	Vector m_vecEyeOffset;	// 0x5d60
