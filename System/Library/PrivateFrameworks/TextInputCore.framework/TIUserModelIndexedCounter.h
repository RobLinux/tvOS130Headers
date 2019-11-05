/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString, NSArray, NSNumber;

@interface TIUserModelIndexedCounter : NSObject {

	NSMutableArray* _persisted;
	NSMutableArray* _current;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int bucketCount; 
@property (nonatomic,readonly) NSArray * counts; 
@property (nonatomic,readonly) NSArray * currentCounts; 
@property (nonatomic,readonly) NSNumber * count; 
-(NSString *)name;
-(NSNumber *)count;
-(id)initWithName:(id)arg1 ;
-(NSArray *)counts;
-(int)bucketCount;
-(void)setupBuckets;
-(void)doPersist:(id)arg1 forDate:(id)arg2 forInputMode:(id)arg3 forContext:(id)arg4 ;
-(NSArray *)currentCounts;
-(void)update:(int)arg1 forIndex:(int)arg2 ;
-(void)updateWithNumber:(id)arg1 forIndex:(int)arg2 ;
-(void)updateWithLoadedValue:(int)arg1 forIndex:(int)arg2 ;
-(void)updateWithLoadedNumber:(id)arg1 forIndex:(int)arg2 ;
@end

