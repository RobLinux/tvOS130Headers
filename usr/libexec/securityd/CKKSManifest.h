/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/CKKSCKRecordHolder.h>

@class NSData, NSString, NSArray, NSMutableDictionary, NSDictionary, CKKSManifestInjectionPointHelper;

@interface CKKSManifest : CKKSCKRecordHolder {

	NSData* _derData;
	NSData* _digestValue;
	unsigned long long _generationCount;
	NSString* _signerID;
	NSString* _zoneName;
	NSArray* _leafRecordIDs;
	NSArray* _peerManifestIDs;
	NSMutableDictionary* _currentItemsDict;
	NSDictionary* _futureData;
	NSDictionary* _signaturesDict;
	NSDictionary* _schema;
	CKKSManifestInjectionPointHelper* _helper;

}

@property (nonatomic,readonly) NSString * zoneName;                                  //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,readonly) NSArray * leafRecordIDs;                              //@synthesize leafRecordIDs=_leafRecordIDs - In the implementation block
@property (nonatomic,readonly) NSArray * peerManifestIDs;                            //@synthesize peerManifestIDs=_peerManifestIDs - In the implementation block
@property (nonatomic,readonly) NSDictionary * currentItems;                          //@synthesize currentItemsDict=_currentItemsDict - In the implementation block
@property (nonatomic,readonly) NSDictionary * futureData;                            //@synthesize futureData=_futureData - In the implementation block
@property (nonatomic,readonly) NSDictionary * signatures;                            //@synthesize signaturesDict=_signaturesDict - In the implementation block
@property (nonatomic,readonly) NSDictionary * schema;                                //@synthesize schema=_schema - In the implementation block
@property (nonatomic,retain) NSString * signerID;                                    //@synthesize signerID=_signerID - In the implementation block
@property (nonatomic,retain) CKKSManifestInjectionPointHelper * helper;              //@synthesize helper=_helper - In the implementation block
@property (nonatomic,readonly) NSData * digestValue; 
@property (nonatomic,readonly) unsigned long long generationCount;                   //@synthesize generationCount=_generationCount - In the implementation block
+(id)sqlTable;
+(id)tryFromDatabaseWhere:(id)arg1 error:(id*)arg2 ;
+(id)fromDatabaseRow:(id)arg1 ;
+(id)sqlColumns;
+(BOOL)shouldSyncManifests;
+(BOOL)shouldEnforceManifests;
+(id)latestTrustedManifestForZone:(id)arg1 error:(id*)arg2 ;
+(id)digestValueForLeafRecords:(id)arg1 ;
+(id)signatureOperation;
+(void)performWithAccountInfo:(/*^block*/id)arg1 ;
+(id)manifestForZone:(id)arg1 peerID:(id)arg2 error:(id*)arg3 ;
+(id)manifestForRecordName:(id)arg1 error:(id*)arg2 ;
+(id)manifestForPendingManifest:(id)arg1 ;
+(unsigned long long)greatestKnownGenerationCount;
+(id)whereClauseForRecordName:(id)arg1 ;
+(void)initialize;
+(id)digestForData:(id)arg1 ;
+(void)loadDefaults;
-(id)sqlValues;
-(id)whereClauseToFindSelf;
-(id)initWithCKRecord:(id)arg1 ;
-(id)CKRecordName;
-(id)ckRecordType;
-(id)updateCKRecord:(id)arg1 zoneID:(id)arg2 ;
-(void)setFromCKRecord:(id)arg1 ;
-(BOOL)matchesCKRecord:(id)arg1 ;
-(id)derData;
-(void)clearDigest;
-(BOOL)validateItem:(id)arg1 withError:(id*)arg2 ;
-(BOOL)itemUUIDExistsInManifest:(id)arg1 ;
-(BOOL)validateCurrentItem:(id)arg1 withError:(id*)arg2 ;
-(id)initWithDigestValue:(id)arg1 zone:(id)arg2 generationCount:(unsigned long long)arg3 leafRecordIDs:(id)arg4 peerManifestIDs:(id)arg5 currentItems:(id)arg6 futureData:(id)arg7 signatures:(id)arg8 signerID:(id)arg9 schema:(id)arg10 helper:(id)arg11 ;
-(id)initWithDigestValue:(id)arg1 zone:(id)arg2 generationCount:(unsigned long long)arg3 leafRecordIDs:(id)arg4 peerManifestIDs:(id)arg5 currentItems:(id)arg6 futureData:(id)arg7 signatures:(id)arg8 signerID:(id)arg9 schema:(id)arg10 ;
-(id)initWithDigestValue:(id)arg1 zone:(id)arg2 generationCount:(unsigned long long)arg3 leafRecordIDs:(id)arg4 peerManifestIDs:(id)arg5 currentItems:(id)arg6 futureData:(id)arg7 signatures:(id)arg8 signerID:(id)arg9 schema:(id)arg10 encodedRecord:(id)arg11 ;
-(id)defaultHelperForSignerID:(id)arg1 ;
-(id)signatureDictFromDERData:(id)arg1 error:(id*)arg2 ;
-(id)derDataFromSignatureDict:(id)arg1 error:(id*)arg2 ;
-(id)peerManifestsFromDERData:(id)arg1 error:(id*)arg2 ;
-(id)derDataFromPeerManifests:(id)arg1 error:(id*)arg2 ;
-(id)futureDataDictFromRecord:(id)arg1 withSchema:(id)arg2 ;
-(BOOL)updateWithRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)contentsAreEqualToManifest:(id)arg1 ;
-(id)leafRecordForID:(id)arg1 ;
-(id)leafRecordForItemUUID:(id)arg1 ;
-(id)leafRecords;
-(void)nilAllIvars;
-(NSArray *)leafRecordIDs;
-(NSArray *)peerManifestIDs;
-(NSDictionary *)futureData;
-(NSString *)signerID;
-(void)setSignerID:(NSString *)arg1 ;
-(unsigned long long)generationCount;
-(NSDictionary *)schema;
-(NSString *)zoneName;
-(CKKSManifestInjectionPointHelper *)helper;
-(NSDictionary *)signatures;
-(void)setHelper:(CKKSManifestInjectionPointHelper *)arg1 ;
-(BOOL)validateWithError:(id*)arg1 ;
-(NSDictionary *)currentItems;
-(NSData *)digestValue;
@end
