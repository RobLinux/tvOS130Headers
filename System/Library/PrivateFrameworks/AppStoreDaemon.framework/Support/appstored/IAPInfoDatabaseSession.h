/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/SQLiteDatabaseSession.h>

@class SQLiteConnection, NSString;

@interface IAPInfoDatabaseSession : NSObject <SQLiteDatabaseSession> {

	SQLiteConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SQLiteConnection * connection;                 //@synthesize connection=_connection - In the implementation block
+(id)_lastUpdatedPropertyForAccountID:(id)arg1 ;
+(id)_serverRevisionPropertyForAccountID:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(SQLiteConnection *)connection;
-(id)_fetchResultsWithPredicate:(id)arg1 ;
-(id)_valueForDatabaseProperty:(id)arg1 withError:(id*)arg2 ;
-(id)getIAPsForAccountID:(id)arg1 withError:(id*)arg2 ;
-(id)getIAPsForActiveAccountWithAdamIDs:(id)arg1 forAccountID:(id)arg2 withError:(id*)arg3 ;
-(id)getIAPsForActiveAccountWithAppAdamIDs:(id)arg1 forAccountID:(id)arg2 withError:(id*)arg3 ;
-(id)lastUpdatedTimestampForAccountID:(id)arg1 withError:(id*)arg2 ;
-(id)revisionForAccountID:(id)arg1 withError:(id*)arg2 ;
@end

