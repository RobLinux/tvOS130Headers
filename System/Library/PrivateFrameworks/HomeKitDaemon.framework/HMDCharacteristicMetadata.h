/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HomeKitDaemon/NSSecureCoding.h>
#import <HomeKitDaemon/HMFDumpState.h>

@class NSNumber, NSString, NSArray;

@interface HMDCharacteristicMetadata : HMFObject <NSSecureCoding, HMFDumpState> {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _stepValue;
	NSNumber* _maxLength;
	NSString* _format;
	NSString* _units;
	NSString* _manufacturerDescription;
	NSArray* _validValues;

}

@property (nonatomic,readonly) NSNumber * minimumValue;                              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumValue;                              //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,readonly) NSNumber * stepValue;                                 //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maxLength;                                 //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,copy,readonly) NSString * format;                               //@synthesize format=_format - In the implementation block
@property (nonatomic,copy,readonly) NSString * units;                                //@synthesize units=_units - In the implementation block
@property (nonatomic,copy,readonly) NSString * manufacturerDescription;              //@synthesize manufacturerDescription=_manufacturerDescription - In the implementation block
@property (nonatomic,copy) NSArray * validValues;                                    //@synthesize validValues=_validValues - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)isValidMetadata:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)format;
-(NSNumber *)maxLength;
-(NSString *)units;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(id)dumpState;
-(NSNumber *)stepValue;
-(NSString *)manufacturerDescription;
-(NSArray *)validValues;
-(void)setValidValues:(NSArray *)arg1 ;
-(id)initWithCharacteristicMetadata:(id)arg1 ;
-(BOOL)configureWithCharacteristicMetadata:(id)arg1 ;
-(id)_descriptionDetails;
-(id)getMetadataDictionary;
@end

