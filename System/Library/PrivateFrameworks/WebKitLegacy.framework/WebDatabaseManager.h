/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WebDatabaseManager : NSObject
+(void)removeEmptyDatabaseFiles;
+(id)sharedWebDatabaseManager;
+(void)scheduleEmptyDatabaseRemoval;
-(id)init;
-(id)origins;
-(id)databasesWithOrigin:(id)arg1 ;
-(id)detailsForDatabase:(id)arg1 withOrigin:(id)arg2 ;
-(void)deleteAllDatabases;
-(BOOL)deleteOrigin:(id)arg1 ;
-(BOOL)deleteDatabase:(id)arg1 withOrigin:(id)arg2 ;
-(void)deleteAllIndexedDatabases;
-(void)setIDBPerOriginQuota:(unsigned long long)arg1 ;
@end

