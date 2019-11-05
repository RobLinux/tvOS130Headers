/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class UpdateMigratorConfigurationStore, NSObject, NSMutableArray;

@interface UpdateMigrator : NSObject {

	UpdateMigratorConfigurationStore* _configurationStore;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned long long _updateType;
	NSMutableArray* _migrations;

}
+(id)sharedInstance;
+(BOOL)needsMigration;
-(id)init;
-(void)dealloc;
-(BOOL)performMigration:(unsigned long long)arg1 ;
-(void)_networkTypeChangedNotification:(id)arg1 ;
-(void)_performMigration;
-(void)_queueMigrationWithConfiguration:(id)arg1 ;
-(void)_queueMigration:(id)arg1 ;
-(void)_loadBagAndPerformMigration;
-(void)_queueMigration:(id)arg1 persist:(BOOL)arg2 ;
-(void)restoreDemotedBundleIdentifiers:(id)arg1 options:(id)arg2 ;
@end

