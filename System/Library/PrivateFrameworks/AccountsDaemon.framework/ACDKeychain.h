/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ACDKeychain : NSObject
+(BOOL)canAccessPasswordsWithPolicy:(id)arg1 ;
+(id)passwordForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(void)updateItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(void)addItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 passwordData:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(BOOL)removeItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(id)keychainDeletedAccounts;
+(BOOL)removeTombstoneForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 extension:(id)arg4 error:(id*)arg5 ;
+(BOOL)updateSyncItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 extension:(id)arg5 error:(id*)arg6 ;
+(BOOL)addSyncItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 extension:(id)arg5 error:(id*)arg6 ;
+(void)_migrateKeychainItemIfNecessary:(id)arg1 ;
+(id)_knownMigratedKeychainItems;
+(BOOL)_isKnownMigratedKeychainItem:(id)arg1 ;
+(void)_addKnownMigratedKeychainItem:(id)arg1 ;
@end

