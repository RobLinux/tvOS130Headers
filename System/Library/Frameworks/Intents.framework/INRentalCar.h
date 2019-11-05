/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INJSONSerializable.h>
#import <Intents/NSCopying.h>
#import <Intents/NSSecureCoding.h>

@class NSString;

@interface INRentalCar : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _rentalCompanyName;
	NSString* _type;
	NSString* _make;
	NSString* _model;
	NSString* _rentalCarDescription;

}

@property (nonatomic,copy,readonly) NSString * rentalCompanyName;                 //@synthesize rentalCompanyName=_rentalCompanyName - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * make;                              //@synthesize make=_make - In the implementation block
@property (nonatomic,copy,readonly) NSString * model;                             //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSString * rentalCarDescription;              //@synthesize rentalCarDescription=_rentalCarDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)model;
-(NSString *)make;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)rentalCarDescription;
-(NSString *)rentalCompanyName;
-(id)initWithRentalCompanyName:(id)arg1 type:(id)arg2 make:(id)arg3 model:(id)arg4 rentalCarDescription:(id)arg5 ;
@end

