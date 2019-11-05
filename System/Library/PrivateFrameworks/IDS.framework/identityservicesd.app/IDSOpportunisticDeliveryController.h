/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, IDSOpportunisticCache, IDSDAccountController;

@interface IDSOpportunisticDeliveryController : NSObject {

	NSObject*<OS_dispatch_queue> _opportunisticQueue;
	IDSOpportunisticCache* _cache;
	IDSDAccountController* _accountController;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> opportunisticQueue;              //@synthesize opportunisticQueue=_opportunisticQueue - In the implementation block
@property (nonatomic,retain) IDSOpportunisticCache * cache;                                //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) IDSDAccountController * accountController;                    //@synthesize accountController=_accountController - In the implementation block
-(id)init;
-(IDSOpportunisticCache *)cache;
-(void)setCache:(IDSOpportunisticCache *)arg1 ;
-(void)setAccountController:(IDSDAccountController *)arg1 ;
-(IDSDAccountController *)accountController;
-(id)initWithCache:(id)arg1 accountController:(id)arg2 ;
-(BOOL)diceRoll;
-(BOOL)sendOpportunisticData:(id)arg1 toDestination:(id)arg2 ;
-(void)addOpportunisticData:(id)arg1 serviceName:(id)arg2 accountUniqueID:(id)arg3 identifier:(id)arg4 options:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)removeOpportunisticDataForIdentifier:(id)arg1 serviceName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendOpportunisticDataIfNeededToDestination:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)opportunisticQueue;
-(void)setOpportunisticQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

