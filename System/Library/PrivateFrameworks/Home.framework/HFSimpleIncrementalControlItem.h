/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFControlItem.h>

@class NSString, NSNumber;

@interface HFSimpleIncrementalControlItem : HFControlItem {

	NSString* _incrementalCharacteristicType;

}

@property (nonatomic,copy,readonly) NSString * incrementalCharacteristicType;              //@synthesize incrementalCharacteristicType=_incrementalCharacteristicType - In the implementation block
@property (nonatomic,readonly) NSNumber * minValue; 
@property (nonatomic,readonly) NSNumber * maxValue; 
@property (nonatomic,readonly) NSNumber * stepValue; 
+(Class)valueClass;
-(id)_metadata;
-(NSNumber *)maxValue;
-(NSNumber *)minValue;
-(NSNumber *)stepValue;
-(id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3 ;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(id)writeValue:(id)arg1 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(NSString *)incrementalCharacteristicType;
@end

