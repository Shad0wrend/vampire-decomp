// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10123300 size=0xaf
#include <stdarg.h>
#include "CPredictionCopy.h"
extern "C" __declspec(dllimport) void Msg(const char *pMsg, ...);
extern int (*g_101e31a8)(char *, int, const char *, va_list);
void CPredictionCopy::ReportFieldsDiffer(const char *fmt, ...)
{
	if (!m_bShouldReport) return;
	++m_nErrorCount;
	if (m_bDescribeFields && m_FieldCompareFunc) return;
	const char *fieldname = "empty";
	if (m_pCurrentField) {
		fieldname = m_pCurrentField->fieldName ? m_pCurrentField->fieldName : "NULL";
	}
	va_list argptr;
	char data[4096];
	va_start(argptr, fmt);
	g_101e31a8(data, sizeof(data), fmt, argptr);
	va_end(argptr);
	if (m_nErrorCount == 1) Msg("\n");
	Msg("%03i %s::%s - %s", m_nErrorCount, m_pCurrentClassName, fieldname, data);
	m_bShouldReport = false;
}
// END FUNCTION
