/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:38 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/gamed-Structs.h>
#import <gamed/GKDatabaseWriter.h>

@class GKDatabaseConnection, NSString;

@interface GKDelayedSetPlayerStatusCacheWriter : NSObject <GKDatabaseWriter> {

	GKDatabaseConnection* _connection;

}

@property (nonatomic,retain) GKDatabaseConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GKDatabaseConnection * databaseConnection; 
+(id)writerWithDatabaseConnection:(id)arg1 ;
-(void)dealloc;
-(void)setConnection:(GKDatabaseConnection *)arg1 ;
-(GKDatabaseConnection *)connection;
-(id)initWithDatabaseConnection:(id)arg1 ;
-(GKDatabaseConnection *)databaseConnection;
-(void)writeToDatabase:(sqlite3Ref)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(/*^block*/id)arg5 ;
-(void)writeResources:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)requestsInsertSQL;
-(void)bindParametersForRequestsStatement:(sqlite3_stmtRef)arg1 playerID:(id)arg2 ;
-(id)getOldStatusesSQL;
-(id)deleteOldStatusesSQL;
-(void)bindParametersForGetOldStatusesStatement:(sqlite3_stmtRef)arg1 playerID:(id)arg2 ;
-(void)bindParametersForDeleteOldStatusesStatement:(sqlite3_stmtRef)arg1 requestsRowID:(long long)arg2 ;
-(id)statusInsertSQL;
-(void)bindParametersForStatusStatement:(sqlite3_stmtRef)arg1 status:(id)arg2 requestsRowID:(long long)arg3 ;
@end

