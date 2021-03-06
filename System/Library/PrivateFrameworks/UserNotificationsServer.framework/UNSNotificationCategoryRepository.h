/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class UNSKeyedDataStoreRepository, UNSKeyedObservable, NSObject;

@interface UNSNotificationCategoryRepository : NSObject {

	UNSKeyedDataStoreRepository* _repository;
	UNSKeyedObservable* _observable;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)performMigration;
-(void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_notificationSourcesDidUninstall:(id)arg1 ;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_performMigration;
-(id)categoryWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)allBundleIdentifiers;
-(id)initWithDirectory:(id)arg1 librarian:(id)arg2 repositoryProtectionStrategy:(id)arg3 ;
-(void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg1 ;
-(long long)_maxObjectsPerKey;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg1 ;
-(id)categoriesForBundleIdentifier:(id)arg1 ;
-(id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2 ;
-(id)_queue_categoriesForBundleIdentifier:(id)arg1 ;
-(void)_queue_setCategories:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setCategories:(id)arg1 forBundleIdentifier:(id)arg2 ;
@end

