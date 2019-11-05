/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSSearchableIndexInterface <NSObject>
@optional
-(void)flushUserActivities;
-(void)performDataMigrationWithTimeout:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_issueCommand:(id)arg1 searchContext:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
-(void)userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 options:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1 protectionClass:(id)arg2 shouldGC:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 personaID:(id)arg5;
-(void)checkInWithIndexID:(unsigned long long)arg1 protectionClass:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)_forceAppWithBundleID:(id)arg1 toPerformJob:(id)arg2;
-(void)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5;
-(void)fetchAttributes:(id)arg1 protectionClass:(id)arg2 bundleID:(id)arg3 identifiers:(id)arg4 includeParents:(BOOL)arg5 completionHandler:(/*^block*/id)arg6;

@required
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(/*^block*/id)arg7;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(long long)arg7 completionHandler:(/*^block*/id)arg8;
-(void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5;
-(void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5;
-(void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5;
-(void)provideDataForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)provideFileURLForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5 options:(long long)arg6;
-(void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 personaID:(id)arg3 options:(long long)arg4 items:(id)arg5 itemsText:(id)arg6 itemsHTML:(id)arg7 clientState:(id)arg8 clientStateName:(id)arg9 deletes:(id)arg10 completionHandler:(/*^block*/id)arg11;

@end

