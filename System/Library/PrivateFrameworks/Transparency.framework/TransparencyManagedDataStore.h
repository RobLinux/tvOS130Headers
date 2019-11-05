/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Transparency/Transparency-Structs.h>
@class NSManagedObjectContext, NSPersistentContainer;

@interface TransparencyManagedDataStore : NSObject {

	os_unfair_lock_s contextLock;
	NSManagedObjectContext* _context;
	NSPersistentContainer* _persistentContainer;
	Aq _sequenceId;

}

@property (retain) NSPersistentContainer * persistentContainer;              //@synthesize persistentContainer=_persistentContainer - In the implementation block
@property (retain) NSManagedObjectContext * context;                         //@synthesize context=_context - In the implementation block
@property (assign) Aq sequenceId;                                            //@synthesize sequenceId=_sequenceId - In the implementation block
+(id)serializeLoggableDatas:(id)arg1 ;
+(id)deserializeLoggableDatas:(id)arg1 error:(id*)arg2 ;
+(void)reportCoreDataEventForEntity:(id)arg1 write:(BOOL)arg2 code:(long long)arg3 underlyingError:(id)arg4 ;
-(id)init;
-(id)bundleURL;
-(NSManagedObjectContext *)context;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(void)deleteObject:(id)arg1 ;
-(BOOL)persistWithError:(id*)arg1 ;
-(void)setPersistentContainer:(NSPersistentContainer *)arg1 ;
-(NSPersistentContainer *)persistentContainer;
-(BOOL)clearState:(id*)arg1 ;
-(id)createRequest;
-(BOOL)logSTHMetricsForApplication:(id)arg1 error:(id*)arg2 ;
-(id)createSignedMutationTimestamp:(id)arg1 mutationMs:(unsigned long long)arg2 receiptTime:(double)arg3 ;
-(BOOL)persistAndRefaultObject:(id)arg1 error:(id*)arg2 ;
-(void)refaultObject:(id)arg1 ;
-(id)createRequestFailure;
-(id)fetchRequestsWithPendingResponses:(id)arg1 error:(id*)arg2 ;
-(id)fetchUrisWithPendingSMTs:(id)arg1 error:(id*)arg2 ;
-(id)fetchPendingSMTsForUri:(id)arg1 uri:(id)arg2 accountId:(id)arg3 error:(id*)arg4 ;
-(id)fetchSMTsWithUnverifiedSignature:(id)arg1 error:(id*)arg2 ;
-(void)garbageCollectRequests:(id)arg1 olderThan:(id)arg2 error:(id*)arg3 ;
-(BOOL)logMetricsForApplication:(id)arg1 error:(id*)arg2 ;
-(Aq)sequenceId;
-(long long)currentSequenceId:(id*)arg1 ;
-(void)setSequenceId:(Aq)arg1 ;
-(id)signedTreeHeadFailures:(id*)arg1 ;
-(id)signedMutationTimestampsFailures:(id*)arg1 ;
-(id)requestFailures:(id*)arg1 ;
-(id)treeHeads:(id*)arg1 ;
-(id)signedMutationTimestamps:(id*)arg1 ;
-(id)requests:(id*)arg1 ;
-(unsigned long long)countOutstandingRequestsForApplication:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countTotalRequestsForApplication:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countOutstandingSMTsForApplication:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countTotalSMTsForApplication:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countOutstandingSTHsForApplication:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countTotalSTHsForApplication:(id)arg1 error:(id*)arg2 ;
-(BOOL)logRequestMetricsForApplication:(id)arg1 error:(id*)arg2 ;
-(BOOL)logSMTMetricsForApplication:(id)arg1 error:(id*)arg2 ;
-(id)createRequestWithUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 serverData:(id)arg4 syncedData:(id)arg5 queryResponse:(id)arg6 type:(unsigned long long)arg7 error:(id*)arg8 ;
-(id)fetchRequestForUUID:(id)arg1 error:(id*)arg2 ;
-(id)fetchRequestsForURI:(id)arg1 error:(id*)arg2 ;
-(id)fetchRequestForUUID:(id)arg1 uri:(id)arg2 error:(id*)arg3 ;
-(id)fetchCompletedRequests:(id)arg1 olderThan:(id)arg2 error:(id*)arg3 ;
-(id)createSignedMutationTimestampsFailure;
-(id)createTreeHead;
-(id)createSignedTreeHeadFailure;
-(void)deleteCompletedRequest:(id)arg1 ;
@end

