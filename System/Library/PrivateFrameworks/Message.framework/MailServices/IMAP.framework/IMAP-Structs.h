/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFWeakReferenceHolder, NSString, NSData, NSArray, NSDate, NSDictionary, MFIMAPFetchResult;

typedef struct {
	MFWeakReferenceHolder* holder;
	void delegate;
	unsigned shouldHandleUntaggedResponse : 1;
	unsigned didReceiveResponse : 1;
	unsigned didFinishSelect : 1;
	unsigned didDisconnect : 1;
	unsigned didBeginBodyLoad : 1;
	unsigned didReceiveMoreBodyData : 1;
	unsigned didFinishBodyDataLoad : 1;
	unsigned bodyDataReadSize : 1;
	unsigned setServerMessageCount : 1;
	unsigned setHighestModSequence : 1;
	unsigned willRemoveDelegation : 1;
	unsigned shouldStartIdle : 1;
} SCD_Struct_MF0;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	int field1;
	id field2;
	id field3;
	unsigned long long field4;
	id field5;
} SCD_Struct_MF2;

typedef struct {
	unsigned field1;
	unsigned field2;
} SCD_Struct_MF3;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	NSString* section;
	unsigned long long startOffset;
	NSData* sectionData;
} SCD_Struct_MF5;

typedef struct {
	unsigned long long messageFlags;
	NSArray* customFlags;
} SCD_Struct_MF6;

typedef union {
	NSArray* envelope;
	NSDate* internalDate;
	unsigned long long messageSize;
	NSArray* bodyStructure;
	SCD_Struct_MF5 bodySectionInfo;
	unsigned uid;
	unsigned long long uniqueRemoteId;
	SCD_Struct_MF6 flags;
} SCD_Union_MF7;

typedef struct {
	unsigned uid;
	NSArray* flags;
	int internalDate;
	unsigned size;
} SCD_Struct_MF8;

typedef struct {
	NSArray* trueFlags;
	NSArray* falseFlags;
	__CFArray uids;
} SCD_Struct_MF9;

typedef struct {
	__CFArray srcUids;
	__CFArray dstUids;
	NSString* destinationMailbox;
} SCD_Struct_MF10;

typedef union {
	SCD_Struct_MF9 store;
	SCD_Struct_MF8 append;
	SCD_Struct_MF10 copy;
} SCD_Union_MF11;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	id field1;
	id field2;
	_ field3;
	_ field4;
	void* field5;
	_ field6;
	_ field7;
	void* field8;
	_ field9;
	_ field10;
	void* field11;
	unsigned field12;
	unsigned field13;
	int field14;
	id field15;
} SCD_Struct_MF13;

typedef struct {
	int responseCode;
	id responseInfoAndOrUserData;
} SCD_Struct_MF14;

typedef struct {
	NSString* mailboxName;
	NSDictionary* entries;
} SCD_Struct_MF15;

typedef struct {
	unsigned long long mailboxAttributes;
	id separatorAndOrMboxName;
	id extraAttributes;
	 NSArray;
} SCD_Struct_MF16;

typedef struct {
	unsigned long long number;
	NSArray* items;
	unsigned long long modSeqNumber;
} SCD_Struct_MF17;

typedef struct {
	NSString* mailboxName;
	NSArray* quotaRootNames;
} SCD_Struct_MF18;

typedef struct {
	NSString* uids;
	MFIMAPFetchResult* flagsFetchResult;
	unsigned change : 1;
} SCD_Struct_MF19;

typedef struct {
	NSArray* private;
	NSArray* public;
	NSArray* shared;
} SCD_Struct_MF20;

typedef union IMAPResponseData {
	SCD_Struct_MF14 basic;
	NSArray* capabilities;
	unsigned long long number;
	NSArray* flags;
	SCD_Struct_MF15 status;
	NSArray* searchResults;
	SCD_Struct_MF16 list;
	SCD_Struct_MF17 fetch;
	SCD_Struct_MF18 quotaRoot;
	SCD_Struct_MF18 quota;
	SCD_Struct_MF19 uidFlags;
	NSDictionary* serverInfo;
	SCD_Struct_MF20 namespace;
	SCD_Struct_MF18 other;
} IMAPResponseData;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	BOOL field5;
	id field6;
	id field7;
	id field8;
	id field9;
	unsigned field10;
	unsigned field11;
} SCD_Struct_MF22;

