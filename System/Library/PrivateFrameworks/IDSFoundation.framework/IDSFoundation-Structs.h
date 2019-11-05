/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct IDSTCPLinkCounter_ {
	unsigned long long _totalBytesSent;
	unsigned long long _totalPacketsSent;
	unsigned long long _totalBytesReceived;
	unsigned long long _totalPacketsReceived;
} IDSTCPLinkCounter_;

typedef struct {
	unsigned short field1;
	unsigned short field2;
	unsigned short field3;
	unsigned short field4;
	unsigned short field5;
} SCD_Struct_ID2;

typedef struct {
	char* field1;
	unsigned short field2;
	int field3;
	unsigned short field4[12];
	long long field5;
	unsigned char field6;
	unsigned short field7;
	unsigned char field8;
	BOOL field9;
	BOOL field10;
	unsigned short field11;
	SCD_Struct_ID2 field12;
	BOOL field13;
	unsigned field14;
} SCD_Struct_ID3;

typedef struct {
	char* field1;
	unsigned long long field2;
	long long field3;
	long long field4;
	unsigned field5;
	BOOL field6;
	BOOL field7;
	BOOL field8;
	BOOL field9;
	BOOL field10;
	BOOL field11;
	unsigned field12;
	sockaddr_storage field13;
	sockaddr_storage field14;
	unsigned short field15;
	int field16;
	SCD_Struct_ID3 field17[8];
	char field18;
	char field19;
	int field20;
	double field21;
	unsigned long long field22;
	unsigned char field23[0];
} SCD_Struct_ID4;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct tagIDSQRSendInfoList* tagIDSQRSendInfoListRef;

typedef struct IDSNAT64PrefixCache_* IDSNAT64PrefixCache_Ref;

typedef struct IDSSimpleUInt16List {
	unsigned long long listSize;
	unsigned long long itemCount;
	unsigned short items;
} IDSSimpleUInt16List;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct sockaddr_storage {
	unsigned char ss_len;
	unsigned char ss_family;
	6c __ss_pad1;
	long long __ss_align;
	112c __ss_pad2;
} sockaddr_storage;

typedef struct IDSGLAttrBinaryData_ {
	int len;
	1024C data;
} IDSGLAttrBinaryData_;

typedef struct IDSGlobalLinkAttribute {
	unsigned short type;
	unsigned short len;
	/*function pointer*/void* value;
	sockaddr_storage ss;
	unsigned short u16;
	unsigned u32;
	unsigned long long u64;
	IDSGLAttrBinaryData_) binaryData;
} IDSGlobalLinkAttribute;

typedef struct StunBinaryData {
	int len;
	1472C data;
} StunBinaryData;

typedef struct StunErrorCode {
	int errorClass;
	int errorNumber;
	128C errorReason;
	int len;
} StunErrorCode;

typedef struct StunUnknownAttribute {
	int count;
	20S unknowAttributes;
} StunUnknownAttribute;

typedef struct IDSStunAttribute {
	unsigned short type;
	unsigned short len;
	unsigned short valueType;
	BOOL encrypted;
	/*function pointer*/void* value;
	sockaddr_storage ss;
	unsigned char u8;
	unsigned short u16;
	unsigned u32;
	unsigned long long u64;
	StunBinaryData binaryData;
	StunErrorCode errorCode;
	StunUnknownAttribute) unknownAttribute;
} IDSStunAttribute;

typedef struct _CCCryptor* CCCryptorRef;

typedef struct {
	char* field1;
	unsigned long long field2;
	long long field3;
	long long field4;
	unsigned field5;
	BOOL field6;
	BOOL field7;
	BOOL field8;
	BOOL field9;
	BOOL field10;
	BOOL field11;
	unsigned field12;
	SCD_Struct_ID3 field13;
	sockaddr_storage field14;
	unsigned short field15;
	int field16;
	sockaddr_storage field17[8];
	char field18;
	char field19;
	int field20;
	double field21;
	unsigned long long field22;
	unsigned char field23[0];
} SCD_Struct_ID19;

typedef struct _SecMPFullIdentity* SecMPFullIdentityRef;

typedef struct _SecMPPublicIdentity* SecMPPublicIdentityRef;

typedef struct {
	int length;
	unsigned char data[12];
} SCD_Struct_ID22;

typedef struct __SecKey* SecKeyRef;

typedef struct {
	char* field1;
	char* field2;
	char* field3;
	char* field4;
	BOOL field5;
} SCD_Struct_ID24;

