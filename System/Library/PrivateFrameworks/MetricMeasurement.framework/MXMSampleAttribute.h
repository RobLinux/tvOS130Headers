/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <MetricMeasurement/NSCopying.h>
#import <MetricMeasurement/NSSecureCoding.h>

@class NSString, NSNumber;

@interface MXMSampleAttribute : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	long long _valueType;
	id _value;

}

@property (nonatomic,copy,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long valueType;                       //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSNumber * numericValue; 
@property (nonatomic,copy,readonly) id value;                             //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)attributeWithName:(id)arg1 ;
+(id)attributeWithName:(id)arg1 numericValue:(id)arg2 ;
+(id)attributeWithName:(id)arg1 stringValue:(id)arg2 ;
+(id)attributeWithName:(id)arg1 valueType:(long long)arg2 ;
+(id)attributeWithName:(id)arg1 valueType:(long long)arg2 value:(id)arg3 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)value;
-(long long)valueType;
-(BOOL)isEqualTo:(id)arg1 ;
-(NSNumber *)numericValue;
-(BOOL)isEqualToAttribute:(id)arg1 ;
-(id)initWithAttributeName:(id)arg1 numericValue:(id)arg2 ;
-(id)initWithAttributeName:(id)arg1 stringValue:(id)arg2 ;
-(id)initWithAttributeName:(id)arg1 valueType:(long long)arg2 value:(id)arg3 ;
-(id)initWithAttributeName:(id)arg1 ;
-(id)initWithAttributeName:(id)arg1 valueType:(long long)arg2 ;
@end

