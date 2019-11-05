/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASDSoftwareUpdateProtocol <NSObject>
@required
-(void)clearExpiredUpdateHistoryWithCompletionBlock:(/*^block*/id)arg1;
-(void)getUpdatesWithCompletionBlock:(/*^block*/id)arg1;
-(void)hideApplicationBadgeForPendingUpdates;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)arg1;
-(void)removeUpdateBulletins;
-(void)showApplicationBadgeForPendingUpdates;
-(void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)reloadFromServerInBackgroundWithCompletionBlock:(/*^block*/id)arg1;
-(void)refreshUpdateCountWithCompletionBlock:(/*^block*/id)arg1;
-(void)reloadManagedUpdatesWithCompletionBlock:(/*^block*/id)arg1;
-(void)updateAllWithOrder:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)getManagedUpdatesWithCompletionBlock:(/*^block*/id)arg1;
-(void)getUpdatesMetricsWithCompletionBlock:(/*^block*/id)arg1;
-(void)getUpdatesIncludingMetricsWithCompletionBlock:(/*^block*/id)arg1;
-(void)showApplicationUpdatesBulletin;
-(void)updateAllWithJobResults:(/*^block*/id)arg1;
-(void)migrateUpdatesStoreWithCompletionBlock:(/*^block*/id)arg1;

@end
