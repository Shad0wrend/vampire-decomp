#pragma once
struct tdesc_t { int a; const char *fieldName; };
class CPredictionCopy {
public:
	char m_u0[0x15];
	bool m_bDescribeFields;
	char m_u16[2];
	tdesc_t *m_pCurrentField;
	const char *m_pCurrentClassName;
	char m_u20[4];
	bool m_bShouldReport;
	char m_u25[3];
	int m_nErrorCount;
	char m_u2c[4];
	void *m_FieldCompareFunc;
	void ReportFieldsDiffer(const char *fmt, ...);
	char sub_10123470();
	int sub_10123cd0(const char *, const char *);
};
