#pragma once
struct tdesc_t { int a; const char *fieldName; int m_8; int m_c; short m_10; unsigned short m_Flags; };
class CPredictionCopy {
public:
	char m_u0[0x14];
	bool m_bErrorCheck;
	bool m_bDescribeFields;
	char m_u16[2];
	tdesc_t *m_pCurrentField;
	const char *m_pCurrentClassName;
	char m_u20[4];
	bool m_bShouldReport;
	bool m_bReport;
	char m_u26[2];
	int m_nErrorCount;
	char m_u2c[4];
	void *m_FieldCompareFunc;
	void ReportFieldsDiffer(const char *fmt, ...);
	char sub_10123470();
	int sub_10123bd0(const float *outvalue, const float *invalue, int count);
	int sub_10123cd0(const char *, const char *);
};
