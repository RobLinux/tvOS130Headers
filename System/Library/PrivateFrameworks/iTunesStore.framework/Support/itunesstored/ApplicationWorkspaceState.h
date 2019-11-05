/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@interface ApplicationWorkspaceState : SSSQLiteEntity
+(id)databaseTable;
+(BOOL)incompleteNotificationForInstallingDownload:(long long)arg1 bundleIdentifier:(id)arg2 ;
+(BOOL)incompleteNotificationForFailedDownload:(long long)arg1 bundleIdentifier:(id)arg2 ;
+(BOOL)incompleteNotificationForCanceledDownload:(long long)arg1 bundleIdentifier:(id)arg2 ;
+(BOOL)_completeNotification:(id)arg1 bundleIdentifier:(id)arg2 ;
+(BOOL)_incompleteNotification:(id)arg1 forDownload:(long long)arg2 bundleIdentifier:(id)arg3 ;
+(BOOL)completeNotificationForCanceledBundleIdentifier:(id)arg1 ;
+(BOOL)completeNotificationForFailedBundleIdentifier:(id)arg1 ;
+(BOOL)completeNotificationForInstallingBundleIdentifier:(id)arg1 ;
+(BOOL)deleteIncompleteNotification:(id)arg1 forBundleIdentifier:(id)arg2 ;
@end

