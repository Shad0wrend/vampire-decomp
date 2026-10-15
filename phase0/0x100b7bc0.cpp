struct Handle { unsigned long index; };
class CBaseNetworkable { public: char pad[0xc]; Handle m_h; void SetRefEHandle(const Handle& h); };
void CBaseNetworkable::SetRefEHandle(const Handle& h) { m_h.index = h.index; }
