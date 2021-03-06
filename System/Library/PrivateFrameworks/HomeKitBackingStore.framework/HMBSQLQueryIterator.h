/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class NSError, NSMutableArray, NSNumber, HMBSQLContext;

@interface HMBSQLQueryIterator : NSEnumerator {

	NSError* _error;
	NSMutableArray* _cachedResults;
	NSNumber* _currentSequence;
	HMBSQLContext* _context;
	sqlite3_stmtRef _statement;

}

@property (nonatomic,readonly) NSMutableArray * cachedResults;              //@synthesize cachedResults=_cachedResults - In the implementation block
@property (nonatomic,retain) NSNumber * currentSequence;                    //@synthesize currentSequence=_currentSequence - In the implementation block
@property (nonatomic,retain) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,__weak,readonly) HMBSQLContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) sqlite3_stmtRef statement;                     //@synthesize statement=_statement - In the implementation block
+(unsigned long long)maximumRowsPerQuery;
-(id)nextObject;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(HMBSQLContext *)context;
-(sqlite3_stmtRef)statement;
-(void)setStatement:(sqlite3_stmtRef)arg1 ;
-(NSMutableArray *)cachedResults;
-(NSNumber *)currentSequence;
-(void)setCurrentSequence:(NSNumber *)arg1 ;
-(id)initWithSQLContext:(id)arg1 statement:(sqlite3_stmtRef)arg2 initialSequence:(unsigned long long)arg3 ;
-(id)fetchRowFromStatement:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(BOOL)bindPropertiesToStatement:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
@end

