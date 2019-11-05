/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <appstored/SQLitePropertyPredicate.h>
#import <appstored/NSCopying.h>

@class SQLiteQuery, NSString, NSArray;

@interface SQLiteContainsPredicate : SQLitePropertyPredicate <NSCopying> {

	BOOL _negative;
	SQLiteQuery* _query;
	NSString* _queryProperty;
	id _values;

}

@property (getter=isNegative,nonatomic,readonly) BOOL negative;              //@synthesize negative=_negative - In the implementation block
@property (nonatomic,readonly) SQLiteQuery * query;                          //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) NSString * queryProperty;                     //@synthesize queryProperty=_queryProperty - In the implementation block
@property (nonatomic,readonly) NSArray * values;                             //@synthesize values=_values - In the implementation block
+(id)containsPredicateWithProperty:(id)arg1 values:(id)arg2 ;
+(id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3 ;
+(id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)values;
-(SQLiteQuery *)query;
-(BOOL)isNegative;
-(id)SQLForEntityClass:(Class)arg1 ;
-(NSString *)queryProperty;
-(void)applyBinding:(id)arg1 atIndex:(inout int*)arg2 ;
@end

