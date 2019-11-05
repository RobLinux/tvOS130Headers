/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/CKKSGroupOperation.h>

@protocol CKKSFetchRecordZoneChangesOperation;
@class CKContainer, NSDictionary, NSMutableArray, NSSet, NSMutableDictionary, CKDatabaseOperation, CKOperationGroup, CKKSResultOperation;

@interface CKKSFetchAllRecordZoneChangesOperation : CKKSGroupOperation {

	BOOL _resync;
	BOOL _forceResync;
	BOOL _moreComing;
	Class _fetchRecordZoneChangesOperationClass;
	CKContainer* _container;
	NSDictionary* _clientMap;
	NSMutableArray* _fetchedZoneIDs;
	NSSet* _fetchReasons;
	NSSet* _apnsPushes;
	NSMutableDictionary* _modifications;
	NSMutableDictionary* _deletions;
	NSMutableDictionary* _changeTokens;
	CKDatabaseOperation*<CKKSFetchRecordZoneChangesOperation> _fetchRecordZoneChangesOperation;
	NSMutableDictionary* _allClientOptions;
	CKOperationGroup* _ckoperationGroup;
	unsigned long long _fetchedItems;
	NSMutableDictionary* _originalChangeTokens;
	CKKSResultOperation* _fetchCompletedOperation;

}

@property (retain) CKDatabaseOperation*<CKKSFetchRecordZoneChangesOperation> fetchRecordZoneChangesOperation;              //@synthesize fetchRecordZoneChangesOperation=_fetchRecordZoneChangesOperation - In the implementation block
@property (retain) NSMutableDictionary * allClientOptions;                                                                 //@synthesize allClientOptions=_allClientOptions - In the implementation block
@property (retain) CKOperationGroup * ckoperationGroup;                                                                    //@synthesize ckoperationGroup=_ckoperationGroup - In the implementation block
@property (assign) unsigned long long fetchedItems;                                                                        //@synthesize fetchedItems=_fetchedItems - In the implementation block
@property (assign) BOOL forceResync;                                                                                       //@synthesize forceResync=_forceResync - In the implementation block
@property (assign) BOOL moreComing;                                                                                        //@synthesize moreComing=_moreComing - In the implementation block
@property (retain) NSMutableDictionary * originalChangeTokens;                                                             //@synthesize originalChangeTokens=_originalChangeTokens - In the implementation block
@property (retain) CKKSResultOperation * fetchCompletedOperation;                                                          //@synthesize fetchCompletedOperation=_fetchCompletedOperation - In the implementation block
@property (readonly) Class fetchRecordZoneChangesOperationClass;                                                           //@synthesize fetchRecordZoneChangesOperationClass=_fetchRecordZoneChangesOperationClass - In the implementation block
@property (readonly) CKContainer * container;                                                                              //@synthesize container=_container - In the implementation block
@property (assign) BOOL resync;                                                                                            //@synthesize resync=_resync - In the implementation block
@property (retain) NSDictionary * clientMap;                                                                               //@synthesize clientMap=_clientMap - In the implementation block
@property (retain) NSMutableArray * fetchedZoneIDs;                                                                        //@synthesize fetchedZoneIDs=_fetchedZoneIDs - In the implementation block
@property (retain) NSSet * fetchReasons;                                                                                   //@synthesize fetchReasons=_fetchReasons - In the implementation block
@property (retain) NSSet * apnsPushes;                                                                                     //@synthesize apnsPushes=_apnsPushes - In the implementation block
@property (retain) NSMutableDictionary * modifications;                                                                    //@synthesize modifications=_modifications - In the implementation block
@property (retain) NSMutableDictionary * deletions;                                                                        //@synthesize deletions=_deletions - In the implementation block
@property (retain) NSMutableDictionary * changeTokens;                                                                     //@synthesize changeTokens=_changeTokens - In the implementation block
-(void)groupStart;
-(CKOperationGroup *)ckoperationGroup;
-(void)setCkoperationGroup:(CKOperationGroup *)arg1 ;
-(id)initWithContainer:(id)arg1 fetchClass:(Class)arg2 clients:(id)arg3 fetchReasons:(id)arg4 apnsPushes:(id)arg5 forceResync:(BOOL)arg6 ckoperationGroup:(id)arg7 ;
-(Class)fetchRecordZoneChangesOperationClass;
-(void)queryClientsForChangeTokens;
-(void)performFetch;
-(void)sendAllChangesToClients;
-(void)sendChangesToClient:(id)arg1 ;
-(void)setResync:(BOOL)arg1 ;
-(NSMutableArray *)fetchedZoneIDs;
-(void)setFetchedZoneIDs:(NSMutableArray *)arg1 ;
-(NSSet *)fetchReasons;
-(void)setFetchReasons:(NSSet *)arg1 ;
-(NSSet *)apnsPushes;
-(void)setApnsPushes:(NSSet *)arg1 ;
-(void)setDeletions:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)changeTokens;
-(void)setChangeTokens:(NSMutableDictionary *)arg1 ;
-(CKDatabaseOperation*<CKKSFetchRecordZoneChangesOperation>)fetchRecordZoneChangesOperation;
-(void)setFetchRecordZoneChangesOperation:(CKDatabaseOperation*<CKKSFetchRecordZoneChangesOperation>)arg1 ;
-(NSMutableDictionary *)allClientOptions;
-(void)setAllClientOptions:(NSMutableDictionary *)arg1 ;
-(unsigned long long)fetchedItems;
-(void)setFetchedItems:(unsigned long long)arg1 ;
-(BOOL)forceResync;
-(void)setForceResync:(BOOL)arg1 ;
-(NSMutableDictionary *)originalChangeTokens;
-(void)setOriginalChangeTokens:(NSMutableDictionary *)arg1 ;
-(CKKSResultOperation *)fetchCompletedOperation;
-(void)setFetchCompletedOperation:(CKKSResultOperation *)arg1 ;
-(id)init;
-(CKContainer *)container;
-(void)cancel;
-(BOOL)moreComing;
-(void)setMoreComing:(BOOL)arg1 ;
-(NSMutableDictionary *)modifications;
-(void)setModifications:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)deletions;
-(BOOL)resync;
-(NSDictionary *)clientMap;
-(void)setClientMap:(NSDictionary *)arg1 ;
@end

