/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWObjectRingBuffer : NSObject {

	id* _objects;
	SCD_Struct_BW2* _times;
	int _capacity;
	int _count;
	int _oldest;
	BOOL _ascending;
	BOOL _expectAscending;

}

@property (nonatomic,readonly) int count;                       //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) int capacity;                      //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) BOOL ascending;                  //@synthesize ascending=_ascending - In the implementation block
@property (assign,nonatomic) BOOL expectAscending;              //@synthesize expectAscending=_expectAscending - In the implementation block
+(void)initialize;
-(id)description;
-(void)dealloc;
-(id)initWithCapacity:(int)arg1 ;
-(int)count;
-(void)clear;
-(id)firstObject;
-(id)lastObject;
-(BOOL)ascending;
-(int)capacity;
-(void)setCapacity:(int)arg1 ;
-(void)_enumerateObjectsStartingAtOffset:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_checkAscendingInsertAt:(int)arg1 object:(id)arg2 forTime:(SCD_Struct_BW2)arg3 ;
-(int)_findClosestOffsetToTimestamp:(SCD_Struct_BW2)arg1 ;
-(void)_reverseEnumerateObjectsStartingAtOffset:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateObjectsStartingAt:(SCD_Struct_BW2)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_forceAscendingTo:(BOOL)arg1 ;
-(void)appendObject:(id)arg1 forTime:(SCD_Struct_BW2)arg2 ;
-(SCD_Struct_BW2)firstTime;
-(SCD_Struct_BW2)lastTime;
-(id)getObjectForIndex:(int)arg1 ;
-(SCD_Struct_BW2)getTimeForIndex:(int)arg1 ;
-(void)reverseEnumerateObjectsStartingAt:(SCD_Struct_BW2)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)extractTimeRangeFrom:(SCD_Struct_BW2)arg1 until:(SCD_Struct_BW2)arg2 into:(id)arg3 times:(id)arg4 ;
-(void)flushEntriesEarlierThan:(SCD_Struct_BW2)arg1 ;
-(BOOL)expectAscending;
-(void)setExpectAscending:(BOOL)arg1 ;
@end

