/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/SQLiteDatabaseStore.h>

@interface AppInstallsDatabaseStore : SQLiteDatabaseStore
+(id)sharedInstance;
+(id)storeDescriptor;
+(BOOL)createOrMigrateStoreUsingSchema:(id)arg1 ;
-(void)readUsingSession:(/*^block*/id)arg1 ;
-(void)modifyUsingTransaction:(/*^block*/id)arg1 ;
-(void)scheduleUsingTransaction:(/*^block*/id)arg1 ;
-(void)_applyChangesForChangeset:(id)arg1 transaction:(id)arg2 ;
-(void)_applyExternalChangesForChangeset:(id)arg1 ;
-(id)_restoresForPIDS:(id)arg1 ;
@end

