// RecvTable: a client network table (Source's dt_recv.h). BEGIN_RECV_TABLE defines one per table as
// DT_<name>::g_RecvTable, constructed empty; the table's init function fills it with Construct(props, count, name).
#pragma once

class RecvTable;
class RecvProp;
class CRecvDecoder;

// A prop's type on the wire (dt_common.h); RecvProp::m_RecvType holds it.
enum SendPropType
{
	DPT_Int = 0,
	DPT_Float,
	DPT_Vector,
	DPT_String,
	DPT_Array,	// an array of the base types
	DPT_DataTable,
	DPT_NUMSendPropTypes
};

#define SIZEOF_IGNORE -1

// A value as it comes off the wire.
class DVariant
{
public:
	union
	{
		float m_Float;
		long m_Int;
		char *m_pString;
		void *m_pData;
		float m_Vector[3];
	};
	SendPropType m_Type;
};

// What a receive proxy is given: the prop, the value, the array element and the object.
class CRecvProxyData
{
public:
	const RecvProp *m_pRecvProp;
	DVariant m_Value;
	int m_iElement;
	int m_ObjectID;
};

typedef void (*RecvVarProxyFn)(const CRecvProxyData *pData, void *pStruct, void *pOut);
typedef void (*ArrayLengthRecvProxyFn)(void *pStruct, int objectID, int currentArrayLength);
typedef void (*DataTableRecvVarProxyFn)(void **pOut, void *pData, int objectID);

// One prop of a table, 13 dwords (0x34): the helpers below fill one and return it by value (RecvProp::RecvProp
// sets the fields at these offsets).
class RecvProp
{
public:
	RecvProp();

	char *m_pVarName;				// +0x00
	SendPropType m_RecvType;		// +0x04
	int m_Flags;					// +0x08
	int m_StringBufferSize;			// +0x0c
	bool m_bInsideArray;			// +0x10
	RecvProp *m_pArrayProp;			// +0x14, arrays only
	ArrayLengthRecvProxyFn m_ArrayLengthProxy;	// +0x18, arrays only
	RecvVarProxyFn m_ProxyFn;		// +0x1c
	DataTableRecvVarProxyFn m_DataTableProxyFn;	// +0x20, data tables only
	RecvTable *m_pDataTable;		// +0x24, data tables only
	int m_Offset;					// +0x28
	int m_ElementStride;			// +0x2c
	int m_nElements;				// +0x30
};

class RecvTable
{
public:
	RecvTable();
	RecvTable(RecvProp *pProps, int nProps, char *pNetTableName);
	~RecvTable();

	void Construct(RecvProp *pProps, int nProps, char *pNetTableName);

	RecvProp *m_pProps;
	int m_nProps;
	CRecvDecoder *m_pDecoder;
	char *m_pNetTableName;
	bool m_bInitialized;
	bool m_bInMainList;
};

// The receive proxies of dt_recv.cpp: each stores the wire value into the variable.
void RecvProxy_FloatToFloat(const CRecvProxyData *pData, void *pStruct, void *pOut);
void RecvProxy_VectorToVector(const CRecvProxyData *pData, void *pStruct, void *pOut);
void RecvProxy_Int32ToInt8(const CRecvProxyData *pData, void *pStruct, void *pOut);
void RecvProxy_Int32ToInt16(const CRecvProxyData *pData, void *pStruct, void *pOut);
void RecvProxy_Int32ToInt32(const CRecvProxyData *pData, void *pStruct, void *pOut);
void RecvProxy_StringToString(const CRecvProxyData *pData, void *pStruct, void *pOut);

// A data table's proxy: where the sub-object is (Static: the struct itself; Pointer: what it points to).
void DataTableRecvProxy_StaticDataTable(void **pOut, void *pData, int objectID);
void DataTableRecvProxy_PointerDataTable(void **pOut, void *pData, int objectID);

// The prop helpers BEGIN_RECV_TABLE's entries call.
RecvProp RecvPropFloat(char *pVarName, int offset, int sizeofVar = SIZEOF_IGNORE, int flags = 0,
					   RecvVarProxyFn varProxy = RecvProxy_FloatToFloat);
RecvProp RecvPropVector(char *pVarName, int offset, int sizeofVar = SIZEOF_IGNORE, int flags = 0,
						RecvVarProxyFn varProxy = RecvProxy_VectorToVector);
RecvProp RecvPropInt(char *pVarName, int offset, int sizeofVar = SIZEOF_IGNORE, int flags = 0,
					 RecvVarProxyFn varProxy = 0);	// 0: the Int32To* proxy of the variable's size
RecvProp RecvPropString(char *pVarName, int offset, int bufferSize, int flags = 0,
						RecvVarProxyFn varProxy = RecvProxy_StringToString);
RecvProp RecvPropDataTable(char *pVarName, int offset, int flags, RecvTable *pTable,
						   DataTableRecvVarProxyFn varProxy = DataTableRecvProxy_StaticDataTable);
RecvProp InternalRecvPropArray(const int elementCount, const int elementStride, char *pName,
							   ArrayLengthRecvProxyFn proxy);

// cl_dll's recvproxy.cpp: props with a fixed proxy.
void RecvProxy_IntToEHandle(const CRecvProxyData *pData, void *pStruct, void *pOut);
RecvProp RecvPropTime(char *pVarName, int offset, int sizeofVar = SIZEOF_IGNORE);
RecvProp RecvPropPredictableId(char *pVarName, int offset, int sizeofVar = SIZEOF_IGNORE);
RecvProp RecvPropEHandle(char *pVarName, int offset, int sizeofVar = SIZEOF_IGNORE);
