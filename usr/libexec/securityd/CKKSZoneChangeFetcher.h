/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:53 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <securityd/securityd-Structs.h>
@class CKContainer, CKKSReachabilityTracker, NSError, CKKSNearFutureScheduler, NSString, NSOperationQueue, NSObject, NSMapTable, CKKSFetchAllRecordZoneChangesOperation, CKKSResultOperation, NSMutableSet, CKKSZoneChangeFetchDependencyOperation;

@interface CKKSZoneChangeFetcher : NSObject {

	BOOL _newRequests;
	Class _fetchRecordZoneChangesOperationClass;
	CKContainer* _container;
	CKKSReachabilityTracker* _reachabilityTracker;
	NSError* _lastCKFetchError;
	CKKSNearFutureScheduler* _fetchScheduler;
	NSString* _name;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _clientMap;
	CKKSFetchAllRecordZoneChangesOperation* _currentFetch;
	CKKSResultOperation* _currentProcessResult;
	NSMutableSet* _currentFetchReasons;
	NSMutableSet* _apnsPushes;
	CKKSZoneChangeFetchDependencyOperation* _successfulFetchDependency;
	CKKSResultOperation* _holdOperation;

}

@property (retain) NSString * name;                                                                 //@synthesize name=_name - In the implementation block
@property (retain) NSOperationQueue * operationQueue;                                               //@synthesize operationQueue=_operationQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                              //@synthesize queue=_queue - In the implementation block
@property (retain) NSError * lastCKFetchError;                                                      //@synthesize lastCKFetchError=_lastCKFetchError - In the implementation block
@property (retain) NSMapTable * clientMap;                                                          //@synthesize clientMap=_clientMap - In the implementation block
@property (retain) CKKSFetchAllRecordZoneChangesOperation * currentFetch;                           //@synthesize currentFetch=_currentFetch - In the implementation block
@property (retain) CKKSResultOperation * currentProcessResult;                                      //@synthesize currentProcessResult=_currentProcessResult - In the implementation block
@property (retain) NSMutableSet * currentFetchReasons;                                              //@synthesize currentFetchReasons=_currentFetchReasons - In the implementation block
@property (retain) NSMutableSet * apnsPushes;                                                       //@synthesize apnsPushes=_apnsPushes - In the implementation block
@property (assign) BOOL newRequests;                                                                //@synthesize newRequests=_newRequests - In the implementation block
@property (retain) CKKSZoneChangeFetchDependencyOperation * successfulFetchDependency;              //@synthesize successfulFetchDependency=_successfulFetchDependency - In the implementation block
@property (retain) CKKSResultOperation * holdOperation;                                             //@synthesize holdOperation=_holdOperation - In the implementation block
@property (readonly) Class fetchRecordZoneChangesOperationClass;                                    //@synthesize fetchRecordZoneChangesOperationClass=_fetchRecordZoneChangesOperationClass - In the implementation block
@property (readonly) CKContainer * container;                                                       //@synthesize container=_container - In the implementation block
@property (retain) CKKSReachabilityTracker * reachabilityTracker;                                   //@synthesize reachabilityTracker=_reachabilityTracker - In the implementation block
@property (retain) CKKSNearFutureScheduler * fetchScheduler;                                        //@synthesize fetchScheduler=_fetchScheduler - In the implementation block
-(CKKSReachabilityTracker *)reachabilityTracker;
-(Class)fetchRecordZoneChangesOperationClass;
-(NSMutableSet *)apnsPushes;
-(void)setApnsPushes:(NSMutableSet *)arg1 ;
-(void)setReachabilityTracker:(CKKSReachabilityTracker *)arg1 ;
-(id)requestSuccessfulFetch:(NSString*)arg1 ;
-(id)initWithContainer:(id)arg1 fetchClass:(Class)arg2 reachabilityTracker:(id)arg3 ;
-(id)requestSuccessfulFetchDueToAPNS:(id)arg1 ;
-(void)holdFetchesUntil:(id)arg1 ;
-(id)requestSuccessfulFetchForManyReasons:(id)arg1 ;
-(NSError *)lastCKFetchError;
-(id)requestSuccessfulFetchForManyReasons:(id)arg1 apns:(id)arg2 ;
-(void)maybeCreateNewFetchOnQueue;
-(void)maybeCreateNewFetch;
-(void)_onqueueCreateNewFetch;
-(id)createSuccesfulFetchDependency;
-(void)setLastCKFetchError:(NSError *)arg1 ;
-(CKKSNearFutureScheduler *)fetchScheduler;
-(void)setFetchScheduler:(CKKSNearFutureScheduler *)arg1 ;
-(CKKSFetchAllRecordZoneChangesOperation *)currentFetch;
-(void)setCurrentFetch:(CKKSFetchAllRecordZoneChangesOperation *)arg1 ;
-(CKKSResultOperation *)currentProcessResult;
-(void)setCurrentProcessResult:(CKKSResultOperation *)arg1 ;
-(NSMutableSet *)currentFetchReasons;
-(void)setCurrentFetchReasons:(NSMutableSet *)arg1 ;
-(BOOL)newRequests;
-(void)setNewRequests:(BOOL)arg1 ;
-(CKKSZoneChangeFetchDependencyOperation *)successfulFetchDependency;
-(void)setSuccessfulFetchDependency:(CKKSZoneChangeFetchDependencyOperation *)arg1 ;
-(CKKSResultOperation *)holdOperation;
-(void)setHoldOperation:(CKKSResultOperation *)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(CKContainer *)container;
-(void)setName:(NSString *)arg1 ;
-(void)cancel;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)registerClient:(id)arg1 ;
-(NSMapTable *)clientMap;
-(void)setClientMap:(NSMapTable *)arg1 ;
@end
