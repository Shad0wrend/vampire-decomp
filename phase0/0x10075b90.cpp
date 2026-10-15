class CThing { public: int m_type; char pad[0x194]; bool m_special; void SetType(int type); };
void CThing::SetType(int type)
{
    m_type = type;
    if (type == 5 || type == 11)
        m_special = true;
    else
        m_special = false;
}
