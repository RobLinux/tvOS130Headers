/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <CoreHAP/NSCopying.h>
#import <CoreHAP/NSSecureCoding.h>

@class NSNumber, NSArray;

@interface HAPMetadataConstraints : HMFObject <NSCopying, NSSecureCoding> {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _stepValue;
	NSNumber* _minLength;
	NSNumber* _maxLength;
	NSArray* _validValues;

}

@property (nonatomic,retain) NSNumber * minimumValue;              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) NSNumber * maximumValue;              //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,retain) NSNumber * stepValue;                 //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,retain) NSNumber * minLength;                 //@synthesize minLength=_minLength - In the implementation block
@property (nonatomic,retain) NSNumber * maxLength;                 //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,copy) NSArray * validValues;                  //@synthesize validValues=_validValues - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)maxLength;
-(void)setMaxLength:(NSNumber *)arg1 ;
-(NSNumber *)minLength;
-(NSNumber *)minimumValue;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(NSNumber *)maximumValue;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(void)setMinLength:(NSNumber *)arg1 ;
-(NSNumber *)stepValue;
-(NSArray *)validValues;
-(void)setStepValue:(NSNumber *)arg1 ;
-(void)setValidValues:(NSArray *)arg1 ;
-(BOOL)isEqualToMetadataConstraints:(id)arg1 ;
@end

