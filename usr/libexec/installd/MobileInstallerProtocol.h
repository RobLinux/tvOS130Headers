/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:42 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/installd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MobileInstallerProtocol
@required
-(void)installURL:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3;
-(void)uninstallIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3;
-(void)lookupUninstalledWithOptions:(id)arg1 completion:(/*^block*/id)arg2;
-(void)clearUninstalledIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3;
-(void)lookupSystemAppStateWithOptions:(id)arg1 completion:(/*^block*/id)arg2;
-(void)updateSystemAppStateForIdentifier:(id)arg1 appState:(int)arg2 completion:(/*^block*/id)arg3;
-(void)fetchInstalledDeveloperAppsWithMountPath:(id)arg1 completion:(/*^block*/id)arg2;
-(void)enumerateInstalledAppsWithOptions:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchDiskUsageForIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3;
-(void)processRestoredContainerWithIdentifier:(id)arg1 ofType:(long long)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(void)registerSafeHarborAtPath:(id)arg1 forIdentifier:(id)arg2 ofType:(long long)arg3 withOptions:(id)arg4 completion:(/*^block*/id)arg5;
-(void)removeSafeHarborForIdentifier:(id)arg1 ofType:(long long)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4;
-(void)listSafeHarborsOfType:(long long)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3;
-(void)checkCapabilities:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3;
-(void)updateSinfForLSWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(/*^block*/id)arg4;
-(void)updateiTunesMetadataForLSWithIdentifier:(id)arg1 options:(id)arg2 plistData:(id)arg3 completion:(/*^block*/id)arg4;
-(void)updatePlaceholderMetadataForApp:(id)arg1 installType:(unsigned long long)arg2 failureReason:(unsigned long long)arg3 underlyingError:(id)arg4 failureSource:(unsigned long long)arg5 completion:(/*^block*/id)arg6;
-(void)getAppMetadataForApp:(id)arg1 completion:(/*^block*/id)arg2;
-(void)snapshotWKAppInCompanionAppID:(id)arg1 toURL:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(void)setSystemAppMigrationComplete:(/*^block*/id)arg1;
-(void)waitForSystemAppMigratorToComplete:(/*^block*/id)arg1;
-(void)systemAppMigratorHasCompleted:(/*^block*/id)arg1;
-(void)dieForTesting;

@end

