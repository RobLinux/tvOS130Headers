/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFTimeCondition.h>
#import <Home/HFPrimitiveTimeCondition.h>

@class NSString, NSDateComponents;

@interface HFSunriseSunsetCondition : HFTimeCondition <HFPrimitiveTimeCondition> {

	unsigned long long _comparisonType;
	NSString* _significantEvent;
	NSDateComponents* _offset;

}

@property (nonatomic,copy,readonly) NSString * significantEvent;               //@synthesize significantEvent=_significantEvent - In the implementation block
@property (nonatomic,readonly) NSDateComponents * offset;                      //@synthesize offset=_offset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
-(NSString *)description;
-(long long)compare:(id)arg1 ;
-(NSDateComponents *)offset;
-(unsigned long long)comparisonType;
-(id)initWithPredicate:(id)arg1 ;
-(NSString *)significantEvent;
-(id)initWithSignificantEvent:(id)arg1 comparisonType:(unsigned long long)arg2 ;
-(id)initWithSignificantEvent:(id)arg1 offset:(id)arg2 comparisonType:(unsigned long long)arg3 ;
@end

