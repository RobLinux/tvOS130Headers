/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/IAPInfoDatabaseSession.h>
#import <appstored/SQLiteDatabaseTransaction.h>

@class NSString, SQLiteConnection;

@interface IAPInfoDatabaseTransaction : IAPInfoDatabaseSession <SQLiteDatabaseTransaction>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SQLiteConnection * connection; 
-(BOOL)setRevision:(id)arg1 forAccountID:(id)arg2 withError:(id*)arg3 ;
-(BOOL)setLastUpdatedTimestamp:(id)arg1 forAccountID:(id)arg2 withError:(id*)arg3 ;
-(BOOL)_setValue:(id)arg1 forDatabaseProperty:(id)arg2 withError:(id*)arg3 ;
-(BOOL)deleteIAPs:(id)arg1 forAccountID:(id)arg2 withError:(id*)arg3 ;
-(BOOL)insertIAPs:(id)arg1 forAccountID:(id)arg2 withError:(id*)arg3 ;
-(BOOL)removeAllIAPsWithError:(id*)arg1 ;
-(BOOL)removeAllIAPsForAccountID:(id)arg1 withError:(id*)arg2 ;
@end

