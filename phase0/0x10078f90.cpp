extern "C" __declspec(dllimport) void Plat_Free(void* p);
class CMemBlock { public: void* m_pMemory; int m_nSize; int m_nHandle; void Purge(); };
void CMemBlock::Purge()
{
    if (m_nHandle != -1)
    {
        if (m_pMemory)
        {
            Plat_Free(m_pMemory);
            m_pMemory = 0;
        }
        m_nSize = 0;
    }
}
